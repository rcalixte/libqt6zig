#pragma once
#ifndef EXTRAS_KTEXTWIDGETS_LIBKPLURALHANDLINGSPINBOX_HXX
#define EXTRAS_KTEXTWIDGETS_LIBKPLURALHANDLINGSPINBOX_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPluralHandlingSpinBox
class VirtualKPluralHandlingSpinBox final : public KPluralHandlingSpinBox {
  public:
    // Virtual class public types (including callbacks and access types)
    using KPluralHandlingSpinBox_MetaObject_Callback = QMetaObject* (*)(const KPluralHandlingSpinBox*);
    using KPluralHandlingSpinBox_Metacast_Callback = void* (*)(KPluralHandlingSpinBox*, const char*);
    using KPluralHandlingSpinBox_Metacall_Callback = int (*)(KPluralHandlingSpinBox*, int, int, void**);
    using KPluralHandlingSpinBox_Event_Callback = bool (*)(KPluralHandlingSpinBox*, QEvent*);
    using KPluralHandlingSpinBox_Validate_Callback = int (*)(const KPluralHandlingSpinBox*, const char*, int*);
    using KPluralHandlingSpinBox_ValueFromText_Callback = int (*)(const KPluralHandlingSpinBox*, const char*);
    using KPluralHandlingSpinBox_TextFromValue_Callback = const char* (*)(const KPluralHandlingSpinBox*, int);
    using KPluralHandlingSpinBox_Fixup_Callback = void (*)(const KPluralHandlingSpinBox*, const char*);
    using KPluralHandlingSpinBox_SizeHint_Callback = QSize* (*)(const KPluralHandlingSpinBox*);
    using KPluralHandlingSpinBox_MinimumSizeHint_Callback = QSize* (*)(const KPluralHandlingSpinBox*);
    using KPluralHandlingSpinBox_InputMethodQuery_Callback = QVariant* (*)(const KPluralHandlingSpinBox*, int);
    using KPluralHandlingSpinBox_StepBy_Callback = void (*)(KPluralHandlingSpinBox*, int);
    using KPluralHandlingSpinBox_Clear_Callback = void (*)(KPluralHandlingSpinBox*);
    using KPluralHandlingSpinBox_ResizeEvent_Callback = void (*)(KPluralHandlingSpinBox*, QResizeEvent*);
    using KPluralHandlingSpinBox_KeyPressEvent_Callback = void (*)(KPluralHandlingSpinBox*, QKeyEvent*);
    using KPluralHandlingSpinBox_KeyReleaseEvent_Callback = void (*)(KPluralHandlingSpinBox*, QKeyEvent*);
    using KPluralHandlingSpinBox_WheelEvent_Callback = void (*)(KPluralHandlingSpinBox*, QWheelEvent*);
    using KPluralHandlingSpinBox_FocusInEvent_Callback = void (*)(KPluralHandlingSpinBox*, QFocusEvent*);
    using KPluralHandlingSpinBox_FocusOutEvent_Callback = void (*)(KPluralHandlingSpinBox*, QFocusEvent*);
    using KPluralHandlingSpinBox_ContextMenuEvent_Callback = void (*)(KPluralHandlingSpinBox*, QContextMenuEvent*);
    using KPluralHandlingSpinBox_ChangeEvent_Callback = void (*)(KPluralHandlingSpinBox*, QEvent*);
    using KPluralHandlingSpinBox_CloseEvent_Callback = void (*)(KPluralHandlingSpinBox*, QCloseEvent*);
    using KPluralHandlingSpinBox_HideEvent_Callback = void (*)(KPluralHandlingSpinBox*, QHideEvent*);
    using KPluralHandlingSpinBox_MousePressEvent_Callback = void (*)(KPluralHandlingSpinBox*, QMouseEvent*);
    using KPluralHandlingSpinBox_MouseReleaseEvent_Callback = void (*)(KPluralHandlingSpinBox*, QMouseEvent*);
    using KPluralHandlingSpinBox_MouseMoveEvent_Callback = void (*)(KPluralHandlingSpinBox*, QMouseEvent*);
    using KPluralHandlingSpinBox_TimerEvent_Callback = void (*)(KPluralHandlingSpinBox*, QTimerEvent*);
    using KPluralHandlingSpinBox_PaintEvent_Callback = void (*)(KPluralHandlingSpinBox*, QPaintEvent*);
    using KPluralHandlingSpinBox_ShowEvent_Callback = void (*)(KPluralHandlingSpinBox*, QShowEvent*);
    using KPluralHandlingSpinBox_InitStyleOption_Callback = void (*)(const KPluralHandlingSpinBox*, QStyleOptionSpinBox*);
    using KPluralHandlingSpinBox_StepEnabled_Callback = int (*)(const KPluralHandlingSpinBox*);
    using KPluralHandlingSpinBox_DevType_Callback = int (*)(const KPluralHandlingSpinBox*);
    using KPluralHandlingSpinBox_SetVisible_Callback = void (*)(KPluralHandlingSpinBox*, bool);
    using KPluralHandlingSpinBox_HeightForWidth_Callback = int (*)(const KPluralHandlingSpinBox*, int);
    using KPluralHandlingSpinBox_HasHeightForWidth_Callback = bool (*)(const KPluralHandlingSpinBox*);
    using KPluralHandlingSpinBox_PaintEngine_Callback = QPaintEngine* (*)(const KPluralHandlingSpinBox*);
    using KPluralHandlingSpinBox_MouseDoubleClickEvent_Callback = void (*)(KPluralHandlingSpinBox*, QMouseEvent*);
    using KPluralHandlingSpinBox_EnterEvent_Callback = void (*)(KPluralHandlingSpinBox*, QEnterEvent*);
    using KPluralHandlingSpinBox_LeaveEvent_Callback = void (*)(KPluralHandlingSpinBox*, QEvent*);
    using KPluralHandlingSpinBox_MoveEvent_Callback = void (*)(KPluralHandlingSpinBox*, QMoveEvent*);
    using KPluralHandlingSpinBox_TabletEvent_Callback = void (*)(KPluralHandlingSpinBox*, QTabletEvent*);
    using KPluralHandlingSpinBox_ActionEvent_Callback = void (*)(KPluralHandlingSpinBox*, QActionEvent*);
    using KPluralHandlingSpinBox_DragEnterEvent_Callback = void (*)(KPluralHandlingSpinBox*, QDragEnterEvent*);
    using KPluralHandlingSpinBox_DragMoveEvent_Callback = void (*)(KPluralHandlingSpinBox*, QDragMoveEvent*);
    using KPluralHandlingSpinBox_DragLeaveEvent_Callback = void (*)(KPluralHandlingSpinBox*, QDragLeaveEvent*);
    using KPluralHandlingSpinBox_DropEvent_Callback = void (*)(KPluralHandlingSpinBox*, QDropEvent*);
    using KPluralHandlingSpinBox_NativeEvent_Callback = bool (*)(KPluralHandlingSpinBox*, libqt_string, void*, intptr_t*);
    using KPluralHandlingSpinBox_Metric_Callback = int (*)(const KPluralHandlingSpinBox*, int);
    using KPluralHandlingSpinBox_InitPainter_Callback = void (*)(const KPluralHandlingSpinBox*, QPainter*);
    using KPluralHandlingSpinBox_Redirected_Callback = QPaintDevice* (*)(const KPluralHandlingSpinBox*, QPoint*);
    using KPluralHandlingSpinBox_SharedPainter_Callback = QPainter* (*)(const KPluralHandlingSpinBox*);
    using KPluralHandlingSpinBox_InputMethodEvent_Callback = void (*)(KPluralHandlingSpinBox*, QInputMethodEvent*);
    using KPluralHandlingSpinBox_FocusNextPrevChild_Callback = bool (*)(KPluralHandlingSpinBox*, bool);
    using KPluralHandlingSpinBox_EventFilter_Callback = bool (*)(KPluralHandlingSpinBox*, QObject*, QEvent*);
    using KPluralHandlingSpinBox_ChildEvent_Callback = void (*)(KPluralHandlingSpinBox*, QChildEvent*);
    using KPluralHandlingSpinBox_CustomEvent_Callback = void (*)(KPluralHandlingSpinBox*, QEvent*);
    using KPluralHandlingSpinBox_ConnectNotify_Callback = void (*)(KPluralHandlingSpinBox*, QMetaMethod*);
    using KPluralHandlingSpinBox_DisconnectNotify_Callback = void (*)(KPluralHandlingSpinBox*, QMetaMethod*);
    using KPluralHandlingSpinBox::create;
    using KPluralHandlingSpinBox::destroy;
    using KPluralHandlingSpinBox::focusNextChild;
    using KPluralHandlingSpinBox::focusPreviousChild;
    using KPluralHandlingSpinBox::getDecodedMetricF;
    using KPluralHandlingSpinBox::isSignalConnected;
    using KPluralHandlingSpinBox::lineEdit;
    using KPluralHandlingSpinBox::receivers;
    using KPluralHandlingSpinBox::sender;
    using KPluralHandlingSpinBox::senderSignalIndex;
    using KPluralHandlingSpinBox::setLineEdit;
    using KPluralHandlingSpinBox::updateMicroFocus;

    // Instance callback storage
    KPluralHandlingSpinBox_MetaObject_Callback kpluralhandlingspinbox_metaobject_callback = nullptr;
    KPluralHandlingSpinBox_Metacast_Callback kpluralhandlingspinbox_metacast_callback = nullptr;
    KPluralHandlingSpinBox_Metacall_Callback kpluralhandlingspinbox_metacall_callback = nullptr;
    KPluralHandlingSpinBox_Event_Callback kpluralhandlingspinbox_event_callback = nullptr;
    KPluralHandlingSpinBox_Validate_Callback kpluralhandlingspinbox_validate_callback = nullptr;
    KPluralHandlingSpinBox_ValueFromText_Callback kpluralhandlingspinbox_valuefromtext_callback = nullptr;
    KPluralHandlingSpinBox_TextFromValue_Callback kpluralhandlingspinbox_textfromvalue_callback = nullptr;
    KPluralHandlingSpinBox_Fixup_Callback kpluralhandlingspinbox_fixup_callback = nullptr;
    KPluralHandlingSpinBox_SizeHint_Callback kpluralhandlingspinbox_sizehint_callback = nullptr;
    KPluralHandlingSpinBox_MinimumSizeHint_Callback kpluralhandlingspinbox_minimumsizehint_callback = nullptr;
    KPluralHandlingSpinBox_InputMethodQuery_Callback kpluralhandlingspinbox_inputmethodquery_callback = nullptr;
    KPluralHandlingSpinBox_StepBy_Callback kpluralhandlingspinbox_stepby_callback = nullptr;
    KPluralHandlingSpinBox_Clear_Callback kpluralhandlingspinbox_clear_callback = nullptr;
    KPluralHandlingSpinBox_ResizeEvent_Callback kpluralhandlingspinbox_resizeevent_callback = nullptr;
    KPluralHandlingSpinBox_KeyPressEvent_Callback kpluralhandlingspinbox_keypressevent_callback = nullptr;
    KPluralHandlingSpinBox_KeyReleaseEvent_Callback kpluralhandlingspinbox_keyreleaseevent_callback = nullptr;
    KPluralHandlingSpinBox_WheelEvent_Callback kpluralhandlingspinbox_wheelevent_callback = nullptr;
    KPluralHandlingSpinBox_FocusInEvent_Callback kpluralhandlingspinbox_focusinevent_callback = nullptr;
    KPluralHandlingSpinBox_FocusOutEvent_Callback kpluralhandlingspinbox_focusoutevent_callback = nullptr;
    KPluralHandlingSpinBox_ContextMenuEvent_Callback kpluralhandlingspinbox_contextmenuevent_callback = nullptr;
    KPluralHandlingSpinBox_ChangeEvent_Callback kpluralhandlingspinbox_changeevent_callback = nullptr;
    KPluralHandlingSpinBox_CloseEvent_Callback kpluralhandlingspinbox_closeevent_callback = nullptr;
    KPluralHandlingSpinBox_HideEvent_Callback kpluralhandlingspinbox_hideevent_callback = nullptr;
    KPluralHandlingSpinBox_MousePressEvent_Callback kpluralhandlingspinbox_mousepressevent_callback = nullptr;
    KPluralHandlingSpinBox_MouseReleaseEvent_Callback kpluralhandlingspinbox_mousereleaseevent_callback = nullptr;
    KPluralHandlingSpinBox_MouseMoveEvent_Callback kpluralhandlingspinbox_mousemoveevent_callback = nullptr;
    KPluralHandlingSpinBox_TimerEvent_Callback kpluralhandlingspinbox_timerevent_callback = nullptr;
    KPluralHandlingSpinBox_PaintEvent_Callback kpluralhandlingspinbox_paintevent_callback = nullptr;
    KPluralHandlingSpinBox_ShowEvent_Callback kpluralhandlingspinbox_showevent_callback = nullptr;
    KPluralHandlingSpinBox_InitStyleOption_Callback kpluralhandlingspinbox_initstyleoption_callback = nullptr;
    KPluralHandlingSpinBox_StepEnabled_Callback kpluralhandlingspinbox_stepenabled_callback = nullptr;
    KPluralHandlingSpinBox_DevType_Callback kpluralhandlingspinbox_devtype_callback = nullptr;
    KPluralHandlingSpinBox_SetVisible_Callback kpluralhandlingspinbox_setvisible_callback = nullptr;
    KPluralHandlingSpinBox_HeightForWidth_Callback kpluralhandlingspinbox_heightforwidth_callback = nullptr;
    KPluralHandlingSpinBox_HasHeightForWidth_Callback kpluralhandlingspinbox_hasheightforwidth_callback = nullptr;
    KPluralHandlingSpinBox_PaintEngine_Callback kpluralhandlingspinbox_paintengine_callback = nullptr;
    KPluralHandlingSpinBox_MouseDoubleClickEvent_Callback kpluralhandlingspinbox_mousedoubleclickevent_callback = nullptr;
    KPluralHandlingSpinBox_EnterEvent_Callback kpluralhandlingspinbox_enterevent_callback = nullptr;
    KPluralHandlingSpinBox_LeaveEvent_Callback kpluralhandlingspinbox_leaveevent_callback = nullptr;
    KPluralHandlingSpinBox_MoveEvent_Callback kpluralhandlingspinbox_moveevent_callback = nullptr;
    KPluralHandlingSpinBox_TabletEvent_Callback kpluralhandlingspinbox_tabletevent_callback = nullptr;
    KPluralHandlingSpinBox_ActionEvent_Callback kpluralhandlingspinbox_actionevent_callback = nullptr;
    KPluralHandlingSpinBox_DragEnterEvent_Callback kpluralhandlingspinbox_dragenterevent_callback = nullptr;
    KPluralHandlingSpinBox_DragMoveEvent_Callback kpluralhandlingspinbox_dragmoveevent_callback = nullptr;
    KPluralHandlingSpinBox_DragLeaveEvent_Callback kpluralhandlingspinbox_dragleaveevent_callback = nullptr;
    KPluralHandlingSpinBox_DropEvent_Callback kpluralhandlingspinbox_dropevent_callback = nullptr;
    KPluralHandlingSpinBox_NativeEvent_Callback kpluralhandlingspinbox_nativeevent_callback = nullptr;
    KPluralHandlingSpinBox_Metric_Callback kpluralhandlingspinbox_metric_callback = nullptr;
    KPluralHandlingSpinBox_InitPainter_Callback kpluralhandlingspinbox_initpainter_callback = nullptr;
    KPluralHandlingSpinBox_Redirected_Callback kpluralhandlingspinbox_redirected_callback = nullptr;
    KPluralHandlingSpinBox_SharedPainter_Callback kpluralhandlingspinbox_sharedpainter_callback = nullptr;
    KPluralHandlingSpinBox_InputMethodEvent_Callback kpluralhandlingspinbox_inputmethodevent_callback = nullptr;
    KPluralHandlingSpinBox_FocusNextPrevChild_Callback kpluralhandlingspinbox_focusnextprevchild_callback = nullptr;
    KPluralHandlingSpinBox_EventFilter_Callback kpluralhandlingspinbox_eventfilter_callback = nullptr;
    KPluralHandlingSpinBox_ChildEvent_Callback kpluralhandlingspinbox_childevent_callback = nullptr;
    KPluralHandlingSpinBox_CustomEvent_Callback kpluralhandlingspinbox_customevent_callback = nullptr;
    KPluralHandlingSpinBox_ConnectNotify_Callback kpluralhandlingspinbox_connectnotify_callback = nullptr;
    KPluralHandlingSpinBox_DisconnectNotify_Callback kpluralhandlingspinbox_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KPluralHandlingSpinBox {
        using KPluralHandlingSpinBox::actionEvent;
        using KPluralHandlingSpinBox::changeEvent;
        using KPluralHandlingSpinBox::childEvent;
        using KPluralHandlingSpinBox::closeEvent;
        using KPluralHandlingSpinBox::connectNotify;
        using KPluralHandlingSpinBox::contextMenuEvent;
        using KPluralHandlingSpinBox::customEvent;
        using KPluralHandlingSpinBox::disconnectNotify;
        using KPluralHandlingSpinBox::dragEnterEvent;
        using KPluralHandlingSpinBox::dragLeaveEvent;
        using KPluralHandlingSpinBox::dragMoveEvent;
        using KPluralHandlingSpinBox::dropEvent;
        using KPluralHandlingSpinBox::enterEvent;
        using KPluralHandlingSpinBox::event;
        using KPluralHandlingSpinBox::fixup;
        using KPluralHandlingSpinBox::focusInEvent;
        using KPluralHandlingSpinBox::focusNextPrevChild;
        using KPluralHandlingSpinBox::focusOutEvent;
        using KPluralHandlingSpinBox::hideEvent;
        using KPluralHandlingSpinBox::initPainter;
        using KPluralHandlingSpinBox::initStyleOption;
        using KPluralHandlingSpinBox::inputMethodEvent;
        using KPluralHandlingSpinBox::keyPressEvent;
        using KPluralHandlingSpinBox::keyReleaseEvent;
        using KPluralHandlingSpinBox::leaveEvent;
        using KPluralHandlingSpinBox::metric;
        using KPluralHandlingSpinBox::mouseDoubleClickEvent;
        using KPluralHandlingSpinBox::mouseMoveEvent;
        using KPluralHandlingSpinBox::mousePressEvent;
        using KPluralHandlingSpinBox::mouseReleaseEvent;
        using KPluralHandlingSpinBox::moveEvent;
        using KPluralHandlingSpinBox::nativeEvent;
        using KPluralHandlingSpinBox::paintEvent;
        using KPluralHandlingSpinBox::redirected;
        using KPluralHandlingSpinBox::resizeEvent;
        using KPluralHandlingSpinBox::sharedPainter;
        using KPluralHandlingSpinBox::showEvent;
        using KPluralHandlingSpinBox::stepEnabled;
        using KPluralHandlingSpinBox::tabletEvent;
        using KPluralHandlingSpinBox::textFromValue;
        using KPluralHandlingSpinBox::timerEvent;
        using KPluralHandlingSpinBox::validate;
        using KPluralHandlingSpinBox::valueFromText;
        using KPluralHandlingSpinBox::wheelEvent;
    };

    VirtualKPluralHandlingSpinBox(QWidget* parent) : KPluralHandlingSpinBox(parent) {};
    VirtualKPluralHandlingSpinBox() : KPluralHandlingSpinBox() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kpluralhandlingspinbox_metaobject_callback) {
            QMetaObject* callback_ret = kpluralhandlingspinbox_metaobject_callback(this);
            return callback_ret;
        }
        return KPluralHandlingSpinBox::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kpluralhandlingspinbox_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kpluralhandlingspinbox_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KPluralHandlingSpinBox::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpluralhandlingspinbox_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kpluralhandlingspinbox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KPluralHandlingSpinBox::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpluralhandlingspinbox_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kpluralhandlingspinbox_event_callback(this, cbval1);
            return callback_ret;
        }
        return KPluralHandlingSpinBox::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QValidator::State validate(QString& input, int& pos) const override {
        if (kpluralhandlingspinbox_validate_callback) {
            auto input_ret = input;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray input_b = input_ret.toUtf8();
            auto input_str_len = input_b.length();
            const char* input_str = static_cast<const char*>(malloc(input_str_len + 1));
            memcpy((void*)input_str, input_b.data(), input_str_len);
            ((char*)input_str)[input_str_len] = '\0';
            const char* cbval1 = input_str;
            int* cbval2 = &pos;
            int callback_ret = kpluralhandlingspinbox_validate_callback(this, cbval1, cbval2);
            libqt_free(input_str);
            return static_cast<QValidator::State>(callback_ret);
        }
        return KPluralHandlingSpinBox::validate(input, pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual int valueFromText(const QString& text) const override {
        if (kpluralhandlingspinbox_valuefromtext_callback) {
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            int callback_ret = kpluralhandlingspinbox_valuefromtext_callback(this, cbval1);
            libqt_free(text_str);
            return static_cast<int>(callback_ret);
        }
        return KPluralHandlingSpinBox::valueFromText(text);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString textFromValue(int val) const override {
        if (kpluralhandlingspinbox_textfromvalue_callback) {
            int cbval1 = val;
            const char* callback_ret = kpluralhandlingspinbox_textfromvalue_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KPluralHandlingSpinBox::textFromValue(val);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fixup(QString& str) const override {
        if (kpluralhandlingspinbox_fixup_callback) {
            auto str_ret = str;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray str_b = str_ret.toUtf8();
            auto str_str_len = str_b.length();
            const char* str_str = static_cast<const char*>(malloc(str_str_len + 1));
            memcpy((void*)str_str, str_b.data(), str_str_len);
            ((char*)str_str)[str_str_len] = '\0';
            const char* cbval1 = str_str;
            kpluralhandlingspinbox_fixup_callback(this, cbval1);
            libqt_free(str_str);
            return;
        }
        KPluralHandlingSpinBox::fixup(str);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kpluralhandlingspinbox_sizehint_callback) {
            QSize* callback_ret = kpluralhandlingspinbox_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPluralHandlingSpinBox::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kpluralhandlingspinbox_minimumsizehint_callback) {
            QSize* callback_ret = kpluralhandlingspinbox_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPluralHandlingSpinBox::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kpluralhandlingspinbox_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kpluralhandlingspinbox_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPluralHandlingSpinBox::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void stepBy(int steps) override {
        if (kpluralhandlingspinbox_stepby_callback) {
            int cbval1 = steps;
            kpluralhandlingspinbox_stepby_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::stepBy(steps);
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (kpluralhandlingspinbox_clear_callback) {
            kpluralhandlingspinbox_clear_callback(this);
            return;
        }
        KPluralHandlingSpinBox::clear();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kpluralhandlingspinbox_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kpluralhandlingspinbox_resizeevent_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kpluralhandlingspinbox_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kpluralhandlingspinbox_keypressevent_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kpluralhandlingspinbox_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kpluralhandlingspinbox_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kpluralhandlingspinbox_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kpluralhandlingspinbox_wheelevent_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kpluralhandlingspinbox_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kpluralhandlingspinbox_focusinevent_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kpluralhandlingspinbox_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kpluralhandlingspinbox_focusoutevent_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kpluralhandlingspinbox_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kpluralhandlingspinbox_contextmenuevent_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (kpluralhandlingspinbox_changeevent_callback) {
            QEvent* cbval1 = event;
            kpluralhandlingspinbox_changeevent_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kpluralhandlingspinbox_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kpluralhandlingspinbox_closeevent_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kpluralhandlingspinbox_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kpluralhandlingspinbox_hideevent_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kpluralhandlingspinbox_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kpluralhandlingspinbox_mousepressevent_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kpluralhandlingspinbox_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kpluralhandlingspinbox_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kpluralhandlingspinbox_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kpluralhandlingspinbox_mousemoveevent_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpluralhandlingspinbox_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kpluralhandlingspinbox_timerevent_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kpluralhandlingspinbox_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kpluralhandlingspinbox_paintevent_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kpluralhandlingspinbox_showevent_callback) {
            QShowEvent* cbval1 = event;
            kpluralhandlingspinbox_showevent_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionSpinBox* option) const override {
        if (kpluralhandlingspinbox_initstyleoption_callback) {
            QStyleOptionSpinBox* cbval1 = option;
            kpluralhandlingspinbox_initstyleoption_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSpinBox::StepEnabled stepEnabled() const override {
        if (kpluralhandlingspinbox_stepenabled_callback) {
            int callback_ret = kpluralhandlingspinbox_stepenabled_callback(this);
            return static_cast<QAbstractSpinBox::StepEnabled>(callback_ret);
        }
        return KPluralHandlingSpinBox::stepEnabled();
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kpluralhandlingspinbox_devtype_callback) {
            int callback_ret = kpluralhandlingspinbox_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KPluralHandlingSpinBox::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kpluralhandlingspinbox_setvisible_callback) {
            bool cbval1 = visible;
            kpluralhandlingspinbox_setvisible_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kpluralhandlingspinbox_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kpluralhandlingspinbox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPluralHandlingSpinBox::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kpluralhandlingspinbox_hasheightforwidth_callback) {
            bool callback_ret = kpluralhandlingspinbox_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KPluralHandlingSpinBox::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kpluralhandlingspinbox_paintengine_callback) {
            QPaintEngine* callback_ret = kpluralhandlingspinbox_paintengine_callback(this);
            return callback_ret;
        }
        return KPluralHandlingSpinBox::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kpluralhandlingspinbox_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kpluralhandlingspinbox_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kpluralhandlingspinbox_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kpluralhandlingspinbox_enterevent_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kpluralhandlingspinbox_leaveevent_callback) {
            QEvent* cbval1 = event;
            kpluralhandlingspinbox_leaveevent_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kpluralhandlingspinbox_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kpluralhandlingspinbox_moveevent_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kpluralhandlingspinbox_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kpluralhandlingspinbox_tabletevent_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kpluralhandlingspinbox_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kpluralhandlingspinbox_actionevent_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kpluralhandlingspinbox_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kpluralhandlingspinbox_dragenterevent_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kpluralhandlingspinbox_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kpluralhandlingspinbox_dragmoveevent_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kpluralhandlingspinbox_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kpluralhandlingspinbox_dragleaveevent_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kpluralhandlingspinbox_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kpluralhandlingspinbox_dropevent_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kpluralhandlingspinbox_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kpluralhandlingspinbox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KPluralHandlingSpinBox::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kpluralhandlingspinbox_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kpluralhandlingspinbox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPluralHandlingSpinBox::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kpluralhandlingspinbox_initpainter_callback) {
            QPainter* cbval1 = painter;
            kpluralhandlingspinbox_initpainter_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kpluralhandlingspinbox_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kpluralhandlingspinbox_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KPluralHandlingSpinBox::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kpluralhandlingspinbox_sharedpainter_callback) {
            QPainter* callback_ret = kpluralhandlingspinbox_sharedpainter_callback(this);
            return callback_ret;
        }
        return KPluralHandlingSpinBox::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kpluralhandlingspinbox_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kpluralhandlingspinbox_inputmethodevent_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kpluralhandlingspinbox_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kpluralhandlingspinbox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KPluralHandlingSpinBox::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kpluralhandlingspinbox_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kpluralhandlingspinbox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KPluralHandlingSpinBox::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpluralhandlingspinbox_childevent_callback) {
            QChildEvent* cbval1 = event;
            kpluralhandlingspinbox_childevent_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpluralhandlingspinbox_customevent_callback) {
            QEvent* cbval1 = event;
            kpluralhandlingspinbox_customevent_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpluralhandlingspinbox_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpluralhandlingspinbox_connectnotify_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpluralhandlingspinbox_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpluralhandlingspinbox_disconnectnotify_callback(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KPluralHandlingSpinBox_SuperEvent(KPluralHandlingSpinBox* self, QEvent* event);
    friend int KPluralHandlingSpinBox_SuperValidate(const KPluralHandlingSpinBox* self, libqt_string input, int* pos);
    friend int KPluralHandlingSpinBox_SuperValueFromText(const KPluralHandlingSpinBox* self, const libqt_string text);
    friend libqt_string KPluralHandlingSpinBox_SuperTextFromValue(const KPluralHandlingSpinBox* self, int val);
    friend void KPluralHandlingSpinBox_SuperFixup(const KPluralHandlingSpinBox* self, libqt_string str);
    friend void KPluralHandlingSpinBox_SuperResizeEvent(KPluralHandlingSpinBox* self, QResizeEvent* event);
    friend void KPluralHandlingSpinBox_SuperKeyPressEvent(KPluralHandlingSpinBox* self, QKeyEvent* event);
    friend void KPluralHandlingSpinBox_SuperKeyReleaseEvent(KPluralHandlingSpinBox* self, QKeyEvent* event);
    friend void KPluralHandlingSpinBox_SuperWheelEvent(KPluralHandlingSpinBox* self, QWheelEvent* event);
    friend void KPluralHandlingSpinBox_SuperFocusInEvent(KPluralHandlingSpinBox* self, QFocusEvent* event);
    friend void KPluralHandlingSpinBox_SuperFocusOutEvent(KPluralHandlingSpinBox* self, QFocusEvent* event);
    friend void KPluralHandlingSpinBox_SuperContextMenuEvent(KPluralHandlingSpinBox* self, QContextMenuEvent* event);
    friend void KPluralHandlingSpinBox_SuperChangeEvent(KPluralHandlingSpinBox* self, QEvent* event);
    friend void KPluralHandlingSpinBox_SuperCloseEvent(KPluralHandlingSpinBox* self, QCloseEvent* event);
    friend void KPluralHandlingSpinBox_SuperHideEvent(KPluralHandlingSpinBox* self, QHideEvent* event);
    friend void KPluralHandlingSpinBox_SuperMousePressEvent(KPluralHandlingSpinBox* self, QMouseEvent* event);
    friend void KPluralHandlingSpinBox_SuperMouseReleaseEvent(KPluralHandlingSpinBox* self, QMouseEvent* event);
    friend void KPluralHandlingSpinBox_SuperMouseMoveEvent(KPluralHandlingSpinBox* self, QMouseEvent* event);
    friend void KPluralHandlingSpinBox_SuperTimerEvent(KPluralHandlingSpinBox* self, QTimerEvent* event);
    friend void KPluralHandlingSpinBox_SuperPaintEvent(KPluralHandlingSpinBox* self, QPaintEvent* event);
    friend void KPluralHandlingSpinBox_SuperShowEvent(KPluralHandlingSpinBox* self, QShowEvent* event);
    friend void KPluralHandlingSpinBox_SuperInitStyleOption(const KPluralHandlingSpinBox* self, QStyleOptionSpinBox* option);
    friend int KPluralHandlingSpinBox_SuperStepEnabled(const KPluralHandlingSpinBox* self);
    friend void KPluralHandlingSpinBox_SuperMouseDoubleClickEvent(KPluralHandlingSpinBox* self, QMouseEvent* event);
    friend void KPluralHandlingSpinBox_SuperEnterEvent(KPluralHandlingSpinBox* self, QEnterEvent* event);
    friend void KPluralHandlingSpinBox_SuperLeaveEvent(KPluralHandlingSpinBox* self, QEvent* event);
    friend void KPluralHandlingSpinBox_SuperMoveEvent(KPluralHandlingSpinBox* self, QMoveEvent* event);
    friend void KPluralHandlingSpinBox_SuperTabletEvent(KPluralHandlingSpinBox* self, QTabletEvent* event);
    friend void KPluralHandlingSpinBox_SuperActionEvent(KPluralHandlingSpinBox* self, QActionEvent* event);
    friend void KPluralHandlingSpinBox_SuperDragEnterEvent(KPluralHandlingSpinBox* self, QDragEnterEvent* event);
    friend void KPluralHandlingSpinBox_SuperDragMoveEvent(KPluralHandlingSpinBox* self, QDragMoveEvent* event);
    friend void KPluralHandlingSpinBox_SuperDragLeaveEvent(KPluralHandlingSpinBox* self, QDragLeaveEvent* event);
    friend void KPluralHandlingSpinBox_SuperDropEvent(KPluralHandlingSpinBox* self, QDropEvent* event);
    friend bool KPluralHandlingSpinBox_SuperNativeEvent(KPluralHandlingSpinBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KPluralHandlingSpinBox_SuperMetric(const KPluralHandlingSpinBox* self, int param1);
    friend void KPluralHandlingSpinBox_SuperInitPainter(const KPluralHandlingSpinBox* self, QPainter* painter);
    friend QPaintDevice* KPluralHandlingSpinBox_SuperRedirected(const KPluralHandlingSpinBox* self, QPoint* offset);
    friend QPainter* KPluralHandlingSpinBox_SuperSharedPainter(const KPluralHandlingSpinBox* self);
    friend void KPluralHandlingSpinBox_SuperInputMethodEvent(KPluralHandlingSpinBox* self, QInputMethodEvent* param1);
    friend bool KPluralHandlingSpinBox_SuperFocusNextPrevChild(KPluralHandlingSpinBox* self, bool next);
    friend void KPluralHandlingSpinBox_SuperChildEvent(KPluralHandlingSpinBox* self, QChildEvent* event);
    friend void KPluralHandlingSpinBox_SuperCustomEvent(KPluralHandlingSpinBox* self, QEvent* event);
    friend void KPluralHandlingSpinBox_SuperConnectNotify(KPluralHandlingSpinBox* self, const QMetaMethod* signal);
    friend void KPluralHandlingSpinBox_SuperDisconnectNotify(KPluralHandlingSpinBox* self, const QMetaMethod* signal);
};

#endif
