#pragma once
#ifndef LIBQWIZARD_HXX
#define LIBQWIZARD_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QWizard
class VirtualQWizard final : public QWizard {
  public:
    // Virtual class public types (including callbacks and access types)
    using QWizard_MetaObject_Callback = QMetaObject* (*)(const QWizard*);
    using QWizard_Metacast_Callback = void* (*)(QWizard*, const char*);
    using QWizard_Metacall_Callback = int (*)(QWizard*, int, int, void**);
    using QWizard_ValidateCurrentPage_Callback = bool (*)(QWizard*);
    using QWizard_NextId_Callback = int (*)(const QWizard*);
    using QWizard_SetVisible_Callback = void (*)(QWizard*, bool);
    using QWizard_SizeHint_Callback = QSize* (*)(const QWizard*);
    using QWizard_Event_Callback = bool (*)(QWizard*, QEvent*);
    using QWizard_ResizeEvent_Callback = void (*)(QWizard*, QResizeEvent*);
    using QWizard_PaintEvent_Callback = void (*)(QWizard*, QPaintEvent*);
    using QWizard_Done_Callback = void (*)(QWizard*, int);
    using QWizard_InitializePage_Callback = void (*)(QWizard*, int);
    using QWizard_CleanupPage_Callback = void (*)(QWizard*, int);
    using QWizard_MinimumSizeHint_Callback = QSize* (*)(const QWizard*);
    using QWizard_Open_Callback = void (*)(QWizard*);
    using QWizard_Exec_Callback = int (*)(QWizard*);
    using QWizard_Accept_Callback = void (*)(QWizard*);
    using QWizard_Reject_Callback = void (*)(QWizard*);
    using QWizard_KeyPressEvent_Callback = void (*)(QWizard*, QKeyEvent*);
    using QWizard_CloseEvent_Callback = void (*)(QWizard*, QCloseEvent*);
    using QWizard_ShowEvent_Callback = void (*)(QWizard*, QShowEvent*);
    using QWizard_ContextMenuEvent_Callback = void (*)(QWizard*, QContextMenuEvent*);
    using QWizard_EventFilter_Callback = bool (*)(QWizard*, QObject*, QEvent*);
    using QWizard_DevType_Callback = int (*)(const QWizard*);
    using QWizard_HeightForWidth_Callback = int (*)(const QWizard*, int);
    using QWizard_HasHeightForWidth_Callback = bool (*)(const QWizard*);
    using QWizard_PaintEngine_Callback = QPaintEngine* (*)(const QWizard*);
    using QWizard_MousePressEvent_Callback = void (*)(QWizard*, QMouseEvent*);
    using QWizard_MouseReleaseEvent_Callback = void (*)(QWizard*, QMouseEvent*);
    using QWizard_MouseDoubleClickEvent_Callback = void (*)(QWizard*, QMouseEvent*);
    using QWizard_MouseMoveEvent_Callback = void (*)(QWizard*, QMouseEvent*);
    using QWizard_WheelEvent_Callback = void (*)(QWizard*, QWheelEvent*);
    using QWizard_KeyReleaseEvent_Callback = void (*)(QWizard*, QKeyEvent*);
    using QWizard_FocusInEvent_Callback = void (*)(QWizard*, QFocusEvent*);
    using QWizard_FocusOutEvent_Callback = void (*)(QWizard*, QFocusEvent*);
    using QWizard_EnterEvent_Callback = void (*)(QWizard*, QEnterEvent*);
    using QWizard_LeaveEvent_Callback = void (*)(QWizard*, QEvent*);
    using QWizard_MoveEvent_Callback = void (*)(QWizard*, QMoveEvent*);
    using QWizard_TabletEvent_Callback = void (*)(QWizard*, QTabletEvent*);
    using QWizard_ActionEvent_Callback = void (*)(QWizard*, QActionEvent*);
    using QWizard_DragEnterEvent_Callback = void (*)(QWizard*, QDragEnterEvent*);
    using QWizard_DragMoveEvent_Callback = void (*)(QWizard*, QDragMoveEvent*);
    using QWizard_DragLeaveEvent_Callback = void (*)(QWizard*, QDragLeaveEvent*);
    using QWizard_DropEvent_Callback = void (*)(QWizard*, QDropEvent*);
    using QWizard_HideEvent_Callback = void (*)(QWizard*, QHideEvent*);
    using QWizard_NativeEvent_Callback = bool (*)(QWizard*, libqt_string, void*, intptr_t*);
    using QWizard_ChangeEvent_Callback = void (*)(QWizard*, QEvent*);
    using QWizard_Metric_Callback = int (*)(const QWizard*, int);
    using QWizard_InitPainter_Callback = void (*)(const QWizard*, QPainter*);
    using QWizard_Redirected_Callback = QPaintDevice* (*)(const QWizard*, QPoint*);
    using QWizard_SharedPainter_Callback = QPainter* (*)(const QWizard*);
    using QWizard_InputMethodEvent_Callback = void (*)(QWizard*, QInputMethodEvent*);
    using QWizard_InputMethodQuery_Callback = QVariant* (*)(const QWizard*, int);
    using QWizard_FocusNextPrevChild_Callback = bool (*)(QWizard*, bool);
    using QWizard_TimerEvent_Callback = void (*)(QWizard*, QTimerEvent*);
    using QWizard_ChildEvent_Callback = void (*)(QWizard*, QChildEvent*);
    using QWizard_CustomEvent_Callback = void (*)(QWizard*, QEvent*);
    using QWizard_ConnectNotify_Callback = void (*)(QWizard*, QMetaMethod*);
    using QWizard_DisconnectNotify_Callback = void (*)(QWizard*, QMetaMethod*);
    using QWizard::adjustPosition;
    using QWizard::create;
    using QWizard::destroy;
    using QWizard::focusNextChild;
    using QWizard::focusPreviousChild;
    using QWizard::getDecodedMetricF;
    using QWizard::isSignalConnected;
    using QWizard::receivers;
    using QWizard::sender;
    using QWizard::senderSignalIndex;
    using QWizard::updateMicroFocus;

    // Instance callback storage
    QWizard_MetaObject_Callback qwizard_metaobject_callback = nullptr;
    QWizard_Metacast_Callback qwizard_metacast_callback = nullptr;
    QWizard_Metacall_Callback qwizard_metacall_callback = nullptr;
    QWizard_ValidateCurrentPage_Callback qwizard_validatecurrentpage_callback = nullptr;
    QWizard_NextId_Callback qwizard_nextid_callback = nullptr;
    QWizard_SetVisible_Callback qwizard_setvisible_callback = nullptr;
    QWizard_SizeHint_Callback qwizard_sizehint_callback = nullptr;
    QWizard_Event_Callback qwizard_event_callback = nullptr;
    QWizard_ResizeEvent_Callback qwizard_resizeevent_callback = nullptr;
    QWizard_PaintEvent_Callback qwizard_paintevent_callback = nullptr;
    QWizard_Done_Callback qwizard_done_callback = nullptr;
    QWizard_InitializePage_Callback qwizard_initializepage_callback = nullptr;
    QWizard_CleanupPage_Callback qwizard_cleanuppage_callback = nullptr;
    QWizard_MinimumSizeHint_Callback qwizard_minimumsizehint_callback = nullptr;
    QWizard_Open_Callback qwizard_open_callback = nullptr;
    QWizard_Exec_Callback qwizard_exec_callback = nullptr;
    QWizard_Accept_Callback qwizard_accept_callback = nullptr;
    QWizard_Reject_Callback qwizard_reject_callback = nullptr;
    QWizard_KeyPressEvent_Callback qwizard_keypressevent_callback = nullptr;
    QWizard_CloseEvent_Callback qwizard_closeevent_callback = nullptr;
    QWizard_ShowEvent_Callback qwizard_showevent_callback = nullptr;
    QWizard_ContextMenuEvent_Callback qwizard_contextmenuevent_callback = nullptr;
    QWizard_EventFilter_Callback qwizard_eventfilter_callback = nullptr;
    QWizard_DevType_Callback qwizard_devtype_callback = nullptr;
    QWizard_HeightForWidth_Callback qwizard_heightforwidth_callback = nullptr;
    QWizard_HasHeightForWidth_Callback qwizard_hasheightforwidth_callback = nullptr;
    QWizard_PaintEngine_Callback qwizard_paintengine_callback = nullptr;
    QWizard_MousePressEvent_Callback qwizard_mousepressevent_callback = nullptr;
    QWizard_MouseReleaseEvent_Callback qwizard_mousereleaseevent_callback = nullptr;
    QWizard_MouseDoubleClickEvent_Callback qwizard_mousedoubleclickevent_callback = nullptr;
    QWizard_MouseMoveEvent_Callback qwizard_mousemoveevent_callback = nullptr;
    QWizard_WheelEvent_Callback qwizard_wheelevent_callback = nullptr;
    QWizard_KeyReleaseEvent_Callback qwizard_keyreleaseevent_callback = nullptr;
    QWizard_FocusInEvent_Callback qwizard_focusinevent_callback = nullptr;
    QWizard_FocusOutEvent_Callback qwizard_focusoutevent_callback = nullptr;
    QWizard_EnterEvent_Callback qwizard_enterevent_callback = nullptr;
    QWizard_LeaveEvent_Callback qwizard_leaveevent_callback = nullptr;
    QWizard_MoveEvent_Callback qwizard_moveevent_callback = nullptr;
    QWizard_TabletEvent_Callback qwizard_tabletevent_callback = nullptr;
    QWizard_ActionEvent_Callback qwizard_actionevent_callback = nullptr;
    QWizard_DragEnterEvent_Callback qwizard_dragenterevent_callback = nullptr;
    QWizard_DragMoveEvent_Callback qwizard_dragmoveevent_callback = nullptr;
    QWizard_DragLeaveEvent_Callback qwizard_dragleaveevent_callback = nullptr;
    QWizard_DropEvent_Callback qwizard_dropevent_callback = nullptr;
    QWizard_HideEvent_Callback qwizard_hideevent_callback = nullptr;
    QWizard_NativeEvent_Callback qwizard_nativeevent_callback = nullptr;
    QWizard_ChangeEvent_Callback qwizard_changeevent_callback = nullptr;
    QWizard_Metric_Callback qwizard_metric_callback = nullptr;
    QWizard_InitPainter_Callback qwizard_initpainter_callback = nullptr;
    QWizard_Redirected_Callback qwizard_redirected_callback = nullptr;
    QWizard_SharedPainter_Callback qwizard_sharedpainter_callback = nullptr;
    QWizard_InputMethodEvent_Callback qwizard_inputmethodevent_callback = nullptr;
    QWizard_InputMethodQuery_Callback qwizard_inputmethodquery_callback = nullptr;
    QWizard_FocusNextPrevChild_Callback qwizard_focusnextprevchild_callback = nullptr;
    QWizard_TimerEvent_Callback qwizard_timerevent_callback = nullptr;
    QWizard_ChildEvent_Callback qwizard_childevent_callback = nullptr;
    QWizard_CustomEvent_Callback qwizard_customevent_callback = nullptr;
    QWizard_ConnectNotify_Callback qwizard_connectnotify_callback = nullptr;
    QWizard_DisconnectNotify_Callback qwizard_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QWizard {
        using QWizard::actionEvent;
        using QWizard::changeEvent;
        using QWizard::childEvent;
        using QWizard::cleanupPage;
        using QWizard::closeEvent;
        using QWizard::connectNotify;
        using QWizard::contextMenuEvent;
        using QWizard::customEvent;
        using QWizard::disconnectNotify;
        using QWizard::done;
        using QWizard::dragEnterEvent;
        using QWizard::dragLeaveEvent;
        using QWizard::dragMoveEvent;
        using QWizard::dropEvent;
        using QWizard::enterEvent;
        using QWizard::event;
        using QWizard::eventFilter;
        using QWizard::focusInEvent;
        using QWizard::focusNextPrevChild;
        using QWizard::focusOutEvent;
        using QWizard::hideEvent;
        using QWizard::initializePage;
        using QWizard::initPainter;
        using QWizard::inputMethodEvent;
        using QWizard::keyPressEvent;
        using QWizard::keyReleaseEvent;
        using QWizard::leaveEvent;
        using QWizard::metric;
        using QWizard::mouseDoubleClickEvent;
        using QWizard::mouseMoveEvent;
        using QWizard::mousePressEvent;
        using QWizard::mouseReleaseEvent;
        using QWizard::moveEvent;
        using QWizard::nativeEvent;
        using QWizard::paintEvent;
        using QWizard::redirected;
        using QWizard::resizeEvent;
        using QWizard::sharedPainter;
        using QWizard::showEvent;
        using QWizard::tabletEvent;
        using QWizard::timerEvent;
        using QWizard::wheelEvent;
    };

    VirtualQWizard(QWidget* parent) : QWizard(parent) {};
    VirtualQWizard() : QWizard() {};
    VirtualQWizard(QWidget* parent, Qt::WindowFlags flags) : QWizard(parent, flags) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qwizard_metaobject_callback) {
            QMetaObject* callback_ret = qwizard_metaobject_callback(this);
            return callback_ret;
        }
        return QWizard::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qwizard_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qwizard_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QWizard::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwizard_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qwizard_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QWizard::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool validateCurrentPage() override {
        if (qwizard_validatecurrentpage_callback) {
            bool callback_ret = qwizard_validatecurrentpage_callback(this);
            return callback_ret;
        }
        return QWizard::validateCurrentPage();
    }

    // Virtual method for C ABI access and custom callback
    virtual int nextId() const override {
        if (qwizard_nextid_callback) {
            int callback_ret = qwizard_nextid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QWizard::nextId();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qwizard_setvisible_callback) {
            bool cbval1 = visible;
            qwizard_setvisible_callback(this, cbval1);
            return;
        }
        QWizard::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qwizard_sizehint_callback) {
            QSize* callback_ret = qwizard_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QWizard::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qwizard_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qwizard_event_callback(this, cbval1);
            return callback_ret;
        }
        return QWizard::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qwizard_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qwizard_resizeevent_callback(this, cbval1);
            return;
        }
        QWizard::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qwizard_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qwizard_paintevent_callback(this, cbval1);
            return;
        }
        QWizard::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int result) override {
        if (qwizard_done_callback) {
            int cbval1 = result;
            qwizard_done_callback(this, cbval1);
            return;
        }
        QWizard::done(result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initializePage(int id) override {
        if (qwizard_initializepage_callback) {
            int cbval1 = id;
            qwizard_initializepage_callback(this, cbval1);
            return;
        }
        QWizard::initializePage(id);
    }

    // Virtual method for C ABI access and custom callback
    virtual void cleanupPage(int id) override {
        if (qwizard_cleanuppage_callback) {
            int cbval1 = id;
            qwizard_cleanuppage_callback(this, cbval1);
            return;
        }
        QWizard::cleanupPage(id);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qwizard_minimumsizehint_callback) {
            QSize* callback_ret = qwizard_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QWizard::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (qwizard_open_callback) {
            qwizard_open_callback(this);
            return;
        }
        QWizard::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (qwizard_exec_callback) {
            int callback_ret = qwizard_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QWizard::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (qwizard_accept_callback) {
            qwizard_accept_callback(this);
            return;
        }
        QWizard::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (qwizard_reject_callback) {
            qwizard_reject_callback(this);
            return;
        }
        QWizard::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qwizard_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            qwizard_keypressevent_callback(this, cbval1);
            return;
        }
        QWizard::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qwizard_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            qwizard_closeevent_callback(this, cbval1);
            return;
        }
        QWizard::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qwizard_showevent_callback) {
            QShowEvent* cbval1 = param1;
            qwizard_showevent_callback(this, cbval1);
            return;
        }
        QWizard::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qwizard_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            qwizard_contextmenuevent_callback(this, cbval1);
            return;
        }
        QWizard::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qwizard_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = qwizard_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QWizard::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qwizard_devtype_callback) {
            int callback_ret = qwizard_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QWizard::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qwizard_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qwizard_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QWizard::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qwizard_hasheightforwidth_callback) {
            bool callback_ret = qwizard_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QWizard::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qwizard_paintengine_callback) {
            QPaintEngine* callback_ret = qwizard_paintengine_callback(this);
            return callback_ret;
        }
        return QWizard::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qwizard_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qwizard_mousepressevent_callback(this, cbval1);
            return;
        }
        QWizard::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qwizard_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qwizard_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QWizard::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qwizard_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qwizard_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QWizard::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qwizard_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qwizard_mousemoveevent_callback(this, cbval1);
            return;
        }
        QWizard::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qwizard_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qwizard_wheelevent_callback(this, cbval1);
            return;
        }
        QWizard::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qwizard_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qwizard_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QWizard::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qwizard_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qwizard_focusinevent_callback(this, cbval1);
            return;
        }
        QWizard::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qwizard_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qwizard_focusoutevent_callback(this, cbval1);
            return;
        }
        QWizard::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qwizard_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qwizard_enterevent_callback(this, cbval1);
            return;
        }
        QWizard::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qwizard_leaveevent_callback) {
            QEvent* cbval1 = event;
            qwizard_leaveevent_callback(this, cbval1);
            return;
        }
        QWizard::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qwizard_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qwizard_moveevent_callback(this, cbval1);
            return;
        }
        QWizard::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qwizard_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qwizard_tabletevent_callback(this, cbval1);
            return;
        }
        QWizard::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qwizard_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qwizard_actionevent_callback(this, cbval1);
            return;
        }
        QWizard::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qwizard_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qwizard_dragenterevent_callback(this, cbval1);
            return;
        }
        QWizard::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qwizard_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qwizard_dragmoveevent_callback(this, cbval1);
            return;
        }
        QWizard::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qwizard_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qwizard_dragleaveevent_callback(this, cbval1);
            return;
        }
        QWizard::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qwizard_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qwizard_dropevent_callback(this, cbval1);
            return;
        }
        QWizard::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qwizard_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qwizard_hideevent_callback(this, cbval1);
            return;
        }
        QWizard::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qwizard_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qwizard_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QWizard::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qwizard_changeevent_callback) {
            QEvent* cbval1 = param1;
            qwizard_changeevent_callback(this, cbval1);
            return;
        }
        QWizard::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qwizard_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qwizard_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QWizard::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qwizard_initpainter_callback) {
            QPainter* cbval1 = painter;
            qwizard_initpainter_callback(this, cbval1);
            return;
        }
        QWizard::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qwizard_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qwizard_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QWizard::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qwizard_sharedpainter_callback) {
            QPainter* callback_ret = qwizard_sharedpainter_callback(this);
            return callback_ret;
        }
        return QWizard::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qwizard_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qwizard_inputmethodevent_callback(this, cbval1);
            return;
        }
        QWizard::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qwizard_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qwizard_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QWizard::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qwizard_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qwizard_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QWizard::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwizard_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qwizard_timerevent_callback(this, cbval1);
            return;
        }
        QWizard::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwizard_childevent_callback) {
            QChildEvent* cbval1 = event;
            qwizard_childevent_callback(this, cbval1);
            return;
        }
        QWizard::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwizard_customevent_callback) {
            QEvent* cbval1 = event;
            qwizard_customevent_callback(this, cbval1);
            return;
        }
        QWizard::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwizard_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qwizard_connectnotify_callback(this, cbval1);
            return;
        }
        QWizard::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwizard_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qwizard_disconnectnotify_callback(this, cbval1);
            return;
        }
        QWizard::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QWizard_SuperEvent(QWizard* self, QEvent* event);
    friend void QWizard_SuperResizeEvent(QWizard* self, QResizeEvent* event);
    friend void QWizard_SuperPaintEvent(QWizard* self, QPaintEvent* event);
    friend void QWizard_SuperDone(QWizard* self, int result);
    friend void QWizard_SuperInitializePage(QWizard* self, int id);
    friend void QWizard_SuperCleanupPage(QWizard* self, int id);
    friend void QWizard_SuperKeyPressEvent(QWizard* self, QKeyEvent* param1);
    friend void QWizard_SuperCloseEvent(QWizard* self, QCloseEvent* param1);
    friend void QWizard_SuperShowEvent(QWizard* self, QShowEvent* param1);
    friend void QWizard_SuperContextMenuEvent(QWizard* self, QContextMenuEvent* param1);
    friend bool QWizard_SuperEventFilter(QWizard* self, QObject* param1, QEvent* param2);
    friend void QWizard_SuperMousePressEvent(QWizard* self, QMouseEvent* event);
    friend void QWizard_SuperMouseReleaseEvent(QWizard* self, QMouseEvent* event);
    friend void QWizard_SuperMouseDoubleClickEvent(QWizard* self, QMouseEvent* event);
    friend void QWizard_SuperMouseMoveEvent(QWizard* self, QMouseEvent* event);
    friend void QWizard_SuperWheelEvent(QWizard* self, QWheelEvent* event);
    friend void QWizard_SuperKeyReleaseEvent(QWizard* self, QKeyEvent* event);
    friend void QWizard_SuperFocusInEvent(QWizard* self, QFocusEvent* event);
    friend void QWizard_SuperFocusOutEvent(QWizard* self, QFocusEvent* event);
    friend void QWizard_SuperEnterEvent(QWizard* self, QEnterEvent* event);
    friend void QWizard_SuperLeaveEvent(QWizard* self, QEvent* event);
    friend void QWizard_SuperMoveEvent(QWizard* self, QMoveEvent* event);
    friend void QWizard_SuperTabletEvent(QWizard* self, QTabletEvent* event);
    friend void QWizard_SuperActionEvent(QWizard* self, QActionEvent* event);
    friend void QWizard_SuperDragEnterEvent(QWizard* self, QDragEnterEvent* event);
    friend void QWizard_SuperDragMoveEvent(QWizard* self, QDragMoveEvent* event);
    friend void QWizard_SuperDragLeaveEvent(QWizard* self, QDragLeaveEvent* event);
    friend void QWizard_SuperDropEvent(QWizard* self, QDropEvent* event);
    friend void QWizard_SuperHideEvent(QWizard* self, QHideEvent* event);
    friend bool QWizard_SuperNativeEvent(QWizard* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QWizard_SuperChangeEvent(QWizard* self, QEvent* param1);
    friend int QWizard_SuperMetric(const QWizard* self, int param1);
    friend void QWizard_SuperInitPainter(const QWizard* self, QPainter* painter);
    friend QPaintDevice* QWizard_SuperRedirected(const QWizard* self, QPoint* offset);
    friend QPainter* QWizard_SuperSharedPainter(const QWizard* self);
    friend void QWizard_SuperInputMethodEvent(QWizard* self, QInputMethodEvent* param1);
    friend bool QWizard_SuperFocusNextPrevChild(QWizard* self, bool next);
    friend void QWizard_SuperTimerEvent(QWizard* self, QTimerEvent* event);
    friend void QWizard_SuperChildEvent(QWizard* self, QChildEvent* event);
    friend void QWizard_SuperCustomEvent(QWizard* self, QEvent* event);
    friend void QWizard_SuperConnectNotify(QWizard* self, const QMetaMethod* signal);
    friend void QWizard_SuperDisconnectNotify(QWizard* self, const QMetaMethod* signal);
};

// This class is a subclass of QWizardPage
class VirtualQWizardPage final : public QWizardPage {
  public:
    // Virtual class public types (including callbacks and access types)
    using QWizardPage_MetaObject_Callback = QMetaObject* (*)(const QWizardPage*);
    using QWizardPage_Metacast_Callback = void* (*)(QWizardPage*, const char*);
    using QWizardPage_Metacall_Callback = int (*)(QWizardPage*, int, int, void**);
    using QWizardPage_InitializePage_Callback = void (*)(QWizardPage*);
    using QWizardPage_CleanupPage_Callback = void (*)(QWizardPage*);
    using QWizardPage_ValidatePage_Callback = bool (*)(QWizardPage*);
    using QWizardPage_IsComplete_Callback = bool (*)(const QWizardPage*);
    using QWizardPage_NextId_Callback = int (*)(const QWizardPage*);
    using QWizardPage_DevType_Callback = int (*)(const QWizardPage*);
    using QWizardPage_SetVisible_Callback = void (*)(QWizardPage*, bool);
    using QWizardPage_SizeHint_Callback = QSize* (*)(const QWizardPage*);
    using QWizardPage_MinimumSizeHint_Callback = QSize* (*)(const QWizardPage*);
    using QWizardPage_HeightForWidth_Callback = int (*)(const QWizardPage*, int);
    using QWizardPage_HasHeightForWidth_Callback = bool (*)(const QWizardPage*);
    using QWizardPage_PaintEngine_Callback = QPaintEngine* (*)(const QWizardPage*);
    using QWizardPage_Event_Callback = bool (*)(QWizardPage*, QEvent*);
    using QWizardPage_MousePressEvent_Callback = void (*)(QWizardPage*, QMouseEvent*);
    using QWizardPage_MouseReleaseEvent_Callback = void (*)(QWizardPage*, QMouseEvent*);
    using QWizardPage_MouseDoubleClickEvent_Callback = void (*)(QWizardPage*, QMouseEvent*);
    using QWizardPage_MouseMoveEvent_Callback = void (*)(QWizardPage*, QMouseEvent*);
    using QWizardPage_WheelEvent_Callback = void (*)(QWizardPage*, QWheelEvent*);
    using QWizardPage_KeyPressEvent_Callback = void (*)(QWizardPage*, QKeyEvent*);
    using QWizardPage_KeyReleaseEvent_Callback = void (*)(QWizardPage*, QKeyEvent*);
    using QWizardPage_FocusInEvent_Callback = void (*)(QWizardPage*, QFocusEvent*);
    using QWizardPage_FocusOutEvent_Callback = void (*)(QWizardPage*, QFocusEvent*);
    using QWizardPage_EnterEvent_Callback = void (*)(QWizardPage*, QEnterEvent*);
    using QWizardPage_LeaveEvent_Callback = void (*)(QWizardPage*, QEvent*);
    using QWizardPage_PaintEvent_Callback = void (*)(QWizardPage*, QPaintEvent*);
    using QWizardPage_MoveEvent_Callback = void (*)(QWizardPage*, QMoveEvent*);
    using QWizardPage_ResizeEvent_Callback = void (*)(QWizardPage*, QResizeEvent*);
    using QWizardPage_CloseEvent_Callback = void (*)(QWizardPage*, QCloseEvent*);
    using QWizardPage_ContextMenuEvent_Callback = void (*)(QWizardPage*, QContextMenuEvent*);
    using QWizardPage_TabletEvent_Callback = void (*)(QWizardPage*, QTabletEvent*);
    using QWizardPage_ActionEvent_Callback = void (*)(QWizardPage*, QActionEvent*);
    using QWizardPage_DragEnterEvent_Callback = void (*)(QWizardPage*, QDragEnterEvent*);
    using QWizardPage_DragMoveEvent_Callback = void (*)(QWizardPage*, QDragMoveEvent*);
    using QWizardPage_DragLeaveEvent_Callback = void (*)(QWizardPage*, QDragLeaveEvent*);
    using QWizardPage_DropEvent_Callback = void (*)(QWizardPage*, QDropEvent*);
    using QWizardPage_ShowEvent_Callback = void (*)(QWizardPage*, QShowEvent*);
    using QWizardPage_HideEvent_Callback = void (*)(QWizardPage*, QHideEvent*);
    using QWizardPage_NativeEvent_Callback = bool (*)(QWizardPage*, libqt_string, void*, intptr_t*);
    using QWizardPage_ChangeEvent_Callback = void (*)(QWizardPage*, QEvent*);
    using QWizardPage_Metric_Callback = int (*)(const QWizardPage*, int);
    using QWizardPage_InitPainter_Callback = void (*)(const QWizardPage*, QPainter*);
    using QWizardPage_Redirected_Callback = QPaintDevice* (*)(const QWizardPage*, QPoint*);
    using QWizardPage_SharedPainter_Callback = QPainter* (*)(const QWizardPage*);
    using QWizardPage_InputMethodEvent_Callback = void (*)(QWizardPage*, QInputMethodEvent*);
    using QWizardPage_InputMethodQuery_Callback = QVariant* (*)(const QWizardPage*, int);
    using QWizardPage_FocusNextPrevChild_Callback = bool (*)(QWizardPage*, bool);
    using QWizardPage_EventFilter_Callback = bool (*)(QWizardPage*, QObject*, QEvent*);
    using QWizardPage_TimerEvent_Callback = void (*)(QWizardPage*, QTimerEvent*);
    using QWizardPage_ChildEvent_Callback = void (*)(QWizardPage*, QChildEvent*);
    using QWizardPage_CustomEvent_Callback = void (*)(QWizardPage*, QEvent*);
    using QWizardPage_ConnectNotify_Callback = void (*)(QWizardPage*, QMetaMethod*);
    using QWizardPage_DisconnectNotify_Callback = void (*)(QWizardPage*, QMetaMethod*);
    using QWizardPage::create;
    using QWizardPage::destroy;
    using QWizardPage::field;
    using QWizardPage::focusNextChild;
    using QWizardPage::focusPreviousChild;
    using QWizardPage::getDecodedMetricF;
    using QWizardPage::isSignalConnected;
    using QWizardPage::receivers;
    using QWizardPage::registerField;
    using QWizardPage::sender;
    using QWizardPage::senderSignalIndex;
    using QWizardPage::setField;
    using QWizardPage::updateMicroFocus;
    using QWizardPage::wizard;

    // Instance callback storage
    QWizardPage_MetaObject_Callback qwizardpage_metaobject_callback = nullptr;
    QWizardPage_Metacast_Callback qwizardpage_metacast_callback = nullptr;
    QWizardPage_Metacall_Callback qwizardpage_metacall_callback = nullptr;
    QWizardPage_InitializePage_Callback qwizardpage_initializepage_callback = nullptr;
    QWizardPage_CleanupPage_Callback qwizardpage_cleanuppage_callback = nullptr;
    QWizardPage_ValidatePage_Callback qwizardpage_validatepage_callback = nullptr;
    QWizardPage_IsComplete_Callback qwizardpage_iscomplete_callback = nullptr;
    QWizardPage_NextId_Callback qwizardpage_nextid_callback = nullptr;
    QWizardPage_DevType_Callback qwizardpage_devtype_callback = nullptr;
    QWizardPage_SetVisible_Callback qwizardpage_setvisible_callback = nullptr;
    QWizardPage_SizeHint_Callback qwizardpage_sizehint_callback = nullptr;
    QWizardPage_MinimumSizeHint_Callback qwizardpage_minimumsizehint_callback = nullptr;
    QWizardPage_HeightForWidth_Callback qwizardpage_heightforwidth_callback = nullptr;
    QWizardPage_HasHeightForWidth_Callback qwizardpage_hasheightforwidth_callback = nullptr;
    QWizardPage_PaintEngine_Callback qwizardpage_paintengine_callback = nullptr;
    QWizardPage_Event_Callback qwizardpage_event_callback = nullptr;
    QWizardPage_MousePressEvent_Callback qwizardpage_mousepressevent_callback = nullptr;
    QWizardPage_MouseReleaseEvent_Callback qwizardpage_mousereleaseevent_callback = nullptr;
    QWizardPage_MouseDoubleClickEvent_Callback qwizardpage_mousedoubleclickevent_callback = nullptr;
    QWizardPage_MouseMoveEvent_Callback qwizardpage_mousemoveevent_callback = nullptr;
    QWizardPage_WheelEvent_Callback qwizardpage_wheelevent_callback = nullptr;
    QWizardPage_KeyPressEvent_Callback qwizardpage_keypressevent_callback = nullptr;
    QWizardPage_KeyReleaseEvent_Callback qwizardpage_keyreleaseevent_callback = nullptr;
    QWizardPage_FocusInEvent_Callback qwizardpage_focusinevent_callback = nullptr;
    QWizardPage_FocusOutEvent_Callback qwizardpage_focusoutevent_callback = nullptr;
    QWizardPage_EnterEvent_Callback qwizardpage_enterevent_callback = nullptr;
    QWizardPage_LeaveEvent_Callback qwizardpage_leaveevent_callback = nullptr;
    QWizardPage_PaintEvent_Callback qwizardpage_paintevent_callback = nullptr;
    QWizardPage_MoveEvent_Callback qwizardpage_moveevent_callback = nullptr;
    QWizardPage_ResizeEvent_Callback qwizardpage_resizeevent_callback = nullptr;
    QWizardPage_CloseEvent_Callback qwizardpage_closeevent_callback = nullptr;
    QWizardPage_ContextMenuEvent_Callback qwizardpage_contextmenuevent_callback = nullptr;
    QWizardPage_TabletEvent_Callback qwizardpage_tabletevent_callback = nullptr;
    QWizardPage_ActionEvent_Callback qwizardpage_actionevent_callback = nullptr;
    QWizardPage_DragEnterEvent_Callback qwizardpage_dragenterevent_callback = nullptr;
    QWizardPage_DragMoveEvent_Callback qwizardpage_dragmoveevent_callback = nullptr;
    QWizardPage_DragLeaveEvent_Callback qwizardpage_dragleaveevent_callback = nullptr;
    QWizardPage_DropEvent_Callback qwizardpage_dropevent_callback = nullptr;
    QWizardPage_ShowEvent_Callback qwizardpage_showevent_callback = nullptr;
    QWizardPage_HideEvent_Callback qwizardpage_hideevent_callback = nullptr;
    QWizardPage_NativeEvent_Callback qwizardpage_nativeevent_callback = nullptr;
    QWizardPage_ChangeEvent_Callback qwizardpage_changeevent_callback = nullptr;
    QWizardPage_Metric_Callback qwizardpage_metric_callback = nullptr;
    QWizardPage_InitPainter_Callback qwizardpage_initpainter_callback = nullptr;
    QWizardPage_Redirected_Callback qwizardpage_redirected_callback = nullptr;
    QWizardPage_SharedPainter_Callback qwizardpage_sharedpainter_callback = nullptr;
    QWizardPage_InputMethodEvent_Callback qwizardpage_inputmethodevent_callback = nullptr;
    QWizardPage_InputMethodQuery_Callback qwizardpage_inputmethodquery_callback = nullptr;
    QWizardPage_FocusNextPrevChild_Callback qwizardpage_focusnextprevchild_callback = nullptr;
    QWizardPage_EventFilter_Callback qwizardpage_eventfilter_callback = nullptr;
    QWizardPage_TimerEvent_Callback qwizardpage_timerevent_callback = nullptr;
    QWizardPage_ChildEvent_Callback qwizardpage_childevent_callback = nullptr;
    QWizardPage_CustomEvent_Callback qwizardpage_customevent_callback = nullptr;
    QWizardPage_ConnectNotify_Callback qwizardpage_connectnotify_callback = nullptr;
    QWizardPage_DisconnectNotify_Callback qwizardpage_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QWizardPage {
        using QWizardPage::actionEvent;
        using QWizardPage::changeEvent;
        using QWizardPage::childEvent;
        using QWizardPage::closeEvent;
        using QWizardPage::connectNotify;
        using QWizardPage::contextMenuEvent;
        using QWizardPage::customEvent;
        using QWizardPage::disconnectNotify;
        using QWizardPage::dragEnterEvent;
        using QWizardPage::dragLeaveEvent;
        using QWizardPage::dragMoveEvent;
        using QWizardPage::dropEvent;
        using QWizardPage::enterEvent;
        using QWizardPage::event;
        using QWizardPage::focusInEvent;
        using QWizardPage::focusNextPrevChild;
        using QWizardPage::focusOutEvent;
        using QWizardPage::hideEvent;
        using QWizardPage::initPainter;
        using QWizardPage::inputMethodEvent;
        using QWizardPage::keyPressEvent;
        using QWizardPage::keyReleaseEvent;
        using QWizardPage::leaveEvent;
        using QWizardPage::metric;
        using QWizardPage::mouseDoubleClickEvent;
        using QWizardPage::mouseMoveEvent;
        using QWizardPage::mousePressEvent;
        using QWizardPage::mouseReleaseEvent;
        using QWizardPage::moveEvent;
        using QWizardPage::nativeEvent;
        using QWizardPage::paintEvent;
        using QWizardPage::redirected;
        using QWizardPage::resizeEvent;
        using QWizardPage::sharedPainter;
        using QWizardPage::showEvent;
        using QWizardPage::tabletEvent;
        using QWizardPage::timerEvent;
        using QWizardPage::wheelEvent;
    };

    VirtualQWizardPage(QWidget* parent) : QWizardPage(parent) {};
    VirtualQWizardPage() : QWizardPage() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qwizardpage_metaobject_callback) {
            QMetaObject* callback_ret = qwizardpage_metaobject_callback(this);
            return callback_ret;
        }
        return QWizardPage::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qwizardpage_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qwizardpage_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QWizardPage::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwizardpage_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qwizardpage_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QWizardPage::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initializePage() override {
        if (qwizardpage_initializepage_callback) {
            qwizardpage_initializepage_callback(this);
            return;
        }
        QWizardPage::initializePage();
    }

    // Virtual method for C ABI access and custom callback
    virtual void cleanupPage() override {
        if (qwizardpage_cleanuppage_callback) {
            qwizardpage_cleanuppage_callback(this);
            return;
        }
        QWizardPage::cleanupPage();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool validatePage() override {
        if (qwizardpage_validatepage_callback) {
            bool callback_ret = qwizardpage_validatepage_callback(this);
            return callback_ret;
        }
        return QWizardPage::validatePage();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isComplete() const override {
        if (qwizardpage_iscomplete_callback) {
            bool callback_ret = qwizardpage_iscomplete_callback(this);
            return callback_ret;
        }
        return QWizardPage::isComplete();
    }

    // Virtual method for C ABI access and custom callback
    virtual int nextId() const override {
        if (qwizardpage_nextid_callback) {
            int callback_ret = qwizardpage_nextid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QWizardPage::nextId();
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qwizardpage_devtype_callback) {
            int callback_ret = qwizardpage_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QWizardPage::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qwizardpage_setvisible_callback) {
            bool cbval1 = visible;
            qwizardpage_setvisible_callback(this, cbval1);
            return;
        }
        QWizardPage::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qwizardpage_sizehint_callback) {
            QSize* callback_ret = qwizardpage_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QWizardPage::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qwizardpage_minimumsizehint_callback) {
            QSize* callback_ret = qwizardpage_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QWizardPage::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qwizardpage_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qwizardpage_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QWizardPage::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qwizardpage_hasheightforwidth_callback) {
            bool callback_ret = qwizardpage_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QWizardPage::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qwizardpage_paintengine_callback) {
            QPaintEngine* callback_ret = qwizardpage_paintengine_callback(this);
            return callback_ret;
        }
        return QWizardPage::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qwizardpage_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qwizardpage_event_callback(this, cbval1);
            return callback_ret;
        }
        return QWizardPage::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qwizardpage_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qwizardpage_mousepressevent_callback(this, cbval1);
            return;
        }
        QWizardPage::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qwizardpage_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qwizardpage_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QWizardPage::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qwizardpage_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qwizardpage_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QWizardPage::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qwizardpage_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qwizardpage_mousemoveevent_callback(this, cbval1);
            return;
        }
        QWizardPage::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qwizardpage_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qwizardpage_wheelevent_callback(this, cbval1);
            return;
        }
        QWizardPage::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qwizardpage_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qwizardpage_keypressevent_callback(this, cbval1);
            return;
        }
        QWizardPage::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qwizardpage_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qwizardpage_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QWizardPage::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qwizardpage_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qwizardpage_focusinevent_callback(this, cbval1);
            return;
        }
        QWizardPage::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qwizardpage_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qwizardpage_focusoutevent_callback(this, cbval1);
            return;
        }
        QWizardPage::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qwizardpage_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qwizardpage_enterevent_callback(this, cbval1);
            return;
        }
        QWizardPage::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qwizardpage_leaveevent_callback) {
            QEvent* cbval1 = event;
            qwizardpage_leaveevent_callback(this, cbval1);
            return;
        }
        QWizardPage::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qwizardpage_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qwizardpage_paintevent_callback(this, cbval1);
            return;
        }
        QWizardPage::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qwizardpage_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qwizardpage_moveevent_callback(this, cbval1);
            return;
        }
        QWizardPage::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qwizardpage_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qwizardpage_resizeevent_callback(this, cbval1);
            return;
        }
        QWizardPage::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qwizardpage_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qwizardpage_closeevent_callback(this, cbval1);
            return;
        }
        QWizardPage::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qwizardpage_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qwizardpage_contextmenuevent_callback(this, cbval1);
            return;
        }
        QWizardPage::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qwizardpage_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qwizardpage_tabletevent_callback(this, cbval1);
            return;
        }
        QWizardPage::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qwizardpage_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qwizardpage_actionevent_callback(this, cbval1);
            return;
        }
        QWizardPage::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qwizardpage_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qwizardpage_dragenterevent_callback(this, cbval1);
            return;
        }
        QWizardPage::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qwizardpage_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qwizardpage_dragmoveevent_callback(this, cbval1);
            return;
        }
        QWizardPage::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qwizardpage_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qwizardpage_dragleaveevent_callback(this, cbval1);
            return;
        }
        QWizardPage::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qwizardpage_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qwizardpage_dropevent_callback(this, cbval1);
            return;
        }
        QWizardPage::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qwizardpage_showevent_callback) {
            QShowEvent* cbval1 = event;
            qwizardpage_showevent_callback(this, cbval1);
            return;
        }
        QWizardPage::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qwizardpage_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qwizardpage_hideevent_callback(this, cbval1);
            return;
        }
        QWizardPage::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qwizardpage_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qwizardpage_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QWizardPage::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qwizardpage_changeevent_callback) {
            QEvent* cbval1 = param1;
            qwizardpage_changeevent_callback(this, cbval1);
            return;
        }
        QWizardPage::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qwizardpage_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qwizardpage_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QWizardPage::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qwizardpage_initpainter_callback) {
            QPainter* cbval1 = painter;
            qwizardpage_initpainter_callback(this, cbval1);
            return;
        }
        QWizardPage::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qwizardpage_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qwizardpage_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QWizardPage::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qwizardpage_sharedpainter_callback) {
            QPainter* callback_ret = qwizardpage_sharedpainter_callback(this);
            return callback_ret;
        }
        return QWizardPage::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qwizardpage_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qwizardpage_inputmethodevent_callback(this, cbval1);
            return;
        }
        QWizardPage::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qwizardpage_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qwizardpage_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QWizardPage::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qwizardpage_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qwizardpage_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QWizardPage::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qwizardpage_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qwizardpage_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QWizardPage::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwizardpage_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qwizardpage_timerevent_callback(this, cbval1);
            return;
        }
        QWizardPage::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwizardpage_childevent_callback) {
            QChildEvent* cbval1 = event;
            qwizardpage_childevent_callback(this, cbval1);
            return;
        }
        QWizardPage::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwizardpage_customevent_callback) {
            QEvent* cbval1 = event;
            qwizardpage_customevent_callback(this, cbval1);
            return;
        }
        QWizardPage::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwizardpage_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qwizardpage_connectnotify_callback(this, cbval1);
            return;
        }
        QWizardPage::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwizardpage_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qwizardpage_disconnectnotify_callback(this, cbval1);
            return;
        }
        QWizardPage::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QWizardPage_SuperEvent(QWizardPage* self, QEvent* event);
    friend void QWizardPage_SuperMousePressEvent(QWizardPage* self, QMouseEvent* event);
    friend void QWizardPage_SuperMouseReleaseEvent(QWizardPage* self, QMouseEvent* event);
    friend void QWizardPage_SuperMouseDoubleClickEvent(QWizardPage* self, QMouseEvent* event);
    friend void QWizardPage_SuperMouseMoveEvent(QWizardPage* self, QMouseEvent* event);
    friend void QWizardPage_SuperWheelEvent(QWizardPage* self, QWheelEvent* event);
    friend void QWizardPage_SuperKeyPressEvent(QWizardPage* self, QKeyEvent* event);
    friend void QWizardPage_SuperKeyReleaseEvent(QWizardPage* self, QKeyEvent* event);
    friend void QWizardPage_SuperFocusInEvent(QWizardPage* self, QFocusEvent* event);
    friend void QWizardPage_SuperFocusOutEvent(QWizardPage* self, QFocusEvent* event);
    friend void QWizardPage_SuperEnterEvent(QWizardPage* self, QEnterEvent* event);
    friend void QWizardPage_SuperLeaveEvent(QWizardPage* self, QEvent* event);
    friend void QWizardPage_SuperPaintEvent(QWizardPage* self, QPaintEvent* event);
    friend void QWizardPage_SuperMoveEvent(QWizardPage* self, QMoveEvent* event);
    friend void QWizardPage_SuperResizeEvent(QWizardPage* self, QResizeEvent* event);
    friend void QWizardPage_SuperCloseEvent(QWizardPage* self, QCloseEvent* event);
    friend void QWizardPage_SuperContextMenuEvent(QWizardPage* self, QContextMenuEvent* event);
    friend void QWizardPage_SuperTabletEvent(QWizardPage* self, QTabletEvent* event);
    friend void QWizardPage_SuperActionEvent(QWizardPage* self, QActionEvent* event);
    friend void QWizardPage_SuperDragEnterEvent(QWizardPage* self, QDragEnterEvent* event);
    friend void QWizardPage_SuperDragMoveEvent(QWizardPage* self, QDragMoveEvent* event);
    friend void QWizardPage_SuperDragLeaveEvent(QWizardPage* self, QDragLeaveEvent* event);
    friend void QWizardPage_SuperDropEvent(QWizardPage* self, QDropEvent* event);
    friend void QWizardPage_SuperShowEvent(QWizardPage* self, QShowEvent* event);
    friend void QWizardPage_SuperHideEvent(QWizardPage* self, QHideEvent* event);
    friend bool QWizardPage_SuperNativeEvent(QWizardPage* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QWizardPage_SuperChangeEvent(QWizardPage* self, QEvent* param1);
    friend int QWizardPage_SuperMetric(const QWizardPage* self, int param1);
    friend void QWizardPage_SuperInitPainter(const QWizardPage* self, QPainter* painter);
    friend QPaintDevice* QWizardPage_SuperRedirected(const QWizardPage* self, QPoint* offset);
    friend QPainter* QWizardPage_SuperSharedPainter(const QWizardPage* self);
    friend void QWizardPage_SuperInputMethodEvent(QWizardPage* self, QInputMethodEvent* param1);
    friend bool QWizardPage_SuperFocusNextPrevChild(QWizardPage* self, bool next);
    friend void QWizardPage_SuperTimerEvent(QWizardPage* self, QTimerEvent* event);
    friend void QWizardPage_SuperChildEvent(QWizardPage* self, QChildEvent* event);
    friend void QWizardPage_SuperCustomEvent(QWizardPage* self, QEvent* event);
    friend void QWizardPage_SuperConnectNotify(QWizardPage* self, const QMetaMethod* signal);
    friend void QWizardPage_SuperDisconnectNotify(QWizardPage* self, const QMetaMethod* signal);
};

#endif
