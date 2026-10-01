#pragma once
#ifndef EXTRAS_SONNET_LIBDICTIONARYCOMBOBOX_HXX
#define EXTRAS_SONNET_LIBDICTIONARYCOMBOBOX_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Sonnet::DictionaryComboBox
class VirtualSonnetDictionaryComboBox final : public Sonnet::DictionaryComboBox {
  public:
    // Virtual class public types (including callbacks and access types)
    using Sonnet__DictionaryComboBox_MetaObject_Callback = QMetaObject* (*)(const Sonnet__DictionaryComboBox*);
    using Sonnet__DictionaryComboBox_Metacast_Callback = void* (*)(Sonnet__DictionaryComboBox*, const char*);
    using Sonnet__DictionaryComboBox_Metacall_Callback = int (*)(Sonnet__DictionaryComboBox*, int, int, void**);
    using Sonnet__DictionaryComboBox_SetModel_Callback = void (*)(Sonnet__DictionaryComboBox*, QAbstractItemModel*);
    using Sonnet__DictionaryComboBox_SizeHint_Callback = QSize* (*)(const Sonnet__DictionaryComboBox*);
    using Sonnet__DictionaryComboBox_MinimumSizeHint_Callback = QSize* (*)(const Sonnet__DictionaryComboBox*);
    using Sonnet__DictionaryComboBox_ShowPopup_Callback = void (*)(Sonnet__DictionaryComboBox*);
    using Sonnet__DictionaryComboBox_HidePopup_Callback = void (*)(Sonnet__DictionaryComboBox*);
    using Sonnet__DictionaryComboBox_Event_Callback = bool (*)(Sonnet__DictionaryComboBox*, QEvent*);
    using Sonnet__DictionaryComboBox_InputMethodQuery_Callback = QVariant* (*)(const Sonnet__DictionaryComboBox*, int);
    using Sonnet__DictionaryComboBox_FocusInEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QFocusEvent*);
    using Sonnet__DictionaryComboBox_FocusOutEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QFocusEvent*);
    using Sonnet__DictionaryComboBox_ChangeEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QEvent*);
    using Sonnet__DictionaryComboBox_ResizeEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QResizeEvent*);
    using Sonnet__DictionaryComboBox_PaintEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QPaintEvent*);
    using Sonnet__DictionaryComboBox_ShowEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QShowEvent*);
    using Sonnet__DictionaryComboBox_HideEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QHideEvent*);
    using Sonnet__DictionaryComboBox_MousePressEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QMouseEvent*);
    using Sonnet__DictionaryComboBox_MouseReleaseEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QMouseEvent*);
    using Sonnet__DictionaryComboBox_KeyPressEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QKeyEvent*);
    using Sonnet__DictionaryComboBox_KeyReleaseEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QKeyEvent*);
    using Sonnet__DictionaryComboBox_WheelEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QWheelEvent*);
    using Sonnet__DictionaryComboBox_ContextMenuEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QContextMenuEvent*);
    using Sonnet__DictionaryComboBox_InputMethodEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QInputMethodEvent*);
    using Sonnet__DictionaryComboBox_InitStyleOption_Callback = void (*)(const Sonnet__DictionaryComboBox*, QStyleOptionComboBox*);
    using Sonnet__DictionaryComboBox_DevType_Callback = int (*)(const Sonnet__DictionaryComboBox*);
    using Sonnet__DictionaryComboBox_SetVisible_Callback = void (*)(Sonnet__DictionaryComboBox*, bool);
    using Sonnet__DictionaryComboBox_HeightForWidth_Callback = int (*)(const Sonnet__DictionaryComboBox*, int);
    using Sonnet__DictionaryComboBox_HasHeightForWidth_Callback = bool (*)(const Sonnet__DictionaryComboBox*);
    using Sonnet__DictionaryComboBox_PaintEngine_Callback = QPaintEngine* (*)(const Sonnet__DictionaryComboBox*);
    using Sonnet__DictionaryComboBox_MouseDoubleClickEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QMouseEvent*);
    using Sonnet__DictionaryComboBox_MouseMoveEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QMouseEvent*);
    using Sonnet__DictionaryComboBox_EnterEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QEnterEvent*);
    using Sonnet__DictionaryComboBox_LeaveEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QEvent*);
    using Sonnet__DictionaryComboBox_MoveEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QMoveEvent*);
    using Sonnet__DictionaryComboBox_CloseEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QCloseEvent*);
    using Sonnet__DictionaryComboBox_TabletEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QTabletEvent*);
    using Sonnet__DictionaryComboBox_ActionEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QActionEvent*);
    using Sonnet__DictionaryComboBox_DragEnterEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QDragEnterEvent*);
    using Sonnet__DictionaryComboBox_DragMoveEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QDragMoveEvent*);
    using Sonnet__DictionaryComboBox_DragLeaveEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QDragLeaveEvent*);
    using Sonnet__DictionaryComboBox_DropEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QDropEvent*);
    using Sonnet__DictionaryComboBox_NativeEvent_Callback = bool (*)(Sonnet__DictionaryComboBox*, libqt_string, void*, intptr_t*);
    using Sonnet__DictionaryComboBox_Metric_Callback = int (*)(const Sonnet__DictionaryComboBox*, int);
    using Sonnet__DictionaryComboBox_InitPainter_Callback = void (*)(const Sonnet__DictionaryComboBox*, QPainter*);
    using Sonnet__DictionaryComboBox_Redirected_Callback = QPaintDevice* (*)(const Sonnet__DictionaryComboBox*, QPoint*);
    using Sonnet__DictionaryComboBox_SharedPainter_Callback = QPainter* (*)(const Sonnet__DictionaryComboBox*);
    using Sonnet__DictionaryComboBox_FocusNextPrevChild_Callback = bool (*)(Sonnet__DictionaryComboBox*, bool);
    using Sonnet__DictionaryComboBox_EventFilter_Callback = bool (*)(Sonnet__DictionaryComboBox*, QObject*, QEvent*);
    using Sonnet__DictionaryComboBox_TimerEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QTimerEvent*);
    using Sonnet__DictionaryComboBox_ChildEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QChildEvent*);
    using Sonnet__DictionaryComboBox_CustomEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QEvent*);
    using Sonnet__DictionaryComboBox_ConnectNotify_Callback = void (*)(Sonnet__DictionaryComboBox*, QMetaMethod*);
    using Sonnet__DictionaryComboBox_DisconnectNotify_Callback = void (*)(Sonnet__DictionaryComboBox*, QMetaMethod*);
    using Sonnet::DictionaryComboBox::create;
    using Sonnet::DictionaryComboBox::destroy;
    using Sonnet::DictionaryComboBox::focusNextChild;
    using Sonnet::DictionaryComboBox::focusPreviousChild;
    using Sonnet::DictionaryComboBox::getDecodedMetricF;
    using Sonnet::DictionaryComboBox::isSignalConnected;
    using Sonnet::DictionaryComboBox::receivers;
    using Sonnet::DictionaryComboBox::sender;
    using Sonnet::DictionaryComboBox::senderSignalIndex;
    using Sonnet::DictionaryComboBox::updateMicroFocus;

    // Instance callback storage
    Sonnet__DictionaryComboBox_MetaObject_Callback sonnet__dictionarycombobox_metaobject_callback = nullptr;
    Sonnet__DictionaryComboBox_Metacast_Callback sonnet__dictionarycombobox_metacast_callback = nullptr;
    Sonnet__DictionaryComboBox_Metacall_Callback sonnet__dictionarycombobox_metacall_callback = nullptr;
    Sonnet__DictionaryComboBox_SetModel_Callback sonnet__dictionarycombobox_setmodel_callback = nullptr;
    Sonnet__DictionaryComboBox_SizeHint_Callback sonnet__dictionarycombobox_sizehint_callback = nullptr;
    Sonnet__DictionaryComboBox_MinimumSizeHint_Callback sonnet__dictionarycombobox_minimumsizehint_callback = nullptr;
    Sonnet__DictionaryComboBox_ShowPopup_Callback sonnet__dictionarycombobox_showpopup_callback = nullptr;
    Sonnet__DictionaryComboBox_HidePopup_Callback sonnet__dictionarycombobox_hidepopup_callback = nullptr;
    Sonnet__DictionaryComboBox_Event_Callback sonnet__dictionarycombobox_event_callback = nullptr;
    Sonnet__DictionaryComboBox_InputMethodQuery_Callback sonnet__dictionarycombobox_inputmethodquery_callback = nullptr;
    Sonnet__DictionaryComboBox_FocusInEvent_Callback sonnet__dictionarycombobox_focusinevent_callback = nullptr;
    Sonnet__DictionaryComboBox_FocusOutEvent_Callback sonnet__dictionarycombobox_focusoutevent_callback = nullptr;
    Sonnet__DictionaryComboBox_ChangeEvent_Callback sonnet__dictionarycombobox_changeevent_callback = nullptr;
    Sonnet__DictionaryComboBox_ResizeEvent_Callback sonnet__dictionarycombobox_resizeevent_callback = nullptr;
    Sonnet__DictionaryComboBox_PaintEvent_Callback sonnet__dictionarycombobox_paintevent_callback = nullptr;
    Sonnet__DictionaryComboBox_ShowEvent_Callback sonnet__dictionarycombobox_showevent_callback = nullptr;
    Sonnet__DictionaryComboBox_HideEvent_Callback sonnet__dictionarycombobox_hideevent_callback = nullptr;
    Sonnet__DictionaryComboBox_MousePressEvent_Callback sonnet__dictionarycombobox_mousepressevent_callback = nullptr;
    Sonnet__DictionaryComboBox_MouseReleaseEvent_Callback sonnet__dictionarycombobox_mousereleaseevent_callback = nullptr;
    Sonnet__DictionaryComboBox_KeyPressEvent_Callback sonnet__dictionarycombobox_keypressevent_callback = nullptr;
    Sonnet__DictionaryComboBox_KeyReleaseEvent_Callback sonnet__dictionarycombobox_keyreleaseevent_callback = nullptr;
    Sonnet__DictionaryComboBox_WheelEvent_Callback sonnet__dictionarycombobox_wheelevent_callback = nullptr;
    Sonnet__DictionaryComboBox_ContextMenuEvent_Callback sonnet__dictionarycombobox_contextmenuevent_callback = nullptr;
    Sonnet__DictionaryComboBox_InputMethodEvent_Callback sonnet__dictionarycombobox_inputmethodevent_callback = nullptr;
    Sonnet__DictionaryComboBox_InitStyleOption_Callback sonnet__dictionarycombobox_initstyleoption_callback = nullptr;
    Sonnet__DictionaryComboBox_DevType_Callback sonnet__dictionarycombobox_devtype_callback = nullptr;
    Sonnet__DictionaryComboBox_SetVisible_Callback sonnet__dictionarycombobox_setvisible_callback = nullptr;
    Sonnet__DictionaryComboBox_HeightForWidth_Callback sonnet__dictionarycombobox_heightforwidth_callback = nullptr;
    Sonnet__DictionaryComboBox_HasHeightForWidth_Callback sonnet__dictionarycombobox_hasheightforwidth_callback = nullptr;
    Sonnet__DictionaryComboBox_PaintEngine_Callback sonnet__dictionarycombobox_paintengine_callback = nullptr;
    Sonnet__DictionaryComboBox_MouseDoubleClickEvent_Callback sonnet__dictionarycombobox_mousedoubleclickevent_callback = nullptr;
    Sonnet__DictionaryComboBox_MouseMoveEvent_Callback sonnet__dictionarycombobox_mousemoveevent_callback = nullptr;
    Sonnet__DictionaryComboBox_EnterEvent_Callback sonnet__dictionarycombobox_enterevent_callback = nullptr;
    Sonnet__DictionaryComboBox_LeaveEvent_Callback sonnet__dictionarycombobox_leaveevent_callback = nullptr;
    Sonnet__DictionaryComboBox_MoveEvent_Callback sonnet__dictionarycombobox_moveevent_callback = nullptr;
    Sonnet__DictionaryComboBox_CloseEvent_Callback sonnet__dictionarycombobox_closeevent_callback = nullptr;
    Sonnet__DictionaryComboBox_TabletEvent_Callback sonnet__dictionarycombobox_tabletevent_callback = nullptr;
    Sonnet__DictionaryComboBox_ActionEvent_Callback sonnet__dictionarycombobox_actionevent_callback = nullptr;
    Sonnet__DictionaryComboBox_DragEnterEvent_Callback sonnet__dictionarycombobox_dragenterevent_callback = nullptr;
    Sonnet__DictionaryComboBox_DragMoveEvent_Callback sonnet__dictionarycombobox_dragmoveevent_callback = nullptr;
    Sonnet__DictionaryComboBox_DragLeaveEvent_Callback sonnet__dictionarycombobox_dragleaveevent_callback = nullptr;
    Sonnet__DictionaryComboBox_DropEvent_Callback sonnet__dictionarycombobox_dropevent_callback = nullptr;
    Sonnet__DictionaryComboBox_NativeEvent_Callback sonnet__dictionarycombobox_nativeevent_callback = nullptr;
    Sonnet__DictionaryComboBox_Metric_Callback sonnet__dictionarycombobox_metric_callback = nullptr;
    Sonnet__DictionaryComboBox_InitPainter_Callback sonnet__dictionarycombobox_initpainter_callback = nullptr;
    Sonnet__DictionaryComboBox_Redirected_Callback sonnet__dictionarycombobox_redirected_callback = nullptr;
    Sonnet__DictionaryComboBox_SharedPainter_Callback sonnet__dictionarycombobox_sharedpainter_callback = nullptr;
    Sonnet__DictionaryComboBox_FocusNextPrevChild_Callback sonnet__dictionarycombobox_focusnextprevchild_callback = nullptr;
    Sonnet__DictionaryComboBox_EventFilter_Callback sonnet__dictionarycombobox_eventfilter_callback = nullptr;
    Sonnet__DictionaryComboBox_TimerEvent_Callback sonnet__dictionarycombobox_timerevent_callback = nullptr;
    Sonnet__DictionaryComboBox_ChildEvent_Callback sonnet__dictionarycombobox_childevent_callback = nullptr;
    Sonnet__DictionaryComboBox_CustomEvent_Callback sonnet__dictionarycombobox_customevent_callback = nullptr;
    Sonnet__DictionaryComboBox_ConnectNotify_Callback sonnet__dictionarycombobox_connectnotify_callback = nullptr;
    Sonnet__DictionaryComboBox_DisconnectNotify_Callback sonnet__dictionarycombobox_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : Sonnet::DictionaryComboBox {
        using Sonnet::DictionaryComboBox::actionEvent;
        using Sonnet::DictionaryComboBox::changeEvent;
        using Sonnet::DictionaryComboBox::childEvent;
        using Sonnet::DictionaryComboBox::closeEvent;
        using Sonnet::DictionaryComboBox::connectNotify;
        using Sonnet::DictionaryComboBox::contextMenuEvent;
        using Sonnet::DictionaryComboBox::customEvent;
        using Sonnet::DictionaryComboBox::disconnectNotify;
        using Sonnet::DictionaryComboBox::dragEnterEvent;
        using Sonnet::DictionaryComboBox::dragLeaveEvent;
        using Sonnet::DictionaryComboBox::dragMoveEvent;
        using Sonnet::DictionaryComboBox::dropEvent;
        using Sonnet::DictionaryComboBox::enterEvent;
        using Sonnet::DictionaryComboBox::focusInEvent;
        using Sonnet::DictionaryComboBox::focusNextPrevChild;
        using Sonnet::DictionaryComboBox::focusOutEvent;
        using Sonnet::DictionaryComboBox::hideEvent;
        using Sonnet::DictionaryComboBox::initPainter;
        using Sonnet::DictionaryComboBox::initStyleOption;
        using Sonnet::DictionaryComboBox::inputMethodEvent;
        using Sonnet::DictionaryComboBox::keyPressEvent;
        using Sonnet::DictionaryComboBox::keyReleaseEvent;
        using Sonnet::DictionaryComboBox::leaveEvent;
        using Sonnet::DictionaryComboBox::metric;
        using Sonnet::DictionaryComboBox::mouseDoubleClickEvent;
        using Sonnet::DictionaryComboBox::mouseMoveEvent;
        using Sonnet::DictionaryComboBox::mousePressEvent;
        using Sonnet::DictionaryComboBox::mouseReleaseEvent;
        using Sonnet::DictionaryComboBox::moveEvent;
        using Sonnet::DictionaryComboBox::nativeEvent;
        using Sonnet::DictionaryComboBox::paintEvent;
        using Sonnet::DictionaryComboBox::redirected;
        using Sonnet::DictionaryComboBox::resizeEvent;
        using Sonnet::DictionaryComboBox::sharedPainter;
        using Sonnet::DictionaryComboBox::showEvent;
        using Sonnet::DictionaryComboBox::tabletEvent;
        using Sonnet::DictionaryComboBox::timerEvent;
        using Sonnet::DictionaryComboBox::wheelEvent;
    };

    VirtualSonnetDictionaryComboBox(QWidget* parent) : Sonnet::DictionaryComboBox(parent) {};
    VirtualSonnetDictionaryComboBox() : Sonnet::DictionaryComboBox() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (sonnet__dictionarycombobox_metaobject_callback) {
            QMetaObject* callback_ret = sonnet__dictionarycombobox_metaobject_callback(this);
            return callback_ret;
        }
        return Sonnet__DictionaryComboBox::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (sonnet__dictionarycombobox_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = sonnet__dictionarycombobox_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return Sonnet__DictionaryComboBox::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (sonnet__dictionarycombobox_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = sonnet__dictionarycombobox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Sonnet__DictionaryComboBox::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (sonnet__dictionarycombobox_setmodel_callback) {
            QAbstractItemModel* cbval1 = model;
            sonnet__dictionarycombobox_setmodel_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::setModel(model);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (sonnet__dictionarycombobox_sizehint_callback) {
            QSize* callback_ret = sonnet__dictionarycombobox_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return Sonnet__DictionaryComboBox::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (sonnet__dictionarycombobox_minimumsizehint_callback) {
            QSize* callback_ret = sonnet__dictionarycombobox_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return Sonnet__DictionaryComboBox::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void showPopup() override {
        if (sonnet__dictionarycombobox_showpopup_callback) {
            sonnet__dictionarycombobox_showpopup_callback(this);
            return;
        }
        Sonnet__DictionaryComboBox::showPopup();
    }

    // Virtual method for C ABI access and custom callback
    virtual void hidePopup() override {
        if (sonnet__dictionarycombobox_hidepopup_callback) {
            sonnet__dictionarycombobox_hidepopup_callback(this);
            return;
        }
        Sonnet__DictionaryComboBox::hidePopup();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (sonnet__dictionarycombobox_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = sonnet__dictionarycombobox_event_callback(this, cbval1);
            return callback_ret;
        }
        return Sonnet__DictionaryComboBox::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (sonnet__dictionarycombobox_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = sonnet__dictionarycombobox_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return Sonnet__DictionaryComboBox::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (sonnet__dictionarycombobox_focusinevent_callback) {
            QFocusEvent* cbval1 = e;
            sonnet__dictionarycombobox_focusinevent_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (sonnet__dictionarycombobox_focusoutevent_callback) {
            QFocusEvent* cbval1 = e;
            sonnet__dictionarycombobox_focusoutevent_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (sonnet__dictionarycombobox_changeevent_callback) {
            QEvent* cbval1 = e;
            sonnet__dictionarycombobox_changeevent_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (sonnet__dictionarycombobox_resizeevent_callback) {
            QResizeEvent* cbval1 = e;
            sonnet__dictionarycombobox_resizeevent_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (sonnet__dictionarycombobox_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            sonnet__dictionarycombobox_paintevent_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* e) override {
        if (sonnet__dictionarycombobox_showevent_callback) {
            QShowEvent* cbval1 = e;
            sonnet__dictionarycombobox_showevent_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::showEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* e) override {
        if (sonnet__dictionarycombobox_hideevent_callback) {
            QHideEvent* cbval1 = e;
            sonnet__dictionarycombobox_hideevent_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::hideEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (sonnet__dictionarycombobox_mousepressevent_callback) {
            QMouseEvent* cbval1 = e;
            sonnet__dictionarycombobox_mousepressevent_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (sonnet__dictionarycombobox_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            sonnet__dictionarycombobox_mousereleaseevent_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (sonnet__dictionarycombobox_keypressevent_callback) {
            QKeyEvent* cbval1 = e;
            sonnet__dictionarycombobox_keypressevent_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (sonnet__dictionarycombobox_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            sonnet__dictionarycombobox_keyreleaseevent_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (sonnet__dictionarycombobox_wheelevent_callback) {
            QWheelEvent* cbval1 = e;
            sonnet__dictionarycombobox_wheelevent_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (sonnet__dictionarycombobox_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = e;
            sonnet__dictionarycombobox_contextmenuevent_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::contextMenuEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (sonnet__dictionarycombobox_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            sonnet__dictionarycombobox_inputmethodevent_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionComboBox* option) const override {
        if (sonnet__dictionarycombobox_initstyleoption_callback) {
            QStyleOptionComboBox* cbval1 = option;
            sonnet__dictionarycombobox_initstyleoption_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (sonnet__dictionarycombobox_devtype_callback) {
            int callback_ret = sonnet__dictionarycombobox_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return Sonnet__DictionaryComboBox::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (sonnet__dictionarycombobox_setvisible_callback) {
            bool cbval1 = visible;
            sonnet__dictionarycombobox_setvisible_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (sonnet__dictionarycombobox_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = sonnet__dictionarycombobox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return Sonnet__DictionaryComboBox::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (sonnet__dictionarycombobox_hasheightforwidth_callback) {
            bool callback_ret = sonnet__dictionarycombobox_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return Sonnet__DictionaryComboBox::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (sonnet__dictionarycombobox_paintengine_callback) {
            QPaintEngine* callback_ret = sonnet__dictionarycombobox_paintengine_callback(this);
            return callback_ret;
        }
        return Sonnet__DictionaryComboBox::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (sonnet__dictionarycombobox_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            sonnet__dictionarycombobox_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (sonnet__dictionarycombobox_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            sonnet__dictionarycombobox_mousemoveevent_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (sonnet__dictionarycombobox_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            sonnet__dictionarycombobox_enterevent_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (sonnet__dictionarycombobox_leaveevent_callback) {
            QEvent* cbval1 = event;
            sonnet__dictionarycombobox_leaveevent_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (sonnet__dictionarycombobox_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            sonnet__dictionarycombobox_moveevent_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (sonnet__dictionarycombobox_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            sonnet__dictionarycombobox_closeevent_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (sonnet__dictionarycombobox_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            sonnet__dictionarycombobox_tabletevent_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (sonnet__dictionarycombobox_actionevent_callback) {
            QActionEvent* cbval1 = event;
            sonnet__dictionarycombobox_actionevent_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (sonnet__dictionarycombobox_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            sonnet__dictionarycombobox_dragenterevent_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (sonnet__dictionarycombobox_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            sonnet__dictionarycombobox_dragmoveevent_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (sonnet__dictionarycombobox_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            sonnet__dictionarycombobox_dragleaveevent_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (sonnet__dictionarycombobox_dropevent_callback) {
            QDropEvent* cbval1 = event;
            sonnet__dictionarycombobox_dropevent_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (sonnet__dictionarycombobox_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = sonnet__dictionarycombobox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return Sonnet__DictionaryComboBox::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (sonnet__dictionarycombobox_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = sonnet__dictionarycombobox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return Sonnet__DictionaryComboBox::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (sonnet__dictionarycombobox_initpainter_callback) {
            QPainter* cbval1 = painter;
            sonnet__dictionarycombobox_initpainter_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (sonnet__dictionarycombobox_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = sonnet__dictionarycombobox_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return Sonnet__DictionaryComboBox::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (sonnet__dictionarycombobox_sharedpainter_callback) {
            QPainter* callback_ret = sonnet__dictionarycombobox_sharedpainter_callback(this);
            return callback_ret;
        }
        return Sonnet__DictionaryComboBox::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (sonnet__dictionarycombobox_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = sonnet__dictionarycombobox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return Sonnet__DictionaryComboBox::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (sonnet__dictionarycombobox_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = sonnet__dictionarycombobox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return Sonnet__DictionaryComboBox::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (sonnet__dictionarycombobox_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            sonnet__dictionarycombobox_timerevent_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (sonnet__dictionarycombobox_childevent_callback) {
            QChildEvent* cbval1 = event;
            sonnet__dictionarycombobox_childevent_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (sonnet__dictionarycombobox_customevent_callback) {
            QEvent* cbval1 = event;
            sonnet__dictionarycombobox_customevent_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (sonnet__dictionarycombobox_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            sonnet__dictionarycombobox_connectnotify_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (sonnet__dictionarycombobox_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            sonnet__dictionarycombobox_disconnectnotify_callback(this, cbval1);
            return;
        }
        Sonnet__DictionaryComboBox::disconnectNotify(signal);
    }

    // Friend functions
    friend void Sonnet__DictionaryComboBox_SuperFocusInEvent(Sonnet::DictionaryComboBox* self, QFocusEvent* e);
    friend void Sonnet__DictionaryComboBox_SuperFocusOutEvent(Sonnet::DictionaryComboBox* self, QFocusEvent* e);
    friend void Sonnet__DictionaryComboBox_SuperChangeEvent(Sonnet::DictionaryComboBox* self, QEvent* e);
    friend void Sonnet__DictionaryComboBox_SuperResizeEvent(Sonnet::DictionaryComboBox* self, QResizeEvent* e);
    friend void Sonnet__DictionaryComboBox_SuperPaintEvent(Sonnet::DictionaryComboBox* self, QPaintEvent* e);
    friend void Sonnet__DictionaryComboBox_SuperShowEvent(Sonnet::DictionaryComboBox* self, QShowEvent* e);
    friend void Sonnet__DictionaryComboBox_SuperHideEvent(Sonnet::DictionaryComboBox* self, QHideEvent* e);
    friend void Sonnet__DictionaryComboBox_SuperMousePressEvent(Sonnet::DictionaryComboBox* self, QMouseEvent* e);
    friend void Sonnet__DictionaryComboBox_SuperMouseReleaseEvent(Sonnet::DictionaryComboBox* self, QMouseEvent* e);
    friend void Sonnet__DictionaryComboBox_SuperKeyPressEvent(Sonnet::DictionaryComboBox* self, QKeyEvent* e);
    friend void Sonnet__DictionaryComboBox_SuperKeyReleaseEvent(Sonnet::DictionaryComboBox* self, QKeyEvent* e);
    friend void Sonnet__DictionaryComboBox_SuperWheelEvent(Sonnet::DictionaryComboBox* self, QWheelEvent* e);
    friend void Sonnet__DictionaryComboBox_SuperContextMenuEvent(Sonnet::DictionaryComboBox* self, QContextMenuEvent* e);
    friend void Sonnet__DictionaryComboBox_SuperInputMethodEvent(Sonnet::DictionaryComboBox* self, QInputMethodEvent* param1);
    friend void Sonnet__DictionaryComboBox_SuperInitStyleOption(const Sonnet::DictionaryComboBox* self, QStyleOptionComboBox* option);
    friend void Sonnet__DictionaryComboBox_SuperMouseDoubleClickEvent(Sonnet::DictionaryComboBox* self, QMouseEvent* event);
    friend void Sonnet__DictionaryComboBox_SuperMouseMoveEvent(Sonnet::DictionaryComboBox* self, QMouseEvent* event);
    friend void Sonnet__DictionaryComboBox_SuperEnterEvent(Sonnet::DictionaryComboBox* self, QEnterEvent* event);
    friend void Sonnet__DictionaryComboBox_SuperLeaveEvent(Sonnet::DictionaryComboBox* self, QEvent* event);
    friend void Sonnet__DictionaryComboBox_SuperMoveEvent(Sonnet::DictionaryComboBox* self, QMoveEvent* event);
    friend void Sonnet__DictionaryComboBox_SuperCloseEvent(Sonnet::DictionaryComboBox* self, QCloseEvent* event);
    friend void Sonnet__DictionaryComboBox_SuperTabletEvent(Sonnet::DictionaryComboBox* self, QTabletEvent* event);
    friend void Sonnet__DictionaryComboBox_SuperActionEvent(Sonnet::DictionaryComboBox* self, QActionEvent* event);
    friend void Sonnet__DictionaryComboBox_SuperDragEnterEvent(Sonnet::DictionaryComboBox* self, QDragEnterEvent* event);
    friend void Sonnet__DictionaryComboBox_SuperDragMoveEvent(Sonnet::DictionaryComboBox* self, QDragMoveEvent* event);
    friend void Sonnet__DictionaryComboBox_SuperDragLeaveEvent(Sonnet::DictionaryComboBox* self, QDragLeaveEvent* event);
    friend void Sonnet__DictionaryComboBox_SuperDropEvent(Sonnet::DictionaryComboBox* self, QDropEvent* event);
    friend bool Sonnet__DictionaryComboBox_SuperNativeEvent(Sonnet::DictionaryComboBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int Sonnet__DictionaryComboBox_SuperMetric(const Sonnet::DictionaryComboBox* self, int param1);
    friend void Sonnet__DictionaryComboBox_SuperInitPainter(const Sonnet::DictionaryComboBox* self, QPainter* painter);
    friend QPaintDevice* Sonnet__DictionaryComboBox_SuperRedirected(const Sonnet::DictionaryComboBox* self, QPoint* offset);
    friend QPainter* Sonnet__DictionaryComboBox_SuperSharedPainter(const Sonnet::DictionaryComboBox* self);
    friend bool Sonnet__DictionaryComboBox_SuperFocusNextPrevChild(Sonnet::DictionaryComboBox* self, bool next);
    friend void Sonnet__DictionaryComboBox_SuperTimerEvent(Sonnet::DictionaryComboBox* self, QTimerEvent* event);
    friend void Sonnet__DictionaryComboBox_SuperChildEvent(Sonnet::DictionaryComboBox* self, QChildEvent* event);
    friend void Sonnet__DictionaryComboBox_SuperCustomEvent(Sonnet::DictionaryComboBox* self, QEvent* event);
    friend void Sonnet__DictionaryComboBox_SuperConnectNotify(Sonnet::DictionaryComboBox* self, const QMetaMethod* signal);
    friend void Sonnet__DictionaryComboBox_SuperDisconnectNotify(Sonnet::DictionaryComboBox* self, const QMetaMethod* signal);
};

#endif
