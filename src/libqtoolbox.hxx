#pragma once
#ifndef LIBQTOOLBOX_HXX
#define LIBQTOOLBOX_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QToolBox
class VirtualQToolBox final : public QToolBox {
  public:
    // Virtual class public types (including callbacks and access types)
    using QToolBox_MetaObject_Callback = QMetaObject* (*)(const QToolBox*);
    using QToolBox_Metacast_Callback = void* (*)(QToolBox*, const char*);
    using QToolBox_Metacall_Callback = int (*)(QToolBox*, int, int, void**);
    using QToolBox_Event_Callback = bool (*)(QToolBox*, QEvent*);
    using QToolBox_ItemInserted_Callback = void (*)(QToolBox*, int);
    using QToolBox_ItemRemoved_Callback = void (*)(QToolBox*, int);
    using QToolBox_ShowEvent_Callback = void (*)(QToolBox*, QShowEvent*);
    using QToolBox_ChangeEvent_Callback = void (*)(QToolBox*, QEvent*);
    using QToolBox_SizeHint_Callback = QSize* (*)(const QToolBox*);
    using QToolBox_PaintEvent_Callback = void (*)(QToolBox*, QPaintEvent*);
    using QToolBox_InitStyleOption_Callback = void (*)(const QToolBox*, QStyleOptionFrame*);
    using QToolBox_DevType_Callback = int (*)(const QToolBox*);
    using QToolBox_SetVisible_Callback = void (*)(QToolBox*, bool);
    using QToolBox_MinimumSizeHint_Callback = QSize* (*)(const QToolBox*);
    using QToolBox_HeightForWidth_Callback = int (*)(const QToolBox*, int);
    using QToolBox_HasHeightForWidth_Callback = bool (*)(const QToolBox*);
    using QToolBox_PaintEngine_Callback = QPaintEngine* (*)(const QToolBox*);
    using QToolBox_MousePressEvent_Callback = void (*)(QToolBox*, QMouseEvent*);
    using QToolBox_MouseReleaseEvent_Callback = void (*)(QToolBox*, QMouseEvent*);
    using QToolBox_MouseDoubleClickEvent_Callback = void (*)(QToolBox*, QMouseEvent*);
    using QToolBox_MouseMoveEvent_Callback = void (*)(QToolBox*, QMouseEvent*);
    using QToolBox_WheelEvent_Callback = void (*)(QToolBox*, QWheelEvent*);
    using QToolBox_KeyPressEvent_Callback = void (*)(QToolBox*, QKeyEvent*);
    using QToolBox_KeyReleaseEvent_Callback = void (*)(QToolBox*, QKeyEvent*);
    using QToolBox_FocusInEvent_Callback = void (*)(QToolBox*, QFocusEvent*);
    using QToolBox_FocusOutEvent_Callback = void (*)(QToolBox*, QFocusEvent*);
    using QToolBox_EnterEvent_Callback = void (*)(QToolBox*, QEnterEvent*);
    using QToolBox_LeaveEvent_Callback = void (*)(QToolBox*, QEvent*);
    using QToolBox_MoveEvent_Callback = void (*)(QToolBox*, QMoveEvent*);
    using QToolBox_ResizeEvent_Callback = void (*)(QToolBox*, QResizeEvent*);
    using QToolBox_CloseEvent_Callback = void (*)(QToolBox*, QCloseEvent*);
    using QToolBox_ContextMenuEvent_Callback = void (*)(QToolBox*, QContextMenuEvent*);
    using QToolBox_TabletEvent_Callback = void (*)(QToolBox*, QTabletEvent*);
    using QToolBox_ActionEvent_Callback = void (*)(QToolBox*, QActionEvent*);
    using QToolBox_DragEnterEvent_Callback = void (*)(QToolBox*, QDragEnterEvent*);
    using QToolBox_DragMoveEvent_Callback = void (*)(QToolBox*, QDragMoveEvent*);
    using QToolBox_DragLeaveEvent_Callback = void (*)(QToolBox*, QDragLeaveEvent*);
    using QToolBox_DropEvent_Callback = void (*)(QToolBox*, QDropEvent*);
    using QToolBox_HideEvent_Callback = void (*)(QToolBox*, QHideEvent*);
    using QToolBox_NativeEvent_Callback = bool (*)(QToolBox*, libqt_string, void*, intptr_t*);
    using QToolBox_Metric_Callback = int (*)(const QToolBox*, int);
    using QToolBox_InitPainter_Callback = void (*)(const QToolBox*, QPainter*);
    using QToolBox_Redirected_Callback = QPaintDevice* (*)(const QToolBox*, QPoint*);
    using QToolBox_SharedPainter_Callback = QPainter* (*)(const QToolBox*);
    using QToolBox_InputMethodEvent_Callback = void (*)(QToolBox*, QInputMethodEvent*);
    using QToolBox_InputMethodQuery_Callback = QVariant* (*)(const QToolBox*, int);
    using QToolBox_FocusNextPrevChild_Callback = bool (*)(QToolBox*, bool);
    using QToolBox_EventFilter_Callback = bool (*)(QToolBox*, QObject*, QEvent*);
    using QToolBox_TimerEvent_Callback = void (*)(QToolBox*, QTimerEvent*);
    using QToolBox_ChildEvent_Callback = void (*)(QToolBox*, QChildEvent*);
    using QToolBox_CustomEvent_Callback = void (*)(QToolBox*, QEvent*);
    using QToolBox_ConnectNotify_Callback = void (*)(QToolBox*, QMetaMethod*);
    using QToolBox_DisconnectNotify_Callback = void (*)(QToolBox*, QMetaMethod*);
    using QToolBox::create;
    using QToolBox::destroy;
    using QToolBox::drawFrame;
    using QToolBox::focusNextChild;
    using QToolBox::focusPreviousChild;
    using QToolBox::getDecodedMetricF;
    using QToolBox::isSignalConnected;
    using QToolBox::receivers;
    using QToolBox::sender;
    using QToolBox::senderSignalIndex;
    using QToolBox::updateMicroFocus;

    // Instance callback storage
    QToolBox_MetaObject_Callback qtoolbox_metaobject_callback = nullptr;
    QToolBox_Metacast_Callback qtoolbox_metacast_callback = nullptr;
    QToolBox_Metacall_Callback qtoolbox_metacall_callback = nullptr;
    QToolBox_Event_Callback qtoolbox_event_callback = nullptr;
    QToolBox_ItemInserted_Callback qtoolbox_iteminserted_callback = nullptr;
    QToolBox_ItemRemoved_Callback qtoolbox_itemremoved_callback = nullptr;
    QToolBox_ShowEvent_Callback qtoolbox_showevent_callback = nullptr;
    QToolBox_ChangeEvent_Callback qtoolbox_changeevent_callback = nullptr;
    QToolBox_SizeHint_Callback qtoolbox_sizehint_callback = nullptr;
    QToolBox_PaintEvent_Callback qtoolbox_paintevent_callback = nullptr;
    QToolBox_InitStyleOption_Callback qtoolbox_initstyleoption_callback = nullptr;
    QToolBox_DevType_Callback qtoolbox_devtype_callback = nullptr;
    QToolBox_SetVisible_Callback qtoolbox_setvisible_callback = nullptr;
    QToolBox_MinimumSizeHint_Callback qtoolbox_minimumsizehint_callback = nullptr;
    QToolBox_HeightForWidth_Callback qtoolbox_heightforwidth_callback = nullptr;
    QToolBox_HasHeightForWidth_Callback qtoolbox_hasheightforwidth_callback = nullptr;
    QToolBox_PaintEngine_Callback qtoolbox_paintengine_callback = nullptr;
    QToolBox_MousePressEvent_Callback qtoolbox_mousepressevent_callback = nullptr;
    QToolBox_MouseReleaseEvent_Callback qtoolbox_mousereleaseevent_callback = nullptr;
    QToolBox_MouseDoubleClickEvent_Callback qtoolbox_mousedoubleclickevent_callback = nullptr;
    QToolBox_MouseMoveEvent_Callback qtoolbox_mousemoveevent_callback = nullptr;
    QToolBox_WheelEvent_Callback qtoolbox_wheelevent_callback = nullptr;
    QToolBox_KeyPressEvent_Callback qtoolbox_keypressevent_callback = nullptr;
    QToolBox_KeyReleaseEvent_Callback qtoolbox_keyreleaseevent_callback = nullptr;
    QToolBox_FocusInEvent_Callback qtoolbox_focusinevent_callback = nullptr;
    QToolBox_FocusOutEvent_Callback qtoolbox_focusoutevent_callback = nullptr;
    QToolBox_EnterEvent_Callback qtoolbox_enterevent_callback = nullptr;
    QToolBox_LeaveEvent_Callback qtoolbox_leaveevent_callback = nullptr;
    QToolBox_MoveEvent_Callback qtoolbox_moveevent_callback = nullptr;
    QToolBox_ResizeEvent_Callback qtoolbox_resizeevent_callback = nullptr;
    QToolBox_CloseEvent_Callback qtoolbox_closeevent_callback = nullptr;
    QToolBox_ContextMenuEvent_Callback qtoolbox_contextmenuevent_callback = nullptr;
    QToolBox_TabletEvent_Callback qtoolbox_tabletevent_callback = nullptr;
    QToolBox_ActionEvent_Callback qtoolbox_actionevent_callback = nullptr;
    QToolBox_DragEnterEvent_Callback qtoolbox_dragenterevent_callback = nullptr;
    QToolBox_DragMoveEvent_Callback qtoolbox_dragmoveevent_callback = nullptr;
    QToolBox_DragLeaveEvent_Callback qtoolbox_dragleaveevent_callback = nullptr;
    QToolBox_DropEvent_Callback qtoolbox_dropevent_callback = nullptr;
    QToolBox_HideEvent_Callback qtoolbox_hideevent_callback = nullptr;
    QToolBox_NativeEvent_Callback qtoolbox_nativeevent_callback = nullptr;
    QToolBox_Metric_Callback qtoolbox_metric_callback = nullptr;
    QToolBox_InitPainter_Callback qtoolbox_initpainter_callback = nullptr;
    QToolBox_Redirected_Callback qtoolbox_redirected_callback = nullptr;
    QToolBox_SharedPainter_Callback qtoolbox_sharedpainter_callback = nullptr;
    QToolBox_InputMethodEvent_Callback qtoolbox_inputmethodevent_callback = nullptr;
    QToolBox_InputMethodQuery_Callback qtoolbox_inputmethodquery_callback = nullptr;
    QToolBox_FocusNextPrevChild_Callback qtoolbox_focusnextprevchild_callback = nullptr;
    QToolBox_EventFilter_Callback qtoolbox_eventfilter_callback = nullptr;
    QToolBox_TimerEvent_Callback qtoolbox_timerevent_callback = nullptr;
    QToolBox_ChildEvent_Callback qtoolbox_childevent_callback = nullptr;
    QToolBox_CustomEvent_Callback qtoolbox_customevent_callback = nullptr;
    QToolBox_ConnectNotify_Callback qtoolbox_connectnotify_callback = nullptr;
    QToolBox_DisconnectNotify_Callback qtoolbox_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QToolBox {
        using QToolBox::actionEvent;
        using QToolBox::changeEvent;
        using QToolBox::childEvent;
        using QToolBox::closeEvent;
        using QToolBox::connectNotify;
        using QToolBox::contextMenuEvent;
        using QToolBox::customEvent;
        using QToolBox::disconnectNotify;
        using QToolBox::dragEnterEvent;
        using QToolBox::dragLeaveEvent;
        using QToolBox::dragMoveEvent;
        using QToolBox::dropEvent;
        using QToolBox::enterEvent;
        using QToolBox::event;
        using QToolBox::focusInEvent;
        using QToolBox::focusNextPrevChild;
        using QToolBox::focusOutEvent;
        using QToolBox::hideEvent;
        using QToolBox::initPainter;
        using QToolBox::initStyleOption;
        using QToolBox::inputMethodEvent;
        using QToolBox::itemInserted;
        using QToolBox::itemRemoved;
        using QToolBox::keyPressEvent;
        using QToolBox::keyReleaseEvent;
        using QToolBox::leaveEvent;
        using QToolBox::metric;
        using QToolBox::mouseDoubleClickEvent;
        using QToolBox::mouseMoveEvent;
        using QToolBox::mousePressEvent;
        using QToolBox::mouseReleaseEvent;
        using QToolBox::moveEvent;
        using QToolBox::nativeEvent;
        using QToolBox::paintEvent;
        using QToolBox::redirected;
        using QToolBox::resizeEvent;
        using QToolBox::sharedPainter;
        using QToolBox::showEvent;
        using QToolBox::tabletEvent;
        using QToolBox::timerEvent;
        using QToolBox::wheelEvent;
    };

    VirtualQToolBox(QWidget* parent) : QToolBox(parent) {};
    VirtualQToolBox() : QToolBox() {};
    VirtualQToolBox(QWidget* parent, Qt::WindowFlags f) : QToolBox(parent, f) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtoolbox_metaobject_callback) {
            QMetaObject* callback_ret = qtoolbox_metaobject_callback(this);
            return callback_ret;
        }
        return QToolBox::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtoolbox_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qtoolbox_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QToolBox::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtoolbox_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qtoolbox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QToolBox::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qtoolbox_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qtoolbox_event_callback(this, cbval1);
            return callback_ret;
        }
        return QToolBox::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void itemInserted(int index) override {
        if (qtoolbox_iteminserted_callback) {
            int cbval1 = index;
            qtoolbox_iteminserted_callback(this, cbval1);
            return;
        }
        QToolBox::itemInserted(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void itemRemoved(int index) override {
        if (qtoolbox_itemremoved_callback) {
            int cbval1 = index;
            qtoolbox_itemremoved_callback(this, cbval1);
            return;
        }
        QToolBox::itemRemoved(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* e) override {
        if (qtoolbox_showevent_callback) {
            QShowEvent* cbval1 = e;
            qtoolbox_showevent_callback(this, cbval1);
            return;
        }
        QToolBox::showEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qtoolbox_changeevent_callback) {
            QEvent* cbval1 = param1;
            qtoolbox_changeevent_callback(this, cbval1);
            return;
        }
        QToolBox::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qtoolbox_sizehint_callback) {
            QSize* callback_ret = qtoolbox_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QToolBox::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qtoolbox_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            qtoolbox_paintevent_callback(this, cbval1);
            return;
        }
        QToolBox::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qtoolbox_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            qtoolbox_initstyleoption_callback(this, cbval1);
            return;
        }
        QToolBox::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qtoolbox_devtype_callback) {
            int callback_ret = qtoolbox_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QToolBox::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qtoolbox_setvisible_callback) {
            bool cbval1 = visible;
            qtoolbox_setvisible_callback(this, cbval1);
            return;
        }
        QToolBox::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qtoolbox_minimumsizehint_callback) {
            QSize* callback_ret = qtoolbox_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QToolBox::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qtoolbox_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qtoolbox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QToolBox::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qtoolbox_hasheightforwidth_callback) {
            bool callback_ret = qtoolbox_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QToolBox::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qtoolbox_paintengine_callback) {
            QPaintEngine* callback_ret = qtoolbox_paintengine_callback(this);
            return callback_ret;
        }
        return QToolBox::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qtoolbox_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qtoolbox_mousepressevent_callback(this, cbval1);
            return;
        }
        QToolBox::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qtoolbox_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qtoolbox_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QToolBox::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qtoolbox_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qtoolbox_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QToolBox::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qtoolbox_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qtoolbox_mousemoveevent_callback(this, cbval1);
            return;
        }
        QToolBox::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qtoolbox_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qtoolbox_wheelevent_callback(this, cbval1);
            return;
        }
        QToolBox::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qtoolbox_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qtoolbox_keypressevent_callback(this, cbval1);
            return;
        }
        QToolBox::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qtoolbox_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qtoolbox_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QToolBox::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qtoolbox_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qtoolbox_focusinevent_callback(this, cbval1);
            return;
        }
        QToolBox::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qtoolbox_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qtoolbox_focusoutevent_callback(this, cbval1);
            return;
        }
        QToolBox::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qtoolbox_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qtoolbox_enterevent_callback(this, cbval1);
            return;
        }
        QToolBox::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qtoolbox_leaveevent_callback) {
            QEvent* cbval1 = event;
            qtoolbox_leaveevent_callback(this, cbval1);
            return;
        }
        QToolBox::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qtoolbox_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qtoolbox_moveevent_callback(this, cbval1);
            return;
        }
        QToolBox::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qtoolbox_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qtoolbox_resizeevent_callback(this, cbval1);
            return;
        }
        QToolBox::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qtoolbox_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qtoolbox_closeevent_callback(this, cbval1);
            return;
        }
        QToolBox::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qtoolbox_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qtoolbox_contextmenuevent_callback(this, cbval1);
            return;
        }
        QToolBox::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qtoolbox_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qtoolbox_tabletevent_callback(this, cbval1);
            return;
        }
        QToolBox::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qtoolbox_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qtoolbox_actionevent_callback(this, cbval1);
            return;
        }
        QToolBox::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qtoolbox_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qtoolbox_dragenterevent_callback(this, cbval1);
            return;
        }
        QToolBox::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qtoolbox_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qtoolbox_dragmoveevent_callback(this, cbval1);
            return;
        }
        QToolBox::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qtoolbox_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qtoolbox_dragleaveevent_callback(this, cbval1);
            return;
        }
        QToolBox::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qtoolbox_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qtoolbox_dropevent_callback(this, cbval1);
            return;
        }
        QToolBox::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qtoolbox_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qtoolbox_hideevent_callback(this, cbval1);
            return;
        }
        QToolBox::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qtoolbox_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qtoolbox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QToolBox::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qtoolbox_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qtoolbox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QToolBox::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qtoolbox_initpainter_callback) {
            QPainter* cbval1 = painter;
            qtoolbox_initpainter_callback(this, cbval1);
            return;
        }
        QToolBox::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qtoolbox_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qtoolbox_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QToolBox::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qtoolbox_sharedpainter_callback) {
            QPainter* callback_ret = qtoolbox_sharedpainter_callback(this);
            return callback_ret;
        }
        return QToolBox::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qtoolbox_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qtoolbox_inputmethodevent_callback(this, cbval1);
            return;
        }
        QToolBox::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qtoolbox_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qtoolbox_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QToolBox::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qtoolbox_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qtoolbox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QToolBox::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtoolbox_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qtoolbox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QToolBox::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtoolbox_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qtoolbox_timerevent_callback(this, cbval1);
            return;
        }
        QToolBox::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtoolbox_childevent_callback) {
            QChildEvent* cbval1 = event;
            qtoolbox_childevent_callback(this, cbval1);
            return;
        }
        QToolBox::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtoolbox_customevent_callback) {
            QEvent* cbval1 = event;
            qtoolbox_customevent_callback(this, cbval1);
            return;
        }
        QToolBox::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtoolbox_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtoolbox_connectnotify_callback(this, cbval1);
            return;
        }
        QToolBox::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtoolbox_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtoolbox_disconnectnotify_callback(this, cbval1);
            return;
        }
        QToolBox::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QToolBox_SuperEvent(QToolBox* self, QEvent* e);
    friend void QToolBox_SuperItemInserted(QToolBox* self, int index);
    friend void QToolBox_SuperItemRemoved(QToolBox* self, int index);
    friend void QToolBox_SuperShowEvent(QToolBox* self, QShowEvent* e);
    friend void QToolBox_SuperChangeEvent(QToolBox* self, QEvent* param1);
    friend void QToolBox_SuperPaintEvent(QToolBox* self, QPaintEvent* param1);
    friend void QToolBox_SuperInitStyleOption(const QToolBox* self, QStyleOptionFrame* option);
    friend void QToolBox_SuperMousePressEvent(QToolBox* self, QMouseEvent* event);
    friend void QToolBox_SuperMouseReleaseEvent(QToolBox* self, QMouseEvent* event);
    friend void QToolBox_SuperMouseDoubleClickEvent(QToolBox* self, QMouseEvent* event);
    friend void QToolBox_SuperMouseMoveEvent(QToolBox* self, QMouseEvent* event);
    friend void QToolBox_SuperWheelEvent(QToolBox* self, QWheelEvent* event);
    friend void QToolBox_SuperKeyPressEvent(QToolBox* self, QKeyEvent* event);
    friend void QToolBox_SuperKeyReleaseEvent(QToolBox* self, QKeyEvent* event);
    friend void QToolBox_SuperFocusInEvent(QToolBox* self, QFocusEvent* event);
    friend void QToolBox_SuperFocusOutEvent(QToolBox* self, QFocusEvent* event);
    friend void QToolBox_SuperEnterEvent(QToolBox* self, QEnterEvent* event);
    friend void QToolBox_SuperLeaveEvent(QToolBox* self, QEvent* event);
    friend void QToolBox_SuperMoveEvent(QToolBox* self, QMoveEvent* event);
    friend void QToolBox_SuperResizeEvent(QToolBox* self, QResizeEvent* event);
    friend void QToolBox_SuperCloseEvent(QToolBox* self, QCloseEvent* event);
    friend void QToolBox_SuperContextMenuEvent(QToolBox* self, QContextMenuEvent* event);
    friend void QToolBox_SuperTabletEvent(QToolBox* self, QTabletEvent* event);
    friend void QToolBox_SuperActionEvent(QToolBox* self, QActionEvent* event);
    friend void QToolBox_SuperDragEnterEvent(QToolBox* self, QDragEnterEvent* event);
    friend void QToolBox_SuperDragMoveEvent(QToolBox* self, QDragMoveEvent* event);
    friend void QToolBox_SuperDragLeaveEvent(QToolBox* self, QDragLeaveEvent* event);
    friend void QToolBox_SuperDropEvent(QToolBox* self, QDropEvent* event);
    friend void QToolBox_SuperHideEvent(QToolBox* self, QHideEvent* event);
    friend bool QToolBox_SuperNativeEvent(QToolBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QToolBox_SuperMetric(const QToolBox* self, int param1);
    friend void QToolBox_SuperInitPainter(const QToolBox* self, QPainter* painter);
    friend QPaintDevice* QToolBox_SuperRedirected(const QToolBox* self, QPoint* offset);
    friend QPainter* QToolBox_SuperSharedPainter(const QToolBox* self);
    friend void QToolBox_SuperInputMethodEvent(QToolBox* self, QInputMethodEvent* param1);
    friend bool QToolBox_SuperFocusNextPrevChild(QToolBox* self, bool next);
    friend void QToolBox_SuperTimerEvent(QToolBox* self, QTimerEvent* event);
    friend void QToolBox_SuperChildEvent(QToolBox* self, QChildEvent* event);
    friend void QToolBox_SuperCustomEvent(QToolBox* self, QEvent* event);
    friend void QToolBox_SuperConnectNotify(QToolBox* self, const QMetaMethod* signal);
    friend void QToolBox_SuperDisconnectNotify(QToolBox* self, const QMetaMethod* signal);
};

#endif
