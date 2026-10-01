#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKPIXMAPSEQUENCEWIDGET_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKPIXMAPSEQUENCEWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPixmapSequenceWidget
class VirtualKPixmapSequenceWidget final : public KPixmapSequenceWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using KPixmapSequenceWidget_MetaObject_Callback = QMetaObject* (*)(const KPixmapSequenceWidget*);
    using KPixmapSequenceWidget_Metacast_Callback = void* (*)(KPixmapSequenceWidget*, const char*);
    using KPixmapSequenceWidget_Metacall_Callback = int (*)(KPixmapSequenceWidget*, int, int, void**);
    using KPixmapSequenceWidget_SizeHint_Callback = QSize* (*)(const KPixmapSequenceWidget*);
    using KPixmapSequenceWidget_DevType_Callback = int (*)(const KPixmapSequenceWidget*);
    using KPixmapSequenceWidget_SetVisible_Callback = void (*)(KPixmapSequenceWidget*, bool);
    using KPixmapSequenceWidget_MinimumSizeHint_Callback = QSize* (*)(const KPixmapSequenceWidget*);
    using KPixmapSequenceWidget_HeightForWidth_Callback = int (*)(const KPixmapSequenceWidget*, int);
    using KPixmapSequenceWidget_HasHeightForWidth_Callback = bool (*)(const KPixmapSequenceWidget*);
    using KPixmapSequenceWidget_PaintEngine_Callback = QPaintEngine* (*)(const KPixmapSequenceWidget*);
    using KPixmapSequenceWidget_Event_Callback = bool (*)(KPixmapSequenceWidget*, QEvent*);
    using KPixmapSequenceWidget_MousePressEvent_Callback = void (*)(KPixmapSequenceWidget*, QMouseEvent*);
    using KPixmapSequenceWidget_MouseReleaseEvent_Callback = void (*)(KPixmapSequenceWidget*, QMouseEvent*);
    using KPixmapSequenceWidget_MouseDoubleClickEvent_Callback = void (*)(KPixmapSequenceWidget*, QMouseEvent*);
    using KPixmapSequenceWidget_MouseMoveEvent_Callback = void (*)(KPixmapSequenceWidget*, QMouseEvent*);
    using KPixmapSequenceWidget_WheelEvent_Callback = void (*)(KPixmapSequenceWidget*, QWheelEvent*);
    using KPixmapSequenceWidget_KeyPressEvent_Callback = void (*)(KPixmapSequenceWidget*, QKeyEvent*);
    using KPixmapSequenceWidget_KeyReleaseEvent_Callback = void (*)(KPixmapSequenceWidget*, QKeyEvent*);
    using KPixmapSequenceWidget_FocusInEvent_Callback = void (*)(KPixmapSequenceWidget*, QFocusEvent*);
    using KPixmapSequenceWidget_FocusOutEvent_Callback = void (*)(KPixmapSequenceWidget*, QFocusEvent*);
    using KPixmapSequenceWidget_EnterEvent_Callback = void (*)(KPixmapSequenceWidget*, QEnterEvent*);
    using KPixmapSequenceWidget_LeaveEvent_Callback = void (*)(KPixmapSequenceWidget*, QEvent*);
    using KPixmapSequenceWidget_PaintEvent_Callback = void (*)(KPixmapSequenceWidget*, QPaintEvent*);
    using KPixmapSequenceWidget_MoveEvent_Callback = void (*)(KPixmapSequenceWidget*, QMoveEvent*);
    using KPixmapSequenceWidget_ResizeEvent_Callback = void (*)(KPixmapSequenceWidget*, QResizeEvent*);
    using KPixmapSequenceWidget_CloseEvent_Callback = void (*)(KPixmapSequenceWidget*, QCloseEvent*);
    using KPixmapSequenceWidget_ContextMenuEvent_Callback = void (*)(KPixmapSequenceWidget*, QContextMenuEvent*);
    using KPixmapSequenceWidget_TabletEvent_Callback = void (*)(KPixmapSequenceWidget*, QTabletEvent*);
    using KPixmapSequenceWidget_ActionEvent_Callback = void (*)(KPixmapSequenceWidget*, QActionEvent*);
    using KPixmapSequenceWidget_DragEnterEvent_Callback = void (*)(KPixmapSequenceWidget*, QDragEnterEvent*);
    using KPixmapSequenceWidget_DragMoveEvent_Callback = void (*)(KPixmapSequenceWidget*, QDragMoveEvent*);
    using KPixmapSequenceWidget_DragLeaveEvent_Callback = void (*)(KPixmapSequenceWidget*, QDragLeaveEvent*);
    using KPixmapSequenceWidget_DropEvent_Callback = void (*)(KPixmapSequenceWidget*, QDropEvent*);
    using KPixmapSequenceWidget_ShowEvent_Callback = void (*)(KPixmapSequenceWidget*, QShowEvent*);
    using KPixmapSequenceWidget_HideEvent_Callback = void (*)(KPixmapSequenceWidget*, QHideEvent*);
    using KPixmapSequenceWidget_NativeEvent_Callback = bool (*)(KPixmapSequenceWidget*, libqt_string, void*, intptr_t*);
    using KPixmapSequenceWidget_ChangeEvent_Callback = void (*)(KPixmapSequenceWidget*, QEvent*);
    using KPixmapSequenceWidget_Metric_Callback = int (*)(const KPixmapSequenceWidget*, int);
    using KPixmapSequenceWidget_InitPainter_Callback = void (*)(const KPixmapSequenceWidget*, QPainter*);
    using KPixmapSequenceWidget_Redirected_Callback = QPaintDevice* (*)(const KPixmapSequenceWidget*, QPoint*);
    using KPixmapSequenceWidget_SharedPainter_Callback = QPainter* (*)(const KPixmapSequenceWidget*);
    using KPixmapSequenceWidget_InputMethodEvent_Callback = void (*)(KPixmapSequenceWidget*, QInputMethodEvent*);
    using KPixmapSequenceWidget_InputMethodQuery_Callback = QVariant* (*)(const KPixmapSequenceWidget*, int);
    using KPixmapSequenceWidget_FocusNextPrevChild_Callback = bool (*)(KPixmapSequenceWidget*, bool);
    using KPixmapSequenceWidget_EventFilter_Callback = bool (*)(KPixmapSequenceWidget*, QObject*, QEvent*);
    using KPixmapSequenceWidget_TimerEvent_Callback = void (*)(KPixmapSequenceWidget*, QTimerEvent*);
    using KPixmapSequenceWidget_ChildEvent_Callback = void (*)(KPixmapSequenceWidget*, QChildEvent*);
    using KPixmapSequenceWidget_CustomEvent_Callback = void (*)(KPixmapSequenceWidget*, QEvent*);
    using KPixmapSequenceWidget_ConnectNotify_Callback = void (*)(KPixmapSequenceWidget*, QMetaMethod*);
    using KPixmapSequenceWidget_DisconnectNotify_Callback = void (*)(KPixmapSequenceWidget*, QMetaMethod*);
    using KPixmapSequenceWidget::create;
    using KPixmapSequenceWidget::destroy;
    using KPixmapSequenceWidget::focusNextChild;
    using KPixmapSequenceWidget::focusPreviousChild;
    using KPixmapSequenceWidget::getDecodedMetricF;
    using KPixmapSequenceWidget::isSignalConnected;
    using KPixmapSequenceWidget::receivers;
    using KPixmapSequenceWidget::sender;
    using KPixmapSequenceWidget::senderSignalIndex;
    using KPixmapSequenceWidget::updateMicroFocus;

    // Instance callback storage
    KPixmapSequenceWidget_MetaObject_Callback kpixmapsequencewidget_metaobject_callback = nullptr;
    KPixmapSequenceWidget_Metacast_Callback kpixmapsequencewidget_metacast_callback = nullptr;
    KPixmapSequenceWidget_Metacall_Callback kpixmapsequencewidget_metacall_callback = nullptr;
    KPixmapSequenceWidget_SizeHint_Callback kpixmapsequencewidget_sizehint_callback = nullptr;
    KPixmapSequenceWidget_DevType_Callback kpixmapsequencewidget_devtype_callback = nullptr;
    KPixmapSequenceWidget_SetVisible_Callback kpixmapsequencewidget_setvisible_callback = nullptr;
    KPixmapSequenceWidget_MinimumSizeHint_Callback kpixmapsequencewidget_minimumsizehint_callback = nullptr;
    KPixmapSequenceWidget_HeightForWidth_Callback kpixmapsequencewidget_heightforwidth_callback = nullptr;
    KPixmapSequenceWidget_HasHeightForWidth_Callback kpixmapsequencewidget_hasheightforwidth_callback = nullptr;
    KPixmapSequenceWidget_PaintEngine_Callback kpixmapsequencewidget_paintengine_callback = nullptr;
    KPixmapSequenceWidget_Event_Callback kpixmapsequencewidget_event_callback = nullptr;
    KPixmapSequenceWidget_MousePressEvent_Callback kpixmapsequencewidget_mousepressevent_callback = nullptr;
    KPixmapSequenceWidget_MouseReleaseEvent_Callback kpixmapsequencewidget_mousereleaseevent_callback = nullptr;
    KPixmapSequenceWidget_MouseDoubleClickEvent_Callback kpixmapsequencewidget_mousedoubleclickevent_callback = nullptr;
    KPixmapSequenceWidget_MouseMoveEvent_Callback kpixmapsequencewidget_mousemoveevent_callback = nullptr;
    KPixmapSequenceWidget_WheelEvent_Callback kpixmapsequencewidget_wheelevent_callback = nullptr;
    KPixmapSequenceWidget_KeyPressEvent_Callback kpixmapsequencewidget_keypressevent_callback = nullptr;
    KPixmapSequenceWidget_KeyReleaseEvent_Callback kpixmapsequencewidget_keyreleaseevent_callback = nullptr;
    KPixmapSequenceWidget_FocusInEvent_Callback kpixmapsequencewidget_focusinevent_callback = nullptr;
    KPixmapSequenceWidget_FocusOutEvent_Callback kpixmapsequencewidget_focusoutevent_callback = nullptr;
    KPixmapSequenceWidget_EnterEvent_Callback kpixmapsequencewidget_enterevent_callback = nullptr;
    KPixmapSequenceWidget_LeaveEvent_Callback kpixmapsequencewidget_leaveevent_callback = nullptr;
    KPixmapSequenceWidget_PaintEvent_Callback kpixmapsequencewidget_paintevent_callback = nullptr;
    KPixmapSequenceWidget_MoveEvent_Callback kpixmapsequencewidget_moveevent_callback = nullptr;
    KPixmapSequenceWidget_ResizeEvent_Callback kpixmapsequencewidget_resizeevent_callback = nullptr;
    KPixmapSequenceWidget_CloseEvent_Callback kpixmapsequencewidget_closeevent_callback = nullptr;
    KPixmapSequenceWidget_ContextMenuEvent_Callback kpixmapsequencewidget_contextmenuevent_callback = nullptr;
    KPixmapSequenceWidget_TabletEvent_Callback kpixmapsequencewidget_tabletevent_callback = nullptr;
    KPixmapSequenceWidget_ActionEvent_Callback kpixmapsequencewidget_actionevent_callback = nullptr;
    KPixmapSequenceWidget_DragEnterEvent_Callback kpixmapsequencewidget_dragenterevent_callback = nullptr;
    KPixmapSequenceWidget_DragMoveEvent_Callback kpixmapsequencewidget_dragmoveevent_callback = nullptr;
    KPixmapSequenceWidget_DragLeaveEvent_Callback kpixmapsequencewidget_dragleaveevent_callback = nullptr;
    KPixmapSequenceWidget_DropEvent_Callback kpixmapsequencewidget_dropevent_callback = nullptr;
    KPixmapSequenceWidget_ShowEvent_Callback kpixmapsequencewidget_showevent_callback = nullptr;
    KPixmapSequenceWidget_HideEvent_Callback kpixmapsequencewidget_hideevent_callback = nullptr;
    KPixmapSequenceWidget_NativeEvent_Callback kpixmapsequencewidget_nativeevent_callback = nullptr;
    KPixmapSequenceWidget_ChangeEvent_Callback kpixmapsequencewidget_changeevent_callback = nullptr;
    KPixmapSequenceWidget_Metric_Callback kpixmapsequencewidget_metric_callback = nullptr;
    KPixmapSequenceWidget_InitPainter_Callback kpixmapsequencewidget_initpainter_callback = nullptr;
    KPixmapSequenceWidget_Redirected_Callback kpixmapsequencewidget_redirected_callback = nullptr;
    KPixmapSequenceWidget_SharedPainter_Callback kpixmapsequencewidget_sharedpainter_callback = nullptr;
    KPixmapSequenceWidget_InputMethodEvent_Callback kpixmapsequencewidget_inputmethodevent_callback = nullptr;
    KPixmapSequenceWidget_InputMethodQuery_Callback kpixmapsequencewidget_inputmethodquery_callback = nullptr;
    KPixmapSequenceWidget_FocusNextPrevChild_Callback kpixmapsequencewidget_focusnextprevchild_callback = nullptr;
    KPixmapSequenceWidget_EventFilter_Callback kpixmapsequencewidget_eventfilter_callback = nullptr;
    KPixmapSequenceWidget_TimerEvent_Callback kpixmapsequencewidget_timerevent_callback = nullptr;
    KPixmapSequenceWidget_ChildEvent_Callback kpixmapsequencewidget_childevent_callback = nullptr;
    KPixmapSequenceWidget_CustomEvent_Callback kpixmapsequencewidget_customevent_callback = nullptr;
    KPixmapSequenceWidget_ConnectNotify_Callback kpixmapsequencewidget_connectnotify_callback = nullptr;
    KPixmapSequenceWidget_DisconnectNotify_Callback kpixmapsequencewidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KPixmapSequenceWidget {
        using KPixmapSequenceWidget::actionEvent;
        using KPixmapSequenceWidget::changeEvent;
        using KPixmapSequenceWidget::childEvent;
        using KPixmapSequenceWidget::closeEvent;
        using KPixmapSequenceWidget::connectNotify;
        using KPixmapSequenceWidget::contextMenuEvent;
        using KPixmapSequenceWidget::customEvent;
        using KPixmapSequenceWidget::disconnectNotify;
        using KPixmapSequenceWidget::dragEnterEvent;
        using KPixmapSequenceWidget::dragLeaveEvent;
        using KPixmapSequenceWidget::dragMoveEvent;
        using KPixmapSequenceWidget::dropEvent;
        using KPixmapSequenceWidget::enterEvent;
        using KPixmapSequenceWidget::event;
        using KPixmapSequenceWidget::focusInEvent;
        using KPixmapSequenceWidget::focusNextPrevChild;
        using KPixmapSequenceWidget::focusOutEvent;
        using KPixmapSequenceWidget::hideEvent;
        using KPixmapSequenceWidget::initPainter;
        using KPixmapSequenceWidget::inputMethodEvent;
        using KPixmapSequenceWidget::keyPressEvent;
        using KPixmapSequenceWidget::keyReleaseEvent;
        using KPixmapSequenceWidget::leaveEvent;
        using KPixmapSequenceWidget::metric;
        using KPixmapSequenceWidget::mouseDoubleClickEvent;
        using KPixmapSequenceWidget::mouseMoveEvent;
        using KPixmapSequenceWidget::mousePressEvent;
        using KPixmapSequenceWidget::mouseReleaseEvent;
        using KPixmapSequenceWidget::moveEvent;
        using KPixmapSequenceWidget::nativeEvent;
        using KPixmapSequenceWidget::paintEvent;
        using KPixmapSequenceWidget::redirected;
        using KPixmapSequenceWidget::resizeEvent;
        using KPixmapSequenceWidget::sharedPainter;
        using KPixmapSequenceWidget::showEvent;
        using KPixmapSequenceWidget::tabletEvent;
        using KPixmapSequenceWidget::timerEvent;
        using KPixmapSequenceWidget::wheelEvent;
    };

    VirtualKPixmapSequenceWidget(QWidget* parent) : KPixmapSequenceWidget(parent) {};
    VirtualKPixmapSequenceWidget() : KPixmapSequenceWidget() {};
    VirtualKPixmapSequenceWidget(const KPixmapSequence& seq) : KPixmapSequenceWidget(seq) {};
    VirtualKPixmapSequenceWidget(const KPixmapSequence& seq, QWidget* parent) : KPixmapSequenceWidget(seq, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kpixmapsequencewidget_metaobject_callback) {
            QMetaObject* callback_ret = kpixmapsequencewidget_metaobject_callback(this);
            return callback_ret;
        }
        return KPixmapSequenceWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kpixmapsequencewidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kpixmapsequencewidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KPixmapSequenceWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpixmapsequencewidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kpixmapsequencewidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KPixmapSequenceWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kpixmapsequencewidget_sizehint_callback) {
            QSize* callback_ret = kpixmapsequencewidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPixmapSequenceWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kpixmapsequencewidget_devtype_callback) {
            int callback_ret = kpixmapsequencewidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KPixmapSequenceWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kpixmapsequencewidget_setvisible_callback) {
            bool cbval1 = visible;
            kpixmapsequencewidget_setvisible_callback(this, cbval1);
            return;
        }
        KPixmapSequenceWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kpixmapsequencewidget_minimumsizehint_callback) {
            QSize* callback_ret = kpixmapsequencewidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPixmapSequenceWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kpixmapsequencewidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kpixmapsequencewidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPixmapSequenceWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kpixmapsequencewidget_hasheightforwidth_callback) {
            bool callback_ret = kpixmapsequencewidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KPixmapSequenceWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kpixmapsequencewidget_paintengine_callback) {
            QPaintEngine* callback_ret = kpixmapsequencewidget_paintengine_callback(this);
            return callback_ret;
        }
        return KPixmapSequenceWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpixmapsequencewidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kpixmapsequencewidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return KPixmapSequenceWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kpixmapsequencewidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kpixmapsequencewidget_mousepressevent_callback(this, cbval1);
            return;
        }
        KPixmapSequenceWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kpixmapsequencewidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kpixmapsequencewidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KPixmapSequenceWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kpixmapsequencewidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kpixmapsequencewidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KPixmapSequenceWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kpixmapsequencewidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kpixmapsequencewidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        KPixmapSequenceWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kpixmapsequencewidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kpixmapsequencewidget_wheelevent_callback(this, cbval1);
            return;
        }
        KPixmapSequenceWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kpixmapsequencewidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kpixmapsequencewidget_keypressevent_callback(this, cbval1);
            return;
        }
        KPixmapSequenceWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kpixmapsequencewidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kpixmapsequencewidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KPixmapSequenceWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kpixmapsequencewidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kpixmapsequencewidget_focusinevent_callback(this, cbval1);
            return;
        }
        KPixmapSequenceWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kpixmapsequencewidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kpixmapsequencewidget_focusoutevent_callback(this, cbval1);
            return;
        }
        KPixmapSequenceWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kpixmapsequencewidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kpixmapsequencewidget_enterevent_callback(this, cbval1);
            return;
        }
        KPixmapSequenceWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kpixmapsequencewidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            kpixmapsequencewidget_leaveevent_callback(this, cbval1);
            return;
        }
        KPixmapSequenceWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kpixmapsequencewidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kpixmapsequencewidget_paintevent_callback(this, cbval1);
            return;
        }
        KPixmapSequenceWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kpixmapsequencewidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kpixmapsequencewidget_moveevent_callback(this, cbval1);
            return;
        }
        KPixmapSequenceWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kpixmapsequencewidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kpixmapsequencewidget_resizeevent_callback(this, cbval1);
            return;
        }
        KPixmapSequenceWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kpixmapsequencewidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kpixmapsequencewidget_closeevent_callback(this, cbval1);
            return;
        }
        KPixmapSequenceWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kpixmapsequencewidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kpixmapsequencewidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        KPixmapSequenceWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kpixmapsequencewidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kpixmapsequencewidget_tabletevent_callback(this, cbval1);
            return;
        }
        KPixmapSequenceWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kpixmapsequencewidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kpixmapsequencewidget_actionevent_callback(this, cbval1);
            return;
        }
        KPixmapSequenceWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kpixmapsequencewidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kpixmapsequencewidget_dragenterevent_callback(this, cbval1);
            return;
        }
        KPixmapSequenceWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kpixmapsequencewidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kpixmapsequencewidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        KPixmapSequenceWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kpixmapsequencewidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kpixmapsequencewidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        KPixmapSequenceWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kpixmapsequencewidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kpixmapsequencewidget_dropevent_callback(this, cbval1);
            return;
        }
        KPixmapSequenceWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kpixmapsequencewidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            kpixmapsequencewidget_showevent_callback(this, cbval1);
            return;
        }
        KPixmapSequenceWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kpixmapsequencewidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kpixmapsequencewidget_hideevent_callback(this, cbval1);
            return;
        }
        KPixmapSequenceWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kpixmapsequencewidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kpixmapsequencewidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KPixmapSequenceWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kpixmapsequencewidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            kpixmapsequencewidget_changeevent_callback(this, cbval1);
            return;
        }
        KPixmapSequenceWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kpixmapsequencewidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kpixmapsequencewidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPixmapSequenceWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kpixmapsequencewidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            kpixmapsequencewidget_initpainter_callback(this, cbval1);
            return;
        }
        KPixmapSequenceWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kpixmapsequencewidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kpixmapsequencewidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KPixmapSequenceWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kpixmapsequencewidget_sharedpainter_callback) {
            QPainter* callback_ret = kpixmapsequencewidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return KPixmapSequenceWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kpixmapsequencewidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kpixmapsequencewidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        KPixmapSequenceWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kpixmapsequencewidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kpixmapsequencewidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPixmapSequenceWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kpixmapsequencewidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kpixmapsequencewidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KPixmapSequenceWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kpixmapsequencewidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kpixmapsequencewidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KPixmapSequenceWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpixmapsequencewidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kpixmapsequencewidget_timerevent_callback(this, cbval1);
            return;
        }
        KPixmapSequenceWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpixmapsequencewidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            kpixmapsequencewidget_childevent_callback(this, cbval1);
            return;
        }
        KPixmapSequenceWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpixmapsequencewidget_customevent_callback) {
            QEvent* cbval1 = event;
            kpixmapsequencewidget_customevent_callback(this, cbval1);
            return;
        }
        KPixmapSequenceWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpixmapsequencewidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpixmapsequencewidget_connectnotify_callback(this, cbval1);
            return;
        }
        KPixmapSequenceWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpixmapsequencewidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpixmapsequencewidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        KPixmapSequenceWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KPixmapSequenceWidget_SuperEvent(KPixmapSequenceWidget* self, QEvent* event);
    friend void KPixmapSequenceWidget_SuperMousePressEvent(KPixmapSequenceWidget* self, QMouseEvent* event);
    friend void KPixmapSequenceWidget_SuperMouseReleaseEvent(KPixmapSequenceWidget* self, QMouseEvent* event);
    friend void KPixmapSequenceWidget_SuperMouseDoubleClickEvent(KPixmapSequenceWidget* self, QMouseEvent* event);
    friend void KPixmapSequenceWidget_SuperMouseMoveEvent(KPixmapSequenceWidget* self, QMouseEvent* event);
    friend void KPixmapSequenceWidget_SuperWheelEvent(KPixmapSequenceWidget* self, QWheelEvent* event);
    friend void KPixmapSequenceWidget_SuperKeyPressEvent(KPixmapSequenceWidget* self, QKeyEvent* event);
    friend void KPixmapSequenceWidget_SuperKeyReleaseEvent(KPixmapSequenceWidget* self, QKeyEvent* event);
    friend void KPixmapSequenceWidget_SuperFocusInEvent(KPixmapSequenceWidget* self, QFocusEvent* event);
    friend void KPixmapSequenceWidget_SuperFocusOutEvent(KPixmapSequenceWidget* self, QFocusEvent* event);
    friend void KPixmapSequenceWidget_SuperEnterEvent(KPixmapSequenceWidget* self, QEnterEvent* event);
    friend void KPixmapSequenceWidget_SuperLeaveEvent(KPixmapSequenceWidget* self, QEvent* event);
    friend void KPixmapSequenceWidget_SuperPaintEvent(KPixmapSequenceWidget* self, QPaintEvent* event);
    friend void KPixmapSequenceWidget_SuperMoveEvent(KPixmapSequenceWidget* self, QMoveEvent* event);
    friend void KPixmapSequenceWidget_SuperResizeEvent(KPixmapSequenceWidget* self, QResizeEvent* event);
    friend void KPixmapSequenceWidget_SuperCloseEvent(KPixmapSequenceWidget* self, QCloseEvent* event);
    friend void KPixmapSequenceWidget_SuperContextMenuEvent(KPixmapSequenceWidget* self, QContextMenuEvent* event);
    friend void KPixmapSequenceWidget_SuperTabletEvent(KPixmapSequenceWidget* self, QTabletEvent* event);
    friend void KPixmapSequenceWidget_SuperActionEvent(KPixmapSequenceWidget* self, QActionEvent* event);
    friend void KPixmapSequenceWidget_SuperDragEnterEvent(KPixmapSequenceWidget* self, QDragEnterEvent* event);
    friend void KPixmapSequenceWidget_SuperDragMoveEvent(KPixmapSequenceWidget* self, QDragMoveEvent* event);
    friend void KPixmapSequenceWidget_SuperDragLeaveEvent(KPixmapSequenceWidget* self, QDragLeaveEvent* event);
    friend void KPixmapSequenceWidget_SuperDropEvent(KPixmapSequenceWidget* self, QDropEvent* event);
    friend void KPixmapSequenceWidget_SuperShowEvent(KPixmapSequenceWidget* self, QShowEvent* event);
    friend void KPixmapSequenceWidget_SuperHideEvent(KPixmapSequenceWidget* self, QHideEvent* event);
    friend bool KPixmapSequenceWidget_SuperNativeEvent(KPixmapSequenceWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KPixmapSequenceWidget_SuperChangeEvent(KPixmapSequenceWidget* self, QEvent* param1);
    friend int KPixmapSequenceWidget_SuperMetric(const KPixmapSequenceWidget* self, int param1);
    friend void KPixmapSequenceWidget_SuperInitPainter(const KPixmapSequenceWidget* self, QPainter* painter);
    friend QPaintDevice* KPixmapSequenceWidget_SuperRedirected(const KPixmapSequenceWidget* self, QPoint* offset);
    friend QPainter* KPixmapSequenceWidget_SuperSharedPainter(const KPixmapSequenceWidget* self);
    friend void KPixmapSequenceWidget_SuperInputMethodEvent(KPixmapSequenceWidget* self, QInputMethodEvent* param1);
    friend bool KPixmapSequenceWidget_SuperFocusNextPrevChild(KPixmapSequenceWidget* self, bool next);
    friend void KPixmapSequenceWidget_SuperTimerEvent(KPixmapSequenceWidget* self, QTimerEvent* event);
    friend void KPixmapSequenceWidget_SuperChildEvent(KPixmapSequenceWidget* self, QChildEvent* event);
    friend void KPixmapSequenceWidget_SuperCustomEvent(KPixmapSequenceWidget* self, QEvent* event);
    friend void KPixmapSequenceWidget_SuperConnectNotify(KPixmapSequenceWidget* self, const QMetaMethod* signal);
    friend void KPixmapSequenceWidget_SuperDisconnectNotify(KPixmapSequenceWidget* self, const QMetaMethod* signal);
};

#endif
