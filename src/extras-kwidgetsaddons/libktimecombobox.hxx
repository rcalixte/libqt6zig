#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKTIMECOMBOBOX_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKTIMECOMBOBOX_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTimeComboBox
class VirtualKTimeComboBox final : public KTimeComboBox {
  public:
    // Virtual class public types (including callbacks and access types)
    using KTimeComboBox_MetaObject_Callback = QMetaObject* (*)(const KTimeComboBox*);
    using KTimeComboBox_Metacast_Callback = void* (*)(KTimeComboBox*, const char*);
    using KTimeComboBox_Metacall_Callback = int (*)(KTimeComboBox*, int, int, void**);
    using KTimeComboBox_EventFilter_Callback = bool (*)(KTimeComboBox*, QObject*, QEvent*);
    using KTimeComboBox_ShowPopup_Callback = void (*)(KTimeComboBox*);
    using KTimeComboBox_HidePopup_Callback = void (*)(KTimeComboBox*);
    using KTimeComboBox_MousePressEvent_Callback = void (*)(KTimeComboBox*, QMouseEvent*);
    using KTimeComboBox_WheelEvent_Callback = void (*)(KTimeComboBox*, QWheelEvent*);
    using KTimeComboBox_KeyPressEvent_Callback = void (*)(KTimeComboBox*, QKeyEvent*);
    using KTimeComboBox_FocusInEvent_Callback = void (*)(KTimeComboBox*, QFocusEvent*);
    using KTimeComboBox_FocusOutEvent_Callback = void (*)(KTimeComboBox*, QFocusEvent*);
    using KTimeComboBox_ResizeEvent_Callback = void (*)(KTimeComboBox*, QResizeEvent*);
    using KTimeComboBox_AssignTime_Callback = void (*)(KTimeComboBox*, QTime*);
    using KTimeComboBox_SetModel_Callback = void (*)(KTimeComboBox*, QAbstractItemModel*);
    using KTimeComboBox_SizeHint_Callback = QSize* (*)(const KTimeComboBox*);
    using KTimeComboBox_MinimumSizeHint_Callback = QSize* (*)(const KTimeComboBox*);
    using KTimeComboBox_Event_Callback = bool (*)(KTimeComboBox*, QEvent*);
    using KTimeComboBox_InputMethodQuery_Callback = QVariant* (*)(const KTimeComboBox*, int);
    using KTimeComboBox_ChangeEvent_Callback = void (*)(KTimeComboBox*, QEvent*);
    using KTimeComboBox_PaintEvent_Callback = void (*)(KTimeComboBox*, QPaintEvent*);
    using KTimeComboBox_ShowEvent_Callback = void (*)(KTimeComboBox*, QShowEvent*);
    using KTimeComboBox_HideEvent_Callback = void (*)(KTimeComboBox*, QHideEvent*);
    using KTimeComboBox_MouseReleaseEvent_Callback = void (*)(KTimeComboBox*, QMouseEvent*);
    using KTimeComboBox_KeyReleaseEvent_Callback = void (*)(KTimeComboBox*, QKeyEvent*);
    using KTimeComboBox_ContextMenuEvent_Callback = void (*)(KTimeComboBox*, QContextMenuEvent*);
    using KTimeComboBox_InputMethodEvent_Callback = void (*)(KTimeComboBox*, QInputMethodEvent*);
    using KTimeComboBox_InitStyleOption_Callback = void (*)(const KTimeComboBox*, QStyleOptionComboBox*);
    using KTimeComboBox_DevType_Callback = int (*)(const KTimeComboBox*);
    using KTimeComboBox_SetVisible_Callback = void (*)(KTimeComboBox*, bool);
    using KTimeComboBox_HeightForWidth_Callback = int (*)(const KTimeComboBox*, int);
    using KTimeComboBox_HasHeightForWidth_Callback = bool (*)(const KTimeComboBox*);
    using KTimeComboBox_PaintEngine_Callback = QPaintEngine* (*)(const KTimeComboBox*);
    using KTimeComboBox_MouseDoubleClickEvent_Callback = void (*)(KTimeComboBox*, QMouseEvent*);
    using KTimeComboBox_MouseMoveEvent_Callback = void (*)(KTimeComboBox*, QMouseEvent*);
    using KTimeComboBox_EnterEvent_Callback = void (*)(KTimeComboBox*, QEnterEvent*);
    using KTimeComboBox_LeaveEvent_Callback = void (*)(KTimeComboBox*, QEvent*);
    using KTimeComboBox_MoveEvent_Callback = void (*)(KTimeComboBox*, QMoveEvent*);
    using KTimeComboBox_CloseEvent_Callback = void (*)(KTimeComboBox*, QCloseEvent*);
    using KTimeComboBox_TabletEvent_Callback = void (*)(KTimeComboBox*, QTabletEvent*);
    using KTimeComboBox_ActionEvent_Callback = void (*)(KTimeComboBox*, QActionEvent*);
    using KTimeComboBox_DragEnterEvent_Callback = void (*)(KTimeComboBox*, QDragEnterEvent*);
    using KTimeComboBox_DragMoveEvent_Callback = void (*)(KTimeComboBox*, QDragMoveEvent*);
    using KTimeComboBox_DragLeaveEvent_Callback = void (*)(KTimeComboBox*, QDragLeaveEvent*);
    using KTimeComboBox_DropEvent_Callback = void (*)(KTimeComboBox*, QDropEvent*);
    using KTimeComboBox_NativeEvent_Callback = bool (*)(KTimeComboBox*, libqt_string, void*, intptr_t*);
    using KTimeComboBox_Metric_Callback = int (*)(const KTimeComboBox*, int);
    using KTimeComboBox_InitPainter_Callback = void (*)(const KTimeComboBox*, QPainter*);
    using KTimeComboBox_Redirected_Callback = QPaintDevice* (*)(const KTimeComboBox*, QPoint*);
    using KTimeComboBox_SharedPainter_Callback = QPainter* (*)(const KTimeComboBox*);
    using KTimeComboBox_FocusNextPrevChild_Callback = bool (*)(KTimeComboBox*, bool);
    using KTimeComboBox_TimerEvent_Callback = void (*)(KTimeComboBox*, QTimerEvent*);
    using KTimeComboBox_ChildEvent_Callback = void (*)(KTimeComboBox*, QChildEvent*);
    using KTimeComboBox_CustomEvent_Callback = void (*)(KTimeComboBox*, QEvent*);
    using KTimeComboBox_ConnectNotify_Callback = void (*)(KTimeComboBox*, QMetaMethod*);
    using KTimeComboBox_DisconnectNotify_Callback = void (*)(KTimeComboBox*, QMetaMethod*);
    using KTimeComboBox::create;
    using KTimeComboBox::destroy;
    using KTimeComboBox::focusNextChild;
    using KTimeComboBox::focusPreviousChild;
    using KTimeComboBox::getDecodedMetricF;
    using KTimeComboBox::isSignalConnected;
    using KTimeComboBox::receivers;
    using KTimeComboBox::sender;
    using KTimeComboBox::senderSignalIndex;
    using KTimeComboBox::updateMicroFocus;

    // Instance callback storage
    KTimeComboBox_MetaObject_Callback ktimecombobox_metaobject_callback = nullptr;
    KTimeComboBox_Metacast_Callback ktimecombobox_metacast_callback = nullptr;
    KTimeComboBox_Metacall_Callback ktimecombobox_metacall_callback = nullptr;
    KTimeComboBox_EventFilter_Callback ktimecombobox_eventfilter_callback = nullptr;
    KTimeComboBox_ShowPopup_Callback ktimecombobox_showpopup_callback = nullptr;
    KTimeComboBox_HidePopup_Callback ktimecombobox_hidepopup_callback = nullptr;
    KTimeComboBox_MousePressEvent_Callback ktimecombobox_mousepressevent_callback = nullptr;
    KTimeComboBox_WheelEvent_Callback ktimecombobox_wheelevent_callback = nullptr;
    KTimeComboBox_KeyPressEvent_Callback ktimecombobox_keypressevent_callback = nullptr;
    KTimeComboBox_FocusInEvent_Callback ktimecombobox_focusinevent_callback = nullptr;
    KTimeComboBox_FocusOutEvent_Callback ktimecombobox_focusoutevent_callback = nullptr;
    KTimeComboBox_ResizeEvent_Callback ktimecombobox_resizeevent_callback = nullptr;
    KTimeComboBox_AssignTime_Callback ktimecombobox_assigntime_callback = nullptr;
    KTimeComboBox_SetModel_Callback ktimecombobox_setmodel_callback = nullptr;
    KTimeComboBox_SizeHint_Callback ktimecombobox_sizehint_callback = nullptr;
    KTimeComboBox_MinimumSizeHint_Callback ktimecombobox_minimumsizehint_callback = nullptr;
    KTimeComboBox_Event_Callback ktimecombobox_event_callback = nullptr;
    KTimeComboBox_InputMethodQuery_Callback ktimecombobox_inputmethodquery_callback = nullptr;
    KTimeComboBox_ChangeEvent_Callback ktimecombobox_changeevent_callback = nullptr;
    KTimeComboBox_PaintEvent_Callback ktimecombobox_paintevent_callback = nullptr;
    KTimeComboBox_ShowEvent_Callback ktimecombobox_showevent_callback = nullptr;
    KTimeComboBox_HideEvent_Callback ktimecombobox_hideevent_callback = nullptr;
    KTimeComboBox_MouseReleaseEvent_Callback ktimecombobox_mousereleaseevent_callback = nullptr;
    KTimeComboBox_KeyReleaseEvent_Callback ktimecombobox_keyreleaseevent_callback = nullptr;
    KTimeComboBox_ContextMenuEvent_Callback ktimecombobox_contextmenuevent_callback = nullptr;
    KTimeComboBox_InputMethodEvent_Callback ktimecombobox_inputmethodevent_callback = nullptr;
    KTimeComboBox_InitStyleOption_Callback ktimecombobox_initstyleoption_callback = nullptr;
    KTimeComboBox_DevType_Callback ktimecombobox_devtype_callback = nullptr;
    KTimeComboBox_SetVisible_Callback ktimecombobox_setvisible_callback = nullptr;
    KTimeComboBox_HeightForWidth_Callback ktimecombobox_heightforwidth_callback = nullptr;
    KTimeComboBox_HasHeightForWidth_Callback ktimecombobox_hasheightforwidth_callback = nullptr;
    KTimeComboBox_PaintEngine_Callback ktimecombobox_paintengine_callback = nullptr;
    KTimeComboBox_MouseDoubleClickEvent_Callback ktimecombobox_mousedoubleclickevent_callback = nullptr;
    KTimeComboBox_MouseMoveEvent_Callback ktimecombobox_mousemoveevent_callback = nullptr;
    KTimeComboBox_EnterEvent_Callback ktimecombobox_enterevent_callback = nullptr;
    KTimeComboBox_LeaveEvent_Callback ktimecombobox_leaveevent_callback = nullptr;
    KTimeComboBox_MoveEvent_Callback ktimecombobox_moveevent_callback = nullptr;
    KTimeComboBox_CloseEvent_Callback ktimecombobox_closeevent_callback = nullptr;
    KTimeComboBox_TabletEvent_Callback ktimecombobox_tabletevent_callback = nullptr;
    KTimeComboBox_ActionEvent_Callback ktimecombobox_actionevent_callback = nullptr;
    KTimeComboBox_DragEnterEvent_Callback ktimecombobox_dragenterevent_callback = nullptr;
    KTimeComboBox_DragMoveEvent_Callback ktimecombobox_dragmoveevent_callback = nullptr;
    KTimeComboBox_DragLeaveEvent_Callback ktimecombobox_dragleaveevent_callback = nullptr;
    KTimeComboBox_DropEvent_Callback ktimecombobox_dropevent_callback = nullptr;
    KTimeComboBox_NativeEvent_Callback ktimecombobox_nativeevent_callback = nullptr;
    KTimeComboBox_Metric_Callback ktimecombobox_metric_callback = nullptr;
    KTimeComboBox_InitPainter_Callback ktimecombobox_initpainter_callback = nullptr;
    KTimeComboBox_Redirected_Callback ktimecombobox_redirected_callback = nullptr;
    KTimeComboBox_SharedPainter_Callback ktimecombobox_sharedpainter_callback = nullptr;
    KTimeComboBox_FocusNextPrevChild_Callback ktimecombobox_focusnextprevchild_callback = nullptr;
    KTimeComboBox_TimerEvent_Callback ktimecombobox_timerevent_callback = nullptr;
    KTimeComboBox_ChildEvent_Callback ktimecombobox_childevent_callback = nullptr;
    KTimeComboBox_CustomEvent_Callback ktimecombobox_customevent_callback = nullptr;
    KTimeComboBox_ConnectNotify_Callback ktimecombobox_connectnotify_callback = nullptr;
    KTimeComboBox_DisconnectNotify_Callback ktimecombobox_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KTimeComboBox {
        using KTimeComboBox::actionEvent;
        using KTimeComboBox::assignTime;
        using KTimeComboBox::changeEvent;
        using KTimeComboBox::childEvent;
        using KTimeComboBox::closeEvent;
        using KTimeComboBox::connectNotify;
        using KTimeComboBox::contextMenuEvent;
        using KTimeComboBox::customEvent;
        using KTimeComboBox::disconnectNotify;
        using KTimeComboBox::dragEnterEvent;
        using KTimeComboBox::dragLeaveEvent;
        using KTimeComboBox::dragMoveEvent;
        using KTimeComboBox::dropEvent;
        using KTimeComboBox::enterEvent;
        using KTimeComboBox::eventFilter;
        using KTimeComboBox::focusInEvent;
        using KTimeComboBox::focusNextPrevChild;
        using KTimeComboBox::focusOutEvent;
        using KTimeComboBox::hideEvent;
        using KTimeComboBox::hidePopup;
        using KTimeComboBox::initPainter;
        using KTimeComboBox::initStyleOption;
        using KTimeComboBox::inputMethodEvent;
        using KTimeComboBox::keyPressEvent;
        using KTimeComboBox::keyReleaseEvent;
        using KTimeComboBox::leaveEvent;
        using KTimeComboBox::metric;
        using KTimeComboBox::mouseDoubleClickEvent;
        using KTimeComboBox::mouseMoveEvent;
        using KTimeComboBox::mousePressEvent;
        using KTimeComboBox::mouseReleaseEvent;
        using KTimeComboBox::moveEvent;
        using KTimeComboBox::nativeEvent;
        using KTimeComboBox::paintEvent;
        using KTimeComboBox::redirected;
        using KTimeComboBox::resizeEvent;
        using KTimeComboBox::sharedPainter;
        using KTimeComboBox::showEvent;
        using KTimeComboBox::showPopup;
        using KTimeComboBox::tabletEvent;
        using KTimeComboBox::timerEvent;
        using KTimeComboBox::wheelEvent;
    };

    VirtualKTimeComboBox(QWidget* parent) : KTimeComboBox(parent) {};
    VirtualKTimeComboBox() : KTimeComboBox() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ktimecombobox_metaobject_callback) {
            QMetaObject* callback_ret = ktimecombobox_metaobject_callback(this);
            return callback_ret;
        }
        return KTimeComboBox::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ktimecombobox_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = ktimecombobox_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KTimeComboBox::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktimecombobox_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = ktimecombobox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KTimeComboBox::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (ktimecombobox_eventfilter_callback) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;
            bool callback_ret = ktimecombobox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KTimeComboBox::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showPopup() override {
        if (ktimecombobox_showpopup_callback) {
            ktimecombobox_showpopup_callback(this);
            return;
        }
        KTimeComboBox::showPopup();
    }

    // Virtual method for C ABI access and custom callback
    virtual void hidePopup() override {
        if (ktimecombobox_hidepopup_callback) {
            ktimecombobox_hidepopup_callback(this);
            return;
        }
        KTimeComboBox::hidePopup();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (ktimecombobox_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            ktimecombobox_mousepressevent_callback(this, cbval1);
            return;
        }
        KTimeComboBox::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (ktimecombobox_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            ktimecombobox_wheelevent_callback(this, cbval1);
            return;
        }
        KTimeComboBox::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (ktimecombobox_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            ktimecombobox_keypressevent_callback(this, cbval1);
            return;
        }
        KTimeComboBox::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (ktimecombobox_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            ktimecombobox_focusinevent_callback(this, cbval1);
            return;
        }
        KTimeComboBox::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (ktimecombobox_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            ktimecombobox_focusoutevent_callback(this, cbval1);
            return;
        }
        KTimeComboBox::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (ktimecombobox_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            ktimecombobox_resizeevent_callback(this, cbval1);
            return;
        }
        KTimeComboBox::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void assignTime(const QTime& time) override {
        if (ktimecombobox_assigntime_callback) {
            const QTime& time_ret = time;
            // Cast returned reference into pointer
            QTime* cbval1 = const_cast<QTime*>(&time_ret);
            ktimecombobox_assigntime_callback(this, cbval1);
            return;
        }
        KTimeComboBox::assignTime(time);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (ktimecombobox_setmodel_callback) {
            QAbstractItemModel* cbval1 = model;
            ktimecombobox_setmodel_callback(this, cbval1);
            return;
        }
        KTimeComboBox::setModel(model);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (ktimecombobox_sizehint_callback) {
            QSize* callback_ret = ktimecombobox_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KTimeComboBox::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (ktimecombobox_minimumsizehint_callback) {
            QSize* callback_ret = ktimecombobox_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KTimeComboBox::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktimecombobox_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = ktimecombobox_event_callback(this, cbval1);
            return callback_ret;
        }
        return KTimeComboBox::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (ktimecombobox_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = ktimecombobox_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KTimeComboBox::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (ktimecombobox_changeevent_callback) {
            QEvent* cbval1 = e;
            ktimecombobox_changeevent_callback(this, cbval1);
            return;
        }
        KTimeComboBox::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (ktimecombobox_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            ktimecombobox_paintevent_callback(this, cbval1);
            return;
        }
        KTimeComboBox::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* e) override {
        if (ktimecombobox_showevent_callback) {
            QShowEvent* cbval1 = e;
            ktimecombobox_showevent_callback(this, cbval1);
            return;
        }
        KTimeComboBox::showEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* e) override {
        if (ktimecombobox_hideevent_callback) {
            QHideEvent* cbval1 = e;
            ktimecombobox_hideevent_callback(this, cbval1);
            return;
        }
        KTimeComboBox::hideEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (ktimecombobox_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            ktimecombobox_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KTimeComboBox::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (ktimecombobox_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            ktimecombobox_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KTimeComboBox::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (ktimecombobox_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = e;
            ktimecombobox_contextmenuevent_callback(this, cbval1);
            return;
        }
        KTimeComboBox::contextMenuEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (ktimecombobox_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            ktimecombobox_inputmethodevent_callback(this, cbval1);
            return;
        }
        KTimeComboBox::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionComboBox* option) const override {
        if (ktimecombobox_initstyleoption_callback) {
            QStyleOptionComboBox* cbval1 = option;
            ktimecombobox_initstyleoption_callback(this, cbval1);
            return;
        }
        KTimeComboBox::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (ktimecombobox_devtype_callback) {
            int callback_ret = ktimecombobox_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KTimeComboBox::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (ktimecombobox_setvisible_callback) {
            bool cbval1 = visible;
            ktimecombobox_setvisible_callback(this, cbval1);
            return;
        }
        KTimeComboBox::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (ktimecombobox_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = ktimecombobox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KTimeComboBox::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (ktimecombobox_hasheightforwidth_callback) {
            bool callback_ret = ktimecombobox_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KTimeComboBox::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (ktimecombobox_paintengine_callback) {
            QPaintEngine* callback_ret = ktimecombobox_paintengine_callback(this);
            return callback_ret;
        }
        return KTimeComboBox::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (ktimecombobox_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            ktimecombobox_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KTimeComboBox::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (ktimecombobox_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            ktimecombobox_mousemoveevent_callback(this, cbval1);
            return;
        }
        KTimeComboBox::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (ktimecombobox_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            ktimecombobox_enterevent_callback(this, cbval1);
            return;
        }
        KTimeComboBox::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (ktimecombobox_leaveevent_callback) {
            QEvent* cbval1 = event;
            ktimecombobox_leaveevent_callback(this, cbval1);
            return;
        }
        KTimeComboBox::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (ktimecombobox_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            ktimecombobox_moveevent_callback(this, cbval1);
            return;
        }
        KTimeComboBox::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (ktimecombobox_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            ktimecombobox_closeevent_callback(this, cbval1);
            return;
        }
        KTimeComboBox::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (ktimecombobox_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            ktimecombobox_tabletevent_callback(this, cbval1);
            return;
        }
        KTimeComboBox::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (ktimecombobox_actionevent_callback) {
            QActionEvent* cbval1 = event;
            ktimecombobox_actionevent_callback(this, cbval1);
            return;
        }
        KTimeComboBox::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (ktimecombobox_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            ktimecombobox_dragenterevent_callback(this, cbval1);
            return;
        }
        KTimeComboBox::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (ktimecombobox_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            ktimecombobox_dragmoveevent_callback(this, cbval1);
            return;
        }
        KTimeComboBox::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (ktimecombobox_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            ktimecombobox_dragleaveevent_callback(this, cbval1);
            return;
        }
        KTimeComboBox::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (ktimecombobox_dropevent_callback) {
            QDropEvent* cbval1 = event;
            ktimecombobox_dropevent_callback(this, cbval1);
            return;
        }
        KTimeComboBox::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (ktimecombobox_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = ktimecombobox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KTimeComboBox::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (ktimecombobox_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = ktimecombobox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KTimeComboBox::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (ktimecombobox_initpainter_callback) {
            QPainter* cbval1 = painter;
            ktimecombobox_initpainter_callback(this, cbval1);
            return;
        }
        KTimeComboBox::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (ktimecombobox_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = ktimecombobox_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KTimeComboBox::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (ktimecombobox_sharedpainter_callback) {
            QPainter* callback_ret = ktimecombobox_sharedpainter_callback(this);
            return callback_ret;
        }
        return KTimeComboBox::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (ktimecombobox_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = ktimecombobox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KTimeComboBox::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktimecombobox_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            ktimecombobox_timerevent_callback(this, cbval1);
            return;
        }
        KTimeComboBox::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktimecombobox_childevent_callback) {
            QChildEvent* cbval1 = event;
            ktimecombobox_childevent_callback(this, cbval1);
            return;
        }
        KTimeComboBox::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktimecombobox_customevent_callback) {
            QEvent* cbval1 = event;
            ktimecombobox_customevent_callback(this, cbval1);
            return;
        }
        KTimeComboBox::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktimecombobox_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktimecombobox_connectnotify_callback(this, cbval1);
            return;
        }
        KTimeComboBox::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktimecombobox_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktimecombobox_disconnectnotify_callback(this, cbval1);
            return;
        }
        KTimeComboBox::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KTimeComboBox_SuperEventFilter(KTimeComboBox* self, QObject* object, QEvent* event);
    friend void KTimeComboBox_SuperShowPopup(KTimeComboBox* self);
    friend void KTimeComboBox_SuperHidePopup(KTimeComboBox* self);
    friend void KTimeComboBox_SuperMousePressEvent(KTimeComboBox* self, QMouseEvent* event);
    friend void KTimeComboBox_SuperWheelEvent(KTimeComboBox* self, QWheelEvent* event);
    friend void KTimeComboBox_SuperKeyPressEvent(KTimeComboBox* self, QKeyEvent* event);
    friend void KTimeComboBox_SuperFocusInEvent(KTimeComboBox* self, QFocusEvent* event);
    friend void KTimeComboBox_SuperFocusOutEvent(KTimeComboBox* self, QFocusEvent* event);
    friend void KTimeComboBox_SuperResizeEvent(KTimeComboBox* self, QResizeEvent* event);
    friend void KTimeComboBox_SuperAssignTime(KTimeComboBox* self, const QTime* time);
    friend void KTimeComboBox_SuperChangeEvent(KTimeComboBox* self, QEvent* e);
    friend void KTimeComboBox_SuperPaintEvent(KTimeComboBox* self, QPaintEvent* e);
    friend void KTimeComboBox_SuperShowEvent(KTimeComboBox* self, QShowEvent* e);
    friend void KTimeComboBox_SuperHideEvent(KTimeComboBox* self, QHideEvent* e);
    friend void KTimeComboBox_SuperMouseReleaseEvent(KTimeComboBox* self, QMouseEvent* e);
    friend void KTimeComboBox_SuperKeyReleaseEvent(KTimeComboBox* self, QKeyEvent* e);
    friend void KTimeComboBox_SuperContextMenuEvent(KTimeComboBox* self, QContextMenuEvent* e);
    friend void KTimeComboBox_SuperInputMethodEvent(KTimeComboBox* self, QInputMethodEvent* param1);
    friend void KTimeComboBox_SuperInitStyleOption(const KTimeComboBox* self, QStyleOptionComboBox* option);
    friend void KTimeComboBox_SuperMouseDoubleClickEvent(KTimeComboBox* self, QMouseEvent* event);
    friend void KTimeComboBox_SuperMouseMoveEvent(KTimeComboBox* self, QMouseEvent* event);
    friend void KTimeComboBox_SuperEnterEvent(KTimeComboBox* self, QEnterEvent* event);
    friend void KTimeComboBox_SuperLeaveEvent(KTimeComboBox* self, QEvent* event);
    friend void KTimeComboBox_SuperMoveEvent(KTimeComboBox* self, QMoveEvent* event);
    friend void KTimeComboBox_SuperCloseEvent(KTimeComboBox* self, QCloseEvent* event);
    friend void KTimeComboBox_SuperTabletEvent(KTimeComboBox* self, QTabletEvent* event);
    friend void KTimeComboBox_SuperActionEvent(KTimeComboBox* self, QActionEvent* event);
    friend void KTimeComboBox_SuperDragEnterEvent(KTimeComboBox* self, QDragEnterEvent* event);
    friend void KTimeComboBox_SuperDragMoveEvent(KTimeComboBox* self, QDragMoveEvent* event);
    friend void KTimeComboBox_SuperDragLeaveEvent(KTimeComboBox* self, QDragLeaveEvent* event);
    friend void KTimeComboBox_SuperDropEvent(KTimeComboBox* self, QDropEvent* event);
    friend bool KTimeComboBox_SuperNativeEvent(KTimeComboBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KTimeComboBox_SuperMetric(const KTimeComboBox* self, int param1);
    friend void KTimeComboBox_SuperInitPainter(const KTimeComboBox* self, QPainter* painter);
    friend QPaintDevice* KTimeComboBox_SuperRedirected(const KTimeComboBox* self, QPoint* offset);
    friend QPainter* KTimeComboBox_SuperSharedPainter(const KTimeComboBox* self);
    friend bool KTimeComboBox_SuperFocusNextPrevChild(KTimeComboBox* self, bool next);
    friend void KTimeComboBox_SuperTimerEvent(KTimeComboBox* self, QTimerEvent* event);
    friend void KTimeComboBox_SuperChildEvent(KTimeComboBox* self, QChildEvent* event);
    friend void KTimeComboBox_SuperCustomEvent(KTimeComboBox* self, QEvent* event);
    friend void KTimeComboBox_SuperConnectNotify(KTimeComboBox* self, const QMetaMethod* signal);
    friend void KTimeComboBox_SuperDisconnectNotify(KTimeComboBox* self, const QMetaMethod* signal);
};

#endif
