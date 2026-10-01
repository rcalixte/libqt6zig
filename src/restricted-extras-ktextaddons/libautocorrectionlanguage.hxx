#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBAUTOCORRECTIONLANGUAGE_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBAUTOCORRECTIONLANGUAGE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextAutoCorrectionWidgets::AutoCorrectionLanguage
class VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage final : public TextAutoCorrectionWidgets::AutoCorrectionLanguage {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_MetaObject_Callback = QMetaObject* (*)(const TextAutoCorrectionWidgets__AutoCorrectionLanguage*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_Metacast_Callback = void* (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, const char*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_Metacall_Callback = int (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, int, int, void**);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_SetModel_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QAbstractItemModel*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_SizeHint_Callback = QSize* (*)(const TextAutoCorrectionWidgets__AutoCorrectionLanguage*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_MinimumSizeHint_Callback = QSize* (*)(const TextAutoCorrectionWidgets__AutoCorrectionLanguage*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_ShowPopup_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_HidePopup_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_Event_Callback = bool (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_InputMethodQuery_Callback = QVariant* (*)(const TextAutoCorrectionWidgets__AutoCorrectionLanguage*, int);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusInEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QFocusEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusOutEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QFocusEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_ChangeEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_ResizeEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QResizeEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_PaintEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QPaintEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_ShowEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QShowEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_HideEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QHideEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_MousePressEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QMouseEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_MouseReleaseEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QMouseEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_KeyPressEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QKeyEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_KeyReleaseEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QKeyEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_WheelEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QWheelEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_ContextMenuEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QContextMenuEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_InputMethodEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QInputMethodEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_InitStyleOption_Callback = void (*)(const TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QStyleOptionComboBox*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_DevType_Callback = int (*)(const TextAutoCorrectionWidgets__AutoCorrectionLanguage*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_SetVisible_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, bool);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_HeightForWidth_Callback = int (*)(const TextAutoCorrectionWidgets__AutoCorrectionLanguage*, int);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_HasHeightForWidth_Callback = bool (*)(const TextAutoCorrectionWidgets__AutoCorrectionLanguage*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_PaintEngine_Callback = QPaintEngine* (*)(const TextAutoCorrectionWidgets__AutoCorrectionLanguage*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_MouseDoubleClickEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QMouseEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_MouseMoveEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QMouseEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_EnterEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QEnterEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_LeaveEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_MoveEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QMoveEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_CloseEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QCloseEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_TabletEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QTabletEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_ActionEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QActionEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_DragEnterEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QDragEnterEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_DragMoveEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QDragMoveEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_DragLeaveEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QDragLeaveEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_DropEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QDropEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_NativeEvent_Callback = bool (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, libqt_string, void*, intptr_t*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_Metric_Callback = int (*)(const TextAutoCorrectionWidgets__AutoCorrectionLanguage*, int);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_InitPainter_Callback = void (*)(const TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QPainter*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_Redirected_Callback = QPaintDevice* (*)(const TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QPoint*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_SharedPainter_Callback = QPainter* (*)(const TextAutoCorrectionWidgets__AutoCorrectionLanguage*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusNextPrevChild_Callback = bool (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, bool);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_EventFilter_Callback = bool (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QObject*, QEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_TimerEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QTimerEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_ChildEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QChildEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_CustomEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_ConnectNotify_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QMetaMethod*);
    using TextAutoCorrectionWidgets__AutoCorrectionLanguage_DisconnectNotify_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionLanguage*, QMetaMethod*);
    using TextAutoCorrectionWidgets::AutoCorrectionLanguage::create;
    using TextAutoCorrectionWidgets::AutoCorrectionLanguage::destroy;
    using TextAutoCorrectionWidgets::AutoCorrectionLanguage::focusNextChild;
    using TextAutoCorrectionWidgets::AutoCorrectionLanguage::focusPreviousChild;
    using TextAutoCorrectionWidgets::AutoCorrectionLanguage::getDecodedMetricF;
    using TextAutoCorrectionWidgets::AutoCorrectionLanguage::isSignalConnected;
    using TextAutoCorrectionWidgets::AutoCorrectionLanguage::receivers;
    using TextAutoCorrectionWidgets::AutoCorrectionLanguage::sender;
    using TextAutoCorrectionWidgets::AutoCorrectionLanguage::senderSignalIndex;
    using TextAutoCorrectionWidgets::AutoCorrectionLanguage::updateMicroFocus;

    // Instance callback storage
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_MetaObject_Callback textautocorrectionwidgets__autocorrectionlanguage_metaobject_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_Metacast_Callback textautocorrectionwidgets__autocorrectionlanguage_metacast_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_Metacall_Callback textautocorrectionwidgets__autocorrectionlanguage_metacall_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_SetModel_Callback textautocorrectionwidgets__autocorrectionlanguage_setmodel_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_SizeHint_Callback textautocorrectionwidgets__autocorrectionlanguage_sizehint_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_MinimumSizeHint_Callback textautocorrectionwidgets__autocorrectionlanguage_minimumsizehint_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_ShowPopup_Callback textautocorrectionwidgets__autocorrectionlanguage_showpopup_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_HidePopup_Callback textautocorrectionwidgets__autocorrectionlanguage_hidepopup_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_Event_Callback textautocorrectionwidgets__autocorrectionlanguage_event_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_InputMethodQuery_Callback textautocorrectionwidgets__autocorrectionlanguage_inputmethodquery_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusInEvent_Callback textautocorrectionwidgets__autocorrectionlanguage_focusinevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusOutEvent_Callback textautocorrectionwidgets__autocorrectionlanguage_focusoutevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_ChangeEvent_Callback textautocorrectionwidgets__autocorrectionlanguage_changeevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_ResizeEvent_Callback textautocorrectionwidgets__autocorrectionlanguage_resizeevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_PaintEvent_Callback textautocorrectionwidgets__autocorrectionlanguage_paintevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_ShowEvent_Callback textautocorrectionwidgets__autocorrectionlanguage_showevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_HideEvent_Callback textautocorrectionwidgets__autocorrectionlanguage_hideevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_MousePressEvent_Callback textautocorrectionwidgets__autocorrectionlanguage_mousepressevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_MouseReleaseEvent_Callback textautocorrectionwidgets__autocorrectionlanguage_mousereleaseevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_KeyPressEvent_Callback textautocorrectionwidgets__autocorrectionlanguage_keypressevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_KeyReleaseEvent_Callback textautocorrectionwidgets__autocorrectionlanguage_keyreleaseevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_WheelEvent_Callback textautocorrectionwidgets__autocorrectionlanguage_wheelevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_ContextMenuEvent_Callback textautocorrectionwidgets__autocorrectionlanguage_contextmenuevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_InputMethodEvent_Callback textautocorrectionwidgets__autocorrectionlanguage_inputmethodevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_InitStyleOption_Callback textautocorrectionwidgets__autocorrectionlanguage_initstyleoption_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_DevType_Callback textautocorrectionwidgets__autocorrectionlanguage_devtype_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_SetVisible_Callback textautocorrectionwidgets__autocorrectionlanguage_setvisible_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_HeightForWidth_Callback textautocorrectionwidgets__autocorrectionlanguage_heightforwidth_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_HasHeightForWidth_Callback textautocorrectionwidgets__autocorrectionlanguage_hasheightforwidth_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_PaintEngine_Callback textautocorrectionwidgets__autocorrectionlanguage_paintengine_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_MouseDoubleClickEvent_Callback textautocorrectionwidgets__autocorrectionlanguage_mousedoubleclickevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_MouseMoveEvent_Callback textautocorrectionwidgets__autocorrectionlanguage_mousemoveevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_EnterEvent_Callback textautocorrectionwidgets__autocorrectionlanguage_enterevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_LeaveEvent_Callback textautocorrectionwidgets__autocorrectionlanguage_leaveevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_MoveEvent_Callback textautocorrectionwidgets__autocorrectionlanguage_moveevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_CloseEvent_Callback textautocorrectionwidgets__autocorrectionlanguage_closeevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_TabletEvent_Callback textautocorrectionwidgets__autocorrectionlanguage_tabletevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_ActionEvent_Callback textautocorrectionwidgets__autocorrectionlanguage_actionevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_DragEnterEvent_Callback textautocorrectionwidgets__autocorrectionlanguage_dragenterevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_DragMoveEvent_Callback textautocorrectionwidgets__autocorrectionlanguage_dragmoveevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_DragLeaveEvent_Callback textautocorrectionwidgets__autocorrectionlanguage_dragleaveevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_DropEvent_Callback textautocorrectionwidgets__autocorrectionlanguage_dropevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_NativeEvent_Callback textautocorrectionwidgets__autocorrectionlanguage_nativeevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_Metric_Callback textautocorrectionwidgets__autocorrectionlanguage_metric_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_InitPainter_Callback textautocorrectionwidgets__autocorrectionlanguage_initpainter_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_Redirected_Callback textautocorrectionwidgets__autocorrectionlanguage_redirected_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_SharedPainter_Callback textautocorrectionwidgets__autocorrectionlanguage_sharedpainter_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusNextPrevChild_Callback textautocorrectionwidgets__autocorrectionlanguage_focusnextprevchild_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_EventFilter_Callback textautocorrectionwidgets__autocorrectionlanguage_eventfilter_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_TimerEvent_Callback textautocorrectionwidgets__autocorrectionlanguage_timerevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_ChildEvent_Callback textautocorrectionwidgets__autocorrectionlanguage_childevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_CustomEvent_Callback textautocorrectionwidgets__autocorrectionlanguage_customevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_ConnectNotify_Callback textautocorrectionwidgets__autocorrectionlanguage_connectnotify_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionLanguage_DisconnectNotify_Callback textautocorrectionwidgets__autocorrectionlanguage_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextAutoCorrectionWidgets::AutoCorrectionLanguage {
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::actionEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::changeEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::childEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::closeEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::connectNotify;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::contextMenuEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::customEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::disconnectNotify;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::dragEnterEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::dragLeaveEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::dragMoveEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::dropEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::enterEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::focusInEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::focusNextPrevChild;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::focusOutEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::hideEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::initPainter;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::initStyleOption;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::inputMethodEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::keyPressEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::keyReleaseEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::leaveEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::metric;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::mouseDoubleClickEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::mouseMoveEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::mousePressEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::mouseReleaseEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::moveEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::nativeEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::paintEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::redirected;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::resizeEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::sharedPainter;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::showEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::tabletEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::timerEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionLanguage::wheelEvent;
    };

    VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage(QWidget* parent) : TextAutoCorrectionWidgets::AutoCorrectionLanguage(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textautocorrectionwidgets__autocorrectionlanguage_metaobject_callback) {
            QMetaObject* callback_ret = textautocorrectionwidgets__autocorrectionlanguage_metaobject_callback(this);
            return callback_ret;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionLanguage::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textautocorrectionwidgets__autocorrectionlanguage_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionLanguage::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textautocorrectionwidgets__autocorrectionlanguage_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextAutoCorrectionWidgets__AutoCorrectionLanguage::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_setmodel_callback) {
            QAbstractItemModel* cbval1 = model;
            textautocorrectionwidgets__autocorrectionlanguage_setmodel_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::setModel(model);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textautocorrectionwidgets__autocorrectionlanguage_sizehint_callback) {
            QSize* callback_ret = textautocorrectionwidgets__autocorrectionlanguage_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionLanguage::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textautocorrectionwidgets__autocorrectionlanguage_minimumsizehint_callback) {
            QSize* callback_ret = textautocorrectionwidgets__autocorrectionlanguage_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionLanguage::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void showPopup() override {
        if (textautocorrectionwidgets__autocorrectionlanguage_showpopup_callback) {
            textautocorrectionwidgets__autocorrectionlanguage_showpopup_callback(this);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::showPopup();
    }

    // Virtual method for C ABI access and custom callback
    virtual void hidePopup() override {
        if (textautocorrectionwidgets__autocorrectionlanguage_hidepopup_callback) {
            textautocorrectionwidgets__autocorrectionlanguage_hidepopup_callback(this);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::hidePopup();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = textautocorrectionwidgets__autocorrectionlanguage_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionLanguage::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textautocorrectionwidgets__autocorrectionlanguage_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = textautocorrectionwidgets__autocorrectionlanguage_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionLanguage::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_focusinevent_callback) {
            QFocusEvent* cbval1 = e;
            textautocorrectionwidgets__autocorrectionlanguage_focusinevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_focusoutevent_callback) {
            QFocusEvent* cbval1 = e;
            textautocorrectionwidgets__autocorrectionlanguage_focusoutevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_changeevent_callback) {
            QEvent* cbval1 = e;
            textautocorrectionwidgets__autocorrectionlanguage_changeevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_resizeevent_callback) {
            QResizeEvent* cbval1 = e;
            textautocorrectionwidgets__autocorrectionlanguage_resizeevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            textautocorrectionwidgets__autocorrectionlanguage_paintevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* e) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_showevent_callback) {
            QShowEvent* cbval1 = e;
            textautocorrectionwidgets__autocorrectionlanguage_showevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::showEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* e) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_hideevent_callback) {
            QHideEvent* cbval1 = e;
            textautocorrectionwidgets__autocorrectionlanguage_hideevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::hideEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_mousepressevent_callback) {
            QMouseEvent* cbval1 = e;
            textautocorrectionwidgets__autocorrectionlanguage_mousepressevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            textautocorrectionwidgets__autocorrectionlanguage_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_keypressevent_callback) {
            QKeyEvent* cbval1 = e;
            textautocorrectionwidgets__autocorrectionlanguage_keypressevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            textautocorrectionwidgets__autocorrectionlanguage_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_wheelevent_callback) {
            QWheelEvent* cbval1 = e;
            textautocorrectionwidgets__autocorrectionlanguage_wheelevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = e;
            textautocorrectionwidgets__autocorrectionlanguage_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::contextMenuEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            textautocorrectionwidgets__autocorrectionlanguage_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionComboBox* option) const override {
        if (textautocorrectionwidgets__autocorrectionlanguage_initstyleoption_callback) {
            QStyleOptionComboBox* cbval1 = option;
            textautocorrectionwidgets__autocorrectionlanguage_initstyleoption_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textautocorrectionwidgets__autocorrectionlanguage_devtype_callback) {
            int callback_ret = textautocorrectionwidgets__autocorrectionlanguage_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextAutoCorrectionWidgets__AutoCorrectionLanguage::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_setvisible_callback) {
            bool cbval1 = visible;
            textautocorrectionwidgets__autocorrectionlanguage_setvisible_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textautocorrectionwidgets__autocorrectionlanguage_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = textautocorrectionwidgets__autocorrectionlanguage_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextAutoCorrectionWidgets__AutoCorrectionLanguage::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textautocorrectionwidgets__autocorrectionlanguage_hasheightforwidth_callback) {
            bool callback_ret = textautocorrectionwidgets__autocorrectionlanguage_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionLanguage::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textautocorrectionwidgets__autocorrectionlanguage_paintengine_callback) {
            QPaintEngine* callback_ret = textautocorrectionwidgets__autocorrectionlanguage_paintengine_callback(this);
            return callback_ret;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionLanguage::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionlanguage_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionlanguage_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionlanguage_enterevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_leaveevent_callback) {
            QEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionlanguage_leaveevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionlanguage_moveevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionlanguage_closeevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionlanguage_tabletevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_actionevent_callback) {
            QActionEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionlanguage_actionevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionlanguage_dragenterevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionlanguage_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionlanguage_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_dropevent_callback) {
            QDropEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionlanguage_dropevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = textautocorrectionwidgets__autocorrectionlanguage_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionLanguage::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textautocorrectionwidgets__autocorrectionlanguage_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = textautocorrectionwidgets__autocorrectionlanguage_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextAutoCorrectionWidgets__AutoCorrectionLanguage::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textautocorrectionwidgets__autocorrectionlanguage_initpainter_callback) {
            QPainter* cbval1 = painter;
            textautocorrectionwidgets__autocorrectionlanguage_initpainter_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textautocorrectionwidgets__autocorrectionlanguage_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = textautocorrectionwidgets__autocorrectionlanguage_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionLanguage::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textautocorrectionwidgets__autocorrectionlanguage_sharedpainter_callback) {
            QPainter* callback_ret = textautocorrectionwidgets__autocorrectionlanguage_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionLanguage::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = textautocorrectionwidgets__autocorrectionlanguage_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionLanguage::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = textautocorrectionwidgets__autocorrectionlanguage_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionLanguage::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionlanguage_timerevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_childevent_callback) {
            QChildEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionlanguage_childevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_customevent_callback) {
            QEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionlanguage_customevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textautocorrectionwidgets__autocorrectionlanguage_connectnotify_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textautocorrectionwidgets__autocorrectionlanguage_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textautocorrectionwidgets__autocorrectionlanguage_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionLanguage::disconnectNotify(signal);
    }

    // Friend functions
    friend void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperFocusInEvent(TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, QFocusEvent* e);
    friend void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperFocusOutEvent(TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, QFocusEvent* e);
    friend void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperChangeEvent(TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, QEvent* e);
    friend void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperResizeEvent(TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, QResizeEvent* e);
    friend void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperPaintEvent(TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, QPaintEvent* e);
    friend void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperShowEvent(TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, QShowEvent* e);
    friend void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperHideEvent(TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, QHideEvent* e);
    friend void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMousePressEvent(TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, QMouseEvent* e);
    friend void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMouseReleaseEvent(TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, QMouseEvent* e);
    friend void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperKeyPressEvent(TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, QKeyEvent* e);
    friend void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperKeyReleaseEvent(TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, QKeyEvent* e);
    friend void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperWheelEvent(TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, QWheelEvent* e);
    friend void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperContextMenuEvent(TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, QContextMenuEvent* e);
    friend void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperInputMethodEvent(TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, QInputMethodEvent* param1);
    friend void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperInitStyleOption(const TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, QStyleOptionComboBox* option);
    friend void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMouseDoubleClickEvent(TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, QMouseEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMouseMoveEvent(TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, QMouseEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperEnterEvent(TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, QEnterEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperLeaveEvent(TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, QEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMoveEvent(TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, QMoveEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperCloseEvent(TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, QCloseEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperTabletEvent(TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, QTabletEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperActionEvent(TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, QActionEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperDragEnterEvent(TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, QDragEnterEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperDragMoveEvent(TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, QDragMoveEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperDragLeaveEvent(TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, QDragLeaveEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperDropEvent(TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, QDropEvent* event);
    friend bool TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperNativeEvent(TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMetric(const TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, int param1);
    friend void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperInitPainter(const TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, QPainter* painter);
    friend QPaintDevice* TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperRedirected(const TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, QPoint* offset);
    friend QPainter* TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperSharedPainter(const TextAutoCorrectionWidgets::AutoCorrectionLanguage* self);
    friend bool TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperFocusNextPrevChild(TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, bool next);
    friend void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperTimerEvent(TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, QTimerEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperChildEvent(TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, QChildEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperCustomEvent(TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, QEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperConnectNotify(TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, const QMetaMethod* signal);
    friend void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperDisconnectNotify(TextAutoCorrectionWidgets::AutoCorrectionLanguage* self, const QMetaMethod* signal);
};

#endif
