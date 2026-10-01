#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKMESSAGEDIALOG_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKMESSAGEDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KMessageDialog
class VirtualKMessageDialog final : public KMessageDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using KMessageDialog_MetaObject_Callback = QMetaObject* (*)(const KMessageDialog*);
    using KMessageDialog_Metacast_Callback = void* (*)(KMessageDialog*, const char*);
    using KMessageDialog_Metacall_Callback = int (*)(KMessageDialog*, int, int, void**);
    using KMessageDialog_ShowEvent_Callback = void (*)(KMessageDialog*, QShowEvent*);
    using KMessageDialog_SetVisible_Callback = void (*)(KMessageDialog*, bool);
    using KMessageDialog_SizeHint_Callback = QSize* (*)(const KMessageDialog*);
    using KMessageDialog_MinimumSizeHint_Callback = QSize* (*)(const KMessageDialog*);
    using KMessageDialog_Open_Callback = void (*)(KMessageDialog*);
    using KMessageDialog_Exec_Callback = int (*)(KMessageDialog*);
    using KMessageDialog_Done_Callback = void (*)(KMessageDialog*, int);
    using KMessageDialog_Accept_Callback = void (*)(KMessageDialog*);
    using KMessageDialog_Reject_Callback = void (*)(KMessageDialog*);
    using KMessageDialog_KeyPressEvent_Callback = void (*)(KMessageDialog*, QKeyEvent*);
    using KMessageDialog_CloseEvent_Callback = void (*)(KMessageDialog*, QCloseEvent*);
    using KMessageDialog_ResizeEvent_Callback = void (*)(KMessageDialog*, QResizeEvent*);
    using KMessageDialog_ContextMenuEvent_Callback = void (*)(KMessageDialog*, QContextMenuEvent*);
    using KMessageDialog_EventFilter_Callback = bool (*)(KMessageDialog*, QObject*, QEvent*);
    using KMessageDialog_DevType_Callback = int (*)(const KMessageDialog*);
    using KMessageDialog_HeightForWidth_Callback = int (*)(const KMessageDialog*, int);
    using KMessageDialog_HasHeightForWidth_Callback = bool (*)(const KMessageDialog*);
    using KMessageDialog_PaintEngine_Callback = QPaintEngine* (*)(const KMessageDialog*);
    using KMessageDialog_Event_Callback = bool (*)(KMessageDialog*, QEvent*);
    using KMessageDialog_MousePressEvent_Callback = void (*)(KMessageDialog*, QMouseEvent*);
    using KMessageDialog_MouseReleaseEvent_Callback = void (*)(KMessageDialog*, QMouseEvent*);
    using KMessageDialog_MouseDoubleClickEvent_Callback = void (*)(KMessageDialog*, QMouseEvent*);
    using KMessageDialog_MouseMoveEvent_Callback = void (*)(KMessageDialog*, QMouseEvent*);
    using KMessageDialog_WheelEvent_Callback = void (*)(KMessageDialog*, QWheelEvent*);
    using KMessageDialog_KeyReleaseEvent_Callback = void (*)(KMessageDialog*, QKeyEvent*);
    using KMessageDialog_FocusInEvent_Callback = void (*)(KMessageDialog*, QFocusEvent*);
    using KMessageDialog_FocusOutEvent_Callback = void (*)(KMessageDialog*, QFocusEvent*);
    using KMessageDialog_EnterEvent_Callback = void (*)(KMessageDialog*, QEnterEvent*);
    using KMessageDialog_LeaveEvent_Callback = void (*)(KMessageDialog*, QEvent*);
    using KMessageDialog_PaintEvent_Callback = void (*)(KMessageDialog*, QPaintEvent*);
    using KMessageDialog_MoveEvent_Callback = void (*)(KMessageDialog*, QMoveEvent*);
    using KMessageDialog_TabletEvent_Callback = void (*)(KMessageDialog*, QTabletEvent*);
    using KMessageDialog_ActionEvent_Callback = void (*)(KMessageDialog*, QActionEvent*);
    using KMessageDialog_DragEnterEvent_Callback = void (*)(KMessageDialog*, QDragEnterEvent*);
    using KMessageDialog_DragMoveEvent_Callback = void (*)(KMessageDialog*, QDragMoveEvent*);
    using KMessageDialog_DragLeaveEvent_Callback = void (*)(KMessageDialog*, QDragLeaveEvent*);
    using KMessageDialog_DropEvent_Callback = void (*)(KMessageDialog*, QDropEvent*);
    using KMessageDialog_HideEvent_Callback = void (*)(KMessageDialog*, QHideEvent*);
    using KMessageDialog_NativeEvent_Callback = bool (*)(KMessageDialog*, libqt_string, void*, intptr_t*);
    using KMessageDialog_ChangeEvent_Callback = void (*)(KMessageDialog*, QEvent*);
    using KMessageDialog_Metric_Callback = int (*)(const KMessageDialog*, int);
    using KMessageDialog_InitPainter_Callback = void (*)(const KMessageDialog*, QPainter*);
    using KMessageDialog_Redirected_Callback = QPaintDevice* (*)(const KMessageDialog*, QPoint*);
    using KMessageDialog_SharedPainter_Callback = QPainter* (*)(const KMessageDialog*);
    using KMessageDialog_InputMethodEvent_Callback = void (*)(KMessageDialog*, QInputMethodEvent*);
    using KMessageDialog_InputMethodQuery_Callback = QVariant* (*)(const KMessageDialog*, int);
    using KMessageDialog_FocusNextPrevChild_Callback = bool (*)(KMessageDialog*, bool);
    using KMessageDialog_TimerEvent_Callback = void (*)(KMessageDialog*, QTimerEvent*);
    using KMessageDialog_ChildEvent_Callback = void (*)(KMessageDialog*, QChildEvent*);
    using KMessageDialog_CustomEvent_Callback = void (*)(KMessageDialog*, QEvent*);
    using KMessageDialog_ConnectNotify_Callback = void (*)(KMessageDialog*, QMetaMethod*);
    using KMessageDialog_DisconnectNotify_Callback = void (*)(KMessageDialog*, QMetaMethod*);
    using KMessageDialog::adjustPosition;
    using KMessageDialog::create;
    using KMessageDialog::destroy;
    using KMessageDialog::focusNextChild;
    using KMessageDialog::focusPreviousChild;
    using KMessageDialog::getDecodedMetricF;
    using KMessageDialog::isSignalConnected;
    using KMessageDialog::receivers;
    using KMessageDialog::sender;
    using KMessageDialog::senderSignalIndex;
    using KMessageDialog::updateMicroFocus;

    // Instance callback storage
    KMessageDialog_MetaObject_Callback kmessagedialog_metaobject_callback = nullptr;
    KMessageDialog_Metacast_Callback kmessagedialog_metacast_callback = nullptr;
    KMessageDialog_Metacall_Callback kmessagedialog_metacall_callback = nullptr;
    KMessageDialog_ShowEvent_Callback kmessagedialog_showevent_callback = nullptr;
    KMessageDialog_SetVisible_Callback kmessagedialog_setvisible_callback = nullptr;
    KMessageDialog_SizeHint_Callback kmessagedialog_sizehint_callback = nullptr;
    KMessageDialog_MinimumSizeHint_Callback kmessagedialog_minimumsizehint_callback = nullptr;
    KMessageDialog_Open_Callback kmessagedialog_open_callback = nullptr;
    KMessageDialog_Exec_Callback kmessagedialog_exec_callback = nullptr;
    KMessageDialog_Done_Callback kmessagedialog_done_callback = nullptr;
    KMessageDialog_Accept_Callback kmessagedialog_accept_callback = nullptr;
    KMessageDialog_Reject_Callback kmessagedialog_reject_callback = nullptr;
    KMessageDialog_KeyPressEvent_Callback kmessagedialog_keypressevent_callback = nullptr;
    KMessageDialog_CloseEvent_Callback kmessagedialog_closeevent_callback = nullptr;
    KMessageDialog_ResizeEvent_Callback kmessagedialog_resizeevent_callback = nullptr;
    KMessageDialog_ContextMenuEvent_Callback kmessagedialog_contextmenuevent_callback = nullptr;
    KMessageDialog_EventFilter_Callback kmessagedialog_eventfilter_callback = nullptr;
    KMessageDialog_DevType_Callback kmessagedialog_devtype_callback = nullptr;
    KMessageDialog_HeightForWidth_Callback kmessagedialog_heightforwidth_callback = nullptr;
    KMessageDialog_HasHeightForWidth_Callback kmessagedialog_hasheightforwidth_callback = nullptr;
    KMessageDialog_PaintEngine_Callback kmessagedialog_paintengine_callback = nullptr;
    KMessageDialog_Event_Callback kmessagedialog_event_callback = nullptr;
    KMessageDialog_MousePressEvent_Callback kmessagedialog_mousepressevent_callback = nullptr;
    KMessageDialog_MouseReleaseEvent_Callback kmessagedialog_mousereleaseevent_callback = nullptr;
    KMessageDialog_MouseDoubleClickEvent_Callback kmessagedialog_mousedoubleclickevent_callback = nullptr;
    KMessageDialog_MouseMoveEvent_Callback kmessagedialog_mousemoveevent_callback = nullptr;
    KMessageDialog_WheelEvent_Callback kmessagedialog_wheelevent_callback = nullptr;
    KMessageDialog_KeyReleaseEvent_Callback kmessagedialog_keyreleaseevent_callback = nullptr;
    KMessageDialog_FocusInEvent_Callback kmessagedialog_focusinevent_callback = nullptr;
    KMessageDialog_FocusOutEvent_Callback kmessagedialog_focusoutevent_callback = nullptr;
    KMessageDialog_EnterEvent_Callback kmessagedialog_enterevent_callback = nullptr;
    KMessageDialog_LeaveEvent_Callback kmessagedialog_leaveevent_callback = nullptr;
    KMessageDialog_PaintEvent_Callback kmessagedialog_paintevent_callback = nullptr;
    KMessageDialog_MoveEvent_Callback kmessagedialog_moveevent_callback = nullptr;
    KMessageDialog_TabletEvent_Callback kmessagedialog_tabletevent_callback = nullptr;
    KMessageDialog_ActionEvent_Callback kmessagedialog_actionevent_callback = nullptr;
    KMessageDialog_DragEnterEvent_Callback kmessagedialog_dragenterevent_callback = nullptr;
    KMessageDialog_DragMoveEvent_Callback kmessagedialog_dragmoveevent_callback = nullptr;
    KMessageDialog_DragLeaveEvent_Callback kmessagedialog_dragleaveevent_callback = nullptr;
    KMessageDialog_DropEvent_Callback kmessagedialog_dropevent_callback = nullptr;
    KMessageDialog_HideEvent_Callback kmessagedialog_hideevent_callback = nullptr;
    KMessageDialog_NativeEvent_Callback kmessagedialog_nativeevent_callback = nullptr;
    KMessageDialog_ChangeEvent_Callback kmessagedialog_changeevent_callback = nullptr;
    KMessageDialog_Metric_Callback kmessagedialog_metric_callback = nullptr;
    KMessageDialog_InitPainter_Callback kmessagedialog_initpainter_callback = nullptr;
    KMessageDialog_Redirected_Callback kmessagedialog_redirected_callback = nullptr;
    KMessageDialog_SharedPainter_Callback kmessagedialog_sharedpainter_callback = nullptr;
    KMessageDialog_InputMethodEvent_Callback kmessagedialog_inputmethodevent_callback = nullptr;
    KMessageDialog_InputMethodQuery_Callback kmessagedialog_inputmethodquery_callback = nullptr;
    KMessageDialog_FocusNextPrevChild_Callback kmessagedialog_focusnextprevchild_callback = nullptr;
    KMessageDialog_TimerEvent_Callback kmessagedialog_timerevent_callback = nullptr;
    KMessageDialog_ChildEvent_Callback kmessagedialog_childevent_callback = nullptr;
    KMessageDialog_CustomEvent_Callback kmessagedialog_customevent_callback = nullptr;
    KMessageDialog_ConnectNotify_Callback kmessagedialog_connectnotify_callback = nullptr;
    KMessageDialog_DisconnectNotify_Callback kmessagedialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KMessageDialog {
        using KMessageDialog::actionEvent;
        using KMessageDialog::changeEvent;
        using KMessageDialog::childEvent;
        using KMessageDialog::closeEvent;
        using KMessageDialog::connectNotify;
        using KMessageDialog::contextMenuEvent;
        using KMessageDialog::customEvent;
        using KMessageDialog::disconnectNotify;
        using KMessageDialog::dragEnterEvent;
        using KMessageDialog::dragLeaveEvent;
        using KMessageDialog::dragMoveEvent;
        using KMessageDialog::dropEvent;
        using KMessageDialog::enterEvent;
        using KMessageDialog::event;
        using KMessageDialog::eventFilter;
        using KMessageDialog::focusInEvent;
        using KMessageDialog::focusNextPrevChild;
        using KMessageDialog::focusOutEvent;
        using KMessageDialog::hideEvent;
        using KMessageDialog::initPainter;
        using KMessageDialog::inputMethodEvent;
        using KMessageDialog::keyPressEvent;
        using KMessageDialog::keyReleaseEvent;
        using KMessageDialog::leaveEvent;
        using KMessageDialog::metric;
        using KMessageDialog::mouseDoubleClickEvent;
        using KMessageDialog::mouseMoveEvent;
        using KMessageDialog::mousePressEvent;
        using KMessageDialog::mouseReleaseEvent;
        using KMessageDialog::moveEvent;
        using KMessageDialog::nativeEvent;
        using KMessageDialog::paintEvent;
        using KMessageDialog::redirected;
        using KMessageDialog::resizeEvent;
        using KMessageDialog::sharedPainter;
        using KMessageDialog::showEvent;
        using KMessageDialog::tabletEvent;
        using KMessageDialog::timerEvent;
        using KMessageDialog::wheelEvent;
    };

    VirtualKMessageDialog(KMessageDialog::Type typeVal, const QString& text) : KMessageDialog(typeVal, text) {};
    VirtualKMessageDialog(KMessageDialog::Type typeVal, const QString& text, WId parent_id) : KMessageDialog(typeVal, text, parent_id) {};
    VirtualKMessageDialog(KMessageDialog::Type typeVal, const QString& text, QWidget* parent) : KMessageDialog(typeVal, text, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kmessagedialog_metaobject_callback) {
            QMetaObject* callback_ret = kmessagedialog_metaobject_callback(this);
            return callback_ret;
        }
        return KMessageDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kmessagedialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kmessagedialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KMessageDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kmessagedialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kmessagedialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KMessageDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kmessagedialog_showevent_callback) {
            QShowEvent* cbval1 = event;
            kmessagedialog_showevent_callback(this, cbval1);
            return;
        }
        KMessageDialog::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kmessagedialog_setvisible_callback) {
            bool cbval1 = visible;
            kmessagedialog_setvisible_callback(this, cbval1);
            return;
        }
        KMessageDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kmessagedialog_sizehint_callback) {
            QSize* callback_ret = kmessagedialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KMessageDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kmessagedialog_minimumsizehint_callback) {
            QSize* callback_ret = kmessagedialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KMessageDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kmessagedialog_open_callback) {
            kmessagedialog_open_callback(this);
            return;
        }
        KMessageDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kmessagedialog_exec_callback) {
            int callback_ret = kmessagedialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KMessageDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kmessagedialog_done_callback) {
            int cbval1 = param1;
            kmessagedialog_done_callback(this, cbval1);
            return;
        }
        KMessageDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kmessagedialog_accept_callback) {
            kmessagedialog_accept_callback(this);
            return;
        }
        KMessageDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kmessagedialog_reject_callback) {
            kmessagedialog_reject_callback(this);
            return;
        }
        KMessageDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kmessagedialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            kmessagedialog_keypressevent_callback(this, cbval1);
            return;
        }
        KMessageDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kmessagedialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            kmessagedialog_closeevent_callback(this, cbval1);
            return;
        }
        KMessageDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kmessagedialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            kmessagedialog_resizeevent_callback(this, cbval1);
            return;
        }
        KMessageDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kmessagedialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            kmessagedialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        KMessageDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kmessagedialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = kmessagedialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KMessageDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kmessagedialog_devtype_callback) {
            int callback_ret = kmessagedialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KMessageDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kmessagedialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kmessagedialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KMessageDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kmessagedialog_hasheightforwidth_callback) {
            bool callback_ret = kmessagedialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KMessageDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kmessagedialog_paintengine_callback) {
            QPaintEngine* callback_ret = kmessagedialog_paintengine_callback(this);
            return callback_ret;
        }
        return KMessageDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kmessagedialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kmessagedialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return KMessageDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kmessagedialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kmessagedialog_mousepressevent_callback(this, cbval1);
            return;
        }
        KMessageDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kmessagedialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kmessagedialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KMessageDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kmessagedialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kmessagedialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KMessageDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kmessagedialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kmessagedialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        KMessageDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kmessagedialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kmessagedialog_wheelevent_callback(this, cbval1);
            return;
        }
        KMessageDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kmessagedialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kmessagedialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KMessageDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kmessagedialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kmessagedialog_focusinevent_callback(this, cbval1);
            return;
        }
        KMessageDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kmessagedialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kmessagedialog_focusoutevent_callback(this, cbval1);
            return;
        }
        KMessageDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kmessagedialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kmessagedialog_enterevent_callback(this, cbval1);
            return;
        }
        KMessageDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kmessagedialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            kmessagedialog_leaveevent_callback(this, cbval1);
            return;
        }
        KMessageDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kmessagedialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kmessagedialog_paintevent_callback(this, cbval1);
            return;
        }
        KMessageDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kmessagedialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kmessagedialog_moveevent_callback(this, cbval1);
            return;
        }
        KMessageDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kmessagedialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kmessagedialog_tabletevent_callback(this, cbval1);
            return;
        }
        KMessageDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kmessagedialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kmessagedialog_actionevent_callback(this, cbval1);
            return;
        }
        KMessageDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kmessagedialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kmessagedialog_dragenterevent_callback(this, cbval1);
            return;
        }
        KMessageDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kmessagedialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kmessagedialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        KMessageDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kmessagedialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kmessagedialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        KMessageDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kmessagedialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kmessagedialog_dropevent_callback(this, cbval1);
            return;
        }
        KMessageDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kmessagedialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kmessagedialog_hideevent_callback(this, cbval1);
            return;
        }
        KMessageDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kmessagedialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kmessagedialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KMessageDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kmessagedialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            kmessagedialog_changeevent_callback(this, cbval1);
            return;
        }
        KMessageDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kmessagedialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kmessagedialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KMessageDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kmessagedialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            kmessagedialog_initpainter_callback(this, cbval1);
            return;
        }
        KMessageDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kmessagedialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kmessagedialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KMessageDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kmessagedialog_sharedpainter_callback) {
            QPainter* callback_ret = kmessagedialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return KMessageDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kmessagedialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kmessagedialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        KMessageDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kmessagedialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kmessagedialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KMessageDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kmessagedialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kmessagedialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KMessageDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kmessagedialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kmessagedialog_timerevent_callback(this, cbval1);
            return;
        }
        KMessageDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kmessagedialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            kmessagedialog_childevent_callback(this, cbval1);
            return;
        }
        KMessageDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kmessagedialog_customevent_callback) {
            QEvent* cbval1 = event;
            kmessagedialog_customevent_callback(this, cbval1);
            return;
        }
        KMessageDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kmessagedialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kmessagedialog_connectnotify_callback(this, cbval1);
            return;
        }
        KMessageDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kmessagedialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kmessagedialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        KMessageDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void KMessageDialog_SuperShowEvent(KMessageDialog* self, QShowEvent* event);
    friend void KMessageDialog_SuperKeyPressEvent(KMessageDialog* self, QKeyEvent* param1);
    friend void KMessageDialog_SuperCloseEvent(KMessageDialog* self, QCloseEvent* param1);
    friend void KMessageDialog_SuperResizeEvent(KMessageDialog* self, QResizeEvent* param1);
    friend void KMessageDialog_SuperContextMenuEvent(KMessageDialog* self, QContextMenuEvent* param1);
    friend bool KMessageDialog_SuperEventFilter(KMessageDialog* self, QObject* param1, QEvent* param2);
    friend bool KMessageDialog_SuperEvent(KMessageDialog* self, QEvent* event);
    friend void KMessageDialog_SuperMousePressEvent(KMessageDialog* self, QMouseEvent* event);
    friend void KMessageDialog_SuperMouseReleaseEvent(KMessageDialog* self, QMouseEvent* event);
    friend void KMessageDialog_SuperMouseDoubleClickEvent(KMessageDialog* self, QMouseEvent* event);
    friend void KMessageDialog_SuperMouseMoveEvent(KMessageDialog* self, QMouseEvent* event);
    friend void KMessageDialog_SuperWheelEvent(KMessageDialog* self, QWheelEvent* event);
    friend void KMessageDialog_SuperKeyReleaseEvent(KMessageDialog* self, QKeyEvent* event);
    friend void KMessageDialog_SuperFocusInEvent(KMessageDialog* self, QFocusEvent* event);
    friend void KMessageDialog_SuperFocusOutEvent(KMessageDialog* self, QFocusEvent* event);
    friend void KMessageDialog_SuperEnterEvent(KMessageDialog* self, QEnterEvent* event);
    friend void KMessageDialog_SuperLeaveEvent(KMessageDialog* self, QEvent* event);
    friend void KMessageDialog_SuperPaintEvent(KMessageDialog* self, QPaintEvent* event);
    friend void KMessageDialog_SuperMoveEvent(KMessageDialog* self, QMoveEvent* event);
    friend void KMessageDialog_SuperTabletEvent(KMessageDialog* self, QTabletEvent* event);
    friend void KMessageDialog_SuperActionEvent(KMessageDialog* self, QActionEvent* event);
    friend void KMessageDialog_SuperDragEnterEvent(KMessageDialog* self, QDragEnterEvent* event);
    friend void KMessageDialog_SuperDragMoveEvent(KMessageDialog* self, QDragMoveEvent* event);
    friend void KMessageDialog_SuperDragLeaveEvent(KMessageDialog* self, QDragLeaveEvent* event);
    friend void KMessageDialog_SuperDropEvent(KMessageDialog* self, QDropEvent* event);
    friend void KMessageDialog_SuperHideEvent(KMessageDialog* self, QHideEvent* event);
    friend bool KMessageDialog_SuperNativeEvent(KMessageDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KMessageDialog_SuperChangeEvent(KMessageDialog* self, QEvent* param1);
    friend int KMessageDialog_SuperMetric(const KMessageDialog* self, int param1);
    friend void KMessageDialog_SuperInitPainter(const KMessageDialog* self, QPainter* painter);
    friend QPaintDevice* KMessageDialog_SuperRedirected(const KMessageDialog* self, QPoint* offset);
    friend QPainter* KMessageDialog_SuperSharedPainter(const KMessageDialog* self);
    friend void KMessageDialog_SuperInputMethodEvent(KMessageDialog* self, QInputMethodEvent* param1);
    friend bool KMessageDialog_SuperFocusNextPrevChild(KMessageDialog* self, bool next);
    friend void KMessageDialog_SuperTimerEvent(KMessageDialog* self, QTimerEvent* event);
    friend void KMessageDialog_SuperChildEvent(KMessageDialog* self, QChildEvent* event);
    friend void KMessageDialog_SuperCustomEvent(KMessageDialog* self, QEvent* event);
    friend void KMessageDialog_SuperConnectNotify(KMessageDialog* self, const QMetaMethod* signal);
    friend void KMessageDialog_SuperDisconnectNotify(KMessageDialog* self, const QMetaMethod* signal);
};

#endif
