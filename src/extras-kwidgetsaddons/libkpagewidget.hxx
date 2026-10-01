#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKPAGEWIDGET_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKPAGEWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPageWidget
class VirtualKPageWidget final : public KPageWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using KPageWidget_MetaObject_Callback = QMetaObject* (*)(const KPageWidget*);
    using KPageWidget_Metacast_Callback = void* (*)(KPageWidget*, const char*);
    using KPageWidget_Metacall_Callback = int (*)(KPageWidget*, int, int, void**);
    using KPageWidget_CreateView_Callback = QAbstractItemView* (*)(KPageWidget*);
    using KPageWidget_ShowPageHeader_Callback = bool (*)(const KPageWidget*);
    using KPageWidget_ViewPosition_Callback = int (*)(const KPageWidget*);
    using KPageWidget_DevType_Callback = int (*)(const KPageWidget*);
    using KPageWidget_SetVisible_Callback = void (*)(KPageWidget*, bool);
    using KPageWidget_SizeHint_Callback = QSize* (*)(const KPageWidget*);
    using KPageWidget_MinimumSizeHint_Callback = QSize* (*)(const KPageWidget*);
    using KPageWidget_HeightForWidth_Callback = int (*)(const KPageWidget*, int);
    using KPageWidget_HasHeightForWidth_Callback = bool (*)(const KPageWidget*);
    using KPageWidget_PaintEngine_Callback = QPaintEngine* (*)(const KPageWidget*);
    using KPageWidget_Event_Callback = bool (*)(KPageWidget*, QEvent*);
    using KPageWidget_MousePressEvent_Callback = void (*)(KPageWidget*, QMouseEvent*);
    using KPageWidget_MouseReleaseEvent_Callback = void (*)(KPageWidget*, QMouseEvent*);
    using KPageWidget_MouseDoubleClickEvent_Callback = void (*)(KPageWidget*, QMouseEvent*);
    using KPageWidget_MouseMoveEvent_Callback = void (*)(KPageWidget*, QMouseEvent*);
    using KPageWidget_WheelEvent_Callback = void (*)(KPageWidget*, QWheelEvent*);
    using KPageWidget_KeyPressEvent_Callback = void (*)(KPageWidget*, QKeyEvent*);
    using KPageWidget_KeyReleaseEvent_Callback = void (*)(KPageWidget*, QKeyEvent*);
    using KPageWidget_FocusInEvent_Callback = void (*)(KPageWidget*, QFocusEvent*);
    using KPageWidget_FocusOutEvent_Callback = void (*)(KPageWidget*, QFocusEvent*);
    using KPageWidget_EnterEvent_Callback = void (*)(KPageWidget*, QEnterEvent*);
    using KPageWidget_LeaveEvent_Callback = void (*)(KPageWidget*, QEvent*);
    using KPageWidget_PaintEvent_Callback = void (*)(KPageWidget*, QPaintEvent*);
    using KPageWidget_MoveEvent_Callback = void (*)(KPageWidget*, QMoveEvent*);
    using KPageWidget_ResizeEvent_Callback = void (*)(KPageWidget*, QResizeEvent*);
    using KPageWidget_CloseEvent_Callback = void (*)(KPageWidget*, QCloseEvent*);
    using KPageWidget_ContextMenuEvent_Callback = void (*)(KPageWidget*, QContextMenuEvent*);
    using KPageWidget_TabletEvent_Callback = void (*)(KPageWidget*, QTabletEvent*);
    using KPageWidget_ActionEvent_Callback = void (*)(KPageWidget*, QActionEvent*);
    using KPageWidget_DragEnterEvent_Callback = void (*)(KPageWidget*, QDragEnterEvent*);
    using KPageWidget_DragMoveEvent_Callback = void (*)(KPageWidget*, QDragMoveEvent*);
    using KPageWidget_DragLeaveEvent_Callback = void (*)(KPageWidget*, QDragLeaveEvent*);
    using KPageWidget_DropEvent_Callback = void (*)(KPageWidget*, QDropEvent*);
    using KPageWidget_ShowEvent_Callback = void (*)(KPageWidget*, QShowEvent*);
    using KPageWidget_HideEvent_Callback = void (*)(KPageWidget*, QHideEvent*);
    using KPageWidget_NativeEvent_Callback = bool (*)(KPageWidget*, libqt_string, void*, intptr_t*);
    using KPageWidget_ChangeEvent_Callback = void (*)(KPageWidget*, QEvent*);
    using KPageWidget_Metric_Callback = int (*)(const KPageWidget*, int);
    using KPageWidget_InitPainter_Callback = void (*)(const KPageWidget*, QPainter*);
    using KPageWidget_Redirected_Callback = QPaintDevice* (*)(const KPageWidget*, QPoint*);
    using KPageWidget_SharedPainter_Callback = QPainter* (*)(const KPageWidget*);
    using KPageWidget_InputMethodEvent_Callback = void (*)(KPageWidget*, QInputMethodEvent*);
    using KPageWidget_InputMethodQuery_Callback = QVariant* (*)(const KPageWidget*, int);
    using KPageWidget_FocusNextPrevChild_Callback = bool (*)(KPageWidget*, bool);
    using KPageWidget_EventFilter_Callback = bool (*)(KPageWidget*, QObject*, QEvent*);
    using KPageWidget_TimerEvent_Callback = void (*)(KPageWidget*, QTimerEvent*);
    using KPageWidget_ChildEvent_Callback = void (*)(KPageWidget*, QChildEvent*);
    using KPageWidget_CustomEvent_Callback = void (*)(KPageWidget*, QEvent*);
    using KPageWidget_ConnectNotify_Callback = void (*)(KPageWidget*, QMetaMethod*);
    using KPageWidget_DisconnectNotify_Callback = void (*)(KPageWidget*, QMetaMethod*);
    using KPageWidget::create;
    using KPageWidget::destroy;
    using KPageWidget::focusNextChild;
    using KPageWidget::focusPreviousChild;
    using KPageWidget::getDecodedMetricF;
    using KPageWidget::isSignalConnected;
    using KPageWidget::receivers;
    using KPageWidget::sender;
    using KPageWidget::senderSignalIndex;
    using KPageWidget::updateMicroFocus;

    // Instance callback storage
    KPageWidget_MetaObject_Callback kpagewidget_metaobject_callback = nullptr;
    KPageWidget_Metacast_Callback kpagewidget_metacast_callback = nullptr;
    KPageWidget_Metacall_Callback kpagewidget_metacall_callback = nullptr;
    KPageWidget_CreateView_Callback kpagewidget_createview_callback = nullptr;
    KPageWidget_ShowPageHeader_Callback kpagewidget_showpageheader_callback = nullptr;
    KPageWidget_ViewPosition_Callback kpagewidget_viewposition_callback = nullptr;
    KPageWidget_DevType_Callback kpagewidget_devtype_callback = nullptr;
    KPageWidget_SetVisible_Callback kpagewidget_setvisible_callback = nullptr;
    KPageWidget_SizeHint_Callback kpagewidget_sizehint_callback = nullptr;
    KPageWidget_MinimumSizeHint_Callback kpagewidget_minimumsizehint_callback = nullptr;
    KPageWidget_HeightForWidth_Callback kpagewidget_heightforwidth_callback = nullptr;
    KPageWidget_HasHeightForWidth_Callback kpagewidget_hasheightforwidth_callback = nullptr;
    KPageWidget_PaintEngine_Callback kpagewidget_paintengine_callback = nullptr;
    KPageWidget_Event_Callback kpagewidget_event_callback = nullptr;
    KPageWidget_MousePressEvent_Callback kpagewidget_mousepressevent_callback = nullptr;
    KPageWidget_MouseReleaseEvent_Callback kpagewidget_mousereleaseevent_callback = nullptr;
    KPageWidget_MouseDoubleClickEvent_Callback kpagewidget_mousedoubleclickevent_callback = nullptr;
    KPageWidget_MouseMoveEvent_Callback kpagewidget_mousemoveevent_callback = nullptr;
    KPageWidget_WheelEvent_Callback kpagewidget_wheelevent_callback = nullptr;
    KPageWidget_KeyPressEvent_Callback kpagewidget_keypressevent_callback = nullptr;
    KPageWidget_KeyReleaseEvent_Callback kpagewidget_keyreleaseevent_callback = nullptr;
    KPageWidget_FocusInEvent_Callback kpagewidget_focusinevent_callback = nullptr;
    KPageWidget_FocusOutEvent_Callback kpagewidget_focusoutevent_callback = nullptr;
    KPageWidget_EnterEvent_Callback kpagewidget_enterevent_callback = nullptr;
    KPageWidget_LeaveEvent_Callback kpagewidget_leaveevent_callback = nullptr;
    KPageWidget_PaintEvent_Callback kpagewidget_paintevent_callback = nullptr;
    KPageWidget_MoveEvent_Callback kpagewidget_moveevent_callback = nullptr;
    KPageWidget_ResizeEvent_Callback kpagewidget_resizeevent_callback = nullptr;
    KPageWidget_CloseEvent_Callback kpagewidget_closeevent_callback = nullptr;
    KPageWidget_ContextMenuEvent_Callback kpagewidget_contextmenuevent_callback = nullptr;
    KPageWidget_TabletEvent_Callback kpagewidget_tabletevent_callback = nullptr;
    KPageWidget_ActionEvent_Callback kpagewidget_actionevent_callback = nullptr;
    KPageWidget_DragEnterEvent_Callback kpagewidget_dragenterevent_callback = nullptr;
    KPageWidget_DragMoveEvent_Callback kpagewidget_dragmoveevent_callback = nullptr;
    KPageWidget_DragLeaveEvent_Callback kpagewidget_dragleaveevent_callback = nullptr;
    KPageWidget_DropEvent_Callback kpagewidget_dropevent_callback = nullptr;
    KPageWidget_ShowEvent_Callback kpagewidget_showevent_callback = nullptr;
    KPageWidget_HideEvent_Callback kpagewidget_hideevent_callback = nullptr;
    KPageWidget_NativeEvent_Callback kpagewidget_nativeevent_callback = nullptr;
    KPageWidget_ChangeEvent_Callback kpagewidget_changeevent_callback = nullptr;
    KPageWidget_Metric_Callback kpagewidget_metric_callback = nullptr;
    KPageWidget_InitPainter_Callback kpagewidget_initpainter_callback = nullptr;
    KPageWidget_Redirected_Callback kpagewidget_redirected_callback = nullptr;
    KPageWidget_SharedPainter_Callback kpagewidget_sharedpainter_callback = nullptr;
    KPageWidget_InputMethodEvent_Callback kpagewidget_inputmethodevent_callback = nullptr;
    KPageWidget_InputMethodQuery_Callback kpagewidget_inputmethodquery_callback = nullptr;
    KPageWidget_FocusNextPrevChild_Callback kpagewidget_focusnextprevchild_callback = nullptr;
    KPageWidget_EventFilter_Callback kpagewidget_eventfilter_callback = nullptr;
    KPageWidget_TimerEvent_Callback kpagewidget_timerevent_callback = nullptr;
    KPageWidget_ChildEvent_Callback kpagewidget_childevent_callback = nullptr;
    KPageWidget_CustomEvent_Callback kpagewidget_customevent_callback = nullptr;
    KPageWidget_ConnectNotify_Callback kpagewidget_connectnotify_callback = nullptr;
    KPageWidget_DisconnectNotify_Callback kpagewidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KPageWidget {
        using KPageWidget::actionEvent;
        using KPageWidget::changeEvent;
        using KPageWidget::childEvent;
        using KPageWidget::closeEvent;
        using KPageWidget::connectNotify;
        using KPageWidget::contextMenuEvent;
        using KPageWidget::createView;
        using KPageWidget::customEvent;
        using KPageWidget::disconnectNotify;
        using KPageWidget::dragEnterEvent;
        using KPageWidget::dragLeaveEvent;
        using KPageWidget::dragMoveEvent;
        using KPageWidget::dropEvent;
        using KPageWidget::enterEvent;
        using KPageWidget::event;
        using KPageWidget::focusInEvent;
        using KPageWidget::focusNextPrevChild;
        using KPageWidget::focusOutEvent;
        using KPageWidget::hideEvent;
        using KPageWidget::initPainter;
        using KPageWidget::inputMethodEvent;
        using KPageWidget::keyPressEvent;
        using KPageWidget::keyReleaseEvent;
        using KPageWidget::leaveEvent;
        using KPageWidget::metric;
        using KPageWidget::mouseDoubleClickEvent;
        using KPageWidget::mouseMoveEvent;
        using KPageWidget::mousePressEvent;
        using KPageWidget::mouseReleaseEvent;
        using KPageWidget::moveEvent;
        using KPageWidget::nativeEvent;
        using KPageWidget::paintEvent;
        using KPageWidget::redirected;
        using KPageWidget::resizeEvent;
        using KPageWidget::sharedPainter;
        using KPageWidget::showEvent;
        using KPageWidget::showPageHeader;
        using KPageWidget::tabletEvent;
        using KPageWidget::timerEvent;
        using KPageWidget::viewPosition;
        using KPageWidget::wheelEvent;
    };

    VirtualKPageWidget(QWidget* parent) : KPageWidget(parent) {};
    VirtualKPageWidget() : KPageWidget() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kpagewidget_metaobject_callback) {
            QMetaObject* callback_ret = kpagewidget_metaobject_callback(this);
            return callback_ret;
        }
        return KPageWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kpagewidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kpagewidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KPageWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpagewidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kpagewidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KPageWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemView* createView() override {
        if (kpagewidget_createview_callback) {
            QAbstractItemView* callback_ret = kpagewidget_createview_callback(this);
            return callback_ret;
        }
        return KPageWidget::createView();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool showPageHeader() const override {
        if (kpagewidget_showpageheader_callback) {
            bool callback_ret = kpagewidget_showpageheader_callback(this);
            return callback_ret;
        }
        return KPageWidget::showPageHeader();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::Alignment viewPosition() const override {
        if (kpagewidget_viewposition_callback) {
            int callback_ret = kpagewidget_viewposition_callback(this);
            return static_cast<Qt::Alignment>(callback_ret);
        }
        return KPageWidget::viewPosition();
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kpagewidget_devtype_callback) {
            int callback_ret = kpagewidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KPageWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kpagewidget_setvisible_callback) {
            bool cbval1 = visible;
            kpagewidget_setvisible_callback(this, cbval1);
            return;
        }
        KPageWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kpagewidget_sizehint_callback) {
            QSize* callback_ret = kpagewidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPageWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kpagewidget_minimumsizehint_callback) {
            QSize* callback_ret = kpagewidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPageWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kpagewidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kpagewidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPageWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kpagewidget_hasheightforwidth_callback) {
            bool callback_ret = kpagewidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KPageWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kpagewidget_paintengine_callback) {
            QPaintEngine* callback_ret = kpagewidget_paintengine_callback(this);
            return callback_ret;
        }
        return KPageWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpagewidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kpagewidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return KPageWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kpagewidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kpagewidget_mousepressevent_callback(this, cbval1);
            return;
        }
        KPageWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kpagewidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kpagewidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KPageWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kpagewidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kpagewidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KPageWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kpagewidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kpagewidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        KPageWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kpagewidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kpagewidget_wheelevent_callback(this, cbval1);
            return;
        }
        KPageWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kpagewidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kpagewidget_keypressevent_callback(this, cbval1);
            return;
        }
        KPageWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kpagewidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kpagewidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KPageWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kpagewidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kpagewidget_focusinevent_callback(this, cbval1);
            return;
        }
        KPageWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kpagewidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kpagewidget_focusoutevent_callback(this, cbval1);
            return;
        }
        KPageWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kpagewidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kpagewidget_enterevent_callback(this, cbval1);
            return;
        }
        KPageWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kpagewidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            kpagewidget_leaveevent_callback(this, cbval1);
            return;
        }
        KPageWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kpagewidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kpagewidget_paintevent_callback(this, cbval1);
            return;
        }
        KPageWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kpagewidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kpagewidget_moveevent_callback(this, cbval1);
            return;
        }
        KPageWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kpagewidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kpagewidget_resizeevent_callback(this, cbval1);
            return;
        }
        KPageWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kpagewidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kpagewidget_closeevent_callback(this, cbval1);
            return;
        }
        KPageWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kpagewidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kpagewidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        KPageWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kpagewidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kpagewidget_tabletevent_callback(this, cbval1);
            return;
        }
        KPageWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kpagewidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kpagewidget_actionevent_callback(this, cbval1);
            return;
        }
        KPageWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kpagewidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kpagewidget_dragenterevent_callback(this, cbval1);
            return;
        }
        KPageWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kpagewidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kpagewidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        KPageWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kpagewidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kpagewidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        KPageWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kpagewidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kpagewidget_dropevent_callback(this, cbval1);
            return;
        }
        KPageWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kpagewidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            kpagewidget_showevent_callback(this, cbval1);
            return;
        }
        KPageWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kpagewidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kpagewidget_hideevent_callback(this, cbval1);
            return;
        }
        KPageWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kpagewidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kpagewidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KPageWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kpagewidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            kpagewidget_changeevent_callback(this, cbval1);
            return;
        }
        KPageWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kpagewidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kpagewidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPageWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kpagewidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            kpagewidget_initpainter_callback(this, cbval1);
            return;
        }
        KPageWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kpagewidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kpagewidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KPageWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kpagewidget_sharedpainter_callback) {
            QPainter* callback_ret = kpagewidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return KPageWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kpagewidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kpagewidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        KPageWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kpagewidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kpagewidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPageWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kpagewidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kpagewidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KPageWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kpagewidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kpagewidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KPageWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpagewidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kpagewidget_timerevent_callback(this, cbval1);
            return;
        }
        KPageWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpagewidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            kpagewidget_childevent_callback(this, cbval1);
            return;
        }
        KPageWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpagewidget_customevent_callback) {
            QEvent* cbval1 = event;
            kpagewidget_customevent_callback(this, cbval1);
            return;
        }
        KPageWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpagewidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpagewidget_connectnotify_callback(this, cbval1);
            return;
        }
        KPageWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpagewidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpagewidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        KPageWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend QAbstractItemView* KPageWidget_SuperCreateView(KPageWidget* self);
    friend bool KPageWidget_SuperShowPageHeader(const KPageWidget* self);
    friend int KPageWidget_SuperViewPosition(const KPageWidget* self);
    friend bool KPageWidget_SuperEvent(KPageWidget* self, QEvent* event);
    friend void KPageWidget_SuperMousePressEvent(KPageWidget* self, QMouseEvent* event);
    friend void KPageWidget_SuperMouseReleaseEvent(KPageWidget* self, QMouseEvent* event);
    friend void KPageWidget_SuperMouseDoubleClickEvent(KPageWidget* self, QMouseEvent* event);
    friend void KPageWidget_SuperMouseMoveEvent(KPageWidget* self, QMouseEvent* event);
    friend void KPageWidget_SuperWheelEvent(KPageWidget* self, QWheelEvent* event);
    friend void KPageWidget_SuperKeyPressEvent(KPageWidget* self, QKeyEvent* event);
    friend void KPageWidget_SuperKeyReleaseEvent(KPageWidget* self, QKeyEvent* event);
    friend void KPageWidget_SuperFocusInEvent(KPageWidget* self, QFocusEvent* event);
    friend void KPageWidget_SuperFocusOutEvent(KPageWidget* self, QFocusEvent* event);
    friend void KPageWidget_SuperEnterEvent(KPageWidget* self, QEnterEvent* event);
    friend void KPageWidget_SuperLeaveEvent(KPageWidget* self, QEvent* event);
    friend void KPageWidget_SuperPaintEvent(KPageWidget* self, QPaintEvent* event);
    friend void KPageWidget_SuperMoveEvent(KPageWidget* self, QMoveEvent* event);
    friend void KPageWidget_SuperResizeEvent(KPageWidget* self, QResizeEvent* event);
    friend void KPageWidget_SuperCloseEvent(KPageWidget* self, QCloseEvent* event);
    friend void KPageWidget_SuperContextMenuEvent(KPageWidget* self, QContextMenuEvent* event);
    friend void KPageWidget_SuperTabletEvent(KPageWidget* self, QTabletEvent* event);
    friend void KPageWidget_SuperActionEvent(KPageWidget* self, QActionEvent* event);
    friend void KPageWidget_SuperDragEnterEvent(KPageWidget* self, QDragEnterEvent* event);
    friend void KPageWidget_SuperDragMoveEvent(KPageWidget* self, QDragMoveEvent* event);
    friend void KPageWidget_SuperDragLeaveEvent(KPageWidget* self, QDragLeaveEvent* event);
    friend void KPageWidget_SuperDropEvent(KPageWidget* self, QDropEvent* event);
    friend void KPageWidget_SuperShowEvent(KPageWidget* self, QShowEvent* event);
    friend void KPageWidget_SuperHideEvent(KPageWidget* self, QHideEvent* event);
    friend bool KPageWidget_SuperNativeEvent(KPageWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KPageWidget_SuperChangeEvent(KPageWidget* self, QEvent* param1);
    friend int KPageWidget_SuperMetric(const KPageWidget* self, int param1);
    friend void KPageWidget_SuperInitPainter(const KPageWidget* self, QPainter* painter);
    friend QPaintDevice* KPageWidget_SuperRedirected(const KPageWidget* self, QPoint* offset);
    friend QPainter* KPageWidget_SuperSharedPainter(const KPageWidget* self);
    friend void KPageWidget_SuperInputMethodEvent(KPageWidget* self, QInputMethodEvent* param1);
    friend bool KPageWidget_SuperFocusNextPrevChild(KPageWidget* self, bool next);
    friend void KPageWidget_SuperTimerEvent(KPageWidget* self, QTimerEvent* event);
    friend void KPageWidget_SuperChildEvent(KPageWidget* self, QChildEvent* event);
    friend void KPageWidget_SuperCustomEvent(KPageWidget* self, QEvent* event);
    friend void KPageWidget_SuperConnectNotify(KPageWidget* self, const QMetaMethod* signal);
    friend void KPageWidget_SuperDisconnectNotify(KPageWidget* self, const QMetaMethod* signal);
};

#endif
