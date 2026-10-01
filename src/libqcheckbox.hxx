#pragma once
#ifndef LIBQCHECKBOX_HXX
#define LIBQCHECKBOX_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QCheckBox
class VirtualQCheckBox final : public QCheckBox {
  public:
    // Virtual class public types (including callbacks and access types)
    using QCheckBox_MetaObject_Callback = QMetaObject* (*)(const QCheckBox*);
    using QCheckBox_Metacast_Callback = void* (*)(QCheckBox*, const char*);
    using QCheckBox_Metacall_Callback = int (*)(QCheckBox*, int, int, void**);
    using QCheckBox_SizeHint_Callback = QSize* (*)(const QCheckBox*);
    using QCheckBox_MinimumSizeHint_Callback = QSize* (*)(const QCheckBox*);
    using QCheckBox_Event_Callback = bool (*)(QCheckBox*, QEvent*);
    using QCheckBox_HitButton_Callback = bool (*)(const QCheckBox*, QPoint*);
    using QCheckBox_CheckStateSet_Callback = void (*)(QCheckBox*);
    using QCheckBox_NextCheckState_Callback = void (*)(QCheckBox*);
    using QCheckBox_PaintEvent_Callback = void (*)(QCheckBox*, QPaintEvent*);
    using QCheckBox_MouseMoveEvent_Callback = void (*)(QCheckBox*, QMouseEvent*);
    using QCheckBox_InitStyleOption_Callback = void (*)(const QCheckBox*, QStyleOptionButton*);
    using QCheckBox_KeyPressEvent_Callback = void (*)(QCheckBox*, QKeyEvent*);
    using QCheckBox_KeyReleaseEvent_Callback = void (*)(QCheckBox*, QKeyEvent*);
    using QCheckBox_MousePressEvent_Callback = void (*)(QCheckBox*, QMouseEvent*);
    using QCheckBox_MouseReleaseEvent_Callback = void (*)(QCheckBox*, QMouseEvent*);
    using QCheckBox_FocusInEvent_Callback = void (*)(QCheckBox*, QFocusEvent*);
    using QCheckBox_FocusOutEvent_Callback = void (*)(QCheckBox*, QFocusEvent*);
    using QCheckBox_ChangeEvent_Callback = void (*)(QCheckBox*, QEvent*);
    using QCheckBox_TimerEvent_Callback = void (*)(QCheckBox*, QTimerEvent*);
    using QCheckBox_DevType_Callback = int (*)(const QCheckBox*);
    using QCheckBox_SetVisible_Callback = void (*)(QCheckBox*, bool);
    using QCheckBox_HeightForWidth_Callback = int (*)(const QCheckBox*, int);
    using QCheckBox_HasHeightForWidth_Callback = bool (*)(const QCheckBox*);
    using QCheckBox_PaintEngine_Callback = QPaintEngine* (*)(const QCheckBox*);
    using QCheckBox_MouseDoubleClickEvent_Callback = void (*)(QCheckBox*, QMouseEvent*);
    using QCheckBox_WheelEvent_Callback = void (*)(QCheckBox*, QWheelEvent*);
    using QCheckBox_EnterEvent_Callback = void (*)(QCheckBox*, QEnterEvent*);
    using QCheckBox_LeaveEvent_Callback = void (*)(QCheckBox*, QEvent*);
    using QCheckBox_MoveEvent_Callback = void (*)(QCheckBox*, QMoveEvent*);
    using QCheckBox_ResizeEvent_Callback = void (*)(QCheckBox*, QResizeEvent*);
    using QCheckBox_CloseEvent_Callback = void (*)(QCheckBox*, QCloseEvent*);
    using QCheckBox_ContextMenuEvent_Callback = void (*)(QCheckBox*, QContextMenuEvent*);
    using QCheckBox_TabletEvent_Callback = void (*)(QCheckBox*, QTabletEvent*);
    using QCheckBox_ActionEvent_Callback = void (*)(QCheckBox*, QActionEvent*);
    using QCheckBox_DragEnterEvent_Callback = void (*)(QCheckBox*, QDragEnterEvent*);
    using QCheckBox_DragMoveEvent_Callback = void (*)(QCheckBox*, QDragMoveEvent*);
    using QCheckBox_DragLeaveEvent_Callback = void (*)(QCheckBox*, QDragLeaveEvent*);
    using QCheckBox_DropEvent_Callback = void (*)(QCheckBox*, QDropEvent*);
    using QCheckBox_ShowEvent_Callback = void (*)(QCheckBox*, QShowEvent*);
    using QCheckBox_HideEvent_Callback = void (*)(QCheckBox*, QHideEvent*);
    using QCheckBox_NativeEvent_Callback = bool (*)(QCheckBox*, libqt_string, void*, intptr_t*);
    using QCheckBox_Metric_Callback = int (*)(const QCheckBox*, int);
    using QCheckBox_InitPainter_Callback = void (*)(const QCheckBox*, QPainter*);
    using QCheckBox_Redirected_Callback = QPaintDevice* (*)(const QCheckBox*, QPoint*);
    using QCheckBox_SharedPainter_Callback = QPainter* (*)(const QCheckBox*);
    using QCheckBox_InputMethodEvent_Callback = void (*)(QCheckBox*, QInputMethodEvent*);
    using QCheckBox_InputMethodQuery_Callback = QVariant* (*)(const QCheckBox*, int);
    using QCheckBox_FocusNextPrevChild_Callback = bool (*)(QCheckBox*, bool);
    using QCheckBox_EventFilter_Callback = bool (*)(QCheckBox*, QObject*, QEvent*);
    using QCheckBox_ChildEvent_Callback = void (*)(QCheckBox*, QChildEvent*);
    using QCheckBox_CustomEvent_Callback = void (*)(QCheckBox*, QEvent*);
    using QCheckBox_ConnectNotify_Callback = void (*)(QCheckBox*, QMetaMethod*);
    using QCheckBox_DisconnectNotify_Callback = void (*)(QCheckBox*, QMetaMethod*);
    using QCheckBox::create;
    using QCheckBox::destroy;
    using QCheckBox::focusNextChild;
    using QCheckBox::focusPreviousChild;
    using QCheckBox::getDecodedMetricF;
    using QCheckBox::isSignalConnected;
    using QCheckBox::receivers;
    using QCheckBox::sender;
    using QCheckBox::senderSignalIndex;
    using QCheckBox::updateMicroFocus;

    // Instance callback storage
    QCheckBox_MetaObject_Callback qcheckbox_metaobject_callback = nullptr;
    QCheckBox_Metacast_Callback qcheckbox_metacast_callback = nullptr;
    QCheckBox_Metacall_Callback qcheckbox_metacall_callback = nullptr;
    QCheckBox_SizeHint_Callback qcheckbox_sizehint_callback = nullptr;
    QCheckBox_MinimumSizeHint_Callback qcheckbox_minimumsizehint_callback = nullptr;
    QCheckBox_Event_Callback qcheckbox_event_callback = nullptr;
    QCheckBox_HitButton_Callback qcheckbox_hitbutton_callback = nullptr;
    QCheckBox_CheckStateSet_Callback qcheckbox_checkstateset_callback = nullptr;
    QCheckBox_NextCheckState_Callback qcheckbox_nextcheckstate_callback = nullptr;
    QCheckBox_PaintEvent_Callback qcheckbox_paintevent_callback = nullptr;
    QCheckBox_MouseMoveEvent_Callback qcheckbox_mousemoveevent_callback = nullptr;
    QCheckBox_InitStyleOption_Callback qcheckbox_initstyleoption_callback = nullptr;
    QCheckBox_KeyPressEvent_Callback qcheckbox_keypressevent_callback = nullptr;
    QCheckBox_KeyReleaseEvent_Callback qcheckbox_keyreleaseevent_callback = nullptr;
    QCheckBox_MousePressEvent_Callback qcheckbox_mousepressevent_callback = nullptr;
    QCheckBox_MouseReleaseEvent_Callback qcheckbox_mousereleaseevent_callback = nullptr;
    QCheckBox_FocusInEvent_Callback qcheckbox_focusinevent_callback = nullptr;
    QCheckBox_FocusOutEvent_Callback qcheckbox_focusoutevent_callback = nullptr;
    QCheckBox_ChangeEvent_Callback qcheckbox_changeevent_callback = nullptr;
    QCheckBox_TimerEvent_Callback qcheckbox_timerevent_callback = nullptr;
    QCheckBox_DevType_Callback qcheckbox_devtype_callback = nullptr;
    QCheckBox_SetVisible_Callback qcheckbox_setvisible_callback = nullptr;
    QCheckBox_HeightForWidth_Callback qcheckbox_heightforwidth_callback = nullptr;
    QCheckBox_HasHeightForWidth_Callback qcheckbox_hasheightforwidth_callback = nullptr;
    QCheckBox_PaintEngine_Callback qcheckbox_paintengine_callback = nullptr;
    QCheckBox_MouseDoubleClickEvent_Callback qcheckbox_mousedoubleclickevent_callback = nullptr;
    QCheckBox_WheelEvent_Callback qcheckbox_wheelevent_callback = nullptr;
    QCheckBox_EnterEvent_Callback qcheckbox_enterevent_callback = nullptr;
    QCheckBox_LeaveEvent_Callback qcheckbox_leaveevent_callback = nullptr;
    QCheckBox_MoveEvent_Callback qcheckbox_moveevent_callback = nullptr;
    QCheckBox_ResizeEvent_Callback qcheckbox_resizeevent_callback = nullptr;
    QCheckBox_CloseEvent_Callback qcheckbox_closeevent_callback = nullptr;
    QCheckBox_ContextMenuEvent_Callback qcheckbox_contextmenuevent_callback = nullptr;
    QCheckBox_TabletEvent_Callback qcheckbox_tabletevent_callback = nullptr;
    QCheckBox_ActionEvent_Callback qcheckbox_actionevent_callback = nullptr;
    QCheckBox_DragEnterEvent_Callback qcheckbox_dragenterevent_callback = nullptr;
    QCheckBox_DragMoveEvent_Callback qcheckbox_dragmoveevent_callback = nullptr;
    QCheckBox_DragLeaveEvent_Callback qcheckbox_dragleaveevent_callback = nullptr;
    QCheckBox_DropEvent_Callback qcheckbox_dropevent_callback = nullptr;
    QCheckBox_ShowEvent_Callback qcheckbox_showevent_callback = nullptr;
    QCheckBox_HideEvent_Callback qcheckbox_hideevent_callback = nullptr;
    QCheckBox_NativeEvent_Callback qcheckbox_nativeevent_callback = nullptr;
    QCheckBox_Metric_Callback qcheckbox_metric_callback = nullptr;
    QCheckBox_InitPainter_Callback qcheckbox_initpainter_callback = nullptr;
    QCheckBox_Redirected_Callback qcheckbox_redirected_callback = nullptr;
    QCheckBox_SharedPainter_Callback qcheckbox_sharedpainter_callback = nullptr;
    QCheckBox_InputMethodEvent_Callback qcheckbox_inputmethodevent_callback = nullptr;
    QCheckBox_InputMethodQuery_Callback qcheckbox_inputmethodquery_callback = nullptr;
    QCheckBox_FocusNextPrevChild_Callback qcheckbox_focusnextprevchild_callback = nullptr;
    QCheckBox_EventFilter_Callback qcheckbox_eventfilter_callback = nullptr;
    QCheckBox_ChildEvent_Callback qcheckbox_childevent_callback = nullptr;
    QCheckBox_CustomEvent_Callback qcheckbox_customevent_callback = nullptr;
    QCheckBox_ConnectNotify_Callback qcheckbox_connectnotify_callback = nullptr;
    QCheckBox_DisconnectNotify_Callback qcheckbox_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QCheckBox {
        using QCheckBox::actionEvent;
        using QCheckBox::changeEvent;
        using QCheckBox::checkStateSet;
        using QCheckBox::childEvent;
        using QCheckBox::closeEvent;
        using QCheckBox::connectNotify;
        using QCheckBox::contextMenuEvent;
        using QCheckBox::customEvent;
        using QCheckBox::disconnectNotify;
        using QCheckBox::dragEnterEvent;
        using QCheckBox::dragLeaveEvent;
        using QCheckBox::dragMoveEvent;
        using QCheckBox::dropEvent;
        using QCheckBox::enterEvent;
        using QCheckBox::event;
        using QCheckBox::focusInEvent;
        using QCheckBox::focusNextPrevChild;
        using QCheckBox::focusOutEvent;
        using QCheckBox::hideEvent;
        using QCheckBox::hitButton;
        using QCheckBox::initPainter;
        using QCheckBox::initStyleOption;
        using QCheckBox::inputMethodEvent;
        using QCheckBox::keyPressEvent;
        using QCheckBox::keyReleaseEvent;
        using QCheckBox::leaveEvent;
        using QCheckBox::metric;
        using QCheckBox::mouseDoubleClickEvent;
        using QCheckBox::mouseMoveEvent;
        using QCheckBox::mousePressEvent;
        using QCheckBox::mouseReleaseEvent;
        using QCheckBox::moveEvent;
        using QCheckBox::nativeEvent;
        using QCheckBox::nextCheckState;
        using QCheckBox::paintEvent;
        using QCheckBox::redirected;
        using QCheckBox::resizeEvent;
        using QCheckBox::sharedPainter;
        using QCheckBox::showEvent;
        using QCheckBox::tabletEvent;
        using QCheckBox::timerEvent;
        using QCheckBox::wheelEvent;
    };

    VirtualQCheckBox(QWidget* parent) : QCheckBox(parent) {};
    VirtualQCheckBox() : QCheckBox() {};
    VirtualQCheckBox(const QString& text) : QCheckBox(text) {};
    VirtualQCheckBox(const QString& text, QWidget* parent) : QCheckBox(text, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qcheckbox_metaobject_callback) {
            QMetaObject* callback_ret = qcheckbox_metaobject_callback(this);
            return callback_ret;
        }
        return QCheckBox::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qcheckbox_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qcheckbox_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QCheckBox::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcheckbox_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qcheckbox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QCheckBox::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qcheckbox_sizehint_callback) {
            QSize* callback_ret = qcheckbox_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QCheckBox::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qcheckbox_minimumsizehint_callback) {
            QSize* callback_ret = qcheckbox_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QCheckBox::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qcheckbox_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qcheckbox_event_callback(this, cbval1);
            return callback_ret;
        }
        return QCheckBox::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hitButton(const QPoint& pos) const override {
        if (qcheckbox_hitbutton_callback) {
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&pos_ret);
            bool callback_ret = qcheckbox_hitbutton_callback(this, cbval1);
            return callback_ret;
        }
        return QCheckBox::hitButton(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkStateSet() override {
        if (qcheckbox_checkstateset_callback) {
            qcheckbox_checkstateset_callback(this);
            return;
        }
        QCheckBox::checkStateSet();
    }

    // Virtual method for C ABI access and custom callback
    virtual void nextCheckState() override {
        if (qcheckbox_nextcheckstate_callback) {
            qcheckbox_nextcheckstate_callback(this);
            return;
        }
        QCheckBox::nextCheckState();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qcheckbox_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            qcheckbox_paintevent_callback(this, cbval1);
            return;
        }
        QCheckBox::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qcheckbox_mousemoveevent_callback) {
            QMouseEvent* cbval1 = param1;
            qcheckbox_mousemoveevent_callback(this, cbval1);
            return;
        }
        QCheckBox::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionButton* option) const override {
        if (qcheckbox_initstyleoption_callback) {
            QStyleOptionButton* cbval1 = option;
            qcheckbox_initstyleoption_callback(this, cbval1);
            return;
        }
        QCheckBox::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (qcheckbox_keypressevent_callback) {
            QKeyEvent* cbval1 = e;
            qcheckbox_keypressevent_callback(this, cbval1);
            return;
        }
        QCheckBox::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (qcheckbox_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            qcheckbox_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QCheckBox::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (qcheckbox_mousepressevent_callback) {
            QMouseEvent* cbval1 = e;
            qcheckbox_mousepressevent_callback(this, cbval1);
            return;
        }
        QCheckBox::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qcheckbox_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            qcheckbox_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QCheckBox::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (qcheckbox_focusinevent_callback) {
            QFocusEvent* cbval1 = e;
            qcheckbox_focusinevent_callback(this, cbval1);
            return;
        }
        QCheckBox::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (qcheckbox_focusoutevent_callback) {
            QFocusEvent* cbval1 = e;
            qcheckbox_focusoutevent_callback(this, cbval1);
            return;
        }
        QCheckBox::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qcheckbox_changeevent_callback) {
            QEvent* cbval1 = e;
            qcheckbox_changeevent_callback(this, cbval1);
            return;
        }
        QCheckBox::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (qcheckbox_timerevent_callback) {
            QTimerEvent* cbval1 = e;
            qcheckbox_timerevent_callback(this, cbval1);
            return;
        }
        QCheckBox::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qcheckbox_devtype_callback) {
            int callback_ret = qcheckbox_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QCheckBox::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qcheckbox_setvisible_callback) {
            bool cbval1 = visible;
            qcheckbox_setvisible_callback(this, cbval1);
            return;
        }
        QCheckBox::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qcheckbox_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qcheckbox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QCheckBox::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qcheckbox_hasheightforwidth_callback) {
            bool callback_ret = qcheckbox_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QCheckBox::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qcheckbox_paintengine_callback) {
            QPaintEngine* callback_ret = qcheckbox_paintengine_callback(this);
            return callback_ret;
        }
        return QCheckBox::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qcheckbox_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qcheckbox_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QCheckBox::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qcheckbox_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qcheckbox_wheelevent_callback(this, cbval1);
            return;
        }
        QCheckBox::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qcheckbox_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qcheckbox_enterevent_callback(this, cbval1);
            return;
        }
        QCheckBox::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qcheckbox_leaveevent_callback) {
            QEvent* cbval1 = event;
            qcheckbox_leaveevent_callback(this, cbval1);
            return;
        }
        QCheckBox::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qcheckbox_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qcheckbox_moveevent_callback(this, cbval1);
            return;
        }
        QCheckBox::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qcheckbox_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qcheckbox_resizeevent_callback(this, cbval1);
            return;
        }
        QCheckBox::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qcheckbox_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qcheckbox_closeevent_callback(this, cbval1);
            return;
        }
        QCheckBox::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qcheckbox_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qcheckbox_contextmenuevent_callback(this, cbval1);
            return;
        }
        QCheckBox::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qcheckbox_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qcheckbox_tabletevent_callback(this, cbval1);
            return;
        }
        QCheckBox::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qcheckbox_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qcheckbox_actionevent_callback(this, cbval1);
            return;
        }
        QCheckBox::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qcheckbox_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qcheckbox_dragenterevent_callback(this, cbval1);
            return;
        }
        QCheckBox::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qcheckbox_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qcheckbox_dragmoveevent_callback(this, cbval1);
            return;
        }
        QCheckBox::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qcheckbox_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qcheckbox_dragleaveevent_callback(this, cbval1);
            return;
        }
        QCheckBox::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qcheckbox_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qcheckbox_dropevent_callback(this, cbval1);
            return;
        }
        QCheckBox::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qcheckbox_showevent_callback) {
            QShowEvent* cbval1 = event;
            qcheckbox_showevent_callback(this, cbval1);
            return;
        }
        QCheckBox::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qcheckbox_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qcheckbox_hideevent_callback(this, cbval1);
            return;
        }
        QCheckBox::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qcheckbox_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qcheckbox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QCheckBox::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qcheckbox_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qcheckbox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QCheckBox::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qcheckbox_initpainter_callback) {
            QPainter* cbval1 = painter;
            qcheckbox_initpainter_callback(this, cbval1);
            return;
        }
        QCheckBox::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qcheckbox_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qcheckbox_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QCheckBox::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qcheckbox_sharedpainter_callback) {
            QPainter* callback_ret = qcheckbox_sharedpainter_callback(this);
            return callback_ret;
        }
        return QCheckBox::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qcheckbox_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qcheckbox_inputmethodevent_callback(this, cbval1);
            return;
        }
        QCheckBox::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qcheckbox_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qcheckbox_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QCheckBox::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qcheckbox_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qcheckbox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QCheckBox::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcheckbox_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qcheckbox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QCheckBox::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcheckbox_childevent_callback) {
            QChildEvent* cbval1 = event;
            qcheckbox_childevent_callback(this, cbval1);
            return;
        }
        QCheckBox::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcheckbox_customevent_callback) {
            QEvent* cbval1 = event;
            qcheckbox_customevent_callback(this, cbval1);
            return;
        }
        QCheckBox::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcheckbox_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcheckbox_connectnotify_callback(this, cbval1);
            return;
        }
        QCheckBox::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcheckbox_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcheckbox_disconnectnotify_callback(this, cbval1);
            return;
        }
        QCheckBox::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QCheckBox_SuperEvent(QCheckBox* self, QEvent* e);
    friend bool QCheckBox_SuperHitButton(const QCheckBox* self, const QPoint* pos);
    friend void QCheckBox_SuperCheckStateSet(QCheckBox* self);
    friend void QCheckBox_SuperNextCheckState(QCheckBox* self);
    friend void QCheckBox_SuperPaintEvent(QCheckBox* self, QPaintEvent* param1);
    friend void QCheckBox_SuperMouseMoveEvent(QCheckBox* self, QMouseEvent* param1);
    friend void QCheckBox_SuperInitStyleOption(const QCheckBox* self, QStyleOptionButton* option);
    friend void QCheckBox_SuperKeyPressEvent(QCheckBox* self, QKeyEvent* e);
    friend void QCheckBox_SuperKeyReleaseEvent(QCheckBox* self, QKeyEvent* e);
    friend void QCheckBox_SuperMousePressEvent(QCheckBox* self, QMouseEvent* e);
    friend void QCheckBox_SuperMouseReleaseEvent(QCheckBox* self, QMouseEvent* e);
    friend void QCheckBox_SuperFocusInEvent(QCheckBox* self, QFocusEvent* e);
    friend void QCheckBox_SuperFocusOutEvent(QCheckBox* self, QFocusEvent* e);
    friend void QCheckBox_SuperChangeEvent(QCheckBox* self, QEvent* e);
    friend void QCheckBox_SuperTimerEvent(QCheckBox* self, QTimerEvent* e);
    friend void QCheckBox_SuperMouseDoubleClickEvent(QCheckBox* self, QMouseEvent* event);
    friend void QCheckBox_SuperWheelEvent(QCheckBox* self, QWheelEvent* event);
    friend void QCheckBox_SuperEnterEvent(QCheckBox* self, QEnterEvent* event);
    friend void QCheckBox_SuperLeaveEvent(QCheckBox* self, QEvent* event);
    friend void QCheckBox_SuperMoveEvent(QCheckBox* self, QMoveEvent* event);
    friend void QCheckBox_SuperResizeEvent(QCheckBox* self, QResizeEvent* event);
    friend void QCheckBox_SuperCloseEvent(QCheckBox* self, QCloseEvent* event);
    friend void QCheckBox_SuperContextMenuEvent(QCheckBox* self, QContextMenuEvent* event);
    friend void QCheckBox_SuperTabletEvent(QCheckBox* self, QTabletEvent* event);
    friend void QCheckBox_SuperActionEvent(QCheckBox* self, QActionEvent* event);
    friend void QCheckBox_SuperDragEnterEvent(QCheckBox* self, QDragEnterEvent* event);
    friend void QCheckBox_SuperDragMoveEvent(QCheckBox* self, QDragMoveEvent* event);
    friend void QCheckBox_SuperDragLeaveEvent(QCheckBox* self, QDragLeaveEvent* event);
    friend void QCheckBox_SuperDropEvent(QCheckBox* self, QDropEvent* event);
    friend void QCheckBox_SuperShowEvent(QCheckBox* self, QShowEvent* event);
    friend void QCheckBox_SuperHideEvent(QCheckBox* self, QHideEvent* event);
    friend bool QCheckBox_SuperNativeEvent(QCheckBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QCheckBox_SuperMetric(const QCheckBox* self, int param1);
    friend void QCheckBox_SuperInitPainter(const QCheckBox* self, QPainter* painter);
    friend QPaintDevice* QCheckBox_SuperRedirected(const QCheckBox* self, QPoint* offset);
    friend QPainter* QCheckBox_SuperSharedPainter(const QCheckBox* self);
    friend void QCheckBox_SuperInputMethodEvent(QCheckBox* self, QInputMethodEvent* param1);
    friend bool QCheckBox_SuperFocusNextPrevChild(QCheckBox* self, bool next);
    friend void QCheckBox_SuperChildEvent(QCheckBox* self, QChildEvent* event);
    friend void QCheckBox_SuperCustomEvent(QCheckBox* self, QEvent* event);
    friend void QCheckBox_SuperConnectNotify(QCheckBox* self, const QMetaMethod* signal);
    friend void QCheckBox_SuperDisconnectNotify(QCheckBox* self, const QMetaMethod* signal);
};

#endif
