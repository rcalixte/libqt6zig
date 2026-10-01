#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKADJUSTINGSCROLLAREA_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKADJUSTINGSCROLLAREA_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KAdjustingScrollArea
class VirtualKAdjustingScrollArea final : public KAdjustingScrollArea {
  public:
    // Virtual class public types (including callbacks and access types)
    using KAdjustingScrollArea_MetaObject_Callback = QMetaObject* (*)(const KAdjustingScrollArea*);
    using KAdjustingScrollArea_Metacast_Callback = void* (*)(KAdjustingScrollArea*, const char*);
    using KAdjustingScrollArea_Metacall_Callback = int (*)(KAdjustingScrollArea*, int, int, void**);
    using KAdjustingScrollArea_MinimumSizeHint_Callback = QSize* (*)(const KAdjustingScrollArea*);
    using KAdjustingScrollArea_SizeHint_Callback = QSize* (*)(const KAdjustingScrollArea*);
    using KAdjustingScrollArea_Event_Callback = bool (*)(KAdjustingScrollArea*, QEvent*);
    using KAdjustingScrollArea_FocusNextPrevChild_Callback = bool (*)(KAdjustingScrollArea*, bool);
    using KAdjustingScrollArea_ResizeEvent_Callback = void (*)(KAdjustingScrollArea*, QResizeEvent*);
    using KAdjustingScrollArea_ScrollContentsBy_Callback = void (*)(KAdjustingScrollArea*, int, int);
    using KAdjustingScrollArea_ViewportSizeHint_Callback = QSize* (*)(const KAdjustingScrollArea*);
    using KAdjustingScrollArea_SetupViewport_Callback = void (*)(KAdjustingScrollArea*, QWidget*);
    using KAdjustingScrollArea_ViewportEvent_Callback = bool (*)(KAdjustingScrollArea*, QEvent*);
    using KAdjustingScrollArea_PaintEvent_Callback = void (*)(KAdjustingScrollArea*, QPaintEvent*);
    using KAdjustingScrollArea_MousePressEvent_Callback = void (*)(KAdjustingScrollArea*, QMouseEvent*);
    using KAdjustingScrollArea_MouseReleaseEvent_Callback = void (*)(KAdjustingScrollArea*, QMouseEvent*);
    using KAdjustingScrollArea_MouseDoubleClickEvent_Callback = void (*)(KAdjustingScrollArea*, QMouseEvent*);
    using KAdjustingScrollArea_MouseMoveEvent_Callback = void (*)(KAdjustingScrollArea*, QMouseEvent*);
    using KAdjustingScrollArea_WheelEvent_Callback = void (*)(KAdjustingScrollArea*, QWheelEvent*);
    using KAdjustingScrollArea_ContextMenuEvent_Callback = void (*)(KAdjustingScrollArea*, QContextMenuEvent*);
    using KAdjustingScrollArea_DragEnterEvent_Callback = void (*)(KAdjustingScrollArea*, QDragEnterEvent*);
    using KAdjustingScrollArea_DragMoveEvent_Callback = void (*)(KAdjustingScrollArea*, QDragMoveEvent*);
    using KAdjustingScrollArea_DragLeaveEvent_Callback = void (*)(KAdjustingScrollArea*, QDragLeaveEvent*);
    using KAdjustingScrollArea_DropEvent_Callback = void (*)(KAdjustingScrollArea*, QDropEvent*);
    using KAdjustingScrollArea_KeyPressEvent_Callback = void (*)(KAdjustingScrollArea*, QKeyEvent*);
    using KAdjustingScrollArea_ChangeEvent_Callback = void (*)(KAdjustingScrollArea*, QEvent*);
    using KAdjustingScrollArea_InitStyleOption_Callback = void (*)(const KAdjustingScrollArea*, QStyleOptionFrame*);
    using KAdjustingScrollArea_DevType_Callback = int (*)(const KAdjustingScrollArea*);
    using KAdjustingScrollArea_SetVisible_Callback = void (*)(KAdjustingScrollArea*, bool);
    using KAdjustingScrollArea_HeightForWidth_Callback = int (*)(const KAdjustingScrollArea*, int);
    using KAdjustingScrollArea_HasHeightForWidth_Callback = bool (*)(const KAdjustingScrollArea*);
    using KAdjustingScrollArea_PaintEngine_Callback = QPaintEngine* (*)(const KAdjustingScrollArea*);
    using KAdjustingScrollArea_KeyReleaseEvent_Callback = void (*)(KAdjustingScrollArea*, QKeyEvent*);
    using KAdjustingScrollArea_FocusInEvent_Callback = void (*)(KAdjustingScrollArea*, QFocusEvent*);
    using KAdjustingScrollArea_FocusOutEvent_Callback = void (*)(KAdjustingScrollArea*, QFocusEvent*);
    using KAdjustingScrollArea_EnterEvent_Callback = void (*)(KAdjustingScrollArea*, QEnterEvent*);
    using KAdjustingScrollArea_LeaveEvent_Callback = void (*)(KAdjustingScrollArea*, QEvent*);
    using KAdjustingScrollArea_MoveEvent_Callback = void (*)(KAdjustingScrollArea*, QMoveEvent*);
    using KAdjustingScrollArea_CloseEvent_Callback = void (*)(KAdjustingScrollArea*, QCloseEvent*);
    using KAdjustingScrollArea_TabletEvent_Callback = void (*)(KAdjustingScrollArea*, QTabletEvent*);
    using KAdjustingScrollArea_ActionEvent_Callback = void (*)(KAdjustingScrollArea*, QActionEvent*);
    using KAdjustingScrollArea_ShowEvent_Callback = void (*)(KAdjustingScrollArea*, QShowEvent*);
    using KAdjustingScrollArea_HideEvent_Callback = void (*)(KAdjustingScrollArea*, QHideEvent*);
    using KAdjustingScrollArea_NativeEvent_Callback = bool (*)(KAdjustingScrollArea*, libqt_string, void*, intptr_t*);
    using KAdjustingScrollArea_Metric_Callback = int (*)(const KAdjustingScrollArea*, int);
    using KAdjustingScrollArea_InitPainter_Callback = void (*)(const KAdjustingScrollArea*, QPainter*);
    using KAdjustingScrollArea_Redirected_Callback = QPaintDevice* (*)(const KAdjustingScrollArea*, QPoint*);
    using KAdjustingScrollArea_SharedPainter_Callback = QPainter* (*)(const KAdjustingScrollArea*);
    using KAdjustingScrollArea_InputMethodEvent_Callback = void (*)(KAdjustingScrollArea*, QInputMethodEvent*);
    using KAdjustingScrollArea_InputMethodQuery_Callback = QVariant* (*)(const KAdjustingScrollArea*, int);
    using KAdjustingScrollArea_TimerEvent_Callback = void (*)(KAdjustingScrollArea*, QTimerEvent*);
    using KAdjustingScrollArea_ChildEvent_Callback = void (*)(KAdjustingScrollArea*, QChildEvent*);
    using KAdjustingScrollArea_CustomEvent_Callback = void (*)(KAdjustingScrollArea*, QEvent*);
    using KAdjustingScrollArea_ConnectNotify_Callback = void (*)(KAdjustingScrollArea*, QMetaMethod*);
    using KAdjustingScrollArea_DisconnectNotify_Callback = void (*)(KAdjustingScrollArea*, QMetaMethod*);
    using KAdjustingScrollArea::create;
    using KAdjustingScrollArea::destroy;
    using KAdjustingScrollArea::drawFrame;
    using KAdjustingScrollArea::focusNextChild;
    using KAdjustingScrollArea::focusPreviousChild;
    using KAdjustingScrollArea::getDecodedMetricF;
    using KAdjustingScrollArea::isSignalConnected;
    using KAdjustingScrollArea::receivers;
    using KAdjustingScrollArea::sender;
    using KAdjustingScrollArea::senderSignalIndex;
    using KAdjustingScrollArea::setViewportMargins;
    using KAdjustingScrollArea::updateMicroFocus;
    using KAdjustingScrollArea::viewportMargins;

    // Instance callback storage
    KAdjustingScrollArea_MetaObject_Callback kadjustingscrollarea_metaobject_callback = nullptr;
    KAdjustingScrollArea_Metacast_Callback kadjustingscrollarea_metacast_callback = nullptr;
    KAdjustingScrollArea_Metacall_Callback kadjustingscrollarea_metacall_callback = nullptr;
    KAdjustingScrollArea_MinimumSizeHint_Callback kadjustingscrollarea_minimumsizehint_callback = nullptr;
    KAdjustingScrollArea_SizeHint_Callback kadjustingscrollarea_sizehint_callback = nullptr;
    KAdjustingScrollArea_Event_Callback kadjustingscrollarea_event_callback = nullptr;
    KAdjustingScrollArea_FocusNextPrevChild_Callback kadjustingscrollarea_focusnextprevchild_callback = nullptr;
    KAdjustingScrollArea_ResizeEvent_Callback kadjustingscrollarea_resizeevent_callback = nullptr;
    KAdjustingScrollArea_ScrollContentsBy_Callback kadjustingscrollarea_scrollcontentsby_callback = nullptr;
    KAdjustingScrollArea_ViewportSizeHint_Callback kadjustingscrollarea_viewportsizehint_callback = nullptr;
    KAdjustingScrollArea_SetupViewport_Callback kadjustingscrollarea_setupviewport_callback = nullptr;
    KAdjustingScrollArea_ViewportEvent_Callback kadjustingscrollarea_viewportevent_callback = nullptr;
    KAdjustingScrollArea_PaintEvent_Callback kadjustingscrollarea_paintevent_callback = nullptr;
    KAdjustingScrollArea_MousePressEvent_Callback kadjustingscrollarea_mousepressevent_callback = nullptr;
    KAdjustingScrollArea_MouseReleaseEvent_Callback kadjustingscrollarea_mousereleaseevent_callback = nullptr;
    KAdjustingScrollArea_MouseDoubleClickEvent_Callback kadjustingscrollarea_mousedoubleclickevent_callback = nullptr;
    KAdjustingScrollArea_MouseMoveEvent_Callback kadjustingscrollarea_mousemoveevent_callback = nullptr;
    KAdjustingScrollArea_WheelEvent_Callback kadjustingscrollarea_wheelevent_callback = nullptr;
    KAdjustingScrollArea_ContextMenuEvent_Callback kadjustingscrollarea_contextmenuevent_callback = nullptr;
    KAdjustingScrollArea_DragEnterEvent_Callback kadjustingscrollarea_dragenterevent_callback = nullptr;
    KAdjustingScrollArea_DragMoveEvent_Callback kadjustingscrollarea_dragmoveevent_callback = nullptr;
    KAdjustingScrollArea_DragLeaveEvent_Callback kadjustingscrollarea_dragleaveevent_callback = nullptr;
    KAdjustingScrollArea_DropEvent_Callback kadjustingscrollarea_dropevent_callback = nullptr;
    KAdjustingScrollArea_KeyPressEvent_Callback kadjustingscrollarea_keypressevent_callback = nullptr;
    KAdjustingScrollArea_ChangeEvent_Callback kadjustingscrollarea_changeevent_callback = nullptr;
    KAdjustingScrollArea_InitStyleOption_Callback kadjustingscrollarea_initstyleoption_callback = nullptr;
    KAdjustingScrollArea_DevType_Callback kadjustingscrollarea_devtype_callback = nullptr;
    KAdjustingScrollArea_SetVisible_Callback kadjustingscrollarea_setvisible_callback = nullptr;
    KAdjustingScrollArea_HeightForWidth_Callback kadjustingscrollarea_heightforwidth_callback = nullptr;
    KAdjustingScrollArea_HasHeightForWidth_Callback kadjustingscrollarea_hasheightforwidth_callback = nullptr;
    KAdjustingScrollArea_PaintEngine_Callback kadjustingscrollarea_paintengine_callback = nullptr;
    KAdjustingScrollArea_KeyReleaseEvent_Callback kadjustingscrollarea_keyreleaseevent_callback = nullptr;
    KAdjustingScrollArea_FocusInEvent_Callback kadjustingscrollarea_focusinevent_callback = nullptr;
    KAdjustingScrollArea_FocusOutEvent_Callback kadjustingscrollarea_focusoutevent_callback = nullptr;
    KAdjustingScrollArea_EnterEvent_Callback kadjustingscrollarea_enterevent_callback = nullptr;
    KAdjustingScrollArea_LeaveEvent_Callback kadjustingscrollarea_leaveevent_callback = nullptr;
    KAdjustingScrollArea_MoveEvent_Callback kadjustingscrollarea_moveevent_callback = nullptr;
    KAdjustingScrollArea_CloseEvent_Callback kadjustingscrollarea_closeevent_callback = nullptr;
    KAdjustingScrollArea_TabletEvent_Callback kadjustingscrollarea_tabletevent_callback = nullptr;
    KAdjustingScrollArea_ActionEvent_Callback kadjustingscrollarea_actionevent_callback = nullptr;
    KAdjustingScrollArea_ShowEvent_Callback kadjustingscrollarea_showevent_callback = nullptr;
    KAdjustingScrollArea_HideEvent_Callback kadjustingscrollarea_hideevent_callback = nullptr;
    KAdjustingScrollArea_NativeEvent_Callback kadjustingscrollarea_nativeevent_callback = nullptr;
    KAdjustingScrollArea_Metric_Callback kadjustingscrollarea_metric_callback = nullptr;
    KAdjustingScrollArea_InitPainter_Callback kadjustingscrollarea_initpainter_callback = nullptr;
    KAdjustingScrollArea_Redirected_Callback kadjustingscrollarea_redirected_callback = nullptr;
    KAdjustingScrollArea_SharedPainter_Callback kadjustingscrollarea_sharedpainter_callback = nullptr;
    KAdjustingScrollArea_InputMethodEvent_Callback kadjustingscrollarea_inputmethodevent_callback = nullptr;
    KAdjustingScrollArea_InputMethodQuery_Callback kadjustingscrollarea_inputmethodquery_callback = nullptr;
    KAdjustingScrollArea_TimerEvent_Callback kadjustingscrollarea_timerevent_callback = nullptr;
    KAdjustingScrollArea_ChildEvent_Callback kadjustingscrollarea_childevent_callback = nullptr;
    KAdjustingScrollArea_CustomEvent_Callback kadjustingscrollarea_customevent_callback = nullptr;
    KAdjustingScrollArea_ConnectNotify_Callback kadjustingscrollarea_connectnotify_callback = nullptr;
    KAdjustingScrollArea_DisconnectNotify_Callback kadjustingscrollarea_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KAdjustingScrollArea {
        using KAdjustingScrollArea::actionEvent;
        using KAdjustingScrollArea::changeEvent;
        using KAdjustingScrollArea::childEvent;
        using KAdjustingScrollArea::closeEvent;
        using KAdjustingScrollArea::connectNotify;
        using KAdjustingScrollArea::contextMenuEvent;
        using KAdjustingScrollArea::customEvent;
        using KAdjustingScrollArea::disconnectNotify;
        using KAdjustingScrollArea::dragEnterEvent;
        using KAdjustingScrollArea::dragLeaveEvent;
        using KAdjustingScrollArea::dragMoveEvent;
        using KAdjustingScrollArea::dropEvent;
        using KAdjustingScrollArea::enterEvent;
        using KAdjustingScrollArea::focusInEvent;
        using KAdjustingScrollArea::focusOutEvent;
        using KAdjustingScrollArea::hideEvent;
        using KAdjustingScrollArea::initPainter;
        using KAdjustingScrollArea::initStyleOption;
        using KAdjustingScrollArea::inputMethodEvent;
        using KAdjustingScrollArea::keyPressEvent;
        using KAdjustingScrollArea::keyReleaseEvent;
        using KAdjustingScrollArea::leaveEvent;
        using KAdjustingScrollArea::metric;
        using KAdjustingScrollArea::mouseDoubleClickEvent;
        using KAdjustingScrollArea::mouseMoveEvent;
        using KAdjustingScrollArea::mousePressEvent;
        using KAdjustingScrollArea::mouseReleaseEvent;
        using KAdjustingScrollArea::moveEvent;
        using KAdjustingScrollArea::nativeEvent;
        using KAdjustingScrollArea::paintEvent;
        using KAdjustingScrollArea::redirected;
        using KAdjustingScrollArea::resizeEvent;
        using KAdjustingScrollArea::scrollContentsBy;
        using KAdjustingScrollArea::sharedPainter;
        using KAdjustingScrollArea::showEvent;
        using KAdjustingScrollArea::tabletEvent;
        using KAdjustingScrollArea::timerEvent;
        using KAdjustingScrollArea::viewportEvent;
        using KAdjustingScrollArea::viewportSizeHint;
        using KAdjustingScrollArea::wheelEvent;
    };

    VirtualKAdjustingScrollArea(QWidget* parent) : KAdjustingScrollArea(parent) {};
    VirtualKAdjustingScrollArea() : KAdjustingScrollArea() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kadjustingscrollarea_metaobject_callback) {
            QMetaObject* callback_ret = kadjustingscrollarea_metaobject_callback(this);
            return callback_ret;
        }
        return KAdjustingScrollArea::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kadjustingscrollarea_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kadjustingscrollarea_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KAdjustingScrollArea::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kadjustingscrollarea_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kadjustingscrollarea_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KAdjustingScrollArea::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kadjustingscrollarea_minimumsizehint_callback) {
            QSize* callback_ret = kadjustingscrollarea_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KAdjustingScrollArea::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kadjustingscrollarea_sizehint_callback) {
            QSize* callback_ret = kadjustingscrollarea_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KAdjustingScrollArea::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kadjustingscrollarea_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kadjustingscrollarea_event_callback(this, cbval1);
            return callback_ret;
        }
        return KAdjustingScrollArea::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kadjustingscrollarea_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kadjustingscrollarea_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KAdjustingScrollArea::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kadjustingscrollarea_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            kadjustingscrollarea_resizeevent_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (kadjustingscrollarea_scrollcontentsby_callback) {
            int cbval1 = dx;
            int cbval2 = dy;
            kadjustingscrollarea_scrollcontentsby_callback(this, cbval1, cbval2);
            return;
        }
        KAdjustingScrollArea::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (kadjustingscrollarea_viewportsizehint_callback) {
            QSize* callback_ret = kadjustingscrollarea_viewportsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KAdjustingScrollArea::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (kadjustingscrollarea_setupviewport_callback) {
            QWidget* cbval1 = viewport;
            kadjustingscrollarea_setupviewport_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (kadjustingscrollarea_viewportevent_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = kadjustingscrollarea_viewportevent_callback(this, cbval1);
            return callback_ret;
        }
        return KAdjustingScrollArea::viewportEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kadjustingscrollarea_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            kadjustingscrollarea_paintevent_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (kadjustingscrollarea_mousepressevent_callback) {
            QMouseEvent* cbval1 = param1;
            kadjustingscrollarea_mousepressevent_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (kadjustingscrollarea_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = param1;
            kadjustingscrollarea_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (kadjustingscrollarea_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = param1;
            kadjustingscrollarea_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::mouseDoubleClickEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (kadjustingscrollarea_mousemoveevent_callback) {
            QMouseEvent* cbval1 = param1;
            kadjustingscrollarea_mousemoveevent_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (kadjustingscrollarea_wheelevent_callback) {
            QWheelEvent* cbval1 = param1;
            kadjustingscrollarea_wheelevent_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kadjustingscrollarea_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            kadjustingscrollarea_contextmenuevent_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* param1) override {
        if (kadjustingscrollarea_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = param1;
            kadjustingscrollarea_dragenterevent_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::dragEnterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* param1) override {
        if (kadjustingscrollarea_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = param1;
            kadjustingscrollarea_dragmoveevent_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::dragMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* param1) override {
        if (kadjustingscrollarea_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = param1;
            kadjustingscrollarea_dragleaveevent_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::dragLeaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (kadjustingscrollarea_dropevent_callback) {
            QDropEvent* cbval1 = param1;
            kadjustingscrollarea_dropevent_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::dropEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kadjustingscrollarea_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            kadjustingscrollarea_keypressevent_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kadjustingscrollarea_changeevent_callback) {
            QEvent* cbval1 = param1;
            kadjustingscrollarea_changeevent_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (kadjustingscrollarea_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            kadjustingscrollarea_initstyleoption_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kadjustingscrollarea_devtype_callback) {
            int callback_ret = kadjustingscrollarea_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KAdjustingScrollArea::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kadjustingscrollarea_setvisible_callback) {
            bool cbval1 = visible;
            kadjustingscrollarea_setvisible_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kadjustingscrollarea_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kadjustingscrollarea_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KAdjustingScrollArea::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kadjustingscrollarea_hasheightforwidth_callback) {
            bool callback_ret = kadjustingscrollarea_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KAdjustingScrollArea::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kadjustingscrollarea_paintengine_callback) {
            QPaintEngine* callback_ret = kadjustingscrollarea_paintengine_callback(this);
            return callback_ret;
        }
        return KAdjustingScrollArea::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kadjustingscrollarea_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kadjustingscrollarea_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kadjustingscrollarea_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kadjustingscrollarea_focusinevent_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kadjustingscrollarea_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kadjustingscrollarea_focusoutevent_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kadjustingscrollarea_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kadjustingscrollarea_enterevent_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kadjustingscrollarea_leaveevent_callback) {
            QEvent* cbval1 = event;
            kadjustingscrollarea_leaveevent_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kadjustingscrollarea_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kadjustingscrollarea_moveevent_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kadjustingscrollarea_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kadjustingscrollarea_closeevent_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kadjustingscrollarea_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kadjustingscrollarea_tabletevent_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kadjustingscrollarea_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kadjustingscrollarea_actionevent_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kadjustingscrollarea_showevent_callback) {
            QShowEvent* cbval1 = event;
            kadjustingscrollarea_showevent_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kadjustingscrollarea_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kadjustingscrollarea_hideevent_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kadjustingscrollarea_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kadjustingscrollarea_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KAdjustingScrollArea::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kadjustingscrollarea_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kadjustingscrollarea_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KAdjustingScrollArea::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kadjustingscrollarea_initpainter_callback) {
            QPainter* cbval1 = painter;
            kadjustingscrollarea_initpainter_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kadjustingscrollarea_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kadjustingscrollarea_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KAdjustingScrollArea::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kadjustingscrollarea_sharedpainter_callback) {
            QPainter* callback_ret = kadjustingscrollarea_sharedpainter_callback(this);
            return callback_ret;
        }
        return KAdjustingScrollArea::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kadjustingscrollarea_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kadjustingscrollarea_inputmethodevent_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kadjustingscrollarea_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kadjustingscrollarea_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KAdjustingScrollArea::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kadjustingscrollarea_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kadjustingscrollarea_timerevent_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kadjustingscrollarea_childevent_callback) {
            QChildEvent* cbval1 = event;
            kadjustingscrollarea_childevent_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kadjustingscrollarea_customevent_callback) {
            QEvent* cbval1 = event;
            kadjustingscrollarea_customevent_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kadjustingscrollarea_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kadjustingscrollarea_connectnotify_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kadjustingscrollarea_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kadjustingscrollarea_disconnectnotify_callback(this, cbval1);
            return;
        }
        KAdjustingScrollArea::disconnectNotify(signal);
    }

    // Friend functions
    friend void KAdjustingScrollArea_SuperResizeEvent(KAdjustingScrollArea* self, QResizeEvent* param1);
    friend void KAdjustingScrollArea_SuperScrollContentsBy(KAdjustingScrollArea* self, int dx, int dy);
    friend QSize* KAdjustingScrollArea_SuperViewportSizeHint(const KAdjustingScrollArea* self);
    friend bool KAdjustingScrollArea_SuperViewportEvent(KAdjustingScrollArea* self, QEvent* param1);
    friend void KAdjustingScrollArea_SuperPaintEvent(KAdjustingScrollArea* self, QPaintEvent* param1);
    friend void KAdjustingScrollArea_SuperMousePressEvent(KAdjustingScrollArea* self, QMouseEvent* param1);
    friend void KAdjustingScrollArea_SuperMouseReleaseEvent(KAdjustingScrollArea* self, QMouseEvent* param1);
    friend void KAdjustingScrollArea_SuperMouseDoubleClickEvent(KAdjustingScrollArea* self, QMouseEvent* param1);
    friend void KAdjustingScrollArea_SuperMouseMoveEvent(KAdjustingScrollArea* self, QMouseEvent* param1);
    friend void KAdjustingScrollArea_SuperWheelEvent(KAdjustingScrollArea* self, QWheelEvent* param1);
    friend void KAdjustingScrollArea_SuperContextMenuEvent(KAdjustingScrollArea* self, QContextMenuEvent* param1);
    friend void KAdjustingScrollArea_SuperDragEnterEvent(KAdjustingScrollArea* self, QDragEnterEvent* param1);
    friend void KAdjustingScrollArea_SuperDragMoveEvent(KAdjustingScrollArea* self, QDragMoveEvent* param1);
    friend void KAdjustingScrollArea_SuperDragLeaveEvent(KAdjustingScrollArea* self, QDragLeaveEvent* param1);
    friend void KAdjustingScrollArea_SuperDropEvent(KAdjustingScrollArea* self, QDropEvent* param1);
    friend void KAdjustingScrollArea_SuperKeyPressEvent(KAdjustingScrollArea* self, QKeyEvent* param1);
    friend void KAdjustingScrollArea_SuperChangeEvent(KAdjustingScrollArea* self, QEvent* param1);
    friend void KAdjustingScrollArea_SuperInitStyleOption(const KAdjustingScrollArea* self, QStyleOptionFrame* option);
    friend void KAdjustingScrollArea_SuperKeyReleaseEvent(KAdjustingScrollArea* self, QKeyEvent* event);
    friend void KAdjustingScrollArea_SuperFocusInEvent(KAdjustingScrollArea* self, QFocusEvent* event);
    friend void KAdjustingScrollArea_SuperFocusOutEvent(KAdjustingScrollArea* self, QFocusEvent* event);
    friend void KAdjustingScrollArea_SuperEnterEvent(KAdjustingScrollArea* self, QEnterEvent* event);
    friend void KAdjustingScrollArea_SuperLeaveEvent(KAdjustingScrollArea* self, QEvent* event);
    friend void KAdjustingScrollArea_SuperMoveEvent(KAdjustingScrollArea* self, QMoveEvent* event);
    friend void KAdjustingScrollArea_SuperCloseEvent(KAdjustingScrollArea* self, QCloseEvent* event);
    friend void KAdjustingScrollArea_SuperTabletEvent(KAdjustingScrollArea* self, QTabletEvent* event);
    friend void KAdjustingScrollArea_SuperActionEvent(KAdjustingScrollArea* self, QActionEvent* event);
    friend void KAdjustingScrollArea_SuperShowEvent(KAdjustingScrollArea* self, QShowEvent* event);
    friend void KAdjustingScrollArea_SuperHideEvent(KAdjustingScrollArea* self, QHideEvent* event);
    friend bool KAdjustingScrollArea_SuperNativeEvent(KAdjustingScrollArea* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KAdjustingScrollArea_SuperMetric(const KAdjustingScrollArea* self, int param1);
    friend void KAdjustingScrollArea_SuperInitPainter(const KAdjustingScrollArea* self, QPainter* painter);
    friend QPaintDevice* KAdjustingScrollArea_SuperRedirected(const KAdjustingScrollArea* self, QPoint* offset);
    friend QPainter* KAdjustingScrollArea_SuperSharedPainter(const KAdjustingScrollArea* self);
    friend void KAdjustingScrollArea_SuperInputMethodEvent(KAdjustingScrollArea* self, QInputMethodEvent* param1);
    friend void KAdjustingScrollArea_SuperTimerEvent(KAdjustingScrollArea* self, QTimerEvent* event);
    friend void KAdjustingScrollArea_SuperChildEvent(KAdjustingScrollArea* self, QChildEvent* event);
    friend void KAdjustingScrollArea_SuperCustomEvent(KAdjustingScrollArea* self, QEvent* event);
    friend void KAdjustingScrollArea_SuperConnectNotify(KAdjustingScrollArea* self, const QMetaMethod* signal);
    friend void KAdjustingScrollArea_SuperDisconnectNotify(KAdjustingScrollArea* self, const QMetaMethod* signal);
};

#endif
