#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKDATETIMEEDIT_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKDATETIMEEDIT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KDateTimeEdit
class VirtualKDateTimeEdit final : public KDateTimeEdit {
  public:
    // Virtual class public types (including callbacks and access types)
    using KDateTimeEdit_MetaObject_Callback = QMetaObject* (*)(const KDateTimeEdit*);
    using KDateTimeEdit_Metacast_Callback = void* (*)(KDateTimeEdit*, const char*);
    using KDateTimeEdit_Metacall_Callback = int (*)(KDateTimeEdit*, int, int, void**);
    using KDateTimeEdit_EventFilter_Callback = bool (*)(KDateTimeEdit*, QObject*, QEvent*);
    using KDateTimeEdit_FocusInEvent_Callback = void (*)(KDateTimeEdit*, QFocusEvent*);
    using KDateTimeEdit_FocusOutEvent_Callback = void (*)(KDateTimeEdit*, QFocusEvent*);
    using KDateTimeEdit_ResizeEvent_Callback = void (*)(KDateTimeEdit*, QResizeEvent*);
    using KDateTimeEdit_AssignDateTime_Callback = void (*)(KDateTimeEdit*, QDateTime*);
    using KDateTimeEdit_AssignDate_Callback = void (*)(KDateTimeEdit*, QDate*);
    using KDateTimeEdit_AssignTime_Callback = void (*)(KDateTimeEdit*, QTime*);
    using KDateTimeEdit_DevType_Callback = int (*)(const KDateTimeEdit*);
    using KDateTimeEdit_SetVisible_Callback = void (*)(KDateTimeEdit*, bool);
    using KDateTimeEdit_SizeHint_Callback = QSize* (*)(const KDateTimeEdit*);
    using KDateTimeEdit_MinimumSizeHint_Callback = QSize* (*)(const KDateTimeEdit*);
    using KDateTimeEdit_HeightForWidth_Callback = int (*)(const KDateTimeEdit*, int);
    using KDateTimeEdit_HasHeightForWidth_Callback = bool (*)(const KDateTimeEdit*);
    using KDateTimeEdit_PaintEngine_Callback = QPaintEngine* (*)(const KDateTimeEdit*);
    using KDateTimeEdit_Event_Callback = bool (*)(KDateTimeEdit*, QEvent*);
    using KDateTimeEdit_MousePressEvent_Callback = void (*)(KDateTimeEdit*, QMouseEvent*);
    using KDateTimeEdit_MouseReleaseEvent_Callback = void (*)(KDateTimeEdit*, QMouseEvent*);
    using KDateTimeEdit_MouseDoubleClickEvent_Callback = void (*)(KDateTimeEdit*, QMouseEvent*);
    using KDateTimeEdit_MouseMoveEvent_Callback = void (*)(KDateTimeEdit*, QMouseEvent*);
    using KDateTimeEdit_WheelEvent_Callback = void (*)(KDateTimeEdit*, QWheelEvent*);
    using KDateTimeEdit_KeyPressEvent_Callback = void (*)(KDateTimeEdit*, QKeyEvent*);
    using KDateTimeEdit_KeyReleaseEvent_Callback = void (*)(KDateTimeEdit*, QKeyEvent*);
    using KDateTimeEdit_EnterEvent_Callback = void (*)(KDateTimeEdit*, QEnterEvent*);
    using KDateTimeEdit_LeaveEvent_Callback = void (*)(KDateTimeEdit*, QEvent*);
    using KDateTimeEdit_PaintEvent_Callback = void (*)(KDateTimeEdit*, QPaintEvent*);
    using KDateTimeEdit_MoveEvent_Callback = void (*)(KDateTimeEdit*, QMoveEvent*);
    using KDateTimeEdit_CloseEvent_Callback = void (*)(KDateTimeEdit*, QCloseEvent*);
    using KDateTimeEdit_ContextMenuEvent_Callback = void (*)(KDateTimeEdit*, QContextMenuEvent*);
    using KDateTimeEdit_TabletEvent_Callback = void (*)(KDateTimeEdit*, QTabletEvent*);
    using KDateTimeEdit_ActionEvent_Callback = void (*)(KDateTimeEdit*, QActionEvent*);
    using KDateTimeEdit_DragEnterEvent_Callback = void (*)(KDateTimeEdit*, QDragEnterEvent*);
    using KDateTimeEdit_DragMoveEvent_Callback = void (*)(KDateTimeEdit*, QDragMoveEvent*);
    using KDateTimeEdit_DragLeaveEvent_Callback = void (*)(KDateTimeEdit*, QDragLeaveEvent*);
    using KDateTimeEdit_DropEvent_Callback = void (*)(KDateTimeEdit*, QDropEvent*);
    using KDateTimeEdit_ShowEvent_Callback = void (*)(KDateTimeEdit*, QShowEvent*);
    using KDateTimeEdit_HideEvent_Callback = void (*)(KDateTimeEdit*, QHideEvent*);
    using KDateTimeEdit_NativeEvent_Callback = bool (*)(KDateTimeEdit*, libqt_string, void*, intptr_t*);
    using KDateTimeEdit_ChangeEvent_Callback = void (*)(KDateTimeEdit*, QEvent*);
    using KDateTimeEdit_Metric_Callback = int (*)(const KDateTimeEdit*, int);
    using KDateTimeEdit_InitPainter_Callback = void (*)(const KDateTimeEdit*, QPainter*);
    using KDateTimeEdit_Redirected_Callback = QPaintDevice* (*)(const KDateTimeEdit*, QPoint*);
    using KDateTimeEdit_SharedPainter_Callback = QPainter* (*)(const KDateTimeEdit*);
    using KDateTimeEdit_InputMethodEvent_Callback = void (*)(KDateTimeEdit*, QInputMethodEvent*);
    using KDateTimeEdit_InputMethodQuery_Callback = QVariant* (*)(const KDateTimeEdit*, int);
    using KDateTimeEdit_FocusNextPrevChild_Callback = bool (*)(KDateTimeEdit*, bool);
    using KDateTimeEdit_TimerEvent_Callback = void (*)(KDateTimeEdit*, QTimerEvent*);
    using KDateTimeEdit_ChildEvent_Callback = void (*)(KDateTimeEdit*, QChildEvent*);
    using KDateTimeEdit_CustomEvent_Callback = void (*)(KDateTimeEdit*, QEvent*);
    using KDateTimeEdit_ConnectNotify_Callback = void (*)(KDateTimeEdit*, QMetaMethod*);
    using KDateTimeEdit_DisconnectNotify_Callback = void (*)(KDateTimeEdit*, QMetaMethod*);
    using KDateTimeEdit::assignTimeZone;
    using KDateTimeEdit::create;
    using KDateTimeEdit::destroy;
    using KDateTimeEdit::focusNextChild;
    using KDateTimeEdit::focusPreviousChild;
    using KDateTimeEdit::getDecodedMetricF;
    using KDateTimeEdit::isSignalConnected;
    using KDateTimeEdit::receivers;
    using KDateTimeEdit::sender;
    using KDateTimeEdit::senderSignalIndex;
    using KDateTimeEdit::updateMicroFocus;

    // Instance callback storage
    KDateTimeEdit_MetaObject_Callback kdatetimeedit_metaobject_callback = nullptr;
    KDateTimeEdit_Metacast_Callback kdatetimeedit_metacast_callback = nullptr;
    KDateTimeEdit_Metacall_Callback kdatetimeedit_metacall_callback = nullptr;
    KDateTimeEdit_EventFilter_Callback kdatetimeedit_eventfilter_callback = nullptr;
    KDateTimeEdit_FocusInEvent_Callback kdatetimeedit_focusinevent_callback = nullptr;
    KDateTimeEdit_FocusOutEvent_Callback kdatetimeedit_focusoutevent_callback = nullptr;
    KDateTimeEdit_ResizeEvent_Callback kdatetimeedit_resizeevent_callback = nullptr;
    KDateTimeEdit_AssignDateTime_Callback kdatetimeedit_assigndatetime_callback = nullptr;
    KDateTimeEdit_AssignDate_Callback kdatetimeedit_assigndate_callback = nullptr;
    KDateTimeEdit_AssignTime_Callback kdatetimeedit_assigntime_callback = nullptr;
    KDateTimeEdit_DevType_Callback kdatetimeedit_devtype_callback = nullptr;
    KDateTimeEdit_SetVisible_Callback kdatetimeedit_setvisible_callback = nullptr;
    KDateTimeEdit_SizeHint_Callback kdatetimeedit_sizehint_callback = nullptr;
    KDateTimeEdit_MinimumSizeHint_Callback kdatetimeedit_minimumsizehint_callback = nullptr;
    KDateTimeEdit_HeightForWidth_Callback kdatetimeedit_heightforwidth_callback = nullptr;
    KDateTimeEdit_HasHeightForWidth_Callback kdatetimeedit_hasheightforwidth_callback = nullptr;
    KDateTimeEdit_PaintEngine_Callback kdatetimeedit_paintengine_callback = nullptr;
    KDateTimeEdit_Event_Callback kdatetimeedit_event_callback = nullptr;
    KDateTimeEdit_MousePressEvent_Callback kdatetimeedit_mousepressevent_callback = nullptr;
    KDateTimeEdit_MouseReleaseEvent_Callback kdatetimeedit_mousereleaseevent_callback = nullptr;
    KDateTimeEdit_MouseDoubleClickEvent_Callback kdatetimeedit_mousedoubleclickevent_callback = nullptr;
    KDateTimeEdit_MouseMoveEvent_Callback kdatetimeedit_mousemoveevent_callback = nullptr;
    KDateTimeEdit_WheelEvent_Callback kdatetimeedit_wheelevent_callback = nullptr;
    KDateTimeEdit_KeyPressEvent_Callback kdatetimeedit_keypressevent_callback = nullptr;
    KDateTimeEdit_KeyReleaseEvent_Callback kdatetimeedit_keyreleaseevent_callback = nullptr;
    KDateTimeEdit_EnterEvent_Callback kdatetimeedit_enterevent_callback = nullptr;
    KDateTimeEdit_LeaveEvent_Callback kdatetimeedit_leaveevent_callback = nullptr;
    KDateTimeEdit_PaintEvent_Callback kdatetimeedit_paintevent_callback = nullptr;
    KDateTimeEdit_MoveEvent_Callback kdatetimeedit_moveevent_callback = nullptr;
    KDateTimeEdit_CloseEvent_Callback kdatetimeedit_closeevent_callback = nullptr;
    KDateTimeEdit_ContextMenuEvent_Callback kdatetimeedit_contextmenuevent_callback = nullptr;
    KDateTimeEdit_TabletEvent_Callback kdatetimeedit_tabletevent_callback = nullptr;
    KDateTimeEdit_ActionEvent_Callback kdatetimeedit_actionevent_callback = nullptr;
    KDateTimeEdit_DragEnterEvent_Callback kdatetimeedit_dragenterevent_callback = nullptr;
    KDateTimeEdit_DragMoveEvent_Callback kdatetimeedit_dragmoveevent_callback = nullptr;
    KDateTimeEdit_DragLeaveEvent_Callback kdatetimeedit_dragleaveevent_callback = nullptr;
    KDateTimeEdit_DropEvent_Callback kdatetimeedit_dropevent_callback = nullptr;
    KDateTimeEdit_ShowEvent_Callback kdatetimeedit_showevent_callback = nullptr;
    KDateTimeEdit_HideEvent_Callback kdatetimeedit_hideevent_callback = nullptr;
    KDateTimeEdit_NativeEvent_Callback kdatetimeedit_nativeevent_callback = nullptr;
    KDateTimeEdit_ChangeEvent_Callback kdatetimeedit_changeevent_callback = nullptr;
    KDateTimeEdit_Metric_Callback kdatetimeedit_metric_callback = nullptr;
    KDateTimeEdit_InitPainter_Callback kdatetimeedit_initpainter_callback = nullptr;
    KDateTimeEdit_Redirected_Callback kdatetimeedit_redirected_callback = nullptr;
    KDateTimeEdit_SharedPainter_Callback kdatetimeedit_sharedpainter_callback = nullptr;
    KDateTimeEdit_InputMethodEvent_Callback kdatetimeedit_inputmethodevent_callback = nullptr;
    KDateTimeEdit_InputMethodQuery_Callback kdatetimeedit_inputmethodquery_callback = nullptr;
    KDateTimeEdit_FocusNextPrevChild_Callback kdatetimeedit_focusnextprevchild_callback = nullptr;
    KDateTimeEdit_TimerEvent_Callback kdatetimeedit_timerevent_callback = nullptr;
    KDateTimeEdit_ChildEvent_Callback kdatetimeedit_childevent_callback = nullptr;
    KDateTimeEdit_CustomEvent_Callback kdatetimeedit_customevent_callback = nullptr;
    KDateTimeEdit_ConnectNotify_Callback kdatetimeedit_connectnotify_callback = nullptr;
    KDateTimeEdit_DisconnectNotify_Callback kdatetimeedit_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KDateTimeEdit {
        using KDateTimeEdit::actionEvent;
        using KDateTimeEdit::assignDate;
        using KDateTimeEdit::assignDateTime;
        using KDateTimeEdit::assignTime;
        using KDateTimeEdit::changeEvent;
        using KDateTimeEdit::childEvent;
        using KDateTimeEdit::closeEvent;
        using KDateTimeEdit::connectNotify;
        using KDateTimeEdit::contextMenuEvent;
        using KDateTimeEdit::customEvent;
        using KDateTimeEdit::disconnectNotify;
        using KDateTimeEdit::dragEnterEvent;
        using KDateTimeEdit::dragLeaveEvent;
        using KDateTimeEdit::dragMoveEvent;
        using KDateTimeEdit::dropEvent;
        using KDateTimeEdit::enterEvent;
        using KDateTimeEdit::event;
        using KDateTimeEdit::eventFilter;
        using KDateTimeEdit::focusInEvent;
        using KDateTimeEdit::focusNextPrevChild;
        using KDateTimeEdit::focusOutEvent;
        using KDateTimeEdit::hideEvent;
        using KDateTimeEdit::initPainter;
        using KDateTimeEdit::inputMethodEvent;
        using KDateTimeEdit::keyPressEvent;
        using KDateTimeEdit::keyReleaseEvent;
        using KDateTimeEdit::leaveEvent;
        using KDateTimeEdit::metric;
        using KDateTimeEdit::mouseDoubleClickEvent;
        using KDateTimeEdit::mouseMoveEvent;
        using KDateTimeEdit::mousePressEvent;
        using KDateTimeEdit::mouseReleaseEvent;
        using KDateTimeEdit::moveEvent;
        using KDateTimeEdit::nativeEvent;
        using KDateTimeEdit::paintEvent;
        using KDateTimeEdit::redirected;
        using KDateTimeEdit::resizeEvent;
        using KDateTimeEdit::sharedPainter;
        using KDateTimeEdit::showEvent;
        using KDateTimeEdit::tabletEvent;
        using KDateTimeEdit::timerEvent;
        using KDateTimeEdit::wheelEvent;
    };

    VirtualKDateTimeEdit(QWidget* parent) : KDateTimeEdit(parent) {};
    VirtualKDateTimeEdit() : KDateTimeEdit() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kdatetimeedit_metaobject_callback) {
            QMetaObject* callback_ret = kdatetimeedit_metaobject_callback(this);
            return callback_ret;
        }
        return KDateTimeEdit::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kdatetimeedit_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kdatetimeedit_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KDateTimeEdit::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kdatetimeedit_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kdatetimeedit_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KDateTimeEdit::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (kdatetimeedit_eventfilter_callback) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;
            bool callback_ret = kdatetimeedit_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KDateTimeEdit::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kdatetimeedit_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kdatetimeedit_focusinevent_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kdatetimeedit_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kdatetimeedit_focusoutevent_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kdatetimeedit_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kdatetimeedit_resizeevent_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void assignDateTime(const QDateTime& dateTime) override {
        if (kdatetimeedit_assigndatetime_callback) {
            const QDateTime& dateTime_ret = dateTime;
            // Cast returned reference into pointer
            QDateTime* cbval1 = const_cast<QDateTime*>(&dateTime_ret);
            kdatetimeedit_assigndatetime_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::assignDateTime(dateTime);
    }

    // Virtual method for C ABI access and custom callback
    virtual void assignDate(const QDate& date) override {
        if (kdatetimeedit_assigndate_callback) {
            const QDate& date_ret = date;
            // Cast returned reference into pointer
            QDate* cbval1 = const_cast<QDate*>(&date_ret);
            kdatetimeedit_assigndate_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::assignDate(date);
    }

    // Virtual method for C ABI access and custom callback
    virtual void assignTime(const QTime& time) override {
        if (kdatetimeedit_assigntime_callback) {
            const QTime& time_ret = time;
            // Cast returned reference into pointer
            QTime* cbval1 = const_cast<QTime*>(&time_ret);
            kdatetimeedit_assigntime_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::assignTime(time);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kdatetimeedit_devtype_callback) {
            int callback_ret = kdatetimeedit_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KDateTimeEdit::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kdatetimeedit_setvisible_callback) {
            bool cbval1 = visible;
            kdatetimeedit_setvisible_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kdatetimeedit_sizehint_callback) {
            QSize* callback_ret = kdatetimeedit_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDateTimeEdit::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kdatetimeedit_minimumsizehint_callback) {
            QSize* callback_ret = kdatetimeedit_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDateTimeEdit::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kdatetimeedit_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kdatetimeedit_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KDateTimeEdit::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kdatetimeedit_hasheightforwidth_callback) {
            bool callback_ret = kdatetimeedit_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KDateTimeEdit::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kdatetimeedit_paintengine_callback) {
            QPaintEngine* callback_ret = kdatetimeedit_paintengine_callback(this);
            return callback_ret;
        }
        return KDateTimeEdit::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kdatetimeedit_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kdatetimeedit_event_callback(this, cbval1);
            return callback_ret;
        }
        return KDateTimeEdit::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kdatetimeedit_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kdatetimeedit_mousepressevent_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kdatetimeedit_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kdatetimeedit_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kdatetimeedit_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kdatetimeedit_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kdatetimeedit_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kdatetimeedit_mousemoveevent_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kdatetimeedit_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kdatetimeedit_wheelevent_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kdatetimeedit_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kdatetimeedit_keypressevent_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kdatetimeedit_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kdatetimeedit_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kdatetimeedit_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kdatetimeedit_enterevent_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kdatetimeedit_leaveevent_callback) {
            QEvent* cbval1 = event;
            kdatetimeedit_leaveevent_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kdatetimeedit_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kdatetimeedit_paintevent_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kdatetimeedit_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kdatetimeedit_moveevent_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kdatetimeedit_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kdatetimeedit_closeevent_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kdatetimeedit_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kdatetimeedit_contextmenuevent_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kdatetimeedit_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kdatetimeedit_tabletevent_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kdatetimeedit_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kdatetimeedit_actionevent_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kdatetimeedit_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kdatetimeedit_dragenterevent_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kdatetimeedit_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kdatetimeedit_dragmoveevent_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kdatetimeedit_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kdatetimeedit_dragleaveevent_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kdatetimeedit_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kdatetimeedit_dropevent_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kdatetimeedit_showevent_callback) {
            QShowEvent* cbval1 = event;
            kdatetimeedit_showevent_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kdatetimeedit_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kdatetimeedit_hideevent_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kdatetimeedit_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kdatetimeedit_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KDateTimeEdit::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kdatetimeedit_changeevent_callback) {
            QEvent* cbval1 = param1;
            kdatetimeedit_changeevent_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kdatetimeedit_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kdatetimeedit_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KDateTimeEdit::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kdatetimeedit_initpainter_callback) {
            QPainter* cbval1 = painter;
            kdatetimeedit_initpainter_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kdatetimeedit_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kdatetimeedit_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KDateTimeEdit::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kdatetimeedit_sharedpainter_callback) {
            QPainter* callback_ret = kdatetimeedit_sharedpainter_callback(this);
            return callback_ret;
        }
        return KDateTimeEdit::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kdatetimeedit_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kdatetimeedit_inputmethodevent_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kdatetimeedit_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kdatetimeedit_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDateTimeEdit::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kdatetimeedit_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kdatetimeedit_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KDateTimeEdit::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kdatetimeedit_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kdatetimeedit_timerevent_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kdatetimeedit_childevent_callback) {
            QChildEvent* cbval1 = event;
            kdatetimeedit_childevent_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kdatetimeedit_customevent_callback) {
            QEvent* cbval1 = event;
            kdatetimeedit_customevent_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kdatetimeedit_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kdatetimeedit_connectnotify_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kdatetimeedit_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kdatetimeedit_disconnectnotify_callback(this, cbval1);
            return;
        }
        KDateTimeEdit::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KDateTimeEdit_SuperEventFilter(KDateTimeEdit* self, QObject* object, QEvent* event);
    friend void KDateTimeEdit_SuperFocusInEvent(KDateTimeEdit* self, QFocusEvent* event);
    friend void KDateTimeEdit_SuperFocusOutEvent(KDateTimeEdit* self, QFocusEvent* event);
    friend void KDateTimeEdit_SuperResizeEvent(KDateTimeEdit* self, QResizeEvent* event);
    friend void KDateTimeEdit_SuperAssignDateTime(KDateTimeEdit* self, const QDateTime* dateTime);
    friend void KDateTimeEdit_SuperAssignDate(KDateTimeEdit* self, const QDate* date);
    friend void KDateTimeEdit_SuperAssignTime(KDateTimeEdit* self, const QTime* time);
    friend bool KDateTimeEdit_SuperEvent(KDateTimeEdit* self, QEvent* event);
    friend void KDateTimeEdit_SuperMousePressEvent(KDateTimeEdit* self, QMouseEvent* event);
    friend void KDateTimeEdit_SuperMouseReleaseEvent(KDateTimeEdit* self, QMouseEvent* event);
    friend void KDateTimeEdit_SuperMouseDoubleClickEvent(KDateTimeEdit* self, QMouseEvent* event);
    friend void KDateTimeEdit_SuperMouseMoveEvent(KDateTimeEdit* self, QMouseEvent* event);
    friend void KDateTimeEdit_SuperWheelEvent(KDateTimeEdit* self, QWheelEvent* event);
    friend void KDateTimeEdit_SuperKeyPressEvent(KDateTimeEdit* self, QKeyEvent* event);
    friend void KDateTimeEdit_SuperKeyReleaseEvent(KDateTimeEdit* self, QKeyEvent* event);
    friend void KDateTimeEdit_SuperEnterEvent(KDateTimeEdit* self, QEnterEvent* event);
    friend void KDateTimeEdit_SuperLeaveEvent(KDateTimeEdit* self, QEvent* event);
    friend void KDateTimeEdit_SuperPaintEvent(KDateTimeEdit* self, QPaintEvent* event);
    friend void KDateTimeEdit_SuperMoveEvent(KDateTimeEdit* self, QMoveEvent* event);
    friend void KDateTimeEdit_SuperCloseEvent(KDateTimeEdit* self, QCloseEvent* event);
    friend void KDateTimeEdit_SuperContextMenuEvent(KDateTimeEdit* self, QContextMenuEvent* event);
    friend void KDateTimeEdit_SuperTabletEvent(KDateTimeEdit* self, QTabletEvent* event);
    friend void KDateTimeEdit_SuperActionEvent(KDateTimeEdit* self, QActionEvent* event);
    friend void KDateTimeEdit_SuperDragEnterEvent(KDateTimeEdit* self, QDragEnterEvent* event);
    friend void KDateTimeEdit_SuperDragMoveEvent(KDateTimeEdit* self, QDragMoveEvent* event);
    friend void KDateTimeEdit_SuperDragLeaveEvent(KDateTimeEdit* self, QDragLeaveEvent* event);
    friend void KDateTimeEdit_SuperDropEvent(KDateTimeEdit* self, QDropEvent* event);
    friend void KDateTimeEdit_SuperShowEvent(KDateTimeEdit* self, QShowEvent* event);
    friend void KDateTimeEdit_SuperHideEvent(KDateTimeEdit* self, QHideEvent* event);
    friend bool KDateTimeEdit_SuperNativeEvent(KDateTimeEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KDateTimeEdit_SuperChangeEvent(KDateTimeEdit* self, QEvent* param1);
    friend int KDateTimeEdit_SuperMetric(const KDateTimeEdit* self, int param1);
    friend void KDateTimeEdit_SuperInitPainter(const KDateTimeEdit* self, QPainter* painter);
    friend QPaintDevice* KDateTimeEdit_SuperRedirected(const KDateTimeEdit* self, QPoint* offset);
    friend QPainter* KDateTimeEdit_SuperSharedPainter(const KDateTimeEdit* self);
    friend void KDateTimeEdit_SuperInputMethodEvent(KDateTimeEdit* self, QInputMethodEvent* param1);
    friend bool KDateTimeEdit_SuperFocusNextPrevChild(KDateTimeEdit* self, bool next);
    friend void KDateTimeEdit_SuperTimerEvent(KDateTimeEdit* self, QTimerEvent* event);
    friend void KDateTimeEdit_SuperChildEvent(KDateTimeEdit* self, QChildEvent* event);
    friend void KDateTimeEdit_SuperCustomEvent(KDateTimeEdit* self, QEvent* event);
    friend void KDateTimeEdit_SuperConnectNotify(KDateTimeEdit* self, const QMetaMethod* signal);
    friend void KDateTimeEdit_SuperDisconnectNotify(KDateTimeEdit* self, const QMetaMethod* signal);
};

#endif
