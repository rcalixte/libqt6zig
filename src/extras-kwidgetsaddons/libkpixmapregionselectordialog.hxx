#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKPIXMAPREGIONSELECTORDIALOG_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKPIXMAPREGIONSELECTORDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPixmapRegionSelectorDialog
class VirtualKPixmapRegionSelectorDialog final : public KPixmapRegionSelectorDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using KPixmapRegionSelectorDialog_MetaObject_Callback = QMetaObject* (*)(const KPixmapRegionSelectorDialog*);
    using KPixmapRegionSelectorDialog_Metacast_Callback = void* (*)(KPixmapRegionSelectorDialog*, const char*);
    using KPixmapRegionSelectorDialog_Metacall_Callback = int (*)(KPixmapRegionSelectorDialog*, int, int, void**);
    using KPixmapRegionSelectorDialog_SetVisible_Callback = void (*)(KPixmapRegionSelectorDialog*, bool);
    using KPixmapRegionSelectorDialog_SizeHint_Callback = QSize* (*)(const KPixmapRegionSelectorDialog*);
    using KPixmapRegionSelectorDialog_MinimumSizeHint_Callback = QSize* (*)(const KPixmapRegionSelectorDialog*);
    using KPixmapRegionSelectorDialog_Open_Callback = void (*)(KPixmapRegionSelectorDialog*);
    using KPixmapRegionSelectorDialog_Exec_Callback = int (*)(KPixmapRegionSelectorDialog*);
    using KPixmapRegionSelectorDialog_Done_Callback = void (*)(KPixmapRegionSelectorDialog*, int);
    using KPixmapRegionSelectorDialog_Accept_Callback = void (*)(KPixmapRegionSelectorDialog*);
    using KPixmapRegionSelectorDialog_Reject_Callback = void (*)(KPixmapRegionSelectorDialog*);
    using KPixmapRegionSelectorDialog_KeyPressEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QKeyEvent*);
    using KPixmapRegionSelectorDialog_CloseEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QCloseEvent*);
    using KPixmapRegionSelectorDialog_ShowEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QShowEvent*);
    using KPixmapRegionSelectorDialog_ResizeEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QResizeEvent*);
    using KPixmapRegionSelectorDialog_ContextMenuEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QContextMenuEvent*);
    using KPixmapRegionSelectorDialog_EventFilter_Callback = bool (*)(KPixmapRegionSelectorDialog*, QObject*, QEvent*);
    using KPixmapRegionSelectorDialog_DevType_Callback = int (*)(const KPixmapRegionSelectorDialog*);
    using KPixmapRegionSelectorDialog_HeightForWidth_Callback = int (*)(const KPixmapRegionSelectorDialog*, int);
    using KPixmapRegionSelectorDialog_HasHeightForWidth_Callback = bool (*)(const KPixmapRegionSelectorDialog*);
    using KPixmapRegionSelectorDialog_PaintEngine_Callback = QPaintEngine* (*)(const KPixmapRegionSelectorDialog*);
    using KPixmapRegionSelectorDialog_Event_Callback = bool (*)(KPixmapRegionSelectorDialog*, QEvent*);
    using KPixmapRegionSelectorDialog_MousePressEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QMouseEvent*);
    using KPixmapRegionSelectorDialog_MouseReleaseEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QMouseEvent*);
    using KPixmapRegionSelectorDialog_MouseDoubleClickEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QMouseEvent*);
    using KPixmapRegionSelectorDialog_MouseMoveEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QMouseEvent*);
    using KPixmapRegionSelectorDialog_WheelEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QWheelEvent*);
    using KPixmapRegionSelectorDialog_KeyReleaseEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QKeyEvent*);
    using KPixmapRegionSelectorDialog_FocusInEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QFocusEvent*);
    using KPixmapRegionSelectorDialog_FocusOutEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QFocusEvent*);
    using KPixmapRegionSelectorDialog_EnterEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QEnterEvent*);
    using KPixmapRegionSelectorDialog_LeaveEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QEvent*);
    using KPixmapRegionSelectorDialog_PaintEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QPaintEvent*);
    using KPixmapRegionSelectorDialog_MoveEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QMoveEvent*);
    using KPixmapRegionSelectorDialog_TabletEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QTabletEvent*);
    using KPixmapRegionSelectorDialog_ActionEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QActionEvent*);
    using KPixmapRegionSelectorDialog_DragEnterEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QDragEnterEvent*);
    using KPixmapRegionSelectorDialog_DragMoveEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QDragMoveEvent*);
    using KPixmapRegionSelectorDialog_DragLeaveEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QDragLeaveEvent*);
    using KPixmapRegionSelectorDialog_DropEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QDropEvent*);
    using KPixmapRegionSelectorDialog_HideEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QHideEvent*);
    using KPixmapRegionSelectorDialog_NativeEvent_Callback = bool (*)(KPixmapRegionSelectorDialog*, libqt_string, void*, intptr_t*);
    using KPixmapRegionSelectorDialog_ChangeEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QEvent*);
    using KPixmapRegionSelectorDialog_Metric_Callback = int (*)(const KPixmapRegionSelectorDialog*, int);
    using KPixmapRegionSelectorDialog_InitPainter_Callback = void (*)(const KPixmapRegionSelectorDialog*, QPainter*);
    using KPixmapRegionSelectorDialog_Redirected_Callback = QPaintDevice* (*)(const KPixmapRegionSelectorDialog*, QPoint*);
    using KPixmapRegionSelectorDialog_SharedPainter_Callback = QPainter* (*)(const KPixmapRegionSelectorDialog*);
    using KPixmapRegionSelectorDialog_InputMethodEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QInputMethodEvent*);
    using KPixmapRegionSelectorDialog_InputMethodQuery_Callback = QVariant* (*)(const KPixmapRegionSelectorDialog*, int);
    using KPixmapRegionSelectorDialog_FocusNextPrevChild_Callback = bool (*)(KPixmapRegionSelectorDialog*, bool);
    using KPixmapRegionSelectorDialog_TimerEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QTimerEvent*);
    using KPixmapRegionSelectorDialog_ChildEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QChildEvent*);
    using KPixmapRegionSelectorDialog_CustomEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QEvent*);
    using KPixmapRegionSelectorDialog_ConnectNotify_Callback = void (*)(KPixmapRegionSelectorDialog*, QMetaMethod*);
    using KPixmapRegionSelectorDialog_DisconnectNotify_Callback = void (*)(KPixmapRegionSelectorDialog*, QMetaMethod*);
    using KPixmapRegionSelectorDialog::adjustPosition;
    using KPixmapRegionSelectorDialog::create;
    using KPixmapRegionSelectorDialog::destroy;
    using KPixmapRegionSelectorDialog::focusNextChild;
    using KPixmapRegionSelectorDialog::focusPreviousChild;
    using KPixmapRegionSelectorDialog::getDecodedMetricF;
    using KPixmapRegionSelectorDialog::isSignalConnected;
    using KPixmapRegionSelectorDialog::receivers;
    using KPixmapRegionSelectorDialog::sender;
    using KPixmapRegionSelectorDialog::senderSignalIndex;
    using KPixmapRegionSelectorDialog::updateMicroFocus;

    // Instance callback storage
    KPixmapRegionSelectorDialog_MetaObject_Callback kpixmapregionselectordialog_metaobject_callback = nullptr;
    KPixmapRegionSelectorDialog_Metacast_Callback kpixmapregionselectordialog_metacast_callback = nullptr;
    KPixmapRegionSelectorDialog_Metacall_Callback kpixmapregionselectordialog_metacall_callback = nullptr;
    KPixmapRegionSelectorDialog_SetVisible_Callback kpixmapregionselectordialog_setvisible_callback = nullptr;
    KPixmapRegionSelectorDialog_SizeHint_Callback kpixmapregionselectordialog_sizehint_callback = nullptr;
    KPixmapRegionSelectorDialog_MinimumSizeHint_Callback kpixmapregionselectordialog_minimumsizehint_callback = nullptr;
    KPixmapRegionSelectorDialog_Open_Callback kpixmapregionselectordialog_open_callback = nullptr;
    KPixmapRegionSelectorDialog_Exec_Callback kpixmapregionselectordialog_exec_callback = nullptr;
    KPixmapRegionSelectorDialog_Done_Callback kpixmapregionselectordialog_done_callback = nullptr;
    KPixmapRegionSelectorDialog_Accept_Callback kpixmapregionselectordialog_accept_callback = nullptr;
    KPixmapRegionSelectorDialog_Reject_Callback kpixmapregionselectordialog_reject_callback = nullptr;
    KPixmapRegionSelectorDialog_KeyPressEvent_Callback kpixmapregionselectordialog_keypressevent_callback = nullptr;
    KPixmapRegionSelectorDialog_CloseEvent_Callback kpixmapregionselectordialog_closeevent_callback = nullptr;
    KPixmapRegionSelectorDialog_ShowEvent_Callback kpixmapregionselectordialog_showevent_callback = nullptr;
    KPixmapRegionSelectorDialog_ResizeEvent_Callback kpixmapregionselectordialog_resizeevent_callback = nullptr;
    KPixmapRegionSelectorDialog_ContextMenuEvent_Callback kpixmapregionselectordialog_contextmenuevent_callback = nullptr;
    KPixmapRegionSelectorDialog_EventFilter_Callback kpixmapregionselectordialog_eventfilter_callback = nullptr;
    KPixmapRegionSelectorDialog_DevType_Callback kpixmapregionselectordialog_devtype_callback = nullptr;
    KPixmapRegionSelectorDialog_HeightForWidth_Callback kpixmapregionselectordialog_heightforwidth_callback = nullptr;
    KPixmapRegionSelectorDialog_HasHeightForWidth_Callback kpixmapregionselectordialog_hasheightforwidth_callback = nullptr;
    KPixmapRegionSelectorDialog_PaintEngine_Callback kpixmapregionselectordialog_paintengine_callback = nullptr;
    KPixmapRegionSelectorDialog_Event_Callback kpixmapregionselectordialog_event_callback = nullptr;
    KPixmapRegionSelectorDialog_MousePressEvent_Callback kpixmapregionselectordialog_mousepressevent_callback = nullptr;
    KPixmapRegionSelectorDialog_MouseReleaseEvent_Callback kpixmapregionselectordialog_mousereleaseevent_callback = nullptr;
    KPixmapRegionSelectorDialog_MouseDoubleClickEvent_Callback kpixmapregionselectordialog_mousedoubleclickevent_callback = nullptr;
    KPixmapRegionSelectorDialog_MouseMoveEvent_Callback kpixmapregionselectordialog_mousemoveevent_callback = nullptr;
    KPixmapRegionSelectorDialog_WheelEvent_Callback kpixmapregionselectordialog_wheelevent_callback = nullptr;
    KPixmapRegionSelectorDialog_KeyReleaseEvent_Callback kpixmapregionselectordialog_keyreleaseevent_callback = nullptr;
    KPixmapRegionSelectorDialog_FocusInEvent_Callback kpixmapregionselectordialog_focusinevent_callback = nullptr;
    KPixmapRegionSelectorDialog_FocusOutEvent_Callback kpixmapregionselectordialog_focusoutevent_callback = nullptr;
    KPixmapRegionSelectorDialog_EnterEvent_Callback kpixmapregionselectordialog_enterevent_callback = nullptr;
    KPixmapRegionSelectorDialog_LeaveEvent_Callback kpixmapregionselectordialog_leaveevent_callback = nullptr;
    KPixmapRegionSelectorDialog_PaintEvent_Callback kpixmapregionselectordialog_paintevent_callback = nullptr;
    KPixmapRegionSelectorDialog_MoveEvent_Callback kpixmapregionselectordialog_moveevent_callback = nullptr;
    KPixmapRegionSelectorDialog_TabletEvent_Callback kpixmapregionselectordialog_tabletevent_callback = nullptr;
    KPixmapRegionSelectorDialog_ActionEvent_Callback kpixmapregionselectordialog_actionevent_callback = nullptr;
    KPixmapRegionSelectorDialog_DragEnterEvent_Callback kpixmapregionselectordialog_dragenterevent_callback = nullptr;
    KPixmapRegionSelectorDialog_DragMoveEvent_Callback kpixmapregionselectordialog_dragmoveevent_callback = nullptr;
    KPixmapRegionSelectorDialog_DragLeaveEvent_Callback kpixmapregionselectordialog_dragleaveevent_callback = nullptr;
    KPixmapRegionSelectorDialog_DropEvent_Callback kpixmapregionselectordialog_dropevent_callback = nullptr;
    KPixmapRegionSelectorDialog_HideEvent_Callback kpixmapregionselectordialog_hideevent_callback = nullptr;
    KPixmapRegionSelectorDialog_NativeEvent_Callback kpixmapregionselectordialog_nativeevent_callback = nullptr;
    KPixmapRegionSelectorDialog_ChangeEvent_Callback kpixmapregionselectordialog_changeevent_callback = nullptr;
    KPixmapRegionSelectorDialog_Metric_Callback kpixmapregionselectordialog_metric_callback = nullptr;
    KPixmapRegionSelectorDialog_InitPainter_Callback kpixmapregionselectordialog_initpainter_callback = nullptr;
    KPixmapRegionSelectorDialog_Redirected_Callback kpixmapregionselectordialog_redirected_callback = nullptr;
    KPixmapRegionSelectorDialog_SharedPainter_Callback kpixmapregionselectordialog_sharedpainter_callback = nullptr;
    KPixmapRegionSelectorDialog_InputMethodEvent_Callback kpixmapregionselectordialog_inputmethodevent_callback = nullptr;
    KPixmapRegionSelectorDialog_InputMethodQuery_Callback kpixmapregionselectordialog_inputmethodquery_callback = nullptr;
    KPixmapRegionSelectorDialog_FocusNextPrevChild_Callback kpixmapregionselectordialog_focusnextprevchild_callback = nullptr;
    KPixmapRegionSelectorDialog_TimerEvent_Callback kpixmapregionselectordialog_timerevent_callback = nullptr;
    KPixmapRegionSelectorDialog_ChildEvent_Callback kpixmapregionselectordialog_childevent_callback = nullptr;
    KPixmapRegionSelectorDialog_CustomEvent_Callback kpixmapregionselectordialog_customevent_callback = nullptr;
    KPixmapRegionSelectorDialog_ConnectNotify_Callback kpixmapregionselectordialog_connectnotify_callback = nullptr;
    KPixmapRegionSelectorDialog_DisconnectNotify_Callback kpixmapregionselectordialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KPixmapRegionSelectorDialog {
        using KPixmapRegionSelectorDialog::actionEvent;
        using KPixmapRegionSelectorDialog::changeEvent;
        using KPixmapRegionSelectorDialog::childEvent;
        using KPixmapRegionSelectorDialog::closeEvent;
        using KPixmapRegionSelectorDialog::connectNotify;
        using KPixmapRegionSelectorDialog::contextMenuEvent;
        using KPixmapRegionSelectorDialog::customEvent;
        using KPixmapRegionSelectorDialog::disconnectNotify;
        using KPixmapRegionSelectorDialog::dragEnterEvent;
        using KPixmapRegionSelectorDialog::dragLeaveEvent;
        using KPixmapRegionSelectorDialog::dragMoveEvent;
        using KPixmapRegionSelectorDialog::dropEvent;
        using KPixmapRegionSelectorDialog::enterEvent;
        using KPixmapRegionSelectorDialog::event;
        using KPixmapRegionSelectorDialog::eventFilter;
        using KPixmapRegionSelectorDialog::focusInEvent;
        using KPixmapRegionSelectorDialog::focusNextPrevChild;
        using KPixmapRegionSelectorDialog::focusOutEvent;
        using KPixmapRegionSelectorDialog::hideEvent;
        using KPixmapRegionSelectorDialog::initPainter;
        using KPixmapRegionSelectorDialog::inputMethodEvent;
        using KPixmapRegionSelectorDialog::keyPressEvent;
        using KPixmapRegionSelectorDialog::keyReleaseEvent;
        using KPixmapRegionSelectorDialog::leaveEvent;
        using KPixmapRegionSelectorDialog::metric;
        using KPixmapRegionSelectorDialog::mouseDoubleClickEvent;
        using KPixmapRegionSelectorDialog::mouseMoveEvent;
        using KPixmapRegionSelectorDialog::mousePressEvent;
        using KPixmapRegionSelectorDialog::mouseReleaseEvent;
        using KPixmapRegionSelectorDialog::moveEvent;
        using KPixmapRegionSelectorDialog::nativeEvent;
        using KPixmapRegionSelectorDialog::paintEvent;
        using KPixmapRegionSelectorDialog::redirected;
        using KPixmapRegionSelectorDialog::resizeEvent;
        using KPixmapRegionSelectorDialog::sharedPainter;
        using KPixmapRegionSelectorDialog::showEvent;
        using KPixmapRegionSelectorDialog::tabletEvent;
        using KPixmapRegionSelectorDialog::timerEvent;
        using KPixmapRegionSelectorDialog::wheelEvent;
    };

    VirtualKPixmapRegionSelectorDialog(QWidget* parent) : KPixmapRegionSelectorDialog(parent) {};
    VirtualKPixmapRegionSelectorDialog() : KPixmapRegionSelectorDialog() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kpixmapregionselectordialog_metaobject_callback) {
            QMetaObject* callback_ret = kpixmapregionselectordialog_metaobject_callback(this);
            return callback_ret;
        }
        return KPixmapRegionSelectorDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kpixmapregionselectordialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kpixmapregionselectordialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KPixmapRegionSelectorDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpixmapregionselectordialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kpixmapregionselectordialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KPixmapRegionSelectorDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kpixmapregionselectordialog_setvisible_callback) {
            bool cbval1 = visible;
            kpixmapregionselectordialog_setvisible_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kpixmapregionselectordialog_sizehint_callback) {
            QSize* callback_ret = kpixmapregionselectordialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPixmapRegionSelectorDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kpixmapregionselectordialog_minimumsizehint_callback) {
            QSize* callback_ret = kpixmapregionselectordialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPixmapRegionSelectorDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kpixmapregionselectordialog_open_callback) {
            kpixmapregionselectordialog_open_callback(this);
            return;
        }
        KPixmapRegionSelectorDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kpixmapregionselectordialog_exec_callback) {
            int callback_ret = kpixmapregionselectordialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KPixmapRegionSelectorDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kpixmapregionselectordialog_done_callback) {
            int cbval1 = param1;
            kpixmapregionselectordialog_done_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kpixmapregionselectordialog_accept_callback) {
            kpixmapregionselectordialog_accept_callback(this);
            return;
        }
        KPixmapRegionSelectorDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kpixmapregionselectordialog_reject_callback) {
            kpixmapregionselectordialog_reject_callback(this);
            return;
        }
        KPixmapRegionSelectorDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kpixmapregionselectordialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            kpixmapregionselectordialog_keypressevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kpixmapregionselectordialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            kpixmapregionselectordialog_closeevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kpixmapregionselectordialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            kpixmapregionselectordialog_showevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kpixmapregionselectordialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            kpixmapregionselectordialog_resizeevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kpixmapregionselectordialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            kpixmapregionselectordialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kpixmapregionselectordialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = kpixmapregionselectordialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KPixmapRegionSelectorDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kpixmapregionselectordialog_devtype_callback) {
            int callback_ret = kpixmapregionselectordialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KPixmapRegionSelectorDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kpixmapregionselectordialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kpixmapregionselectordialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPixmapRegionSelectorDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kpixmapregionselectordialog_hasheightforwidth_callback) {
            bool callback_ret = kpixmapregionselectordialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KPixmapRegionSelectorDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kpixmapregionselectordialog_paintengine_callback) {
            QPaintEngine* callback_ret = kpixmapregionselectordialog_paintengine_callback(this);
            return callback_ret;
        }
        return KPixmapRegionSelectorDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpixmapregionselectordialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kpixmapregionselectordialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return KPixmapRegionSelectorDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kpixmapregionselectordialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kpixmapregionselectordialog_mousepressevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kpixmapregionselectordialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kpixmapregionselectordialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kpixmapregionselectordialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kpixmapregionselectordialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kpixmapregionselectordialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kpixmapregionselectordialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kpixmapregionselectordialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kpixmapregionselectordialog_wheelevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kpixmapregionselectordialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kpixmapregionselectordialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kpixmapregionselectordialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kpixmapregionselectordialog_focusinevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kpixmapregionselectordialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kpixmapregionselectordialog_focusoutevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kpixmapregionselectordialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kpixmapregionselectordialog_enterevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kpixmapregionselectordialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            kpixmapregionselectordialog_leaveevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kpixmapregionselectordialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kpixmapregionselectordialog_paintevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kpixmapregionselectordialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kpixmapregionselectordialog_moveevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kpixmapregionselectordialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kpixmapregionselectordialog_tabletevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kpixmapregionselectordialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kpixmapregionselectordialog_actionevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kpixmapregionselectordialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kpixmapregionselectordialog_dragenterevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kpixmapregionselectordialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kpixmapregionselectordialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kpixmapregionselectordialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kpixmapregionselectordialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kpixmapregionselectordialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kpixmapregionselectordialog_dropevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kpixmapregionselectordialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kpixmapregionselectordialog_hideevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kpixmapregionselectordialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kpixmapregionselectordialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KPixmapRegionSelectorDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kpixmapregionselectordialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            kpixmapregionselectordialog_changeevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kpixmapregionselectordialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kpixmapregionselectordialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPixmapRegionSelectorDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kpixmapregionselectordialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            kpixmapregionselectordialog_initpainter_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kpixmapregionselectordialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kpixmapregionselectordialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KPixmapRegionSelectorDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kpixmapregionselectordialog_sharedpainter_callback) {
            QPainter* callback_ret = kpixmapregionselectordialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return KPixmapRegionSelectorDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kpixmapregionselectordialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kpixmapregionselectordialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kpixmapregionselectordialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kpixmapregionselectordialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPixmapRegionSelectorDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kpixmapregionselectordialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kpixmapregionselectordialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KPixmapRegionSelectorDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpixmapregionselectordialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kpixmapregionselectordialog_timerevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpixmapregionselectordialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            kpixmapregionselectordialog_childevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpixmapregionselectordialog_customevent_callback) {
            QEvent* cbval1 = event;
            kpixmapregionselectordialog_customevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpixmapregionselectordialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpixmapregionselectordialog_connectnotify_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpixmapregionselectordialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpixmapregionselectordialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void KPixmapRegionSelectorDialog_SuperKeyPressEvent(KPixmapRegionSelectorDialog* self, QKeyEvent* param1);
    friend void KPixmapRegionSelectorDialog_SuperCloseEvent(KPixmapRegionSelectorDialog* self, QCloseEvent* param1);
    friend void KPixmapRegionSelectorDialog_SuperShowEvent(KPixmapRegionSelectorDialog* self, QShowEvent* param1);
    friend void KPixmapRegionSelectorDialog_SuperResizeEvent(KPixmapRegionSelectorDialog* self, QResizeEvent* param1);
    friend void KPixmapRegionSelectorDialog_SuperContextMenuEvent(KPixmapRegionSelectorDialog* self, QContextMenuEvent* param1);
    friend bool KPixmapRegionSelectorDialog_SuperEventFilter(KPixmapRegionSelectorDialog* self, QObject* param1, QEvent* param2);
    friend bool KPixmapRegionSelectorDialog_SuperEvent(KPixmapRegionSelectorDialog* self, QEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperMousePressEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperMouseReleaseEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperMouseDoubleClickEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperMouseMoveEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperWheelEvent(KPixmapRegionSelectorDialog* self, QWheelEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperKeyReleaseEvent(KPixmapRegionSelectorDialog* self, QKeyEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperFocusInEvent(KPixmapRegionSelectorDialog* self, QFocusEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperFocusOutEvent(KPixmapRegionSelectorDialog* self, QFocusEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperEnterEvent(KPixmapRegionSelectorDialog* self, QEnterEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperLeaveEvent(KPixmapRegionSelectorDialog* self, QEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperPaintEvent(KPixmapRegionSelectorDialog* self, QPaintEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperMoveEvent(KPixmapRegionSelectorDialog* self, QMoveEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperTabletEvent(KPixmapRegionSelectorDialog* self, QTabletEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperActionEvent(KPixmapRegionSelectorDialog* self, QActionEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperDragEnterEvent(KPixmapRegionSelectorDialog* self, QDragEnterEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperDragMoveEvent(KPixmapRegionSelectorDialog* self, QDragMoveEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperDragLeaveEvent(KPixmapRegionSelectorDialog* self, QDragLeaveEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperDropEvent(KPixmapRegionSelectorDialog* self, QDropEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperHideEvent(KPixmapRegionSelectorDialog* self, QHideEvent* event);
    friend bool KPixmapRegionSelectorDialog_SuperNativeEvent(KPixmapRegionSelectorDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KPixmapRegionSelectorDialog_SuperChangeEvent(KPixmapRegionSelectorDialog* self, QEvent* param1);
    friend int KPixmapRegionSelectorDialog_SuperMetric(const KPixmapRegionSelectorDialog* self, int param1);
    friend void KPixmapRegionSelectorDialog_SuperInitPainter(const KPixmapRegionSelectorDialog* self, QPainter* painter);
    friend QPaintDevice* KPixmapRegionSelectorDialog_SuperRedirected(const KPixmapRegionSelectorDialog* self, QPoint* offset);
    friend QPainter* KPixmapRegionSelectorDialog_SuperSharedPainter(const KPixmapRegionSelectorDialog* self);
    friend void KPixmapRegionSelectorDialog_SuperInputMethodEvent(KPixmapRegionSelectorDialog* self, QInputMethodEvent* param1);
    friend bool KPixmapRegionSelectorDialog_SuperFocusNextPrevChild(KPixmapRegionSelectorDialog* self, bool next);
    friend void KPixmapRegionSelectorDialog_SuperTimerEvent(KPixmapRegionSelectorDialog* self, QTimerEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperChildEvent(KPixmapRegionSelectorDialog* self, QChildEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperCustomEvent(KPixmapRegionSelectorDialog* self, QEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperConnectNotify(KPixmapRegionSelectorDialog* self, const QMetaMethod* signal);
    friend void KPixmapRegionSelectorDialog_SuperDisconnectNotify(KPixmapRegionSelectorDialog* self, const QMetaMethod* signal);
};

#endif
