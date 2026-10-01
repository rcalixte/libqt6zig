#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBLANGUAGETOOLCOMBOBOX_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBLANGUAGETOOLCOMBOBOX_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextGrammarCheck::LanguageToolComboBox
class VirtualTextGrammarCheckLanguageToolComboBox final : public TextGrammarCheck::LanguageToolComboBox {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextGrammarCheck__LanguageToolComboBox_MetaObject_Callback = QMetaObject* (*)(const TextGrammarCheck__LanguageToolComboBox*);
    using TextGrammarCheck__LanguageToolComboBox_Metacast_Callback = void* (*)(TextGrammarCheck__LanguageToolComboBox*, const char*);
    using TextGrammarCheck__LanguageToolComboBox_Metacall_Callback = int (*)(TextGrammarCheck__LanguageToolComboBox*, int, int, void**);
    using TextGrammarCheck__LanguageToolComboBox_SetModel_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QAbstractItemModel*);
    using TextGrammarCheck__LanguageToolComboBox_SizeHint_Callback = QSize* (*)(const TextGrammarCheck__LanguageToolComboBox*);
    using TextGrammarCheck__LanguageToolComboBox_MinimumSizeHint_Callback = QSize* (*)(const TextGrammarCheck__LanguageToolComboBox*);
    using TextGrammarCheck__LanguageToolComboBox_ShowPopup_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*);
    using TextGrammarCheck__LanguageToolComboBox_HidePopup_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*);
    using TextGrammarCheck__LanguageToolComboBox_Event_Callback = bool (*)(TextGrammarCheck__LanguageToolComboBox*, QEvent*);
    using TextGrammarCheck__LanguageToolComboBox_InputMethodQuery_Callback = QVariant* (*)(const TextGrammarCheck__LanguageToolComboBox*, int);
    using TextGrammarCheck__LanguageToolComboBox_FocusInEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QFocusEvent*);
    using TextGrammarCheck__LanguageToolComboBox_FocusOutEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QFocusEvent*);
    using TextGrammarCheck__LanguageToolComboBox_ChangeEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QEvent*);
    using TextGrammarCheck__LanguageToolComboBox_ResizeEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QResizeEvent*);
    using TextGrammarCheck__LanguageToolComboBox_PaintEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QPaintEvent*);
    using TextGrammarCheck__LanguageToolComboBox_ShowEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QShowEvent*);
    using TextGrammarCheck__LanguageToolComboBox_HideEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QHideEvent*);
    using TextGrammarCheck__LanguageToolComboBox_MousePressEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QMouseEvent*);
    using TextGrammarCheck__LanguageToolComboBox_MouseReleaseEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QMouseEvent*);
    using TextGrammarCheck__LanguageToolComboBox_KeyPressEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QKeyEvent*);
    using TextGrammarCheck__LanguageToolComboBox_KeyReleaseEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QKeyEvent*);
    using TextGrammarCheck__LanguageToolComboBox_WheelEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QWheelEvent*);
    using TextGrammarCheck__LanguageToolComboBox_ContextMenuEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QContextMenuEvent*);
    using TextGrammarCheck__LanguageToolComboBox_InputMethodEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QInputMethodEvent*);
    using TextGrammarCheck__LanguageToolComboBox_InitStyleOption_Callback = void (*)(const TextGrammarCheck__LanguageToolComboBox*, QStyleOptionComboBox*);
    using TextGrammarCheck__LanguageToolComboBox_DevType_Callback = int (*)(const TextGrammarCheck__LanguageToolComboBox*);
    using TextGrammarCheck__LanguageToolComboBox_SetVisible_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, bool);
    using TextGrammarCheck__LanguageToolComboBox_HeightForWidth_Callback = int (*)(const TextGrammarCheck__LanguageToolComboBox*, int);
    using TextGrammarCheck__LanguageToolComboBox_HasHeightForWidth_Callback = bool (*)(const TextGrammarCheck__LanguageToolComboBox*);
    using TextGrammarCheck__LanguageToolComboBox_PaintEngine_Callback = QPaintEngine* (*)(const TextGrammarCheck__LanguageToolComboBox*);
    using TextGrammarCheck__LanguageToolComboBox_MouseDoubleClickEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QMouseEvent*);
    using TextGrammarCheck__LanguageToolComboBox_MouseMoveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QMouseEvent*);
    using TextGrammarCheck__LanguageToolComboBox_EnterEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QEnterEvent*);
    using TextGrammarCheck__LanguageToolComboBox_LeaveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QEvent*);
    using TextGrammarCheck__LanguageToolComboBox_MoveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QMoveEvent*);
    using TextGrammarCheck__LanguageToolComboBox_CloseEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QCloseEvent*);
    using TextGrammarCheck__LanguageToolComboBox_TabletEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QTabletEvent*);
    using TextGrammarCheck__LanguageToolComboBox_ActionEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QActionEvent*);
    using TextGrammarCheck__LanguageToolComboBox_DragEnterEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QDragEnterEvent*);
    using TextGrammarCheck__LanguageToolComboBox_DragMoveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QDragMoveEvent*);
    using TextGrammarCheck__LanguageToolComboBox_DragLeaveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QDragLeaveEvent*);
    using TextGrammarCheck__LanguageToolComboBox_DropEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QDropEvent*);
    using TextGrammarCheck__LanguageToolComboBox_NativeEvent_Callback = bool (*)(TextGrammarCheck__LanguageToolComboBox*, libqt_string, void*, intptr_t*);
    using TextGrammarCheck__LanguageToolComboBox_Metric_Callback = int (*)(const TextGrammarCheck__LanguageToolComboBox*, int);
    using TextGrammarCheck__LanguageToolComboBox_InitPainter_Callback = void (*)(const TextGrammarCheck__LanguageToolComboBox*, QPainter*);
    using TextGrammarCheck__LanguageToolComboBox_Redirected_Callback = QPaintDevice* (*)(const TextGrammarCheck__LanguageToolComboBox*, QPoint*);
    using TextGrammarCheck__LanguageToolComboBox_SharedPainter_Callback = QPainter* (*)(const TextGrammarCheck__LanguageToolComboBox*);
    using TextGrammarCheck__LanguageToolComboBox_FocusNextPrevChild_Callback = bool (*)(TextGrammarCheck__LanguageToolComboBox*, bool);
    using TextGrammarCheck__LanguageToolComboBox_EventFilter_Callback = bool (*)(TextGrammarCheck__LanguageToolComboBox*, QObject*, QEvent*);
    using TextGrammarCheck__LanguageToolComboBox_TimerEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QTimerEvent*);
    using TextGrammarCheck__LanguageToolComboBox_ChildEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QChildEvent*);
    using TextGrammarCheck__LanguageToolComboBox_CustomEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QEvent*);
    using TextGrammarCheck__LanguageToolComboBox_ConnectNotify_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QMetaMethod*);
    using TextGrammarCheck__LanguageToolComboBox_DisconnectNotify_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QMetaMethod*);
    using TextGrammarCheck::LanguageToolComboBox::create;
    using TextGrammarCheck::LanguageToolComboBox::destroy;
    using TextGrammarCheck::LanguageToolComboBox::focusNextChild;
    using TextGrammarCheck::LanguageToolComboBox::focusPreviousChild;
    using TextGrammarCheck::LanguageToolComboBox::getDecodedMetricF;
    using TextGrammarCheck::LanguageToolComboBox::isSignalConnected;
    using TextGrammarCheck::LanguageToolComboBox::receivers;
    using TextGrammarCheck::LanguageToolComboBox::sender;
    using TextGrammarCheck::LanguageToolComboBox::senderSignalIndex;
    using TextGrammarCheck::LanguageToolComboBox::updateMicroFocus;

    // Instance callback storage
    TextGrammarCheck__LanguageToolComboBox_MetaObject_Callback textgrammarcheck__languagetoolcombobox_metaobject_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_Metacast_Callback textgrammarcheck__languagetoolcombobox_metacast_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_Metacall_Callback textgrammarcheck__languagetoolcombobox_metacall_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_SetModel_Callback textgrammarcheck__languagetoolcombobox_setmodel_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_SizeHint_Callback textgrammarcheck__languagetoolcombobox_sizehint_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_MinimumSizeHint_Callback textgrammarcheck__languagetoolcombobox_minimumsizehint_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_ShowPopup_Callback textgrammarcheck__languagetoolcombobox_showpopup_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_HidePopup_Callback textgrammarcheck__languagetoolcombobox_hidepopup_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_Event_Callback textgrammarcheck__languagetoolcombobox_event_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_InputMethodQuery_Callback textgrammarcheck__languagetoolcombobox_inputmethodquery_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_FocusInEvent_Callback textgrammarcheck__languagetoolcombobox_focusinevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_FocusOutEvent_Callback textgrammarcheck__languagetoolcombobox_focusoutevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_ChangeEvent_Callback textgrammarcheck__languagetoolcombobox_changeevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_ResizeEvent_Callback textgrammarcheck__languagetoolcombobox_resizeevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_PaintEvent_Callback textgrammarcheck__languagetoolcombobox_paintevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_ShowEvent_Callback textgrammarcheck__languagetoolcombobox_showevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_HideEvent_Callback textgrammarcheck__languagetoolcombobox_hideevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_MousePressEvent_Callback textgrammarcheck__languagetoolcombobox_mousepressevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_MouseReleaseEvent_Callback textgrammarcheck__languagetoolcombobox_mousereleaseevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_KeyPressEvent_Callback textgrammarcheck__languagetoolcombobox_keypressevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_KeyReleaseEvent_Callback textgrammarcheck__languagetoolcombobox_keyreleaseevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_WheelEvent_Callback textgrammarcheck__languagetoolcombobox_wheelevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_ContextMenuEvent_Callback textgrammarcheck__languagetoolcombobox_contextmenuevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_InputMethodEvent_Callback textgrammarcheck__languagetoolcombobox_inputmethodevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_InitStyleOption_Callback textgrammarcheck__languagetoolcombobox_initstyleoption_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_DevType_Callback textgrammarcheck__languagetoolcombobox_devtype_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_SetVisible_Callback textgrammarcheck__languagetoolcombobox_setvisible_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_HeightForWidth_Callback textgrammarcheck__languagetoolcombobox_heightforwidth_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_HasHeightForWidth_Callback textgrammarcheck__languagetoolcombobox_hasheightforwidth_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_PaintEngine_Callback textgrammarcheck__languagetoolcombobox_paintengine_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_MouseDoubleClickEvent_Callback textgrammarcheck__languagetoolcombobox_mousedoubleclickevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_MouseMoveEvent_Callback textgrammarcheck__languagetoolcombobox_mousemoveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_EnterEvent_Callback textgrammarcheck__languagetoolcombobox_enterevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_LeaveEvent_Callback textgrammarcheck__languagetoolcombobox_leaveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_MoveEvent_Callback textgrammarcheck__languagetoolcombobox_moveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_CloseEvent_Callback textgrammarcheck__languagetoolcombobox_closeevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_TabletEvent_Callback textgrammarcheck__languagetoolcombobox_tabletevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_ActionEvent_Callback textgrammarcheck__languagetoolcombobox_actionevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_DragEnterEvent_Callback textgrammarcheck__languagetoolcombobox_dragenterevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_DragMoveEvent_Callback textgrammarcheck__languagetoolcombobox_dragmoveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_DragLeaveEvent_Callback textgrammarcheck__languagetoolcombobox_dragleaveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_DropEvent_Callback textgrammarcheck__languagetoolcombobox_dropevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_NativeEvent_Callback textgrammarcheck__languagetoolcombobox_nativeevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_Metric_Callback textgrammarcheck__languagetoolcombobox_metric_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_InitPainter_Callback textgrammarcheck__languagetoolcombobox_initpainter_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_Redirected_Callback textgrammarcheck__languagetoolcombobox_redirected_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_SharedPainter_Callback textgrammarcheck__languagetoolcombobox_sharedpainter_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_FocusNextPrevChild_Callback textgrammarcheck__languagetoolcombobox_focusnextprevchild_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_EventFilter_Callback textgrammarcheck__languagetoolcombobox_eventfilter_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_TimerEvent_Callback textgrammarcheck__languagetoolcombobox_timerevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_ChildEvent_Callback textgrammarcheck__languagetoolcombobox_childevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_CustomEvent_Callback textgrammarcheck__languagetoolcombobox_customevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_ConnectNotify_Callback textgrammarcheck__languagetoolcombobox_connectnotify_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_DisconnectNotify_Callback textgrammarcheck__languagetoolcombobox_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextGrammarCheck::LanguageToolComboBox {
        using TextGrammarCheck::LanguageToolComboBox::actionEvent;
        using TextGrammarCheck::LanguageToolComboBox::changeEvent;
        using TextGrammarCheck::LanguageToolComboBox::childEvent;
        using TextGrammarCheck::LanguageToolComboBox::closeEvent;
        using TextGrammarCheck::LanguageToolComboBox::connectNotify;
        using TextGrammarCheck::LanguageToolComboBox::contextMenuEvent;
        using TextGrammarCheck::LanguageToolComboBox::customEvent;
        using TextGrammarCheck::LanguageToolComboBox::disconnectNotify;
        using TextGrammarCheck::LanguageToolComboBox::dragEnterEvent;
        using TextGrammarCheck::LanguageToolComboBox::dragLeaveEvent;
        using TextGrammarCheck::LanguageToolComboBox::dragMoveEvent;
        using TextGrammarCheck::LanguageToolComboBox::dropEvent;
        using TextGrammarCheck::LanguageToolComboBox::enterEvent;
        using TextGrammarCheck::LanguageToolComboBox::focusInEvent;
        using TextGrammarCheck::LanguageToolComboBox::focusNextPrevChild;
        using TextGrammarCheck::LanguageToolComboBox::focusOutEvent;
        using TextGrammarCheck::LanguageToolComboBox::hideEvent;
        using TextGrammarCheck::LanguageToolComboBox::initPainter;
        using TextGrammarCheck::LanguageToolComboBox::initStyleOption;
        using TextGrammarCheck::LanguageToolComboBox::inputMethodEvent;
        using TextGrammarCheck::LanguageToolComboBox::keyPressEvent;
        using TextGrammarCheck::LanguageToolComboBox::keyReleaseEvent;
        using TextGrammarCheck::LanguageToolComboBox::leaveEvent;
        using TextGrammarCheck::LanguageToolComboBox::metric;
        using TextGrammarCheck::LanguageToolComboBox::mouseDoubleClickEvent;
        using TextGrammarCheck::LanguageToolComboBox::mouseMoveEvent;
        using TextGrammarCheck::LanguageToolComboBox::mousePressEvent;
        using TextGrammarCheck::LanguageToolComboBox::mouseReleaseEvent;
        using TextGrammarCheck::LanguageToolComboBox::moveEvent;
        using TextGrammarCheck::LanguageToolComboBox::nativeEvent;
        using TextGrammarCheck::LanguageToolComboBox::paintEvent;
        using TextGrammarCheck::LanguageToolComboBox::redirected;
        using TextGrammarCheck::LanguageToolComboBox::resizeEvent;
        using TextGrammarCheck::LanguageToolComboBox::sharedPainter;
        using TextGrammarCheck::LanguageToolComboBox::showEvent;
        using TextGrammarCheck::LanguageToolComboBox::tabletEvent;
        using TextGrammarCheck::LanguageToolComboBox::timerEvent;
        using TextGrammarCheck::LanguageToolComboBox::wheelEvent;
    };

    VirtualTextGrammarCheckLanguageToolComboBox(QWidget* parent) : TextGrammarCheck::LanguageToolComboBox(parent) {};
    VirtualTextGrammarCheckLanguageToolComboBox() : TextGrammarCheck::LanguageToolComboBox() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textgrammarcheck__languagetoolcombobox_metaobject_callback) {
            QMetaObject* callback_ret = textgrammarcheck__languagetoolcombobox_metaobject_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolComboBox::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textgrammarcheck__languagetoolcombobox_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textgrammarcheck__languagetoolcombobox_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolComboBox::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textgrammarcheck__languagetoolcombobox_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textgrammarcheck__languagetoolcombobox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolComboBox::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (textgrammarcheck__languagetoolcombobox_setmodel_callback) {
            QAbstractItemModel* cbval1 = model;
            textgrammarcheck__languagetoolcombobox_setmodel_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::setModel(model);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textgrammarcheck__languagetoolcombobox_sizehint_callback) {
            QSize* callback_ret = textgrammarcheck__languagetoolcombobox_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextGrammarCheck__LanguageToolComboBox::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textgrammarcheck__languagetoolcombobox_minimumsizehint_callback) {
            QSize* callback_ret = textgrammarcheck__languagetoolcombobox_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextGrammarCheck__LanguageToolComboBox::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void showPopup() override {
        if (textgrammarcheck__languagetoolcombobox_showpopup_callback) {
            textgrammarcheck__languagetoolcombobox_showpopup_callback(this);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::showPopup();
    }

    // Virtual method for C ABI access and custom callback
    virtual void hidePopup() override {
        if (textgrammarcheck__languagetoolcombobox_hidepopup_callback) {
            textgrammarcheck__languagetoolcombobox_hidepopup_callback(this);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::hidePopup();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textgrammarcheck__languagetoolcombobox_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = textgrammarcheck__languagetoolcombobox_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolComboBox::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textgrammarcheck__languagetoolcombobox_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = textgrammarcheck__languagetoolcombobox_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextGrammarCheck__LanguageToolComboBox::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (textgrammarcheck__languagetoolcombobox_focusinevent_callback) {
            QFocusEvent* cbval1 = e;
            textgrammarcheck__languagetoolcombobox_focusinevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (textgrammarcheck__languagetoolcombobox_focusoutevent_callback) {
            QFocusEvent* cbval1 = e;
            textgrammarcheck__languagetoolcombobox_focusoutevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (textgrammarcheck__languagetoolcombobox_changeevent_callback) {
            QEvent* cbval1 = e;
            textgrammarcheck__languagetoolcombobox_changeevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (textgrammarcheck__languagetoolcombobox_resizeevent_callback) {
            QResizeEvent* cbval1 = e;
            textgrammarcheck__languagetoolcombobox_resizeevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (textgrammarcheck__languagetoolcombobox_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            textgrammarcheck__languagetoolcombobox_paintevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* e) override {
        if (textgrammarcheck__languagetoolcombobox_showevent_callback) {
            QShowEvent* cbval1 = e;
            textgrammarcheck__languagetoolcombobox_showevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::showEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* e) override {
        if (textgrammarcheck__languagetoolcombobox_hideevent_callback) {
            QHideEvent* cbval1 = e;
            textgrammarcheck__languagetoolcombobox_hideevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::hideEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (textgrammarcheck__languagetoolcombobox_mousepressevent_callback) {
            QMouseEvent* cbval1 = e;
            textgrammarcheck__languagetoolcombobox_mousepressevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (textgrammarcheck__languagetoolcombobox_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            textgrammarcheck__languagetoolcombobox_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (textgrammarcheck__languagetoolcombobox_keypressevent_callback) {
            QKeyEvent* cbval1 = e;
            textgrammarcheck__languagetoolcombobox_keypressevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (textgrammarcheck__languagetoolcombobox_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            textgrammarcheck__languagetoolcombobox_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (textgrammarcheck__languagetoolcombobox_wheelevent_callback) {
            QWheelEvent* cbval1 = e;
            textgrammarcheck__languagetoolcombobox_wheelevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (textgrammarcheck__languagetoolcombobox_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = e;
            textgrammarcheck__languagetoolcombobox_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::contextMenuEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textgrammarcheck__languagetoolcombobox_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            textgrammarcheck__languagetoolcombobox_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionComboBox* option) const override {
        if (textgrammarcheck__languagetoolcombobox_initstyleoption_callback) {
            QStyleOptionComboBox* cbval1 = option;
            textgrammarcheck__languagetoolcombobox_initstyleoption_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textgrammarcheck__languagetoolcombobox_devtype_callback) {
            int callback_ret = textgrammarcheck__languagetoolcombobox_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolComboBox::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textgrammarcheck__languagetoolcombobox_setvisible_callback) {
            bool cbval1 = visible;
            textgrammarcheck__languagetoolcombobox_setvisible_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textgrammarcheck__languagetoolcombobox_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = textgrammarcheck__languagetoolcombobox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolComboBox::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textgrammarcheck__languagetoolcombobox_hasheightforwidth_callback) {
            bool callback_ret = textgrammarcheck__languagetoolcombobox_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolComboBox::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textgrammarcheck__languagetoolcombobox_paintengine_callback) {
            QPaintEngine* callback_ret = textgrammarcheck__languagetoolcombobox_paintengine_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolComboBox::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textgrammarcheck__languagetoolcombobox_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            textgrammarcheck__languagetoolcombobox_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textgrammarcheck__languagetoolcombobox_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            textgrammarcheck__languagetoolcombobox_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textgrammarcheck__languagetoolcombobox_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            textgrammarcheck__languagetoolcombobox_enterevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textgrammarcheck__languagetoolcombobox_leaveevent_callback) {
            QEvent* cbval1 = event;
            textgrammarcheck__languagetoolcombobox_leaveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textgrammarcheck__languagetoolcombobox_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            textgrammarcheck__languagetoolcombobox_moveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textgrammarcheck__languagetoolcombobox_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            textgrammarcheck__languagetoolcombobox_closeevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textgrammarcheck__languagetoolcombobox_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            textgrammarcheck__languagetoolcombobox_tabletevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textgrammarcheck__languagetoolcombobox_actionevent_callback) {
            QActionEvent* cbval1 = event;
            textgrammarcheck__languagetoolcombobox_actionevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textgrammarcheck__languagetoolcombobox_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            textgrammarcheck__languagetoolcombobox_dragenterevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textgrammarcheck__languagetoolcombobox_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            textgrammarcheck__languagetoolcombobox_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textgrammarcheck__languagetoolcombobox_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            textgrammarcheck__languagetoolcombobox_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textgrammarcheck__languagetoolcombobox_dropevent_callback) {
            QDropEvent* cbval1 = event;
            textgrammarcheck__languagetoolcombobox_dropevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textgrammarcheck__languagetoolcombobox_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = textgrammarcheck__languagetoolcombobox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolComboBox::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textgrammarcheck__languagetoolcombobox_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = textgrammarcheck__languagetoolcombobox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolComboBox::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textgrammarcheck__languagetoolcombobox_initpainter_callback) {
            QPainter* cbval1 = painter;
            textgrammarcheck__languagetoolcombobox_initpainter_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textgrammarcheck__languagetoolcombobox_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = textgrammarcheck__languagetoolcombobox_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolComboBox::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textgrammarcheck__languagetoolcombobox_sharedpainter_callback) {
            QPainter* callback_ret = textgrammarcheck__languagetoolcombobox_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolComboBox::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textgrammarcheck__languagetoolcombobox_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = textgrammarcheck__languagetoolcombobox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolComboBox::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textgrammarcheck__languagetoolcombobox_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = textgrammarcheck__languagetoolcombobox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolComboBox::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textgrammarcheck__languagetoolcombobox_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textgrammarcheck__languagetoolcombobox_timerevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textgrammarcheck__languagetoolcombobox_childevent_callback) {
            QChildEvent* cbval1 = event;
            textgrammarcheck__languagetoolcombobox_childevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textgrammarcheck__languagetoolcombobox_customevent_callback) {
            QEvent* cbval1 = event;
            textgrammarcheck__languagetoolcombobox_customevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__languagetoolcombobox_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textgrammarcheck__languagetoolcombobox_connectnotify_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__languagetoolcombobox_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textgrammarcheck__languagetoolcombobox_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::disconnectNotify(signal);
    }

    // Friend functions
    friend void TextGrammarCheck__LanguageToolComboBox_SuperFocusInEvent(TextGrammarCheck::LanguageToolComboBox* self, QFocusEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperFocusOutEvent(TextGrammarCheck::LanguageToolComboBox* self, QFocusEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperChangeEvent(TextGrammarCheck::LanguageToolComboBox* self, QEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperResizeEvent(TextGrammarCheck::LanguageToolComboBox* self, QResizeEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperPaintEvent(TextGrammarCheck::LanguageToolComboBox* self, QPaintEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperShowEvent(TextGrammarCheck::LanguageToolComboBox* self, QShowEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperHideEvent(TextGrammarCheck::LanguageToolComboBox* self, QHideEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperMousePressEvent(TextGrammarCheck::LanguageToolComboBox* self, QMouseEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperMouseReleaseEvent(TextGrammarCheck::LanguageToolComboBox* self, QMouseEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperKeyPressEvent(TextGrammarCheck::LanguageToolComboBox* self, QKeyEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperKeyReleaseEvent(TextGrammarCheck::LanguageToolComboBox* self, QKeyEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperWheelEvent(TextGrammarCheck::LanguageToolComboBox* self, QWheelEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperContextMenuEvent(TextGrammarCheck::LanguageToolComboBox* self, QContextMenuEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperInputMethodEvent(TextGrammarCheck::LanguageToolComboBox* self, QInputMethodEvent* param1);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperInitStyleOption(const TextGrammarCheck::LanguageToolComboBox* self, QStyleOptionComboBox* option);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperMouseDoubleClickEvent(TextGrammarCheck::LanguageToolComboBox* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperMouseMoveEvent(TextGrammarCheck::LanguageToolComboBox* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperEnterEvent(TextGrammarCheck::LanguageToolComboBox* self, QEnterEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperLeaveEvent(TextGrammarCheck::LanguageToolComboBox* self, QEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperMoveEvent(TextGrammarCheck::LanguageToolComboBox* self, QMoveEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperCloseEvent(TextGrammarCheck::LanguageToolComboBox* self, QCloseEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperTabletEvent(TextGrammarCheck::LanguageToolComboBox* self, QTabletEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperActionEvent(TextGrammarCheck::LanguageToolComboBox* self, QActionEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperDragEnterEvent(TextGrammarCheck::LanguageToolComboBox* self, QDragEnterEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperDragMoveEvent(TextGrammarCheck::LanguageToolComboBox* self, QDragMoveEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperDragLeaveEvent(TextGrammarCheck::LanguageToolComboBox* self, QDragLeaveEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperDropEvent(TextGrammarCheck::LanguageToolComboBox* self, QDropEvent* event);
    friend bool TextGrammarCheck__LanguageToolComboBox_SuperNativeEvent(TextGrammarCheck::LanguageToolComboBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int TextGrammarCheck__LanguageToolComboBox_SuperMetric(const TextGrammarCheck::LanguageToolComboBox* self, int param1);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperInitPainter(const TextGrammarCheck::LanguageToolComboBox* self, QPainter* painter);
    friend QPaintDevice* TextGrammarCheck__LanguageToolComboBox_SuperRedirected(const TextGrammarCheck::LanguageToolComboBox* self, QPoint* offset);
    friend QPainter* TextGrammarCheck__LanguageToolComboBox_SuperSharedPainter(const TextGrammarCheck::LanguageToolComboBox* self);
    friend bool TextGrammarCheck__LanguageToolComboBox_SuperFocusNextPrevChild(TextGrammarCheck::LanguageToolComboBox* self, bool next);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperTimerEvent(TextGrammarCheck::LanguageToolComboBox* self, QTimerEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperChildEvent(TextGrammarCheck::LanguageToolComboBox* self, QChildEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperCustomEvent(TextGrammarCheck::LanguageToolComboBox* self, QEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperConnectNotify(TextGrammarCheck::LanguageToolComboBox* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperDisconnectNotify(TextGrammarCheck::LanguageToolComboBox* self, const QMetaMethod* signal);
};

#endif
