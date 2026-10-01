#pragma once
#ifndef EXTRAS_KTEXTWIDGETS_LIBKREPLACEDIALOG_HXX
#define EXTRAS_KTEXTWIDGETS_LIBKREPLACEDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KReplaceDialog
class VirtualKReplaceDialog final : public KReplaceDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using KReplaceDialog_MetaObject_Callback = QMetaObject* (*)(const KReplaceDialog*);
    using KReplaceDialog_Metacast_Callback = void* (*)(KReplaceDialog*, const char*);
    using KReplaceDialog_Metacall_Callback = int (*)(KReplaceDialog*, int, int, void**);
    using KReplaceDialog_ShowEvent_Callback = void (*)(KReplaceDialog*, QShowEvent*);
    using KReplaceDialog_SetVisible_Callback = void (*)(KReplaceDialog*, bool);
    using KReplaceDialog_SizeHint_Callback = QSize* (*)(const KReplaceDialog*);
    using KReplaceDialog_MinimumSizeHint_Callback = QSize* (*)(const KReplaceDialog*);
    using KReplaceDialog_Open_Callback = void (*)(KReplaceDialog*);
    using KReplaceDialog_Exec_Callback = int (*)(KReplaceDialog*);
    using KReplaceDialog_Done_Callback = void (*)(KReplaceDialog*, int);
    using KReplaceDialog_Accept_Callback = void (*)(KReplaceDialog*);
    using KReplaceDialog_Reject_Callback = void (*)(KReplaceDialog*);
    using KReplaceDialog_KeyPressEvent_Callback = void (*)(KReplaceDialog*, QKeyEvent*);
    using KReplaceDialog_CloseEvent_Callback = void (*)(KReplaceDialog*, QCloseEvent*);
    using KReplaceDialog_ResizeEvent_Callback = void (*)(KReplaceDialog*, QResizeEvent*);
    using KReplaceDialog_ContextMenuEvent_Callback = void (*)(KReplaceDialog*, QContextMenuEvent*);
    using KReplaceDialog_EventFilter_Callback = bool (*)(KReplaceDialog*, QObject*, QEvent*);
    using KReplaceDialog_DevType_Callback = int (*)(const KReplaceDialog*);
    using KReplaceDialog_HeightForWidth_Callback = int (*)(const KReplaceDialog*, int);
    using KReplaceDialog_HasHeightForWidth_Callback = bool (*)(const KReplaceDialog*);
    using KReplaceDialog_PaintEngine_Callback = QPaintEngine* (*)(const KReplaceDialog*);
    using KReplaceDialog_Event_Callback = bool (*)(KReplaceDialog*, QEvent*);
    using KReplaceDialog_MousePressEvent_Callback = void (*)(KReplaceDialog*, QMouseEvent*);
    using KReplaceDialog_MouseReleaseEvent_Callback = void (*)(KReplaceDialog*, QMouseEvent*);
    using KReplaceDialog_MouseDoubleClickEvent_Callback = void (*)(KReplaceDialog*, QMouseEvent*);
    using KReplaceDialog_MouseMoveEvent_Callback = void (*)(KReplaceDialog*, QMouseEvent*);
    using KReplaceDialog_WheelEvent_Callback = void (*)(KReplaceDialog*, QWheelEvent*);
    using KReplaceDialog_KeyReleaseEvent_Callback = void (*)(KReplaceDialog*, QKeyEvent*);
    using KReplaceDialog_FocusInEvent_Callback = void (*)(KReplaceDialog*, QFocusEvent*);
    using KReplaceDialog_FocusOutEvent_Callback = void (*)(KReplaceDialog*, QFocusEvent*);
    using KReplaceDialog_EnterEvent_Callback = void (*)(KReplaceDialog*, QEnterEvent*);
    using KReplaceDialog_LeaveEvent_Callback = void (*)(KReplaceDialog*, QEvent*);
    using KReplaceDialog_PaintEvent_Callback = void (*)(KReplaceDialog*, QPaintEvent*);
    using KReplaceDialog_MoveEvent_Callback = void (*)(KReplaceDialog*, QMoveEvent*);
    using KReplaceDialog_TabletEvent_Callback = void (*)(KReplaceDialog*, QTabletEvent*);
    using KReplaceDialog_ActionEvent_Callback = void (*)(KReplaceDialog*, QActionEvent*);
    using KReplaceDialog_DragEnterEvent_Callback = void (*)(KReplaceDialog*, QDragEnterEvent*);
    using KReplaceDialog_DragMoveEvent_Callback = void (*)(KReplaceDialog*, QDragMoveEvent*);
    using KReplaceDialog_DragLeaveEvent_Callback = void (*)(KReplaceDialog*, QDragLeaveEvent*);
    using KReplaceDialog_DropEvent_Callback = void (*)(KReplaceDialog*, QDropEvent*);
    using KReplaceDialog_HideEvent_Callback = void (*)(KReplaceDialog*, QHideEvent*);
    using KReplaceDialog_NativeEvent_Callback = bool (*)(KReplaceDialog*, libqt_string, void*, intptr_t*);
    using KReplaceDialog_ChangeEvent_Callback = void (*)(KReplaceDialog*, QEvent*);
    using KReplaceDialog_Metric_Callback = int (*)(const KReplaceDialog*, int);
    using KReplaceDialog_InitPainter_Callback = void (*)(const KReplaceDialog*, QPainter*);
    using KReplaceDialog_Redirected_Callback = QPaintDevice* (*)(const KReplaceDialog*, QPoint*);
    using KReplaceDialog_SharedPainter_Callback = QPainter* (*)(const KReplaceDialog*);
    using KReplaceDialog_InputMethodEvent_Callback = void (*)(KReplaceDialog*, QInputMethodEvent*);
    using KReplaceDialog_InputMethodQuery_Callback = QVariant* (*)(const KReplaceDialog*, int);
    using KReplaceDialog_FocusNextPrevChild_Callback = bool (*)(KReplaceDialog*, bool);
    using KReplaceDialog_TimerEvent_Callback = void (*)(KReplaceDialog*, QTimerEvent*);
    using KReplaceDialog_ChildEvent_Callback = void (*)(KReplaceDialog*, QChildEvent*);
    using KReplaceDialog_CustomEvent_Callback = void (*)(KReplaceDialog*, QEvent*);
    using KReplaceDialog_ConnectNotify_Callback = void (*)(KReplaceDialog*, QMetaMethod*);
    using KReplaceDialog_DisconnectNotify_Callback = void (*)(KReplaceDialog*, QMetaMethod*);
    using KReplaceDialog::adjustPosition;
    using KReplaceDialog::create;
    using KReplaceDialog::destroy;
    using KReplaceDialog::focusNextChild;
    using KReplaceDialog::focusPreviousChild;
    using KReplaceDialog::getDecodedMetricF;
    using KReplaceDialog::isSignalConnected;
    using KReplaceDialog::receivers;
    using KReplaceDialog::sender;
    using KReplaceDialog::senderSignalIndex;
    using KReplaceDialog::updateMicroFocus;

    // Instance callback storage
    KReplaceDialog_MetaObject_Callback kreplacedialog_metaobject_callback = nullptr;
    KReplaceDialog_Metacast_Callback kreplacedialog_metacast_callback = nullptr;
    KReplaceDialog_Metacall_Callback kreplacedialog_metacall_callback = nullptr;
    KReplaceDialog_ShowEvent_Callback kreplacedialog_showevent_callback = nullptr;
    KReplaceDialog_SetVisible_Callback kreplacedialog_setvisible_callback = nullptr;
    KReplaceDialog_SizeHint_Callback kreplacedialog_sizehint_callback = nullptr;
    KReplaceDialog_MinimumSizeHint_Callback kreplacedialog_minimumsizehint_callback = nullptr;
    KReplaceDialog_Open_Callback kreplacedialog_open_callback = nullptr;
    KReplaceDialog_Exec_Callback kreplacedialog_exec_callback = nullptr;
    KReplaceDialog_Done_Callback kreplacedialog_done_callback = nullptr;
    KReplaceDialog_Accept_Callback kreplacedialog_accept_callback = nullptr;
    KReplaceDialog_Reject_Callback kreplacedialog_reject_callback = nullptr;
    KReplaceDialog_KeyPressEvent_Callback kreplacedialog_keypressevent_callback = nullptr;
    KReplaceDialog_CloseEvent_Callback kreplacedialog_closeevent_callback = nullptr;
    KReplaceDialog_ResizeEvent_Callback kreplacedialog_resizeevent_callback = nullptr;
    KReplaceDialog_ContextMenuEvent_Callback kreplacedialog_contextmenuevent_callback = nullptr;
    KReplaceDialog_EventFilter_Callback kreplacedialog_eventfilter_callback = nullptr;
    KReplaceDialog_DevType_Callback kreplacedialog_devtype_callback = nullptr;
    KReplaceDialog_HeightForWidth_Callback kreplacedialog_heightforwidth_callback = nullptr;
    KReplaceDialog_HasHeightForWidth_Callback kreplacedialog_hasheightforwidth_callback = nullptr;
    KReplaceDialog_PaintEngine_Callback kreplacedialog_paintengine_callback = nullptr;
    KReplaceDialog_Event_Callback kreplacedialog_event_callback = nullptr;
    KReplaceDialog_MousePressEvent_Callback kreplacedialog_mousepressevent_callback = nullptr;
    KReplaceDialog_MouseReleaseEvent_Callback kreplacedialog_mousereleaseevent_callback = nullptr;
    KReplaceDialog_MouseDoubleClickEvent_Callback kreplacedialog_mousedoubleclickevent_callback = nullptr;
    KReplaceDialog_MouseMoveEvent_Callback kreplacedialog_mousemoveevent_callback = nullptr;
    KReplaceDialog_WheelEvent_Callback kreplacedialog_wheelevent_callback = nullptr;
    KReplaceDialog_KeyReleaseEvent_Callback kreplacedialog_keyreleaseevent_callback = nullptr;
    KReplaceDialog_FocusInEvent_Callback kreplacedialog_focusinevent_callback = nullptr;
    KReplaceDialog_FocusOutEvent_Callback kreplacedialog_focusoutevent_callback = nullptr;
    KReplaceDialog_EnterEvent_Callback kreplacedialog_enterevent_callback = nullptr;
    KReplaceDialog_LeaveEvent_Callback kreplacedialog_leaveevent_callback = nullptr;
    KReplaceDialog_PaintEvent_Callback kreplacedialog_paintevent_callback = nullptr;
    KReplaceDialog_MoveEvent_Callback kreplacedialog_moveevent_callback = nullptr;
    KReplaceDialog_TabletEvent_Callback kreplacedialog_tabletevent_callback = nullptr;
    KReplaceDialog_ActionEvent_Callback kreplacedialog_actionevent_callback = nullptr;
    KReplaceDialog_DragEnterEvent_Callback kreplacedialog_dragenterevent_callback = nullptr;
    KReplaceDialog_DragMoveEvent_Callback kreplacedialog_dragmoveevent_callback = nullptr;
    KReplaceDialog_DragLeaveEvent_Callback kreplacedialog_dragleaveevent_callback = nullptr;
    KReplaceDialog_DropEvent_Callback kreplacedialog_dropevent_callback = nullptr;
    KReplaceDialog_HideEvent_Callback kreplacedialog_hideevent_callback = nullptr;
    KReplaceDialog_NativeEvent_Callback kreplacedialog_nativeevent_callback = nullptr;
    KReplaceDialog_ChangeEvent_Callback kreplacedialog_changeevent_callback = nullptr;
    KReplaceDialog_Metric_Callback kreplacedialog_metric_callback = nullptr;
    KReplaceDialog_InitPainter_Callback kreplacedialog_initpainter_callback = nullptr;
    KReplaceDialog_Redirected_Callback kreplacedialog_redirected_callback = nullptr;
    KReplaceDialog_SharedPainter_Callback kreplacedialog_sharedpainter_callback = nullptr;
    KReplaceDialog_InputMethodEvent_Callback kreplacedialog_inputmethodevent_callback = nullptr;
    KReplaceDialog_InputMethodQuery_Callback kreplacedialog_inputmethodquery_callback = nullptr;
    KReplaceDialog_FocusNextPrevChild_Callback kreplacedialog_focusnextprevchild_callback = nullptr;
    KReplaceDialog_TimerEvent_Callback kreplacedialog_timerevent_callback = nullptr;
    KReplaceDialog_ChildEvent_Callback kreplacedialog_childevent_callback = nullptr;
    KReplaceDialog_CustomEvent_Callback kreplacedialog_customevent_callback = nullptr;
    KReplaceDialog_ConnectNotify_Callback kreplacedialog_connectnotify_callback = nullptr;
    KReplaceDialog_DisconnectNotify_Callback kreplacedialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KReplaceDialog {
        using KReplaceDialog::actionEvent;
        using KReplaceDialog::changeEvent;
        using KReplaceDialog::childEvent;
        using KReplaceDialog::closeEvent;
        using KReplaceDialog::connectNotify;
        using KReplaceDialog::contextMenuEvent;
        using KReplaceDialog::customEvent;
        using KReplaceDialog::disconnectNotify;
        using KReplaceDialog::dragEnterEvent;
        using KReplaceDialog::dragLeaveEvent;
        using KReplaceDialog::dragMoveEvent;
        using KReplaceDialog::dropEvent;
        using KReplaceDialog::enterEvent;
        using KReplaceDialog::event;
        using KReplaceDialog::eventFilter;
        using KReplaceDialog::focusInEvent;
        using KReplaceDialog::focusNextPrevChild;
        using KReplaceDialog::focusOutEvent;
        using KReplaceDialog::hideEvent;
        using KReplaceDialog::initPainter;
        using KReplaceDialog::inputMethodEvent;
        using KReplaceDialog::keyPressEvent;
        using KReplaceDialog::keyReleaseEvent;
        using KReplaceDialog::leaveEvent;
        using KReplaceDialog::metric;
        using KReplaceDialog::mouseDoubleClickEvent;
        using KReplaceDialog::mouseMoveEvent;
        using KReplaceDialog::mousePressEvent;
        using KReplaceDialog::mouseReleaseEvent;
        using KReplaceDialog::moveEvent;
        using KReplaceDialog::nativeEvent;
        using KReplaceDialog::paintEvent;
        using KReplaceDialog::redirected;
        using KReplaceDialog::resizeEvent;
        using KReplaceDialog::sharedPainter;
        using KReplaceDialog::showEvent;
        using KReplaceDialog::tabletEvent;
        using KReplaceDialog::timerEvent;
        using KReplaceDialog::wheelEvent;
    };

    VirtualKReplaceDialog(QWidget* parent) : KReplaceDialog(parent) {};
    VirtualKReplaceDialog() : KReplaceDialog() {};
    VirtualKReplaceDialog(QWidget* parent, long options) : KReplaceDialog(parent, options) {};
    VirtualKReplaceDialog(QWidget* parent, long options, const QList<QString>& findStrings) : KReplaceDialog(parent, options, findStrings) {};
    VirtualKReplaceDialog(QWidget* parent, long options, const QList<QString>& findStrings, const QList<QString>& replaceStrings) : KReplaceDialog(parent, options, findStrings, replaceStrings) {};
    VirtualKReplaceDialog(QWidget* parent, long options, const QList<QString>& findStrings, const QList<QString>& replaceStrings, bool hasSelection) : KReplaceDialog(parent, options, findStrings, replaceStrings, hasSelection) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kreplacedialog_metaobject_callback) {
            QMetaObject* callback_ret = kreplacedialog_metaobject_callback(this);
            return callback_ret;
        }
        return KReplaceDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kreplacedialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kreplacedialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KReplaceDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kreplacedialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kreplacedialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KReplaceDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kreplacedialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            kreplacedialog_showevent_callback(this, cbval1);
            return;
        }
        KReplaceDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kreplacedialog_setvisible_callback) {
            bool cbval1 = visible;
            kreplacedialog_setvisible_callback(this, cbval1);
            return;
        }
        KReplaceDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kreplacedialog_sizehint_callback) {
            QSize* callback_ret = kreplacedialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KReplaceDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kreplacedialog_minimumsizehint_callback) {
            QSize* callback_ret = kreplacedialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KReplaceDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kreplacedialog_open_callback) {
            kreplacedialog_open_callback(this);
            return;
        }
        KReplaceDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kreplacedialog_exec_callback) {
            int callback_ret = kreplacedialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KReplaceDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kreplacedialog_done_callback) {
            int cbval1 = param1;
            kreplacedialog_done_callback(this, cbval1);
            return;
        }
        KReplaceDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kreplacedialog_accept_callback) {
            kreplacedialog_accept_callback(this);
            return;
        }
        KReplaceDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kreplacedialog_reject_callback) {
            kreplacedialog_reject_callback(this);
            return;
        }
        KReplaceDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kreplacedialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            kreplacedialog_keypressevent_callback(this, cbval1);
            return;
        }
        KReplaceDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kreplacedialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            kreplacedialog_closeevent_callback(this, cbval1);
            return;
        }
        KReplaceDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kreplacedialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            kreplacedialog_resizeevent_callback(this, cbval1);
            return;
        }
        KReplaceDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kreplacedialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            kreplacedialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        KReplaceDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kreplacedialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = kreplacedialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KReplaceDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kreplacedialog_devtype_callback) {
            int callback_ret = kreplacedialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KReplaceDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kreplacedialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kreplacedialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KReplaceDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kreplacedialog_hasheightforwidth_callback) {
            bool callback_ret = kreplacedialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KReplaceDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kreplacedialog_paintengine_callback) {
            QPaintEngine* callback_ret = kreplacedialog_paintengine_callback(this);
            return callback_ret;
        }
        return KReplaceDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kreplacedialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kreplacedialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return KReplaceDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kreplacedialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kreplacedialog_mousepressevent_callback(this, cbval1);
            return;
        }
        KReplaceDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kreplacedialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kreplacedialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KReplaceDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kreplacedialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kreplacedialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KReplaceDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kreplacedialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kreplacedialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        KReplaceDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kreplacedialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kreplacedialog_wheelevent_callback(this, cbval1);
            return;
        }
        KReplaceDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kreplacedialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kreplacedialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KReplaceDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kreplacedialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kreplacedialog_focusinevent_callback(this, cbval1);
            return;
        }
        KReplaceDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kreplacedialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kreplacedialog_focusoutevent_callback(this, cbval1);
            return;
        }
        KReplaceDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kreplacedialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kreplacedialog_enterevent_callback(this, cbval1);
            return;
        }
        KReplaceDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kreplacedialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            kreplacedialog_leaveevent_callback(this, cbval1);
            return;
        }
        KReplaceDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kreplacedialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kreplacedialog_paintevent_callback(this, cbval1);
            return;
        }
        KReplaceDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kreplacedialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kreplacedialog_moveevent_callback(this, cbval1);
            return;
        }
        KReplaceDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kreplacedialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kreplacedialog_tabletevent_callback(this, cbval1);
            return;
        }
        KReplaceDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kreplacedialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kreplacedialog_actionevent_callback(this, cbval1);
            return;
        }
        KReplaceDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kreplacedialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kreplacedialog_dragenterevent_callback(this, cbval1);
            return;
        }
        KReplaceDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kreplacedialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kreplacedialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        KReplaceDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kreplacedialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kreplacedialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        KReplaceDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kreplacedialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kreplacedialog_dropevent_callback(this, cbval1);
            return;
        }
        KReplaceDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kreplacedialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kreplacedialog_hideevent_callback(this, cbval1);
            return;
        }
        KReplaceDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kreplacedialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kreplacedialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KReplaceDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kreplacedialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            kreplacedialog_changeevent_callback(this, cbval1);
            return;
        }
        KReplaceDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kreplacedialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kreplacedialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KReplaceDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kreplacedialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            kreplacedialog_initpainter_callback(this, cbval1);
            return;
        }
        KReplaceDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kreplacedialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kreplacedialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KReplaceDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kreplacedialog_sharedpainter_callback) {
            QPainter* callback_ret = kreplacedialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return KReplaceDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kreplacedialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kreplacedialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        KReplaceDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kreplacedialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kreplacedialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KReplaceDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kreplacedialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kreplacedialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KReplaceDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kreplacedialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kreplacedialog_timerevent_callback(this, cbval1);
            return;
        }
        KReplaceDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kreplacedialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            kreplacedialog_childevent_callback(this, cbval1);
            return;
        }
        KReplaceDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kreplacedialog_customevent_callback) {
            QEvent* cbval1 = event;
            kreplacedialog_customevent_callback(this, cbval1);
            return;
        }
        KReplaceDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kreplacedialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kreplacedialog_connectnotify_callback(this, cbval1);
            return;
        }
        KReplaceDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kreplacedialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kreplacedialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        KReplaceDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void KReplaceDialog_SuperShowEvent(KReplaceDialog* self, QShowEvent* param1);
    friend void KReplaceDialog_SuperKeyPressEvent(KReplaceDialog* self, QKeyEvent* param1);
    friend void KReplaceDialog_SuperCloseEvent(KReplaceDialog* self, QCloseEvent* param1);
    friend void KReplaceDialog_SuperResizeEvent(KReplaceDialog* self, QResizeEvent* param1);
    friend void KReplaceDialog_SuperContextMenuEvent(KReplaceDialog* self, QContextMenuEvent* param1);
    friend bool KReplaceDialog_SuperEventFilter(KReplaceDialog* self, QObject* param1, QEvent* param2);
    friend bool KReplaceDialog_SuperEvent(KReplaceDialog* self, QEvent* event);
    friend void KReplaceDialog_SuperMousePressEvent(KReplaceDialog* self, QMouseEvent* event);
    friend void KReplaceDialog_SuperMouseReleaseEvent(KReplaceDialog* self, QMouseEvent* event);
    friend void KReplaceDialog_SuperMouseDoubleClickEvent(KReplaceDialog* self, QMouseEvent* event);
    friend void KReplaceDialog_SuperMouseMoveEvent(KReplaceDialog* self, QMouseEvent* event);
    friend void KReplaceDialog_SuperWheelEvent(KReplaceDialog* self, QWheelEvent* event);
    friend void KReplaceDialog_SuperKeyReleaseEvent(KReplaceDialog* self, QKeyEvent* event);
    friend void KReplaceDialog_SuperFocusInEvent(KReplaceDialog* self, QFocusEvent* event);
    friend void KReplaceDialog_SuperFocusOutEvent(KReplaceDialog* self, QFocusEvent* event);
    friend void KReplaceDialog_SuperEnterEvent(KReplaceDialog* self, QEnterEvent* event);
    friend void KReplaceDialog_SuperLeaveEvent(KReplaceDialog* self, QEvent* event);
    friend void KReplaceDialog_SuperPaintEvent(KReplaceDialog* self, QPaintEvent* event);
    friend void KReplaceDialog_SuperMoveEvent(KReplaceDialog* self, QMoveEvent* event);
    friend void KReplaceDialog_SuperTabletEvent(KReplaceDialog* self, QTabletEvent* event);
    friend void KReplaceDialog_SuperActionEvent(KReplaceDialog* self, QActionEvent* event);
    friend void KReplaceDialog_SuperDragEnterEvent(KReplaceDialog* self, QDragEnterEvent* event);
    friend void KReplaceDialog_SuperDragMoveEvent(KReplaceDialog* self, QDragMoveEvent* event);
    friend void KReplaceDialog_SuperDragLeaveEvent(KReplaceDialog* self, QDragLeaveEvent* event);
    friend void KReplaceDialog_SuperDropEvent(KReplaceDialog* self, QDropEvent* event);
    friend void KReplaceDialog_SuperHideEvent(KReplaceDialog* self, QHideEvent* event);
    friend bool KReplaceDialog_SuperNativeEvent(KReplaceDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KReplaceDialog_SuperChangeEvent(KReplaceDialog* self, QEvent* param1);
    friend int KReplaceDialog_SuperMetric(const KReplaceDialog* self, int param1);
    friend void KReplaceDialog_SuperInitPainter(const KReplaceDialog* self, QPainter* painter);
    friend QPaintDevice* KReplaceDialog_SuperRedirected(const KReplaceDialog* self, QPoint* offset);
    friend QPainter* KReplaceDialog_SuperSharedPainter(const KReplaceDialog* self);
    friend void KReplaceDialog_SuperInputMethodEvent(KReplaceDialog* self, QInputMethodEvent* param1);
    friend bool KReplaceDialog_SuperFocusNextPrevChild(KReplaceDialog* self, bool next);
    friend void KReplaceDialog_SuperTimerEvent(KReplaceDialog* self, QTimerEvent* event);
    friend void KReplaceDialog_SuperChildEvent(KReplaceDialog* self, QChildEvent* event);
    friend void KReplaceDialog_SuperCustomEvent(KReplaceDialog* self, QEvent* event);
    friend void KReplaceDialog_SuperConnectNotify(KReplaceDialog* self, const QMetaMethod* signal);
    friend void KReplaceDialog_SuperDisconnectNotify(KReplaceDialog* self, const QMetaMethod* signal);
};

#endif
