#pragma once
#ifndef EXTRAS_KCONFIGWIDGETS_LIBKCONFIGDIALOG_HXX
#define EXTRAS_KCONFIGWIDGETS_LIBKCONFIGDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KConfigDialog
class VirtualKConfigDialog final : public KConfigDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using KConfigDialog_MetaObject_Callback = QMetaObject* (*)(const KConfigDialog*);
    using KConfigDialog_Metacast_Callback = void* (*)(KConfigDialog*, const char*);
    using KConfigDialog_Metacall_Callback = int (*)(KConfigDialog*, int, int, void**);
    using KConfigDialog_UpdateSettings_Callback = void (*)(KConfigDialog*);
    using KConfigDialog_UpdateWidgets_Callback = void (*)(KConfigDialog*);
    using KConfigDialog_UpdateWidgetsDefault_Callback = void (*)(KConfigDialog*);
    using KConfigDialog_ShowHelp_Callback = void (*)(KConfigDialog*);
    using KConfigDialog_HasChanged_Callback = bool (*)(KConfigDialog*);
    using KConfigDialog_IsDefault_Callback = bool (*)(KConfigDialog*);
    using KConfigDialog_ShowEvent_Callback = void (*)(KConfigDialog*, QShowEvent*);
    using KConfigDialog_SetVisible_Callback = void (*)(KConfigDialog*, bool);
    using KConfigDialog_SizeHint_Callback = QSize* (*)(const KConfigDialog*);
    using KConfigDialog_MinimumSizeHint_Callback = QSize* (*)(const KConfigDialog*);
    using KConfigDialog_Open_Callback = void (*)(KConfigDialog*);
    using KConfigDialog_Exec_Callback = int (*)(KConfigDialog*);
    using KConfigDialog_Done_Callback = void (*)(KConfigDialog*, int);
    using KConfigDialog_Accept_Callback = void (*)(KConfigDialog*);
    using KConfigDialog_Reject_Callback = void (*)(KConfigDialog*);
    using KConfigDialog_KeyPressEvent_Callback = void (*)(KConfigDialog*, QKeyEvent*);
    using KConfigDialog_CloseEvent_Callback = void (*)(KConfigDialog*, QCloseEvent*);
    using KConfigDialog_ResizeEvent_Callback = void (*)(KConfigDialog*, QResizeEvent*);
    using KConfigDialog_ContextMenuEvent_Callback = void (*)(KConfigDialog*, QContextMenuEvent*);
    using KConfigDialog_EventFilter_Callback = bool (*)(KConfigDialog*, QObject*, QEvent*);
    using KConfigDialog_DevType_Callback = int (*)(const KConfigDialog*);
    using KConfigDialog_HeightForWidth_Callback = int (*)(const KConfigDialog*, int);
    using KConfigDialog_HasHeightForWidth_Callback = bool (*)(const KConfigDialog*);
    using KConfigDialog_PaintEngine_Callback = QPaintEngine* (*)(const KConfigDialog*);
    using KConfigDialog_Event_Callback = bool (*)(KConfigDialog*, QEvent*);
    using KConfigDialog_MousePressEvent_Callback = void (*)(KConfigDialog*, QMouseEvent*);
    using KConfigDialog_MouseReleaseEvent_Callback = void (*)(KConfigDialog*, QMouseEvent*);
    using KConfigDialog_MouseDoubleClickEvent_Callback = void (*)(KConfigDialog*, QMouseEvent*);
    using KConfigDialog_MouseMoveEvent_Callback = void (*)(KConfigDialog*, QMouseEvent*);
    using KConfigDialog_WheelEvent_Callback = void (*)(KConfigDialog*, QWheelEvent*);
    using KConfigDialog_KeyReleaseEvent_Callback = void (*)(KConfigDialog*, QKeyEvent*);
    using KConfigDialog_FocusInEvent_Callback = void (*)(KConfigDialog*, QFocusEvent*);
    using KConfigDialog_FocusOutEvent_Callback = void (*)(KConfigDialog*, QFocusEvent*);
    using KConfigDialog_EnterEvent_Callback = void (*)(KConfigDialog*, QEnterEvent*);
    using KConfigDialog_LeaveEvent_Callback = void (*)(KConfigDialog*, QEvent*);
    using KConfigDialog_PaintEvent_Callback = void (*)(KConfigDialog*, QPaintEvent*);
    using KConfigDialog_MoveEvent_Callback = void (*)(KConfigDialog*, QMoveEvent*);
    using KConfigDialog_TabletEvent_Callback = void (*)(KConfigDialog*, QTabletEvent*);
    using KConfigDialog_ActionEvent_Callback = void (*)(KConfigDialog*, QActionEvent*);
    using KConfigDialog_DragEnterEvent_Callback = void (*)(KConfigDialog*, QDragEnterEvent*);
    using KConfigDialog_DragMoveEvent_Callback = void (*)(KConfigDialog*, QDragMoveEvent*);
    using KConfigDialog_DragLeaveEvent_Callback = void (*)(KConfigDialog*, QDragLeaveEvent*);
    using KConfigDialog_DropEvent_Callback = void (*)(KConfigDialog*, QDropEvent*);
    using KConfigDialog_HideEvent_Callback = void (*)(KConfigDialog*, QHideEvent*);
    using KConfigDialog_NativeEvent_Callback = bool (*)(KConfigDialog*, libqt_string, void*, intptr_t*);
    using KConfigDialog_ChangeEvent_Callback = void (*)(KConfigDialog*, QEvent*);
    using KConfigDialog_Metric_Callback = int (*)(const KConfigDialog*, int);
    using KConfigDialog_InitPainter_Callback = void (*)(const KConfigDialog*, QPainter*);
    using KConfigDialog_Redirected_Callback = QPaintDevice* (*)(const KConfigDialog*, QPoint*);
    using KConfigDialog_SharedPainter_Callback = QPainter* (*)(const KConfigDialog*);
    using KConfigDialog_InputMethodEvent_Callback = void (*)(KConfigDialog*, QInputMethodEvent*);
    using KConfigDialog_InputMethodQuery_Callback = QVariant* (*)(const KConfigDialog*, int);
    using KConfigDialog_FocusNextPrevChild_Callback = bool (*)(KConfigDialog*, bool);
    using KConfigDialog_TimerEvent_Callback = void (*)(KConfigDialog*, QTimerEvent*);
    using KConfigDialog_ChildEvent_Callback = void (*)(KConfigDialog*, QChildEvent*);
    using KConfigDialog_CustomEvent_Callback = void (*)(KConfigDialog*, QEvent*);
    using KConfigDialog_ConnectNotify_Callback = void (*)(KConfigDialog*, QMetaMethod*);
    using KConfigDialog_DisconnectNotify_Callback = void (*)(KConfigDialog*, QMetaMethod*);
    using KConfigDialog::adjustPosition;
    using KConfigDialog::buttonBox;
    using KConfigDialog::create;
    using KConfigDialog::destroy;
    using KConfigDialog::focusNextChild;
    using KConfigDialog::focusPreviousChild;
    using KConfigDialog::getDecodedMetricF;
    using KConfigDialog::isSignalConnected;
    using KConfigDialog::pageWidget;
    using KConfigDialog::receivers;
    using KConfigDialog::sender;
    using KConfigDialog::senderSignalIndex;
    using KConfigDialog::setButtonBox;
    using KConfigDialog::setHelp;
    using KConfigDialog::setPageWidget;
    using KConfigDialog::settingsChangedSlot;
    using KConfigDialog::updateButtons;
    using KConfigDialog::updateMicroFocus;

    // Instance callback storage
    KConfigDialog_MetaObject_Callback kconfigdialog_metaobject_callback = nullptr;
    KConfigDialog_Metacast_Callback kconfigdialog_metacast_callback = nullptr;
    KConfigDialog_Metacall_Callback kconfigdialog_metacall_callback = nullptr;
    KConfigDialog_UpdateSettings_Callback kconfigdialog_updatesettings_callback = nullptr;
    KConfigDialog_UpdateWidgets_Callback kconfigdialog_updatewidgets_callback = nullptr;
    KConfigDialog_UpdateWidgetsDefault_Callback kconfigdialog_updatewidgetsdefault_callback = nullptr;
    KConfigDialog_ShowHelp_Callback kconfigdialog_showhelp_callback = nullptr;
    KConfigDialog_HasChanged_Callback kconfigdialog_haschanged_callback = nullptr;
    KConfigDialog_IsDefault_Callback kconfigdialog_isdefault_callback = nullptr;
    KConfigDialog_ShowEvent_Callback kconfigdialog_showevent_callback = nullptr;
    KConfigDialog_SetVisible_Callback kconfigdialog_setvisible_callback = nullptr;
    KConfigDialog_SizeHint_Callback kconfigdialog_sizehint_callback = nullptr;
    KConfigDialog_MinimumSizeHint_Callback kconfigdialog_minimumsizehint_callback = nullptr;
    KConfigDialog_Open_Callback kconfigdialog_open_callback = nullptr;
    KConfigDialog_Exec_Callback kconfigdialog_exec_callback = nullptr;
    KConfigDialog_Done_Callback kconfigdialog_done_callback = nullptr;
    KConfigDialog_Accept_Callback kconfigdialog_accept_callback = nullptr;
    KConfigDialog_Reject_Callback kconfigdialog_reject_callback = nullptr;
    KConfigDialog_KeyPressEvent_Callback kconfigdialog_keypressevent_callback = nullptr;
    KConfigDialog_CloseEvent_Callback kconfigdialog_closeevent_callback = nullptr;
    KConfigDialog_ResizeEvent_Callback kconfigdialog_resizeevent_callback = nullptr;
    KConfigDialog_ContextMenuEvent_Callback kconfigdialog_contextmenuevent_callback = nullptr;
    KConfigDialog_EventFilter_Callback kconfigdialog_eventfilter_callback = nullptr;
    KConfigDialog_DevType_Callback kconfigdialog_devtype_callback = nullptr;
    KConfigDialog_HeightForWidth_Callback kconfigdialog_heightforwidth_callback = nullptr;
    KConfigDialog_HasHeightForWidth_Callback kconfigdialog_hasheightforwidth_callback = nullptr;
    KConfigDialog_PaintEngine_Callback kconfigdialog_paintengine_callback = nullptr;
    KConfigDialog_Event_Callback kconfigdialog_event_callback = nullptr;
    KConfigDialog_MousePressEvent_Callback kconfigdialog_mousepressevent_callback = nullptr;
    KConfigDialog_MouseReleaseEvent_Callback kconfigdialog_mousereleaseevent_callback = nullptr;
    KConfigDialog_MouseDoubleClickEvent_Callback kconfigdialog_mousedoubleclickevent_callback = nullptr;
    KConfigDialog_MouseMoveEvent_Callback kconfigdialog_mousemoveevent_callback = nullptr;
    KConfigDialog_WheelEvent_Callback kconfigdialog_wheelevent_callback = nullptr;
    KConfigDialog_KeyReleaseEvent_Callback kconfigdialog_keyreleaseevent_callback = nullptr;
    KConfigDialog_FocusInEvent_Callback kconfigdialog_focusinevent_callback = nullptr;
    KConfigDialog_FocusOutEvent_Callback kconfigdialog_focusoutevent_callback = nullptr;
    KConfigDialog_EnterEvent_Callback kconfigdialog_enterevent_callback = nullptr;
    KConfigDialog_LeaveEvent_Callback kconfigdialog_leaveevent_callback = nullptr;
    KConfigDialog_PaintEvent_Callback kconfigdialog_paintevent_callback = nullptr;
    KConfigDialog_MoveEvent_Callback kconfigdialog_moveevent_callback = nullptr;
    KConfigDialog_TabletEvent_Callback kconfigdialog_tabletevent_callback = nullptr;
    KConfigDialog_ActionEvent_Callback kconfigdialog_actionevent_callback = nullptr;
    KConfigDialog_DragEnterEvent_Callback kconfigdialog_dragenterevent_callback = nullptr;
    KConfigDialog_DragMoveEvent_Callback kconfigdialog_dragmoveevent_callback = nullptr;
    KConfigDialog_DragLeaveEvent_Callback kconfigdialog_dragleaveevent_callback = nullptr;
    KConfigDialog_DropEvent_Callback kconfigdialog_dropevent_callback = nullptr;
    KConfigDialog_HideEvent_Callback kconfigdialog_hideevent_callback = nullptr;
    KConfigDialog_NativeEvent_Callback kconfigdialog_nativeevent_callback = nullptr;
    KConfigDialog_ChangeEvent_Callback kconfigdialog_changeevent_callback = nullptr;
    KConfigDialog_Metric_Callback kconfigdialog_metric_callback = nullptr;
    KConfigDialog_InitPainter_Callback kconfigdialog_initpainter_callback = nullptr;
    KConfigDialog_Redirected_Callback kconfigdialog_redirected_callback = nullptr;
    KConfigDialog_SharedPainter_Callback kconfigdialog_sharedpainter_callback = nullptr;
    KConfigDialog_InputMethodEvent_Callback kconfigdialog_inputmethodevent_callback = nullptr;
    KConfigDialog_InputMethodQuery_Callback kconfigdialog_inputmethodquery_callback = nullptr;
    KConfigDialog_FocusNextPrevChild_Callback kconfigdialog_focusnextprevchild_callback = nullptr;
    KConfigDialog_TimerEvent_Callback kconfigdialog_timerevent_callback = nullptr;
    KConfigDialog_ChildEvent_Callback kconfigdialog_childevent_callback = nullptr;
    KConfigDialog_CustomEvent_Callback kconfigdialog_customevent_callback = nullptr;
    KConfigDialog_ConnectNotify_Callback kconfigdialog_connectnotify_callback = nullptr;
    KConfigDialog_DisconnectNotify_Callback kconfigdialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KConfigDialog {
        using KConfigDialog::actionEvent;
        using KConfigDialog::changeEvent;
        using KConfigDialog::childEvent;
        using KConfigDialog::closeEvent;
        using KConfigDialog::connectNotify;
        using KConfigDialog::contextMenuEvent;
        using KConfigDialog::customEvent;
        using KConfigDialog::disconnectNotify;
        using KConfigDialog::dragEnterEvent;
        using KConfigDialog::dragLeaveEvent;
        using KConfigDialog::dragMoveEvent;
        using KConfigDialog::dropEvent;
        using KConfigDialog::enterEvent;
        using KConfigDialog::event;
        using KConfigDialog::eventFilter;
        using KConfigDialog::focusInEvent;
        using KConfigDialog::focusNextPrevChild;
        using KConfigDialog::focusOutEvent;
        using KConfigDialog::hasChanged;
        using KConfigDialog::hideEvent;
        using KConfigDialog::initPainter;
        using KConfigDialog::inputMethodEvent;
        using KConfigDialog::isDefault;
        using KConfigDialog::keyPressEvent;
        using KConfigDialog::keyReleaseEvent;
        using KConfigDialog::leaveEvent;
        using KConfigDialog::metric;
        using KConfigDialog::mouseDoubleClickEvent;
        using KConfigDialog::mouseMoveEvent;
        using KConfigDialog::mousePressEvent;
        using KConfigDialog::mouseReleaseEvent;
        using KConfigDialog::moveEvent;
        using KConfigDialog::nativeEvent;
        using KConfigDialog::paintEvent;
        using KConfigDialog::redirected;
        using KConfigDialog::resizeEvent;
        using KConfigDialog::sharedPainter;
        using KConfigDialog::showEvent;
        using KConfigDialog::showHelp;
        using KConfigDialog::tabletEvent;
        using KConfigDialog::timerEvent;
        using KConfigDialog::updateSettings;
        using KConfigDialog::updateWidgets;
        using KConfigDialog::updateWidgetsDefault;
        using KConfigDialog::wheelEvent;
    };

    VirtualKConfigDialog(QWidget* parent, const QString& name, KCoreConfigSkeleton* config) : KConfigDialog(parent, name, config) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kconfigdialog_metaobject_callback) {
            QMetaObject* callback_ret = kconfigdialog_metaobject_callback(this);
            return callback_ret;
        }
        return KConfigDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kconfigdialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kconfigdialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KConfigDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kconfigdialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kconfigdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KConfigDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateSettings() override {
        if (kconfigdialog_updatesettings_callback) {
            kconfigdialog_updatesettings_callback(this);
            return;
        }
        KConfigDialog::updateSettings();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateWidgets() override {
        if (kconfigdialog_updatewidgets_callback) {
            kconfigdialog_updatewidgets_callback(this);
            return;
        }
        KConfigDialog::updateWidgets();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateWidgetsDefault() override {
        if (kconfigdialog_updatewidgetsdefault_callback) {
            kconfigdialog_updatewidgetsdefault_callback(this);
            return;
        }
        KConfigDialog::updateWidgetsDefault();
    }

    // Virtual method for C ABI access and custom callback
    virtual void showHelp() override {
        if (kconfigdialog_showhelp_callback) {
            kconfigdialog_showhelp_callback(this);
            return;
        }
        KConfigDialog::showHelp();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChanged() override {
        if (kconfigdialog_haschanged_callback) {
            bool callback_ret = kconfigdialog_haschanged_callback(this);
            return callback_ret;
        }
        return KConfigDialog::hasChanged();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isDefault() override {
        if (kconfigdialog_isdefault_callback) {
            bool callback_ret = kconfigdialog_isdefault_callback(this);
            return callback_ret;
        }
        return KConfigDialog::isDefault();
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* e) override {
        if (kconfigdialog_showevent_callback) {
            QShowEvent* cbval1 = e;
            kconfigdialog_showevent_callback(this, cbval1);
            return;
        }
        KConfigDialog::showEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kconfigdialog_setvisible_callback) {
            bool cbval1 = visible;
            kconfigdialog_setvisible_callback(this, cbval1);
            return;
        }
        KConfigDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kconfigdialog_sizehint_callback) {
            QSize* callback_ret = kconfigdialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KConfigDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kconfigdialog_minimumsizehint_callback) {
            QSize* callback_ret = kconfigdialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KConfigDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kconfigdialog_open_callback) {
            kconfigdialog_open_callback(this);
            return;
        }
        KConfigDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kconfigdialog_exec_callback) {
            int callback_ret = kconfigdialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KConfigDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kconfigdialog_done_callback) {
            int cbval1 = param1;
            kconfigdialog_done_callback(this, cbval1);
            return;
        }
        KConfigDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kconfigdialog_accept_callback) {
            kconfigdialog_accept_callback(this);
            return;
        }
        KConfigDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kconfigdialog_reject_callback) {
            kconfigdialog_reject_callback(this);
            return;
        }
        KConfigDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kconfigdialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            kconfigdialog_keypressevent_callback(this, cbval1);
            return;
        }
        KConfigDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kconfigdialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            kconfigdialog_closeevent_callback(this, cbval1);
            return;
        }
        KConfigDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kconfigdialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            kconfigdialog_resizeevent_callback(this, cbval1);
            return;
        }
        KConfigDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kconfigdialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            kconfigdialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        KConfigDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kconfigdialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = kconfigdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KConfigDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kconfigdialog_devtype_callback) {
            int callback_ret = kconfigdialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KConfigDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kconfigdialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kconfigdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KConfigDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kconfigdialog_hasheightforwidth_callback) {
            bool callback_ret = kconfigdialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KConfigDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kconfigdialog_paintengine_callback) {
            QPaintEngine* callback_ret = kconfigdialog_paintengine_callback(this);
            return callback_ret;
        }
        return KConfigDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kconfigdialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kconfigdialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return KConfigDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kconfigdialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kconfigdialog_mousepressevent_callback(this, cbval1);
            return;
        }
        KConfigDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kconfigdialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kconfigdialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KConfigDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kconfigdialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kconfigdialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KConfigDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kconfigdialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kconfigdialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        KConfigDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kconfigdialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kconfigdialog_wheelevent_callback(this, cbval1);
            return;
        }
        KConfigDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kconfigdialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kconfigdialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KConfigDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kconfigdialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kconfigdialog_focusinevent_callback(this, cbval1);
            return;
        }
        KConfigDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kconfigdialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kconfigdialog_focusoutevent_callback(this, cbval1);
            return;
        }
        KConfigDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kconfigdialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kconfigdialog_enterevent_callback(this, cbval1);
            return;
        }
        KConfigDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kconfigdialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            kconfigdialog_leaveevent_callback(this, cbval1);
            return;
        }
        KConfigDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kconfigdialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kconfigdialog_paintevent_callback(this, cbval1);
            return;
        }
        KConfigDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kconfigdialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kconfigdialog_moveevent_callback(this, cbval1);
            return;
        }
        KConfigDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kconfigdialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kconfigdialog_tabletevent_callback(this, cbval1);
            return;
        }
        KConfigDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kconfigdialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kconfigdialog_actionevent_callback(this, cbval1);
            return;
        }
        KConfigDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kconfigdialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kconfigdialog_dragenterevent_callback(this, cbval1);
            return;
        }
        KConfigDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kconfigdialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kconfigdialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        KConfigDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kconfigdialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kconfigdialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        KConfigDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kconfigdialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kconfigdialog_dropevent_callback(this, cbval1);
            return;
        }
        KConfigDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kconfigdialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kconfigdialog_hideevent_callback(this, cbval1);
            return;
        }
        KConfigDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kconfigdialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kconfigdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KConfigDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kconfigdialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            kconfigdialog_changeevent_callback(this, cbval1);
            return;
        }
        KConfigDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kconfigdialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kconfigdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KConfigDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kconfigdialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            kconfigdialog_initpainter_callback(this, cbval1);
            return;
        }
        KConfigDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kconfigdialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kconfigdialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KConfigDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kconfigdialog_sharedpainter_callback) {
            QPainter* callback_ret = kconfigdialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return KConfigDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kconfigdialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kconfigdialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        KConfigDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kconfigdialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kconfigdialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KConfigDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kconfigdialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kconfigdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KConfigDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kconfigdialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kconfigdialog_timerevent_callback(this, cbval1);
            return;
        }
        KConfigDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kconfigdialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            kconfigdialog_childevent_callback(this, cbval1);
            return;
        }
        KConfigDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kconfigdialog_customevent_callback) {
            QEvent* cbval1 = event;
            kconfigdialog_customevent_callback(this, cbval1);
            return;
        }
        KConfigDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kconfigdialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kconfigdialog_connectnotify_callback(this, cbval1);
            return;
        }
        KConfigDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kconfigdialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kconfigdialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        KConfigDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void KConfigDialog_SuperUpdateSettings(KConfigDialog* self);
    friend void KConfigDialog_SuperUpdateWidgets(KConfigDialog* self);
    friend void KConfigDialog_SuperUpdateWidgetsDefault(KConfigDialog* self);
    friend void KConfigDialog_SuperShowHelp(KConfigDialog* self);
    friend bool KConfigDialog_SuperHasChanged(KConfigDialog* self);
    friend bool KConfigDialog_SuperIsDefault(KConfigDialog* self);
    friend void KConfigDialog_SuperShowEvent(KConfigDialog* self, QShowEvent* e);
    friend void KConfigDialog_SuperKeyPressEvent(KConfigDialog* self, QKeyEvent* param1);
    friend void KConfigDialog_SuperCloseEvent(KConfigDialog* self, QCloseEvent* param1);
    friend void KConfigDialog_SuperResizeEvent(KConfigDialog* self, QResizeEvent* param1);
    friend void KConfigDialog_SuperContextMenuEvent(KConfigDialog* self, QContextMenuEvent* param1);
    friend bool KConfigDialog_SuperEventFilter(KConfigDialog* self, QObject* param1, QEvent* param2);
    friend bool KConfigDialog_SuperEvent(KConfigDialog* self, QEvent* event);
    friend void KConfigDialog_SuperMousePressEvent(KConfigDialog* self, QMouseEvent* event);
    friend void KConfigDialog_SuperMouseReleaseEvent(KConfigDialog* self, QMouseEvent* event);
    friend void KConfigDialog_SuperMouseDoubleClickEvent(KConfigDialog* self, QMouseEvent* event);
    friend void KConfigDialog_SuperMouseMoveEvent(KConfigDialog* self, QMouseEvent* event);
    friend void KConfigDialog_SuperWheelEvent(KConfigDialog* self, QWheelEvent* event);
    friend void KConfigDialog_SuperKeyReleaseEvent(KConfigDialog* self, QKeyEvent* event);
    friend void KConfigDialog_SuperFocusInEvent(KConfigDialog* self, QFocusEvent* event);
    friend void KConfigDialog_SuperFocusOutEvent(KConfigDialog* self, QFocusEvent* event);
    friend void KConfigDialog_SuperEnterEvent(KConfigDialog* self, QEnterEvent* event);
    friend void KConfigDialog_SuperLeaveEvent(KConfigDialog* self, QEvent* event);
    friend void KConfigDialog_SuperPaintEvent(KConfigDialog* self, QPaintEvent* event);
    friend void KConfigDialog_SuperMoveEvent(KConfigDialog* self, QMoveEvent* event);
    friend void KConfigDialog_SuperTabletEvent(KConfigDialog* self, QTabletEvent* event);
    friend void KConfigDialog_SuperActionEvent(KConfigDialog* self, QActionEvent* event);
    friend void KConfigDialog_SuperDragEnterEvent(KConfigDialog* self, QDragEnterEvent* event);
    friend void KConfigDialog_SuperDragMoveEvent(KConfigDialog* self, QDragMoveEvent* event);
    friend void KConfigDialog_SuperDragLeaveEvent(KConfigDialog* self, QDragLeaveEvent* event);
    friend void KConfigDialog_SuperDropEvent(KConfigDialog* self, QDropEvent* event);
    friend void KConfigDialog_SuperHideEvent(KConfigDialog* self, QHideEvent* event);
    friend bool KConfigDialog_SuperNativeEvent(KConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KConfigDialog_SuperChangeEvent(KConfigDialog* self, QEvent* param1);
    friend int KConfigDialog_SuperMetric(const KConfigDialog* self, int param1);
    friend void KConfigDialog_SuperInitPainter(const KConfigDialog* self, QPainter* painter);
    friend QPaintDevice* KConfigDialog_SuperRedirected(const KConfigDialog* self, QPoint* offset);
    friend QPainter* KConfigDialog_SuperSharedPainter(const KConfigDialog* self);
    friend void KConfigDialog_SuperInputMethodEvent(KConfigDialog* self, QInputMethodEvent* param1);
    friend bool KConfigDialog_SuperFocusNextPrevChild(KConfigDialog* self, bool next);
    friend void KConfigDialog_SuperTimerEvent(KConfigDialog* self, QTimerEvent* event);
    friend void KConfigDialog_SuperChildEvent(KConfigDialog* self, QChildEvent* event);
    friend void KConfigDialog_SuperCustomEvent(KConfigDialog* self, QEvent* event);
    friend void KConfigDialog_SuperConnectNotify(KConfigDialog* self, const QMetaMethod* signal);
    friend void KConfigDialog_SuperDisconnectNotify(KConfigDialog* self, const QMetaMethod* signal);
};

#endif
