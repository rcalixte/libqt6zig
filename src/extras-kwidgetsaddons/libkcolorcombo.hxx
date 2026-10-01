#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKCOLORCOMBO_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKCOLORCOMBO_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KColorCombo
class VirtualKColorCombo final : public KColorCombo {
  public:
    // Virtual class public types (including callbacks and access types)
    using KColorCombo_MetaObject_Callback = QMetaObject* (*)(const KColorCombo*);
    using KColorCombo_Metacast_Callback = void* (*)(KColorCombo*, const char*);
    using KColorCombo_Metacall_Callback = int (*)(KColorCombo*, int, int, void**);
    using KColorCombo_PaintEvent_Callback = void (*)(KColorCombo*, QPaintEvent*);
    using KColorCombo_SetModel_Callback = void (*)(KColorCombo*, QAbstractItemModel*);
    using KColorCombo_SizeHint_Callback = QSize* (*)(const KColorCombo*);
    using KColorCombo_MinimumSizeHint_Callback = QSize* (*)(const KColorCombo*);
    using KColorCombo_ShowPopup_Callback = void (*)(KColorCombo*);
    using KColorCombo_HidePopup_Callback = void (*)(KColorCombo*);
    using KColorCombo_Event_Callback = bool (*)(KColorCombo*, QEvent*);
    using KColorCombo_InputMethodQuery_Callback = QVariant* (*)(const KColorCombo*, int);
    using KColorCombo_FocusInEvent_Callback = void (*)(KColorCombo*, QFocusEvent*);
    using KColorCombo_FocusOutEvent_Callback = void (*)(KColorCombo*, QFocusEvent*);
    using KColorCombo_ChangeEvent_Callback = void (*)(KColorCombo*, QEvent*);
    using KColorCombo_ResizeEvent_Callback = void (*)(KColorCombo*, QResizeEvent*);
    using KColorCombo_ShowEvent_Callback = void (*)(KColorCombo*, QShowEvent*);
    using KColorCombo_HideEvent_Callback = void (*)(KColorCombo*, QHideEvent*);
    using KColorCombo_MousePressEvent_Callback = void (*)(KColorCombo*, QMouseEvent*);
    using KColorCombo_MouseReleaseEvent_Callback = void (*)(KColorCombo*, QMouseEvent*);
    using KColorCombo_KeyPressEvent_Callback = void (*)(KColorCombo*, QKeyEvent*);
    using KColorCombo_KeyReleaseEvent_Callback = void (*)(KColorCombo*, QKeyEvent*);
    using KColorCombo_WheelEvent_Callback = void (*)(KColorCombo*, QWheelEvent*);
    using KColorCombo_ContextMenuEvent_Callback = void (*)(KColorCombo*, QContextMenuEvent*);
    using KColorCombo_InputMethodEvent_Callback = void (*)(KColorCombo*, QInputMethodEvent*);
    using KColorCombo_InitStyleOption_Callback = void (*)(const KColorCombo*, QStyleOptionComboBox*);
    using KColorCombo_DevType_Callback = int (*)(const KColorCombo*);
    using KColorCombo_SetVisible_Callback = void (*)(KColorCombo*, bool);
    using KColorCombo_HeightForWidth_Callback = int (*)(const KColorCombo*, int);
    using KColorCombo_HasHeightForWidth_Callback = bool (*)(const KColorCombo*);
    using KColorCombo_PaintEngine_Callback = QPaintEngine* (*)(const KColorCombo*);
    using KColorCombo_MouseDoubleClickEvent_Callback = void (*)(KColorCombo*, QMouseEvent*);
    using KColorCombo_MouseMoveEvent_Callback = void (*)(KColorCombo*, QMouseEvent*);
    using KColorCombo_EnterEvent_Callback = void (*)(KColorCombo*, QEnterEvent*);
    using KColorCombo_LeaveEvent_Callback = void (*)(KColorCombo*, QEvent*);
    using KColorCombo_MoveEvent_Callback = void (*)(KColorCombo*, QMoveEvent*);
    using KColorCombo_CloseEvent_Callback = void (*)(KColorCombo*, QCloseEvent*);
    using KColorCombo_TabletEvent_Callback = void (*)(KColorCombo*, QTabletEvent*);
    using KColorCombo_ActionEvent_Callback = void (*)(KColorCombo*, QActionEvent*);
    using KColorCombo_DragEnterEvent_Callback = void (*)(KColorCombo*, QDragEnterEvent*);
    using KColorCombo_DragMoveEvent_Callback = void (*)(KColorCombo*, QDragMoveEvent*);
    using KColorCombo_DragLeaveEvent_Callback = void (*)(KColorCombo*, QDragLeaveEvent*);
    using KColorCombo_DropEvent_Callback = void (*)(KColorCombo*, QDropEvent*);
    using KColorCombo_NativeEvent_Callback = bool (*)(KColorCombo*, libqt_string, void*, intptr_t*);
    using KColorCombo_Metric_Callback = int (*)(const KColorCombo*, int);
    using KColorCombo_InitPainter_Callback = void (*)(const KColorCombo*, QPainter*);
    using KColorCombo_Redirected_Callback = QPaintDevice* (*)(const KColorCombo*, QPoint*);
    using KColorCombo_SharedPainter_Callback = QPainter* (*)(const KColorCombo*);
    using KColorCombo_FocusNextPrevChild_Callback = bool (*)(KColorCombo*, bool);
    using KColorCombo_EventFilter_Callback = bool (*)(KColorCombo*, QObject*, QEvent*);
    using KColorCombo_TimerEvent_Callback = void (*)(KColorCombo*, QTimerEvent*);
    using KColorCombo_ChildEvent_Callback = void (*)(KColorCombo*, QChildEvent*);
    using KColorCombo_CustomEvent_Callback = void (*)(KColorCombo*, QEvent*);
    using KColorCombo_ConnectNotify_Callback = void (*)(KColorCombo*, QMetaMethod*);
    using KColorCombo_DisconnectNotify_Callback = void (*)(KColorCombo*, QMetaMethod*);
    using KColorCombo::create;
    using KColorCombo::destroy;
    using KColorCombo::focusNextChild;
    using KColorCombo::focusPreviousChild;
    using KColorCombo::getDecodedMetricF;
    using KColorCombo::isSignalConnected;
    using KColorCombo::receivers;
    using KColorCombo::sender;
    using KColorCombo::senderSignalIndex;
    using KColorCombo::updateMicroFocus;

    // Instance callback storage
    KColorCombo_MetaObject_Callback kcolorcombo_metaobject_callback = nullptr;
    KColorCombo_Metacast_Callback kcolorcombo_metacast_callback = nullptr;
    KColorCombo_Metacall_Callback kcolorcombo_metacall_callback = nullptr;
    KColorCombo_PaintEvent_Callback kcolorcombo_paintevent_callback = nullptr;
    KColorCombo_SetModel_Callback kcolorcombo_setmodel_callback = nullptr;
    KColorCombo_SizeHint_Callback kcolorcombo_sizehint_callback = nullptr;
    KColorCombo_MinimumSizeHint_Callback kcolorcombo_minimumsizehint_callback = nullptr;
    KColorCombo_ShowPopup_Callback kcolorcombo_showpopup_callback = nullptr;
    KColorCombo_HidePopup_Callback kcolorcombo_hidepopup_callback = nullptr;
    KColorCombo_Event_Callback kcolorcombo_event_callback = nullptr;
    KColorCombo_InputMethodQuery_Callback kcolorcombo_inputmethodquery_callback = nullptr;
    KColorCombo_FocusInEvent_Callback kcolorcombo_focusinevent_callback = nullptr;
    KColorCombo_FocusOutEvent_Callback kcolorcombo_focusoutevent_callback = nullptr;
    KColorCombo_ChangeEvent_Callback kcolorcombo_changeevent_callback = nullptr;
    KColorCombo_ResizeEvent_Callback kcolorcombo_resizeevent_callback = nullptr;
    KColorCombo_ShowEvent_Callback kcolorcombo_showevent_callback = nullptr;
    KColorCombo_HideEvent_Callback kcolorcombo_hideevent_callback = nullptr;
    KColorCombo_MousePressEvent_Callback kcolorcombo_mousepressevent_callback = nullptr;
    KColorCombo_MouseReleaseEvent_Callback kcolorcombo_mousereleaseevent_callback = nullptr;
    KColorCombo_KeyPressEvent_Callback kcolorcombo_keypressevent_callback = nullptr;
    KColorCombo_KeyReleaseEvent_Callback kcolorcombo_keyreleaseevent_callback = nullptr;
    KColorCombo_WheelEvent_Callback kcolorcombo_wheelevent_callback = nullptr;
    KColorCombo_ContextMenuEvent_Callback kcolorcombo_contextmenuevent_callback = nullptr;
    KColorCombo_InputMethodEvent_Callback kcolorcombo_inputmethodevent_callback = nullptr;
    KColorCombo_InitStyleOption_Callback kcolorcombo_initstyleoption_callback = nullptr;
    KColorCombo_DevType_Callback kcolorcombo_devtype_callback = nullptr;
    KColorCombo_SetVisible_Callback kcolorcombo_setvisible_callback = nullptr;
    KColorCombo_HeightForWidth_Callback kcolorcombo_heightforwidth_callback = nullptr;
    KColorCombo_HasHeightForWidth_Callback kcolorcombo_hasheightforwidth_callback = nullptr;
    KColorCombo_PaintEngine_Callback kcolorcombo_paintengine_callback = nullptr;
    KColorCombo_MouseDoubleClickEvent_Callback kcolorcombo_mousedoubleclickevent_callback = nullptr;
    KColorCombo_MouseMoveEvent_Callback kcolorcombo_mousemoveevent_callback = nullptr;
    KColorCombo_EnterEvent_Callback kcolorcombo_enterevent_callback = nullptr;
    KColorCombo_LeaveEvent_Callback kcolorcombo_leaveevent_callback = nullptr;
    KColorCombo_MoveEvent_Callback kcolorcombo_moveevent_callback = nullptr;
    KColorCombo_CloseEvent_Callback kcolorcombo_closeevent_callback = nullptr;
    KColorCombo_TabletEvent_Callback kcolorcombo_tabletevent_callback = nullptr;
    KColorCombo_ActionEvent_Callback kcolorcombo_actionevent_callback = nullptr;
    KColorCombo_DragEnterEvent_Callback kcolorcombo_dragenterevent_callback = nullptr;
    KColorCombo_DragMoveEvent_Callback kcolorcombo_dragmoveevent_callback = nullptr;
    KColorCombo_DragLeaveEvent_Callback kcolorcombo_dragleaveevent_callback = nullptr;
    KColorCombo_DropEvent_Callback kcolorcombo_dropevent_callback = nullptr;
    KColorCombo_NativeEvent_Callback kcolorcombo_nativeevent_callback = nullptr;
    KColorCombo_Metric_Callback kcolorcombo_metric_callback = nullptr;
    KColorCombo_InitPainter_Callback kcolorcombo_initpainter_callback = nullptr;
    KColorCombo_Redirected_Callback kcolorcombo_redirected_callback = nullptr;
    KColorCombo_SharedPainter_Callback kcolorcombo_sharedpainter_callback = nullptr;
    KColorCombo_FocusNextPrevChild_Callback kcolorcombo_focusnextprevchild_callback = nullptr;
    KColorCombo_EventFilter_Callback kcolorcombo_eventfilter_callback = nullptr;
    KColorCombo_TimerEvent_Callback kcolorcombo_timerevent_callback = nullptr;
    KColorCombo_ChildEvent_Callback kcolorcombo_childevent_callback = nullptr;
    KColorCombo_CustomEvent_Callback kcolorcombo_customevent_callback = nullptr;
    KColorCombo_ConnectNotify_Callback kcolorcombo_connectnotify_callback = nullptr;
    KColorCombo_DisconnectNotify_Callback kcolorcombo_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KColorCombo {
        using KColorCombo::actionEvent;
        using KColorCombo::changeEvent;
        using KColorCombo::childEvent;
        using KColorCombo::closeEvent;
        using KColorCombo::connectNotify;
        using KColorCombo::contextMenuEvent;
        using KColorCombo::customEvent;
        using KColorCombo::disconnectNotify;
        using KColorCombo::dragEnterEvent;
        using KColorCombo::dragLeaveEvent;
        using KColorCombo::dragMoveEvent;
        using KColorCombo::dropEvent;
        using KColorCombo::enterEvent;
        using KColorCombo::focusInEvent;
        using KColorCombo::focusNextPrevChild;
        using KColorCombo::focusOutEvent;
        using KColorCombo::hideEvent;
        using KColorCombo::initPainter;
        using KColorCombo::initStyleOption;
        using KColorCombo::inputMethodEvent;
        using KColorCombo::keyPressEvent;
        using KColorCombo::keyReleaseEvent;
        using KColorCombo::leaveEvent;
        using KColorCombo::metric;
        using KColorCombo::mouseDoubleClickEvent;
        using KColorCombo::mouseMoveEvent;
        using KColorCombo::mousePressEvent;
        using KColorCombo::mouseReleaseEvent;
        using KColorCombo::moveEvent;
        using KColorCombo::nativeEvent;
        using KColorCombo::paintEvent;
        using KColorCombo::redirected;
        using KColorCombo::resizeEvent;
        using KColorCombo::sharedPainter;
        using KColorCombo::showEvent;
        using KColorCombo::tabletEvent;
        using KColorCombo::timerEvent;
        using KColorCombo::wheelEvent;
    };

    VirtualKColorCombo(QWidget* parent) : KColorCombo(parent) {};
    VirtualKColorCombo() : KColorCombo() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kcolorcombo_metaobject_callback) {
            QMetaObject* callback_ret = kcolorcombo_metaobject_callback(this);
            return callback_ret;
        }
        return KColorCombo::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcolorcombo_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kcolorcombo_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KColorCombo::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcolorcombo_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kcolorcombo_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KColorCombo::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kcolorcombo_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kcolorcombo_paintevent_callback(this, cbval1);
            return;
        }
        KColorCombo::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (kcolorcombo_setmodel_callback) {
            QAbstractItemModel* cbval1 = model;
            kcolorcombo_setmodel_callback(this, cbval1);
            return;
        }
        KColorCombo::setModel(model);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kcolorcombo_sizehint_callback) {
            QSize* callback_ret = kcolorcombo_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KColorCombo::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kcolorcombo_minimumsizehint_callback) {
            QSize* callback_ret = kcolorcombo_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KColorCombo::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void showPopup() override {
        if (kcolorcombo_showpopup_callback) {
            kcolorcombo_showpopup_callback(this);
            return;
        }
        KColorCombo::showPopup();
    }

    // Virtual method for C ABI access and custom callback
    virtual void hidePopup() override {
        if (kcolorcombo_hidepopup_callback) {
            kcolorcombo_hidepopup_callback(this);
            return;
        }
        KColorCombo::hidePopup();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcolorcombo_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kcolorcombo_event_callback(this, cbval1);
            return callback_ret;
        }
        return KColorCombo::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kcolorcombo_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kcolorcombo_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KColorCombo::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (kcolorcombo_focusinevent_callback) {
            QFocusEvent* cbval1 = e;
            kcolorcombo_focusinevent_callback(this, cbval1);
            return;
        }
        KColorCombo::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (kcolorcombo_focusoutevent_callback) {
            QFocusEvent* cbval1 = e;
            kcolorcombo_focusoutevent_callback(this, cbval1);
            return;
        }
        KColorCombo::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (kcolorcombo_changeevent_callback) {
            QEvent* cbval1 = e;
            kcolorcombo_changeevent_callback(this, cbval1);
            return;
        }
        KColorCombo::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (kcolorcombo_resizeevent_callback) {
            QResizeEvent* cbval1 = e;
            kcolorcombo_resizeevent_callback(this, cbval1);
            return;
        }
        KColorCombo::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* e) override {
        if (kcolorcombo_showevent_callback) {
            QShowEvent* cbval1 = e;
            kcolorcombo_showevent_callback(this, cbval1);
            return;
        }
        KColorCombo::showEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* e) override {
        if (kcolorcombo_hideevent_callback) {
            QHideEvent* cbval1 = e;
            kcolorcombo_hideevent_callback(this, cbval1);
            return;
        }
        KColorCombo::hideEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (kcolorcombo_mousepressevent_callback) {
            QMouseEvent* cbval1 = e;
            kcolorcombo_mousepressevent_callback(this, cbval1);
            return;
        }
        KColorCombo::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (kcolorcombo_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            kcolorcombo_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KColorCombo::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (kcolorcombo_keypressevent_callback) {
            QKeyEvent* cbval1 = e;
            kcolorcombo_keypressevent_callback(this, cbval1);
            return;
        }
        KColorCombo::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (kcolorcombo_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            kcolorcombo_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KColorCombo::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (kcolorcombo_wheelevent_callback) {
            QWheelEvent* cbval1 = e;
            kcolorcombo_wheelevent_callback(this, cbval1);
            return;
        }
        KColorCombo::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (kcolorcombo_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = e;
            kcolorcombo_contextmenuevent_callback(this, cbval1);
            return;
        }
        KColorCombo::contextMenuEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kcolorcombo_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kcolorcombo_inputmethodevent_callback(this, cbval1);
            return;
        }
        KColorCombo::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionComboBox* option) const override {
        if (kcolorcombo_initstyleoption_callback) {
            QStyleOptionComboBox* cbval1 = option;
            kcolorcombo_initstyleoption_callback(this, cbval1);
            return;
        }
        KColorCombo::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kcolorcombo_devtype_callback) {
            int callback_ret = kcolorcombo_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KColorCombo::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kcolorcombo_setvisible_callback) {
            bool cbval1 = visible;
            kcolorcombo_setvisible_callback(this, cbval1);
            return;
        }
        KColorCombo::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kcolorcombo_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kcolorcombo_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KColorCombo::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kcolorcombo_hasheightforwidth_callback) {
            bool callback_ret = kcolorcombo_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KColorCombo::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kcolorcombo_paintengine_callback) {
            QPaintEngine* callback_ret = kcolorcombo_paintengine_callback(this);
            return callback_ret;
        }
        return KColorCombo::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kcolorcombo_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kcolorcombo_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KColorCombo::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kcolorcombo_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kcolorcombo_mousemoveevent_callback(this, cbval1);
            return;
        }
        KColorCombo::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kcolorcombo_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kcolorcombo_enterevent_callback(this, cbval1);
            return;
        }
        KColorCombo::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kcolorcombo_leaveevent_callback) {
            QEvent* cbval1 = event;
            kcolorcombo_leaveevent_callback(this, cbval1);
            return;
        }
        KColorCombo::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kcolorcombo_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kcolorcombo_moveevent_callback(this, cbval1);
            return;
        }
        KColorCombo::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kcolorcombo_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kcolorcombo_closeevent_callback(this, cbval1);
            return;
        }
        KColorCombo::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kcolorcombo_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kcolorcombo_tabletevent_callback(this, cbval1);
            return;
        }
        KColorCombo::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kcolorcombo_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kcolorcombo_actionevent_callback(this, cbval1);
            return;
        }
        KColorCombo::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kcolorcombo_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kcolorcombo_dragenterevent_callback(this, cbval1);
            return;
        }
        KColorCombo::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kcolorcombo_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kcolorcombo_dragmoveevent_callback(this, cbval1);
            return;
        }
        KColorCombo::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kcolorcombo_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kcolorcombo_dragleaveevent_callback(this, cbval1);
            return;
        }
        KColorCombo::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kcolorcombo_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kcolorcombo_dropevent_callback(this, cbval1);
            return;
        }
        KColorCombo::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kcolorcombo_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kcolorcombo_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KColorCombo::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kcolorcombo_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kcolorcombo_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KColorCombo::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kcolorcombo_initpainter_callback) {
            QPainter* cbval1 = painter;
            kcolorcombo_initpainter_callback(this, cbval1);
            return;
        }
        KColorCombo::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kcolorcombo_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kcolorcombo_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KColorCombo::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kcolorcombo_sharedpainter_callback) {
            QPainter* callback_ret = kcolorcombo_sharedpainter_callback(this);
            return callback_ret;
        }
        return KColorCombo::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kcolorcombo_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kcolorcombo_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KColorCombo::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcolorcombo_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kcolorcombo_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KColorCombo::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcolorcombo_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kcolorcombo_timerevent_callback(this, cbval1);
            return;
        }
        KColorCombo::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcolorcombo_childevent_callback) {
            QChildEvent* cbval1 = event;
            kcolorcombo_childevent_callback(this, cbval1);
            return;
        }
        KColorCombo::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcolorcombo_customevent_callback) {
            QEvent* cbval1 = event;
            kcolorcombo_customevent_callback(this, cbval1);
            return;
        }
        KColorCombo::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcolorcombo_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcolorcombo_connectnotify_callback(this, cbval1);
            return;
        }
        KColorCombo::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcolorcombo_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcolorcombo_disconnectnotify_callback(this, cbval1);
            return;
        }
        KColorCombo::disconnectNotify(signal);
    }

    // Friend functions
    friend void KColorCombo_SuperPaintEvent(KColorCombo* self, QPaintEvent* event);
    friend void KColorCombo_SuperFocusInEvent(KColorCombo* self, QFocusEvent* e);
    friend void KColorCombo_SuperFocusOutEvent(KColorCombo* self, QFocusEvent* e);
    friend void KColorCombo_SuperChangeEvent(KColorCombo* self, QEvent* e);
    friend void KColorCombo_SuperResizeEvent(KColorCombo* self, QResizeEvent* e);
    friend void KColorCombo_SuperShowEvent(KColorCombo* self, QShowEvent* e);
    friend void KColorCombo_SuperHideEvent(KColorCombo* self, QHideEvent* e);
    friend void KColorCombo_SuperMousePressEvent(KColorCombo* self, QMouseEvent* e);
    friend void KColorCombo_SuperMouseReleaseEvent(KColorCombo* self, QMouseEvent* e);
    friend void KColorCombo_SuperKeyPressEvent(KColorCombo* self, QKeyEvent* e);
    friend void KColorCombo_SuperKeyReleaseEvent(KColorCombo* self, QKeyEvent* e);
    friend void KColorCombo_SuperWheelEvent(KColorCombo* self, QWheelEvent* e);
    friend void KColorCombo_SuperContextMenuEvent(KColorCombo* self, QContextMenuEvent* e);
    friend void KColorCombo_SuperInputMethodEvent(KColorCombo* self, QInputMethodEvent* param1);
    friend void KColorCombo_SuperInitStyleOption(const KColorCombo* self, QStyleOptionComboBox* option);
    friend void KColorCombo_SuperMouseDoubleClickEvent(KColorCombo* self, QMouseEvent* event);
    friend void KColorCombo_SuperMouseMoveEvent(KColorCombo* self, QMouseEvent* event);
    friend void KColorCombo_SuperEnterEvent(KColorCombo* self, QEnterEvent* event);
    friend void KColorCombo_SuperLeaveEvent(KColorCombo* self, QEvent* event);
    friend void KColorCombo_SuperMoveEvent(KColorCombo* self, QMoveEvent* event);
    friend void KColorCombo_SuperCloseEvent(KColorCombo* self, QCloseEvent* event);
    friend void KColorCombo_SuperTabletEvent(KColorCombo* self, QTabletEvent* event);
    friend void KColorCombo_SuperActionEvent(KColorCombo* self, QActionEvent* event);
    friend void KColorCombo_SuperDragEnterEvent(KColorCombo* self, QDragEnterEvent* event);
    friend void KColorCombo_SuperDragMoveEvent(KColorCombo* self, QDragMoveEvent* event);
    friend void KColorCombo_SuperDragLeaveEvent(KColorCombo* self, QDragLeaveEvent* event);
    friend void KColorCombo_SuperDropEvent(KColorCombo* self, QDropEvent* event);
    friend bool KColorCombo_SuperNativeEvent(KColorCombo* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KColorCombo_SuperMetric(const KColorCombo* self, int param1);
    friend void KColorCombo_SuperInitPainter(const KColorCombo* self, QPainter* painter);
    friend QPaintDevice* KColorCombo_SuperRedirected(const KColorCombo* self, QPoint* offset);
    friend QPainter* KColorCombo_SuperSharedPainter(const KColorCombo* self);
    friend bool KColorCombo_SuperFocusNextPrevChild(KColorCombo* self, bool next);
    friend void KColorCombo_SuperTimerEvent(KColorCombo* self, QTimerEvent* event);
    friend void KColorCombo_SuperChildEvent(KColorCombo* self, QChildEvent* event);
    friend void KColorCombo_SuperCustomEvent(KColorCombo* self, QEvent* event);
    friend void KColorCombo_SuperConnectNotify(KColorCombo* self, const QMetaMethod* signal);
    friend void KColorCombo_SuperDisconnectNotify(KColorCombo* self, const QMetaMethod* signal);
};

#endif
