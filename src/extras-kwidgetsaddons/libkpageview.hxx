#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKPAGEVIEW_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKPAGEVIEW_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPageView
class VirtualKPageView final : public KPageView {
  public:
    // Virtual class public types (including callbacks and access types)
    using KPageView_MetaObject_Callback = QMetaObject* (*)(const KPageView*);
    using KPageView_Metacast_Callback = void* (*)(KPageView*, const char*);
    using KPageView_Metacall_Callback = int (*)(KPageView*, int, int, void**);
    using KPageView_CreateView_Callback = QAbstractItemView* (*)(KPageView*);
    using KPageView_ShowPageHeader_Callback = bool (*)(const KPageView*);
    using KPageView_ViewPosition_Callback = int (*)(const KPageView*);
    using KPageView_DevType_Callback = int (*)(const KPageView*);
    using KPageView_SetVisible_Callback = void (*)(KPageView*, bool);
    using KPageView_SizeHint_Callback = QSize* (*)(const KPageView*);
    using KPageView_MinimumSizeHint_Callback = QSize* (*)(const KPageView*);
    using KPageView_HeightForWidth_Callback = int (*)(const KPageView*, int);
    using KPageView_HasHeightForWidth_Callback = bool (*)(const KPageView*);
    using KPageView_PaintEngine_Callback = QPaintEngine* (*)(const KPageView*);
    using KPageView_Event_Callback = bool (*)(KPageView*, QEvent*);
    using KPageView_MousePressEvent_Callback = void (*)(KPageView*, QMouseEvent*);
    using KPageView_MouseReleaseEvent_Callback = void (*)(KPageView*, QMouseEvent*);
    using KPageView_MouseDoubleClickEvent_Callback = void (*)(KPageView*, QMouseEvent*);
    using KPageView_MouseMoveEvent_Callback = void (*)(KPageView*, QMouseEvent*);
    using KPageView_WheelEvent_Callback = void (*)(KPageView*, QWheelEvent*);
    using KPageView_KeyPressEvent_Callback = void (*)(KPageView*, QKeyEvent*);
    using KPageView_KeyReleaseEvent_Callback = void (*)(KPageView*, QKeyEvent*);
    using KPageView_FocusInEvent_Callback = void (*)(KPageView*, QFocusEvent*);
    using KPageView_FocusOutEvent_Callback = void (*)(KPageView*, QFocusEvent*);
    using KPageView_EnterEvent_Callback = void (*)(KPageView*, QEnterEvent*);
    using KPageView_LeaveEvent_Callback = void (*)(KPageView*, QEvent*);
    using KPageView_PaintEvent_Callback = void (*)(KPageView*, QPaintEvent*);
    using KPageView_MoveEvent_Callback = void (*)(KPageView*, QMoveEvent*);
    using KPageView_ResizeEvent_Callback = void (*)(KPageView*, QResizeEvent*);
    using KPageView_CloseEvent_Callback = void (*)(KPageView*, QCloseEvent*);
    using KPageView_ContextMenuEvent_Callback = void (*)(KPageView*, QContextMenuEvent*);
    using KPageView_TabletEvent_Callback = void (*)(KPageView*, QTabletEvent*);
    using KPageView_ActionEvent_Callback = void (*)(KPageView*, QActionEvent*);
    using KPageView_DragEnterEvent_Callback = void (*)(KPageView*, QDragEnterEvent*);
    using KPageView_DragMoveEvent_Callback = void (*)(KPageView*, QDragMoveEvent*);
    using KPageView_DragLeaveEvent_Callback = void (*)(KPageView*, QDragLeaveEvent*);
    using KPageView_DropEvent_Callback = void (*)(KPageView*, QDropEvent*);
    using KPageView_ShowEvent_Callback = void (*)(KPageView*, QShowEvent*);
    using KPageView_HideEvent_Callback = void (*)(KPageView*, QHideEvent*);
    using KPageView_NativeEvent_Callback = bool (*)(KPageView*, libqt_string, void*, intptr_t*);
    using KPageView_ChangeEvent_Callback = void (*)(KPageView*, QEvent*);
    using KPageView_Metric_Callback = int (*)(const KPageView*, int);
    using KPageView_InitPainter_Callback = void (*)(const KPageView*, QPainter*);
    using KPageView_Redirected_Callback = QPaintDevice* (*)(const KPageView*, QPoint*);
    using KPageView_SharedPainter_Callback = QPainter* (*)(const KPageView*);
    using KPageView_InputMethodEvent_Callback = void (*)(KPageView*, QInputMethodEvent*);
    using KPageView_InputMethodQuery_Callback = QVariant* (*)(const KPageView*, int);
    using KPageView_FocusNextPrevChild_Callback = bool (*)(KPageView*, bool);
    using KPageView_EventFilter_Callback = bool (*)(KPageView*, QObject*, QEvent*);
    using KPageView_TimerEvent_Callback = void (*)(KPageView*, QTimerEvent*);
    using KPageView_ChildEvent_Callback = void (*)(KPageView*, QChildEvent*);
    using KPageView_CustomEvent_Callback = void (*)(KPageView*, QEvent*);
    using KPageView_ConnectNotify_Callback = void (*)(KPageView*, QMetaMethod*);
    using KPageView_DisconnectNotify_Callback = void (*)(KPageView*, QMetaMethod*);
    using KPageView::create;
    using KPageView::destroy;
    using KPageView::focusNextChild;
    using KPageView::focusPreviousChild;
    using KPageView::getDecodedMetricF;
    using KPageView::isSignalConnected;
    using KPageView::receivers;
    using KPageView::sender;
    using KPageView::senderSignalIndex;
    using KPageView::updateMicroFocus;

    // Instance callback storage
    KPageView_MetaObject_Callback kpageview_metaobject_callback = nullptr;
    KPageView_Metacast_Callback kpageview_metacast_callback = nullptr;
    KPageView_Metacall_Callback kpageview_metacall_callback = nullptr;
    KPageView_CreateView_Callback kpageview_createview_callback = nullptr;
    KPageView_ShowPageHeader_Callback kpageview_showpageheader_callback = nullptr;
    KPageView_ViewPosition_Callback kpageview_viewposition_callback = nullptr;
    KPageView_DevType_Callback kpageview_devtype_callback = nullptr;
    KPageView_SetVisible_Callback kpageview_setvisible_callback = nullptr;
    KPageView_SizeHint_Callback kpageview_sizehint_callback = nullptr;
    KPageView_MinimumSizeHint_Callback kpageview_minimumsizehint_callback = nullptr;
    KPageView_HeightForWidth_Callback kpageview_heightforwidth_callback = nullptr;
    KPageView_HasHeightForWidth_Callback kpageview_hasheightforwidth_callback = nullptr;
    KPageView_PaintEngine_Callback kpageview_paintengine_callback = nullptr;
    KPageView_Event_Callback kpageview_event_callback = nullptr;
    KPageView_MousePressEvent_Callback kpageview_mousepressevent_callback = nullptr;
    KPageView_MouseReleaseEvent_Callback kpageview_mousereleaseevent_callback = nullptr;
    KPageView_MouseDoubleClickEvent_Callback kpageview_mousedoubleclickevent_callback = nullptr;
    KPageView_MouseMoveEvent_Callback kpageview_mousemoveevent_callback = nullptr;
    KPageView_WheelEvent_Callback kpageview_wheelevent_callback = nullptr;
    KPageView_KeyPressEvent_Callback kpageview_keypressevent_callback = nullptr;
    KPageView_KeyReleaseEvent_Callback kpageview_keyreleaseevent_callback = nullptr;
    KPageView_FocusInEvent_Callback kpageview_focusinevent_callback = nullptr;
    KPageView_FocusOutEvent_Callback kpageview_focusoutevent_callback = nullptr;
    KPageView_EnterEvent_Callback kpageview_enterevent_callback = nullptr;
    KPageView_LeaveEvent_Callback kpageview_leaveevent_callback = nullptr;
    KPageView_PaintEvent_Callback kpageview_paintevent_callback = nullptr;
    KPageView_MoveEvent_Callback kpageview_moveevent_callback = nullptr;
    KPageView_ResizeEvent_Callback kpageview_resizeevent_callback = nullptr;
    KPageView_CloseEvent_Callback kpageview_closeevent_callback = nullptr;
    KPageView_ContextMenuEvent_Callback kpageview_contextmenuevent_callback = nullptr;
    KPageView_TabletEvent_Callback kpageview_tabletevent_callback = nullptr;
    KPageView_ActionEvent_Callback kpageview_actionevent_callback = nullptr;
    KPageView_DragEnterEvent_Callback kpageview_dragenterevent_callback = nullptr;
    KPageView_DragMoveEvent_Callback kpageview_dragmoveevent_callback = nullptr;
    KPageView_DragLeaveEvent_Callback kpageview_dragleaveevent_callback = nullptr;
    KPageView_DropEvent_Callback kpageview_dropevent_callback = nullptr;
    KPageView_ShowEvent_Callback kpageview_showevent_callback = nullptr;
    KPageView_HideEvent_Callback kpageview_hideevent_callback = nullptr;
    KPageView_NativeEvent_Callback kpageview_nativeevent_callback = nullptr;
    KPageView_ChangeEvent_Callback kpageview_changeevent_callback = nullptr;
    KPageView_Metric_Callback kpageview_metric_callback = nullptr;
    KPageView_InitPainter_Callback kpageview_initpainter_callback = nullptr;
    KPageView_Redirected_Callback kpageview_redirected_callback = nullptr;
    KPageView_SharedPainter_Callback kpageview_sharedpainter_callback = nullptr;
    KPageView_InputMethodEvent_Callback kpageview_inputmethodevent_callback = nullptr;
    KPageView_InputMethodQuery_Callback kpageview_inputmethodquery_callback = nullptr;
    KPageView_FocusNextPrevChild_Callback kpageview_focusnextprevchild_callback = nullptr;
    KPageView_EventFilter_Callback kpageview_eventfilter_callback = nullptr;
    KPageView_TimerEvent_Callback kpageview_timerevent_callback = nullptr;
    KPageView_ChildEvent_Callback kpageview_childevent_callback = nullptr;
    KPageView_CustomEvent_Callback kpageview_customevent_callback = nullptr;
    KPageView_ConnectNotify_Callback kpageview_connectnotify_callback = nullptr;
    KPageView_DisconnectNotify_Callback kpageview_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KPageView {
        using KPageView::actionEvent;
        using KPageView::changeEvent;
        using KPageView::childEvent;
        using KPageView::closeEvent;
        using KPageView::connectNotify;
        using KPageView::contextMenuEvent;
        using KPageView::createView;
        using KPageView::customEvent;
        using KPageView::disconnectNotify;
        using KPageView::dragEnterEvent;
        using KPageView::dragLeaveEvent;
        using KPageView::dragMoveEvent;
        using KPageView::dropEvent;
        using KPageView::enterEvent;
        using KPageView::event;
        using KPageView::focusInEvent;
        using KPageView::focusNextPrevChild;
        using KPageView::focusOutEvent;
        using KPageView::hideEvent;
        using KPageView::initPainter;
        using KPageView::inputMethodEvent;
        using KPageView::keyPressEvent;
        using KPageView::keyReleaseEvent;
        using KPageView::leaveEvent;
        using KPageView::metric;
        using KPageView::mouseDoubleClickEvent;
        using KPageView::mouseMoveEvent;
        using KPageView::mousePressEvent;
        using KPageView::mouseReleaseEvent;
        using KPageView::moveEvent;
        using KPageView::nativeEvent;
        using KPageView::paintEvent;
        using KPageView::redirected;
        using KPageView::resizeEvent;
        using KPageView::sharedPainter;
        using KPageView::showEvent;
        using KPageView::showPageHeader;
        using KPageView::tabletEvent;
        using KPageView::timerEvent;
        using KPageView::viewPosition;
        using KPageView::wheelEvent;
    };

    VirtualKPageView(QWidget* parent) : KPageView(parent) {};
    VirtualKPageView() : KPageView() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kpageview_metaobject_callback) {
            QMetaObject* callback_ret = kpageview_metaobject_callback(this);
            return callback_ret;
        }
        return KPageView::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kpageview_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kpageview_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KPageView::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpageview_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kpageview_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KPageView::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemView* createView() override {
        if (kpageview_createview_callback) {
            QAbstractItemView* callback_ret = kpageview_createview_callback(this);
            return callback_ret;
        }
        return KPageView::createView();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool showPageHeader() const override {
        if (kpageview_showpageheader_callback) {
            bool callback_ret = kpageview_showpageheader_callback(this);
            return callback_ret;
        }
        return KPageView::showPageHeader();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::Alignment viewPosition() const override {
        if (kpageview_viewposition_callback) {
            int callback_ret = kpageview_viewposition_callback(this);
            return static_cast<Qt::Alignment>(callback_ret);
        }
        return KPageView::viewPosition();
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kpageview_devtype_callback) {
            int callback_ret = kpageview_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KPageView::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kpageview_setvisible_callback) {
            bool cbval1 = visible;
            kpageview_setvisible_callback(this, cbval1);
            return;
        }
        KPageView::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kpageview_sizehint_callback) {
            QSize* callback_ret = kpageview_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPageView::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kpageview_minimumsizehint_callback) {
            QSize* callback_ret = kpageview_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPageView::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kpageview_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kpageview_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPageView::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kpageview_hasheightforwidth_callback) {
            bool callback_ret = kpageview_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KPageView::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kpageview_paintengine_callback) {
            QPaintEngine* callback_ret = kpageview_paintengine_callback(this);
            return callback_ret;
        }
        return KPageView::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpageview_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kpageview_event_callback(this, cbval1);
            return callback_ret;
        }
        return KPageView::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kpageview_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kpageview_mousepressevent_callback(this, cbval1);
            return;
        }
        KPageView::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kpageview_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kpageview_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KPageView::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kpageview_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kpageview_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KPageView::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kpageview_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kpageview_mousemoveevent_callback(this, cbval1);
            return;
        }
        KPageView::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kpageview_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kpageview_wheelevent_callback(this, cbval1);
            return;
        }
        KPageView::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kpageview_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kpageview_keypressevent_callback(this, cbval1);
            return;
        }
        KPageView::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kpageview_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kpageview_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KPageView::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kpageview_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kpageview_focusinevent_callback(this, cbval1);
            return;
        }
        KPageView::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kpageview_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kpageview_focusoutevent_callback(this, cbval1);
            return;
        }
        KPageView::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kpageview_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kpageview_enterevent_callback(this, cbval1);
            return;
        }
        KPageView::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kpageview_leaveevent_callback) {
            QEvent* cbval1 = event;
            kpageview_leaveevent_callback(this, cbval1);
            return;
        }
        KPageView::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kpageview_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kpageview_paintevent_callback(this, cbval1);
            return;
        }
        KPageView::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kpageview_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kpageview_moveevent_callback(this, cbval1);
            return;
        }
        KPageView::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kpageview_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kpageview_resizeevent_callback(this, cbval1);
            return;
        }
        KPageView::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kpageview_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kpageview_closeevent_callback(this, cbval1);
            return;
        }
        KPageView::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kpageview_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kpageview_contextmenuevent_callback(this, cbval1);
            return;
        }
        KPageView::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kpageview_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kpageview_tabletevent_callback(this, cbval1);
            return;
        }
        KPageView::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kpageview_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kpageview_actionevent_callback(this, cbval1);
            return;
        }
        KPageView::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kpageview_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kpageview_dragenterevent_callback(this, cbval1);
            return;
        }
        KPageView::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kpageview_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kpageview_dragmoveevent_callback(this, cbval1);
            return;
        }
        KPageView::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kpageview_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kpageview_dragleaveevent_callback(this, cbval1);
            return;
        }
        KPageView::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kpageview_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kpageview_dropevent_callback(this, cbval1);
            return;
        }
        KPageView::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kpageview_showevent_callback) {
            QShowEvent* cbval1 = event;
            kpageview_showevent_callback(this, cbval1);
            return;
        }
        KPageView::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kpageview_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kpageview_hideevent_callback(this, cbval1);
            return;
        }
        KPageView::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kpageview_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kpageview_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KPageView::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kpageview_changeevent_callback) {
            QEvent* cbval1 = param1;
            kpageview_changeevent_callback(this, cbval1);
            return;
        }
        KPageView::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kpageview_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kpageview_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPageView::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kpageview_initpainter_callback) {
            QPainter* cbval1 = painter;
            kpageview_initpainter_callback(this, cbval1);
            return;
        }
        KPageView::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kpageview_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kpageview_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KPageView::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kpageview_sharedpainter_callback) {
            QPainter* callback_ret = kpageview_sharedpainter_callback(this);
            return callback_ret;
        }
        return KPageView::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kpageview_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kpageview_inputmethodevent_callback(this, cbval1);
            return;
        }
        KPageView::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kpageview_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kpageview_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPageView::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kpageview_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kpageview_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KPageView::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kpageview_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kpageview_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KPageView::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpageview_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kpageview_timerevent_callback(this, cbval1);
            return;
        }
        KPageView::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpageview_childevent_callback) {
            QChildEvent* cbval1 = event;
            kpageview_childevent_callback(this, cbval1);
            return;
        }
        KPageView::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpageview_customevent_callback) {
            QEvent* cbval1 = event;
            kpageview_customevent_callback(this, cbval1);
            return;
        }
        KPageView::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpageview_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpageview_connectnotify_callback(this, cbval1);
            return;
        }
        KPageView::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpageview_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpageview_disconnectnotify_callback(this, cbval1);
            return;
        }
        KPageView::disconnectNotify(signal);
    }

    // Friend functions
    friend QAbstractItemView* KPageView_SuperCreateView(KPageView* self);
    friend bool KPageView_SuperShowPageHeader(const KPageView* self);
    friend int KPageView_SuperViewPosition(const KPageView* self);
    friend bool KPageView_SuperEvent(KPageView* self, QEvent* event);
    friend void KPageView_SuperMousePressEvent(KPageView* self, QMouseEvent* event);
    friend void KPageView_SuperMouseReleaseEvent(KPageView* self, QMouseEvent* event);
    friend void KPageView_SuperMouseDoubleClickEvent(KPageView* self, QMouseEvent* event);
    friend void KPageView_SuperMouseMoveEvent(KPageView* self, QMouseEvent* event);
    friend void KPageView_SuperWheelEvent(KPageView* self, QWheelEvent* event);
    friend void KPageView_SuperKeyPressEvent(KPageView* self, QKeyEvent* event);
    friend void KPageView_SuperKeyReleaseEvent(KPageView* self, QKeyEvent* event);
    friend void KPageView_SuperFocusInEvent(KPageView* self, QFocusEvent* event);
    friend void KPageView_SuperFocusOutEvent(KPageView* self, QFocusEvent* event);
    friend void KPageView_SuperEnterEvent(KPageView* self, QEnterEvent* event);
    friend void KPageView_SuperLeaveEvent(KPageView* self, QEvent* event);
    friend void KPageView_SuperPaintEvent(KPageView* self, QPaintEvent* event);
    friend void KPageView_SuperMoveEvent(KPageView* self, QMoveEvent* event);
    friend void KPageView_SuperResizeEvent(KPageView* self, QResizeEvent* event);
    friend void KPageView_SuperCloseEvent(KPageView* self, QCloseEvent* event);
    friend void KPageView_SuperContextMenuEvent(KPageView* self, QContextMenuEvent* event);
    friend void KPageView_SuperTabletEvent(KPageView* self, QTabletEvent* event);
    friend void KPageView_SuperActionEvent(KPageView* self, QActionEvent* event);
    friend void KPageView_SuperDragEnterEvent(KPageView* self, QDragEnterEvent* event);
    friend void KPageView_SuperDragMoveEvent(KPageView* self, QDragMoveEvent* event);
    friend void KPageView_SuperDragLeaveEvent(KPageView* self, QDragLeaveEvent* event);
    friend void KPageView_SuperDropEvent(KPageView* self, QDropEvent* event);
    friend void KPageView_SuperShowEvent(KPageView* self, QShowEvent* event);
    friend void KPageView_SuperHideEvent(KPageView* self, QHideEvent* event);
    friend bool KPageView_SuperNativeEvent(KPageView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KPageView_SuperChangeEvent(KPageView* self, QEvent* param1);
    friend int KPageView_SuperMetric(const KPageView* self, int param1);
    friend void KPageView_SuperInitPainter(const KPageView* self, QPainter* painter);
    friend QPaintDevice* KPageView_SuperRedirected(const KPageView* self, QPoint* offset);
    friend QPainter* KPageView_SuperSharedPainter(const KPageView* self);
    friend void KPageView_SuperInputMethodEvent(KPageView* self, QInputMethodEvent* param1);
    friend bool KPageView_SuperFocusNextPrevChild(KPageView* self, bool next);
    friend void KPageView_SuperTimerEvent(KPageView* self, QTimerEvent* event);
    friend void KPageView_SuperChildEvent(KPageView* self, QChildEvent* event);
    friend void KPageView_SuperCustomEvent(KPageView* self, QEvent* event);
    friend void KPageView_SuperConnectNotify(KPageView* self, const QMetaMethod* signal);
    friend void KPageView_SuperDisconnectNotify(KPageView* self, const QMetaMethod* signal);
};

#endif
