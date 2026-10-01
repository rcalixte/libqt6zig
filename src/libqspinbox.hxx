#pragma once
#ifndef LIBQSPINBOX_HXX
#define LIBQSPINBOX_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSpinBox
class VirtualQSpinBox final : public QSpinBox {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSpinBox_MetaObject_Callback = QMetaObject* (*)(const QSpinBox*);
    using QSpinBox_Metacast_Callback = void* (*)(QSpinBox*, const char*);
    using QSpinBox_Metacall_Callback = int (*)(QSpinBox*, int, int, void**);
    using QSpinBox_Event_Callback = bool (*)(QSpinBox*, QEvent*);
    using QSpinBox_Validate_Callback = int (*)(const QSpinBox*, const char*, int*);
    using QSpinBox_ValueFromText_Callback = int (*)(const QSpinBox*, const char*);
    using QSpinBox_TextFromValue_Callback = const char* (*)(const QSpinBox*, int);
    using QSpinBox_Fixup_Callback = void (*)(const QSpinBox*, const char*);
    using QSpinBox_SizeHint_Callback = QSize* (*)(const QSpinBox*);
    using QSpinBox_MinimumSizeHint_Callback = QSize* (*)(const QSpinBox*);
    using QSpinBox_InputMethodQuery_Callback = QVariant* (*)(const QSpinBox*, int);
    using QSpinBox_StepBy_Callback = void (*)(QSpinBox*, int);
    using QSpinBox_Clear_Callback = void (*)(QSpinBox*);
    using QSpinBox_ResizeEvent_Callback = void (*)(QSpinBox*, QResizeEvent*);
    using QSpinBox_KeyPressEvent_Callback = void (*)(QSpinBox*, QKeyEvent*);
    using QSpinBox_KeyReleaseEvent_Callback = void (*)(QSpinBox*, QKeyEvent*);
    using QSpinBox_WheelEvent_Callback = void (*)(QSpinBox*, QWheelEvent*);
    using QSpinBox_FocusInEvent_Callback = void (*)(QSpinBox*, QFocusEvent*);
    using QSpinBox_FocusOutEvent_Callback = void (*)(QSpinBox*, QFocusEvent*);
    using QSpinBox_ContextMenuEvent_Callback = void (*)(QSpinBox*, QContextMenuEvent*);
    using QSpinBox_ChangeEvent_Callback = void (*)(QSpinBox*, QEvent*);
    using QSpinBox_CloseEvent_Callback = void (*)(QSpinBox*, QCloseEvent*);
    using QSpinBox_HideEvent_Callback = void (*)(QSpinBox*, QHideEvent*);
    using QSpinBox_MousePressEvent_Callback = void (*)(QSpinBox*, QMouseEvent*);
    using QSpinBox_MouseReleaseEvent_Callback = void (*)(QSpinBox*, QMouseEvent*);
    using QSpinBox_MouseMoveEvent_Callback = void (*)(QSpinBox*, QMouseEvent*);
    using QSpinBox_TimerEvent_Callback = void (*)(QSpinBox*, QTimerEvent*);
    using QSpinBox_PaintEvent_Callback = void (*)(QSpinBox*, QPaintEvent*);
    using QSpinBox_ShowEvent_Callback = void (*)(QSpinBox*, QShowEvent*);
    using QSpinBox_InitStyleOption_Callback = void (*)(const QSpinBox*, QStyleOptionSpinBox*);
    using QSpinBox_StepEnabled_Callback = int (*)(const QSpinBox*);
    using QSpinBox_DevType_Callback = int (*)(const QSpinBox*);
    using QSpinBox_SetVisible_Callback = void (*)(QSpinBox*, bool);
    using QSpinBox_HeightForWidth_Callback = int (*)(const QSpinBox*, int);
    using QSpinBox_HasHeightForWidth_Callback = bool (*)(const QSpinBox*);
    using QSpinBox_PaintEngine_Callback = QPaintEngine* (*)(const QSpinBox*);
    using QSpinBox_MouseDoubleClickEvent_Callback = void (*)(QSpinBox*, QMouseEvent*);
    using QSpinBox_EnterEvent_Callback = void (*)(QSpinBox*, QEnterEvent*);
    using QSpinBox_LeaveEvent_Callback = void (*)(QSpinBox*, QEvent*);
    using QSpinBox_MoveEvent_Callback = void (*)(QSpinBox*, QMoveEvent*);
    using QSpinBox_TabletEvent_Callback = void (*)(QSpinBox*, QTabletEvent*);
    using QSpinBox_ActionEvent_Callback = void (*)(QSpinBox*, QActionEvent*);
    using QSpinBox_DragEnterEvent_Callback = void (*)(QSpinBox*, QDragEnterEvent*);
    using QSpinBox_DragMoveEvent_Callback = void (*)(QSpinBox*, QDragMoveEvent*);
    using QSpinBox_DragLeaveEvent_Callback = void (*)(QSpinBox*, QDragLeaveEvent*);
    using QSpinBox_DropEvent_Callback = void (*)(QSpinBox*, QDropEvent*);
    using QSpinBox_NativeEvent_Callback = bool (*)(QSpinBox*, libqt_string, void*, intptr_t*);
    using QSpinBox_Metric_Callback = int (*)(const QSpinBox*, int);
    using QSpinBox_InitPainter_Callback = void (*)(const QSpinBox*, QPainter*);
    using QSpinBox_Redirected_Callback = QPaintDevice* (*)(const QSpinBox*, QPoint*);
    using QSpinBox_SharedPainter_Callback = QPainter* (*)(const QSpinBox*);
    using QSpinBox_InputMethodEvent_Callback = void (*)(QSpinBox*, QInputMethodEvent*);
    using QSpinBox_FocusNextPrevChild_Callback = bool (*)(QSpinBox*, bool);
    using QSpinBox_EventFilter_Callback = bool (*)(QSpinBox*, QObject*, QEvent*);
    using QSpinBox_ChildEvent_Callback = void (*)(QSpinBox*, QChildEvent*);
    using QSpinBox_CustomEvent_Callback = void (*)(QSpinBox*, QEvent*);
    using QSpinBox_ConnectNotify_Callback = void (*)(QSpinBox*, QMetaMethod*);
    using QSpinBox_DisconnectNotify_Callback = void (*)(QSpinBox*, QMetaMethod*);
    using QSpinBox::create;
    using QSpinBox::destroy;
    using QSpinBox::focusNextChild;
    using QSpinBox::focusPreviousChild;
    using QSpinBox::getDecodedMetricF;
    using QSpinBox::isSignalConnected;
    using QSpinBox::lineEdit;
    using QSpinBox::receivers;
    using QSpinBox::sender;
    using QSpinBox::senderSignalIndex;
    using QSpinBox::setLineEdit;
    using QSpinBox::updateMicroFocus;

    // Instance callback storage
    QSpinBox_MetaObject_Callback qspinbox_metaobject_callback = nullptr;
    QSpinBox_Metacast_Callback qspinbox_metacast_callback = nullptr;
    QSpinBox_Metacall_Callback qspinbox_metacall_callback = nullptr;
    QSpinBox_Event_Callback qspinbox_event_callback = nullptr;
    QSpinBox_Validate_Callback qspinbox_validate_callback = nullptr;
    QSpinBox_ValueFromText_Callback qspinbox_valuefromtext_callback = nullptr;
    QSpinBox_TextFromValue_Callback qspinbox_textfromvalue_callback = nullptr;
    QSpinBox_Fixup_Callback qspinbox_fixup_callback = nullptr;
    QSpinBox_SizeHint_Callback qspinbox_sizehint_callback = nullptr;
    QSpinBox_MinimumSizeHint_Callback qspinbox_minimumsizehint_callback = nullptr;
    QSpinBox_InputMethodQuery_Callback qspinbox_inputmethodquery_callback = nullptr;
    QSpinBox_StepBy_Callback qspinbox_stepby_callback = nullptr;
    QSpinBox_Clear_Callback qspinbox_clear_callback = nullptr;
    QSpinBox_ResizeEvent_Callback qspinbox_resizeevent_callback = nullptr;
    QSpinBox_KeyPressEvent_Callback qspinbox_keypressevent_callback = nullptr;
    QSpinBox_KeyReleaseEvent_Callback qspinbox_keyreleaseevent_callback = nullptr;
    QSpinBox_WheelEvent_Callback qspinbox_wheelevent_callback = nullptr;
    QSpinBox_FocusInEvent_Callback qspinbox_focusinevent_callback = nullptr;
    QSpinBox_FocusOutEvent_Callback qspinbox_focusoutevent_callback = nullptr;
    QSpinBox_ContextMenuEvent_Callback qspinbox_contextmenuevent_callback = nullptr;
    QSpinBox_ChangeEvent_Callback qspinbox_changeevent_callback = nullptr;
    QSpinBox_CloseEvent_Callback qspinbox_closeevent_callback = nullptr;
    QSpinBox_HideEvent_Callback qspinbox_hideevent_callback = nullptr;
    QSpinBox_MousePressEvent_Callback qspinbox_mousepressevent_callback = nullptr;
    QSpinBox_MouseReleaseEvent_Callback qspinbox_mousereleaseevent_callback = nullptr;
    QSpinBox_MouseMoveEvent_Callback qspinbox_mousemoveevent_callback = nullptr;
    QSpinBox_TimerEvent_Callback qspinbox_timerevent_callback = nullptr;
    QSpinBox_PaintEvent_Callback qspinbox_paintevent_callback = nullptr;
    QSpinBox_ShowEvent_Callback qspinbox_showevent_callback = nullptr;
    QSpinBox_InitStyleOption_Callback qspinbox_initstyleoption_callback = nullptr;
    QSpinBox_StepEnabled_Callback qspinbox_stepenabled_callback = nullptr;
    QSpinBox_DevType_Callback qspinbox_devtype_callback = nullptr;
    QSpinBox_SetVisible_Callback qspinbox_setvisible_callback = nullptr;
    QSpinBox_HeightForWidth_Callback qspinbox_heightforwidth_callback = nullptr;
    QSpinBox_HasHeightForWidth_Callback qspinbox_hasheightforwidth_callback = nullptr;
    QSpinBox_PaintEngine_Callback qspinbox_paintengine_callback = nullptr;
    QSpinBox_MouseDoubleClickEvent_Callback qspinbox_mousedoubleclickevent_callback = nullptr;
    QSpinBox_EnterEvent_Callback qspinbox_enterevent_callback = nullptr;
    QSpinBox_LeaveEvent_Callback qspinbox_leaveevent_callback = nullptr;
    QSpinBox_MoveEvent_Callback qspinbox_moveevent_callback = nullptr;
    QSpinBox_TabletEvent_Callback qspinbox_tabletevent_callback = nullptr;
    QSpinBox_ActionEvent_Callback qspinbox_actionevent_callback = nullptr;
    QSpinBox_DragEnterEvent_Callback qspinbox_dragenterevent_callback = nullptr;
    QSpinBox_DragMoveEvent_Callback qspinbox_dragmoveevent_callback = nullptr;
    QSpinBox_DragLeaveEvent_Callback qspinbox_dragleaveevent_callback = nullptr;
    QSpinBox_DropEvent_Callback qspinbox_dropevent_callback = nullptr;
    QSpinBox_NativeEvent_Callback qspinbox_nativeevent_callback = nullptr;
    QSpinBox_Metric_Callback qspinbox_metric_callback = nullptr;
    QSpinBox_InitPainter_Callback qspinbox_initpainter_callback = nullptr;
    QSpinBox_Redirected_Callback qspinbox_redirected_callback = nullptr;
    QSpinBox_SharedPainter_Callback qspinbox_sharedpainter_callback = nullptr;
    QSpinBox_InputMethodEvent_Callback qspinbox_inputmethodevent_callback = nullptr;
    QSpinBox_FocusNextPrevChild_Callback qspinbox_focusnextprevchild_callback = nullptr;
    QSpinBox_EventFilter_Callback qspinbox_eventfilter_callback = nullptr;
    QSpinBox_ChildEvent_Callback qspinbox_childevent_callback = nullptr;
    QSpinBox_CustomEvent_Callback qspinbox_customevent_callback = nullptr;
    QSpinBox_ConnectNotify_Callback qspinbox_connectnotify_callback = nullptr;
    QSpinBox_DisconnectNotify_Callback qspinbox_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QSpinBox {
        using QSpinBox::actionEvent;
        using QSpinBox::changeEvent;
        using QSpinBox::childEvent;
        using QSpinBox::closeEvent;
        using QSpinBox::connectNotify;
        using QSpinBox::contextMenuEvent;
        using QSpinBox::customEvent;
        using QSpinBox::disconnectNotify;
        using QSpinBox::dragEnterEvent;
        using QSpinBox::dragLeaveEvent;
        using QSpinBox::dragMoveEvent;
        using QSpinBox::dropEvent;
        using QSpinBox::enterEvent;
        using QSpinBox::event;
        using QSpinBox::fixup;
        using QSpinBox::focusInEvent;
        using QSpinBox::focusNextPrevChild;
        using QSpinBox::focusOutEvent;
        using QSpinBox::hideEvent;
        using QSpinBox::initPainter;
        using QSpinBox::initStyleOption;
        using QSpinBox::inputMethodEvent;
        using QSpinBox::keyPressEvent;
        using QSpinBox::keyReleaseEvent;
        using QSpinBox::leaveEvent;
        using QSpinBox::metric;
        using QSpinBox::mouseDoubleClickEvent;
        using QSpinBox::mouseMoveEvent;
        using QSpinBox::mousePressEvent;
        using QSpinBox::mouseReleaseEvent;
        using QSpinBox::moveEvent;
        using QSpinBox::nativeEvent;
        using QSpinBox::paintEvent;
        using QSpinBox::redirected;
        using QSpinBox::resizeEvent;
        using QSpinBox::sharedPainter;
        using QSpinBox::showEvent;
        using QSpinBox::stepEnabled;
        using QSpinBox::tabletEvent;
        using QSpinBox::textFromValue;
        using QSpinBox::timerEvent;
        using QSpinBox::validate;
        using QSpinBox::valueFromText;
        using QSpinBox::wheelEvent;
    };

    VirtualQSpinBox(QWidget* parent) : QSpinBox(parent) {};
    VirtualQSpinBox() : QSpinBox() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qspinbox_metaobject_callback) {
            QMetaObject* callback_ret = qspinbox_metaobject_callback(this);
            return callback_ret;
        }
        return QSpinBox::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qspinbox_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qspinbox_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSpinBox::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qspinbox_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qspinbox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSpinBox::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qspinbox_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qspinbox_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSpinBox::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QValidator::State validate(QString& input, int& pos) const override {
        if (qspinbox_validate_callback) {
            auto input_ret = input;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray input_b = input_ret.toUtf8();
            auto input_str_len = input_b.length();
            const char* input_str = static_cast<const char*>(malloc(input_str_len + 1));
            memcpy((void*)input_str, input_b.data(), input_str_len);
            ((char*)input_str)[input_str_len] = '\0';
            const char* cbval1 = input_str;
            int* cbval2 = &pos;
            int callback_ret = qspinbox_validate_callback(this, cbval1, cbval2);
            libqt_free(input_str);
            return static_cast<QValidator::State>(callback_ret);
        }
        return QSpinBox::validate(input, pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual int valueFromText(const QString& text) const override {
        if (qspinbox_valuefromtext_callback) {
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            int callback_ret = qspinbox_valuefromtext_callback(this, cbval1);
            libqt_free(text_str);
            return static_cast<int>(callback_ret);
        }
        return QSpinBox::valueFromText(text);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString textFromValue(int val) const override {
        if (qspinbox_textfromvalue_callback) {
            int cbval1 = val;
            const char* callback_ret = qspinbox_textfromvalue_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QSpinBox::textFromValue(val);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fixup(QString& str) const override {
        if (qspinbox_fixup_callback) {
            auto str_ret = str;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray str_b = str_ret.toUtf8();
            auto str_str_len = str_b.length();
            const char* str_str = static_cast<const char*>(malloc(str_str_len + 1));
            memcpy((void*)str_str, str_b.data(), str_str_len);
            ((char*)str_str)[str_str_len] = '\0';
            const char* cbval1 = str_str;
            qspinbox_fixup_callback(this, cbval1);
            libqt_free(str_str);
            return;
        }
        QSpinBox::fixup(str);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qspinbox_sizehint_callback) {
            QSize* callback_ret = qspinbox_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSpinBox::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qspinbox_minimumsizehint_callback) {
            QSize* callback_ret = qspinbox_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSpinBox::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qspinbox_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qspinbox_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSpinBox::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void stepBy(int steps) override {
        if (qspinbox_stepby_callback) {
            int cbval1 = steps;
            qspinbox_stepby_callback(this, cbval1);
            return;
        }
        QSpinBox::stepBy(steps);
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (qspinbox_clear_callback) {
            qspinbox_clear_callback(this);
            return;
        }
        QSpinBox::clear();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qspinbox_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qspinbox_resizeevent_callback(this, cbval1);
            return;
        }
        QSpinBox::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qspinbox_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qspinbox_keypressevent_callback(this, cbval1);
            return;
        }
        QSpinBox::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qspinbox_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qspinbox_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QSpinBox::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qspinbox_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qspinbox_wheelevent_callback(this, cbval1);
            return;
        }
        QSpinBox::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qspinbox_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qspinbox_focusinevent_callback(this, cbval1);
            return;
        }
        QSpinBox::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qspinbox_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qspinbox_focusoutevent_callback(this, cbval1);
            return;
        }
        QSpinBox::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qspinbox_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qspinbox_contextmenuevent_callback(this, cbval1);
            return;
        }
        QSpinBox::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qspinbox_changeevent_callback) {
            QEvent* cbval1 = event;
            qspinbox_changeevent_callback(this, cbval1);
            return;
        }
        QSpinBox::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qspinbox_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qspinbox_closeevent_callback(this, cbval1);
            return;
        }
        QSpinBox::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qspinbox_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qspinbox_hideevent_callback(this, cbval1);
            return;
        }
        QSpinBox::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qspinbox_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qspinbox_mousepressevent_callback(this, cbval1);
            return;
        }
        QSpinBox::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qspinbox_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qspinbox_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QSpinBox::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qspinbox_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qspinbox_mousemoveevent_callback(this, cbval1);
            return;
        }
        QSpinBox::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qspinbox_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qspinbox_timerevent_callback(this, cbval1);
            return;
        }
        QSpinBox::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qspinbox_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qspinbox_paintevent_callback(this, cbval1);
            return;
        }
        QSpinBox::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qspinbox_showevent_callback) {
            QShowEvent* cbval1 = event;
            qspinbox_showevent_callback(this, cbval1);
            return;
        }
        QSpinBox::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionSpinBox* option) const override {
        if (qspinbox_initstyleoption_callback) {
            QStyleOptionSpinBox* cbval1 = option;
            qspinbox_initstyleoption_callback(this, cbval1);
            return;
        }
        QSpinBox::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSpinBox::StepEnabled stepEnabled() const override {
        if (qspinbox_stepenabled_callback) {
            int callback_ret = qspinbox_stepenabled_callback(this);
            return static_cast<QAbstractSpinBox::StepEnabled>(callback_ret);
        }
        return QSpinBox::stepEnabled();
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qspinbox_devtype_callback) {
            int callback_ret = qspinbox_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QSpinBox::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qspinbox_setvisible_callback) {
            bool cbval1 = visible;
            qspinbox_setvisible_callback(this, cbval1);
            return;
        }
        QSpinBox::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qspinbox_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qspinbox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSpinBox::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qspinbox_hasheightforwidth_callback) {
            bool callback_ret = qspinbox_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QSpinBox::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qspinbox_paintengine_callback) {
            QPaintEngine* callback_ret = qspinbox_paintengine_callback(this);
            return callback_ret;
        }
        return QSpinBox::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qspinbox_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qspinbox_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QSpinBox::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qspinbox_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qspinbox_enterevent_callback(this, cbval1);
            return;
        }
        QSpinBox::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qspinbox_leaveevent_callback) {
            QEvent* cbval1 = event;
            qspinbox_leaveevent_callback(this, cbval1);
            return;
        }
        QSpinBox::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qspinbox_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qspinbox_moveevent_callback(this, cbval1);
            return;
        }
        QSpinBox::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qspinbox_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qspinbox_tabletevent_callback(this, cbval1);
            return;
        }
        QSpinBox::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qspinbox_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qspinbox_actionevent_callback(this, cbval1);
            return;
        }
        QSpinBox::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qspinbox_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qspinbox_dragenterevent_callback(this, cbval1);
            return;
        }
        QSpinBox::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qspinbox_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qspinbox_dragmoveevent_callback(this, cbval1);
            return;
        }
        QSpinBox::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qspinbox_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qspinbox_dragleaveevent_callback(this, cbval1);
            return;
        }
        QSpinBox::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qspinbox_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qspinbox_dropevent_callback(this, cbval1);
            return;
        }
        QSpinBox::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qspinbox_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qspinbox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QSpinBox::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qspinbox_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qspinbox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSpinBox::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qspinbox_initpainter_callback) {
            QPainter* cbval1 = painter;
            qspinbox_initpainter_callback(this, cbval1);
            return;
        }
        QSpinBox::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qspinbox_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qspinbox_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QSpinBox::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qspinbox_sharedpainter_callback) {
            QPainter* callback_ret = qspinbox_sharedpainter_callback(this);
            return callback_ret;
        }
        return QSpinBox::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qspinbox_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qspinbox_inputmethodevent_callback(this, cbval1);
            return;
        }
        QSpinBox::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qspinbox_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qspinbox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QSpinBox::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qspinbox_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qspinbox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSpinBox::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qspinbox_childevent_callback) {
            QChildEvent* cbval1 = event;
            qspinbox_childevent_callback(this, cbval1);
            return;
        }
        QSpinBox::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qspinbox_customevent_callback) {
            QEvent* cbval1 = event;
            qspinbox_customevent_callback(this, cbval1);
            return;
        }
        QSpinBox::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qspinbox_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qspinbox_connectnotify_callback(this, cbval1);
            return;
        }
        QSpinBox::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qspinbox_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qspinbox_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSpinBox::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QSpinBox_SuperEvent(QSpinBox* self, QEvent* event);
    friend int QSpinBox_SuperValidate(const QSpinBox* self, libqt_string input, int* pos);
    friend int QSpinBox_SuperValueFromText(const QSpinBox* self, const libqt_string text);
    friend libqt_string QSpinBox_SuperTextFromValue(const QSpinBox* self, int val);
    friend void QSpinBox_SuperFixup(const QSpinBox* self, libqt_string str);
    friend void QSpinBox_SuperResizeEvent(QSpinBox* self, QResizeEvent* event);
    friend void QSpinBox_SuperKeyPressEvent(QSpinBox* self, QKeyEvent* event);
    friend void QSpinBox_SuperKeyReleaseEvent(QSpinBox* self, QKeyEvent* event);
    friend void QSpinBox_SuperWheelEvent(QSpinBox* self, QWheelEvent* event);
    friend void QSpinBox_SuperFocusInEvent(QSpinBox* self, QFocusEvent* event);
    friend void QSpinBox_SuperFocusOutEvent(QSpinBox* self, QFocusEvent* event);
    friend void QSpinBox_SuperContextMenuEvent(QSpinBox* self, QContextMenuEvent* event);
    friend void QSpinBox_SuperChangeEvent(QSpinBox* self, QEvent* event);
    friend void QSpinBox_SuperCloseEvent(QSpinBox* self, QCloseEvent* event);
    friend void QSpinBox_SuperHideEvent(QSpinBox* self, QHideEvent* event);
    friend void QSpinBox_SuperMousePressEvent(QSpinBox* self, QMouseEvent* event);
    friend void QSpinBox_SuperMouseReleaseEvent(QSpinBox* self, QMouseEvent* event);
    friend void QSpinBox_SuperMouseMoveEvent(QSpinBox* self, QMouseEvent* event);
    friend void QSpinBox_SuperTimerEvent(QSpinBox* self, QTimerEvent* event);
    friend void QSpinBox_SuperPaintEvent(QSpinBox* self, QPaintEvent* event);
    friend void QSpinBox_SuperShowEvent(QSpinBox* self, QShowEvent* event);
    friend void QSpinBox_SuperInitStyleOption(const QSpinBox* self, QStyleOptionSpinBox* option);
    friend int QSpinBox_SuperStepEnabled(const QSpinBox* self);
    friend void QSpinBox_SuperMouseDoubleClickEvent(QSpinBox* self, QMouseEvent* event);
    friend void QSpinBox_SuperEnterEvent(QSpinBox* self, QEnterEvent* event);
    friend void QSpinBox_SuperLeaveEvent(QSpinBox* self, QEvent* event);
    friend void QSpinBox_SuperMoveEvent(QSpinBox* self, QMoveEvent* event);
    friend void QSpinBox_SuperTabletEvent(QSpinBox* self, QTabletEvent* event);
    friend void QSpinBox_SuperActionEvent(QSpinBox* self, QActionEvent* event);
    friend void QSpinBox_SuperDragEnterEvent(QSpinBox* self, QDragEnterEvent* event);
    friend void QSpinBox_SuperDragMoveEvent(QSpinBox* self, QDragMoveEvent* event);
    friend void QSpinBox_SuperDragLeaveEvent(QSpinBox* self, QDragLeaveEvent* event);
    friend void QSpinBox_SuperDropEvent(QSpinBox* self, QDropEvent* event);
    friend bool QSpinBox_SuperNativeEvent(QSpinBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QSpinBox_SuperMetric(const QSpinBox* self, int param1);
    friend void QSpinBox_SuperInitPainter(const QSpinBox* self, QPainter* painter);
    friend QPaintDevice* QSpinBox_SuperRedirected(const QSpinBox* self, QPoint* offset);
    friend QPainter* QSpinBox_SuperSharedPainter(const QSpinBox* self);
    friend void QSpinBox_SuperInputMethodEvent(QSpinBox* self, QInputMethodEvent* param1);
    friend bool QSpinBox_SuperFocusNextPrevChild(QSpinBox* self, bool next);
    friend void QSpinBox_SuperChildEvent(QSpinBox* self, QChildEvent* event);
    friend void QSpinBox_SuperCustomEvent(QSpinBox* self, QEvent* event);
    friend void QSpinBox_SuperConnectNotify(QSpinBox* self, const QMetaMethod* signal);
    friend void QSpinBox_SuperDisconnectNotify(QSpinBox* self, const QMetaMethod* signal);
};

// This class is a subclass of QDoubleSpinBox
class VirtualQDoubleSpinBox final : public QDoubleSpinBox {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDoubleSpinBox_MetaObject_Callback = QMetaObject* (*)(const QDoubleSpinBox*);
    using QDoubleSpinBox_Metacast_Callback = void* (*)(QDoubleSpinBox*, const char*);
    using QDoubleSpinBox_Metacall_Callback = int (*)(QDoubleSpinBox*, int, int, void**);
    using QDoubleSpinBox_Validate_Callback = int (*)(const QDoubleSpinBox*, const char*, int*);
    using QDoubleSpinBox_ValueFromText_Callback = double (*)(const QDoubleSpinBox*, const char*);
    using QDoubleSpinBox_TextFromValue_Callback = const char* (*)(const QDoubleSpinBox*, double);
    using QDoubleSpinBox_Fixup_Callback = void (*)(const QDoubleSpinBox*, const char*);
    using QDoubleSpinBox_SizeHint_Callback = QSize* (*)(const QDoubleSpinBox*);
    using QDoubleSpinBox_MinimumSizeHint_Callback = QSize* (*)(const QDoubleSpinBox*);
    using QDoubleSpinBox_Event_Callback = bool (*)(QDoubleSpinBox*, QEvent*);
    using QDoubleSpinBox_InputMethodQuery_Callback = QVariant* (*)(const QDoubleSpinBox*, int);
    using QDoubleSpinBox_StepBy_Callback = void (*)(QDoubleSpinBox*, int);
    using QDoubleSpinBox_Clear_Callback = void (*)(QDoubleSpinBox*);
    using QDoubleSpinBox_ResizeEvent_Callback = void (*)(QDoubleSpinBox*, QResizeEvent*);
    using QDoubleSpinBox_KeyPressEvent_Callback = void (*)(QDoubleSpinBox*, QKeyEvent*);
    using QDoubleSpinBox_KeyReleaseEvent_Callback = void (*)(QDoubleSpinBox*, QKeyEvent*);
    using QDoubleSpinBox_WheelEvent_Callback = void (*)(QDoubleSpinBox*, QWheelEvent*);
    using QDoubleSpinBox_FocusInEvent_Callback = void (*)(QDoubleSpinBox*, QFocusEvent*);
    using QDoubleSpinBox_FocusOutEvent_Callback = void (*)(QDoubleSpinBox*, QFocusEvent*);
    using QDoubleSpinBox_ContextMenuEvent_Callback = void (*)(QDoubleSpinBox*, QContextMenuEvent*);
    using QDoubleSpinBox_ChangeEvent_Callback = void (*)(QDoubleSpinBox*, QEvent*);
    using QDoubleSpinBox_CloseEvent_Callback = void (*)(QDoubleSpinBox*, QCloseEvent*);
    using QDoubleSpinBox_HideEvent_Callback = void (*)(QDoubleSpinBox*, QHideEvent*);
    using QDoubleSpinBox_MousePressEvent_Callback = void (*)(QDoubleSpinBox*, QMouseEvent*);
    using QDoubleSpinBox_MouseReleaseEvent_Callback = void (*)(QDoubleSpinBox*, QMouseEvent*);
    using QDoubleSpinBox_MouseMoveEvent_Callback = void (*)(QDoubleSpinBox*, QMouseEvent*);
    using QDoubleSpinBox_TimerEvent_Callback = void (*)(QDoubleSpinBox*, QTimerEvent*);
    using QDoubleSpinBox_PaintEvent_Callback = void (*)(QDoubleSpinBox*, QPaintEvent*);
    using QDoubleSpinBox_ShowEvent_Callback = void (*)(QDoubleSpinBox*, QShowEvent*);
    using QDoubleSpinBox_InitStyleOption_Callback = void (*)(const QDoubleSpinBox*, QStyleOptionSpinBox*);
    using QDoubleSpinBox_StepEnabled_Callback = int (*)(const QDoubleSpinBox*);
    using QDoubleSpinBox_DevType_Callback = int (*)(const QDoubleSpinBox*);
    using QDoubleSpinBox_SetVisible_Callback = void (*)(QDoubleSpinBox*, bool);
    using QDoubleSpinBox_HeightForWidth_Callback = int (*)(const QDoubleSpinBox*, int);
    using QDoubleSpinBox_HasHeightForWidth_Callback = bool (*)(const QDoubleSpinBox*);
    using QDoubleSpinBox_PaintEngine_Callback = QPaintEngine* (*)(const QDoubleSpinBox*);
    using QDoubleSpinBox_MouseDoubleClickEvent_Callback = void (*)(QDoubleSpinBox*, QMouseEvent*);
    using QDoubleSpinBox_EnterEvent_Callback = void (*)(QDoubleSpinBox*, QEnterEvent*);
    using QDoubleSpinBox_LeaveEvent_Callback = void (*)(QDoubleSpinBox*, QEvent*);
    using QDoubleSpinBox_MoveEvent_Callback = void (*)(QDoubleSpinBox*, QMoveEvent*);
    using QDoubleSpinBox_TabletEvent_Callback = void (*)(QDoubleSpinBox*, QTabletEvent*);
    using QDoubleSpinBox_ActionEvent_Callback = void (*)(QDoubleSpinBox*, QActionEvent*);
    using QDoubleSpinBox_DragEnterEvent_Callback = void (*)(QDoubleSpinBox*, QDragEnterEvent*);
    using QDoubleSpinBox_DragMoveEvent_Callback = void (*)(QDoubleSpinBox*, QDragMoveEvent*);
    using QDoubleSpinBox_DragLeaveEvent_Callback = void (*)(QDoubleSpinBox*, QDragLeaveEvent*);
    using QDoubleSpinBox_DropEvent_Callback = void (*)(QDoubleSpinBox*, QDropEvent*);
    using QDoubleSpinBox_NativeEvent_Callback = bool (*)(QDoubleSpinBox*, libqt_string, void*, intptr_t*);
    using QDoubleSpinBox_Metric_Callback = int (*)(const QDoubleSpinBox*, int);
    using QDoubleSpinBox_InitPainter_Callback = void (*)(const QDoubleSpinBox*, QPainter*);
    using QDoubleSpinBox_Redirected_Callback = QPaintDevice* (*)(const QDoubleSpinBox*, QPoint*);
    using QDoubleSpinBox_SharedPainter_Callback = QPainter* (*)(const QDoubleSpinBox*);
    using QDoubleSpinBox_InputMethodEvent_Callback = void (*)(QDoubleSpinBox*, QInputMethodEvent*);
    using QDoubleSpinBox_FocusNextPrevChild_Callback = bool (*)(QDoubleSpinBox*, bool);
    using QDoubleSpinBox_EventFilter_Callback = bool (*)(QDoubleSpinBox*, QObject*, QEvent*);
    using QDoubleSpinBox_ChildEvent_Callback = void (*)(QDoubleSpinBox*, QChildEvent*);
    using QDoubleSpinBox_CustomEvent_Callback = void (*)(QDoubleSpinBox*, QEvent*);
    using QDoubleSpinBox_ConnectNotify_Callback = void (*)(QDoubleSpinBox*, QMetaMethod*);
    using QDoubleSpinBox_DisconnectNotify_Callback = void (*)(QDoubleSpinBox*, QMetaMethod*);
    using QDoubleSpinBox::create;
    using QDoubleSpinBox::destroy;
    using QDoubleSpinBox::focusNextChild;
    using QDoubleSpinBox::focusPreviousChild;
    using QDoubleSpinBox::getDecodedMetricF;
    using QDoubleSpinBox::isSignalConnected;
    using QDoubleSpinBox::lineEdit;
    using QDoubleSpinBox::receivers;
    using QDoubleSpinBox::sender;
    using QDoubleSpinBox::senderSignalIndex;
    using QDoubleSpinBox::setLineEdit;
    using QDoubleSpinBox::updateMicroFocus;

    // Instance callback storage
    QDoubleSpinBox_MetaObject_Callback qdoublespinbox_metaobject_callback = nullptr;
    QDoubleSpinBox_Metacast_Callback qdoublespinbox_metacast_callback = nullptr;
    QDoubleSpinBox_Metacall_Callback qdoublespinbox_metacall_callback = nullptr;
    QDoubleSpinBox_Validate_Callback qdoublespinbox_validate_callback = nullptr;
    QDoubleSpinBox_ValueFromText_Callback qdoublespinbox_valuefromtext_callback = nullptr;
    QDoubleSpinBox_TextFromValue_Callback qdoublespinbox_textfromvalue_callback = nullptr;
    QDoubleSpinBox_Fixup_Callback qdoublespinbox_fixup_callback = nullptr;
    QDoubleSpinBox_SizeHint_Callback qdoublespinbox_sizehint_callback = nullptr;
    QDoubleSpinBox_MinimumSizeHint_Callback qdoublespinbox_minimumsizehint_callback = nullptr;
    QDoubleSpinBox_Event_Callback qdoublespinbox_event_callback = nullptr;
    QDoubleSpinBox_InputMethodQuery_Callback qdoublespinbox_inputmethodquery_callback = nullptr;
    QDoubleSpinBox_StepBy_Callback qdoublespinbox_stepby_callback = nullptr;
    QDoubleSpinBox_Clear_Callback qdoublespinbox_clear_callback = nullptr;
    QDoubleSpinBox_ResizeEvent_Callback qdoublespinbox_resizeevent_callback = nullptr;
    QDoubleSpinBox_KeyPressEvent_Callback qdoublespinbox_keypressevent_callback = nullptr;
    QDoubleSpinBox_KeyReleaseEvent_Callback qdoublespinbox_keyreleaseevent_callback = nullptr;
    QDoubleSpinBox_WheelEvent_Callback qdoublespinbox_wheelevent_callback = nullptr;
    QDoubleSpinBox_FocusInEvent_Callback qdoublespinbox_focusinevent_callback = nullptr;
    QDoubleSpinBox_FocusOutEvent_Callback qdoublespinbox_focusoutevent_callback = nullptr;
    QDoubleSpinBox_ContextMenuEvent_Callback qdoublespinbox_contextmenuevent_callback = nullptr;
    QDoubleSpinBox_ChangeEvent_Callback qdoublespinbox_changeevent_callback = nullptr;
    QDoubleSpinBox_CloseEvent_Callback qdoublespinbox_closeevent_callback = nullptr;
    QDoubleSpinBox_HideEvent_Callback qdoublespinbox_hideevent_callback = nullptr;
    QDoubleSpinBox_MousePressEvent_Callback qdoublespinbox_mousepressevent_callback = nullptr;
    QDoubleSpinBox_MouseReleaseEvent_Callback qdoublespinbox_mousereleaseevent_callback = nullptr;
    QDoubleSpinBox_MouseMoveEvent_Callback qdoublespinbox_mousemoveevent_callback = nullptr;
    QDoubleSpinBox_TimerEvent_Callback qdoublespinbox_timerevent_callback = nullptr;
    QDoubleSpinBox_PaintEvent_Callback qdoublespinbox_paintevent_callback = nullptr;
    QDoubleSpinBox_ShowEvent_Callback qdoublespinbox_showevent_callback = nullptr;
    QDoubleSpinBox_InitStyleOption_Callback qdoublespinbox_initstyleoption_callback = nullptr;
    QDoubleSpinBox_StepEnabled_Callback qdoublespinbox_stepenabled_callback = nullptr;
    QDoubleSpinBox_DevType_Callback qdoublespinbox_devtype_callback = nullptr;
    QDoubleSpinBox_SetVisible_Callback qdoublespinbox_setvisible_callback = nullptr;
    QDoubleSpinBox_HeightForWidth_Callback qdoublespinbox_heightforwidth_callback = nullptr;
    QDoubleSpinBox_HasHeightForWidth_Callback qdoublespinbox_hasheightforwidth_callback = nullptr;
    QDoubleSpinBox_PaintEngine_Callback qdoublespinbox_paintengine_callback = nullptr;
    QDoubleSpinBox_MouseDoubleClickEvent_Callback qdoublespinbox_mousedoubleclickevent_callback = nullptr;
    QDoubleSpinBox_EnterEvent_Callback qdoublespinbox_enterevent_callback = nullptr;
    QDoubleSpinBox_LeaveEvent_Callback qdoublespinbox_leaveevent_callback = nullptr;
    QDoubleSpinBox_MoveEvent_Callback qdoublespinbox_moveevent_callback = nullptr;
    QDoubleSpinBox_TabletEvent_Callback qdoublespinbox_tabletevent_callback = nullptr;
    QDoubleSpinBox_ActionEvent_Callback qdoublespinbox_actionevent_callback = nullptr;
    QDoubleSpinBox_DragEnterEvent_Callback qdoublespinbox_dragenterevent_callback = nullptr;
    QDoubleSpinBox_DragMoveEvent_Callback qdoublespinbox_dragmoveevent_callback = nullptr;
    QDoubleSpinBox_DragLeaveEvent_Callback qdoublespinbox_dragleaveevent_callback = nullptr;
    QDoubleSpinBox_DropEvent_Callback qdoublespinbox_dropevent_callback = nullptr;
    QDoubleSpinBox_NativeEvent_Callback qdoublespinbox_nativeevent_callback = nullptr;
    QDoubleSpinBox_Metric_Callback qdoublespinbox_metric_callback = nullptr;
    QDoubleSpinBox_InitPainter_Callback qdoublespinbox_initpainter_callback = nullptr;
    QDoubleSpinBox_Redirected_Callback qdoublespinbox_redirected_callback = nullptr;
    QDoubleSpinBox_SharedPainter_Callback qdoublespinbox_sharedpainter_callback = nullptr;
    QDoubleSpinBox_InputMethodEvent_Callback qdoublespinbox_inputmethodevent_callback = nullptr;
    QDoubleSpinBox_FocusNextPrevChild_Callback qdoublespinbox_focusnextprevchild_callback = nullptr;
    QDoubleSpinBox_EventFilter_Callback qdoublespinbox_eventfilter_callback = nullptr;
    QDoubleSpinBox_ChildEvent_Callback qdoublespinbox_childevent_callback = nullptr;
    QDoubleSpinBox_CustomEvent_Callback qdoublespinbox_customevent_callback = nullptr;
    QDoubleSpinBox_ConnectNotify_Callback qdoublespinbox_connectnotify_callback = nullptr;
    QDoubleSpinBox_DisconnectNotify_Callback qdoublespinbox_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QDoubleSpinBox {
        using QDoubleSpinBox::actionEvent;
        using QDoubleSpinBox::changeEvent;
        using QDoubleSpinBox::childEvent;
        using QDoubleSpinBox::closeEvent;
        using QDoubleSpinBox::connectNotify;
        using QDoubleSpinBox::contextMenuEvent;
        using QDoubleSpinBox::customEvent;
        using QDoubleSpinBox::disconnectNotify;
        using QDoubleSpinBox::dragEnterEvent;
        using QDoubleSpinBox::dragLeaveEvent;
        using QDoubleSpinBox::dragMoveEvent;
        using QDoubleSpinBox::dropEvent;
        using QDoubleSpinBox::enterEvent;
        using QDoubleSpinBox::focusInEvent;
        using QDoubleSpinBox::focusNextPrevChild;
        using QDoubleSpinBox::focusOutEvent;
        using QDoubleSpinBox::hideEvent;
        using QDoubleSpinBox::initPainter;
        using QDoubleSpinBox::initStyleOption;
        using QDoubleSpinBox::inputMethodEvent;
        using QDoubleSpinBox::keyPressEvent;
        using QDoubleSpinBox::keyReleaseEvent;
        using QDoubleSpinBox::leaveEvent;
        using QDoubleSpinBox::metric;
        using QDoubleSpinBox::mouseDoubleClickEvent;
        using QDoubleSpinBox::mouseMoveEvent;
        using QDoubleSpinBox::mousePressEvent;
        using QDoubleSpinBox::mouseReleaseEvent;
        using QDoubleSpinBox::moveEvent;
        using QDoubleSpinBox::nativeEvent;
        using QDoubleSpinBox::paintEvent;
        using QDoubleSpinBox::redirected;
        using QDoubleSpinBox::resizeEvent;
        using QDoubleSpinBox::sharedPainter;
        using QDoubleSpinBox::showEvent;
        using QDoubleSpinBox::stepEnabled;
        using QDoubleSpinBox::tabletEvent;
        using QDoubleSpinBox::timerEvent;
        using QDoubleSpinBox::wheelEvent;
    };

    VirtualQDoubleSpinBox(QWidget* parent) : QDoubleSpinBox(parent) {};
    VirtualQDoubleSpinBox() : QDoubleSpinBox() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdoublespinbox_metaobject_callback) {
            QMetaObject* callback_ret = qdoublespinbox_metaobject_callback(this);
            return callback_ret;
        }
        return QDoubleSpinBox::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdoublespinbox_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qdoublespinbox_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QDoubleSpinBox::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdoublespinbox_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qdoublespinbox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDoubleSpinBox::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QValidator::State validate(QString& input, int& pos) const override {
        if (qdoublespinbox_validate_callback) {
            auto input_ret = input;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray input_b = input_ret.toUtf8();
            auto input_str_len = input_b.length();
            const char* input_str = static_cast<const char*>(malloc(input_str_len + 1));
            memcpy((void*)input_str, input_b.data(), input_str_len);
            ((char*)input_str)[input_str_len] = '\0';
            const char* cbval1 = input_str;
            int* cbval2 = &pos;
            int callback_ret = qdoublespinbox_validate_callback(this, cbval1, cbval2);
            libqt_free(input_str);
            return static_cast<QValidator::State>(callback_ret);
        }
        return QDoubleSpinBox::validate(input, pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual double valueFromText(const QString& text) const override {
        if (qdoublespinbox_valuefromtext_callback) {
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            double callback_ret = qdoublespinbox_valuefromtext_callback(this, cbval1);
            libqt_free(text_str);
            return static_cast<double>(callback_ret);
        }
        return QDoubleSpinBox::valueFromText(text);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString textFromValue(double val) const override {
        if (qdoublespinbox_textfromvalue_callback) {
            double cbval1 = val;
            const char* callback_ret = qdoublespinbox_textfromvalue_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QDoubleSpinBox::textFromValue(val);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fixup(QString& str) const override {
        if (qdoublespinbox_fixup_callback) {
            auto str_ret = str;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray str_b = str_ret.toUtf8();
            auto str_str_len = str_b.length();
            const char* str_str = static_cast<const char*>(malloc(str_str_len + 1));
            memcpy((void*)str_str, str_b.data(), str_str_len);
            ((char*)str_str)[str_str_len] = '\0';
            const char* cbval1 = str_str;
            qdoublespinbox_fixup_callback(this, cbval1);
            libqt_free(str_str);
            return;
        }
        QDoubleSpinBox::fixup(str);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qdoublespinbox_sizehint_callback) {
            QSize* callback_ret = qdoublespinbox_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDoubleSpinBox::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qdoublespinbox_minimumsizehint_callback) {
            QSize* callback_ret = qdoublespinbox_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDoubleSpinBox::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdoublespinbox_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qdoublespinbox_event_callback(this, cbval1);
            return callback_ret;
        }
        return QDoubleSpinBox::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qdoublespinbox_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qdoublespinbox_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDoubleSpinBox::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void stepBy(int steps) override {
        if (qdoublespinbox_stepby_callback) {
            int cbval1 = steps;
            qdoublespinbox_stepby_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::stepBy(steps);
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (qdoublespinbox_clear_callback) {
            qdoublespinbox_clear_callback(this);
            return;
        }
        QDoubleSpinBox::clear();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qdoublespinbox_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qdoublespinbox_resizeevent_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qdoublespinbox_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qdoublespinbox_keypressevent_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qdoublespinbox_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qdoublespinbox_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qdoublespinbox_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qdoublespinbox_wheelevent_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qdoublespinbox_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qdoublespinbox_focusinevent_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qdoublespinbox_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qdoublespinbox_focusoutevent_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qdoublespinbox_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qdoublespinbox_contextmenuevent_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qdoublespinbox_changeevent_callback) {
            QEvent* cbval1 = event;
            qdoublespinbox_changeevent_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qdoublespinbox_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qdoublespinbox_closeevent_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qdoublespinbox_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qdoublespinbox_hideevent_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qdoublespinbox_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qdoublespinbox_mousepressevent_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qdoublespinbox_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qdoublespinbox_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qdoublespinbox_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qdoublespinbox_mousemoveevent_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdoublespinbox_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qdoublespinbox_timerevent_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qdoublespinbox_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qdoublespinbox_paintevent_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qdoublespinbox_showevent_callback) {
            QShowEvent* cbval1 = event;
            qdoublespinbox_showevent_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionSpinBox* option) const override {
        if (qdoublespinbox_initstyleoption_callback) {
            QStyleOptionSpinBox* cbval1 = option;
            qdoublespinbox_initstyleoption_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSpinBox::StepEnabled stepEnabled() const override {
        if (qdoublespinbox_stepenabled_callback) {
            int callback_ret = qdoublespinbox_stepenabled_callback(this);
            return static_cast<QAbstractSpinBox::StepEnabled>(callback_ret);
        }
        return QDoubleSpinBox::stepEnabled();
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qdoublespinbox_devtype_callback) {
            int callback_ret = qdoublespinbox_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QDoubleSpinBox::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qdoublespinbox_setvisible_callback) {
            bool cbval1 = visible;
            qdoublespinbox_setvisible_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qdoublespinbox_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qdoublespinbox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDoubleSpinBox::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qdoublespinbox_hasheightforwidth_callback) {
            bool callback_ret = qdoublespinbox_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QDoubleSpinBox::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qdoublespinbox_paintengine_callback) {
            QPaintEngine* callback_ret = qdoublespinbox_paintengine_callback(this);
            return callback_ret;
        }
        return QDoubleSpinBox::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qdoublespinbox_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qdoublespinbox_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qdoublespinbox_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qdoublespinbox_enterevent_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qdoublespinbox_leaveevent_callback) {
            QEvent* cbval1 = event;
            qdoublespinbox_leaveevent_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qdoublespinbox_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qdoublespinbox_moveevent_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qdoublespinbox_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qdoublespinbox_tabletevent_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qdoublespinbox_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qdoublespinbox_actionevent_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qdoublespinbox_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qdoublespinbox_dragenterevent_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qdoublespinbox_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qdoublespinbox_dragmoveevent_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qdoublespinbox_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qdoublespinbox_dragleaveevent_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qdoublespinbox_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qdoublespinbox_dropevent_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qdoublespinbox_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qdoublespinbox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QDoubleSpinBox::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qdoublespinbox_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qdoublespinbox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDoubleSpinBox::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qdoublespinbox_initpainter_callback) {
            QPainter* cbval1 = painter;
            qdoublespinbox_initpainter_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qdoublespinbox_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qdoublespinbox_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QDoubleSpinBox::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qdoublespinbox_sharedpainter_callback) {
            QPainter* callback_ret = qdoublespinbox_sharedpainter_callback(this);
            return callback_ret;
        }
        return QDoubleSpinBox::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qdoublespinbox_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qdoublespinbox_inputmethodevent_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qdoublespinbox_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qdoublespinbox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QDoubleSpinBox::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdoublespinbox_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qdoublespinbox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDoubleSpinBox::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdoublespinbox_childevent_callback) {
            QChildEvent* cbval1 = event;
            qdoublespinbox_childevent_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdoublespinbox_customevent_callback) {
            QEvent* cbval1 = event;
            qdoublespinbox_customevent_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdoublespinbox_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdoublespinbox_connectnotify_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdoublespinbox_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdoublespinbox_disconnectnotify_callback(this, cbval1);
            return;
        }
        QDoubleSpinBox::disconnectNotify(signal);
    }

    // Friend functions
    friend void QDoubleSpinBox_SuperResizeEvent(QDoubleSpinBox* self, QResizeEvent* event);
    friend void QDoubleSpinBox_SuperKeyPressEvent(QDoubleSpinBox* self, QKeyEvent* event);
    friend void QDoubleSpinBox_SuperKeyReleaseEvent(QDoubleSpinBox* self, QKeyEvent* event);
    friend void QDoubleSpinBox_SuperWheelEvent(QDoubleSpinBox* self, QWheelEvent* event);
    friend void QDoubleSpinBox_SuperFocusInEvent(QDoubleSpinBox* self, QFocusEvent* event);
    friend void QDoubleSpinBox_SuperFocusOutEvent(QDoubleSpinBox* self, QFocusEvent* event);
    friend void QDoubleSpinBox_SuperContextMenuEvent(QDoubleSpinBox* self, QContextMenuEvent* event);
    friend void QDoubleSpinBox_SuperChangeEvent(QDoubleSpinBox* self, QEvent* event);
    friend void QDoubleSpinBox_SuperCloseEvent(QDoubleSpinBox* self, QCloseEvent* event);
    friend void QDoubleSpinBox_SuperHideEvent(QDoubleSpinBox* self, QHideEvent* event);
    friend void QDoubleSpinBox_SuperMousePressEvent(QDoubleSpinBox* self, QMouseEvent* event);
    friend void QDoubleSpinBox_SuperMouseReleaseEvent(QDoubleSpinBox* self, QMouseEvent* event);
    friend void QDoubleSpinBox_SuperMouseMoveEvent(QDoubleSpinBox* self, QMouseEvent* event);
    friend void QDoubleSpinBox_SuperTimerEvent(QDoubleSpinBox* self, QTimerEvent* event);
    friend void QDoubleSpinBox_SuperPaintEvent(QDoubleSpinBox* self, QPaintEvent* event);
    friend void QDoubleSpinBox_SuperShowEvent(QDoubleSpinBox* self, QShowEvent* event);
    friend void QDoubleSpinBox_SuperInitStyleOption(const QDoubleSpinBox* self, QStyleOptionSpinBox* option);
    friend int QDoubleSpinBox_SuperStepEnabled(const QDoubleSpinBox* self);
    friend void QDoubleSpinBox_SuperMouseDoubleClickEvent(QDoubleSpinBox* self, QMouseEvent* event);
    friend void QDoubleSpinBox_SuperEnterEvent(QDoubleSpinBox* self, QEnterEvent* event);
    friend void QDoubleSpinBox_SuperLeaveEvent(QDoubleSpinBox* self, QEvent* event);
    friend void QDoubleSpinBox_SuperMoveEvent(QDoubleSpinBox* self, QMoveEvent* event);
    friend void QDoubleSpinBox_SuperTabletEvent(QDoubleSpinBox* self, QTabletEvent* event);
    friend void QDoubleSpinBox_SuperActionEvent(QDoubleSpinBox* self, QActionEvent* event);
    friend void QDoubleSpinBox_SuperDragEnterEvent(QDoubleSpinBox* self, QDragEnterEvent* event);
    friend void QDoubleSpinBox_SuperDragMoveEvent(QDoubleSpinBox* self, QDragMoveEvent* event);
    friend void QDoubleSpinBox_SuperDragLeaveEvent(QDoubleSpinBox* self, QDragLeaveEvent* event);
    friend void QDoubleSpinBox_SuperDropEvent(QDoubleSpinBox* self, QDropEvent* event);
    friend bool QDoubleSpinBox_SuperNativeEvent(QDoubleSpinBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QDoubleSpinBox_SuperMetric(const QDoubleSpinBox* self, int param1);
    friend void QDoubleSpinBox_SuperInitPainter(const QDoubleSpinBox* self, QPainter* painter);
    friend QPaintDevice* QDoubleSpinBox_SuperRedirected(const QDoubleSpinBox* self, QPoint* offset);
    friend QPainter* QDoubleSpinBox_SuperSharedPainter(const QDoubleSpinBox* self);
    friend void QDoubleSpinBox_SuperInputMethodEvent(QDoubleSpinBox* self, QInputMethodEvent* param1);
    friend bool QDoubleSpinBox_SuperFocusNextPrevChild(QDoubleSpinBox* self, bool next);
    friend void QDoubleSpinBox_SuperChildEvent(QDoubleSpinBox* self, QChildEvent* event);
    friend void QDoubleSpinBox_SuperCustomEvent(QDoubleSpinBox* self, QEvent* event);
    friend void QDoubleSpinBox_SuperConnectNotify(QDoubleSpinBox* self, const QMetaMethod* signal);
    friend void QDoubleSpinBox_SuperDisconnectNotify(QDoubleSpinBox* self, const QMetaMethod* signal);
};

#endif
