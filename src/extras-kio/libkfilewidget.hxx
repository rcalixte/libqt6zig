#pragma once
#ifndef EXTRAS_KIO_LIBKFILEWIDGET_HXX
#define EXTRAS_KIO_LIBKFILEWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFileWidget
class VirtualKFileWidget final : public KFileWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using KFileWidget_MetaObject_Callback = QMetaObject* (*)(const KFileWidget*);
    using KFileWidget_Metacast_Callback = void* (*)(KFileWidget*, const char*);
    using KFileWidget_Metacall_Callback = int (*)(KFileWidget*, int, int, void**);
    using KFileWidget_SizeHint_Callback = QSize* (*)(const KFileWidget*);
    using KFileWidget_ResizeEvent_Callback = void (*)(KFileWidget*, QResizeEvent*);
    using KFileWidget_ShowEvent_Callback = void (*)(KFileWidget*, QShowEvent*);
    using KFileWidget_EventFilter_Callback = bool (*)(KFileWidget*, QObject*, QEvent*);
    using KFileWidget_DevType_Callback = int (*)(const KFileWidget*);
    using KFileWidget_SetVisible_Callback = void (*)(KFileWidget*, bool);
    using KFileWidget_MinimumSizeHint_Callback = QSize* (*)(const KFileWidget*);
    using KFileWidget_HeightForWidth_Callback = int (*)(const KFileWidget*, int);
    using KFileWidget_HasHeightForWidth_Callback = bool (*)(const KFileWidget*);
    using KFileWidget_PaintEngine_Callback = QPaintEngine* (*)(const KFileWidget*);
    using KFileWidget_Event_Callback = bool (*)(KFileWidget*, QEvent*);
    using KFileWidget_MousePressEvent_Callback = void (*)(KFileWidget*, QMouseEvent*);
    using KFileWidget_MouseReleaseEvent_Callback = void (*)(KFileWidget*, QMouseEvent*);
    using KFileWidget_MouseDoubleClickEvent_Callback = void (*)(KFileWidget*, QMouseEvent*);
    using KFileWidget_MouseMoveEvent_Callback = void (*)(KFileWidget*, QMouseEvent*);
    using KFileWidget_WheelEvent_Callback = void (*)(KFileWidget*, QWheelEvent*);
    using KFileWidget_KeyPressEvent_Callback = void (*)(KFileWidget*, QKeyEvent*);
    using KFileWidget_KeyReleaseEvent_Callback = void (*)(KFileWidget*, QKeyEvent*);
    using KFileWidget_FocusInEvent_Callback = void (*)(KFileWidget*, QFocusEvent*);
    using KFileWidget_FocusOutEvent_Callback = void (*)(KFileWidget*, QFocusEvent*);
    using KFileWidget_EnterEvent_Callback = void (*)(KFileWidget*, QEnterEvent*);
    using KFileWidget_LeaveEvent_Callback = void (*)(KFileWidget*, QEvent*);
    using KFileWidget_PaintEvent_Callback = void (*)(KFileWidget*, QPaintEvent*);
    using KFileWidget_MoveEvent_Callback = void (*)(KFileWidget*, QMoveEvent*);
    using KFileWidget_CloseEvent_Callback = void (*)(KFileWidget*, QCloseEvent*);
    using KFileWidget_ContextMenuEvent_Callback = void (*)(KFileWidget*, QContextMenuEvent*);
    using KFileWidget_TabletEvent_Callback = void (*)(KFileWidget*, QTabletEvent*);
    using KFileWidget_ActionEvent_Callback = void (*)(KFileWidget*, QActionEvent*);
    using KFileWidget_DragEnterEvent_Callback = void (*)(KFileWidget*, QDragEnterEvent*);
    using KFileWidget_DragMoveEvent_Callback = void (*)(KFileWidget*, QDragMoveEvent*);
    using KFileWidget_DragLeaveEvent_Callback = void (*)(KFileWidget*, QDragLeaveEvent*);
    using KFileWidget_DropEvent_Callback = void (*)(KFileWidget*, QDropEvent*);
    using KFileWidget_HideEvent_Callback = void (*)(KFileWidget*, QHideEvent*);
    using KFileWidget_NativeEvent_Callback = bool (*)(KFileWidget*, libqt_string, void*, intptr_t*);
    using KFileWidget_ChangeEvent_Callback = void (*)(KFileWidget*, QEvent*);
    using KFileWidget_Metric_Callback = int (*)(const KFileWidget*, int);
    using KFileWidget_InitPainter_Callback = void (*)(const KFileWidget*, QPainter*);
    using KFileWidget_Redirected_Callback = QPaintDevice* (*)(const KFileWidget*, QPoint*);
    using KFileWidget_SharedPainter_Callback = QPainter* (*)(const KFileWidget*);
    using KFileWidget_InputMethodEvent_Callback = void (*)(KFileWidget*, QInputMethodEvent*);
    using KFileWidget_InputMethodQuery_Callback = QVariant* (*)(const KFileWidget*, int);
    using KFileWidget_FocusNextPrevChild_Callback = bool (*)(KFileWidget*, bool);
    using KFileWidget_TimerEvent_Callback = void (*)(KFileWidget*, QTimerEvent*);
    using KFileWidget_ChildEvent_Callback = void (*)(KFileWidget*, QChildEvent*);
    using KFileWidget_CustomEvent_Callback = void (*)(KFileWidget*, QEvent*);
    using KFileWidget_ConnectNotify_Callback = void (*)(KFileWidget*, QMetaMethod*);
    using KFileWidget_DisconnectNotify_Callback = void (*)(KFileWidget*, QMetaMethod*);
    using KFileWidget::create;
    using KFileWidget::destroy;
    using KFileWidget::focusNextChild;
    using KFileWidget::focusPreviousChild;
    using KFileWidget::getDecodedMetricF;
    using KFileWidget::isSignalConnected;
    using KFileWidget::receivers;
    using KFileWidget::sender;
    using KFileWidget::senderSignalIndex;
    using KFileWidget::updateMicroFocus;

    // Instance callback storage
    KFileWidget_MetaObject_Callback kfilewidget_metaobject_callback = nullptr;
    KFileWidget_Metacast_Callback kfilewidget_metacast_callback = nullptr;
    KFileWidget_Metacall_Callback kfilewidget_metacall_callback = nullptr;
    KFileWidget_SizeHint_Callback kfilewidget_sizehint_callback = nullptr;
    KFileWidget_ResizeEvent_Callback kfilewidget_resizeevent_callback = nullptr;
    KFileWidget_ShowEvent_Callback kfilewidget_showevent_callback = nullptr;
    KFileWidget_EventFilter_Callback kfilewidget_eventfilter_callback = nullptr;
    KFileWidget_DevType_Callback kfilewidget_devtype_callback = nullptr;
    KFileWidget_SetVisible_Callback kfilewidget_setvisible_callback = nullptr;
    KFileWidget_MinimumSizeHint_Callback kfilewidget_minimumsizehint_callback = nullptr;
    KFileWidget_HeightForWidth_Callback kfilewidget_heightforwidth_callback = nullptr;
    KFileWidget_HasHeightForWidth_Callback kfilewidget_hasheightforwidth_callback = nullptr;
    KFileWidget_PaintEngine_Callback kfilewidget_paintengine_callback = nullptr;
    KFileWidget_Event_Callback kfilewidget_event_callback = nullptr;
    KFileWidget_MousePressEvent_Callback kfilewidget_mousepressevent_callback = nullptr;
    KFileWidget_MouseReleaseEvent_Callback kfilewidget_mousereleaseevent_callback = nullptr;
    KFileWidget_MouseDoubleClickEvent_Callback kfilewidget_mousedoubleclickevent_callback = nullptr;
    KFileWidget_MouseMoveEvent_Callback kfilewidget_mousemoveevent_callback = nullptr;
    KFileWidget_WheelEvent_Callback kfilewidget_wheelevent_callback = nullptr;
    KFileWidget_KeyPressEvent_Callback kfilewidget_keypressevent_callback = nullptr;
    KFileWidget_KeyReleaseEvent_Callback kfilewidget_keyreleaseevent_callback = nullptr;
    KFileWidget_FocusInEvent_Callback kfilewidget_focusinevent_callback = nullptr;
    KFileWidget_FocusOutEvent_Callback kfilewidget_focusoutevent_callback = nullptr;
    KFileWidget_EnterEvent_Callback kfilewidget_enterevent_callback = nullptr;
    KFileWidget_LeaveEvent_Callback kfilewidget_leaveevent_callback = nullptr;
    KFileWidget_PaintEvent_Callback kfilewidget_paintevent_callback = nullptr;
    KFileWidget_MoveEvent_Callback kfilewidget_moveevent_callback = nullptr;
    KFileWidget_CloseEvent_Callback kfilewidget_closeevent_callback = nullptr;
    KFileWidget_ContextMenuEvent_Callback kfilewidget_contextmenuevent_callback = nullptr;
    KFileWidget_TabletEvent_Callback kfilewidget_tabletevent_callback = nullptr;
    KFileWidget_ActionEvent_Callback kfilewidget_actionevent_callback = nullptr;
    KFileWidget_DragEnterEvent_Callback kfilewidget_dragenterevent_callback = nullptr;
    KFileWidget_DragMoveEvent_Callback kfilewidget_dragmoveevent_callback = nullptr;
    KFileWidget_DragLeaveEvent_Callback kfilewidget_dragleaveevent_callback = nullptr;
    KFileWidget_DropEvent_Callback kfilewidget_dropevent_callback = nullptr;
    KFileWidget_HideEvent_Callback kfilewidget_hideevent_callback = nullptr;
    KFileWidget_NativeEvent_Callback kfilewidget_nativeevent_callback = nullptr;
    KFileWidget_ChangeEvent_Callback kfilewidget_changeevent_callback = nullptr;
    KFileWidget_Metric_Callback kfilewidget_metric_callback = nullptr;
    KFileWidget_InitPainter_Callback kfilewidget_initpainter_callback = nullptr;
    KFileWidget_Redirected_Callback kfilewidget_redirected_callback = nullptr;
    KFileWidget_SharedPainter_Callback kfilewidget_sharedpainter_callback = nullptr;
    KFileWidget_InputMethodEvent_Callback kfilewidget_inputmethodevent_callback = nullptr;
    KFileWidget_InputMethodQuery_Callback kfilewidget_inputmethodquery_callback = nullptr;
    KFileWidget_FocusNextPrevChild_Callback kfilewidget_focusnextprevchild_callback = nullptr;
    KFileWidget_TimerEvent_Callback kfilewidget_timerevent_callback = nullptr;
    KFileWidget_ChildEvent_Callback kfilewidget_childevent_callback = nullptr;
    KFileWidget_CustomEvent_Callback kfilewidget_customevent_callback = nullptr;
    KFileWidget_ConnectNotify_Callback kfilewidget_connectnotify_callback = nullptr;
    KFileWidget_DisconnectNotify_Callback kfilewidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KFileWidget {
        using KFileWidget::actionEvent;
        using KFileWidget::changeEvent;
        using KFileWidget::childEvent;
        using KFileWidget::closeEvent;
        using KFileWidget::connectNotify;
        using KFileWidget::contextMenuEvent;
        using KFileWidget::customEvent;
        using KFileWidget::disconnectNotify;
        using KFileWidget::dragEnterEvent;
        using KFileWidget::dragLeaveEvent;
        using KFileWidget::dragMoveEvent;
        using KFileWidget::dropEvent;
        using KFileWidget::enterEvent;
        using KFileWidget::event;
        using KFileWidget::eventFilter;
        using KFileWidget::focusInEvent;
        using KFileWidget::focusNextPrevChild;
        using KFileWidget::focusOutEvent;
        using KFileWidget::hideEvent;
        using KFileWidget::initPainter;
        using KFileWidget::inputMethodEvent;
        using KFileWidget::keyPressEvent;
        using KFileWidget::keyReleaseEvent;
        using KFileWidget::leaveEvent;
        using KFileWidget::metric;
        using KFileWidget::mouseDoubleClickEvent;
        using KFileWidget::mouseMoveEvent;
        using KFileWidget::mousePressEvent;
        using KFileWidget::mouseReleaseEvent;
        using KFileWidget::moveEvent;
        using KFileWidget::nativeEvent;
        using KFileWidget::paintEvent;
        using KFileWidget::redirected;
        using KFileWidget::resizeEvent;
        using KFileWidget::sharedPainter;
        using KFileWidget::showEvent;
        using KFileWidget::tabletEvent;
        using KFileWidget::timerEvent;
        using KFileWidget::wheelEvent;
    };

    VirtualKFileWidget(const QUrl& startDir) : KFileWidget(startDir) {};
    VirtualKFileWidget(const QUrl& startDir, QWidget* parent) : KFileWidget(startDir, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kfilewidget_metaobject_callback) {
            QMetaObject* callback_ret = kfilewidget_metaobject_callback(this);
            return callback_ret;
        }
        return KFileWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kfilewidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kfilewidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KFileWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfilewidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kfilewidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KFileWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kfilewidget_sizehint_callback) {
            QSize* callback_ret = kfilewidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFileWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kfilewidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kfilewidget_resizeevent_callback(this, cbval1);
            return;
        }
        KFileWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kfilewidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            kfilewidget_showevent_callback(this, cbval1);
            return;
        }
        KFileWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kfilewidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kfilewidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KFileWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kfilewidget_devtype_callback) {
            int callback_ret = kfilewidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KFileWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kfilewidget_setvisible_callback) {
            bool cbval1 = visible;
            kfilewidget_setvisible_callback(this, cbval1);
            return;
        }
        KFileWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kfilewidget_minimumsizehint_callback) {
            QSize* callback_ret = kfilewidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFileWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kfilewidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kfilewidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFileWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kfilewidget_hasheightforwidth_callback) {
            bool callback_ret = kfilewidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KFileWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kfilewidget_paintengine_callback) {
            QPaintEngine* callback_ret = kfilewidget_paintengine_callback(this);
            return callback_ret;
        }
        return KFileWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfilewidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kfilewidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return KFileWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kfilewidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kfilewidget_mousepressevent_callback(this, cbval1);
            return;
        }
        KFileWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kfilewidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kfilewidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KFileWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kfilewidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kfilewidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KFileWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kfilewidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kfilewidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        KFileWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kfilewidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kfilewidget_wheelevent_callback(this, cbval1);
            return;
        }
        KFileWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kfilewidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kfilewidget_keypressevent_callback(this, cbval1);
            return;
        }
        KFileWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kfilewidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kfilewidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KFileWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kfilewidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kfilewidget_focusinevent_callback(this, cbval1);
            return;
        }
        KFileWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kfilewidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kfilewidget_focusoutevent_callback(this, cbval1);
            return;
        }
        KFileWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kfilewidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kfilewidget_enterevent_callback(this, cbval1);
            return;
        }
        KFileWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kfilewidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            kfilewidget_leaveevent_callback(this, cbval1);
            return;
        }
        KFileWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kfilewidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kfilewidget_paintevent_callback(this, cbval1);
            return;
        }
        KFileWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kfilewidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kfilewidget_moveevent_callback(this, cbval1);
            return;
        }
        KFileWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kfilewidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kfilewidget_closeevent_callback(this, cbval1);
            return;
        }
        KFileWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kfilewidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kfilewidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        KFileWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kfilewidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kfilewidget_tabletevent_callback(this, cbval1);
            return;
        }
        KFileWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kfilewidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kfilewidget_actionevent_callback(this, cbval1);
            return;
        }
        KFileWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kfilewidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kfilewidget_dragenterevent_callback(this, cbval1);
            return;
        }
        KFileWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kfilewidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kfilewidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        KFileWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kfilewidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kfilewidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        KFileWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kfilewidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kfilewidget_dropevent_callback(this, cbval1);
            return;
        }
        KFileWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kfilewidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kfilewidget_hideevent_callback(this, cbval1);
            return;
        }
        KFileWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kfilewidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kfilewidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KFileWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kfilewidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            kfilewidget_changeevent_callback(this, cbval1);
            return;
        }
        KFileWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kfilewidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kfilewidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFileWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kfilewidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            kfilewidget_initpainter_callback(this, cbval1);
            return;
        }
        KFileWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kfilewidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kfilewidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KFileWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kfilewidget_sharedpainter_callback) {
            QPainter* callback_ret = kfilewidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return KFileWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kfilewidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kfilewidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        KFileWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kfilewidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kfilewidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFileWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kfilewidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kfilewidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KFileWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfilewidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kfilewidget_timerevent_callback(this, cbval1);
            return;
        }
        KFileWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfilewidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            kfilewidget_childevent_callback(this, cbval1);
            return;
        }
        KFileWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfilewidget_customevent_callback) {
            QEvent* cbval1 = event;
            kfilewidget_customevent_callback(this, cbval1);
            return;
        }
        KFileWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfilewidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfilewidget_connectnotify_callback(this, cbval1);
            return;
        }
        KFileWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfilewidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfilewidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        KFileWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend void KFileWidget_SuperResizeEvent(KFileWidget* self, QResizeEvent* event);
    friend void KFileWidget_SuperShowEvent(KFileWidget* self, QShowEvent* event);
    friend bool KFileWidget_SuperEventFilter(KFileWidget* self, QObject* watched, QEvent* event);
    friend bool KFileWidget_SuperEvent(KFileWidget* self, QEvent* event);
    friend void KFileWidget_SuperMousePressEvent(KFileWidget* self, QMouseEvent* event);
    friend void KFileWidget_SuperMouseReleaseEvent(KFileWidget* self, QMouseEvent* event);
    friend void KFileWidget_SuperMouseDoubleClickEvent(KFileWidget* self, QMouseEvent* event);
    friend void KFileWidget_SuperMouseMoveEvent(KFileWidget* self, QMouseEvent* event);
    friend void KFileWidget_SuperWheelEvent(KFileWidget* self, QWheelEvent* event);
    friend void KFileWidget_SuperKeyPressEvent(KFileWidget* self, QKeyEvent* event);
    friend void KFileWidget_SuperKeyReleaseEvent(KFileWidget* self, QKeyEvent* event);
    friend void KFileWidget_SuperFocusInEvent(KFileWidget* self, QFocusEvent* event);
    friend void KFileWidget_SuperFocusOutEvent(KFileWidget* self, QFocusEvent* event);
    friend void KFileWidget_SuperEnterEvent(KFileWidget* self, QEnterEvent* event);
    friend void KFileWidget_SuperLeaveEvent(KFileWidget* self, QEvent* event);
    friend void KFileWidget_SuperPaintEvent(KFileWidget* self, QPaintEvent* event);
    friend void KFileWidget_SuperMoveEvent(KFileWidget* self, QMoveEvent* event);
    friend void KFileWidget_SuperCloseEvent(KFileWidget* self, QCloseEvent* event);
    friend void KFileWidget_SuperContextMenuEvent(KFileWidget* self, QContextMenuEvent* event);
    friend void KFileWidget_SuperTabletEvent(KFileWidget* self, QTabletEvent* event);
    friend void KFileWidget_SuperActionEvent(KFileWidget* self, QActionEvent* event);
    friend void KFileWidget_SuperDragEnterEvent(KFileWidget* self, QDragEnterEvent* event);
    friend void KFileWidget_SuperDragMoveEvent(KFileWidget* self, QDragMoveEvent* event);
    friend void KFileWidget_SuperDragLeaveEvent(KFileWidget* self, QDragLeaveEvent* event);
    friend void KFileWidget_SuperDropEvent(KFileWidget* self, QDropEvent* event);
    friend void KFileWidget_SuperHideEvent(KFileWidget* self, QHideEvent* event);
    friend bool KFileWidget_SuperNativeEvent(KFileWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KFileWidget_SuperChangeEvent(KFileWidget* self, QEvent* param1);
    friend int KFileWidget_SuperMetric(const KFileWidget* self, int param1);
    friend void KFileWidget_SuperInitPainter(const KFileWidget* self, QPainter* painter);
    friend QPaintDevice* KFileWidget_SuperRedirected(const KFileWidget* self, QPoint* offset);
    friend QPainter* KFileWidget_SuperSharedPainter(const KFileWidget* self);
    friend void KFileWidget_SuperInputMethodEvent(KFileWidget* self, QInputMethodEvent* param1);
    friend bool KFileWidget_SuperFocusNextPrevChild(KFileWidget* self, bool next);
    friend void KFileWidget_SuperTimerEvent(KFileWidget* self, QTimerEvent* event);
    friend void KFileWidget_SuperChildEvent(KFileWidget* self, QChildEvent* event);
    friend void KFileWidget_SuperCustomEvent(KFileWidget* self, QEvent* event);
    friend void KFileWidget_SuperConnectNotify(KFileWidget* self, const QMetaMethod* signal);
    friend void KFileWidget_SuperDisconnectNotify(KFileWidget* self, const QMetaMethod* signal);
};

#endif
