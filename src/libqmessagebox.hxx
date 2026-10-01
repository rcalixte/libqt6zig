#pragma once
#ifndef LIBQMESSAGEBOX_HXX
#define LIBQMESSAGEBOX_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QMessageBox
class VirtualQMessageBox final : public QMessageBox {
  public:
    // Virtual class public types (including callbacks and access types)
    using QMessageBox_MetaObject_Callback = QMetaObject* (*)(const QMessageBox*);
    using QMessageBox_Metacast_Callback = void* (*)(QMessageBox*, const char*);
    using QMessageBox_Metacall_Callback = int (*)(QMessageBox*, int, int, void**);
    using QMessageBox_Event_Callback = bool (*)(QMessageBox*, QEvent*);
    using QMessageBox_ResizeEvent_Callback = void (*)(QMessageBox*, QResizeEvent*);
    using QMessageBox_ShowEvent_Callback = void (*)(QMessageBox*, QShowEvent*);
    using QMessageBox_CloseEvent_Callback = void (*)(QMessageBox*, QCloseEvent*);
    using QMessageBox_KeyPressEvent_Callback = void (*)(QMessageBox*, QKeyEvent*);
    using QMessageBox_ChangeEvent_Callback = void (*)(QMessageBox*, QEvent*);
    using QMessageBox_SetVisible_Callback = void (*)(QMessageBox*, bool);
    using QMessageBox_SizeHint_Callback = QSize* (*)(const QMessageBox*);
    using QMessageBox_MinimumSizeHint_Callback = QSize* (*)(const QMessageBox*);
    using QMessageBox_Open_Callback = void (*)(QMessageBox*);
    using QMessageBox_Exec_Callback = int (*)(QMessageBox*);
    using QMessageBox_Done_Callback = void (*)(QMessageBox*, int);
    using QMessageBox_Accept_Callback = void (*)(QMessageBox*);
    using QMessageBox_Reject_Callback = void (*)(QMessageBox*);
    using QMessageBox_ContextMenuEvent_Callback = void (*)(QMessageBox*, QContextMenuEvent*);
    using QMessageBox_EventFilter_Callback = bool (*)(QMessageBox*, QObject*, QEvent*);
    using QMessageBox_DevType_Callback = int (*)(const QMessageBox*);
    using QMessageBox_HeightForWidth_Callback = int (*)(const QMessageBox*, int);
    using QMessageBox_HasHeightForWidth_Callback = bool (*)(const QMessageBox*);
    using QMessageBox_PaintEngine_Callback = QPaintEngine* (*)(const QMessageBox*);
    using QMessageBox_MousePressEvent_Callback = void (*)(QMessageBox*, QMouseEvent*);
    using QMessageBox_MouseReleaseEvent_Callback = void (*)(QMessageBox*, QMouseEvent*);
    using QMessageBox_MouseDoubleClickEvent_Callback = void (*)(QMessageBox*, QMouseEvent*);
    using QMessageBox_MouseMoveEvent_Callback = void (*)(QMessageBox*, QMouseEvent*);
    using QMessageBox_WheelEvent_Callback = void (*)(QMessageBox*, QWheelEvent*);
    using QMessageBox_KeyReleaseEvent_Callback = void (*)(QMessageBox*, QKeyEvent*);
    using QMessageBox_FocusInEvent_Callback = void (*)(QMessageBox*, QFocusEvent*);
    using QMessageBox_FocusOutEvent_Callback = void (*)(QMessageBox*, QFocusEvent*);
    using QMessageBox_EnterEvent_Callback = void (*)(QMessageBox*, QEnterEvent*);
    using QMessageBox_LeaveEvent_Callback = void (*)(QMessageBox*, QEvent*);
    using QMessageBox_PaintEvent_Callback = void (*)(QMessageBox*, QPaintEvent*);
    using QMessageBox_MoveEvent_Callback = void (*)(QMessageBox*, QMoveEvent*);
    using QMessageBox_TabletEvent_Callback = void (*)(QMessageBox*, QTabletEvent*);
    using QMessageBox_ActionEvent_Callback = void (*)(QMessageBox*, QActionEvent*);
    using QMessageBox_DragEnterEvent_Callback = void (*)(QMessageBox*, QDragEnterEvent*);
    using QMessageBox_DragMoveEvent_Callback = void (*)(QMessageBox*, QDragMoveEvent*);
    using QMessageBox_DragLeaveEvent_Callback = void (*)(QMessageBox*, QDragLeaveEvent*);
    using QMessageBox_DropEvent_Callback = void (*)(QMessageBox*, QDropEvent*);
    using QMessageBox_HideEvent_Callback = void (*)(QMessageBox*, QHideEvent*);
    using QMessageBox_NativeEvent_Callback = bool (*)(QMessageBox*, libqt_string, void*, intptr_t*);
    using QMessageBox_Metric_Callback = int (*)(const QMessageBox*, int);
    using QMessageBox_InitPainter_Callback = void (*)(const QMessageBox*, QPainter*);
    using QMessageBox_Redirected_Callback = QPaintDevice* (*)(const QMessageBox*, QPoint*);
    using QMessageBox_SharedPainter_Callback = QPainter* (*)(const QMessageBox*);
    using QMessageBox_InputMethodEvent_Callback = void (*)(QMessageBox*, QInputMethodEvent*);
    using QMessageBox_InputMethodQuery_Callback = QVariant* (*)(const QMessageBox*, int);
    using QMessageBox_FocusNextPrevChild_Callback = bool (*)(QMessageBox*, bool);
    using QMessageBox_TimerEvent_Callback = void (*)(QMessageBox*, QTimerEvent*);
    using QMessageBox_ChildEvent_Callback = void (*)(QMessageBox*, QChildEvent*);
    using QMessageBox_CustomEvent_Callback = void (*)(QMessageBox*, QEvent*);
    using QMessageBox_ConnectNotify_Callback = void (*)(QMessageBox*, QMetaMethod*);
    using QMessageBox_DisconnectNotify_Callback = void (*)(QMessageBox*, QMetaMethod*);
    using QMessageBox::adjustPosition;
    using QMessageBox::create;
    using QMessageBox::destroy;
    using QMessageBox::focusNextChild;
    using QMessageBox::focusPreviousChild;
    using QMessageBox::getDecodedMetricF;
    using QMessageBox::isSignalConnected;
    using QMessageBox::receivers;
    using QMessageBox::sender;
    using QMessageBox::senderSignalIndex;
    using QMessageBox::updateMicroFocus;

    // Instance callback storage
    QMessageBox_MetaObject_Callback qmessagebox_metaobject_callback = nullptr;
    QMessageBox_Metacast_Callback qmessagebox_metacast_callback = nullptr;
    QMessageBox_Metacall_Callback qmessagebox_metacall_callback = nullptr;
    QMessageBox_Event_Callback qmessagebox_event_callback = nullptr;
    QMessageBox_ResizeEvent_Callback qmessagebox_resizeevent_callback = nullptr;
    QMessageBox_ShowEvent_Callback qmessagebox_showevent_callback = nullptr;
    QMessageBox_CloseEvent_Callback qmessagebox_closeevent_callback = nullptr;
    QMessageBox_KeyPressEvent_Callback qmessagebox_keypressevent_callback = nullptr;
    QMessageBox_ChangeEvent_Callback qmessagebox_changeevent_callback = nullptr;
    QMessageBox_SetVisible_Callback qmessagebox_setvisible_callback = nullptr;
    QMessageBox_SizeHint_Callback qmessagebox_sizehint_callback = nullptr;
    QMessageBox_MinimumSizeHint_Callback qmessagebox_minimumsizehint_callback = nullptr;
    QMessageBox_Open_Callback qmessagebox_open_callback = nullptr;
    QMessageBox_Exec_Callback qmessagebox_exec_callback = nullptr;
    QMessageBox_Done_Callback qmessagebox_done_callback = nullptr;
    QMessageBox_Accept_Callback qmessagebox_accept_callback = nullptr;
    QMessageBox_Reject_Callback qmessagebox_reject_callback = nullptr;
    QMessageBox_ContextMenuEvent_Callback qmessagebox_contextmenuevent_callback = nullptr;
    QMessageBox_EventFilter_Callback qmessagebox_eventfilter_callback = nullptr;
    QMessageBox_DevType_Callback qmessagebox_devtype_callback = nullptr;
    QMessageBox_HeightForWidth_Callback qmessagebox_heightforwidth_callback = nullptr;
    QMessageBox_HasHeightForWidth_Callback qmessagebox_hasheightforwidth_callback = nullptr;
    QMessageBox_PaintEngine_Callback qmessagebox_paintengine_callback = nullptr;
    QMessageBox_MousePressEvent_Callback qmessagebox_mousepressevent_callback = nullptr;
    QMessageBox_MouseReleaseEvent_Callback qmessagebox_mousereleaseevent_callback = nullptr;
    QMessageBox_MouseDoubleClickEvent_Callback qmessagebox_mousedoubleclickevent_callback = nullptr;
    QMessageBox_MouseMoveEvent_Callback qmessagebox_mousemoveevent_callback = nullptr;
    QMessageBox_WheelEvent_Callback qmessagebox_wheelevent_callback = nullptr;
    QMessageBox_KeyReleaseEvent_Callback qmessagebox_keyreleaseevent_callback = nullptr;
    QMessageBox_FocusInEvent_Callback qmessagebox_focusinevent_callback = nullptr;
    QMessageBox_FocusOutEvent_Callback qmessagebox_focusoutevent_callback = nullptr;
    QMessageBox_EnterEvent_Callback qmessagebox_enterevent_callback = nullptr;
    QMessageBox_LeaveEvent_Callback qmessagebox_leaveevent_callback = nullptr;
    QMessageBox_PaintEvent_Callback qmessagebox_paintevent_callback = nullptr;
    QMessageBox_MoveEvent_Callback qmessagebox_moveevent_callback = nullptr;
    QMessageBox_TabletEvent_Callback qmessagebox_tabletevent_callback = nullptr;
    QMessageBox_ActionEvent_Callback qmessagebox_actionevent_callback = nullptr;
    QMessageBox_DragEnterEvent_Callback qmessagebox_dragenterevent_callback = nullptr;
    QMessageBox_DragMoveEvent_Callback qmessagebox_dragmoveevent_callback = nullptr;
    QMessageBox_DragLeaveEvent_Callback qmessagebox_dragleaveevent_callback = nullptr;
    QMessageBox_DropEvent_Callback qmessagebox_dropevent_callback = nullptr;
    QMessageBox_HideEvent_Callback qmessagebox_hideevent_callback = nullptr;
    QMessageBox_NativeEvent_Callback qmessagebox_nativeevent_callback = nullptr;
    QMessageBox_Metric_Callback qmessagebox_metric_callback = nullptr;
    QMessageBox_InitPainter_Callback qmessagebox_initpainter_callback = nullptr;
    QMessageBox_Redirected_Callback qmessagebox_redirected_callback = nullptr;
    QMessageBox_SharedPainter_Callback qmessagebox_sharedpainter_callback = nullptr;
    QMessageBox_InputMethodEvent_Callback qmessagebox_inputmethodevent_callback = nullptr;
    QMessageBox_InputMethodQuery_Callback qmessagebox_inputmethodquery_callback = nullptr;
    QMessageBox_FocusNextPrevChild_Callback qmessagebox_focusnextprevchild_callback = nullptr;
    QMessageBox_TimerEvent_Callback qmessagebox_timerevent_callback = nullptr;
    QMessageBox_ChildEvent_Callback qmessagebox_childevent_callback = nullptr;
    QMessageBox_CustomEvent_Callback qmessagebox_customevent_callback = nullptr;
    QMessageBox_ConnectNotify_Callback qmessagebox_connectnotify_callback = nullptr;
    QMessageBox_DisconnectNotify_Callback qmessagebox_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QMessageBox {
        using QMessageBox::actionEvent;
        using QMessageBox::changeEvent;
        using QMessageBox::childEvent;
        using QMessageBox::closeEvent;
        using QMessageBox::connectNotify;
        using QMessageBox::contextMenuEvent;
        using QMessageBox::customEvent;
        using QMessageBox::disconnectNotify;
        using QMessageBox::dragEnterEvent;
        using QMessageBox::dragLeaveEvent;
        using QMessageBox::dragMoveEvent;
        using QMessageBox::dropEvent;
        using QMessageBox::enterEvent;
        using QMessageBox::event;
        using QMessageBox::eventFilter;
        using QMessageBox::focusInEvent;
        using QMessageBox::focusNextPrevChild;
        using QMessageBox::focusOutEvent;
        using QMessageBox::hideEvent;
        using QMessageBox::initPainter;
        using QMessageBox::inputMethodEvent;
        using QMessageBox::keyPressEvent;
        using QMessageBox::keyReleaseEvent;
        using QMessageBox::leaveEvent;
        using QMessageBox::metric;
        using QMessageBox::mouseDoubleClickEvent;
        using QMessageBox::mouseMoveEvent;
        using QMessageBox::mousePressEvent;
        using QMessageBox::mouseReleaseEvent;
        using QMessageBox::moveEvent;
        using QMessageBox::nativeEvent;
        using QMessageBox::paintEvent;
        using QMessageBox::redirected;
        using QMessageBox::resizeEvent;
        using QMessageBox::sharedPainter;
        using QMessageBox::showEvent;
        using QMessageBox::tabletEvent;
        using QMessageBox::timerEvent;
        using QMessageBox::wheelEvent;
    };

    VirtualQMessageBox(QWidget* parent) : QMessageBox(parent) {};
    VirtualQMessageBox() : QMessageBox() {};
    VirtualQMessageBox(QMessageBox::Icon icon, const QString& title, const QString& text) : QMessageBox(icon, title, text) {};
    VirtualQMessageBox(const QString& title, const QString& text, QMessageBox::Icon icon, int button0, int button1, int button2) : QMessageBox(title, text, icon, button0, button1, button2) {};
    VirtualQMessageBox(QMessageBox::Icon icon, const QString& title, const QString& text, QMessageBox::StandardButtons buttons) : QMessageBox(icon, title, text, buttons) {};
    VirtualQMessageBox(QMessageBox::Icon icon, const QString& title, const QString& text, QMessageBox::StandardButtons buttons, QWidget* parent) : QMessageBox(icon, title, text, buttons, parent) {};
    VirtualQMessageBox(QMessageBox::Icon icon, const QString& title, const QString& text, QMessageBox::StandardButtons buttons, QWidget* parent, Qt::WindowFlags flags) : QMessageBox(icon, title, text, buttons, parent, flags) {};
    VirtualQMessageBox(const QString& title, const QString& text, QMessageBox::Icon icon, int button0, int button1, int button2, QWidget* parent) : QMessageBox(title, text, icon, button0, button1, button2, parent) {};
    VirtualQMessageBox(const QString& title, const QString& text, QMessageBox::Icon icon, int button0, int button1, int button2, QWidget* parent, Qt::WindowFlags f) : QMessageBox(title, text, icon, button0, button1, button2, parent, f) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qmessagebox_metaobject_callback) {
            QMetaObject* callback_ret = qmessagebox_metaobject_callback(this);
            return callback_ret;
        }
        return QMessageBox::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qmessagebox_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qmessagebox_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QMessageBox::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qmessagebox_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qmessagebox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QMessageBox::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qmessagebox_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qmessagebox_event_callback(this, cbval1);
            return callback_ret;
        }
        return QMessageBox::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qmessagebox_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qmessagebox_resizeevent_callback(this, cbval1);
            return;
        }
        QMessageBox::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qmessagebox_showevent_callback) {
            QShowEvent* cbval1 = event;
            qmessagebox_showevent_callback(this, cbval1);
            return;
        }
        QMessageBox::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qmessagebox_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qmessagebox_closeevent_callback(this, cbval1);
            return;
        }
        QMessageBox::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qmessagebox_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qmessagebox_keypressevent_callback(this, cbval1);
            return;
        }
        QMessageBox::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qmessagebox_changeevent_callback) {
            QEvent* cbval1 = event;
            qmessagebox_changeevent_callback(this, cbval1);
            return;
        }
        QMessageBox::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qmessagebox_setvisible_callback) {
            bool cbval1 = visible;
            qmessagebox_setvisible_callback(this, cbval1);
            return;
        }
        QMessageBox::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qmessagebox_sizehint_callback) {
            QSize* callback_ret = qmessagebox_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QMessageBox::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qmessagebox_minimumsizehint_callback) {
            QSize* callback_ret = qmessagebox_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QMessageBox::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (qmessagebox_open_callback) {
            qmessagebox_open_callback(this);
            return;
        }
        QMessageBox::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (qmessagebox_exec_callback) {
            int callback_ret = qmessagebox_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QMessageBox::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (qmessagebox_done_callback) {
            int cbval1 = param1;
            qmessagebox_done_callback(this, cbval1);
            return;
        }
        QMessageBox::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (qmessagebox_accept_callback) {
            qmessagebox_accept_callback(this);
            return;
        }
        QMessageBox::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (qmessagebox_reject_callback) {
            qmessagebox_reject_callback(this);
            return;
        }
        QMessageBox::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qmessagebox_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            qmessagebox_contextmenuevent_callback(this, cbval1);
            return;
        }
        QMessageBox::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qmessagebox_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = qmessagebox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QMessageBox::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qmessagebox_devtype_callback) {
            int callback_ret = qmessagebox_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QMessageBox::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qmessagebox_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qmessagebox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QMessageBox::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qmessagebox_hasheightforwidth_callback) {
            bool callback_ret = qmessagebox_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QMessageBox::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qmessagebox_paintengine_callback) {
            QPaintEngine* callback_ret = qmessagebox_paintengine_callback(this);
            return callback_ret;
        }
        return QMessageBox::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qmessagebox_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qmessagebox_mousepressevent_callback(this, cbval1);
            return;
        }
        QMessageBox::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qmessagebox_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qmessagebox_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QMessageBox::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qmessagebox_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qmessagebox_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QMessageBox::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qmessagebox_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qmessagebox_mousemoveevent_callback(this, cbval1);
            return;
        }
        QMessageBox::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qmessagebox_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qmessagebox_wheelevent_callback(this, cbval1);
            return;
        }
        QMessageBox::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qmessagebox_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qmessagebox_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QMessageBox::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qmessagebox_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qmessagebox_focusinevent_callback(this, cbval1);
            return;
        }
        QMessageBox::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qmessagebox_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qmessagebox_focusoutevent_callback(this, cbval1);
            return;
        }
        QMessageBox::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qmessagebox_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qmessagebox_enterevent_callback(this, cbval1);
            return;
        }
        QMessageBox::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qmessagebox_leaveevent_callback) {
            QEvent* cbval1 = event;
            qmessagebox_leaveevent_callback(this, cbval1);
            return;
        }
        QMessageBox::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qmessagebox_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qmessagebox_paintevent_callback(this, cbval1);
            return;
        }
        QMessageBox::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qmessagebox_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qmessagebox_moveevent_callback(this, cbval1);
            return;
        }
        QMessageBox::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qmessagebox_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qmessagebox_tabletevent_callback(this, cbval1);
            return;
        }
        QMessageBox::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qmessagebox_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qmessagebox_actionevent_callback(this, cbval1);
            return;
        }
        QMessageBox::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qmessagebox_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qmessagebox_dragenterevent_callback(this, cbval1);
            return;
        }
        QMessageBox::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qmessagebox_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qmessagebox_dragmoveevent_callback(this, cbval1);
            return;
        }
        QMessageBox::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qmessagebox_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qmessagebox_dragleaveevent_callback(this, cbval1);
            return;
        }
        QMessageBox::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qmessagebox_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qmessagebox_dropevent_callback(this, cbval1);
            return;
        }
        QMessageBox::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qmessagebox_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qmessagebox_hideevent_callback(this, cbval1);
            return;
        }
        QMessageBox::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qmessagebox_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qmessagebox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QMessageBox::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qmessagebox_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qmessagebox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QMessageBox::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qmessagebox_initpainter_callback) {
            QPainter* cbval1 = painter;
            qmessagebox_initpainter_callback(this, cbval1);
            return;
        }
        QMessageBox::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qmessagebox_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qmessagebox_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QMessageBox::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qmessagebox_sharedpainter_callback) {
            QPainter* callback_ret = qmessagebox_sharedpainter_callback(this);
            return callback_ret;
        }
        return QMessageBox::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qmessagebox_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qmessagebox_inputmethodevent_callback(this, cbval1);
            return;
        }
        QMessageBox::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qmessagebox_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qmessagebox_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QMessageBox::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qmessagebox_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qmessagebox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QMessageBox::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qmessagebox_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qmessagebox_timerevent_callback(this, cbval1);
            return;
        }
        QMessageBox::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qmessagebox_childevent_callback) {
            QChildEvent* cbval1 = event;
            qmessagebox_childevent_callback(this, cbval1);
            return;
        }
        QMessageBox::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qmessagebox_customevent_callback) {
            QEvent* cbval1 = event;
            qmessagebox_customevent_callback(this, cbval1);
            return;
        }
        QMessageBox::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qmessagebox_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qmessagebox_connectnotify_callback(this, cbval1);
            return;
        }
        QMessageBox::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qmessagebox_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qmessagebox_disconnectnotify_callback(this, cbval1);
            return;
        }
        QMessageBox::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QMessageBox_SuperEvent(QMessageBox* self, QEvent* e);
    friend void QMessageBox_SuperResizeEvent(QMessageBox* self, QResizeEvent* event);
    friend void QMessageBox_SuperShowEvent(QMessageBox* self, QShowEvent* event);
    friend void QMessageBox_SuperCloseEvent(QMessageBox* self, QCloseEvent* event);
    friend void QMessageBox_SuperKeyPressEvent(QMessageBox* self, QKeyEvent* event);
    friend void QMessageBox_SuperChangeEvent(QMessageBox* self, QEvent* event);
    friend void QMessageBox_SuperContextMenuEvent(QMessageBox* self, QContextMenuEvent* param1);
    friend bool QMessageBox_SuperEventFilter(QMessageBox* self, QObject* param1, QEvent* param2);
    friend void QMessageBox_SuperMousePressEvent(QMessageBox* self, QMouseEvent* event);
    friend void QMessageBox_SuperMouseReleaseEvent(QMessageBox* self, QMouseEvent* event);
    friend void QMessageBox_SuperMouseDoubleClickEvent(QMessageBox* self, QMouseEvent* event);
    friend void QMessageBox_SuperMouseMoveEvent(QMessageBox* self, QMouseEvent* event);
    friend void QMessageBox_SuperWheelEvent(QMessageBox* self, QWheelEvent* event);
    friend void QMessageBox_SuperKeyReleaseEvent(QMessageBox* self, QKeyEvent* event);
    friend void QMessageBox_SuperFocusInEvent(QMessageBox* self, QFocusEvent* event);
    friend void QMessageBox_SuperFocusOutEvent(QMessageBox* self, QFocusEvent* event);
    friend void QMessageBox_SuperEnterEvent(QMessageBox* self, QEnterEvent* event);
    friend void QMessageBox_SuperLeaveEvent(QMessageBox* self, QEvent* event);
    friend void QMessageBox_SuperPaintEvent(QMessageBox* self, QPaintEvent* event);
    friend void QMessageBox_SuperMoveEvent(QMessageBox* self, QMoveEvent* event);
    friend void QMessageBox_SuperTabletEvent(QMessageBox* self, QTabletEvent* event);
    friend void QMessageBox_SuperActionEvent(QMessageBox* self, QActionEvent* event);
    friend void QMessageBox_SuperDragEnterEvent(QMessageBox* self, QDragEnterEvent* event);
    friend void QMessageBox_SuperDragMoveEvent(QMessageBox* self, QDragMoveEvent* event);
    friend void QMessageBox_SuperDragLeaveEvent(QMessageBox* self, QDragLeaveEvent* event);
    friend void QMessageBox_SuperDropEvent(QMessageBox* self, QDropEvent* event);
    friend void QMessageBox_SuperHideEvent(QMessageBox* self, QHideEvent* event);
    friend bool QMessageBox_SuperNativeEvent(QMessageBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QMessageBox_SuperMetric(const QMessageBox* self, int param1);
    friend void QMessageBox_SuperInitPainter(const QMessageBox* self, QPainter* painter);
    friend QPaintDevice* QMessageBox_SuperRedirected(const QMessageBox* self, QPoint* offset);
    friend QPainter* QMessageBox_SuperSharedPainter(const QMessageBox* self);
    friend void QMessageBox_SuperInputMethodEvent(QMessageBox* self, QInputMethodEvent* param1);
    friend bool QMessageBox_SuperFocusNextPrevChild(QMessageBox* self, bool next);
    friend void QMessageBox_SuperTimerEvent(QMessageBox* self, QTimerEvent* event);
    friend void QMessageBox_SuperChildEvent(QMessageBox* self, QChildEvent* event);
    friend void QMessageBox_SuperCustomEvent(QMessageBox* self, QEvent* event);
    friend void QMessageBox_SuperConnectNotify(QMessageBox* self, const QMetaMethod* signal);
    friend void QMessageBox_SuperDisconnectNotify(QMessageBox* self, const QMetaMethod* signal);
};

#endif
