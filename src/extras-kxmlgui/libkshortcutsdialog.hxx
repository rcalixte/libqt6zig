#pragma once
#ifndef EXTRAS_KXMLGUI_LIBKSHORTCUTSDIALOG_HXX
#define EXTRAS_KXMLGUI_LIBKSHORTCUTSDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KShortcutsDialog
class VirtualKShortcutsDialog final : public KShortcutsDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using KShortcutsDialog_MetaObject_Callback = QMetaObject* (*)(const KShortcutsDialog*);
    using KShortcutsDialog_Metacast_Callback = void* (*)(KShortcutsDialog*, const char*);
    using KShortcutsDialog_Metacall_Callback = int (*)(KShortcutsDialog*, int, int, void**);
    using KShortcutsDialog_SizeHint_Callback = QSize* (*)(const KShortcutsDialog*);
    using KShortcutsDialog_Accept_Callback = void (*)(KShortcutsDialog*);
    using KShortcutsDialog_SetVisible_Callback = void (*)(KShortcutsDialog*, bool);
    using KShortcutsDialog_MinimumSizeHint_Callback = QSize* (*)(const KShortcutsDialog*);
    using KShortcutsDialog_Open_Callback = void (*)(KShortcutsDialog*);
    using KShortcutsDialog_Exec_Callback = int (*)(KShortcutsDialog*);
    using KShortcutsDialog_Done_Callback = void (*)(KShortcutsDialog*, int);
    using KShortcutsDialog_Reject_Callback = void (*)(KShortcutsDialog*);
    using KShortcutsDialog_KeyPressEvent_Callback = void (*)(KShortcutsDialog*, QKeyEvent*);
    using KShortcutsDialog_CloseEvent_Callback = void (*)(KShortcutsDialog*, QCloseEvent*);
    using KShortcutsDialog_ShowEvent_Callback = void (*)(KShortcutsDialog*, QShowEvent*);
    using KShortcutsDialog_ResizeEvent_Callback = void (*)(KShortcutsDialog*, QResizeEvent*);
    using KShortcutsDialog_ContextMenuEvent_Callback = void (*)(KShortcutsDialog*, QContextMenuEvent*);
    using KShortcutsDialog_EventFilter_Callback = bool (*)(KShortcutsDialog*, QObject*, QEvent*);
    using KShortcutsDialog_DevType_Callback = int (*)(const KShortcutsDialog*);
    using KShortcutsDialog_HeightForWidth_Callback = int (*)(const KShortcutsDialog*, int);
    using KShortcutsDialog_HasHeightForWidth_Callback = bool (*)(const KShortcutsDialog*);
    using KShortcutsDialog_PaintEngine_Callback = QPaintEngine* (*)(const KShortcutsDialog*);
    using KShortcutsDialog_Event_Callback = bool (*)(KShortcutsDialog*, QEvent*);
    using KShortcutsDialog_MousePressEvent_Callback = void (*)(KShortcutsDialog*, QMouseEvent*);
    using KShortcutsDialog_MouseReleaseEvent_Callback = void (*)(KShortcutsDialog*, QMouseEvent*);
    using KShortcutsDialog_MouseDoubleClickEvent_Callback = void (*)(KShortcutsDialog*, QMouseEvent*);
    using KShortcutsDialog_MouseMoveEvent_Callback = void (*)(KShortcutsDialog*, QMouseEvent*);
    using KShortcutsDialog_WheelEvent_Callback = void (*)(KShortcutsDialog*, QWheelEvent*);
    using KShortcutsDialog_KeyReleaseEvent_Callback = void (*)(KShortcutsDialog*, QKeyEvent*);
    using KShortcutsDialog_FocusInEvent_Callback = void (*)(KShortcutsDialog*, QFocusEvent*);
    using KShortcutsDialog_FocusOutEvent_Callback = void (*)(KShortcutsDialog*, QFocusEvent*);
    using KShortcutsDialog_EnterEvent_Callback = void (*)(KShortcutsDialog*, QEnterEvent*);
    using KShortcutsDialog_LeaveEvent_Callback = void (*)(KShortcutsDialog*, QEvent*);
    using KShortcutsDialog_PaintEvent_Callback = void (*)(KShortcutsDialog*, QPaintEvent*);
    using KShortcutsDialog_MoveEvent_Callback = void (*)(KShortcutsDialog*, QMoveEvent*);
    using KShortcutsDialog_TabletEvent_Callback = void (*)(KShortcutsDialog*, QTabletEvent*);
    using KShortcutsDialog_ActionEvent_Callback = void (*)(KShortcutsDialog*, QActionEvent*);
    using KShortcutsDialog_DragEnterEvent_Callback = void (*)(KShortcutsDialog*, QDragEnterEvent*);
    using KShortcutsDialog_DragMoveEvent_Callback = void (*)(KShortcutsDialog*, QDragMoveEvent*);
    using KShortcutsDialog_DragLeaveEvent_Callback = void (*)(KShortcutsDialog*, QDragLeaveEvent*);
    using KShortcutsDialog_DropEvent_Callback = void (*)(KShortcutsDialog*, QDropEvent*);
    using KShortcutsDialog_HideEvent_Callback = void (*)(KShortcutsDialog*, QHideEvent*);
    using KShortcutsDialog_NativeEvent_Callback = bool (*)(KShortcutsDialog*, libqt_string, void*, intptr_t*);
    using KShortcutsDialog_ChangeEvent_Callback = void (*)(KShortcutsDialog*, QEvent*);
    using KShortcutsDialog_Metric_Callback = int (*)(const KShortcutsDialog*, int);
    using KShortcutsDialog_InitPainter_Callback = void (*)(const KShortcutsDialog*, QPainter*);
    using KShortcutsDialog_Redirected_Callback = QPaintDevice* (*)(const KShortcutsDialog*, QPoint*);
    using KShortcutsDialog_SharedPainter_Callback = QPainter* (*)(const KShortcutsDialog*);
    using KShortcutsDialog_InputMethodEvent_Callback = void (*)(KShortcutsDialog*, QInputMethodEvent*);
    using KShortcutsDialog_InputMethodQuery_Callback = QVariant* (*)(const KShortcutsDialog*, int);
    using KShortcutsDialog_FocusNextPrevChild_Callback = bool (*)(KShortcutsDialog*, bool);
    using KShortcutsDialog_TimerEvent_Callback = void (*)(KShortcutsDialog*, QTimerEvent*);
    using KShortcutsDialog_ChildEvent_Callback = void (*)(KShortcutsDialog*, QChildEvent*);
    using KShortcutsDialog_CustomEvent_Callback = void (*)(KShortcutsDialog*, QEvent*);
    using KShortcutsDialog_ConnectNotify_Callback = void (*)(KShortcutsDialog*, QMetaMethod*);
    using KShortcutsDialog_DisconnectNotify_Callback = void (*)(KShortcutsDialog*, QMetaMethod*);
    using KShortcutsDialog::adjustPosition;
    using KShortcutsDialog::create;
    using KShortcutsDialog::destroy;
    using KShortcutsDialog::focusNextChild;
    using KShortcutsDialog::focusPreviousChild;
    using KShortcutsDialog::getDecodedMetricF;
    using KShortcutsDialog::isSignalConnected;
    using KShortcutsDialog::receivers;
    using KShortcutsDialog::sender;
    using KShortcutsDialog::senderSignalIndex;
    using KShortcutsDialog::updateMicroFocus;

    // Instance callback storage
    KShortcutsDialog_MetaObject_Callback kshortcutsdialog_metaobject_callback = nullptr;
    KShortcutsDialog_Metacast_Callback kshortcutsdialog_metacast_callback = nullptr;
    KShortcutsDialog_Metacall_Callback kshortcutsdialog_metacall_callback = nullptr;
    KShortcutsDialog_SizeHint_Callback kshortcutsdialog_sizehint_callback = nullptr;
    KShortcutsDialog_Accept_Callback kshortcutsdialog_accept_callback = nullptr;
    KShortcutsDialog_SetVisible_Callback kshortcutsdialog_setvisible_callback = nullptr;
    KShortcutsDialog_MinimumSizeHint_Callback kshortcutsdialog_minimumsizehint_callback = nullptr;
    KShortcutsDialog_Open_Callback kshortcutsdialog_open_callback = nullptr;
    KShortcutsDialog_Exec_Callback kshortcutsdialog_exec_callback = nullptr;
    KShortcutsDialog_Done_Callback kshortcutsdialog_done_callback = nullptr;
    KShortcutsDialog_Reject_Callback kshortcutsdialog_reject_callback = nullptr;
    KShortcutsDialog_KeyPressEvent_Callback kshortcutsdialog_keypressevent_callback = nullptr;
    KShortcutsDialog_CloseEvent_Callback kshortcutsdialog_closeevent_callback = nullptr;
    KShortcutsDialog_ShowEvent_Callback kshortcutsdialog_showevent_callback = nullptr;
    KShortcutsDialog_ResizeEvent_Callback kshortcutsdialog_resizeevent_callback = nullptr;
    KShortcutsDialog_ContextMenuEvent_Callback kshortcutsdialog_contextmenuevent_callback = nullptr;
    KShortcutsDialog_EventFilter_Callback kshortcutsdialog_eventfilter_callback = nullptr;
    KShortcutsDialog_DevType_Callback kshortcutsdialog_devtype_callback = nullptr;
    KShortcutsDialog_HeightForWidth_Callback kshortcutsdialog_heightforwidth_callback = nullptr;
    KShortcutsDialog_HasHeightForWidth_Callback kshortcutsdialog_hasheightforwidth_callback = nullptr;
    KShortcutsDialog_PaintEngine_Callback kshortcutsdialog_paintengine_callback = nullptr;
    KShortcutsDialog_Event_Callback kshortcutsdialog_event_callback = nullptr;
    KShortcutsDialog_MousePressEvent_Callback kshortcutsdialog_mousepressevent_callback = nullptr;
    KShortcutsDialog_MouseReleaseEvent_Callback kshortcutsdialog_mousereleaseevent_callback = nullptr;
    KShortcutsDialog_MouseDoubleClickEvent_Callback kshortcutsdialog_mousedoubleclickevent_callback = nullptr;
    KShortcutsDialog_MouseMoveEvent_Callback kshortcutsdialog_mousemoveevent_callback = nullptr;
    KShortcutsDialog_WheelEvent_Callback kshortcutsdialog_wheelevent_callback = nullptr;
    KShortcutsDialog_KeyReleaseEvent_Callback kshortcutsdialog_keyreleaseevent_callback = nullptr;
    KShortcutsDialog_FocusInEvent_Callback kshortcutsdialog_focusinevent_callback = nullptr;
    KShortcutsDialog_FocusOutEvent_Callback kshortcutsdialog_focusoutevent_callback = nullptr;
    KShortcutsDialog_EnterEvent_Callback kshortcutsdialog_enterevent_callback = nullptr;
    KShortcutsDialog_LeaveEvent_Callback kshortcutsdialog_leaveevent_callback = nullptr;
    KShortcutsDialog_PaintEvent_Callback kshortcutsdialog_paintevent_callback = nullptr;
    KShortcutsDialog_MoveEvent_Callback kshortcutsdialog_moveevent_callback = nullptr;
    KShortcutsDialog_TabletEvent_Callback kshortcutsdialog_tabletevent_callback = nullptr;
    KShortcutsDialog_ActionEvent_Callback kshortcutsdialog_actionevent_callback = nullptr;
    KShortcutsDialog_DragEnterEvent_Callback kshortcutsdialog_dragenterevent_callback = nullptr;
    KShortcutsDialog_DragMoveEvent_Callback kshortcutsdialog_dragmoveevent_callback = nullptr;
    KShortcutsDialog_DragLeaveEvent_Callback kshortcutsdialog_dragleaveevent_callback = nullptr;
    KShortcutsDialog_DropEvent_Callback kshortcutsdialog_dropevent_callback = nullptr;
    KShortcutsDialog_HideEvent_Callback kshortcutsdialog_hideevent_callback = nullptr;
    KShortcutsDialog_NativeEvent_Callback kshortcutsdialog_nativeevent_callback = nullptr;
    KShortcutsDialog_ChangeEvent_Callback kshortcutsdialog_changeevent_callback = nullptr;
    KShortcutsDialog_Metric_Callback kshortcutsdialog_metric_callback = nullptr;
    KShortcutsDialog_InitPainter_Callback kshortcutsdialog_initpainter_callback = nullptr;
    KShortcutsDialog_Redirected_Callback kshortcutsdialog_redirected_callback = nullptr;
    KShortcutsDialog_SharedPainter_Callback kshortcutsdialog_sharedpainter_callback = nullptr;
    KShortcutsDialog_InputMethodEvent_Callback kshortcutsdialog_inputmethodevent_callback = nullptr;
    KShortcutsDialog_InputMethodQuery_Callback kshortcutsdialog_inputmethodquery_callback = nullptr;
    KShortcutsDialog_FocusNextPrevChild_Callback kshortcutsdialog_focusnextprevchild_callback = nullptr;
    KShortcutsDialog_TimerEvent_Callback kshortcutsdialog_timerevent_callback = nullptr;
    KShortcutsDialog_ChildEvent_Callback kshortcutsdialog_childevent_callback = nullptr;
    KShortcutsDialog_CustomEvent_Callback kshortcutsdialog_customevent_callback = nullptr;
    KShortcutsDialog_ConnectNotify_Callback kshortcutsdialog_connectnotify_callback = nullptr;
    KShortcutsDialog_DisconnectNotify_Callback kshortcutsdialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KShortcutsDialog {
        using KShortcutsDialog::actionEvent;
        using KShortcutsDialog::changeEvent;
        using KShortcutsDialog::childEvent;
        using KShortcutsDialog::closeEvent;
        using KShortcutsDialog::connectNotify;
        using KShortcutsDialog::contextMenuEvent;
        using KShortcutsDialog::customEvent;
        using KShortcutsDialog::disconnectNotify;
        using KShortcutsDialog::dragEnterEvent;
        using KShortcutsDialog::dragLeaveEvent;
        using KShortcutsDialog::dragMoveEvent;
        using KShortcutsDialog::dropEvent;
        using KShortcutsDialog::enterEvent;
        using KShortcutsDialog::event;
        using KShortcutsDialog::eventFilter;
        using KShortcutsDialog::focusInEvent;
        using KShortcutsDialog::focusNextPrevChild;
        using KShortcutsDialog::focusOutEvent;
        using KShortcutsDialog::hideEvent;
        using KShortcutsDialog::initPainter;
        using KShortcutsDialog::inputMethodEvent;
        using KShortcutsDialog::keyPressEvent;
        using KShortcutsDialog::keyReleaseEvent;
        using KShortcutsDialog::leaveEvent;
        using KShortcutsDialog::metric;
        using KShortcutsDialog::mouseDoubleClickEvent;
        using KShortcutsDialog::mouseMoveEvent;
        using KShortcutsDialog::mousePressEvent;
        using KShortcutsDialog::mouseReleaseEvent;
        using KShortcutsDialog::moveEvent;
        using KShortcutsDialog::nativeEvent;
        using KShortcutsDialog::paintEvent;
        using KShortcutsDialog::redirected;
        using KShortcutsDialog::resizeEvent;
        using KShortcutsDialog::sharedPainter;
        using KShortcutsDialog::showEvent;
        using KShortcutsDialog::tabletEvent;
        using KShortcutsDialog::timerEvent;
        using KShortcutsDialog::wheelEvent;
    };

    VirtualKShortcutsDialog(QWidget* parent) : KShortcutsDialog(parent) {};
    VirtualKShortcutsDialog() : KShortcutsDialog() {};
    VirtualKShortcutsDialog(KShortcutsEditor::ActionTypes actionTypes) : KShortcutsDialog(actionTypes) {};
    VirtualKShortcutsDialog(KShortcutsEditor::ActionTypes actionTypes, KShortcutsEditor::LetterShortcuts allowLetterShortcuts) : KShortcutsDialog(actionTypes, allowLetterShortcuts) {};
    VirtualKShortcutsDialog(KShortcutsEditor::ActionTypes actionTypes, KShortcutsEditor::LetterShortcuts allowLetterShortcuts, QWidget* parent) : KShortcutsDialog(actionTypes, allowLetterShortcuts, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kshortcutsdialog_metaobject_callback) {
            QMetaObject* callback_ret = kshortcutsdialog_metaobject_callback(this);
            return callback_ret;
        }
        return KShortcutsDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kshortcutsdialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kshortcutsdialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KShortcutsDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kshortcutsdialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kshortcutsdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KShortcutsDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kshortcutsdialog_sizehint_callback) {
            QSize* callback_ret = kshortcutsdialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KShortcutsDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kshortcutsdialog_accept_callback) {
            kshortcutsdialog_accept_callback(this);
            return;
        }
        KShortcutsDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kshortcutsdialog_setvisible_callback) {
            bool cbval1 = visible;
            kshortcutsdialog_setvisible_callback(this, cbval1);
            return;
        }
        KShortcutsDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kshortcutsdialog_minimumsizehint_callback) {
            QSize* callback_ret = kshortcutsdialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KShortcutsDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kshortcutsdialog_open_callback) {
            kshortcutsdialog_open_callback(this);
            return;
        }
        KShortcutsDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kshortcutsdialog_exec_callback) {
            int callback_ret = kshortcutsdialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KShortcutsDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kshortcutsdialog_done_callback) {
            int cbval1 = param1;
            kshortcutsdialog_done_callback(this, cbval1);
            return;
        }
        KShortcutsDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kshortcutsdialog_reject_callback) {
            kshortcutsdialog_reject_callback(this);
            return;
        }
        KShortcutsDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kshortcutsdialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            kshortcutsdialog_keypressevent_callback(this, cbval1);
            return;
        }
        KShortcutsDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kshortcutsdialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            kshortcutsdialog_closeevent_callback(this, cbval1);
            return;
        }
        KShortcutsDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kshortcutsdialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            kshortcutsdialog_showevent_callback(this, cbval1);
            return;
        }
        KShortcutsDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kshortcutsdialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            kshortcutsdialog_resizeevent_callback(this, cbval1);
            return;
        }
        KShortcutsDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kshortcutsdialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            kshortcutsdialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        KShortcutsDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kshortcutsdialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = kshortcutsdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KShortcutsDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kshortcutsdialog_devtype_callback) {
            int callback_ret = kshortcutsdialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KShortcutsDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kshortcutsdialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kshortcutsdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KShortcutsDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kshortcutsdialog_hasheightforwidth_callback) {
            bool callback_ret = kshortcutsdialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KShortcutsDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kshortcutsdialog_paintengine_callback) {
            QPaintEngine* callback_ret = kshortcutsdialog_paintengine_callback(this);
            return callback_ret;
        }
        return KShortcutsDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kshortcutsdialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kshortcutsdialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return KShortcutsDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kshortcutsdialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kshortcutsdialog_mousepressevent_callback(this, cbval1);
            return;
        }
        KShortcutsDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kshortcutsdialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kshortcutsdialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KShortcutsDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kshortcutsdialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kshortcutsdialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KShortcutsDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kshortcutsdialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kshortcutsdialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        KShortcutsDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kshortcutsdialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kshortcutsdialog_wheelevent_callback(this, cbval1);
            return;
        }
        KShortcutsDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kshortcutsdialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kshortcutsdialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KShortcutsDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kshortcutsdialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kshortcutsdialog_focusinevent_callback(this, cbval1);
            return;
        }
        KShortcutsDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kshortcutsdialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kshortcutsdialog_focusoutevent_callback(this, cbval1);
            return;
        }
        KShortcutsDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kshortcutsdialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kshortcutsdialog_enterevent_callback(this, cbval1);
            return;
        }
        KShortcutsDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kshortcutsdialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            kshortcutsdialog_leaveevent_callback(this, cbval1);
            return;
        }
        KShortcutsDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kshortcutsdialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kshortcutsdialog_paintevent_callback(this, cbval1);
            return;
        }
        KShortcutsDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kshortcutsdialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kshortcutsdialog_moveevent_callback(this, cbval1);
            return;
        }
        KShortcutsDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kshortcutsdialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kshortcutsdialog_tabletevent_callback(this, cbval1);
            return;
        }
        KShortcutsDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kshortcutsdialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kshortcutsdialog_actionevent_callback(this, cbval1);
            return;
        }
        KShortcutsDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kshortcutsdialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kshortcutsdialog_dragenterevent_callback(this, cbval1);
            return;
        }
        KShortcutsDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kshortcutsdialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kshortcutsdialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        KShortcutsDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kshortcutsdialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kshortcutsdialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        KShortcutsDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kshortcutsdialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kshortcutsdialog_dropevent_callback(this, cbval1);
            return;
        }
        KShortcutsDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kshortcutsdialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kshortcutsdialog_hideevent_callback(this, cbval1);
            return;
        }
        KShortcutsDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kshortcutsdialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kshortcutsdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KShortcutsDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kshortcutsdialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            kshortcutsdialog_changeevent_callback(this, cbval1);
            return;
        }
        KShortcutsDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kshortcutsdialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kshortcutsdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KShortcutsDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kshortcutsdialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            kshortcutsdialog_initpainter_callback(this, cbval1);
            return;
        }
        KShortcutsDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kshortcutsdialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kshortcutsdialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KShortcutsDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kshortcutsdialog_sharedpainter_callback) {
            QPainter* callback_ret = kshortcutsdialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return KShortcutsDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kshortcutsdialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kshortcutsdialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        KShortcutsDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kshortcutsdialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kshortcutsdialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KShortcutsDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kshortcutsdialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kshortcutsdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KShortcutsDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kshortcutsdialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kshortcutsdialog_timerevent_callback(this, cbval1);
            return;
        }
        KShortcutsDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kshortcutsdialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            kshortcutsdialog_childevent_callback(this, cbval1);
            return;
        }
        KShortcutsDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kshortcutsdialog_customevent_callback) {
            QEvent* cbval1 = event;
            kshortcutsdialog_customevent_callback(this, cbval1);
            return;
        }
        KShortcutsDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kshortcutsdialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kshortcutsdialog_connectnotify_callback(this, cbval1);
            return;
        }
        KShortcutsDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kshortcutsdialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kshortcutsdialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        KShortcutsDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void KShortcutsDialog_SuperKeyPressEvent(KShortcutsDialog* self, QKeyEvent* param1);
    friend void KShortcutsDialog_SuperCloseEvent(KShortcutsDialog* self, QCloseEvent* param1);
    friend void KShortcutsDialog_SuperShowEvent(KShortcutsDialog* self, QShowEvent* param1);
    friend void KShortcutsDialog_SuperResizeEvent(KShortcutsDialog* self, QResizeEvent* param1);
    friend void KShortcutsDialog_SuperContextMenuEvent(KShortcutsDialog* self, QContextMenuEvent* param1);
    friend bool KShortcutsDialog_SuperEventFilter(KShortcutsDialog* self, QObject* param1, QEvent* param2);
    friend bool KShortcutsDialog_SuperEvent(KShortcutsDialog* self, QEvent* event);
    friend void KShortcutsDialog_SuperMousePressEvent(KShortcutsDialog* self, QMouseEvent* event);
    friend void KShortcutsDialog_SuperMouseReleaseEvent(KShortcutsDialog* self, QMouseEvent* event);
    friend void KShortcutsDialog_SuperMouseDoubleClickEvent(KShortcutsDialog* self, QMouseEvent* event);
    friend void KShortcutsDialog_SuperMouseMoveEvent(KShortcutsDialog* self, QMouseEvent* event);
    friend void KShortcutsDialog_SuperWheelEvent(KShortcutsDialog* self, QWheelEvent* event);
    friend void KShortcutsDialog_SuperKeyReleaseEvent(KShortcutsDialog* self, QKeyEvent* event);
    friend void KShortcutsDialog_SuperFocusInEvent(KShortcutsDialog* self, QFocusEvent* event);
    friend void KShortcutsDialog_SuperFocusOutEvent(KShortcutsDialog* self, QFocusEvent* event);
    friend void KShortcutsDialog_SuperEnterEvent(KShortcutsDialog* self, QEnterEvent* event);
    friend void KShortcutsDialog_SuperLeaveEvent(KShortcutsDialog* self, QEvent* event);
    friend void KShortcutsDialog_SuperPaintEvent(KShortcutsDialog* self, QPaintEvent* event);
    friend void KShortcutsDialog_SuperMoveEvent(KShortcutsDialog* self, QMoveEvent* event);
    friend void KShortcutsDialog_SuperTabletEvent(KShortcutsDialog* self, QTabletEvent* event);
    friend void KShortcutsDialog_SuperActionEvent(KShortcutsDialog* self, QActionEvent* event);
    friend void KShortcutsDialog_SuperDragEnterEvent(KShortcutsDialog* self, QDragEnterEvent* event);
    friend void KShortcutsDialog_SuperDragMoveEvent(KShortcutsDialog* self, QDragMoveEvent* event);
    friend void KShortcutsDialog_SuperDragLeaveEvent(KShortcutsDialog* self, QDragLeaveEvent* event);
    friend void KShortcutsDialog_SuperDropEvent(KShortcutsDialog* self, QDropEvent* event);
    friend void KShortcutsDialog_SuperHideEvent(KShortcutsDialog* self, QHideEvent* event);
    friend bool KShortcutsDialog_SuperNativeEvent(KShortcutsDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KShortcutsDialog_SuperChangeEvent(KShortcutsDialog* self, QEvent* param1);
    friend int KShortcutsDialog_SuperMetric(const KShortcutsDialog* self, int param1);
    friend void KShortcutsDialog_SuperInitPainter(const KShortcutsDialog* self, QPainter* painter);
    friend QPaintDevice* KShortcutsDialog_SuperRedirected(const KShortcutsDialog* self, QPoint* offset);
    friend QPainter* KShortcutsDialog_SuperSharedPainter(const KShortcutsDialog* self);
    friend void KShortcutsDialog_SuperInputMethodEvent(KShortcutsDialog* self, QInputMethodEvent* param1);
    friend bool KShortcutsDialog_SuperFocusNextPrevChild(KShortcutsDialog* self, bool next);
    friend void KShortcutsDialog_SuperTimerEvent(KShortcutsDialog* self, QTimerEvent* event);
    friend void KShortcutsDialog_SuperChildEvent(KShortcutsDialog* self, QChildEvent* event);
    friend void KShortcutsDialog_SuperCustomEvent(KShortcutsDialog* self, QEvent* event);
    friend void KShortcutsDialog_SuperConnectNotify(KShortcutsDialog* self, const QMetaMethod* signal);
    friend void KShortcutsDialog_SuperDisconnectNotify(KShortcutsDialog* self, const QMetaMethod* signal);
};

#endif
