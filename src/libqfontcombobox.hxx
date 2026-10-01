#pragma once
#ifndef LIBQFONTCOMBOBOX_HXX
#define LIBQFONTCOMBOBOX_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QFontComboBox
class VirtualQFontComboBox final : public QFontComboBox {
  public:
    // Virtual class public types (including callbacks and access types)
    using QFontComboBox_MetaObject_Callback = QMetaObject* (*)(const QFontComboBox*);
    using QFontComboBox_Metacast_Callback = void* (*)(QFontComboBox*, const char*);
    using QFontComboBox_Metacall_Callback = int (*)(QFontComboBox*, int, int, void**);
    using QFontComboBox_SizeHint_Callback = QSize* (*)(const QFontComboBox*);
    using QFontComboBox_Event_Callback = bool (*)(QFontComboBox*, QEvent*);
    using QFontComboBox_SetModel_Callback = void (*)(QFontComboBox*, QAbstractItemModel*);
    using QFontComboBox_MinimumSizeHint_Callback = QSize* (*)(const QFontComboBox*);
    using QFontComboBox_ShowPopup_Callback = void (*)(QFontComboBox*);
    using QFontComboBox_HidePopup_Callback = void (*)(QFontComboBox*);
    using QFontComboBox_InputMethodQuery_Callback = QVariant* (*)(const QFontComboBox*, int);
    using QFontComboBox_FocusInEvent_Callback = void (*)(QFontComboBox*, QFocusEvent*);
    using QFontComboBox_FocusOutEvent_Callback = void (*)(QFontComboBox*, QFocusEvent*);
    using QFontComboBox_ChangeEvent_Callback = void (*)(QFontComboBox*, QEvent*);
    using QFontComboBox_ResizeEvent_Callback = void (*)(QFontComboBox*, QResizeEvent*);
    using QFontComboBox_PaintEvent_Callback = void (*)(QFontComboBox*, QPaintEvent*);
    using QFontComboBox_ShowEvent_Callback = void (*)(QFontComboBox*, QShowEvent*);
    using QFontComboBox_HideEvent_Callback = void (*)(QFontComboBox*, QHideEvent*);
    using QFontComboBox_MousePressEvent_Callback = void (*)(QFontComboBox*, QMouseEvent*);
    using QFontComboBox_MouseReleaseEvent_Callback = void (*)(QFontComboBox*, QMouseEvent*);
    using QFontComboBox_KeyPressEvent_Callback = void (*)(QFontComboBox*, QKeyEvent*);
    using QFontComboBox_KeyReleaseEvent_Callback = void (*)(QFontComboBox*, QKeyEvent*);
    using QFontComboBox_WheelEvent_Callback = void (*)(QFontComboBox*, QWheelEvent*);
    using QFontComboBox_ContextMenuEvent_Callback = void (*)(QFontComboBox*, QContextMenuEvent*);
    using QFontComboBox_InputMethodEvent_Callback = void (*)(QFontComboBox*, QInputMethodEvent*);
    using QFontComboBox_InitStyleOption_Callback = void (*)(const QFontComboBox*, QStyleOptionComboBox*);
    using QFontComboBox_DevType_Callback = int (*)(const QFontComboBox*);
    using QFontComboBox_SetVisible_Callback = void (*)(QFontComboBox*, bool);
    using QFontComboBox_HeightForWidth_Callback = int (*)(const QFontComboBox*, int);
    using QFontComboBox_HasHeightForWidth_Callback = bool (*)(const QFontComboBox*);
    using QFontComboBox_PaintEngine_Callback = QPaintEngine* (*)(const QFontComboBox*);
    using QFontComboBox_MouseDoubleClickEvent_Callback = void (*)(QFontComboBox*, QMouseEvent*);
    using QFontComboBox_MouseMoveEvent_Callback = void (*)(QFontComboBox*, QMouseEvent*);
    using QFontComboBox_EnterEvent_Callback = void (*)(QFontComboBox*, QEnterEvent*);
    using QFontComboBox_LeaveEvent_Callback = void (*)(QFontComboBox*, QEvent*);
    using QFontComboBox_MoveEvent_Callback = void (*)(QFontComboBox*, QMoveEvent*);
    using QFontComboBox_CloseEvent_Callback = void (*)(QFontComboBox*, QCloseEvent*);
    using QFontComboBox_TabletEvent_Callback = void (*)(QFontComboBox*, QTabletEvent*);
    using QFontComboBox_ActionEvent_Callback = void (*)(QFontComboBox*, QActionEvent*);
    using QFontComboBox_DragEnterEvent_Callback = void (*)(QFontComboBox*, QDragEnterEvent*);
    using QFontComboBox_DragMoveEvent_Callback = void (*)(QFontComboBox*, QDragMoveEvent*);
    using QFontComboBox_DragLeaveEvent_Callback = void (*)(QFontComboBox*, QDragLeaveEvent*);
    using QFontComboBox_DropEvent_Callback = void (*)(QFontComboBox*, QDropEvent*);
    using QFontComboBox_NativeEvent_Callback = bool (*)(QFontComboBox*, libqt_string, void*, intptr_t*);
    using QFontComboBox_Metric_Callback = int (*)(const QFontComboBox*, int);
    using QFontComboBox_InitPainter_Callback = void (*)(const QFontComboBox*, QPainter*);
    using QFontComboBox_Redirected_Callback = QPaintDevice* (*)(const QFontComboBox*, QPoint*);
    using QFontComboBox_SharedPainter_Callback = QPainter* (*)(const QFontComboBox*);
    using QFontComboBox_FocusNextPrevChild_Callback = bool (*)(QFontComboBox*, bool);
    using QFontComboBox_EventFilter_Callback = bool (*)(QFontComboBox*, QObject*, QEvent*);
    using QFontComboBox_TimerEvent_Callback = void (*)(QFontComboBox*, QTimerEvent*);
    using QFontComboBox_ChildEvent_Callback = void (*)(QFontComboBox*, QChildEvent*);
    using QFontComboBox_CustomEvent_Callback = void (*)(QFontComboBox*, QEvent*);
    using QFontComboBox_ConnectNotify_Callback = void (*)(QFontComboBox*, QMetaMethod*);
    using QFontComboBox_DisconnectNotify_Callback = void (*)(QFontComboBox*, QMetaMethod*);
    using QFontComboBox::create;
    using QFontComboBox::destroy;
    using QFontComboBox::focusNextChild;
    using QFontComboBox::focusPreviousChild;
    using QFontComboBox::getDecodedMetricF;
    using QFontComboBox::isSignalConnected;
    using QFontComboBox::receivers;
    using QFontComboBox::sender;
    using QFontComboBox::senderSignalIndex;
    using QFontComboBox::updateMicroFocus;

    // Instance callback storage
    QFontComboBox_MetaObject_Callback qfontcombobox_metaobject_callback = nullptr;
    QFontComboBox_Metacast_Callback qfontcombobox_metacast_callback = nullptr;
    QFontComboBox_Metacall_Callback qfontcombobox_metacall_callback = nullptr;
    QFontComboBox_SizeHint_Callback qfontcombobox_sizehint_callback = nullptr;
    QFontComboBox_Event_Callback qfontcombobox_event_callback = nullptr;
    QFontComboBox_SetModel_Callback qfontcombobox_setmodel_callback = nullptr;
    QFontComboBox_MinimumSizeHint_Callback qfontcombobox_minimumsizehint_callback = nullptr;
    QFontComboBox_ShowPopup_Callback qfontcombobox_showpopup_callback = nullptr;
    QFontComboBox_HidePopup_Callback qfontcombobox_hidepopup_callback = nullptr;
    QFontComboBox_InputMethodQuery_Callback qfontcombobox_inputmethodquery_callback = nullptr;
    QFontComboBox_FocusInEvent_Callback qfontcombobox_focusinevent_callback = nullptr;
    QFontComboBox_FocusOutEvent_Callback qfontcombobox_focusoutevent_callback = nullptr;
    QFontComboBox_ChangeEvent_Callback qfontcombobox_changeevent_callback = nullptr;
    QFontComboBox_ResizeEvent_Callback qfontcombobox_resizeevent_callback = nullptr;
    QFontComboBox_PaintEvent_Callback qfontcombobox_paintevent_callback = nullptr;
    QFontComboBox_ShowEvent_Callback qfontcombobox_showevent_callback = nullptr;
    QFontComboBox_HideEvent_Callback qfontcombobox_hideevent_callback = nullptr;
    QFontComboBox_MousePressEvent_Callback qfontcombobox_mousepressevent_callback = nullptr;
    QFontComboBox_MouseReleaseEvent_Callback qfontcombobox_mousereleaseevent_callback = nullptr;
    QFontComboBox_KeyPressEvent_Callback qfontcombobox_keypressevent_callback = nullptr;
    QFontComboBox_KeyReleaseEvent_Callback qfontcombobox_keyreleaseevent_callback = nullptr;
    QFontComboBox_WheelEvent_Callback qfontcombobox_wheelevent_callback = nullptr;
    QFontComboBox_ContextMenuEvent_Callback qfontcombobox_contextmenuevent_callback = nullptr;
    QFontComboBox_InputMethodEvent_Callback qfontcombobox_inputmethodevent_callback = nullptr;
    QFontComboBox_InitStyleOption_Callback qfontcombobox_initstyleoption_callback = nullptr;
    QFontComboBox_DevType_Callback qfontcombobox_devtype_callback = nullptr;
    QFontComboBox_SetVisible_Callback qfontcombobox_setvisible_callback = nullptr;
    QFontComboBox_HeightForWidth_Callback qfontcombobox_heightforwidth_callback = nullptr;
    QFontComboBox_HasHeightForWidth_Callback qfontcombobox_hasheightforwidth_callback = nullptr;
    QFontComboBox_PaintEngine_Callback qfontcombobox_paintengine_callback = nullptr;
    QFontComboBox_MouseDoubleClickEvent_Callback qfontcombobox_mousedoubleclickevent_callback = nullptr;
    QFontComboBox_MouseMoveEvent_Callback qfontcombobox_mousemoveevent_callback = nullptr;
    QFontComboBox_EnterEvent_Callback qfontcombobox_enterevent_callback = nullptr;
    QFontComboBox_LeaveEvent_Callback qfontcombobox_leaveevent_callback = nullptr;
    QFontComboBox_MoveEvent_Callback qfontcombobox_moveevent_callback = nullptr;
    QFontComboBox_CloseEvent_Callback qfontcombobox_closeevent_callback = nullptr;
    QFontComboBox_TabletEvent_Callback qfontcombobox_tabletevent_callback = nullptr;
    QFontComboBox_ActionEvent_Callback qfontcombobox_actionevent_callback = nullptr;
    QFontComboBox_DragEnterEvent_Callback qfontcombobox_dragenterevent_callback = nullptr;
    QFontComboBox_DragMoveEvent_Callback qfontcombobox_dragmoveevent_callback = nullptr;
    QFontComboBox_DragLeaveEvent_Callback qfontcombobox_dragleaveevent_callback = nullptr;
    QFontComboBox_DropEvent_Callback qfontcombobox_dropevent_callback = nullptr;
    QFontComboBox_NativeEvent_Callback qfontcombobox_nativeevent_callback = nullptr;
    QFontComboBox_Metric_Callback qfontcombobox_metric_callback = nullptr;
    QFontComboBox_InitPainter_Callback qfontcombobox_initpainter_callback = nullptr;
    QFontComboBox_Redirected_Callback qfontcombobox_redirected_callback = nullptr;
    QFontComboBox_SharedPainter_Callback qfontcombobox_sharedpainter_callback = nullptr;
    QFontComboBox_FocusNextPrevChild_Callback qfontcombobox_focusnextprevchild_callback = nullptr;
    QFontComboBox_EventFilter_Callback qfontcombobox_eventfilter_callback = nullptr;
    QFontComboBox_TimerEvent_Callback qfontcombobox_timerevent_callback = nullptr;
    QFontComboBox_ChildEvent_Callback qfontcombobox_childevent_callback = nullptr;
    QFontComboBox_CustomEvent_Callback qfontcombobox_customevent_callback = nullptr;
    QFontComboBox_ConnectNotify_Callback qfontcombobox_connectnotify_callback = nullptr;
    QFontComboBox_DisconnectNotify_Callback qfontcombobox_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QFontComboBox {
        using QFontComboBox::actionEvent;
        using QFontComboBox::changeEvent;
        using QFontComboBox::childEvent;
        using QFontComboBox::closeEvent;
        using QFontComboBox::connectNotify;
        using QFontComboBox::contextMenuEvent;
        using QFontComboBox::customEvent;
        using QFontComboBox::disconnectNotify;
        using QFontComboBox::dragEnterEvent;
        using QFontComboBox::dragLeaveEvent;
        using QFontComboBox::dragMoveEvent;
        using QFontComboBox::dropEvent;
        using QFontComboBox::enterEvent;
        using QFontComboBox::event;
        using QFontComboBox::focusInEvent;
        using QFontComboBox::focusNextPrevChild;
        using QFontComboBox::focusOutEvent;
        using QFontComboBox::hideEvent;
        using QFontComboBox::initPainter;
        using QFontComboBox::initStyleOption;
        using QFontComboBox::inputMethodEvent;
        using QFontComboBox::keyPressEvent;
        using QFontComboBox::keyReleaseEvent;
        using QFontComboBox::leaveEvent;
        using QFontComboBox::metric;
        using QFontComboBox::mouseDoubleClickEvent;
        using QFontComboBox::mouseMoveEvent;
        using QFontComboBox::mousePressEvent;
        using QFontComboBox::mouseReleaseEvent;
        using QFontComboBox::moveEvent;
        using QFontComboBox::nativeEvent;
        using QFontComboBox::paintEvent;
        using QFontComboBox::redirected;
        using QFontComboBox::resizeEvent;
        using QFontComboBox::sharedPainter;
        using QFontComboBox::showEvent;
        using QFontComboBox::tabletEvent;
        using QFontComboBox::timerEvent;
        using QFontComboBox::wheelEvent;
    };

    VirtualQFontComboBox(QWidget* parent) : QFontComboBox(parent) {};
    VirtualQFontComboBox() : QFontComboBox() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qfontcombobox_metaobject_callback) {
            QMetaObject* callback_ret = qfontcombobox_metaobject_callback(this);
            return callback_ret;
        }
        return QFontComboBox::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qfontcombobox_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qfontcombobox_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QFontComboBox::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qfontcombobox_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qfontcombobox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QFontComboBox::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qfontcombobox_sizehint_callback) {
            QSize* callback_ret = qfontcombobox_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QFontComboBox::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qfontcombobox_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qfontcombobox_event_callback(this, cbval1);
            return callback_ret;
        }
        return QFontComboBox::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (qfontcombobox_setmodel_callback) {
            QAbstractItemModel* cbval1 = model;
            qfontcombobox_setmodel_callback(this, cbval1);
            return;
        }
        QFontComboBox::setModel(model);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qfontcombobox_minimumsizehint_callback) {
            QSize* callback_ret = qfontcombobox_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QFontComboBox::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void showPopup() override {
        if (qfontcombobox_showpopup_callback) {
            qfontcombobox_showpopup_callback(this);
            return;
        }
        QFontComboBox::showPopup();
    }

    // Virtual method for C ABI access and custom callback
    virtual void hidePopup() override {
        if (qfontcombobox_hidepopup_callback) {
            qfontcombobox_hidepopup_callback(this);
            return;
        }
        QFontComboBox::hidePopup();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qfontcombobox_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qfontcombobox_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QFontComboBox::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (qfontcombobox_focusinevent_callback) {
            QFocusEvent* cbval1 = e;
            qfontcombobox_focusinevent_callback(this, cbval1);
            return;
        }
        QFontComboBox::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (qfontcombobox_focusoutevent_callback) {
            QFocusEvent* cbval1 = e;
            qfontcombobox_focusoutevent_callback(this, cbval1);
            return;
        }
        QFontComboBox::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qfontcombobox_changeevent_callback) {
            QEvent* cbval1 = e;
            qfontcombobox_changeevent_callback(this, cbval1);
            return;
        }
        QFontComboBox::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (qfontcombobox_resizeevent_callback) {
            QResizeEvent* cbval1 = e;
            qfontcombobox_resizeevent_callback(this, cbval1);
            return;
        }
        QFontComboBox::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qfontcombobox_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            qfontcombobox_paintevent_callback(this, cbval1);
            return;
        }
        QFontComboBox::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* e) override {
        if (qfontcombobox_showevent_callback) {
            QShowEvent* cbval1 = e;
            qfontcombobox_showevent_callback(this, cbval1);
            return;
        }
        QFontComboBox::showEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* e) override {
        if (qfontcombobox_hideevent_callback) {
            QHideEvent* cbval1 = e;
            qfontcombobox_hideevent_callback(this, cbval1);
            return;
        }
        QFontComboBox::hideEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (qfontcombobox_mousepressevent_callback) {
            QMouseEvent* cbval1 = e;
            qfontcombobox_mousepressevent_callback(this, cbval1);
            return;
        }
        QFontComboBox::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qfontcombobox_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            qfontcombobox_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QFontComboBox::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (qfontcombobox_keypressevent_callback) {
            QKeyEvent* cbval1 = e;
            qfontcombobox_keypressevent_callback(this, cbval1);
            return;
        }
        QFontComboBox::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (qfontcombobox_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            qfontcombobox_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QFontComboBox::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (qfontcombobox_wheelevent_callback) {
            QWheelEvent* cbval1 = e;
            qfontcombobox_wheelevent_callback(this, cbval1);
            return;
        }
        QFontComboBox::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (qfontcombobox_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = e;
            qfontcombobox_contextmenuevent_callback(this, cbval1);
            return;
        }
        QFontComboBox::contextMenuEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qfontcombobox_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qfontcombobox_inputmethodevent_callback(this, cbval1);
            return;
        }
        QFontComboBox::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionComboBox* option) const override {
        if (qfontcombobox_initstyleoption_callback) {
            QStyleOptionComboBox* cbval1 = option;
            qfontcombobox_initstyleoption_callback(this, cbval1);
            return;
        }
        QFontComboBox::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qfontcombobox_devtype_callback) {
            int callback_ret = qfontcombobox_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QFontComboBox::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qfontcombobox_setvisible_callback) {
            bool cbval1 = visible;
            qfontcombobox_setvisible_callback(this, cbval1);
            return;
        }
        QFontComboBox::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qfontcombobox_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qfontcombobox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QFontComboBox::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qfontcombobox_hasheightforwidth_callback) {
            bool callback_ret = qfontcombobox_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QFontComboBox::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qfontcombobox_paintengine_callback) {
            QPaintEngine* callback_ret = qfontcombobox_paintengine_callback(this);
            return callback_ret;
        }
        return QFontComboBox::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qfontcombobox_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qfontcombobox_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QFontComboBox::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qfontcombobox_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qfontcombobox_mousemoveevent_callback(this, cbval1);
            return;
        }
        QFontComboBox::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qfontcombobox_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qfontcombobox_enterevent_callback(this, cbval1);
            return;
        }
        QFontComboBox::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qfontcombobox_leaveevent_callback) {
            QEvent* cbval1 = event;
            qfontcombobox_leaveevent_callback(this, cbval1);
            return;
        }
        QFontComboBox::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qfontcombobox_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qfontcombobox_moveevent_callback(this, cbval1);
            return;
        }
        QFontComboBox::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qfontcombobox_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qfontcombobox_closeevent_callback(this, cbval1);
            return;
        }
        QFontComboBox::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qfontcombobox_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qfontcombobox_tabletevent_callback(this, cbval1);
            return;
        }
        QFontComboBox::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qfontcombobox_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qfontcombobox_actionevent_callback(this, cbval1);
            return;
        }
        QFontComboBox::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qfontcombobox_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qfontcombobox_dragenterevent_callback(this, cbval1);
            return;
        }
        QFontComboBox::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qfontcombobox_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qfontcombobox_dragmoveevent_callback(this, cbval1);
            return;
        }
        QFontComboBox::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qfontcombobox_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qfontcombobox_dragleaveevent_callback(this, cbval1);
            return;
        }
        QFontComboBox::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qfontcombobox_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qfontcombobox_dropevent_callback(this, cbval1);
            return;
        }
        QFontComboBox::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qfontcombobox_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qfontcombobox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QFontComboBox::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qfontcombobox_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qfontcombobox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QFontComboBox::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qfontcombobox_initpainter_callback) {
            QPainter* cbval1 = painter;
            qfontcombobox_initpainter_callback(this, cbval1);
            return;
        }
        QFontComboBox::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qfontcombobox_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qfontcombobox_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QFontComboBox::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qfontcombobox_sharedpainter_callback) {
            QPainter* callback_ret = qfontcombobox_sharedpainter_callback(this);
            return callback_ret;
        }
        return QFontComboBox::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qfontcombobox_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qfontcombobox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QFontComboBox::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qfontcombobox_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qfontcombobox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QFontComboBox::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qfontcombobox_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qfontcombobox_timerevent_callback(this, cbval1);
            return;
        }
        QFontComboBox::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qfontcombobox_childevent_callback) {
            QChildEvent* cbval1 = event;
            qfontcombobox_childevent_callback(this, cbval1);
            return;
        }
        QFontComboBox::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qfontcombobox_customevent_callback) {
            QEvent* cbval1 = event;
            qfontcombobox_customevent_callback(this, cbval1);
            return;
        }
        QFontComboBox::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qfontcombobox_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qfontcombobox_connectnotify_callback(this, cbval1);
            return;
        }
        QFontComboBox::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qfontcombobox_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qfontcombobox_disconnectnotify_callback(this, cbval1);
            return;
        }
        QFontComboBox::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QFontComboBox_SuperEvent(QFontComboBox* self, QEvent* e);
    friend void QFontComboBox_SuperFocusInEvent(QFontComboBox* self, QFocusEvent* e);
    friend void QFontComboBox_SuperFocusOutEvent(QFontComboBox* self, QFocusEvent* e);
    friend void QFontComboBox_SuperChangeEvent(QFontComboBox* self, QEvent* e);
    friend void QFontComboBox_SuperResizeEvent(QFontComboBox* self, QResizeEvent* e);
    friend void QFontComboBox_SuperPaintEvent(QFontComboBox* self, QPaintEvent* e);
    friend void QFontComboBox_SuperShowEvent(QFontComboBox* self, QShowEvent* e);
    friend void QFontComboBox_SuperHideEvent(QFontComboBox* self, QHideEvent* e);
    friend void QFontComboBox_SuperMousePressEvent(QFontComboBox* self, QMouseEvent* e);
    friend void QFontComboBox_SuperMouseReleaseEvent(QFontComboBox* self, QMouseEvent* e);
    friend void QFontComboBox_SuperKeyPressEvent(QFontComboBox* self, QKeyEvent* e);
    friend void QFontComboBox_SuperKeyReleaseEvent(QFontComboBox* self, QKeyEvent* e);
    friend void QFontComboBox_SuperWheelEvent(QFontComboBox* self, QWheelEvent* e);
    friend void QFontComboBox_SuperContextMenuEvent(QFontComboBox* self, QContextMenuEvent* e);
    friend void QFontComboBox_SuperInputMethodEvent(QFontComboBox* self, QInputMethodEvent* param1);
    friend void QFontComboBox_SuperInitStyleOption(const QFontComboBox* self, QStyleOptionComboBox* option);
    friend void QFontComboBox_SuperMouseDoubleClickEvent(QFontComboBox* self, QMouseEvent* event);
    friend void QFontComboBox_SuperMouseMoveEvent(QFontComboBox* self, QMouseEvent* event);
    friend void QFontComboBox_SuperEnterEvent(QFontComboBox* self, QEnterEvent* event);
    friend void QFontComboBox_SuperLeaveEvent(QFontComboBox* self, QEvent* event);
    friend void QFontComboBox_SuperMoveEvent(QFontComboBox* self, QMoveEvent* event);
    friend void QFontComboBox_SuperCloseEvent(QFontComboBox* self, QCloseEvent* event);
    friend void QFontComboBox_SuperTabletEvent(QFontComboBox* self, QTabletEvent* event);
    friend void QFontComboBox_SuperActionEvent(QFontComboBox* self, QActionEvent* event);
    friend void QFontComboBox_SuperDragEnterEvent(QFontComboBox* self, QDragEnterEvent* event);
    friend void QFontComboBox_SuperDragMoveEvent(QFontComboBox* self, QDragMoveEvent* event);
    friend void QFontComboBox_SuperDragLeaveEvent(QFontComboBox* self, QDragLeaveEvent* event);
    friend void QFontComboBox_SuperDropEvent(QFontComboBox* self, QDropEvent* event);
    friend bool QFontComboBox_SuperNativeEvent(QFontComboBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QFontComboBox_SuperMetric(const QFontComboBox* self, int param1);
    friend void QFontComboBox_SuperInitPainter(const QFontComboBox* self, QPainter* painter);
    friend QPaintDevice* QFontComboBox_SuperRedirected(const QFontComboBox* self, QPoint* offset);
    friend QPainter* QFontComboBox_SuperSharedPainter(const QFontComboBox* self);
    friend bool QFontComboBox_SuperFocusNextPrevChild(QFontComboBox* self, bool next);
    friend void QFontComboBox_SuperTimerEvent(QFontComboBox* self, QTimerEvent* event);
    friend void QFontComboBox_SuperChildEvent(QFontComboBox* self, QChildEvent* event);
    friend void QFontComboBox_SuperCustomEvent(QFontComboBox* self, QEvent* event);
    friend void QFontComboBox_SuperConnectNotify(QFontComboBox* self, const QMetaMethod* signal);
    friend void QFontComboBox_SuperDisconnectNotify(QFontComboBox* self, const QMetaMethod* signal);
};

#endif
