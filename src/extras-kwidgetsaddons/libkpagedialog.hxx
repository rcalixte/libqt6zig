#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKPAGEDIALOG_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKPAGEDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPageDialog
class VirtualKPageDialog final : public KPageDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using KPageDialog_MetaObject_Callback = QMetaObject* (*)(const KPageDialog*);
    using KPageDialog_Metacast_Callback = void* (*)(KPageDialog*, const char*);
    using KPageDialog_Metacall_Callback = int (*)(KPageDialog*, int, int, void**);
    using KPageDialog_SetVisible_Callback = void (*)(KPageDialog*, bool);
    using KPageDialog_SizeHint_Callback = QSize* (*)(const KPageDialog*);
    using KPageDialog_MinimumSizeHint_Callback = QSize* (*)(const KPageDialog*);
    using KPageDialog_Open_Callback = void (*)(KPageDialog*);
    using KPageDialog_Exec_Callback = int (*)(KPageDialog*);
    using KPageDialog_Done_Callback = void (*)(KPageDialog*, int);
    using KPageDialog_Accept_Callback = void (*)(KPageDialog*);
    using KPageDialog_Reject_Callback = void (*)(KPageDialog*);
    using KPageDialog_KeyPressEvent_Callback = void (*)(KPageDialog*, QKeyEvent*);
    using KPageDialog_CloseEvent_Callback = void (*)(KPageDialog*, QCloseEvent*);
    using KPageDialog_ShowEvent_Callback = void (*)(KPageDialog*, QShowEvent*);
    using KPageDialog_ResizeEvent_Callback = void (*)(KPageDialog*, QResizeEvent*);
    using KPageDialog_ContextMenuEvent_Callback = void (*)(KPageDialog*, QContextMenuEvent*);
    using KPageDialog_EventFilter_Callback = bool (*)(KPageDialog*, QObject*, QEvent*);
    using KPageDialog_DevType_Callback = int (*)(const KPageDialog*);
    using KPageDialog_HeightForWidth_Callback = int (*)(const KPageDialog*, int);
    using KPageDialog_HasHeightForWidth_Callback = bool (*)(const KPageDialog*);
    using KPageDialog_PaintEngine_Callback = QPaintEngine* (*)(const KPageDialog*);
    using KPageDialog_Event_Callback = bool (*)(KPageDialog*, QEvent*);
    using KPageDialog_MousePressEvent_Callback = void (*)(KPageDialog*, QMouseEvent*);
    using KPageDialog_MouseReleaseEvent_Callback = void (*)(KPageDialog*, QMouseEvent*);
    using KPageDialog_MouseDoubleClickEvent_Callback = void (*)(KPageDialog*, QMouseEvent*);
    using KPageDialog_MouseMoveEvent_Callback = void (*)(KPageDialog*, QMouseEvent*);
    using KPageDialog_WheelEvent_Callback = void (*)(KPageDialog*, QWheelEvent*);
    using KPageDialog_KeyReleaseEvent_Callback = void (*)(KPageDialog*, QKeyEvent*);
    using KPageDialog_FocusInEvent_Callback = void (*)(KPageDialog*, QFocusEvent*);
    using KPageDialog_FocusOutEvent_Callback = void (*)(KPageDialog*, QFocusEvent*);
    using KPageDialog_EnterEvent_Callback = void (*)(KPageDialog*, QEnterEvent*);
    using KPageDialog_LeaveEvent_Callback = void (*)(KPageDialog*, QEvent*);
    using KPageDialog_PaintEvent_Callback = void (*)(KPageDialog*, QPaintEvent*);
    using KPageDialog_MoveEvent_Callback = void (*)(KPageDialog*, QMoveEvent*);
    using KPageDialog_TabletEvent_Callback = void (*)(KPageDialog*, QTabletEvent*);
    using KPageDialog_ActionEvent_Callback = void (*)(KPageDialog*, QActionEvent*);
    using KPageDialog_DragEnterEvent_Callback = void (*)(KPageDialog*, QDragEnterEvent*);
    using KPageDialog_DragMoveEvent_Callback = void (*)(KPageDialog*, QDragMoveEvent*);
    using KPageDialog_DragLeaveEvent_Callback = void (*)(KPageDialog*, QDragLeaveEvent*);
    using KPageDialog_DropEvent_Callback = void (*)(KPageDialog*, QDropEvent*);
    using KPageDialog_HideEvent_Callback = void (*)(KPageDialog*, QHideEvent*);
    using KPageDialog_NativeEvent_Callback = bool (*)(KPageDialog*, libqt_string, void*, intptr_t*);
    using KPageDialog_ChangeEvent_Callback = void (*)(KPageDialog*, QEvent*);
    using KPageDialog_Metric_Callback = int (*)(const KPageDialog*, int);
    using KPageDialog_InitPainter_Callback = void (*)(const KPageDialog*, QPainter*);
    using KPageDialog_Redirected_Callback = QPaintDevice* (*)(const KPageDialog*, QPoint*);
    using KPageDialog_SharedPainter_Callback = QPainter* (*)(const KPageDialog*);
    using KPageDialog_InputMethodEvent_Callback = void (*)(KPageDialog*, QInputMethodEvent*);
    using KPageDialog_InputMethodQuery_Callback = QVariant* (*)(const KPageDialog*, int);
    using KPageDialog_FocusNextPrevChild_Callback = bool (*)(KPageDialog*, bool);
    using KPageDialog_TimerEvent_Callback = void (*)(KPageDialog*, QTimerEvent*);
    using KPageDialog_ChildEvent_Callback = void (*)(KPageDialog*, QChildEvent*);
    using KPageDialog_CustomEvent_Callback = void (*)(KPageDialog*, QEvent*);
    using KPageDialog_ConnectNotify_Callback = void (*)(KPageDialog*, QMetaMethod*);
    using KPageDialog_DisconnectNotify_Callback = void (*)(KPageDialog*, QMetaMethod*);
    using KPageDialog::adjustPosition;
    using KPageDialog::buttonBox;
    using KPageDialog::create;
    using KPageDialog::destroy;
    using KPageDialog::focusNextChild;
    using KPageDialog::focusPreviousChild;
    using KPageDialog::getDecodedMetricF;
    using KPageDialog::isSignalConnected;
    using KPageDialog::pageWidget;
    using KPageDialog::receivers;
    using KPageDialog::sender;
    using KPageDialog::senderSignalIndex;
    using KPageDialog::setButtonBox;
    using KPageDialog::setPageWidget;
    using KPageDialog::updateMicroFocus;

    // Instance callback storage
    KPageDialog_MetaObject_Callback kpagedialog_metaobject_callback = nullptr;
    KPageDialog_Metacast_Callback kpagedialog_metacast_callback = nullptr;
    KPageDialog_Metacall_Callback kpagedialog_metacall_callback = nullptr;
    KPageDialog_SetVisible_Callback kpagedialog_setvisible_callback = nullptr;
    KPageDialog_SizeHint_Callback kpagedialog_sizehint_callback = nullptr;
    KPageDialog_MinimumSizeHint_Callback kpagedialog_minimumsizehint_callback = nullptr;
    KPageDialog_Open_Callback kpagedialog_open_callback = nullptr;
    KPageDialog_Exec_Callback kpagedialog_exec_callback = nullptr;
    KPageDialog_Done_Callback kpagedialog_done_callback = nullptr;
    KPageDialog_Accept_Callback kpagedialog_accept_callback = nullptr;
    KPageDialog_Reject_Callback kpagedialog_reject_callback = nullptr;
    KPageDialog_KeyPressEvent_Callback kpagedialog_keypressevent_callback = nullptr;
    KPageDialog_CloseEvent_Callback kpagedialog_closeevent_callback = nullptr;
    KPageDialog_ShowEvent_Callback kpagedialog_showevent_callback = nullptr;
    KPageDialog_ResizeEvent_Callback kpagedialog_resizeevent_callback = nullptr;
    KPageDialog_ContextMenuEvent_Callback kpagedialog_contextmenuevent_callback = nullptr;
    KPageDialog_EventFilter_Callback kpagedialog_eventfilter_callback = nullptr;
    KPageDialog_DevType_Callback kpagedialog_devtype_callback = nullptr;
    KPageDialog_HeightForWidth_Callback kpagedialog_heightforwidth_callback = nullptr;
    KPageDialog_HasHeightForWidth_Callback kpagedialog_hasheightforwidth_callback = nullptr;
    KPageDialog_PaintEngine_Callback kpagedialog_paintengine_callback = nullptr;
    KPageDialog_Event_Callback kpagedialog_event_callback = nullptr;
    KPageDialog_MousePressEvent_Callback kpagedialog_mousepressevent_callback = nullptr;
    KPageDialog_MouseReleaseEvent_Callback kpagedialog_mousereleaseevent_callback = nullptr;
    KPageDialog_MouseDoubleClickEvent_Callback kpagedialog_mousedoubleclickevent_callback = nullptr;
    KPageDialog_MouseMoveEvent_Callback kpagedialog_mousemoveevent_callback = nullptr;
    KPageDialog_WheelEvent_Callback kpagedialog_wheelevent_callback = nullptr;
    KPageDialog_KeyReleaseEvent_Callback kpagedialog_keyreleaseevent_callback = nullptr;
    KPageDialog_FocusInEvent_Callback kpagedialog_focusinevent_callback = nullptr;
    KPageDialog_FocusOutEvent_Callback kpagedialog_focusoutevent_callback = nullptr;
    KPageDialog_EnterEvent_Callback kpagedialog_enterevent_callback = nullptr;
    KPageDialog_LeaveEvent_Callback kpagedialog_leaveevent_callback = nullptr;
    KPageDialog_PaintEvent_Callback kpagedialog_paintevent_callback = nullptr;
    KPageDialog_MoveEvent_Callback kpagedialog_moveevent_callback = nullptr;
    KPageDialog_TabletEvent_Callback kpagedialog_tabletevent_callback = nullptr;
    KPageDialog_ActionEvent_Callback kpagedialog_actionevent_callback = nullptr;
    KPageDialog_DragEnterEvent_Callback kpagedialog_dragenterevent_callback = nullptr;
    KPageDialog_DragMoveEvent_Callback kpagedialog_dragmoveevent_callback = nullptr;
    KPageDialog_DragLeaveEvent_Callback kpagedialog_dragleaveevent_callback = nullptr;
    KPageDialog_DropEvent_Callback kpagedialog_dropevent_callback = nullptr;
    KPageDialog_HideEvent_Callback kpagedialog_hideevent_callback = nullptr;
    KPageDialog_NativeEvent_Callback kpagedialog_nativeevent_callback = nullptr;
    KPageDialog_ChangeEvent_Callback kpagedialog_changeevent_callback = nullptr;
    KPageDialog_Metric_Callback kpagedialog_metric_callback = nullptr;
    KPageDialog_InitPainter_Callback kpagedialog_initpainter_callback = nullptr;
    KPageDialog_Redirected_Callback kpagedialog_redirected_callback = nullptr;
    KPageDialog_SharedPainter_Callback kpagedialog_sharedpainter_callback = nullptr;
    KPageDialog_InputMethodEvent_Callback kpagedialog_inputmethodevent_callback = nullptr;
    KPageDialog_InputMethodQuery_Callback kpagedialog_inputmethodquery_callback = nullptr;
    KPageDialog_FocusNextPrevChild_Callback kpagedialog_focusnextprevchild_callback = nullptr;
    KPageDialog_TimerEvent_Callback kpagedialog_timerevent_callback = nullptr;
    KPageDialog_ChildEvent_Callback kpagedialog_childevent_callback = nullptr;
    KPageDialog_CustomEvent_Callback kpagedialog_customevent_callback = nullptr;
    KPageDialog_ConnectNotify_Callback kpagedialog_connectnotify_callback = nullptr;
    KPageDialog_DisconnectNotify_Callback kpagedialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KPageDialog {
        using KPageDialog::actionEvent;
        using KPageDialog::changeEvent;
        using KPageDialog::childEvent;
        using KPageDialog::closeEvent;
        using KPageDialog::connectNotify;
        using KPageDialog::contextMenuEvent;
        using KPageDialog::customEvent;
        using KPageDialog::disconnectNotify;
        using KPageDialog::dragEnterEvent;
        using KPageDialog::dragLeaveEvent;
        using KPageDialog::dragMoveEvent;
        using KPageDialog::dropEvent;
        using KPageDialog::enterEvent;
        using KPageDialog::event;
        using KPageDialog::eventFilter;
        using KPageDialog::focusInEvent;
        using KPageDialog::focusNextPrevChild;
        using KPageDialog::focusOutEvent;
        using KPageDialog::hideEvent;
        using KPageDialog::initPainter;
        using KPageDialog::inputMethodEvent;
        using KPageDialog::keyPressEvent;
        using KPageDialog::keyReleaseEvent;
        using KPageDialog::leaveEvent;
        using KPageDialog::metric;
        using KPageDialog::mouseDoubleClickEvent;
        using KPageDialog::mouseMoveEvent;
        using KPageDialog::mousePressEvent;
        using KPageDialog::mouseReleaseEvent;
        using KPageDialog::moveEvent;
        using KPageDialog::nativeEvent;
        using KPageDialog::paintEvent;
        using KPageDialog::redirected;
        using KPageDialog::resizeEvent;
        using KPageDialog::sharedPainter;
        using KPageDialog::showEvent;
        using KPageDialog::tabletEvent;
        using KPageDialog::timerEvent;
        using KPageDialog::wheelEvent;
    };

    VirtualKPageDialog(QWidget* parent) : KPageDialog(parent) {};
    VirtualKPageDialog() : KPageDialog() {};
    VirtualKPageDialog(QWidget* parent, Qt::WindowFlags flags) : KPageDialog(parent, flags) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kpagedialog_metaobject_callback) {
            QMetaObject* callback_ret = kpagedialog_metaobject_callback(this);
            return callback_ret;
        }
        return KPageDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kpagedialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kpagedialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KPageDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpagedialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kpagedialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KPageDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kpagedialog_setvisible_callback) {
            bool cbval1 = visible;
            kpagedialog_setvisible_callback(this, cbval1);
            return;
        }
        KPageDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kpagedialog_sizehint_callback) {
            QSize* callback_ret = kpagedialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPageDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kpagedialog_minimumsizehint_callback) {
            QSize* callback_ret = kpagedialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPageDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kpagedialog_open_callback) {
            kpagedialog_open_callback(this);
            return;
        }
        KPageDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kpagedialog_exec_callback) {
            int callback_ret = kpagedialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KPageDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kpagedialog_done_callback) {
            int cbval1 = param1;
            kpagedialog_done_callback(this, cbval1);
            return;
        }
        KPageDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kpagedialog_accept_callback) {
            kpagedialog_accept_callback(this);
            return;
        }
        KPageDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kpagedialog_reject_callback) {
            kpagedialog_reject_callback(this);
            return;
        }
        KPageDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kpagedialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            kpagedialog_keypressevent_callback(this, cbval1);
            return;
        }
        KPageDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kpagedialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            kpagedialog_closeevent_callback(this, cbval1);
            return;
        }
        KPageDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kpagedialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            kpagedialog_showevent_callback(this, cbval1);
            return;
        }
        KPageDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kpagedialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            kpagedialog_resizeevent_callback(this, cbval1);
            return;
        }
        KPageDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kpagedialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            kpagedialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        KPageDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kpagedialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = kpagedialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KPageDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kpagedialog_devtype_callback) {
            int callback_ret = kpagedialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KPageDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kpagedialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kpagedialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPageDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kpagedialog_hasheightforwidth_callback) {
            bool callback_ret = kpagedialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KPageDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kpagedialog_paintengine_callback) {
            QPaintEngine* callback_ret = kpagedialog_paintengine_callback(this);
            return callback_ret;
        }
        return KPageDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpagedialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kpagedialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return KPageDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kpagedialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kpagedialog_mousepressevent_callback(this, cbval1);
            return;
        }
        KPageDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kpagedialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kpagedialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KPageDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kpagedialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kpagedialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KPageDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kpagedialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kpagedialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        KPageDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kpagedialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kpagedialog_wheelevent_callback(this, cbval1);
            return;
        }
        KPageDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kpagedialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kpagedialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KPageDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kpagedialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kpagedialog_focusinevent_callback(this, cbval1);
            return;
        }
        KPageDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kpagedialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kpagedialog_focusoutevent_callback(this, cbval1);
            return;
        }
        KPageDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kpagedialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kpagedialog_enterevent_callback(this, cbval1);
            return;
        }
        KPageDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kpagedialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            kpagedialog_leaveevent_callback(this, cbval1);
            return;
        }
        KPageDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kpagedialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kpagedialog_paintevent_callback(this, cbval1);
            return;
        }
        KPageDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kpagedialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kpagedialog_moveevent_callback(this, cbval1);
            return;
        }
        KPageDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kpagedialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kpagedialog_tabletevent_callback(this, cbval1);
            return;
        }
        KPageDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kpagedialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kpagedialog_actionevent_callback(this, cbval1);
            return;
        }
        KPageDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kpagedialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kpagedialog_dragenterevent_callback(this, cbval1);
            return;
        }
        KPageDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kpagedialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kpagedialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        KPageDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kpagedialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kpagedialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        KPageDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kpagedialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kpagedialog_dropevent_callback(this, cbval1);
            return;
        }
        KPageDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kpagedialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kpagedialog_hideevent_callback(this, cbval1);
            return;
        }
        KPageDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kpagedialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kpagedialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KPageDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kpagedialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            kpagedialog_changeevent_callback(this, cbval1);
            return;
        }
        KPageDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kpagedialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kpagedialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPageDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kpagedialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            kpagedialog_initpainter_callback(this, cbval1);
            return;
        }
        KPageDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kpagedialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kpagedialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KPageDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kpagedialog_sharedpainter_callback) {
            QPainter* callback_ret = kpagedialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return KPageDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kpagedialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kpagedialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        KPageDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kpagedialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kpagedialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPageDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kpagedialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kpagedialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KPageDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpagedialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kpagedialog_timerevent_callback(this, cbval1);
            return;
        }
        KPageDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpagedialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            kpagedialog_childevent_callback(this, cbval1);
            return;
        }
        KPageDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpagedialog_customevent_callback) {
            QEvent* cbval1 = event;
            kpagedialog_customevent_callback(this, cbval1);
            return;
        }
        KPageDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpagedialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpagedialog_connectnotify_callback(this, cbval1);
            return;
        }
        KPageDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpagedialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpagedialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        KPageDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void KPageDialog_SuperKeyPressEvent(KPageDialog* self, QKeyEvent* param1);
    friend void KPageDialog_SuperCloseEvent(KPageDialog* self, QCloseEvent* param1);
    friend void KPageDialog_SuperShowEvent(KPageDialog* self, QShowEvent* param1);
    friend void KPageDialog_SuperResizeEvent(KPageDialog* self, QResizeEvent* param1);
    friend void KPageDialog_SuperContextMenuEvent(KPageDialog* self, QContextMenuEvent* param1);
    friend bool KPageDialog_SuperEventFilter(KPageDialog* self, QObject* param1, QEvent* param2);
    friend bool KPageDialog_SuperEvent(KPageDialog* self, QEvent* event);
    friend void KPageDialog_SuperMousePressEvent(KPageDialog* self, QMouseEvent* event);
    friend void KPageDialog_SuperMouseReleaseEvent(KPageDialog* self, QMouseEvent* event);
    friend void KPageDialog_SuperMouseDoubleClickEvent(KPageDialog* self, QMouseEvent* event);
    friend void KPageDialog_SuperMouseMoveEvent(KPageDialog* self, QMouseEvent* event);
    friend void KPageDialog_SuperWheelEvent(KPageDialog* self, QWheelEvent* event);
    friend void KPageDialog_SuperKeyReleaseEvent(KPageDialog* self, QKeyEvent* event);
    friend void KPageDialog_SuperFocusInEvent(KPageDialog* self, QFocusEvent* event);
    friend void KPageDialog_SuperFocusOutEvent(KPageDialog* self, QFocusEvent* event);
    friend void KPageDialog_SuperEnterEvent(KPageDialog* self, QEnterEvent* event);
    friend void KPageDialog_SuperLeaveEvent(KPageDialog* self, QEvent* event);
    friend void KPageDialog_SuperPaintEvent(KPageDialog* self, QPaintEvent* event);
    friend void KPageDialog_SuperMoveEvent(KPageDialog* self, QMoveEvent* event);
    friend void KPageDialog_SuperTabletEvent(KPageDialog* self, QTabletEvent* event);
    friend void KPageDialog_SuperActionEvent(KPageDialog* self, QActionEvent* event);
    friend void KPageDialog_SuperDragEnterEvent(KPageDialog* self, QDragEnterEvent* event);
    friend void KPageDialog_SuperDragMoveEvent(KPageDialog* self, QDragMoveEvent* event);
    friend void KPageDialog_SuperDragLeaveEvent(KPageDialog* self, QDragLeaveEvent* event);
    friend void KPageDialog_SuperDropEvent(KPageDialog* self, QDropEvent* event);
    friend void KPageDialog_SuperHideEvent(KPageDialog* self, QHideEvent* event);
    friend bool KPageDialog_SuperNativeEvent(KPageDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KPageDialog_SuperChangeEvent(KPageDialog* self, QEvent* param1);
    friend int KPageDialog_SuperMetric(const KPageDialog* self, int param1);
    friend void KPageDialog_SuperInitPainter(const KPageDialog* self, QPainter* painter);
    friend QPaintDevice* KPageDialog_SuperRedirected(const KPageDialog* self, QPoint* offset);
    friend QPainter* KPageDialog_SuperSharedPainter(const KPageDialog* self);
    friend void KPageDialog_SuperInputMethodEvent(KPageDialog* self, QInputMethodEvent* param1);
    friend bool KPageDialog_SuperFocusNextPrevChild(KPageDialog* self, bool next);
    friend void KPageDialog_SuperTimerEvent(KPageDialog* self, QTimerEvent* event);
    friend void KPageDialog_SuperChildEvent(KPageDialog* self, QChildEvent* event);
    friend void KPageDialog_SuperCustomEvent(KPageDialog* self, QEvent* event);
    friend void KPageDialog_SuperConnectNotify(KPageDialog* self, const QMetaMethod* signal);
    friend void KPageDialog_SuperDisconnectNotify(KPageDialog* self, const QMetaMethod* signal);
};

#endif
