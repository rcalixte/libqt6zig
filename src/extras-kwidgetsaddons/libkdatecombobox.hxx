#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKDATECOMBOBOX_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKDATECOMBOBOX_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KDateComboBox
class VirtualKDateComboBox final : public KDateComboBox {
  public:
    // Virtual class public types (including callbacks and access types)
    using KDateComboBox_MetaObject_Callback = QMetaObject* (*)(const KDateComboBox*);
    using KDateComboBox_Metacast_Callback = void* (*)(KDateComboBox*, const char*);
    using KDateComboBox_Metacall_Callback = int (*)(KDateComboBox*, int, int, void**);
    using KDateComboBox_EventFilter_Callback = bool (*)(KDateComboBox*, QObject*, QEvent*);
    using KDateComboBox_ShowPopup_Callback = void (*)(KDateComboBox*);
    using KDateComboBox_HidePopup_Callback = void (*)(KDateComboBox*);
    using KDateComboBox_MousePressEvent_Callback = void (*)(KDateComboBox*, QMouseEvent*);
    using KDateComboBox_WheelEvent_Callback = void (*)(KDateComboBox*, QWheelEvent*);
    using KDateComboBox_KeyPressEvent_Callback = void (*)(KDateComboBox*, QKeyEvent*);
    using KDateComboBox_FocusInEvent_Callback = void (*)(KDateComboBox*, QFocusEvent*);
    using KDateComboBox_FocusOutEvent_Callback = void (*)(KDateComboBox*, QFocusEvent*);
    using KDateComboBox_ResizeEvent_Callback = void (*)(KDateComboBox*, QResizeEvent*);
    using KDateComboBox_AssignDate_Callback = void (*)(KDateComboBox*, QDate*);
    using KDateComboBox_SetModel_Callback = void (*)(KDateComboBox*, QAbstractItemModel*);
    using KDateComboBox_SizeHint_Callback = QSize* (*)(const KDateComboBox*);
    using KDateComboBox_MinimumSizeHint_Callback = QSize* (*)(const KDateComboBox*);
    using KDateComboBox_Event_Callback = bool (*)(KDateComboBox*, QEvent*);
    using KDateComboBox_InputMethodQuery_Callback = QVariant* (*)(const KDateComboBox*, int);
    using KDateComboBox_ChangeEvent_Callback = void (*)(KDateComboBox*, QEvent*);
    using KDateComboBox_PaintEvent_Callback = void (*)(KDateComboBox*, QPaintEvent*);
    using KDateComboBox_ShowEvent_Callback = void (*)(KDateComboBox*, QShowEvent*);
    using KDateComboBox_HideEvent_Callback = void (*)(KDateComboBox*, QHideEvent*);
    using KDateComboBox_MouseReleaseEvent_Callback = void (*)(KDateComboBox*, QMouseEvent*);
    using KDateComboBox_KeyReleaseEvent_Callback = void (*)(KDateComboBox*, QKeyEvent*);
    using KDateComboBox_ContextMenuEvent_Callback = void (*)(KDateComboBox*, QContextMenuEvent*);
    using KDateComboBox_InputMethodEvent_Callback = void (*)(KDateComboBox*, QInputMethodEvent*);
    using KDateComboBox_InitStyleOption_Callback = void (*)(const KDateComboBox*, QStyleOptionComboBox*);
    using KDateComboBox_DevType_Callback = int (*)(const KDateComboBox*);
    using KDateComboBox_SetVisible_Callback = void (*)(KDateComboBox*, bool);
    using KDateComboBox_HeightForWidth_Callback = int (*)(const KDateComboBox*, int);
    using KDateComboBox_HasHeightForWidth_Callback = bool (*)(const KDateComboBox*);
    using KDateComboBox_PaintEngine_Callback = QPaintEngine* (*)(const KDateComboBox*);
    using KDateComboBox_MouseDoubleClickEvent_Callback = void (*)(KDateComboBox*, QMouseEvent*);
    using KDateComboBox_MouseMoveEvent_Callback = void (*)(KDateComboBox*, QMouseEvent*);
    using KDateComboBox_EnterEvent_Callback = void (*)(KDateComboBox*, QEnterEvent*);
    using KDateComboBox_LeaveEvent_Callback = void (*)(KDateComboBox*, QEvent*);
    using KDateComboBox_MoveEvent_Callback = void (*)(KDateComboBox*, QMoveEvent*);
    using KDateComboBox_CloseEvent_Callback = void (*)(KDateComboBox*, QCloseEvent*);
    using KDateComboBox_TabletEvent_Callback = void (*)(KDateComboBox*, QTabletEvent*);
    using KDateComboBox_ActionEvent_Callback = void (*)(KDateComboBox*, QActionEvent*);
    using KDateComboBox_DragEnterEvent_Callback = void (*)(KDateComboBox*, QDragEnterEvent*);
    using KDateComboBox_DragMoveEvent_Callback = void (*)(KDateComboBox*, QDragMoveEvent*);
    using KDateComboBox_DragLeaveEvent_Callback = void (*)(KDateComboBox*, QDragLeaveEvent*);
    using KDateComboBox_DropEvent_Callback = void (*)(KDateComboBox*, QDropEvent*);
    using KDateComboBox_NativeEvent_Callback = bool (*)(KDateComboBox*, libqt_string, void*, intptr_t*);
    using KDateComboBox_Metric_Callback = int (*)(const KDateComboBox*, int);
    using KDateComboBox_InitPainter_Callback = void (*)(const KDateComboBox*, QPainter*);
    using KDateComboBox_Redirected_Callback = QPaintDevice* (*)(const KDateComboBox*, QPoint*);
    using KDateComboBox_SharedPainter_Callback = QPainter* (*)(const KDateComboBox*);
    using KDateComboBox_FocusNextPrevChild_Callback = bool (*)(KDateComboBox*, bool);
    using KDateComboBox_TimerEvent_Callback = void (*)(KDateComboBox*, QTimerEvent*);
    using KDateComboBox_ChildEvent_Callback = void (*)(KDateComboBox*, QChildEvent*);
    using KDateComboBox_CustomEvent_Callback = void (*)(KDateComboBox*, QEvent*);
    using KDateComboBox_ConnectNotify_Callback = void (*)(KDateComboBox*, QMetaMethod*);
    using KDateComboBox_DisconnectNotify_Callback = void (*)(KDateComboBox*, QMetaMethod*);
    using KDateComboBox::create;
    using KDateComboBox::destroy;
    using KDateComboBox::focusNextChild;
    using KDateComboBox::focusPreviousChild;
    using KDateComboBox::getDecodedMetricF;
    using KDateComboBox::isSignalConnected;
    using KDateComboBox::receivers;
    using KDateComboBox::sender;
    using KDateComboBox::senderSignalIndex;
    using KDateComboBox::updateMicroFocus;

    // Instance callback storage
    KDateComboBox_MetaObject_Callback kdatecombobox_metaobject_callback = nullptr;
    KDateComboBox_Metacast_Callback kdatecombobox_metacast_callback = nullptr;
    KDateComboBox_Metacall_Callback kdatecombobox_metacall_callback = nullptr;
    KDateComboBox_EventFilter_Callback kdatecombobox_eventfilter_callback = nullptr;
    KDateComboBox_ShowPopup_Callback kdatecombobox_showpopup_callback = nullptr;
    KDateComboBox_HidePopup_Callback kdatecombobox_hidepopup_callback = nullptr;
    KDateComboBox_MousePressEvent_Callback kdatecombobox_mousepressevent_callback = nullptr;
    KDateComboBox_WheelEvent_Callback kdatecombobox_wheelevent_callback = nullptr;
    KDateComboBox_KeyPressEvent_Callback kdatecombobox_keypressevent_callback = nullptr;
    KDateComboBox_FocusInEvent_Callback kdatecombobox_focusinevent_callback = nullptr;
    KDateComboBox_FocusOutEvent_Callback kdatecombobox_focusoutevent_callback = nullptr;
    KDateComboBox_ResizeEvent_Callback kdatecombobox_resizeevent_callback = nullptr;
    KDateComboBox_AssignDate_Callback kdatecombobox_assigndate_callback = nullptr;
    KDateComboBox_SetModel_Callback kdatecombobox_setmodel_callback = nullptr;
    KDateComboBox_SizeHint_Callback kdatecombobox_sizehint_callback = nullptr;
    KDateComboBox_MinimumSizeHint_Callback kdatecombobox_minimumsizehint_callback = nullptr;
    KDateComboBox_Event_Callback kdatecombobox_event_callback = nullptr;
    KDateComboBox_InputMethodQuery_Callback kdatecombobox_inputmethodquery_callback = nullptr;
    KDateComboBox_ChangeEvent_Callback kdatecombobox_changeevent_callback = nullptr;
    KDateComboBox_PaintEvent_Callback kdatecombobox_paintevent_callback = nullptr;
    KDateComboBox_ShowEvent_Callback kdatecombobox_showevent_callback = nullptr;
    KDateComboBox_HideEvent_Callback kdatecombobox_hideevent_callback = nullptr;
    KDateComboBox_MouseReleaseEvent_Callback kdatecombobox_mousereleaseevent_callback = nullptr;
    KDateComboBox_KeyReleaseEvent_Callback kdatecombobox_keyreleaseevent_callback = nullptr;
    KDateComboBox_ContextMenuEvent_Callback kdatecombobox_contextmenuevent_callback = nullptr;
    KDateComboBox_InputMethodEvent_Callback kdatecombobox_inputmethodevent_callback = nullptr;
    KDateComboBox_InitStyleOption_Callback kdatecombobox_initstyleoption_callback = nullptr;
    KDateComboBox_DevType_Callback kdatecombobox_devtype_callback = nullptr;
    KDateComboBox_SetVisible_Callback kdatecombobox_setvisible_callback = nullptr;
    KDateComboBox_HeightForWidth_Callback kdatecombobox_heightforwidth_callback = nullptr;
    KDateComboBox_HasHeightForWidth_Callback kdatecombobox_hasheightforwidth_callback = nullptr;
    KDateComboBox_PaintEngine_Callback kdatecombobox_paintengine_callback = nullptr;
    KDateComboBox_MouseDoubleClickEvent_Callback kdatecombobox_mousedoubleclickevent_callback = nullptr;
    KDateComboBox_MouseMoveEvent_Callback kdatecombobox_mousemoveevent_callback = nullptr;
    KDateComboBox_EnterEvent_Callback kdatecombobox_enterevent_callback = nullptr;
    KDateComboBox_LeaveEvent_Callback kdatecombobox_leaveevent_callback = nullptr;
    KDateComboBox_MoveEvent_Callback kdatecombobox_moveevent_callback = nullptr;
    KDateComboBox_CloseEvent_Callback kdatecombobox_closeevent_callback = nullptr;
    KDateComboBox_TabletEvent_Callback kdatecombobox_tabletevent_callback = nullptr;
    KDateComboBox_ActionEvent_Callback kdatecombobox_actionevent_callback = nullptr;
    KDateComboBox_DragEnterEvent_Callback kdatecombobox_dragenterevent_callback = nullptr;
    KDateComboBox_DragMoveEvent_Callback kdatecombobox_dragmoveevent_callback = nullptr;
    KDateComboBox_DragLeaveEvent_Callback kdatecombobox_dragleaveevent_callback = nullptr;
    KDateComboBox_DropEvent_Callback kdatecombobox_dropevent_callback = nullptr;
    KDateComboBox_NativeEvent_Callback kdatecombobox_nativeevent_callback = nullptr;
    KDateComboBox_Metric_Callback kdatecombobox_metric_callback = nullptr;
    KDateComboBox_InitPainter_Callback kdatecombobox_initpainter_callback = nullptr;
    KDateComboBox_Redirected_Callback kdatecombobox_redirected_callback = nullptr;
    KDateComboBox_SharedPainter_Callback kdatecombobox_sharedpainter_callback = nullptr;
    KDateComboBox_FocusNextPrevChild_Callback kdatecombobox_focusnextprevchild_callback = nullptr;
    KDateComboBox_TimerEvent_Callback kdatecombobox_timerevent_callback = nullptr;
    KDateComboBox_ChildEvent_Callback kdatecombobox_childevent_callback = nullptr;
    KDateComboBox_CustomEvent_Callback kdatecombobox_customevent_callback = nullptr;
    KDateComboBox_ConnectNotify_Callback kdatecombobox_connectnotify_callback = nullptr;
    KDateComboBox_DisconnectNotify_Callback kdatecombobox_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KDateComboBox {
        using KDateComboBox::actionEvent;
        using KDateComboBox::assignDate;
        using KDateComboBox::changeEvent;
        using KDateComboBox::childEvent;
        using KDateComboBox::closeEvent;
        using KDateComboBox::connectNotify;
        using KDateComboBox::contextMenuEvent;
        using KDateComboBox::customEvent;
        using KDateComboBox::disconnectNotify;
        using KDateComboBox::dragEnterEvent;
        using KDateComboBox::dragLeaveEvent;
        using KDateComboBox::dragMoveEvent;
        using KDateComboBox::dropEvent;
        using KDateComboBox::enterEvent;
        using KDateComboBox::eventFilter;
        using KDateComboBox::focusInEvent;
        using KDateComboBox::focusNextPrevChild;
        using KDateComboBox::focusOutEvent;
        using KDateComboBox::hideEvent;
        using KDateComboBox::hidePopup;
        using KDateComboBox::initPainter;
        using KDateComboBox::initStyleOption;
        using KDateComboBox::inputMethodEvent;
        using KDateComboBox::keyPressEvent;
        using KDateComboBox::keyReleaseEvent;
        using KDateComboBox::leaveEvent;
        using KDateComboBox::metric;
        using KDateComboBox::mouseDoubleClickEvent;
        using KDateComboBox::mouseMoveEvent;
        using KDateComboBox::mousePressEvent;
        using KDateComboBox::mouseReleaseEvent;
        using KDateComboBox::moveEvent;
        using KDateComboBox::nativeEvent;
        using KDateComboBox::paintEvent;
        using KDateComboBox::redirected;
        using KDateComboBox::resizeEvent;
        using KDateComboBox::sharedPainter;
        using KDateComboBox::showEvent;
        using KDateComboBox::showPopup;
        using KDateComboBox::tabletEvent;
        using KDateComboBox::timerEvent;
        using KDateComboBox::wheelEvent;
    };

    VirtualKDateComboBox(QWidget* parent) : KDateComboBox(parent) {};
    VirtualKDateComboBox() : KDateComboBox() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kdatecombobox_metaobject_callback) {
            QMetaObject* callback_ret = kdatecombobox_metaobject_callback(this);
            return callback_ret;
        }
        return KDateComboBox::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kdatecombobox_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kdatecombobox_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KDateComboBox::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kdatecombobox_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kdatecombobox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KDateComboBox::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (kdatecombobox_eventfilter_callback) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;
            bool callback_ret = kdatecombobox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KDateComboBox::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showPopup() override {
        if (kdatecombobox_showpopup_callback) {
            kdatecombobox_showpopup_callback(this);
            return;
        }
        KDateComboBox::showPopup();
    }

    // Virtual method for C ABI access and custom callback
    virtual void hidePopup() override {
        if (kdatecombobox_hidepopup_callback) {
            kdatecombobox_hidepopup_callback(this);
            return;
        }
        KDateComboBox::hidePopup();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kdatecombobox_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kdatecombobox_mousepressevent_callback(this, cbval1);
            return;
        }
        KDateComboBox::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kdatecombobox_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kdatecombobox_wheelevent_callback(this, cbval1);
            return;
        }
        KDateComboBox::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kdatecombobox_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kdatecombobox_keypressevent_callback(this, cbval1);
            return;
        }
        KDateComboBox::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kdatecombobox_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kdatecombobox_focusinevent_callback(this, cbval1);
            return;
        }
        KDateComboBox::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kdatecombobox_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kdatecombobox_focusoutevent_callback(this, cbval1);
            return;
        }
        KDateComboBox::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kdatecombobox_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kdatecombobox_resizeevent_callback(this, cbval1);
            return;
        }
        KDateComboBox::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void assignDate(const QDate& date) override {
        if (kdatecombobox_assigndate_callback) {
            const QDate& date_ret = date;
            // Cast returned reference into pointer
            QDate* cbval1 = const_cast<QDate*>(&date_ret);
            kdatecombobox_assigndate_callback(this, cbval1);
            return;
        }
        KDateComboBox::assignDate(date);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (kdatecombobox_setmodel_callback) {
            QAbstractItemModel* cbval1 = model;
            kdatecombobox_setmodel_callback(this, cbval1);
            return;
        }
        KDateComboBox::setModel(model);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kdatecombobox_sizehint_callback) {
            QSize* callback_ret = kdatecombobox_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDateComboBox::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kdatecombobox_minimumsizehint_callback) {
            QSize* callback_ret = kdatecombobox_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDateComboBox::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kdatecombobox_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kdatecombobox_event_callback(this, cbval1);
            return callback_ret;
        }
        return KDateComboBox::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kdatecombobox_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kdatecombobox_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDateComboBox::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (kdatecombobox_changeevent_callback) {
            QEvent* cbval1 = e;
            kdatecombobox_changeevent_callback(this, cbval1);
            return;
        }
        KDateComboBox::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (kdatecombobox_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            kdatecombobox_paintevent_callback(this, cbval1);
            return;
        }
        KDateComboBox::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* e) override {
        if (kdatecombobox_showevent_callback) {
            QShowEvent* cbval1 = e;
            kdatecombobox_showevent_callback(this, cbval1);
            return;
        }
        KDateComboBox::showEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* e) override {
        if (kdatecombobox_hideevent_callback) {
            QHideEvent* cbval1 = e;
            kdatecombobox_hideevent_callback(this, cbval1);
            return;
        }
        KDateComboBox::hideEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (kdatecombobox_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            kdatecombobox_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KDateComboBox::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (kdatecombobox_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            kdatecombobox_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KDateComboBox::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (kdatecombobox_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = e;
            kdatecombobox_contextmenuevent_callback(this, cbval1);
            return;
        }
        KDateComboBox::contextMenuEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kdatecombobox_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kdatecombobox_inputmethodevent_callback(this, cbval1);
            return;
        }
        KDateComboBox::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionComboBox* option) const override {
        if (kdatecombobox_initstyleoption_callback) {
            QStyleOptionComboBox* cbval1 = option;
            kdatecombobox_initstyleoption_callback(this, cbval1);
            return;
        }
        KDateComboBox::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kdatecombobox_devtype_callback) {
            int callback_ret = kdatecombobox_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KDateComboBox::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kdatecombobox_setvisible_callback) {
            bool cbval1 = visible;
            kdatecombobox_setvisible_callback(this, cbval1);
            return;
        }
        KDateComboBox::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kdatecombobox_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kdatecombobox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KDateComboBox::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kdatecombobox_hasheightforwidth_callback) {
            bool callback_ret = kdatecombobox_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KDateComboBox::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kdatecombobox_paintengine_callback) {
            QPaintEngine* callback_ret = kdatecombobox_paintengine_callback(this);
            return callback_ret;
        }
        return KDateComboBox::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kdatecombobox_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kdatecombobox_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KDateComboBox::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kdatecombobox_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kdatecombobox_mousemoveevent_callback(this, cbval1);
            return;
        }
        KDateComboBox::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kdatecombobox_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kdatecombobox_enterevent_callback(this, cbval1);
            return;
        }
        KDateComboBox::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kdatecombobox_leaveevent_callback) {
            QEvent* cbval1 = event;
            kdatecombobox_leaveevent_callback(this, cbval1);
            return;
        }
        KDateComboBox::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kdatecombobox_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kdatecombobox_moveevent_callback(this, cbval1);
            return;
        }
        KDateComboBox::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kdatecombobox_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kdatecombobox_closeevent_callback(this, cbval1);
            return;
        }
        KDateComboBox::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kdatecombobox_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kdatecombobox_tabletevent_callback(this, cbval1);
            return;
        }
        KDateComboBox::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kdatecombobox_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kdatecombobox_actionevent_callback(this, cbval1);
            return;
        }
        KDateComboBox::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kdatecombobox_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kdatecombobox_dragenterevent_callback(this, cbval1);
            return;
        }
        KDateComboBox::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kdatecombobox_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kdatecombobox_dragmoveevent_callback(this, cbval1);
            return;
        }
        KDateComboBox::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kdatecombobox_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kdatecombobox_dragleaveevent_callback(this, cbval1);
            return;
        }
        KDateComboBox::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kdatecombobox_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kdatecombobox_dropevent_callback(this, cbval1);
            return;
        }
        KDateComboBox::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kdatecombobox_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kdatecombobox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KDateComboBox::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kdatecombobox_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kdatecombobox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KDateComboBox::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kdatecombobox_initpainter_callback) {
            QPainter* cbval1 = painter;
            kdatecombobox_initpainter_callback(this, cbval1);
            return;
        }
        KDateComboBox::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kdatecombobox_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kdatecombobox_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KDateComboBox::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kdatecombobox_sharedpainter_callback) {
            QPainter* callback_ret = kdatecombobox_sharedpainter_callback(this);
            return callback_ret;
        }
        return KDateComboBox::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kdatecombobox_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kdatecombobox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KDateComboBox::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kdatecombobox_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kdatecombobox_timerevent_callback(this, cbval1);
            return;
        }
        KDateComboBox::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kdatecombobox_childevent_callback) {
            QChildEvent* cbval1 = event;
            kdatecombobox_childevent_callback(this, cbval1);
            return;
        }
        KDateComboBox::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kdatecombobox_customevent_callback) {
            QEvent* cbval1 = event;
            kdatecombobox_customevent_callback(this, cbval1);
            return;
        }
        KDateComboBox::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kdatecombobox_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kdatecombobox_connectnotify_callback(this, cbval1);
            return;
        }
        KDateComboBox::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kdatecombobox_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kdatecombobox_disconnectnotify_callback(this, cbval1);
            return;
        }
        KDateComboBox::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KDateComboBox_SuperEventFilter(KDateComboBox* self, QObject* object, QEvent* event);
    friend void KDateComboBox_SuperShowPopup(KDateComboBox* self);
    friend void KDateComboBox_SuperHidePopup(KDateComboBox* self);
    friend void KDateComboBox_SuperMousePressEvent(KDateComboBox* self, QMouseEvent* event);
    friend void KDateComboBox_SuperWheelEvent(KDateComboBox* self, QWheelEvent* event);
    friend void KDateComboBox_SuperKeyPressEvent(KDateComboBox* self, QKeyEvent* event);
    friend void KDateComboBox_SuperFocusInEvent(KDateComboBox* self, QFocusEvent* event);
    friend void KDateComboBox_SuperFocusOutEvent(KDateComboBox* self, QFocusEvent* event);
    friend void KDateComboBox_SuperResizeEvent(KDateComboBox* self, QResizeEvent* event);
    friend void KDateComboBox_SuperAssignDate(KDateComboBox* self, const QDate* date);
    friend void KDateComboBox_SuperChangeEvent(KDateComboBox* self, QEvent* e);
    friend void KDateComboBox_SuperPaintEvent(KDateComboBox* self, QPaintEvent* e);
    friend void KDateComboBox_SuperShowEvent(KDateComboBox* self, QShowEvent* e);
    friend void KDateComboBox_SuperHideEvent(KDateComboBox* self, QHideEvent* e);
    friend void KDateComboBox_SuperMouseReleaseEvent(KDateComboBox* self, QMouseEvent* e);
    friend void KDateComboBox_SuperKeyReleaseEvent(KDateComboBox* self, QKeyEvent* e);
    friend void KDateComboBox_SuperContextMenuEvent(KDateComboBox* self, QContextMenuEvent* e);
    friend void KDateComboBox_SuperInputMethodEvent(KDateComboBox* self, QInputMethodEvent* param1);
    friend void KDateComboBox_SuperInitStyleOption(const KDateComboBox* self, QStyleOptionComboBox* option);
    friend void KDateComboBox_SuperMouseDoubleClickEvent(KDateComboBox* self, QMouseEvent* event);
    friend void KDateComboBox_SuperMouseMoveEvent(KDateComboBox* self, QMouseEvent* event);
    friend void KDateComboBox_SuperEnterEvent(KDateComboBox* self, QEnterEvent* event);
    friend void KDateComboBox_SuperLeaveEvent(KDateComboBox* self, QEvent* event);
    friend void KDateComboBox_SuperMoveEvent(KDateComboBox* self, QMoveEvent* event);
    friend void KDateComboBox_SuperCloseEvent(KDateComboBox* self, QCloseEvent* event);
    friend void KDateComboBox_SuperTabletEvent(KDateComboBox* self, QTabletEvent* event);
    friend void KDateComboBox_SuperActionEvent(KDateComboBox* self, QActionEvent* event);
    friend void KDateComboBox_SuperDragEnterEvent(KDateComboBox* self, QDragEnterEvent* event);
    friend void KDateComboBox_SuperDragMoveEvent(KDateComboBox* self, QDragMoveEvent* event);
    friend void KDateComboBox_SuperDragLeaveEvent(KDateComboBox* self, QDragLeaveEvent* event);
    friend void KDateComboBox_SuperDropEvent(KDateComboBox* self, QDropEvent* event);
    friend bool KDateComboBox_SuperNativeEvent(KDateComboBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KDateComboBox_SuperMetric(const KDateComboBox* self, int param1);
    friend void KDateComboBox_SuperInitPainter(const KDateComboBox* self, QPainter* painter);
    friend QPaintDevice* KDateComboBox_SuperRedirected(const KDateComboBox* self, QPoint* offset);
    friend QPainter* KDateComboBox_SuperSharedPainter(const KDateComboBox* self);
    friend bool KDateComboBox_SuperFocusNextPrevChild(KDateComboBox* self, bool next);
    friend void KDateComboBox_SuperTimerEvent(KDateComboBox* self, QTimerEvent* event);
    friend void KDateComboBox_SuperChildEvent(KDateComboBox* self, QChildEvent* event);
    friend void KDateComboBox_SuperCustomEvent(KDateComboBox* self, QEvent* event);
    friend void KDateComboBox_SuperConnectNotify(KDateComboBox* self, const QMetaMethod* signal);
    friend void KDateComboBox_SuperDisconnectNotify(KDateComboBox* self, const QMetaMethod* signal);
};

#endif
