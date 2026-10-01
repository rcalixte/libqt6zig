#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKMESSAGEWIDGET_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKMESSAGEWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KMessageWidget
class VirtualKMessageWidget final : public KMessageWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using KMessageWidget_MetaObject_Callback = QMetaObject* (*)(const KMessageWidget*);
    using KMessageWidget_Metacast_Callback = void* (*)(KMessageWidget*, const char*);
    using KMessageWidget_Metacall_Callback = int (*)(KMessageWidget*, int, int, void**);
    using KMessageWidget_SizeHint_Callback = QSize* (*)(const KMessageWidget*);
    using KMessageWidget_MinimumSizeHint_Callback = QSize* (*)(const KMessageWidget*);
    using KMessageWidget_HeightForWidth_Callback = int (*)(const KMessageWidget*, int);
    using KMessageWidget_PaintEvent_Callback = void (*)(KMessageWidget*, QPaintEvent*);
    using KMessageWidget_Event_Callback = bool (*)(KMessageWidget*, QEvent*);
    using KMessageWidget_ResizeEvent_Callback = void (*)(KMessageWidget*, QResizeEvent*);
    using KMessageWidget_ChangeEvent_Callback = void (*)(KMessageWidget*, QEvent*);
    using KMessageWidget_InitStyleOption_Callback = void (*)(const KMessageWidget*, QStyleOptionFrame*);
    using KMessageWidget_DevType_Callback = int (*)(const KMessageWidget*);
    using KMessageWidget_SetVisible_Callback = void (*)(KMessageWidget*, bool);
    using KMessageWidget_HasHeightForWidth_Callback = bool (*)(const KMessageWidget*);
    using KMessageWidget_PaintEngine_Callback = QPaintEngine* (*)(const KMessageWidget*);
    using KMessageWidget_MousePressEvent_Callback = void (*)(KMessageWidget*, QMouseEvent*);
    using KMessageWidget_MouseReleaseEvent_Callback = void (*)(KMessageWidget*, QMouseEvent*);
    using KMessageWidget_MouseDoubleClickEvent_Callback = void (*)(KMessageWidget*, QMouseEvent*);
    using KMessageWidget_MouseMoveEvent_Callback = void (*)(KMessageWidget*, QMouseEvent*);
    using KMessageWidget_WheelEvent_Callback = void (*)(KMessageWidget*, QWheelEvent*);
    using KMessageWidget_KeyPressEvent_Callback = void (*)(KMessageWidget*, QKeyEvent*);
    using KMessageWidget_KeyReleaseEvent_Callback = void (*)(KMessageWidget*, QKeyEvent*);
    using KMessageWidget_FocusInEvent_Callback = void (*)(KMessageWidget*, QFocusEvent*);
    using KMessageWidget_FocusOutEvent_Callback = void (*)(KMessageWidget*, QFocusEvent*);
    using KMessageWidget_EnterEvent_Callback = void (*)(KMessageWidget*, QEnterEvent*);
    using KMessageWidget_LeaveEvent_Callback = void (*)(KMessageWidget*, QEvent*);
    using KMessageWidget_MoveEvent_Callback = void (*)(KMessageWidget*, QMoveEvent*);
    using KMessageWidget_CloseEvent_Callback = void (*)(KMessageWidget*, QCloseEvent*);
    using KMessageWidget_ContextMenuEvent_Callback = void (*)(KMessageWidget*, QContextMenuEvent*);
    using KMessageWidget_TabletEvent_Callback = void (*)(KMessageWidget*, QTabletEvent*);
    using KMessageWidget_ActionEvent_Callback = void (*)(KMessageWidget*, QActionEvent*);
    using KMessageWidget_DragEnterEvent_Callback = void (*)(KMessageWidget*, QDragEnterEvent*);
    using KMessageWidget_DragMoveEvent_Callback = void (*)(KMessageWidget*, QDragMoveEvent*);
    using KMessageWidget_DragLeaveEvent_Callback = void (*)(KMessageWidget*, QDragLeaveEvent*);
    using KMessageWidget_DropEvent_Callback = void (*)(KMessageWidget*, QDropEvent*);
    using KMessageWidget_ShowEvent_Callback = void (*)(KMessageWidget*, QShowEvent*);
    using KMessageWidget_HideEvent_Callback = void (*)(KMessageWidget*, QHideEvent*);
    using KMessageWidget_NativeEvent_Callback = bool (*)(KMessageWidget*, libqt_string, void*, intptr_t*);
    using KMessageWidget_Metric_Callback = int (*)(const KMessageWidget*, int);
    using KMessageWidget_InitPainter_Callback = void (*)(const KMessageWidget*, QPainter*);
    using KMessageWidget_Redirected_Callback = QPaintDevice* (*)(const KMessageWidget*, QPoint*);
    using KMessageWidget_SharedPainter_Callback = QPainter* (*)(const KMessageWidget*);
    using KMessageWidget_InputMethodEvent_Callback = void (*)(KMessageWidget*, QInputMethodEvent*);
    using KMessageWidget_InputMethodQuery_Callback = QVariant* (*)(const KMessageWidget*, int);
    using KMessageWidget_FocusNextPrevChild_Callback = bool (*)(KMessageWidget*, bool);
    using KMessageWidget_EventFilter_Callback = bool (*)(KMessageWidget*, QObject*, QEvent*);
    using KMessageWidget_TimerEvent_Callback = void (*)(KMessageWidget*, QTimerEvent*);
    using KMessageWidget_ChildEvent_Callback = void (*)(KMessageWidget*, QChildEvent*);
    using KMessageWidget_CustomEvent_Callback = void (*)(KMessageWidget*, QEvent*);
    using KMessageWidget_ConnectNotify_Callback = void (*)(KMessageWidget*, QMetaMethod*);
    using KMessageWidget_DisconnectNotify_Callback = void (*)(KMessageWidget*, QMetaMethod*);
    using KMessageWidget::create;
    using KMessageWidget::destroy;
    using KMessageWidget::drawFrame;
    using KMessageWidget::focusNextChild;
    using KMessageWidget::focusPreviousChild;
    using KMessageWidget::getDecodedMetricF;
    using KMessageWidget::isSignalConnected;
    using KMessageWidget::receivers;
    using KMessageWidget::sender;
    using KMessageWidget::senderSignalIndex;
    using KMessageWidget::updateMicroFocus;

    // Instance callback storage
    KMessageWidget_MetaObject_Callback kmessagewidget_metaobject_callback = nullptr;
    KMessageWidget_Metacast_Callback kmessagewidget_metacast_callback = nullptr;
    KMessageWidget_Metacall_Callback kmessagewidget_metacall_callback = nullptr;
    KMessageWidget_SizeHint_Callback kmessagewidget_sizehint_callback = nullptr;
    KMessageWidget_MinimumSizeHint_Callback kmessagewidget_minimumsizehint_callback = nullptr;
    KMessageWidget_HeightForWidth_Callback kmessagewidget_heightforwidth_callback = nullptr;
    KMessageWidget_PaintEvent_Callback kmessagewidget_paintevent_callback = nullptr;
    KMessageWidget_Event_Callback kmessagewidget_event_callback = nullptr;
    KMessageWidget_ResizeEvent_Callback kmessagewidget_resizeevent_callback = nullptr;
    KMessageWidget_ChangeEvent_Callback kmessagewidget_changeevent_callback = nullptr;
    KMessageWidget_InitStyleOption_Callback kmessagewidget_initstyleoption_callback = nullptr;
    KMessageWidget_DevType_Callback kmessagewidget_devtype_callback = nullptr;
    KMessageWidget_SetVisible_Callback kmessagewidget_setvisible_callback = nullptr;
    KMessageWidget_HasHeightForWidth_Callback kmessagewidget_hasheightforwidth_callback = nullptr;
    KMessageWidget_PaintEngine_Callback kmessagewidget_paintengine_callback = nullptr;
    KMessageWidget_MousePressEvent_Callback kmessagewidget_mousepressevent_callback = nullptr;
    KMessageWidget_MouseReleaseEvent_Callback kmessagewidget_mousereleaseevent_callback = nullptr;
    KMessageWidget_MouseDoubleClickEvent_Callback kmessagewidget_mousedoubleclickevent_callback = nullptr;
    KMessageWidget_MouseMoveEvent_Callback kmessagewidget_mousemoveevent_callback = nullptr;
    KMessageWidget_WheelEvent_Callback kmessagewidget_wheelevent_callback = nullptr;
    KMessageWidget_KeyPressEvent_Callback kmessagewidget_keypressevent_callback = nullptr;
    KMessageWidget_KeyReleaseEvent_Callback kmessagewidget_keyreleaseevent_callback = nullptr;
    KMessageWidget_FocusInEvent_Callback kmessagewidget_focusinevent_callback = nullptr;
    KMessageWidget_FocusOutEvent_Callback kmessagewidget_focusoutevent_callback = nullptr;
    KMessageWidget_EnterEvent_Callback kmessagewidget_enterevent_callback = nullptr;
    KMessageWidget_LeaveEvent_Callback kmessagewidget_leaveevent_callback = nullptr;
    KMessageWidget_MoveEvent_Callback kmessagewidget_moveevent_callback = nullptr;
    KMessageWidget_CloseEvent_Callback kmessagewidget_closeevent_callback = nullptr;
    KMessageWidget_ContextMenuEvent_Callback kmessagewidget_contextmenuevent_callback = nullptr;
    KMessageWidget_TabletEvent_Callback kmessagewidget_tabletevent_callback = nullptr;
    KMessageWidget_ActionEvent_Callback kmessagewidget_actionevent_callback = nullptr;
    KMessageWidget_DragEnterEvent_Callback kmessagewidget_dragenterevent_callback = nullptr;
    KMessageWidget_DragMoveEvent_Callback kmessagewidget_dragmoveevent_callback = nullptr;
    KMessageWidget_DragLeaveEvent_Callback kmessagewidget_dragleaveevent_callback = nullptr;
    KMessageWidget_DropEvent_Callback kmessagewidget_dropevent_callback = nullptr;
    KMessageWidget_ShowEvent_Callback kmessagewidget_showevent_callback = nullptr;
    KMessageWidget_HideEvent_Callback kmessagewidget_hideevent_callback = nullptr;
    KMessageWidget_NativeEvent_Callback kmessagewidget_nativeevent_callback = nullptr;
    KMessageWidget_Metric_Callback kmessagewidget_metric_callback = nullptr;
    KMessageWidget_InitPainter_Callback kmessagewidget_initpainter_callback = nullptr;
    KMessageWidget_Redirected_Callback kmessagewidget_redirected_callback = nullptr;
    KMessageWidget_SharedPainter_Callback kmessagewidget_sharedpainter_callback = nullptr;
    KMessageWidget_InputMethodEvent_Callback kmessagewidget_inputmethodevent_callback = nullptr;
    KMessageWidget_InputMethodQuery_Callback kmessagewidget_inputmethodquery_callback = nullptr;
    KMessageWidget_FocusNextPrevChild_Callback kmessagewidget_focusnextprevchild_callback = nullptr;
    KMessageWidget_EventFilter_Callback kmessagewidget_eventfilter_callback = nullptr;
    KMessageWidget_TimerEvent_Callback kmessagewidget_timerevent_callback = nullptr;
    KMessageWidget_ChildEvent_Callback kmessagewidget_childevent_callback = nullptr;
    KMessageWidget_CustomEvent_Callback kmessagewidget_customevent_callback = nullptr;
    KMessageWidget_ConnectNotify_Callback kmessagewidget_connectnotify_callback = nullptr;
    KMessageWidget_DisconnectNotify_Callback kmessagewidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KMessageWidget {
        using KMessageWidget::actionEvent;
        using KMessageWidget::changeEvent;
        using KMessageWidget::childEvent;
        using KMessageWidget::closeEvent;
        using KMessageWidget::connectNotify;
        using KMessageWidget::contextMenuEvent;
        using KMessageWidget::customEvent;
        using KMessageWidget::disconnectNotify;
        using KMessageWidget::dragEnterEvent;
        using KMessageWidget::dragLeaveEvent;
        using KMessageWidget::dragMoveEvent;
        using KMessageWidget::dropEvent;
        using KMessageWidget::enterEvent;
        using KMessageWidget::event;
        using KMessageWidget::focusInEvent;
        using KMessageWidget::focusNextPrevChild;
        using KMessageWidget::focusOutEvent;
        using KMessageWidget::hideEvent;
        using KMessageWidget::initPainter;
        using KMessageWidget::initStyleOption;
        using KMessageWidget::inputMethodEvent;
        using KMessageWidget::keyPressEvent;
        using KMessageWidget::keyReleaseEvent;
        using KMessageWidget::leaveEvent;
        using KMessageWidget::metric;
        using KMessageWidget::mouseDoubleClickEvent;
        using KMessageWidget::mouseMoveEvent;
        using KMessageWidget::mousePressEvent;
        using KMessageWidget::mouseReleaseEvent;
        using KMessageWidget::moveEvent;
        using KMessageWidget::nativeEvent;
        using KMessageWidget::paintEvent;
        using KMessageWidget::redirected;
        using KMessageWidget::resizeEvent;
        using KMessageWidget::sharedPainter;
        using KMessageWidget::showEvent;
        using KMessageWidget::tabletEvent;
        using KMessageWidget::timerEvent;
        using KMessageWidget::wheelEvent;
    };

    VirtualKMessageWidget(QWidget* parent) : KMessageWidget(parent) {};
    VirtualKMessageWidget() : KMessageWidget() {};
    VirtualKMessageWidget(const QString& text) : KMessageWidget(text) {};
    VirtualKMessageWidget(const QString& text, QWidget* parent) : KMessageWidget(text, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kmessagewidget_metaobject_callback) {
            QMetaObject* callback_ret = kmessagewidget_metaobject_callback(this);
            return callback_ret;
        }
        return KMessageWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kmessagewidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kmessagewidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KMessageWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kmessagewidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kmessagewidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KMessageWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kmessagewidget_sizehint_callback) {
            QSize* callback_ret = kmessagewidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KMessageWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kmessagewidget_minimumsizehint_callback) {
            QSize* callback_ret = kmessagewidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KMessageWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int width) const override {
        if (kmessagewidget_heightforwidth_callback) {
            int cbval1 = width;
            int callback_ret = kmessagewidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KMessageWidget::heightForWidth(width);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kmessagewidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kmessagewidget_paintevent_callback(this, cbval1);
            return;
        }
        KMessageWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kmessagewidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kmessagewidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return KMessageWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kmessagewidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kmessagewidget_resizeevent_callback(this, cbval1);
            return;
        }
        KMessageWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kmessagewidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            kmessagewidget_changeevent_callback(this, cbval1);
            return;
        }
        KMessageWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (kmessagewidget_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            kmessagewidget_initstyleoption_callback(this, cbval1);
            return;
        }
        KMessageWidget::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kmessagewidget_devtype_callback) {
            int callback_ret = kmessagewidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KMessageWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kmessagewidget_setvisible_callback) {
            bool cbval1 = visible;
            kmessagewidget_setvisible_callback(this, cbval1);
            return;
        }
        KMessageWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kmessagewidget_hasheightforwidth_callback) {
            bool callback_ret = kmessagewidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KMessageWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kmessagewidget_paintengine_callback) {
            QPaintEngine* callback_ret = kmessagewidget_paintengine_callback(this);
            return callback_ret;
        }
        return KMessageWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kmessagewidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kmessagewidget_mousepressevent_callback(this, cbval1);
            return;
        }
        KMessageWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kmessagewidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kmessagewidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KMessageWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kmessagewidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kmessagewidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KMessageWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kmessagewidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kmessagewidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        KMessageWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kmessagewidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kmessagewidget_wheelevent_callback(this, cbval1);
            return;
        }
        KMessageWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kmessagewidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kmessagewidget_keypressevent_callback(this, cbval1);
            return;
        }
        KMessageWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kmessagewidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kmessagewidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KMessageWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kmessagewidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kmessagewidget_focusinevent_callback(this, cbval1);
            return;
        }
        KMessageWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kmessagewidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kmessagewidget_focusoutevent_callback(this, cbval1);
            return;
        }
        KMessageWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kmessagewidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kmessagewidget_enterevent_callback(this, cbval1);
            return;
        }
        KMessageWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kmessagewidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            kmessagewidget_leaveevent_callback(this, cbval1);
            return;
        }
        KMessageWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kmessagewidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kmessagewidget_moveevent_callback(this, cbval1);
            return;
        }
        KMessageWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kmessagewidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kmessagewidget_closeevent_callback(this, cbval1);
            return;
        }
        KMessageWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kmessagewidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kmessagewidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        KMessageWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kmessagewidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kmessagewidget_tabletevent_callback(this, cbval1);
            return;
        }
        KMessageWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kmessagewidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kmessagewidget_actionevent_callback(this, cbval1);
            return;
        }
        KMessageWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kmessagewidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kmessagewidget_dragenterevent_callback(this, cbval1);
            return;
        }
        KMessageWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kmessagewidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kmessagewidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        KMessageWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kmessagewidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kmessagewidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        KMessageWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kmessagewidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kmessagewidget_dropevent_callback(this, cbval1);
            return;
        }
        KMessageWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kmessagewidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            kmessagewidget_showevent_callback(this, cbval1);
            return;
        }
        KMessageWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kmessagewidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kmessagewidget_hideevent_callback(this, cbval1);
            return;
        }
        KMessageWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kmessagewidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kmessagewidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KMessageWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kmessagewidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kmessagewidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KMessageWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kmessagewidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            kmessagewidget_initpainter_callback(this, cbval1);
            return;
        }
        KMessageWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kmessagewidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kmessagewidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KMessageWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kmessagewidget_sharedpainter_callback) {
            QPainter* callback_ret = kmessagewidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return KMessageWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kmessagewidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kmessagewidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        KMessageWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kmessagewidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kmessagewidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KMessageWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kmessagewidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kmessagewidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KMessageWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kmessagewidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kmessagewidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KMessageWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kmessagewidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kmessagewidget_timerevent_callback(this, cbval1);
            return;
        }
        KMessageWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kmessagewidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            kmessagewidget_childevent_callback(this, cbval1);
            return;
        }
        KMessageWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kmessagewidget_customevent_callback) {
            QEvent* cbval1 = event;
            kmessagewidget_customevent_callback(this, cbval1);
            return;
        }
        KMessageWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kmessagewidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kmessagewidget_connectnotify_callback(this, cbval1);
            return;
        }
        KMessageWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kmessagewidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kmessagewidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        KMessageWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend void KMessageWidget_SuperPaintEvent(KMessageWidget* self, QPaintEvent* event);
    friend bool KMessageWidget_SuperEvent(KMessageWidget* self, QEvent* event);
    friend void KMessageWidget_SuperResizeEvent(KMessageWidget* self, QResizeEvent* event);
    friend void KMessageWidget_SuperChangeEvent(KMessageWidget* self, QEvent* param1);
    friend void KMessageWidget_SuperInitStyleOption(const KMessageWidget* self, QStyleOptionFrame* option);
    friend void KMessageWidget_SuperMousePressEvent(KMessageWidget* self, QMouseEvent* event);
    friend void KMessageWidget_SuperMouseReleaseEvent(KMessageWidget* self, QMouseEvent* event);
    friend void KMessageWidget_SuperMouseDoubleClickEvent(KMessageWidget* self, QMouseEvent* event);
    friend void KMessageWidget_SuperMouseMoveEvent(KMessageWidget* self, QMouseEvent* event);
    friend void KMessageWidget_SuperWheelEvent(KMessageWidget* self, QWheelEvent* event);
    friend void KMessageWidget_SuperKeyPressEvent(KMessageWidget* self, QKeyEvent* event);
    friend void KMessageWidget_SuperKeyReleaseEvent(KMessageWidget* self, QKeyEvent* event);
    friend void KMessageWidget_SuperFocusInEvent(KMessageWidget* self, QFocusEvent* event);
    friend void KMessageWidget_SuperFocusOutEvent(KMessageWidget* self, QFocusEvent* event);
    friend void KMessageWidget_SuperEnterEvent(KMessageWidget* self, QEnterEvent* event);
    friend void KMessageWidget_SuperLeaveEvent(KMessageWidget* self, QEvent* event);
    friend void KMessageWidget_SuperMoveEvent(KMessageWidget* self, QMoveEvent* event);
    friend void KMessageWidget_SuperCloseEvent(KMessageWidget* self, QCloseEvent* event);
    friend void KMessageWidget_SuperContextMenuEvent(KMessageWidget* self, QContextMenuEvent* event);
    friend void KMessageWidget_SuperTabletEvent(KMessageWidget* self, QTabletEvent* event);
    friend void KMessageWidget_SuperActionEvent(KMessageWidget* self, QActionEvent* event);
    friend void KMessageWidget_SuperDragEnterEvent(KMessageWidget* self, QDragEnterEvent* event);
    friend void KMessageWidget_SuperDragMoveEvent(KMessageWidget* self, QDragMoveEvent* event);
    friend void KMessageWidget_SuperDragLeaveEvent(KMessageWidget* self, QDragLeaveEvent* event);
    friend void KMessageWidget_SuperDropEvent(KMessageWidget* self, QDropEvent* event);
    friend void KMessageWidget_SuperShowEvent(KMessageWidget* self, QShowEvent* event);
    friend void KMessageWidget_SuperHideEvent(KMessageWidget* self, QHideEvent* event);
    friend bool KMessageWidget_SuperNativeEvent(KMessageWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KMessageWidget_SuperMetric(const KMessageWidget* self, int param1);
    friend void KMessageWidget_SuperInitPainter(const KMessageWidget* self, QPainter* painter);
    friend QPaintDevice* KMessageWidget_SuperRedirected(const KMessageWidget* self, QPoint* offset);
    friend QPainter* KMessageWidget_SuperSharedPainter(const KMessageWidget* self);
    friend void KMessageWidget_SuperInputMethodEvent(KMessageWidget* self, QInputMethodEvent* param1);
    friend bool KMessageWidget_SuperFocusNextPrevChild(KMessageWidget* self, bool next);
    friend void KMessageWidget_SuperTimerEvent(KMessageWidget* self, QTimerEvent* event);
    friend void KMessageWidget_SuperChildEvent(KMessageWidget* self, QChildEvent* event);
    friend void KMessageWidget_SuperCustomEvent(KMessageWidget* self, QEvent* event);
    friend void KMessageWidget_SuperConnectNotify(KMessageWidget* self, const QMetaMethod* signal);
    friend void KMessageWidget_SuperDisconnectNotify(KMessageWidget* self, const QMetaMethod* signal);
};

#endif
