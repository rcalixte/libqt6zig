#pragma once
#ifndef EXTRAS_KIO_LIBKPROPERTIESDIALOG_HXX
#define EXTRAS_KIO_LIBKPROPERTIESDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPropertiesDialog
class VirtualKPropertiesDialog final : public KPropertiesDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using KPropertiesDialog_MetaObject_Callback = QMetaObject* (*)(const KPropertiesDialog*);
    using KPropertiesDialog_Metacast_Callback = void* (*)(KPropertiesDialog*, const char*);
    using KPropertiesDialog_Metacall_Callback = int (*)(KPropertiesDialog*, int, int, void**);
    using KPropertiesDialog_Accept_Callback = void (*)(KPropertiesDialog*);
    using KPropertiesDialog_Reject_Callback = void (*)(KPropertiesDialog*);
    using KPropertiesDialog_SetVisible_Callback = void (*)(KPropertiesDialog*, bool);
    using KPropertiesDialog_SizeHint_Callback = QSize* (*)(const KPropertiesDialog*);
    using KPropertiesDialog_MinimumSizeHint_Callback = QSize* (*)(const KPropertiesDialog*);
    using KPropertiesDialog_Open_Callback = void (*)(KPropertiesDialog*);
    using KPropertiesDialog_Exec_Callback = int (*)(KPropertiesDialog*);
    using KPropertiesDialog_Done_Callback = void (*)(KPropertiesDialog*, int);
    using KPropertiesDialog_KeyPressEvent_Callback = void (*)(KPropertiesDialog*, QKeyEvent*);
    using KPropertiesDialog_CloseEvent_Callback = void (*)(KPropertiesDialog*, QCloseEvent*);
    using KPropertiesDialog_ShowEvent_Callback = void (*)(KPropertiesDialog*, QShowEvent*);
    using KPropertiesDialog_ResizeEvent_Callback = void (*)(KPropertiesDialog*, QResizeEvent*);
    using KPropertiesDialog_ContextMenuEvent_Callback = void (*)(KPropertiesDialog*, QContextMenuEvent*);
    using KPropertiesDialog_EventFilter_Callback = bool (*)(KPropertiesDialog*, QObject*, QEvent*);
    using KPropertiesDialog_DevType_Callback = int (*)(const KPropertiesDialog*);
    using KPropertiesDialog_HeightForWidth_Callback = int (*)(const KPropertiesDialog*, int);
    using KPropertiesDialog_HasHeightForWidth_Callback = bool (*)(const KPropertiesDialog*);
    using KPropertiesDialog_PaintEngine_Callback = QPaintEngine* (*)(const KPropertiesDialog*);
    using KPropertiesDialog_Event_Callback = bool (*)(KPropertiesDialog*, QEvent*);
    using KPropertiesDialog_MousePressEvent_Callback = void (*)(KPropertiesDialog*, QMouseEvent*);
    using KPropertiesDialog_MouseReleaseEvent_Callback = void (*)(KPropertiesDialog*, QMouseEvent*);
    using KPropertiesDialog_MouseDoubleClickEvent_Callback = void (*)(KPropertiesDialog*, QMouseEvent*);
    using KPropertiesDialog_MouseMoveEvent_Callback = void (*)(KPropertiesDialog*, QMouseEvent*);
    using KPropertiesDialog_WheelEvent_Callback = void (*)(KPropertiesDialog*, QWheelEvent*);
    using KPropertiesDialog_KeyReleaseEvent_Callback = void (*)(KPropertiesDialog*, QKeyEvent*);
    using KPropertiesDialog_FocusInEvent_Callback = void (*)(KPropertiesDialog*, QFocusEvent*);
    using KPropertiesDialog_FocusOutEvent_Callback = void (*)(KPropertiesDialog*, QFocusEvent*);
    using KPropertiesDialog_EnterEvent_Callback = void (*)(KPropertiesDialog*, QEnterEvent*);
    using KPropertiesDialog_LeaveEvent_Callback = void (*)(KPropertiesDialog*, QEvent*);
    using KPropertiesDialog_PaintEvent_Callback = void (*)(KPropertiesDialog*, QPaintEvent*);
    using KPropertiesDialog_MoveEvent_Callback = void (*)(KPropertiesDialog*, QMoveEvent*);
    using KPropertiesDialog_TabletEvent_Callback = void (*)(KPropertiesDialog*, QTabletEvent*);
    using KPropertiesDialog_ActionEvent_Callback = void (*)(KPropertiesDialog*, QActionEvent*);
    using KPropertiesDialog_DragEnterEvent_Callback = void (*)(KPropertiesDialog*, QDragEnterEvent*);
    using KPropertiesDialog_DragMoveEvent_Callback = void (*)(KPropertiesDialog*, QDragMoveEvent*);
    using KPropertiesDialog_DragLeaveEvent_Callback = void (*)(KPropertiesDialog*, QDragLeaveEvent*);
    using KPropertiesDialog_DropEvent_Callback = void (*)(KPropertiesDialog*, QDropEvent*);
    using KPropertiesDialog_HideEvent_Callback = void (*)(KPropertiesDialog*, QHideEvent*);
    using KPropertiesDialog_NativeEvent_Callback = bool (*)(KPropertiesDialog*, libqt_string, void*, intptr_t*);
    using KPropertiesDialog_ChangeEvent_Callback = void (*)(KPropertiesDialog*, QEvent*);
    using KPropertiesDialog_Metric_Callback = int (*)(const KPropertiesDialog*, int);
    using KPropertiesDialog_InitPainter_Callback = void (*)(const KPropertiesDialog*, QPainter*);
    using KPropertiesDialog_Redirected_Callback = QPaintDevice* (*)(const KPropertiesDialog*, QPoint*);
    using KPropertiesDialog_SharedPainter_Callback = QPainter* (*)(const KPropertiesDialog*);
    using KPropertiesDialog_InputMethodEvent_Callback = void (*)(KPropertiesDialog*, QInputMethodEvent*);
    using KPropertiesDialog_InputMethodQuery_Callback = QVariant* (*)(const KPropertiesDialog*, int);
    using KPropertiesDialog_FocusNextPrevChild_Callback = bool (*)(KPropertiesDialog*, bool);
    using KPropertiesDialog_TimerEvent_Callback = void (*)(KPropertiesDialog*, QTimerEvent*);
    using KPropertiesDialog_ChildEvent_Callback = void (*)(KPropertiesDialog*, QChildEvent*);
    using KPropertiesDialog_CustomEvent_Callback = void (*)(KPropertiesDialog*, QEvent*);
    using KPropertiesDialog_ConnectNotify_Callback = void (*)(KPropertiesDialog*, QMetaMethod*);
    using KPropertiesDialog_DisconnectNotify_Callback = void (*)(KPropertiesDialog*, QMetaMethod*);
    using KPropertiesDialog::adjustPosition;
    using KPropertiesDialog::buttonBox;
    using KPropertiesDialog::create;
    using KPropertiesDialog::destroy;
    using KPropertiesDialog::focusNextChild;
    using KPropertiesDialog::focusPreviousChild;
    using KPropertiesDialog::getDecodedMetricF;
    using KPropertiesDialog::isSignalConnected;
    using KPropertiesDialog::pageWidget;
    using KPropertiesDialog::receivers;
    using KPropertiesDialog::sender;
    using KPropertiesDialog::senderSignalIndex;
    using KPropertiesDialog::setButtonBox;
    using KPropertiesDialog::setPageWidget;
    using KPropertiesDialog::updateMicroFocus;

    // Instance callback storage
    KPropertiesDialog_MetaObject_Callback kpropertiesdialog_metaobject_callback = nullptr;
    KPropertiesDialog_Metacast_Callback kpropertiesdialog_metacast_callback = nullptr;
    KPropertiesDialog_Metacall_Callback kpropertiesdialog_metacall_callback = nullptr;
    KPropertiesDialog_Accept_Callback kpropertiesdialog_accept_callback = nullptr;
    KPropertiesDialog_Reject_Callback kpropertiesdialog_reject_callback = nullptr;
    KPropertiesDialog_SetVisible_Callback kpropertiesdialog_setvisible_callback = nullptr;
    KPropertiesDialog_SizeHint_Callback kpropertiesdialog_sizehint_callback = nullptr;
    KPropertiesDialog_MinimumSizeHint_Callback kpropertiesdialog_minimumsizehint_callback = nullptr;
    KPropertiesDialog_Open_Callback kpropertiesdialog_open_callback = nullptr;
    KPropertiesDialog_Exec_Callback kpropertiesdialog_exec_callback = nullptr;
    KPropertiesDialog_Done_Callback kpropertiesdialog_done_callback = nullptr;
    KPropertiesDialog_KeyPressEvent_Callback kpropertiesdialog_keypressevent_callback = nullptr;
    KPropertiesDialog_CloseEvent_Callback kpropertiesdialog_closeevent_callback = nullptr;
    KPropertiesDialog_ShowEvent_Callback kpropertiesdialog_showevent_callback = nullptr;
    KPropertiesDialog_ResizeEvent_Callback kpropertiesdialog_resizeevent_callback = nullptr;
    KPropertiesDialog_ContextMenuEvent_Callback kpropertiesdialog_contextmenuevent_callback = nullptr;
    KPropertiesDialog_EventFilter_Callback kpropertiesdialog_eventfilter_callback = nullptr;
    KPropertiesDialog_DevType_Callback kpropertiesdialog_devtype_callback = nullptr;
    KPropertiesDialog_HeightForWidth_Callback kpropertiesdialog_heightforwidth_callback = nullptr;
    KPropertiesDialog_HasHeightForWidth_Callback kpropertiesdialog_hasheightforwidth_callback = nullptr;
    KPropertiesDialog_PaintEngine_Callback kpropertiesdialog_paintengine_callback = nullptr;
    KPropertiesDialog_Event_Callback kpropertiesdialog_event_callback = nullptr;
    KPropertiesDialog_MousePressEvent_Callback kpropertiesdialog_mousepressevent_callback = nullptr;
    KPropertiesDialog_MouseReleaseEvent_Callback kpropertiesdialog_mousereleaseevent_callback = nullptr;
    KPropertiesDialog_MouseDoubleClickEvent_Callback kpropertiesdialog_mousedoubleclickevent_callback = nullptr;
    KPropertiesDialog_MouseMoveEvent_Callback kpropertiesdialog_mousemoveevent_callback = nullptr;
    KPropertiesDialog_WheelEvent_Callback kpropertiesdialog_wheelevent_callback = nullptr;
    KPropertiesDialog_KeyReleaseEvent_Callback kpropertiesdialog_keyreleaseevent_callback = nullptr;
    KPropertiesDialog_FocusInEvent_Callback kpropertiesdialog_focusinevent_callback = nullptr;
    KPropertiesDialog_FocusOutEvent_Callback kpropertiesdialog_focusoutevent_callback = nullptr;
    KPropertiesDialog_EnterEvent_Callback kpropertiesdialog_enterevent_callback = nullptr;
    KPropertiesDialog_LeaveEvent_Callback kpropertiesdialog_leaveevent_callback = nullptr;
    KPropertiesDialog_PaintEvent_Callback kpropertiesdialog_paintevent_callback = nullptr;
    KPropertiesDialog_MoveEvent_Callback kpropertiesdialog_moveevent_callback = nullptr;
    KPropertiesDialog_TabletEvent_Callback kpropertiesdialog_tabletevent_callback = nullptr;
    KPropertiesDialog_ActionEvent_Callback kpropertiesdialog_actionevent_callback = nullptr;
    KPropertiesDialog_DragEnterEvent_Callback kpropertiesdialog_dragenterevent_callback = nullptr;
    KPropertiesDialog_DragMoveEvent_Callback kpropertiesdialog_dragmoveevent_callback = nullptr;
    KPropertiesDialog_DragLeaveEvent_Callback kpropertiesdialog_dragleaveevent_callback = nullptr;
    KPropertiesDialog_DropEvent_Callback kpropertiesdialog_dropevent_callback = nullptr;
    KPropertiesDialog_HideEvent_Callback kpropertiesdialog_hideevent_callback = nullptr;
    KPropertiesDialog_NativeEvent_Callback kpropertiesdialog_nativeevent_callback = nullptr;
    KPropertiesDialog_ChangeEvent_Callback kpropertiesdialog_changeevent_callback = nullptr;
    KPropertiesDialog_Metric_Callback kpropertiesdialog_metric_callback = nullptr;
    KPropertiesDialog_InitPainter_Callback kpropertiesdialog_initpainter_callback = nullptr;
    KPropertiesDialog_Redirected_Callback kpropertiesdialog_redirected_callback = nullptr;
    KPropertiesDialog_SharedPainter_Callback kpropertiesdialog_sharedpainter_callback = nullptr;
    KPropertiesDialog_InputMethodEvent_Callback kpropertiesdialog_inputmethodevent_callback = nullptr;
    KPropertiesDialog_InputMethodQuery_Callback kpropertiesdialog_inputmethodquery_callback = nullptr;
    KPropertiesDialog_FocusNextPrevChild_Callback kpropertiesdialog_focusnextprevchild_callback = nullptr;
    KPropertiesDialog_TimerEvent_Callback kpropertiesdialog_timerevent_callback = nullptr;
    KPropertiesDialog_ChildEvent_Callback kpropertiesdialog_childevent_callback = nullptr;
    KPropertiesDialog_CustomEvent_Callback kpropertiesdialog_customevent_callback = nullptr;
    KPropertiesDialog_ConnectNotify_Callback kpropertiesdialog_connectnotify_callback = nullptr;
    KPropertiesDialog_DisconnectNotify_Callback kpropertiesdialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KPropertiesDialog {
        using KPropertiesDialog::actionEvent;
        using KPropertiesDialog::changeEvent;
        using KPropertiesDialog::childEvent;
        using KPropertiesDialog::closeEvent;
        using KPropertiesDialog::connectNotify;
        using KPropertiesDialog::contextMenuEvent;
        using KPropertiesDialog::customEvent;
        using KPropertiesDialog::disconnectNotify;
        using KPropertiesDialog::dragEnterEvent;
        using KPropertiesDialog::dragLeaveEvent;
        using KPropertiesDialog::dragMoveEvent;
        using KPropertiesDialog::dropEvent;
        using KPropertiesDialog::enterEvent;
        using KPropertiesDialog::event;
        using KPropertiesDialog::eventFilter;
        using KPropertiesDialog::focusInEvent;
        using KPropertiesDialog::focusNextPrevChild;
        using KPropertiesDialog::focusOutEvent;
        using KPropertiesDialog::hideEvent;
        using KPropertiesDialog::initPainter;
        using KPropertiesDialog::inputMethodEvent;
        using KPropertiesDialog::keyPressEvent;
        using KPropertiesDialog::keyReleaseEvent;
        using KPropertiesDialog::leaveEvent;
        using KPropertiesDialog::metric;
        using KPropertiesDialog::mouseDoubleClickEvent;
        using KPropertiesDialog::mouseMoveEvent;
        using KPropertiesDialog::mousePressEvent;
        using KPropertiesDialog::mouseReleaseEvent;
        using KPropertiesDialog::moveEvent;
        using KPropertiesDialog::nativeEvent;
        using KPropertiesDialog::paintEvent;
        using KPropertiesDialog::redirected;
        using KPropertiesDialog::resizeEvent;
        using KPropertiesDialog::sharedPainter;
        using KPropertiesDialog::showEvent;
        using KPropertiesDialog::tabletEvent;
        using KPropertiesDialog::timerEvent;
        using KPropertiesDialog::wheelEvent;
    };

    VirtualKPropertiesDialog(const KFileItem& item) : KPropertiesDialog(item) {};
    VirtualKPropertiesDialog(const KFileItemList& _items) : KPropertiesDialog(_items) {};
    VirtualKPropertiesDialog(const QUrl& url) : KPropertiesDialog(url) {};
    VirtualKPropertiesDialog(const QList<QUrl>& urls) : KPropertiesDialog(urls) {};
    VirtualKPropertiesDialog(const QUrl& _tempUrl, const QUrl& _currentDir, const QString& _defaultName) : KPropertiesDialog(_tempUrl, _currentDir, _defaultName) {};
    VirtualKPropertiesDialog(const QString& title) : KPropertiesDialog(title) {};
    VirtualKPropertiesDialog(const KFileItem& item, QWidget* parent) : KPropertiesDialog(item, parent) {};
    VirtualKPropertiesDialog(const KFileItemList& _items, QWidget* parent) : KPropertiesDialog(_items, parent) {};
    VirtualKPropertiesDialog(const QUrl& url, QWidget* parent) : KPropertiesDialog(url, parent) {};
    VirtualKPropertiesDialog(const QList<QUrl>& urls, QWidget* parent) : KPropertiesDialog(urls, parent) {};
    VirtualKPropertiesDialog(const QUrl& _tempUrl, const QUrl& _currentDir, const QString& _defaultName, QWidget* parent) : KPropertiesDialog(_tempUrl, _currentDir, _defaultName, parent) {};
    VirtualKPropertiesDialog(const QString& title, QWidget* parent) : KPropertiesDialog(title, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kpropertiesdialog_metaobject_callback) {
            QMetaObject* callback_ret = kpropertiesdialog_metaobject_callback(this);
            return callback_ret;
        }
        return KPropertiesDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kpropertiesdialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kpropertiesdialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KPropertiesDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpropertiesdialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kpropertiesdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KPropertiesDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kpropertiesdialog_accept_callback) {
            kpropertiesdialog_accept_callback(this);
            return;
        }
        KPropertiesDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kpropertiesdialog_reject_callback) {
            kpropertiesdialog_reject_callback(this);
            return;
        }
        KPropertiesDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kpropertiesdialog_setvisible_callback) {
            bool cbval1 = visible;
            kpropertiesdialog_setvisible_callback(this, cbval1);
            return;
        }
        KPropertiesDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kpropertiesdialog_sizehint_callback) {
            QSize* callback_ret = kpropertiesdialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPropertiesDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kpropertiesdialog_minimumsizehint_callback) {
            QSize* callback_ret = kpropertiesdialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPropertiesDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kpropertiesdialog_open_callback) {
            kpropertiesdialog_open_callback(this);
            return;
        }
        KPropertiesDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kpropertiesdialog_exec_callback) {
            int callback_ret = kpropertiesdialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KPropertiesDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kpropertiesdialog_done_callback) {
            int cbval1 = param1;
            kpropertiesdialog_done_callback(this, cbval1);
            return;
        }
        KPropertiesDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kpropertiesdialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            kpropertiesdialog_keypressevent_callback(this, cbval1);
            return;
        }
        KPropertiesDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kpropertiesdialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            kpropertiesdialog_closeevent_callback(this, cbval1);
            return;
        }
        KPropertiesDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kpropertiesdialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            kpropertiesdialog_showevent_callback(this, cbval1);
            return;
        }
        KPropertiesDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kpropertiesdialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            kpropertiesdialog_resizeevent_callback(this, cbval1);
            return;
        }
        KPropertiesDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kpropertiesdialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            kpropertiesdialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        KPropertiesDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kpropertiesdialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = kpropertiesdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KPropertiesDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kpropertiesdialog_devtype_callback) {
            int callback_ret = kpropertiesdialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KPropertiesDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kpropertiesdialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kpropertiesdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPropertiesDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kpropertiesdialog_hasheightforwidth_callback) {
            bool callback_ret = kpropertiesdialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KPropertiesDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kpropertiesdialog_paintengine_callback) {
            QPaintEngine* callback_ret = kpropertiesdialog_paintengine_callback(this);
            return callback_ret;
        }
        return KPropertiesDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpropertiesdialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kpropertiesdialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return KPropertiesDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kpropertiesdialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kpropertiesdialog_mousepressevent_callback(this, cbval1);
            return;
        }
        KPropertiesDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kpropertiesdialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kpropertiesdialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KPropertiesDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kpropertiesdialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kpropertiesdialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KPropertiesDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kpropertiesdialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kpropertiesdialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        KPropertiesDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kpropertiesdialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kpropertiesdialog_wheelevent_callback(this, cbval1);
            return;
        }
        KPropertiesDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kpropertiesdialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kpropertiesdialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KPropertiesDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kpropertiesdialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kpropertiesdialog_focusinevent_callback(this, cbval1);
            return;
        }
        KPropertiesDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kpropertiesdialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kpropertiesdialog_focusoutevent_callback(this, cbval1);
            return;
        }
        KPropertiesDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kpropertiesdialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kpropertiesdialog_enterevent_callback(this, cbval1);
            return;
        }
        KPropertiesDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kpropertiesdialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            kpropertiesdialog_leaveevent_callback(this, cbval1);
            return;
        }
        KPropertiesDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kpropertiesdialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kpropertiesdialog_paintevent_callback(this, cbval1);
            return;
        }
        KPropertiesDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kpropertiesdialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kpropertiesdialog_moveevent_callback(this, cbval1);
            return;
        }
        KPropertiesDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kpropertiesdialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kpropertiesdialog_tabletevent_callback(this, cbval1);
            return;
        }
        KPropertiesDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kpropertiesdialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kpropertiesdialog_actionevent_callback(this, cbval1);
            return;
        }
        KPropertiesDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kpropertiesdialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kpropertiesdialog_dragenterevent_callback(this, cbval1);
            return;
        }
        KPropertiesDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kpropertiesdialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kpropertiesdialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        KPropertiesDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kpropertiesdialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kpropertiesdialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        KPropertiesDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kpropertiesdialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kpropertiesdialog_dropevent_callback(this, cbval1);
            return;
        }
        KPropertiesDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kpropertiesdialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kpropertiesdialog_hideevent_callback(this, cbval1);
            return;
        }
        KPropertiesDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kpropertiesdialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kpropertiesdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KPropertiesDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kpropertiesdialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            kpropertiesdialog_changeevent_callback(this, cbval1);
            return;
        }
        KPropertiesDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kpropertiesdialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kpropertiesdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPropertiesDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kpropertiesdialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            kpropertiesdialog_initpainter_callback(this, cbval1);
            return;
        }
        KPropertiesDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kpropertiesdialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kpropertiesdialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KPropertiesDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kpropertiesdialog_sharedpainter_callback) {
            QPainter* callback_ret = kpropertiesdialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return KPropertiesDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kpropertiesdialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kpropertiesdialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        KPropertiesDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kpropertiesdialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kpropertiesdialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPropertiesDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kpropertiesdialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kpropertiesdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KPropertiesDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpropertiesdialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kpropertiesdialog_timerevent_callback(this, cbval1);
            return;
        }
        KPropertiesDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpropertiesdialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            kpropertiesdialog_childevent_callback(this, cbval1);
            return;
        }
        KPropertiesDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpropertiesdialog_customevent_callback) {
            QEvent* cbval1 = event;
            kpropertiesdialog_customevent_callback(this, cbval1);
            return;
        }
        KPropertiesDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpropertiesdialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpropertiesdialog_connectnotify_callback(this, cbval1);
            return;
        }
        KPropertiesDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpropertiesdialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpropertiesdialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        KPropertiesDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void KPropertiesDialog_SuperKeyPressEvent(KPropertiesDialog* self, QKeyEvent* param1);
    friend void KPropertiesDialog_SuperCloseEvent(KPropertiesDialog* self, QCloseEvent* param1);
    friend void KPropertiesDialog_SuperShowEvent(KPropertiesDialog* self, QShowEvent* param1);
    friend void KPropertiesDialog_SuperResizeEvent(KPropertiesDialog* self, QResizeEvent* param1);
    friend void KPropertiesDialog_SuperContextMenuEvent(KPropertiesDialog* self, QContextMenuEvent* param1);
    friend bool KPropertiesDialog_SuperEventFilter(KPropertiesDialog* self, QObject* param1, QEvent* param2);
    friend bool KPropertiesDialog_SuperEvent(KPropertiesDialog* self, QEvent* event);
    friend void KPropertiesDialog_SuperMousePressEvent(KPropertiesDialog* self, QMouseEvent* event);
    friend void KPropertiesDialog_SuperMouseReleaseEvent(KPropertiesDialog* self, QMouseEvent* event);
    friend void KPropertiesDialog_SuperMouseDoubleClickEvent(KPropertiesDialog* self, QMouseEvent* event);
    friend void KPropertiesDialog_SuperMouseMoveEvent(KPropertiesDialog* self, QMouseEvent* event);
    friend void KPropertiesDialog_SuperWheelEvent(KPropertiesDialog* self, QWheelEvent* event);
    friend void KPropertiesDialog_SuperKeyReleaseEvent(KPropertiesDialog* self, QKeyEvent* event);
    friend void KPropertiesDialog_SuperFocusInEvent(KPropertiesDialog* self, QFocusEvent* event);
    friend void KPropertiesDialog_SuperFocusOutEvent(KPropertiesDialog* self, QFocusEvent* event);
    friend void KPropertiesDialog_SuperEnterEvent(KPropertiesDialog* self, QEnterEvent* event);
    friend void KPropertiesDialog_SuperLeaveEvent(KPropertiesDialog* self, QEvent* event);
    friend void KPropertiesDialog_SuperPaintEvent(KPropertiesDialog* self, QPaintEvent* event);
    friend void KPropertiesDialog_SuperMoveEvent(KPropertiesDialog* self, QMoveEvent* event);
    friend void KPropertiesDialog_SuperTabletEvent(KPropertiesDialog* self, QTabletEvent* event);
    friend void KPropertiesDialog_SuperActionEvent(KPropertiesDialog* self, QActionEvent* event);
    friend void KPropertiesDialog_SuperDragEnterEvent(KPropertiesDialog* self, QDragEnterEvent* event);
    friend void KPropertiesDialog_SuperDragMoveEvent(KPropertiesDialog* self, QDragMoveEvent* event);
    friend void KPropertiesDialog_SuperDragLeaveEvent(KPropertiesDialog* self, QDragLeaveEvent* event);
    friend void KPropertiesDialog_SuperDropEvent(KPropertiesDialog* self, QDropEvent* event);
    friend void KPropertiesDialog_SuperHideEvent(KPropertiesDialog* self, QHideEvent* event);
    friend bool KPropertiesDialog_SuperNativeEvent(KPropertiesDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KPropertiesDialog_SuperChangeEvent(KPropertiesDialog* self, QEvent* param1);
    friend int KPropertiesDialog_SuperMetric(const KPropertiesDialog* self, int param1);
    friend void KPropertiesDialog_SuperInitPainter(const KPropertiesDialog* self, QPainter* painter);
    friend QPaintDevice* KPropertiesDialog_SuperRedirected(const KPropertiesDialog* self, QPoint* offset);
    friend QPainter* KPropertiesDialog_SuperSharedPainter(const KPropertiesDialog* self);
    friend void KPropertiesDialog_SuperInputMethodEvent(KPropertiesDialog* self, QInputMethodEvent* param1);
    friend bool KPropertiesDialog_SuperFocusNextPrevChild(KPropertiesDialog* self, bool next);
    friend void KPropertiesDialog_SuperTimerEvent(KPropertiesDialog* self, QTimerEvent* event);
    friend void KPropertiesDialog_SuperChildEvent(KPropertiesDialog* self, QChildEvent* event);
    friend void KPropertiesDialog_SuperCustomEvent(KPropertiesDialog* self, QEvent* event);
    friend void KPropertiesDialog_SuperConnectNotify(KPropertiesDialog* self, const QMetaMethod* signal);
    friend void KPropertiesDialog_SuperDisconnectNotify(KPropertiesDialog* self, const QMetaMethod* signal);
};

#endif
