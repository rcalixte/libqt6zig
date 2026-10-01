#pragma once
#ifndef LIBQCOMBOBOX_HXX
#define LIBQCOMBOBOX_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QComboBox
class VirtualQComboBox final : public QComboBox {
  public:
    // Virtual class public types (including callbacks and access types)
    using QComboBox_MetaObject_Callback = QMetaObject* (*)(const QComboBox*);
    using QComboBox_Metacast_Callback = void* (*)(QComboBox*, const char*);
    using QComboBox_Metacall_Callback = int (*)(QComboBox*, int, int, void**);
    using QComboBox_SetModel_Callback = void (*)(QComboBox*, QAbstractItemModel*);
    using QComboBox_SizeHint_Callback = QSize* (*)(const QComboBox*);
    using QComboBox_MinimumSizeHint_Callback = QSize* (*)(const QComboBox*);
    using QComboBox_ShowPopup_Callback = void (*)(QComboBox*);
    using QComboBox_HidePopup_Callback = void (*)(QComboBox*);
    using QComboBox_Event_Callback = bool (*)(QComboBox*, QEvent*);
    using QComboBox_InputMethodQuery_Callback = QVariant* (*)(const QComboBox*, int);
    using QComboBox_FocusInEvent_Callback = void (*)(QComboBox*, QFocusEvent*);
    using QComboBox_FocusOutEvent_Callback = void (*)(QComboBox*, QFocusEvent*);
    using QComboBox_ChangeEvent_Callback = void (*)(QComboBox*, QEvent*);
    using QComboBox_ResizeEvent_Callback = void (*)(QComboBox*, QResizeEvent*);
    using QComboBox_PaintEvent_Callback = void (*)(QComboBox*, QPaintEvent*);
    using QComboBox_ShowEvent_Callback = void (*)(QComboBox*, QShowEvent*);
    using QComboBox_HideEvent_Callback = void (*)(QComboBox*, QHideEvent*);
    using QComboBox_MousePressEvent_Callback = void (*)(QComboBox*, QMouseEvent*);
    using QComboBox_MouseReleaseEvent_Callback = void (*)(QComboBox*, QMouseEvent*);
    using QComboBox_KeyPressEvent_Callback = void (*)(QComboBox*, QKeyEvent*);
    using QComboBox_KeyReleaseEvent_Callback = void (*)(QComboBox*, QKeyEvent*);
    using QComboBox_WheelEvent_Callback = void (*)(QComboBox*, QWheelEvent*);
    using QComboBox_ContextMenuEvent_Callback = void (*)(QComboBox*, QContextMenuEvent*);
    using QComboBox_InputMethodEvent_Callback = void (*)(QComboBox*, QInputMethodEvent*);
    using QComboBox_InitStyleOption_Callback = void (*)(const QComboBox*, QStyleOptionComboBox*);
    using QComboBox_DevType_Callback = int (*)(const QComboBox*);
    using QComboBox_SetVisible_Callback = void (*)(QComboBox*, bool);
    using QComboBox_HeightForWidth_Callback = int (*)(const QComboBox*, int);
    using QComboBox_HasHeightForWidth_Callback = bool (*)(const QComboBox*);
    using QComboBox_PaintEngine_Callback = QPaintEngine* (*)(const QComboBox*);
    using QComboBox_MouseDoubleClickEvent_Callback = void (*)(QComboBox*, QMouseEvent*);
    using QComboBox_MouseMoveEvent_Callback = void (*)(QComboBox*, QMouseEvent*);
    using QComboBox_EnterEvent_Callback = void (*)(QComboBox*, QEnterEvent*);
    using QComboBox_LeaveEvent_Callback = void (*)(QComboBox*, QEvent*);
    using QComboBox_MoveEvent_Callback = void (*)(QComboBox*, QMoveEvent*);
    using QComboBox_CloseEvent_Callback = void (*)(QComboBox*, QCloseEvent*);
    using QComboBox_TabletEvent_Callback = void (*)(QComboBox*, QTabletEvent*);
    using QComboBox_ActionEvent_Callback = void (*)(QComboBox*, QActionEvent*);
    using QComboBox_DragEnterEvent_Callback = void (*)(QComboBox*, QDragEnterEvent*);
    using QComboBox_DragMoveEvent_Callback = void (*)(QComboBox*, QDragMoveEvent*);
    using QComboBox_DragLeaveEvent_Callback = void (*)(QComboBox*, QDragLeaveEvent*);
    using QComboBox_DropEvent_Callback = void (*)(QComboBox*, QDropEvent*);
    using QComboBox_NativeEvent_Callback = bool (*)(QComboBox*, libqt_string, void*, intptr_t*);
    using QComboBox_Metric_Callback = int (*)(const QComboBox*, int);
    using QComboBox_InitPainter_Callback = void (*)(const QComboBox*, QPainter*);
    using QComboBox_Redirected_Callback = QPaintDevice* (*)(const QComboBox*, QPoint*);
    using QComboBox_SharedPainter_Callback = QPainter* (*)(const QComboBox*);
    using QComboBox_FocusNextPrevChild_Callback = bool (*)(QComboBox*, bool);
    using QComboBox_EventFilter_Callback = bool (*)(QComboBox*, QObject*, QEvent*);
    using QComboBox_TimerEvent_Callback = void (*)(QComboBox*, QTimerEvent*);
    using QComboBox_ChildEvent_Callback = void (*)(QComboBox*, QChildEvent*);
    using QComboBox_CustomEvent_Callback = void (*)(QComboBox*, QEvent*);
    using QComboBox_ConnectNotify_Callback = void (*)(QComboBox*, QMetaMethod*);
    using QComboBox_DisconnectNotify_Callback = void (*)(QComboBox*, QMetaMethod*);
    using QComboBox::create;
    using QComboBox::destroy;
    using QComboBox::focusNextChild;
    using QComboBox::focusPreviousChild;
    using QComboBox::getDecodedMetricF;
    using QComboBox::isSignalConnected;
    using QComboBox::receivers;
    using QComboBox::sender;
    using QComboBox::senderSignalIndex;
    using QComboBox::updateMicroFocus;

    // Instance callback storage
    QComboBox_MetaObject_Callback qcombobox_metaobject_callback = nullptr;
    QComboBox_Metacast_Callback qcombobox_metacast_callback = nullptr;
    QComboBox_Metacall_Callback qcombobox_metacall_callback = nullptr;
    QComboBox_SetModel_Callback qcombobox_setmodel_callback = nullptr;
    QComboBox_SizeHint_Callback qcombobox_sizehint_callback = nullptr;
    QComboBox_MinimumSizeHint_Callback qcombobox_minimumsizehint_callback = nullptr;
    QComboBox_ShowPopup_Callback qcombobox_showpopup_callback = nullptr;
    QComboBox_HidePopup_Callback qcombobox_hidepopup_callback = nullptr;
    QComboBox_Event_Callback qcombobox_event_callback = nullptr;
    QComboBox_InputMethodQuery_Callback qcombobox_inputmethodquery_callback = nullptr;
    QComboBox_FocusInEvent_Callback qcombobox_focusinevent_callback = nullptr;
    QComboBox_FocusOutEvent_Callback qcombobox_focusoutevent_callback = nullptr;
    QComboBox_ChangeEvent_Callback qcombobox_changeevent_callback = nullptr;
    QComboBox_ResizeEvent_Callback qcombobox_resizeevent_callback = nullptr;
    QComboBox_PaintEvent_Callback qcombobox_paintevent_callback = nullptr;
    QComboBox_ShowEvent_Callback qcombobox_showevent_callback = nullptr;
    QComboBox_HideEvent_Callback qcombobox_hideevent_callback = nullptr;
    QComboBox_MousePressEvent_Callback qcombobox_mousepressevent_callback = nullptr;
    QComboBox_MouseReleaseEvent_Callback qcombobox_mousereleaseevent_callback = nullptr;
    QComboBox_KeyPressEvent_Callback qcombobox_keypressevent_callback = nullptr;
    QComboBox_KeyReleaseEvent_Callback qcombobox_keyreleaseevent_callback = nullptr;
    QComboBox_WheelEvent_Callback qcombobox_wheelevent_callback = nullptr;
    QComboBox_ContextMenuEvent_Callback qcombobox_contextmenuevent_callback = nullptr;
    QComboBox_InputMethodEvent_Callback qcombobox_inputmethodevent_callback = nullptr;
    QComboBox_InitStyleOption_Callback qcombobox_initstyleoption_callback = nullptr;
    QComboBox_DevType_Callback qcombobox_devtype_callback = nullptr;
    QComboBox_SetVisible_Callback qcombobox_setvisible_callback = nullptr;
    QComboBox_HeightForWidth_Callback qcombobox_heightforwidth_callback = nullptr;
    QComboBox_HasHeightForWidth_Callback qcombobox_hasheightforwidth_callback = nullptr;
    QComboBox_PaintEngine_Callback qcombobox_paintengine_callback = nullptr;
    QComboBox_MouseDoubleClickEvent_Callback qcombobox_mousedoubleclickevent_callback = nullptr;
    QComboBox_MouseMoveEvent_Callback qcombobox_mousemoveevent_callback = nullptr;
    QComboBox_EnterEvent_Callback qcombobox_enterevent_callback = nullptr;
    QComboBox_LeaveEvent_Callback qcombobox_leaveevent_callback = nullptr;
    QComboBox_MoveEvent_Callback qcombobox_moveevent_callback = nullptr;
    QComboBox_CloseEvent_Callback qcombobox_closeevent_callback = nullptr;
    QComboBox_TabletEvent_Callback qcombobox_tabletevent_callback = nullptr;
    QComboBox_ActionEvent_Callback qcombobox_actionevent_callback = nullptr;
    QComboBox_DragEnterEvent_Callback qcombobox_dragenterevent_callback = nullptr;
    QComboBox_DragMoveEvent_Callback qcombobox_dragmoveevent_callback = nullptr;
    QComboBox_DragLeaveEvent_Callback qcombobox_dragleaveevent_callback = nullptr;
    QComboBox_DropEvent_Callback qcombobox_dropevent_callback = nullptr;
    QComboBox_NativeEvent_Callback qcombobox_nativeevent_callback = nullptr;
    QComboBox_Metric_Callback qcombobox_metric_callback = nullptr;
    QComboBox_InitPainter_Callback qcombobox_initpainter_callback = nullptr;
    QComboBox_Redirected_Callback qcombobox_redirected_callback = nullptr;
    QComboBox_SharedPainter_Callback qcombobox_sharedpainter_callback = nullptr;
    QComboBox_FocusNextPrevChild_Callback qcombobox_focusnextprevchild_callback = nullptr;
    QComboBox_EventFilter_Callback qcombobox_eventfilter_callback = nullptr;
    QComboBox_TimerEvent_Callback qcombobox_timerevent_callback = nullptr;
    QComboBox_ChildEvent_Callback qcombobox_childevent_callback = nullptr;
    QComboBox_CustomEvent_Callback qcombobox_customevent_callback = nullptr;
    QComboBox_ConnectNotify_Callback qcombobox_connectnotify_callback = nullptr;
    QComboBox_DisconnectNotify_Callback qcombobox_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QComboBox {
        using QComboBox::actionEvent;
        using QComboBox::changeEvent;
        using QComboBox::childEvent;
        using QComboBox::closeEvent;
        using QComboBox::connectNotify;
        using QComboBox::contextMenuEvent;
        using QComboBox::customEvent;
        using QComboBox::disconnectNotify;
        using QComboBox::dragEnterEvent;
        using QComboBox::dragLeaveEvent;
        using QComboBox::dragMoveEvent;
        using QComboBox::dropEvent;
        using QComboBox::enterEvent;
        using QComboBox::focusInEvent;
        using QComboBox::focusNextPrevChild;
        using QComboBox::focusOutEvent;
        using QComboBox::hideEvent;
        using QComboBox::initPainter;
        using QComboBox::initStyleOption;
        using QComboBox::inputMethodEvent;
        using QComboBox::keyPressEvent;
        using QComboBox::keyReleaseEvent;
        using QComboBox::leaveEvent;
        using QComboBox::metric;
        using QComboBox::mouseDoubleClickEvent;
        using QComboBox::mouseMoveEvent;
        using QComboBox::mousePressEvent;
        using QComboBox::mouseReleaseEvent;
        using QComboBox::moveEvent;
        using QComboBox::nativeEvent;
        using QComboBox::paintEvent;
        using QComboBox::redirected;
        using QComboBox::resizeEvent;
        using QComboBox::sharedPainter;
        using QComboBox::showEvent;
        using QComboBox::tabletEvent;
        using QComboBox::timerEvent;
        using QComboBox::wheelEvent;
    };

    VirtualQComboBox(QWidget* parent) : QComboBox(parent) {};
    VirtualQComboBox() : QComboBox() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qcombobox_metaobject_callback) {
            QMetaObject* callback_ret = qcombobox_metaobject_callback(this);
            return callback_ret;
        }
        return QComboBox::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qcombobox_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qcombobox_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QComboBox::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcombobox_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qcombobox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QComboBox::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (qcombobox_setmodel_callback) {
            QAbstractItemModel* cbval1 = model;
            qcombobox_setmodel_callback(this, cbval1);
            return;
        }
        QComboBox::setModel(model);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qcombobox_sizehint_callback) {
            QSize* callback_ret = qcombobox_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QComboBox::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qcombobox_minimumsizehint_callback) {
            QSize* callback_ret = qcombobox_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QComboBox::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void showPopup() override {
        if (qcombobox_showpopup_callback) {
            qcombobox_showpopup_callback(this);
            return;
        }
        QComboBox::showPopup();
    }

    // Virtual method for C ABI access and custom callback
    virtual void hidePopup() override {
        if (qcombobox_hidepopup_callback) {
            qcombobox_hidepopup_callback(this);
            return;
        }
        QComboBox::hidePopup();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcombobox_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qcombobox_event_callback(this, cbval1);
            return callback_ret;
        }
        return QComboBox::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qcombobox_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qcombobox_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QComboBox::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (qcombobox_focusinevent_callback) {
            QFocusEvent* cbval1 = e;
            qcombobox_focusinevent_callback(this, cbval1);
            return;
        }
        QComboBox::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (qcombobox_focusoutevent_callback) {
            QFocusEvent* cbval1 = e;
            qcombobox_focusoutevent_callback(this, cbval1);
            return;
        }
        QComboBox::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qcombobox_changeevent_callback) {
            QEvent* cbval1 = e;
            qcombobox_changeevent_callback(this, cbval1);
            return;
        }
        QComboBox::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (qcombobox_resizeevent_callback) {
            QResizeEvent* cbval1 = e;
            qcombobox_resizeevent_callback(this, cbval1);
            return;
        }
        QComboBox::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qcombobox_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            qcombobox_paintevent_callback(this, cbval1);
            return;
        }
        QComboBox::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* e) override {
        if (qcombobox_showevent_callback) {
            QShowEvent* cbval1 = e;
            qcombobox_showevent_callback(this, cbval1);
            return;
        }
        QComboBox::showEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* e) override {
        if (qcombobox_hideevent_callback) {
            QHideEvent* cbval1 = e;
            qcombobox_hideevent_callback(this, cbval1);
            return;
        }
        QComboBox::hideEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (qcombobox_mousepressevent_callback) {
            QMouseEvent* cbval1 = e;
            qcombobox_mousepressevent_callback(this, cbval1);
            return;
        }
        QComboBox::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qcombobox_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            qcombobox_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QComboBox::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (qcombobox_keypressevent_callback) {
            QKeyEvent* cbval1 = e;
            qcombobox_keypressevent_callback(this, cbval1);
            return;
        }
        QComboBox::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (qcombobox_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            qcombobox_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QComboBox::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (qcombobox_wheelevent_callback) {
            QWheelEvent* cbval1 = e;
            qcombobox_wheelevent_callback(this, cbval1);
            return;
        }
        QComboBox::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (qcombobox_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = e;
            qcombobox_contextmenuevent_callback(this, cbval1);
            return;
        }
        QComboBox::contextMenuEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qcombobox_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qcombobox_inputmethodevent_callback(this, cbval1);
            return;
        }
        QComboBox::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionComboBox* option) const override {
        if (qcombobox_initstyleoption_callback) {
            QStyleOptionComboBox* cbval1 = option;
            qcombobox_initstyleoption_callback(this, cbval1);
            return;
        }
        QComboBox::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qcombobox_devtype_callback) {
            int callback_ret = qcombobox_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QComboBox::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qcombobox_setvisible_callback) {
            bool cbval1 = visible;
            qcombobox_setvisible_callback(this, cbval1);
            return;
        }
        QComboBox::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qcombobox_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qcombobox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QComboBox::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qcombobox_hasheightforwidth_callback) {
            bool callback_ret = qcombobox_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QComboBox::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qcombobox_paintengine_callback) {
            QPaintEngine* callback_ret = qcombobox_paintengine_callback(this);
            return callback_ret;
        }
        return QComboBox::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qcombobox_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qcombobox_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QComboBox::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qcombobox_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qcombobox_mousemoveevent_callback(this, cbval1);
            return;
        }
        QComboBox::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qcombobox_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qcombobox_enterevent_callback(this, cbval1);
            return;
        }
        QComboBox::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qcombobox_leaveevent_callback) {
            QEvent* cbval1 = event;
            qcombobox_leaveevent_callback(this, cbval1);
            return;
        }
        QComboBox::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qcombobox_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qcombobox_moveevent_callback(this, cbval1);
            return;
        }
        QComboBox::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qcombobox_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qcombobox_closeevent_callback(this, cbval1);
            return;
        }
        QComboBox::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qcombobox_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qcombobox_tabletevent_callback(this, cbval1);
            return;
        }
        QComboBox::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qcombobox_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qcombobox_actionevent_callback(this, cbval1);
            return;
        }
        QComboBox::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qcombobox_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qcombobox_dragenterevent_callback(this, cbval1);
            return;
        }
        QComboBox::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qcombobox_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qcombobox_dragmoveevent_callback(this, cbval1);
            return;
        }
        QComboBox::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qcombobox_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qcombobox_dragleaveevent_callback(this, cbval1);
            return;
        }
        QComboBox::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qcombobox_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qcombobox_dropevent_callback(this, cbval1);
            return;
        }
        QComboBox::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qcombobox_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qcombobox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QComboBox::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qcombobox_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qcombobox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QComboBox::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qcombobox_initpainter_callback) {
            QPainter* cbval1 = painter;
            qcombobox_initpainter_callback(this, cbval1);
            return;
        }
        QComboBox::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qcombobox_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qcombobox_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QComboBox::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qcombobox_sharedpainter_callback) {
            QPainter* callback_ret = qcombobox_sharedpainter_callback(this);
            return callback_ret;
        }
        return QComboBox::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qcombobox_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qcombobox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QComboBox::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcombobox_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qcombobox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QComboBox::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcombobox_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qcombobox_timerevent_callback(this, cbval1);
            return;
        }
        QComboBox::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcombobox_childevent_callback) {
            QChildEvent* cbval1 = event;
            qcombobox_childevent_callback(this, cbval1);
            return;
        }
        QComboBox::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcombobox_customevent_callback) {
            QEvent* cbval1 = event;
            qcombobox_customevent_callback(this, cbval1);
            return;
        }
        QComboBox::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcombobox_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcombobox_connectnotify_callback(this, cbval1);
            return;
        }
        QComboBox::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcombobox_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcombobox_disconnectnotify_callback(this, cbval1);
            return;
        }
        QComboBox::disconnectNotify(signal);
    }

    // Friend functions
    friend void QComboBox_SuperFocusInEvent(QComboBox* self, QFocusEvent* e);
    friend void QComboBox_SuperFocusOutEvent(QComboBox* self, QFocusEvent* e);
    friend void QComboBox_SuperChangeEvent(QComboBox* self, QEvent* e);
    friend void QComboBox_SuperResizeEvent(QComboBox* self, QResizeEvent* e);
    friend void QComboBox_SuperPaintEvent(QComboBox* self, QPaintEvent* e);
    friend void QComboBox_SuperShowEvent(QComboBox* self, QShowEvent* e);
    friend void QComboBox_SuperHideEvent(QComboBox* self, QHideEvent* e);
    friend void QComboBox_SuperMousePressEvent(QComboBox* self, QMouseEvent* e);
    friend void QComboBox_SuperMouseReleaseEvent(QComboBox* self, QMouseEvent* e);
    friend void QComboBox_SuperKeyPressEvent(QComboBox* self, QKeyEvent* e);
    friend void QComboBox_SuperKeyReleaseEvent(QComboBox* self, QKeyEvent* e);
    friend void QComboBox_SuperWheelEvent(QComboBox* self, QWheelEvent* e);
    friend void QComboBox_SuperContextMenuEvent(QComboBox* self, QContextMenuEvent* e);
    friend void QComboBox_SuperInputMethodEvent(QComboBox* self, QInputMethodEvent* param1);
    friend void QComboBox_SuperInitStyleOption(const QComboBox* self, QStyleOptionComboBox* option);
    friend void QComboBox_SuperMouseDoubleClickEvent(QComboBox* self, QMouseEvent* event);
    friend void QComboBox_SuperMouseMoveEvent(QComboBox* self, QMouseEvent* event);
    friend void QComboBox_SuperEnterEvent(QComboBox* self, QEnterEvent* event);
    friend void QComboBox_SuperLeaveEvent(QComboBox* self, QEvent* event);
    friend void QComboBox_SuperMoveEvent(QComboBox* self, QMoveEvent* event);
    friend void QComboBox_SuperCloseEvent(QComboBox* self, QCloseEvent* event);
    friend void QComboBox_SuperTabletEvent(QComboBox* self, QTabletEvent* event);
    friend void QComboBox_SuperActionEvent(QComboBox* self, QActionEvent* event);
    friend void QComboBox_SuperDragEnterEvent(QComboBox* self, QDragEnterEvent* event);
    friend void QComboBox_SuperDragMoveEvent(QComboBox* self, QDragMoveEvent* event);
    friend void QComboBox_SuperDragLeaveEvent(QComboBox* self, QDragLeaveEvent* event);
    friend void QComboBox_SuperDropEvent(QComboBox* self, QDropEvent* event);
    friend bool QComboBox_SuperNativeEvent(QComboBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QComboBox_SuperMetric(const QComboBox* self, int param1);
    friend void QComboBox_SuperInitPainter(const QComboBox* self, QPainter* painter);
    friend QPaintDevice* QComboBox_SuperRedirected(const QComboBox* self, QPoint* offset);
    friend QPainter* QComboBox_SuperSharedPainter(const QComboBox* self);
    friend bool QComboBox_SuperFocusNextPrevChild(QComboBox* self, bool next);
    friend void QComboBox_SuperTimerEvent(QComboBox* self, QTimerEvent* event);
    friend void QComboBox_SuperChildEvent(QComboBox* self, QChildEvent* event);
    friend void QComboBox_SuperCustomEvent(QComboBox* self, QEvent* event);
    friend void QComboBox_SuperConnectNotify(QComboBox* self, const QMetaMethod* signal);
    friend void QComboBox_SuperDisconnectNotify(QComboBox* self, const QMetaMethod* signal);
};

#endif
