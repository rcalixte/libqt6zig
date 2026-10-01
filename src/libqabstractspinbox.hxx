#pragma once
#ifndef LIBQABSTRACTSPINBOX_HXX
#define LIBQABSTRACTSPINBOX_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAbstractSpinBox
class VirtualQAbstractSpinBox final : public QAbstractSpinBox {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractSpinBox_MetaObject_Callback = QMetaObject* (*)(const QAbstractSpinBox*);
    using QAbstractSpinBox_Metacast_Callback = void* (*)(QAbstractSpinBox*, const char*);
    using QAbstractSpinBox_Metacall_Callback = int (*)(QAbstractSpinBox*, int, int, void**);
    using QAbstractSpinBox_SizeHint_Callback = QSize* (*)(const QAbstractSpinBox*);
    using QAbstractSpinBox_MinimumSizeHint_Callback = QSize* (*)(const QAbstractSpinBox*);
    using QAbstractSpinBox_Event_Callback = bool (*)(QAbstractSpinBox*, QEvent*);
    using QAbstractSpinBox_InputMethodQuery_Callback = QVariant* (*)(const QAbstractSpinBox*, int);
    using QAbstractSpinBox_Validate_Callback = int (*)(const QAbstractSpinBox*, const char*, int*);
    using QAbstractSpinBox_Fixup_Callback = void (*)(const QAbstractSpinBox*, const char*);
    using QAbstractSpinBox_StepBy_Callback = void (*)(QAbstractSpinBox*, int);
    using QAbstractSpinBox_Clear_Callback = void (*)(QAbstractSpinBox*);
    using QAbstractSpinBox_ResizeEvent_Callback = void (*)(QAbstractSpinBox*, QResizeEvent*);
    using QAbstractSpinBox_KeyPressEvent_Callback = void (*)(QAbstractSpinBox*, QKeyEvent*);
    using QAbstractSpinBox_KeyReleaseEvent_Callback = void (*)(QAbstractSpinBox*, QKeyEvent*);
    using QAbstractSpinBox_WheelEvent_Callback = void (*)(QAbstractSpinBox*, QWheelEvent*);
    using QAbstractSpinBox_FocusInEvent_Callback = void (*)(QAbstractSpinBox*, QFocusEvent*);
    using QAbstractSpinBox_FocusOutEvent_Callback = void (*)(QAbstractSpinBox*, QFocusEvent*);
    using QAbstractSpinBox_ContextMenuEvent_Callback = void (*)(QAbstractSpinBox*, QContextMenuEvent*);
    using QAbstractSpinBox_ChangeEvent_Callback = void (*)(QAbstractSpinBox*, QEvent*);
    using QAbstractSpinBox_CloseEvent_Callback = void (*)(QAbstractSpinBox*, QCloseEvent*);
    using QAbstractSpinBox_HideEvent_Callback = void (*)(QAbstractSpinBox*, QHideEvent*);
    using QAbstractSpinBox_MousePressEvent_Callback = void (*)(QAbstractSpinBox*, QMouseEvent*);
    using QAbstractSpinBox_MouseReleaseEvent_Callback = void (*)(QAbstractSpinBox*, QMouseEvent*);
    using QAbstractSpinBox_MouseMoveEvent_Callback = void (*)(QAbstractSpinBox*, QMouseEvent*);
    using QAbstractSpinBox_TimerEvent_Callback = void (*)(QAbstractSpinBox*, QTimerEvent*);
    using QAbstractSpinBox_PaintEvent_Callback = void (*)(QAbstractSpinBox*, QPaintEvent*);
    using QAbstractSpinBox_ShowEvent_Callback = void (*)(QAbstractSpinBox*, QShowEvent*);
    using QAbstractSpinBox_InitStyleOption_Callback = void (*)(const QAbstractSpinBox*, QStyleOptionSpinBox*);
    using QAbstractSpinBox_StepEnabled_Callback = int (*)(const QAbstractSpinBox*);
    using QAbstractSpinBox_DevType_Callback = int (*)(const QAbstractSpinBox*);
    using QAbstractSpinBox_SetVisible_Callback = void (*)(QAbstractSpinBox*, bool);
    using QAbstractSpinBox_HeightForWidth_Callback = int (*)(const QAbstractSpinBox*, int);
    using QAbstractSpinBox_HasHeightForWidth_Callback = bool (*)(const QAbstractSpinBox*);
    using QAbstractSpinBox_PaintEngine_Callback = QPaintEngine* (*)(const QAbstractSpinBox*);
    using QAbstractSpinBox_MouseDoubleClickEvent_Callback = void (*)(QAbstractSpinBox*, QMouseEvent*);
    using QAbstractSpinBox_EnterEvent_Callback = void (*)(QAbstractSpinBox*, QEnterEvent*);
    using QAbstractSpinBox_LeaveEvent_Callback = void (*)(QAbstractSpinBox*, QEvent*);
    using QAbstractSpinBox_MoveEvent_Callback = void (*)(QAbstractSpinBox*, QMoveEvent*);
    using QAbstractSpinBox_TabletEvent_Callback = void (*)(QAbstractSpinBox*, QTabletEvent*);
    using QAbstractSpinBox_ActionEvent_Callback = void (*)(QAbstractSpinBox*, QActionEvent*);
    using QAbstractSpinBox_DragEnterEvent_Callback = void (*)(QAbstractSpinBox*, QDragEnterEvent*);
    using QAbstractSpinBox_DragMoveEvent_Callback = void (*)(QAbstractSpinBox*, QDragMoveEvent*);
    using QAbstractSpinBox_DragLeaveEvent_Callback = void (*)(QAbstractSpinBox*, QDragLeaveEvent*);
    using QAbstractSpinBox_DropEvent_Callback = void (*)(QAbstractSpinBox*, QDropEvent*);
    using QAbstractSpinBox_NativeEvent_Callback = bool (*)(QAbstractSpinBox*, libqt_string, void*, intptr_t*);
    using QAbstractSpinBox_Metric_Callback = int (*)(const QAbstractSpinBox*, int);
    using QAbstractSpinBox_InitPainter_Callback = void (*)(const QAbstractSpinBox*, QPainter*);
    using QAbstractSpinBox_Redirected_Callback = QPaintDevice* (*)(const QAbstractSpinBox*, QPoint*);
    using QAbstractSpinBox_SharedPainter_Callback = QPainter* (*)(const QAbstractSpinBox*);
    using QAbstractSpinBox_InputMethodEvent_Callback = void (*)(QAbstractSpinBox*, QInputMethodEvent*);
    using QAbstractSpinBox_FocusNextPrevChild_Callback = bool (*)(QAbstractSpinBox*, bool);
    using QAbstractSpinBox_EventFilter_Callback = bool (*)(QAbstractSpinBox*, QObject*, QEvent*);
    using QAbstractSpinBox_ChildEvent_Callback = void (*)(QAbstractSpinBox*, QChildEvent*);
    using QAbstractSpinBox_CustomEvent_Callback = void (*)(QAbstractSpinBox*, QEvent*);
    using QAbstractSpinBox_ConnectNotify_Callback = void (*)(QAbstractSpinBox*, QMetaMethod*);
    using QAbstractSpinBox_DisconnectNotify_Callback = void (*)(QAbstractSpinBox*, QMetaMethod*);
    using QAbstractSpinBox::create;
    using QAbstractSpinBox::destroy;
    using QAbstractSpinBox::focusNextChild;
    using QAbstractSpinBox::focusPreviousChild;
    using QAbstractSpinBox::getDecodedMetricF;
    using QAbstractSpinBox::isSignalConnected;
    using QAbstractSpinBox::lineEdit;
    using QAbstractSpinBox::receivers;
    using QAbstractSpinBox::sender;
    using QAbstractSpinBox::senderSignalIndex;
    using QAbstractSpinBox::setLineEdit;
    using QAbstractSpinBox::updateMicroFocus;

    // Instance callback storage
    QAbstractSpinBox_MetaObject_Callback qabstractspinbox_metaobject_callback = nullptr;
    QAbstractSpinBox_Metacast_Callback qabstractspinbox_metacast_callback = nullptr;
    QAbstractSpinBox_Metacall_Callback qabstractspinbox_metacall_callback = nullptr;
    QAbstractSpinBox_SizeHint_Callback qabstractspinbox_sizehint_callback = nullptr;
    QAbstractSpinBox_MinimumSizeHint_Callback qabstractspinbox_minimumsizehint_callback = nullptr;
    QAbstractSpinBox_Event_Callback qabstractspinbox_event_callback = nullptr;
    QAbstractSpinBox_InputMethodQuery_Callback qabstractspinbox_inputmethodquery_callback = nullptr;
    QAbstractSpinBox_Validate_Callback qabstractspinbox_validate_callback = nullptr;
    QAbstractSpinBox_Fixup_Callback qabstractspinbox_fixup_callback = nullptr;
    QAbstractSpinBox_StepBy_Callback qabstractspinbox_stepby_callback = nullptr;
    QAbstractSpinBox_Clear_Callback qabstractspinbox_clear_callback = nullptr;
    QAbstractSpinBox_ResizeEvent_Callback qabstractspinbox_resizeevent_callback = nullptr;
    QAbstractSpinBox_KeyPressEvent_Callback qabstractspinbox_keypressevent_callback = nullptr;
    QAbstractSpinBox_KeyReleaseEvent_Callback qabstractspinbox_keyreleaseevent_callback = nullptr;
    QAbstractSpinBox_WheelEvent_Callback qabstractspinbox_wheelevent_callback = nullptr;
    QAbstractSpinBox_FocusInEvent_Callback qabstractspinbox_focusinevent_callback = nullptr;
    QAbstractSpinBox_FocusOutEvent_Callback qabstractspinbox_focusoutevent_callback = nullptr;
    QAbstractSpinBox_ContextMenuEvent_Callback qabstractspinbox_contextmenuevent_callback = nullptr;
    QAbstractSpinBox_ChangeEvent_Callback qabstractspinbox_changeevent_callback = nullptr;
    QAbstractSpinBox_CloseEvent_Callback qabstractspinbox_closeevent_callback = nullptr;
    QAbstractSpinBox_HideEvent_Callback qabstractspinbox_hideevent_callback = nullptr;
    QAbstractSpinBox_MousePressEvent_Callback qabstractspinbox_mousepressevent_callback = nullptr;
    QAbstractSpinBox_MouseReleaseEvent_Callback qabstractspinbox_mousereleaseevent_callback = nullptr;
    QAbstractSpinBox_MouseMoveEvent_Callback qabstractspinbox_mousemoveevent_callback = nullptr;
    QAbstractSpinBox_TimerEvent_Callback qabstractspinbox_timerevent_callback = nullptr;
    QAbstractSpinBox_PaintEvent_Callback qabstractspinbox_paintevent_callback = nullptr;
    QAbstractSpinBox_ShowEvent_Callback qabstractspinbox_showevent_callback = nullptr;
    QAbstractSpinBox_InitStyleOption_Callback qabstractspinbox_initstyleoption_callback = nullptr;
    QAbstractSpinBox_StepEnabled_Callback qabstractspinbox_stepenabled_callback = nullptr;
    QAbstractSpinBox_DevType_Callback qabstractspinbox_devtype_callback = nullptr;
    QAbstractSpinBox_SetVisible_Callback qabstractspinbox_setvisible_callback = nullptr;
    QAbstractSpinBox_HeightForWidth_Callback qabstractspinbox_heightforwidth_callback = nullptr;
    QAbstractSpinBox_HasHeightForWidth_Callback qabstractspinbox_hasheightforwidth_callback = nullptr;
    QAbstractSpinBox_PaintEngine_Callback qabstractspinbox_paintengine_callback = nullptr;
    QAbstractSpinBox_MouseDoubleClickEvent_Callback qabstractspinbox_mousedoubleclickevent_callback = nullptr;
    QAbstractSpinBox_EnterEvent_Callback qabstractspinbox_enterevent_callback = nullptr;
    QAbstractSpinBox_LeaveEvent_Callback qabstractspinbox_leaveevent_callback = nullptr;
    QAbstractSpinBox_MoveEvent_Callback qabstractspinbox_moveevent_callback = nullptr;
    QAbstractSpinBox_TabletEvent_Callback qabstractspinbox_tabletevent_callback = nullptr;
    QAbstractSpinBox_ActionEvent_Callback qabstractspinbox_actionevent_callback = nullptr;
    QAbstractSpinBox_DragEnterEvent_Callback qabstractspinbox_dragenterevent_callback = nullptr;
    QAbstractSpinBox_DragMoveEvent_Callback qabstractspinbox_dragmoveevent_callback = nullptr;
    QAbstractSpinBox_DragLeaveEvent_Callback qabstractspinbox_dragleaveevent_callback = nullptr;
    QAbstractSpinBox_DropEvent_Callback qabstractspinbox_dropevent_callback = nullptr;
    QAbstractSpinBox_NativeEvent_Callback qabstractspinbox_nativeevent_callback = nullptr;
    QAbstractSpinBox_Metric_Callback qabstractspinbox_metric_callback = nullptr;
    QAbstractSpinBox_InitPainter_Callback qabstractspinbox_initpainter_callback = nullptr;
    QAbstractSpinBox_Redirected_Callback qabstractspinbox_redirected_callback = nullptr;
    QAbstractSpinBox_SharedPainter_Callback qabstractspinbox_sharedpainter_callback = nullptr;
    QAbstractSpinBox_InputMethodEvent_Callback qabstractspinbox_inputmethodevent_callback = nullptr;
    QAbstractSpinBox_FocusNextPrevChild_Callback qabstractspinbox_focusnextprevchild_callback = nullptr;
    QAbstractSpinBox_EventFilter_Callback qabstractspinbox_eventfilter_callback = nullptr;
    QAbstractSpinBox_ChildEvent_Callback qabstractspinbox_childevent_callback = nullptr;
    QAbstractSpinBox_CustomEvent_Callback qabstractspinbox_customevent_callback = nullptr;
    QAbstractSpinBox_ConnectNotify_Callback qabstractspinbox_connectnotify_callback = nullptr;
    QAbstractSpinBox_DisconnectNotify_Callback qabstractspinbox_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QAbstractSpinBox {
        using QAbstractSpinBox::actionEvent;
        using QAbstractSpinBox::changeEvent;
        using QAbstractSpinBox::childEvent;
        using QAbstractSpinBox::closeEvent;
        using QAbstractSpinBox::connectNotify;
        using QAbstractSpinBox::contextMenuEvent;
        using QAbstractSpinBox::customEvent;
        using QAbstractSpinBox::disconnectNotify;
        using QAbstractSpinBox::dragEnterEvent;
        using QAbstractSpinBox::dragLeaveEvent;
        using QAbstractSpinBox::dragMoveEvent;
        using QAbstractSpinBox::dropEvent;
        using QAbstractSpinBox::enterEvent;
        using QAbstractSpinBox::focusInEvent;
        using QAbstractSpinBox::focusNextPrevChild;
        using QAbstractSpinBox::focusOutEvent;
        using QAbstractSpinBox::hideEvent;
        using QAbstractSpinBox::initPainter;
        using QAbstractSpinBox::initStyleOption;
        using QAbstractSpinBox::inputMethodEvent;
        using QAbstractSpinBox::keyPressEvent;
        using QAbstractSpinBox::keyReleaseEvent;
        using QAbstractSpinBox::leaveEvent;
        using QAbstractSpinBox::metric;
        using QAbstractSpinBox::mouseDoubleClickEvent;
        using QAbstractSpinBox::mouseMoveEvent;
        using QAbstractSpinBox::mousePressEvent;
        using QAbstractSpinBox::mouseReleaseEvent;
        using QAbstractSpinBox::moveEvent;
        using QAbstractSpinBox::nativeEvent;
        using QAbstractSpinBox::paintEvent;
        using QAbstractSpinBox::redirected;
        using QAbstractSpinBox::resizeEvent;
        using QAbstractSpinBox::sharedPainter;
        using QAbstractSpinBox::showEvent;
        using QAbstractSpinBox::stepEnabled;
        using QAbstractSpinBox::tabletEvent;
        using QAbstractSpinBox::timerEvent;
        using QAbstractSpinBox::wheelEvent;
    };

    VirtualQAbstractSpinBox(QWidget* parent) : QAbstractSpinBox(parent) {};
    VirtualQAbstractSpinBox() : QAbstractSpinBox() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qabstractspinbox_metaobject_callback) {
            QMetaObject* callback_ret = qabstractspinbox_metaobject_callback(this);
            return callback_ret;
        }
        return QAbstractSpinBox::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qabstractspinbox_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qabstractspinbox_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractSpinBox::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstractspinbox_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qabstractspinbox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAbstractSpinBox::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qabstractspinbox_sizehint_callback) {
            QSize* callback_ret = qabstractspinbox_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractSpinBox::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qabstractspinbox_minimumsizehint_callback) {
            QSize* callback_ret = qabstractspinbox_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractSpinBox::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qabstractspinbox_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qabstractspinbox_event_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractSpinBox::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qabstractspinbox_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qabstractspinbox_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractSpinBox::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QValidator::State validate(QString& input, int& pos) const override {
        if (qabstractspinbox_validate_callback) {
            auto input_ret = input;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray input_b = input_ret.toUtf8();
            auto input_str_len = input_b.length();
            const char* input_str = static_cast<const char*>(malloc(input_str_len + 1));
            memcpy((void*)input_str, input_b.data(), input_str_len);
            ((char*)input_str)[input_str_len] = '\0';
            const char* cbval1 = input_str;
            int* cbval2 = &pos;
            int callback_ret = qabstractspinbox_validate_callback(this, cbval1, cbval2);
            libqt_free(input_str);
            return static_cast<QValidator::State>(callback_ret);
        }
        return QAbstractSpinBox::validate(input, pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fixup(QString& input) const override {
        if (qabstractspinbox_fixup_callback) {
            auto input_ret = input;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray input_b = input_ret.toUtf8();
            auto input_str_len = input_b.length();
            const char* input_str = static_cast<const char*>(malloc(input_str_len + 1));
            memcpy((void*)input_str, input_b.data(), input_str_len);
            ((char*)input_str)[input_str_len] = '\0';
            const char* cbval1 = input_str;
            qabstractspinbox_fixup_callback(this, cbval1);
            libqt_free(input_str);
            return;
        }
        QAbstractSpinBox::fixup(input);
    }

    // Virtual method for C ABI access and custom callback
    virtual void stepBy(int steps) override {
        if (qabstractspinbox_stepby_callback) {
            int cbval1 = steps;
            qabstractspinbox_stepby_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::stepBy(steps);
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (qabstractspinbox_clear_callback) {
            qabstractspinbox_clear_callback(this);
            return;
        }
        QAbstractSpinBox::clear();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qabstractspinbox_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qabstractspinbox_resizeevent_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qabstractspinbox_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qabstractspinbox_keypressevent_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qabstractspinbox_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qabstractspinbox_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qabstractspinbox_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qabstractspinbox_wheelevent_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qabstractspinbox_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qabstractspinbox_focusinevent_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qabstractspinbox_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qabstractspinbox_focusoutevent_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qabstractspinbox_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qabstractspinbox_contextmenuevent_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qabstractspinbox_changeevent_callback) {
            QEvent* cbval1 = event;
            qabstractspinbox_changeevent_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qabstractspinbox_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qabstractspinbox_closeevent_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qabstractspinbox_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qabstractspinbox_hideevent_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qabstractspinbox_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qabstractspinbox_mousepressevent_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qabstractspinbox_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qabstractspinbox_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qabstractspinbox_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qabstractspinbox_mousemoveevent_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qabstractspinbox_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qabstractspinbox_timerevent_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qabstractspinbox_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qabstractspinbox_paintevent_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qabstractspinbox_showevent_callback) {
            QShowEvent* cbval1 = event;
            qabstractspinbox_showevent_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionSpinBox* option) const override {
        if (qabstractspinbox_initstyleoption_callback) {
            QStyleOptionSpinBox* cbval1 = option;
            qabstractspinbox_initstyleoption_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSpinBox::StepEnabled stepEnabled() const override {
        if (qabstractspinbox_stepenabled_callback) {
            int callback_ret = qabstractspinbox_stepenabled_callback(this);
            return static_cast<QAbstractSpinBox::StepEnabled>(callback_ret);
        }
        return QAbstractSpinBox::stepEnabled();
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qabstractspinbox_devtype_callback) {
            int callback_ret = qabstractspinbox_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QAbstractSpinBox::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qabstractspinbox_setvisible_callback) {
            bool cbval1 = visible;
            qabstractspinbox_setvisible_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qabstractspinbox_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qabstractspinbox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAbstractSpinBox::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qabstractspinbox_hasheightforwidth_callback) {
            bool callback_ret = qabstractspinbox_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QAbstractSpinBox::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qabstractspinbox_paintengine_callback) {
            QPaintEngine* callback_ret = qabstractspinbox_paintengine_callback(this);
            return callback_ret;
        }
        return QAbstractSpinBox::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qabstractspinbox_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qabstractspinbox_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qabstractspinbox_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qabstractspinbox_enterevent_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qabstractspinbox_leaveevent_callback) {
            QEvent* cbval1 = event;
            qabstractspinbox_leaveevent_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qabstractspinbox_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qabstractspinbox_moveevent_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qabstractspinbox_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qabstractspinbox_tabletevent_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qabstractspinbox_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qabstractspinbox_actionevent_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qabstractspinbox_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qabstractspinbox_dragenterevent_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qabstractspinbox_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qabstractspinbox_dragmoveevent_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qabstractspinbox_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qabstractspinbox_dragleaveevent_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qabstractspinbox_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qabstractspinbox_dropevent_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qabstractspinbox_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qabstractspinbox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QAbstractSpinBox::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qabstractspinbox_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qabstractspinbox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAbstractSpinBox::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qabstractspinbox_initpainter_callback) {
            QPainter* cbval1 = painter;
            qabstractspinbox_initpainter_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qabstractspinbox_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qabstractspinbox_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractSpinBox::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qabstractspinbox_sharedpainter_callback) {
            QPainter* callback_ret = qabstractspinbox_sharedpainter_callback(this);
            return callback_ret;
        }
        return QAbstractSpinBox::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qabstractspinbox_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qabstractspinbox_inputmethodevent_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qabstractspinbox_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qabstractspinbox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractSpinBox::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qabstractspinbox_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qabstractspinbox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAbstractSpinBox::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstractspinbox_childevent_callback) {
            QChildEvent* cbval1 = event;
            qabstractspinbox_childevent_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstractspinbox_customevent_callback) {
            QEvent* cbval1 = event;
            qabstractspinbox_customevent_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstractspinbox_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qabstractspinbox_connectnotify_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstractspinbox_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qabstractspinbox_disconnectnotify_callback(this, cbval1);
            return;
        }
        QAbstractSpinBox::disconnectNotify(signal);
    }

    // Friend functions
    friend void QAbstractSpinBox_SuperResizeEvent(QAbstractSpinBox* self, QResizeEvent* event);
    friend void QAbstractSpinBox_SuperKeyPressEvent(QAbstractSpinBox* self, QKeyEvent* event);
    friend void QAbstractSpinBox_SuperKeyReleaseEvent(QAbstractSpinBox* self, QKeyEvent* event);
    friend void QAbstractSpinBox_SuperWheelEvent(QAbstractSpinBox* self, QWheelEvent* event);
    friend void QAbstractSpinBox_SuperFocusInEvent(QAbstractSpinBox* self, QFocusEvent* event);
    friend void QAbstractSpinBox_SuperFocusOutEvent(QAbstractSpinBox* self, QFocusEvent* event);
    friend void QAbstractSpinBox_SuperContextMenuEvent(QAbstractSpinBox* self, QContextMenuEvent* event);
    friend void QAbstractSpinBox_SuperChangeEvent(QAbstractSpinBox* self, QEvent* event);
    friend void QAbstractSpinBox_SuperCloseEvent(QAbstractSpinBox* self, QCloseEvent* event);
    friend void QAbstractSpinBox_SuperHideEvent(QAbstractSpinBox* self, QHideEvent* event);
    friend void QAbstractSpinBox_SuperMousePressEvent(QAbstractSpinBox* self, QMouseEvent* event);
    friend void QAbstractSpinBox_SuperMouseReleaseEvent(QAbstractSpinBox* self, QMouseEvent* event);
    friend void QAbstractSpinBox_SuperMouseMoveEvent(QAbstractSpinBox* self, QMouseEvent* event);
    friend void QAbstractSpinBox_SuperTimerEvent(QAbstractSpinBox* self, QTimerEvent* event);
    friend void QAbstractSpinBox_SuperPaintEvent(QAbstractSpinBox* self, QPaintEvent* event);
    friend void QAbstractSpinBox_SuperShowEvent(QAbstractSpinBox* self, QShowEvent* event);
    friend void QAbstractSpinBox_SuperInitStyleOption(const QAbstractSpinBox* self, QStyleOptionSpinBox* option);
    friend int QAbstractSpinBox_SuperStepEnabled(const QAbstractSpinBox* self);
    friend void QAbstractSpinBox_SuperMouseDoubleClickEvent(QAbstractSpinBox* self, QMouseEvent* event);
    friend void QAbstractSpinBox_SuperEnterEvent(QAbstractSpinBox* self, QEnterEvent* event);
    friend void QAbstractSpinBox_SuperLeaveEvent(QAbstractSpinBox* self, QEvent* event);
    friend void QAbstractSpinBox_SuperMoveEvent(QAbstractSpinBox* self, QMoveEvent* event);
    friend void QAbstractSpinBox_SuperTabletEvent(QAbstractSpinBox* self, QTabletEvent* event);
    friend void QAbstractSpinBox_SuperActionEvent(QAbstractSpinBox* self, QActionEvent* event);
    friend void QAbstractSpinBox_SuperDragEnterEvent(QAbstractSpinBox* self, QDragEnterEvent* event);
    friend void QAbstractSpinBox_SuperDragMoveEvent(QAbstractSpinBox* self, QDragMoveEvent* event);
    friend void QAbstractSpinBox_SuperDragLeaveEvent(QAbstractSpinBox* self, QDragLeaveEvent* event);
    friend void QAbstractSpinBox_SuperDropEvent(QAbstractSpinBox* self, QDropEvent* event);
    friend bool QAbstractSpinBox_SuperNativeEvent(QAbstractSpinBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QAbstractSpinBox_SuperMetric(const QAbstractSpinBox* self, int param1);
    friend void QAbstractSpinBox_SuperInitPainter(const QAbstractSpinBox* self, QPainter* painter);
    friend QPaintDevice* QAbstractSpinBox_SuperRedirected(const QAbstractSpinBox* self, QPoint* offset);
    friend QPainter* QAbstractSpinBox_SuperSharedPainter(const QAbstractSpinBox* self);
    friend void QAbstractSpinBox_SuperInputMethodEvent(QAbstractSpinBox* self, QInputMethodEvent* param1);
    friend bool QAbstractSpinBox_SuperFocusNextPrevChild(QAbstractSpinBox* self, bool next);
    friend void QAbstractSpinBox_SuperChildEvent(QAbstractSpinBox* self, QChildEvent* event);
    friend void QAbstractSpinBox_SuperCustomEvent(QAbstractSpinBox* self, QEvent* event);
    friend void QAbstractSpinBox_SuperConnectNotify(QAbstractSpinBox* self, const QMetaMethod* signal);
    friend void QAbstractSpinBox_SuperDisconnectNotify(QAbstractSpinBox* self, const QMetaMethod* signal);
};

#endif
