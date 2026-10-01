#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKTITLEWIDGET_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKTITLEWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTitleWidget
class VirtualKTitleWidget final : public KTitleWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using KTitleWidget_MetaObject_Callback = QMetaObject* (*)(const KTitleWidget*);
    using KTitleWidget_Metacast_Callback = void* (*)(KTitleWidget*, const char*);
    using KTitleWidget_Metacall_Callback = int (*)(KTitleWidget*, int, int, void**);
    using KTitleWidget_ChangeEvent_Callback = void (*)(KTitleWidget*, QEvent*);
    using KTitleWidget_ShowEvent_Callback = void (*)(KTitleWidget*, QShowEvent*);
    using KTitleWidget_EventFilter_Callback = bool (*)(KTitleWidget*, QObject*, QEvent*);
    using KTitleWidget_DevType_Callback = int (*)(const KTitleWidget*);
    using KTitleWidget_SetVisible_Callback = void (*)(KTitleWidget*, bool);
    using KTitleWidget_SizeHint_Callback = QSize* (*)(const KTitleWidget*);
    using KTitleWidget_MinimumSizeHint_Callback = QSize* (*)(const KTitleWidget*);
    using KTitleWidget_HeightForWidth_Callback = int (*)(const KTitleWidget*, int);
    using KTitleWidget_HasHeightForWidth_Callback = bool (*)(const KTitleWidget*);
    using KTitleWidget_PaintEngine_Callback = QPaintEngine* (*)(const KTitleWidget*);
    using KTitleWidget_Event_Callback = bool (*)(KTitleWidget*, QEvent*);
    using KTitleWidget_MousePressEvent_Callback = void (*)(KTitleWidget*, QMouseEvent*);
    using KTitleWidget_MouseReleaseEvent_Callback = void (*)(KTitleWidget*, QMouseEvent*);
    using KTitleWidget_MouseDoubleClickEvent_Callback = void (*)(KTitleWidget*, QMouseEvent*);
    using KTitleWidget_MouseMoveEvent_Callback = void (*)(KTitleWidget*, QMouseEvent*);
    using KTitleWidget_WheelEvent_Callback = void (*)(KTitleWidget*, QWheelEvent*);
    using KTitleWidget_KeyPressEvent_Callback = void (*)(KTitleWidget*, QKeyEvent*);
    using KTitleWidget_KeyReleaseEvent_Callback = void (*)(KTitleWidget*, QKeyEvent*);
    using KTitleWidget_FocusInEvent_Callback = void (*)(KTitleWidget*, QFocusEvent*);
    using KTitleWidget_FocusOutEvent_Callback = void (*)(KTitleWidget*, QFocusEvent*);
    using KTitleWidget_EnterEvent_Callback = void (*)(KTitleWidget*, QEnterEvent*);
    using KTitleWidget_LeaveEvent_Callback = void (*)(KTitleWidget*, QEvent*);
    using KTitleWidget_PaintEvent_Callback = void (*)(KTitleWidget*, QPaintEvent*);
    using KTitleWidget_MoveEvent_Callback = void (*)(KTitleWidget*, QMoveEvent*);
    using KTitleWidget_ResizeEvent_Callback = void (*)(KTitleWidget*, QResizeEvent*);
    using KTitleWidget_CloseEvent_Callback = void (*)(KTitleWidget*, QCloseEvent*);
    using KTitleWidget_ContextMenuEvent_Callback = void (*)(KTitleWidget*, QContextMenuEvent*);
    using KTitleWidget_TabletEvent_Callback = void (*)(KTitleWidget*, QTabletEvent*);
    using KTitleWidget_ActionEvent_Callback = void (*)(KTitleWidget*, QActionEvent*);
    using KTitleWidget_DragEnterEvent_Callback = void (*)(KTitleWidget*, QDragEnterEvent*);
    using KTitleWidget_DragMoveEvent_Callback = void (*)(KTitleWidget*, QDragMoveEvent*);
    using KTitleWidget_DragLeaveEvent_Callback = void (*)(KTitleWidget*, QDragLeaveEvent*);
    using KTitleWidget_DropEvent_Callback = void (*)(KTitleWidget*, QDropEvent*);
    using KTitleWidget_HideEvent_Callback = void (*)(KTitleWidget*, QHideEvent*);
    using KTitleWidget_NativeEvent_Callback = bool (*)(KTitleWidget*, libqt_string, void*, intptr_t*);
    using KTitleWidget_Metric_Callback = int (*)(const KTitleWidget*, int);
    using KTitleWidget_InitPainter_Callback = void (*)(const KTitleWidget*, QPainter*);
    using KTitleWidget_Redirected_Callback = QPaintDevice* (*)(const KTitleWidget*, QPoint*);
    using KTitleWidget_SharedPainter_Callback = QPainter* (*)(const KTitleWidget*);
    using KTitleWidget_InputMethodEvent_Callback = void (*)(KTitleWidget*, QInputMethodEvent*);
    using KTitleWidget_InputMethodQuery_Callback = QVariant* (*)(const KTitleWidget*, int);
    using KTitleWidget_FocusNextPrevChild_Callback = bool (*)(KTitleWidget*, bool);
    using KTitleWidget_TimerEvent_Callback = void (*)(KTitleWidget*, QTimerEvent*);
    using KTitleWidget_ChildEvent_Callback = void (*)(KTitleWidget*, QChildEvent*);
    using KTitleWidget_CustomEvent_Callback = void (*)(KTitleWidget*, QEvent*);
    using KTitleWidget_ConnectNotify_Callback = void (*)(KTitleWidget*, QMetaMethod*);
    using KTitleWidget_DisconnectNotify_Callback = void (*)(KTitleWidget*, QMetaMethod*);
    using KTitleWidget::create;
    using KTitleWidget::destroy;
    using KTitleWidget::focusNextChild;
    using KTitleWidget::focusPreviousChild;
    using KTitleWidget::getDecodedMetricF;
    using KTitleWidget::isSignalConnected;
    using KTitleWidget::receivers;
    using KTitleWidget::sender;
    using KTitleWidget::senderSignalIndex;
    using KTitleWidget::updateMicroFocus;

    // Instance callback storage
    KTitleWidget_MetaObject_Callback ktitlewidget_metaobject_callback = nullptr;
    KTitleWidget_Metacast_Callback ktitlewidget_metacast_callback = nullptr;
    KTitleWidget_Metacall_Callback ktitlewidget_metacall_callback = nullptr;
    KTitleWidget_ChangeEvent_Callback ktitlewidget_changeevent_callback = nullptr;
    KTitleWidget_ShowEvent_Callback ktitlewidget_showevent_callback = nullptr;
    KTitleWidget_EventFilter_Callback ktitlewidget_eventfilter_callback = nullptr;
    KTitleWidget_DevType_Callback ktitlewidget_devtype_callback = nullptr;
    KTitleWidget_SetVisible_Callback ktitlewidget_setvisible_callback = nullptr;
    KTitleWidget_SizeHint_Callback ktitlewidget_sizehint_callback = nullptr;
    KTitleWidget_MinimumSizeHint_Callback ktitlewidget_minimumsizehint_callback = nullptr;
    KTitleWidget_HeightForWidth_Callback ktitlewidget_heightforwidth_callback = nullptr;
    KTitleWidget_HasHeightForWidth_Callback ktitlewidget_hasheightforwidth_callback = nullptr;
    KTitleWidget_PaintEngine_Callback ktitlewidget_paintengine_callback = nullptr;
    KTitleWidget_Event_Callback ktitlewidget_event_callback = nullptr;
    KTitleWidget_MousePressEvent_Callback ktitlewidget_mousepressevent_callback = nullptr;
    KTitleWidget_MouseReleaseEvent_Callback ktitlewidget_mousereleaseevent_callback = nullptr;
    KTitleWidget_MouseDoubleClickEvent_Callback ktitlewidget_mousedoubleclickevent_callback = nullptr;
    KTitleWidget_MouseMoveEvent_Callback ktitlewidget_mousemoveevent_callback = nullptr;
    KTitleWidget_WheelEvent_Callback ktitlewidget_wheelevent_callback = nullptr;
    KTitleWidget_KeyPressEvent_Callback ktitlewidget_keypressevent_callback = nullptr;
    KTitleWidget_KeyReleaseEvent_Callback ktitlewidget_keyreleaseevent_callback = nullptr;
    KTitleWidget_FocusInEvent_Callback ktitlewidget_focusinevent_callback = nullptr;
    KTitleWidget_FocusOutEvent_Callback ktitlewidget_focusoutevent_callback = nullptr;
    KTitleWidget_EnterEvent_Callback ktitlewidget_enterevent_callback = nullptr;
    KTitleWidget_LeaveEvent_Callback ktitlewidget_leaveevent_callback = nullptr;
    KTitleWidget_PaintEvent_Callback ktitlewidget_paintevent_callback = nullptr;
    KTitleWidget_MoveEvent_Callback ktitlewidget_moveevent_callback = nullptr;
    KTitleWidget_ResizeEvent_Callback ktitlewidget_resizeevent_callback = nullptr;
    KTitleWidget_CloseEvent_Callback ktitlewidget_closeevent_callback = nullptr;
    KTitleWidget_ContextMenuEvent_Callback ktitlewidget_contextmenuevent_callback = nullptr;
    KTitleWidget_TabletEvent_Callback ktitlewidget_tabletevent_callback = nullptr;
    KTitleWidget_ActionEvent_Callback ktitlewidget_actionevent_callback = nullptr;
    KTitleWidget_DragEnterEvent_Callback ktitlewidget_dragenterevent_callback = nullptr;
    KTitleWidget_DragMoveEvent_Callback ktitlewidget_dragmoveevent_callback = nullptr;
    KTitleWidget_DragLeaveEvent_Callback ktitlewidget_dragleaveevent_callback = nullptr;
    KTitleWidget_DropEvent_Callback ktitlewidget_dropevent_callback = nullptr;
    KTitleWidget_HideEvent_Callback ktitlewidget_hideevent_callback = nullptr;
    KTitleWidget_NativeEvent_Callback ktitlewidget_nativeevent_callback = nullptr;
    KTitleWidget_Metric_Callback ktitlewidget_metric_callback = nullptr;
    KTitleWidget_InitPainter_Callback ktitlewidget_initpainter_callback = nullptr;
    KTitleWidget_Redirected_Callback ktitlewidget_redirected_callback = nullptr;
    KTitleWidget_SharedPainter_Callback ktitlewidget_sharedpainter_callback = nullptr;
    KTitleWidget_InputMethodEvent_Callback ktitlewidget_inputmethodevent_callback = nullptr;
    KTitleWidget_InputMethodQuery_Callback ktitlewidget_inputmethodquery_callback = nullptr;
    KTitleWidget_FocusNextPrevChild_Callback ktitlewidget_focusnextprevchild_callback = nullptr;
    KTitleWidget_TimerEvent_Callback ktitlewidget_timerevent_callback = nullptr;
    KTitleWidget_ChildEvent_Callback ktitlewidget_childevent_callback = nullptr;
    KTitleWidget_CustomEvent_Callback ktitlewidget_customevent_callback = nullptr;
    KTitleWidget_ConnectNotify_Callback ktitlewidget_connectnotify_callback = nullptr;
    KTitleWidget_DisconnectNotify_Callback ktitlewidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KTitleWidget {
        using KTitleWidget::actionEvent;
        using KTitleWidget::changeEvent;
        using KTitleWidget::childEvent;
        using KTitleWidget::closeEvent;
        using KTitleWidget::connectNotify;
        using KTitleWidget::contextMenuEvent;
        using KTitleWidget::customEvent;
        using KTitleWidget::disconnectNotify;
        using KTitleWidget::dragEnterEvent;
        using KTitleWidget::dragLeaveEvent;
        using KTitleWidget::dragMoveEvent;
        using KTitleWidget::dropEvent;
        using KTitleWidget::enterEvent;
        using KTitleWidget::event;
        using KTitleWidget::eventFilter;
        using KTitleWidget::focusInEvent;
        using KTitleWidget::focusNextPrevChild;
        using KTitleWidget::focusOutEvent;
        using KTitleWidget::hideEvent;
        using KTitleWidget::initPainter;
        using KTitleWidget::inputMethodEvent;
        using KTitleWidget::keyPressEvent;
        using KTitleWidget::keyReleaseEvent;
        using KTitleWidget::leaveEvent;
        using KTitleWidget::metric;
        using KTitleWidget::mouseDoubleClickEvent;
        using KTitleWidget::mouseMoveEvent;
        using KTitleWidget::mousePressEvent;
        using KTitleWidget::mouseReleaseEvent;
        using KTitleWidget::moveEvent;
        using KTitleWidget::nativeEvent;
        using KTitleWidget::paintEvent;
        using KTitleWidget::redirected;
        using KTitleWidget::resizeEvent;
        using KTitleWidget::sharedPainter;
        using KTitleWidget::showEvent;
        using KTitleWidget::tabletEvent;
        using KTitleWidget::timerEvent;
        using KTitleWidget::wheelEvent;
    };

    VirtualKTitleWidget(QWidget* parent) : KTitleWidget(parent) {};
    VirtualKTitleWidget() : KTitleWidget() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ktitlewidget_metaobject_callback) {
            QMetaObject* callback_ret = ktitlewidget_metaobject_callback(this);
            return callback_ret;
        }
        return KTitleWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ktitlewidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = ktitlewidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KTitleWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktitlewidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = ktitlewidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KTitleWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (ktitlewidget_changeevent_callback) {
            QEvent* cbval1 = e;
            ktitlewidget_changeevent_callback(this, cbval1);
            return;
        }
        KTitleWidget::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (ktitlewidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            ktitlewidget_showevent_callback(this, cbval1);
            return;
        }
        KTitleWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (ktitlewidget_eventfilter_callback) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;
            bool callback_ret = ktitlewidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KTitleWidget::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (ktitlewidget_devtype_callback) {
            int callback_ret = ktitlewidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KTitleWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (ktitlewidget_setvisible_callback) {
            bool cbval1 = visible;
            ktitlewidget_setvisible_callback(this, cbval1);
            return;
        }
        KTitleWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (ktitlewidget_sizehint_callback) {
            QSize* callback_ret = ktitlewidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KTitleWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (ktitlewidget_minimumsizehint_callback) {
            QSize* callback_ret = ktitlewidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KTitleWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (ktitlewidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = ktitlewidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KTitleWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (ktitlewidget_hasheightforwidth_callback) {
            bool callback_ret = ktitlewidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KTitleWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (ktitlewidget_paintengine_callback) {
            QPaintEngine* callback_ret = ktitlewidget_paintengine_callback(this);
            return callback_ret;
        }
        return KTitleWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktitlewidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = ktitlewidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return KTitleWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (ktitlewidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            ktitlewidget_mousepressevent_callback(this, cbval1);
            return;
        }
        KTitleWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (ktitlewidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            ktitlewidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KTitleWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (ktitlewidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            ktitlewidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KTitleWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (ktitlewidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            ktitlewidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        KTitleWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (ktitlewidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            ktitlewidget_wheelevent_callback(this, cbval1);
            return;
        }
        KTitleWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (ktitlewidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            ktitlewidget_keypressevent_callback(this, cbval1);
            return;
        }
        KTitleWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (ktitlewidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            ktitlewidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KTitleWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (ktitlewidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            ktitlewidget_focusinevent_callback(this, cbval1);
            return;
        }
        KTitleWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (ktitlewidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            ktitlewidget_focusoutevent_callback(this, cbval1);
            return;
        }
        KTitleWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (ktitlewidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            ktitlewidget_enterevent_callback(this, cbval1);
            return;
        }
        KTitleWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (ktitlewidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            ktitlewidget_leaveevent_callback(this, cbval1);
            return;
        }
        KTitleWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (ktitlewidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            ktitlewidget_paintevent_callback(this, cbval1);
            return;
        }
        KTitleWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (ktitlewidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            ktitlewidget_moveevent_callback(this, cbval1);
            return;
        }
        KTitleWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (ktitlewidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            ktitlewidget_resizeevent_callback(this, cbval1);
            return;
        }
        KTitleWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (ktitlewidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            ktitlewidget_closeevent_callback(this, cbval1);
            return;
        }
        KTitleWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (ktitlewidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            ktitlewidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        KTitleWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (ktitlewidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            ktitlewidget_tabletevent_callback(this, cbval1);
            return;
        }
        KTitleWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (ktitlewidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            ktitlewidget_actionevent_callback(this, cbval1);
            return;
        }
        KTitleWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (ktitlewidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            ktitlewidget_dragenterevent_callback(this, cbval1);
            return;
        }
        KTitleWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (ktitlewidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            ktitlewidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        KTitleWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (ktitlewidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            ktitlewidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        KTitleWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (ktitlewidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            ktitlewidget_dropevent_callback(this, cbval1);
            return;
        }
        KTitleWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (ktitlewidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            ktitlewidget_hideevent_callback(this, cbval1);
            return;
        }
        KTitleWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (ktitlewidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = ktitlewidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KTitleWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (ktitlewidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = ktitlewidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KTitleWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (ktitlewidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            ktitlewidget_initpainter_callback(this, cbval1);
            return;
        }
        KTitleWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (ktitlewidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = ktitlewidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KTitleWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (ktitlewidget_sharedpainter_callback) {
            QPainter* callback_ret = ktitlewidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return KTitleWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (ktitlewidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            ktitlewidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        KTitleWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (ktitlewidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = ktitlewidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KTitleWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (ktitlewidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = ktitlewidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KTitleWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktitlewidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            ktitlewidget_timerevent_callback(this, cbval1);
            return;
        }
        KTitleWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktitlewidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            ktitlewidget_childevent_callback(this, cbval1);
            return;
        }
        KTitleWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktitlewidget_customevent_callback) {
            QEvent* cbval1 = event;
            ktitlewidget_customevent_callback(this, cbval1);
            return;
        }
        KTitleWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktitlewidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktitlewidget_connectnotify_callback(this, cbval1);
            return;
        }
        KTitleWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktitlewidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktitlewidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        KTitleWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend void KTitleWidget_SuperChangeEvent(KTitleWidget* self, QEvent* e);
    friend void KTitleWidget_SuperShowEvent(KTitleWidget* self, QShowEvent* event);
    friend bool KTitleWidget_SuperEventFilter(KTitleWidget* self, QObject* object, QEvent* event);
    friend bool KTitleWidget_SuperEvent(KTitleWidget* self, QEvent* event);
    friend void KTitleWidget_SuperMousePressEvent(KTitleWidget* self, QMouseEvent* event);
    friend void KTitleWidget_SuperMouseReleaseEvent(KTitleWidget* self, QMouseEvent* event);
    friend void KTitleWidget_SuperMouseDoubleClickEvent(KTitleWidget* self, QMouseEvent* event);
    friend void KTitleWidget_SuperMouseMoveEvent(KTitleWidget* self, QMouseEvent* event);
    friend void KTitleWidget_SuperWheelEvent(KTitleWidget* self, QWheelEvent* event);
    friend void KTitleWidget_SuperKeyPressEvent(KTitleWidget* self, QKeyEvent* event);
    friend void KTitleWidget_SuperKeyReleaseEvent(KTitleWidget* self, QKeyEvent* event);
    friend void KTitleWidget_SuperFocusInEvent(KTitleWidget* self, QFocusEvent* event);
    friend void KTitleWidget_SuperFocusOutEvent(KTitleWidget* self, QFocusEvent* event);
    friend void KTitleWidget_SuperEnterEvent(KTitleWidget* self, QEnterEvent* event);
    friend void KTitleWidget_SuperLeaveEvent(KTitleWidget* self, QEvent* event);
    friend void KTitleWidget_SuperPaintEvent(KTitleWidget* self, QPaintEvent* event);
    friend void KTitleWidget_SuperMoveEvent(KTitleWidget* self, QMoveEvent* event);
    friend void KTitleWidget_SuperResizeEvent(KTitleWidget* self, QResizeEvent* event);
    friend void KTitleWidget_SuperCloseEvent(KTitleWidget* self, QCloseEvent* event);
    friend void KTitleWidget_SuperContextMenuEvent(KTitleWidget* self, QContextMenuEvent* event);
    friend void KTitleWidget_SuperTabletEvent(KTitleWidget* self, QTabletEvent* event);
    friend void KTitleWidget_SuperActionEvent(KTitleWidget* self, QActionEvent* event);
    friend void KTitleWidget_SuperDragEnterEvent(KTitleWidget* self, QDragEnterEvent* event);
    friend void KTitleWidget_SuperDragMoveEvent(KTitleWidget* self, QDragMoveEvent* event);
    friend void KTitleWidget_SuperDragLeaveEvent(KTitleWidget* self, QDragLeaveEvent* event);
    friend void KTitleWidget_SuperDropEvent(KTitleWidget* self, QDropEvent* event);
    friend void KTitleWidget_SuperHideEvent(KTitleWidget* self, QHideEvent* event);
    friend bool KTitleWidget_SuperNativeEvent(KTitleWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KTitleWidget_SuperMetric(const KTitleWidget* self, int param1);
    friend void KTitleWidget_SuperInitPainter(const KTitleWidget* self, QPainter* painter);
    friend QPaintDevice* KTitleWidget_SuperRedirected(const KTitleWidget* self, QPoint* offset);
    friend QPainter* KTitleWidget_SuperSharedPainter(const KTitleWidget* self);
    friend void KTitleWidget_SuperInputMethodEvent(KTitleWidget* self, QInputMethodEvent* param1);
    friend bool KTitleWidget_SuperFocusNextPrevChild(KTitleWidget* self, bool next);
    friend void KTitleWidget_SuperTimerEvent(KTitleWidget* self, QTimerEvent* event);
    friend void KTitleWidget_SuperChildEvent(KTitleWidget* self, QChildEvent* event);
    friend void KTitleWidget_SuperCustomEvent(KTitleWidget* self, QEvent* event);
    friend void KTitleWidget_SuperConnectNotify(KTitleWidget* self, const QMetaMethod* signal);
    friend void KTitleWidget_SuperDisconnectNotify(KTitleWidget* self, const QMetaMethod* signal);
};

#endif
