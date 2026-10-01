#pragma once
#ifndef LIBQLABEL_HXX
#define LIBQLABEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QLabel
class VirtualQLabel final : public QLabel {
  public:
    // Virtual class public types (including callbacks and access types)
    using QLabel_MetaObject_Callback = QMetaObject* (*)(const QLabel*);
    using QLabel_Metacast_Callback = void* (*)(QLabel*, const char*);
    using QLabel_Metacall_Callback = int (*)(QLabel*, int, int, void**);
    using QLabel_SizeHint_Callback = QSize* (*)(const QLabel*);
    using QLabel_MinimumSizeHint_Callback = QSize* (*)(const QLabel*);
    using QLabel_HeightForWidth_Callback = int (*)(const QLabel*, int);
    using QLabel_Event_Callback = bool (*)(QLabel*, QEvent*);
    using QLabel_KeyPressEvent_Callback = void (*)(QLabel*, QKeyEvent*);
    using QLabel_PaintEvent_Callback = void (*)(QLabel*, QPaintEvent*);
    using QLabel_ChangeEvent_Callback = void (*)(QLabel*, QEvent*);
    using QLabel_MousePressEvent_Callback = void (*)(QLabel*, QMouseEvent*);
    using QLabel_MouseMoveEvent_Callback = void (*)(QLabel*, QMouseEvent*);
    using QLabel_MouseReleaseEvent_Callback = void (*)(QLabel*, QMouseEvent*);
    using QLabel_ContextMenuEvent_Callback = void (*)(QLabel*, QContextMenuEvent*);
    using QLabel_FocusInEvent_Callback = void (*)(QLabel*, QFocusEvent*);
    using QLabel_FocusOutEvent_Callback = void (*)(QLabel*, QFocusEvent*);
    using QLabel_FocusNextPrevChild_Callback = bool (*)(QLabel*, bool);
    using QLabel_InitStyleOption_Callback = void (*)(const QLabel*, QStyleOptionFrame*);
    using QLabel_DevType_Callback = int (*)(const QLabel*);
    using QLabel_SetVisible_Callback = void (*)(QLabel*, bool);
    using QLabel_HasHeightForWidth_Callback = bool (*)(const QLabel*);
    using QLabel_PaintEngine_Callback = QPaintEngine* (*)(const QLabel*);
    using QLabel_MouseDoubleClickEvent_Callback = void (*)(QLabel*, QMouseEvent*);
    using QLabel_WheelEvent_Callback = void (*)(QLabel*, QWheelEvent*);
    using QLabel_KeyReleaseEvent_Callback = void (*)(QLabel*, QKeyEvent*);
    using QLabel_EnterEvent_Callback = void (*)(QLabel*, QEnterEvent*);
    using QLabel_LeaveEvent_Callback = void (*)(QLabel*, QEvent*);
    using QLabel_MoveEvent_Callback = void (*)(QLabel*, QMoveEvent*);
    using QLabel_ResizeEvent_Callback = void (*)(QLabel*, QResizeEvent*);
    using QLabel_CloseEvent_Callback = void (*)(QLabel*, QCloseEvent*);
    using QLabel_TabletEvent_Callback = void (*)(QLabel*, QTabletEvent*);
    using QLabel_ActionEvent_Callback = void (*)(QLabel*, QActionEvent*);
    using QLabel_DragEnterEvent_Callback = void (*)(QLabel*, QDragEnterEvent*);
    using QLabel_DragMoveEvent_Callback = void (*)(QLabel*, QDragMoveEvent*);
    using QLabel_DragLeaveEvent_Callback = void (*)(QLabel*, QDragLeaveEvent*);
    using QLabel_DropEvent_Callback = void (*)(QLabel*, QDropEvent*);
    using QLabel_ShowEvent_Callback = void (*)(QLabel*, QShowEvent*);
    using QLabel_HideEvent_Callback = void (*)(QLabel*, QHideEvent*);
    using QLabel_NativeEvent_Callback = bool (*)(QLabel*, libqt_string, void*, intptr_t*);
    using QLabel_Metric_Callback = int (*)(const QLabel*, int);
    using QLabel_InitPainter_Callback = void (*)(const QLabel*, QPainter*);
    using QLabel_Redirected_Callback = QPaintDevice* (*)(const QLabel*, QPoint*);
    using QLabel_SharedPainter_Callback = QPainter* (*)(const QLabel*);
    using QLabel_InputMethodEvent_Callback = void (*)(QLabel*, QInputMethodEvent*);
    using QLabel_InputMethodQuery_Callback = QVariant* (*)(const QLabel*, int);
    using QLabel_EventFilter_Callback = bool (*)(QLabel*, QObject*, QEvent*);
    using QLabel_TimerEvent_Callback = void (*)(QLabel*, QTimerEvent*);
    using QLabel_ChildEvent_Callback = void (*)(QLabel*, QChildEvent*);
    using QLabel_CustomEvent_Callback = void (*)(QLabel*, QEvent*);
    using QLabel_ConnectNotify_Callback = void (*)(QLabel*, QMetaMethod*);
    using QLabel_DisconnectNotify_Callback = void (*)(QLabel*, QMetaMethod*);
    using QLabel::create;
    using QLabel::destroy;
    using QLabel::drawFrame;
    using QLabel::focusNextChild;
    using QLabel::focusPreviousChild;
    using QLabel::getDecodedMetricF;
    using QLabel::isSignalConnected;
    using QLabel::receivers;
    using QLabel::sender;
    using QLabel::senderSignalIndex;
    using QLabel::updateMicroFocus;

    // Instance callback storage
    QLabel_MetaObject_Callback qlabel_metaobject_callback = nullptr;
    QLabel_Metacast_Callback qlabel_metacast_callback = nullptr;
    QLabel_Metacall_Callback qlabel_metacall_callback = nullptr;
    QLabel_SizeHint_Callback qlabel_sizehint_callback = nullptr;
    QLabel_MinimumSizeHint_Callback qlabel_minimumsizehint_callback = nullptr;
    QLabel_HeightForWidth_Callback qlabel_heightforwidth_callback = nullptr;
    QLabel_Event_Callback qlabel_event_callback = nullptr;
    QLabel_KeyPressEvent_Callback qlabel_keypressevent_callback = nullptr;
    QLabel_PaintEvent_Callback qlabel_paintevent_callback = nullptr;
    QLabel_ChangeEvent_Callback qlabel_changeevent_callback = nullptr;
    QLabel_MousePressEvent_Callback qlabel_mousepressevent_callback = nullptr;
    QLabel_MouseMoveEvent_Callback qlabel_mousemoveevent_callback = nullptr;
    QLabel_MouseReleaseEvent_Callback qlabel_mousereleaseevent_callback = nullptr;
    QLabel_ContextMenuEvent_Callback qlabel_contextmenuevent_callback = nullptr;
    QLabel_FocusInEvent_Callback qlabel_focusinevent_callback = nullptr;
    QLabel_FocusOutEvent_Callback qlabel_focusoutevent_callback = nullptr;
    QLabel_FocusNextPrevChild_Callback qlabel_focusnextprevchild_callback = nullptr;
    QLabel_InitStyleOption_Callback qlabel_initstyleoption_callback = nullptr;
    QLabel_DevType_Callback qlabel_devtype_callback = nullptr;
    QLabel_SetVisible_Callback qlabel_setvisible_callback = nullptr;
    QLabel_HasHeightForWidth_Callback qlabel_hasheightforwidth_callback = nullptr;
    QLabel_PaintEngine_Callback qlabel_paintengine_callback = nullptr;
    QLabel_MouseDoubleClickEvent_Callback qlabel_mousedoubleclickevent_callback = nullptr;
    QLabel_WheelEvent_Callback qlabel_wheelevent_callback = nullptr;
    QLabel_KeyReleaseEvent_Callback qlabel_keyreleaseevent_callback = nullptr;
    QLabel_EnterEvent_Callback qlabel_enterevent_callback = nullptr;
    QLabel_LeaveEvent_Callback qlabel_leaveevent_callback = nullptr;
    QLabel_MoveEvent_Callback qlabel_moveevent_callback = nullptr;
    QLabel_ResizeEvent_Callback qlabel_resizeevent_callback = nullptr;
    QLabel_CloseEvent_Callback qlabel_closeevent_callback = nullptr;
    QLabel_TabletEvent_Callback qlabel_tabletevent_callback = nullptr;
    QLabel_ActionEvent_Callback qlabel_actionevent_callback = nullptr;
    QLabel_DragEnterEvent_Callback qlabel_dragenterevent_callback = nullptr;
    QLabel_DragMoveEvent_Callback qlabel_dragmoveevent_callback = nullptr;
    QLabel_DragLeaveEvent_Callback qlabel_dragleaveevent_callback = nullptr;
    QLabel_DropEvent_Callback qlabel_dropevent_callback = nullptr;
    QLabel_ShowEvent_Callback qlabel_showevent_callback = nullptr;
    QLabel_HideEvent_Callback qlabel_hideevent_callback = nullptr;
    QLabel_NativeEvent_Callback qlabel_nativeevent_callback = nullptr;
    QLabel_Metric_Callback qlabel_metric_callback = nullptr;
    QLabel_InitPainter_Callback qlabel_initpainter_callback = nullptr;
    QLabel_Redirected_Callback qlabel_redirected_callback = nullptr;
    QLabel_SharedPainter_Callback qlabel_sharedpainter_callback = nullptr;
    QLabel_InputMethodEvent_Callback qlabel_inputmethodevent_callback = nullptr;
    QLabel_InputMethodQuery_Callback qlabel_inputmethodquery_callback = nullptr;
    QLabel_EventFilter_Callback qlabel_eventfilter_callback = nullptr;
    QLabel_TimerEvent_Callback qlabel_timerevent_callback = nullptr;
    QLabel_ChildEvent_Callback qlabel_childevent_callback = nullptr;
    QLabel_CustomEvent_Callback qlabel_customevent_callback = nullptr;
    QLabel_ConnectNotify_Callback qlabel_connectnotify_callback = nullptr;
    QLabel_DisconnectNotify_Callback qlabel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QLabel {
        using QLabel::actionEvent;
        using QLabel::changeEvent;
        using QLabel::childEvent;
        using QLabel::closeEvent;
        using QLabel::connectNotify;
        using QLabel::contextMenuEvent;
        using QLabel::customEvent;
        using QLabel::disconnectNotify;
        using QLabel::dragEnterEvent;
        using QLabel::dragLeaveEvent;
        using QLabel::dragMoveEvent;
        using QLabel::dropEvent;
        using QLabel::enterEvent;
        using QLabel::event;
        using QLabel::focusInEvent;
        using QLabel::focusNextPrevChild;
        using QLabel::focusOutEvent;
        using QLabel::hideEvent;
        using QLabel::initPainter;
        using QLabel::initStyleOption;
        using QLabel::inputMethodEvent;
        using QLabel::keyPressEvent;
        using QLabel::keyReleaseEvent;
        using QLabel::leaveEvent;
        using QLabel::metric;
        using QLabel::mouseDoubleClickEvent;
        using QLabel::mouseMoveEvent;
        using QLabel::mousePressEvent;
        using QLabel::mouseReleaseEvent;
        using QLabel::moveEvent;
        using QLabel::nativeEvent;
        using QLabel::paintEvent;
        using QLabel::redirected;
        using QLabel::resizeEvent;
        using QLabel::sharedPainter;
        using QLabel::showEvent;
        using QLabel::tabletEvent;
        using QLabel::timerEvent;
        using QLabel::wheelEvent;
    };

    VirtualQLabel(QWidget* parent) : QLabel(parent) {};
    VirtualQLabel() : QLabel() {};
    VirtualQLabel(const QString& text) : QLabel(text) {};
    VirtualQLabel(QWidget* parent, Qt::WindowFlags f) : QLabel(parent, f) {};
    VirtualQLabel(const QString& text, QWidget* parent) : QLabel(text, parent) {};
    VirtualQLabel(const QString& text, QWidget* parent, Qt::WindowFlags f) : QLabel(text, parent, f) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qlabel_metaobject_callback) {
            QMetaObject* callback_ret = qlabel_metaobject_callback(this);
            return callback_ret;
        }
        return QLabel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qlabel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qlabel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QLabel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qlabel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qlabel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QLabel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qlabel_sizehint_callback) {
            QSize* callback_ret = qlabel_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QLabel::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qlabel_minimumsizehint_callback) {
            QSize* callback_ret = qlabel_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QLabel::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qlabel_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qlabel_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QLabel::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qlabel_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qlabel_event_callback(this, cbval1);
            return callback_ret;
        }
        return QLabel::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* ev) override {
        if (qlabel_keypressevent_callback) {
            QKeyEvent* cbval1 = ev;
            qlabel_keypressevent_callback(this, cbval1);
            return;
        }
        QLabel::keyPressEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qlabel_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            qlabel_paintevent_callback(this, cbval1);
            return;
        }
        QLabel::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qlabel_changeevent_callback) {
            QEvent* cbval1 = param1;
            qlabel_changeevent_callback(this, cbval1);
            return;
        }
        QLabel::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* ev) override {
        if (qlabel_mousepressevent_callback) {
            QMouseEvent* cbval1 = ev;
            qlabel_mousepressevent_callback(this, cbval1);
            return;
        }
        QLabel::mousePressEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* ev) override {
        if (qlabel_mousemoveevent_callback) {
            QMouseEvent* cbval1 = ev;
            qlabel_mousemoveevent_callback(this, cbval1);
            return;
        }
        QLabel::mouseMoveEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* ev) override {
        if (qlabel_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = ev;
            qlabel_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QLabel::mouseReleaseEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* ev) override {
        if (qlabel_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = ev;
            qlabel_contextmenuevent_callback(this, cbval1);
            return;
        }
        QLabel::contextMenuEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* ev) override {
        if (qlabel_focusinevent_callback) {
            QFocusEvent* cbval1 = ev;
            qlabel_focusinevent_callback(this, cbval1);
            return;
        }
        QLabel::focusInEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* ev) override {
        if (qlabel_focusoutevent_callback) {
            QFocusEvent* cbval1 = ev;
            qlabel_focusoutevent_callback(this, cbval1);
            return;
        }
        QLabel::focusOutEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qlabel_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qlabel_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QLabel::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qlabel_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            qlabel_initstyleoption_callback(this, cbval1);
            return;
        }
        QLabel::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qlabel_devtype_callback) {
            int callback_ret = qlabel_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QLabel::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qlabel_setvisible_callback) {
            bool cbval1 = visible;
            qlabel_setvisible_callback(this, cbval1);
            return;
        }
        QLabel::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qlabel_hasheightforwidth_callback) {
            bool callback_ret = qlabel_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QLabel::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qlabel_paintengine_callback) {
            QPaintEngine* callback_ret = qlabel_paintengine_callback(this);
            return callback_ret;
        }
        return QLabel::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qlabel_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qlabel_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QLabel::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qlabel_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qlabel_wheelevent_callback(this, cbval1);
            return;
        }
        QLabel::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qlabel_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qlabel_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QLabel::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qlabel_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qlabel_enterevent_callback(this, cbval1);
            return;
        }
        QLabel::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qlabel_leaveevent_callback) {
            QEvent* cbval1 = event;
            qlabel_leaveevent_callback(this, cbval1);
            return;
        }
        QLabel::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qlabel_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qlabel_moveevent_callback(this, cbval1);
            return;
        }
        QLabel::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qlabel_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qlabel_resizeevent_callback(this, cbval1);
            return;
        }
        QLabel::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qlabel_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qlabel_closeevent_callback(this, cbval1);
            return;
        }
        QLabel::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qlabel_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qlabel_tabletevent_callback(this, cbval1);
            return;
        }
        QLabel::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qlabel_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qlabel_actionevent_callback(this, cbval1);
            return;
        }
        QLabel::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qlabel_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qlabel_dragenterevent_callback(this, cbval1);
            return;
        }
        QLabel::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qlabel_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qlabel_dragmoveevent_callback(this, cbval1);
            return;
        }
        QLabel::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qlabel_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qlabel_dragleaveevent_callback(this, cbval1);
            return;
        }
        QLabel::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qlabel_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qlabel_dropevent_callback(this, cbval1);
            return;
        }
        QLabel::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qlabel_showevent_callback) {
            QShowEvent* cbval1 = event;
            qlabel_showevent_callback(this, cbval1);
            return;
        }
        QLabel::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qlabel_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qlabel_hideevent_callback(this, cbval1);
            return;
        }
        QLabel::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qlabel_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qlabel_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QLabel::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qlabel_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qlabel_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QLabel::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qlabel_initpainter_callback) {
            QPainter* cbval1 = painter;
            qlabel_initpainter_callback(this, cbval1);
            return;
        }
        QLabel::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qlabel_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qlabel_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QLabel::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qlabel_sharedpainter_callback) {
            QPainter* callback_ret = qlabel_sharedpainter_callback(this);
            return callback_ret;
        }
        return QLabel::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qlabel_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qlabel_inputmethodevent_callback(this, cbval1);
            return;
        }
        QLabel::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qlabel_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qlabel_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QLabel::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qlabel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qlabel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QLabel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qlabel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qlabel_timerevent_callback(this, cbval1);
            return;
        }
        QLabel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qlabel_childevent_callback) {
            QChildEvent* cbval1 = event;
            qlabel_childevent_callback(this, cbval1);
            return;
        }
        QLabel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qlabel_customevent_callback) {
            QEvent* cbval1 = event;
            qlabel_customevent_callback(this, cbval1);
            return;
        }
        QLabel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qlabel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qlabel_connectnotify_callback(this, cbval1);
            return;
        }
        QLabel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qlabel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qlabel_disconnectnotify_callback(this, cbval1);
            return;
        }
        QLabel::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QLabel_SuperEvent(QLabel* self, QEvent* e);
    friend void QLabel_SuperKeyPressEvent(QLabel* self, QKeyEvent* ev);
    friend void QLabel_SuperPaintEvent(QLabel* self, QPaintEvent* param1);
    friend void QLabel_SuperChangeEvent(QLabel* self, QEvent* param1);
    friend void QLabel_SuperMousePressEvent(QLabel* self, QMouseEvent* ev);
    friend void QLabel_SuperMouseMoveEvent(QLabel* self, QMouseEvent* ev);
    friend void QLabel_SuperMouseReleaseEvent(QLabel* self, QMouseEvent* ev);
    friend void QLabel_SuperContextMenuEvent(QLabel* self, QContextMenuEvent* ev);
    friend void QLabel_SuperFocusInEvent(QLabel* self, QFocusEvent* ev);
    friend void QLabel_SuperFocusOutEvent(QLabel* self, QFocusEvent* ev);
    friend bool QLabel_SuperFocusNextPrevChild(QLabel* self, bool next);
    friend void QLabel_SuperInitStyleOption(const QLabel* self, QStyleOptionFrame* option);
    friend void QLabel_SuperMouseDoubleClickEvent(QLabel* self, QMouseEvent* event);
    friend void QLabel_SuperWheelEvent(QLabel* self, QWheelEvent* event);
    friend void QLabel_SuperKeyReleaseEvent(QLabel* self, QKeyEvent* event);
    friend void QLabel_SuperEnterEvent(QLabel* self, QEnterEvent* event);
    friend void QLabel_SuperLeaveEvent(QLabel* self, QEvent* event);
    friend void QLabel_SuperMoveEvent(QLabel* self, QMoveEvent* event);
    friend void QLabel_SuperResizeEvent(QLabel* self, QResizeEvent* event);
    friend void QLabel_SuperCloseEvent(QLabel* self, QCloseEvent* event);
    friend void QLabel_SuperTabletEvent(QLabel* self, QTabletEvent* event);
    friend void QLabel_SuperActionEvent(QLabel* self, QActionEvent* event);
    friend void QLabel_SuperDragEnterEvent(QLabel* self, QDragEnterEvent* event);
    friend void QLabel_SuperDragMoveEvent(QLabel* self, QDragMoveEvent* event);
    friend void QLabel_SuperDragLeaveEvent(QLabel* self, QDragLeaveEvent* event);
    friend void QLabel_SuperDropEvent(QLabel* self, QDropEvent* event);
    friend void QLabel_SuperShowEvent(QLabel* self, QShowEvent* event);
    friend void QLabel_SuperHideEvent(QLabel* self, QHideEvent* event);
    friend bool QLabel_SuperNativeEvent(QLabel* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QLabel_SuperMetric(const QLabel* self, int param1);
    friend void QLabel_SuperInitPainter(const QLabel* self, QPainter* painter);
    friend QPaintDevice* QLabel_SuperRedirected(const QLabel* self, QPoint* offset);
    friend QPainter* QLabel_SuperSharedPainter(const QLabel* self);
    friend void QLabel_SuperInputMethodEvent(QLabel* self, QInputMethodEvent* param1);
    friend void QLabel_SuperTimerEvent(QLabel* self, QTimerEvent* event);
    friend void QLabel_SuperChildEvent(QLabel* self, QChildEvent* event);
    friend void QLabel_SuperCustomEvent(QLabel* self, QEvent* event);
    friend void QLabel_SuperConnectNotify(QLabel* self, const QMetaMethod* signal);
    friend void QLabel_SuperDisconnectNotify(QLabel* self, const QMetaMethod* signal);
};

#endif
