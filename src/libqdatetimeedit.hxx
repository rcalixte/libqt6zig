#pragma once
#ifndef LIBQDATETIMEEDIT_HXX
#define LIBQDATETIMEEDIT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QDateTimeEdit
class VirtualQDateTimeEdit final : public QDateTimeEdit {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDateTimeEdit_MetaObject_Callback = QMetaObject* (*)(const QDateTimeEdit*);
    using QDateTimeEdit_Metacast_Callback = void* (*)(QDateTimeEdit*, const char*);
    using QDateTimeEdit_Metacall_Callback = int (*)(QDateTimeEdit*, int, int, void**);
    using QDateTimeEdit_SizeHint_Callback = QSize* (*)(const QDateTimeEdit*);
    using QDateTimeEdit_Clear_Callback = void (*)(QDateTimeEdit*);
    using QDateTimeEdit_StepBy_Callback = void (*)(QDateTimeEdit*, int);
    using QDateTimeEdit_Event_Callback = bool (*)(QDateTimeEdit*, QEvent*);
    using QDateTimeEdit_KeyPressEvent_Callback = void (*)(QDateTimeEdit*, QKeyEvent*);
    using QDateTimeEdit_WheelEvent_Callback = void (*)(QDateTimeEdit*, QWheelEvent*);
    using QDateTimeEdit_FocusInEvent_Callback = void (*)(QDateTimeEdit*, QFocusEvent*);
    using QDateTimeEdit_FocusNextPrevChild_Callback = bool (*)(QDateTimeEdit*, bool);
    using QDateTimeEdit_Validate_Callback = int (*)(const QDateTimeEdit*, const char*, int*);
    using QDateTimeEdit_Fixup_Callback = void (*)(const QDateTimeEdit*, const char*);
    using QDateTimeEdit_DateTimeFromText_Callback = QDateTime* (*)(const QDateTimeEdit*, const char*);
    using QDateTimeEdit_TextFromDateTime_Callback = const char* (*)(const QDateTimeEdit*, QDateTime*);
    using QDateTimeEdit_StepEnabled_Callback = int (*)(const QDateTimeEdit*);
    using QDateTimeEdit_MousePressEvent_Callback = void (*)(QDateTimeEdit*, QMouseEvent*);
    using QDateTimeEdit_PaintEvent_Callback = void (*)(QDateTimeEdit*, QPaintEvent*);
    using QDateTimeEdit_InitStyleOption_Callback = void (*)(const QDateTimeEdit*, QStyleOptionSpinBox*);
    using QDateTimeEdit_MinimumSizeHint_Callback = QSize* (*)(const QDateTimeEdit*);
    using QDateTimeEdit_InputMethodQuery_Callback = QVariant* (*)(const QDateTimeEdit*, int);
    using QDateTimeEdit_ResizeEvent_Callback = void (*)(QDateTimeEdit*, QResizeEvent*);
    using QDateTimeEdit_KeyReleaseEvent_Callback = void (*)(QDateTimeEdit*, QKeyEvent*);
    using QDateTimeEdit_FocusOutEvent_Callback = void (*)(QDateTimeEdit*, QFocusEvent*);
    using QDateTimeEdit_ContextMenuEvent_Callback = void (*)(QDateTimeEdit*, QContextMenuEvent*);
    using QDateTimeEdit_ChangeEvent_Callback = void (*)(QDateTimeEdit*, QEvent*);
    using QDateTimeEdit_CloseEvent_Callback = void (*)(QDateTimeEdit*, QCloseEvent*);
    using QDateTimeEdit_HideEvent_Callback = void (*)(QDateTimeEdit*, QHideEvent*);
    using QDateTimeEdit_MouseReleaseEvent_Callback = void (*)(QDateTimeEdit*, QMouseEvent*);
    using QDateTimeEdit_MouseMoveEvent_Callback = void (*)(QDateTimeEdit*, QMouseEvent*);
    using QDateTimeEdit_TimerEvent_Callback = void (*)(QDateTimeEdit*, QTimerEvent*);
    using QDateTimeEdit_ShowEvent_Callback = void (*)(QDateTimeEdit*, QShowEvent*);
    using QDateTimeEdit_DevType_Callback = int (*)(const QDateTimeEdit*);
    using QDateTimeEdit_SetVisible_Callback = void (*)(QDateTimeEdit*, bool);
    using QDateTimeEdit_HeightForWidth_Callback = int (*)(const QDateTimeEdit*, int);
    using QDateTimeEdit_HasHeightForWidth_Callback = bool (*)(const QDateTimeEdit*);
    using QDateTimeEdit_PaintEngine_Callback = QPaintEngine* (*)(const QDateTimeEdit*);
    using QDateTimeEdit_MouseDoubleClickEvent_Callback = void (*)(QDateTimeEdit*, QMouseEvent*);
    using QDateTimeEdit_EnterEvent_Callback = void (*)(QDateTimeEdit*, QEnterEvent*);
    using QDateTimeEdit_LeaveEvent_Callback = void (*)(QDateTimeEdit*, QEvent*);
    using QDateTimeEdit_MoveEvent_Callback = void (*)(QDateTimeEdit*, QMoveEvent*);
    using QDateTimeEdit_TabletEvent_Callback = void (*)(QDateTimeEdit*, QTabletEvent*);
    using QDateTimeEdit_ActionEvent_Callback = void (*)(QDateTimeEdit*, QActionEvent*);
    using QDateTimeEdit_DragEnterEvent_Callback = void (*)(QDateTimeEdit*, QDragEnterEvent*);
    using QDateTimeEdit_DragMoveEvent_Callback = void (*)(QDateTimeEdit*, QDragMoveEvent*);
    using QDateTimeEdit_DragLeaveEvent_Callback = void (*)(QDateTimeEdit*, QDragLeaveEvent*);
    using QDateTimeEdit_DropEvent_Callback = void (*)(QDateTimeEdit*, QDropEvent*);
    using QDateTimeEdit_NativeEvent_Callback = bool (*)(QDateTimeEdit*, libqt_string, void*, intptr_t*);
    using QDateTimeEdit_Metric_Callback = int (*)(const QDateTimeEdit*, int);
    using QDateTimeEdit_InitPainter_Callback = void (*)(const QDateTimeEdit*, QPainter*);
    using QDateTimeEdit_Redirected_Callback = QPaintDevice* (*)(const QDateTimeEdit*, QPoint*);
    using QDateTimeEdit_SharedPainter_Callback = QPainter* (*)(const QDateTimeEdit*);
    using QDateTimeEdit_InputMethodEvent_Callback = void (*)(QDateTimeEdit*, QInputMethodEvent*);
    using QDateTimeEdit_EventFilter_Callback = bool (*)(QDateTimeEdit*, QObject*, QEvent*);
    using QDateTimeEdit_ChildEvent_Callback = void (*)(QDateTimeEdit*, QChildEvent*);
    using QDateTimeEdit_CustomEvent_Callback = void (*)(QDateTimeEdit*, QEvent*);
    using QDateTimeEdit_ConnectNotify_Callback = void (*)(QDateTimeEdit*, QMetaMethod*);
    using QDateTimeEdit_DisconnectNotify_Callback = void (*)(QDateTimeEdit*, QMetaMethod*);
    using QDateTimeEdit::create;
    using QDateTimeEdit::destroy;
    using QDateTimeEdit::focusNextChild;
    using QDateTimeEdit::focusPreviousChild;
    using QDateTimeEdit::getDecodedMetricF;
    using QDateTimeEdit::isSignalConnected;
    using QDateTimeEdit::lineEdit;
    using QDateTimeEdit::receivers;
    using QDateTimeEdit::sender;
    using QDateTimeEdit::senderSignalIndex;
    using QDateTimeEdit::setLineEdit;
    using QDateTimeEdit::updateMicroFocus;

    // Instance callback storage
    QDateTimeEdit_MetaObject_Callback qdatetimeedit_metaobject_callback = nullptr;
    QDateTimeEdit_Metacast_Callback qdatetimeedit_metacast_callback = nullptr;
    QDateTimeEdit_Metacall_Callback qdatetimeedit_metacall_callback = nullptr;
    QDateTimeEdit_SizeHint_Callback qdatetimeedit_sizehint_callback = nullptr;
    QDateTimeEdit_Clear_Callback qdatetimeedit_clear_callback = nullptr;
    QDateTimeEdit_StepBy_Callback qdatetimeedit_stepby_callback = nullptr;
    QDateTimeEdit_Event_Callback qdatetimeedit_event_callback = nullptr;
    QDateTimeEdit_KeyPressEvent_Callback qdatetimeedit_keypressevent_callback = nullptr;
    QDateTimeEdit_WheelEvent_Callback qdatetimeedit_wheelevent_callback = nullptr;
    QDateTimeEdit_FocusInEvent_Callback qdatetimeedit_focusinevent_callback = nullptr;
    QDateTimeEdit_FocusNextPrevChild_Callback qdatetimeedit_focusnextprevchild_callback = nullptr;
    QDateTimeEdit_Validate_Callback qdatetimeedit_validate_callback = nullptr;
    QDateTimeEdit_Fixup_Callback qdatetimeedit_fixup_callback = nullptr;
    QDateTimeEdit_DateTimeFromText_Callback qdatetimeedit_datetimefromtext_callback = nullptr;
    QDateTimeEdit_TextFromDateTime_Callback qdatetimeedit_textfromdatetime_callback = nullptr;
    QDateTimeEdit_StepEnabled_Callback qdatetimeedit_stepenabled_callback = nullptr;
    QDateTimeEdit_MousePressEvent_Callback qdatetimeedit_mousepressevent_callback = nullptr;
    QDateTimeEdit_PaintEvent_Callback qdatetimeedit_paintevent_callback = nullptr;
    QDateTimeEdit_InitStyleOption_Callback qdatetimeedit_initstyleoption_callback = nullptr;
    QDateTimeEdit_MinimumSizeHint_Callback qdatetimeedit_minimumsizehint_callback = nullptr;
    QDateTimeEdit_InputMethodQuery_Callback qdatetimeedit_inputmethodquery_callback = nullptr;
    QDateTimeEdit_ResizeEvent_Callback qdatetimeedit_resizeevent_callback = nullptr;
    QDateTimeEdit_KeyReleaseEvent_Callback qdatetimeedit_keyreleaseevent_callback = nullptr;
    QDateTimeEdit_FocusOutEvent_Callback qdatetimeedit_focusoutevent_callback = nullptr;
    QDateTimeEdit_ContextMenuEvent_Callback qdatetimeedit_contextmenuevent_callback = nullptr;
    QDateTimeEdit_ChangeEvent_Callback qdatetimeedit_changeevent_callback = nullptr;
    QDateTimeEdit_CloseEvent_Callback qdatetimeedit_closeevent_callback = nullptr;
    QDateTimeEdit_HideEvent_Callback qdatetimeedit_hideevent_callback = nullptr;
    QDateTimeEdit_MouseReleaseEvent_Callback qdatetimeedit_mousereleaseevent_callback = nullptr;
    QDateTimeEdit_MouseMoveEvent_Callback qdatetimeedit_mousemoveevent_callback = nullptr;
    QDateTimeEdit_TimerEvent_Callback qdatetimeedit_timerevent_callback = nullptr;
    QDateTimeEdit_ShowEvent_Callback qdatetimeedit_showevent_callback = nullptr;
    QDateTimeEdit_DevType_Callback qdatetimeedit_devtype_callback = nullptr;
    QDateTimeEdit_SetVisible_Callback qdatetimeedit_setvisible_callback = nullptr;
    QDateTimeEdit_HeightForWidth_Callback qdatetimeedit_heightforwidth_callback = nullptr;
    QDateTimeEdit_HasHeightForWidth_Callback qdatetimeedit_hasheightforwidth_callback = nullptr;
    QDateTimeEdit_PaintEngine_Callback qdatetimeedit_paintengine_callback = nullptr;
    QDateTimeEdit_MouseDoubleClickEvent_Callback qdatetimeedit_mousedoubleclickevent_callback = nullptr;
    QDateTimeEdit_EnterEvent_Callback qdatetimeedit_enterevent_callback = nullptr;
    QDateTimeEdit_LeaveEvent_Callback qdatetimeedit_leaveevent_callback = nullptr;
    QDateTimeEdit_MoveEvent_Callback qdatetimeedit_moveevent_callback = nullptr;
    QDateTimeEdit_TabletEvent_Callback qdatetimeedit_tabletevent_callback = nullptr;
    QDateTimeEdit_ActionEvent_Callback qdatetimeedit_actionevent_callback = nullptr;
    QDateTimeEdit_DragEnterEvent_Callback qdatetimeedit_dragenterevent_callback = nullptr;
    QDateTimeEdit_DragMoveEvent_Callback qdatetimeedit_dragmoveevent_callback = nullptr;
    QDateTimeEdit_DragLeaveEvent_Callback qdatetimeedit_dragleaveevent_callback = nullptr;
    QDateTimeEdit_DropEvent_Callback qdatetimeedit_dropevent_callback = nullptr;
    QDateTimeEdit_NativeEvent_Callback qdatetimeedit_nativeevent_callback = nullptr;
    QDateTimeEdit_Metric_Callback qdatetimeedit_metric_callback = nullptr;
    QDateTimeEdit_InitPainter_Callback qdatetimeedit_initpainter_callback = nullptr;
    QDateTimeEdit_Redirected_Callback qdatetimeedit_redirected_callback = nullptr;
    QDateTimeEdit_SharedPainter_Callback qdatetimeedit_sharedpainter_callback = nullptr;
    QDateTimeEdit_InputMethodEvent_Callback qdatetimeedit_inputmethodevent_callback = nullptr;
    QDateTimeEdit_EventFilter_Callback qdatetimeedit_eventfilter_callback = nullptr;
    QDateTimeEdit_ChildEvent_Callback qdatetimeedit_childevent_callback = nullptr;
    QDateTimeEdit_CustomEvent_Callback qdatetimeedit_customevent_callback = nullptr;
    QDateTimeEdit_ConnectNotify_Callback qdatetimeedit_connectnotify_callback = nullptr;
    QDateTimeEdit_DisconnectNotify_Callback qdatetimeedit_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QDateTimeEdit {
        using QDateTimeEdit::actionEvent;
        using QDateTimeEdit::changeEvent;
        using QDateTimeEdit::childEvent;
        using QDateTimeEdit::closeEvent;
        using QDateTimeEdit::connectNotify;
        using QDateTimeEdit::contextMenuEvent;
        using QDateTimeEdit::customEvent;
        using QDateTimeEdit::dateTimeFromText;
        using QDateTimeEdit::disconnectNotify;
        using QDateTimeEdit::dragEnterEvent;
        using QDateTimeEdit::dragLeaveEvent;
        using QDateTimeEdit::dragMoveEvent;
        using QDateTimeEdit::dropEvent;
        using QDateTimeEdit::enterEvent;
        using QDateTimeEdit::fixup;
        using QDateTimeEdit::focusInEvent;
        using QDateTimeEdit::focusNextPrevChild;
        using QDateTimeEdit::focusOutEvent;
        using QDateTimeEdit::hideEvent;
        using QDateTimeEdit::initPainter;
        using QDateTimeEdit::initStyleOption;
        using QDateTimeEdit::inputMethodEvent;
        using QDateTimeEdit::keyPressEvent;
        using QDateTimeEdit::keyReleaseEvent;
        using QDateTimeEdit::leaveEvent;
        using QDateTimeEdit::metric;
        using QDateTimeEdit::mouseDoubleClickEvent;
        using QDateTimeEdit::mouseMoveEvent;
        using QDateTimeEdit::mousePressEvent;
        using QDateTimeEdit::mouseReleaseEvent;
        using QDateTimeEdit::moveEvent;
        using QDateTimeEdit::nativeEvent;
        using QDateTimeEdit::paintEvent;
        using QDateTimeEdit::redirected;
        using QDateTimeEdit::resizeEvent;
        using QDateTimeEdit::sharedPainter;
        using QDateTimeEdit::showEvent;
        using QDateTimeEdit::stepEnabled;
        using QDateTimeEdit::tabletEvent;
        using QDateTimeEdit::textFromDateTime;
        using QDateTimeEdit::timerEvent;
        using QDateTimeEdit::validate;
        using QDateTimeEdit::wheelEvent;
    };

    VirtualQDateTimeEdit(QWidget* parent) : QDateTimeEdit(parent) {};
    VirtualQDateTimeEdit() : QDateTimeEdit() {};
    VirtualQDateTimeEdit(const QDateTime& dt) : QDateTimeEdit(dt) {};
    VirtualQDateTimeEdit(QDate d) : QDateTimeEdit(d) {};
    VirtualQDateTimeEdit(QTime t) : QDateTimeEdit(t) {};
    VirtualQDateTimeEdit(const QDateTime& dt, QWidget* parent) : QDateTimeEdit(dt, parent) {};
    VirtualQDateTimeEdit(QDate d, QWidget* parent) : QDateTimeEdit(d, parent) {};
    VirtualQDateTimeEdit(QTime t, QWidget* parent) : QDateTimeEdit(t, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdatetimeedit_metaobject_callback) {
            QMetaObject* callback_ret = qdatetimeedit_metaobject_callback(this);
            return callback_ret;
        }
        return QDateTimeEdit::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdatetimeedit_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qdatetimeedit_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QDateTimeEdit::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdatetimeedit_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qdatetimeedit_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDateTimeEdit::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qdatetimeedit_sizehint_callback) {
            QSize* callback_ret = qdatetimeedit_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDateTimeEdit::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (qdatetimeedit_clear_callback) {
            qdatetimeedit_clear_callback(this);
            return;
        }
        QDateTimeEdit::clear();
    }

    // Virtual method for C ABI access and custom callback
    virtual void stepBy(int steps) override {
        if (qdatetimeedit_stepby_callback) {
            int cbval1 = steps;
            qdatetimeedit_stepby_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::stepBy(steps);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdatetimeedit_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qdatetimeedit_event_callback(this, cbval1);
            return callback_ret;
        }
        return QDateTimeEdit::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qdatetimeedit_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qdatetimeedit_keypressevent_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qdatetimeedit_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qdatetimeedit_wheelevent_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qdatetimeedit_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qdatetimeedit_focusinevent_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qdatetimeedit_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qdatetimeedit_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QDateTimeEdit::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual QValidator::State validate(QString& input, int& pos) const override {
        if (qdatetimeedit_validate_callback) {
            auto input_ret = input;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray input_b = input_ret.toUtf8();
            auto input_str_len = input_b.length();
            const char* input_str = static_cast<const char*>(malloc(input_str_len + 1));
            memcpy((void*)input_str, input_b.data(), input_str_len);
            ((char*)input_str)[input_str_len] = '\0';
            const char* cbval1 = input_str;
            int* cbval2 = &pos;
            int callback_ret = qdatetimeedit_validate_callback(this, cbval1, cbval2);
            libqt_free(input_str);
            return static_cast<QValidator::State>(callback_ret);
        }
        return QDateTimeEdit::validate(input, pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fixup(QString& input) const override {
        if (qdatetimeedit_fixup_callback) {
            auto input_ret = input;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray input_b = input_ret.toUtf8();
            auto input_str_len = input_b.length();
            const char* input_str = static_cast<const char*>(malloc(input_str_len + 1));
            memcpy((void*)input_str, input_b.data(), input_str_len);
            ((char*)input_str)[input_str_len] = '\0';
            const char* cbval1 = input_str;
            qdatetimeedit_fixup_callback(this, cbval1);
            libqt_free(input_str);
            return;
        }
        QDateTimeEdit::fixup(input);
    }

    // Virtual method for C ABI access and custom callback
    virtual QDateTime dateTimeFromText(const QString& text) const override {
        if (qdatetimeedit_datetimefromtext_callback) {
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            QDateTime* callback_ret = qdatetimeedit_datetimefromtext_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(text_str);
            return callback_ret_Value;
        }
        return QDateTimeEdit::dateTimeFromText(text);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString textFromDateTime(const QDateTime& dt) const override {
        if (qdatetimeedit_textfromdatetime_callback) {
            const QDateTime& dt_ret = dt;
            // Cast returned reference into pointer
            QDateTime* cbval1 = const_cast<QDateTime*>(&dt_ret);
            const char* callback_ret = qdatetimeedit_textfromdatetime_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QDateTimeEdit::textFromDateTime(dt);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSpinBox::StepEnabled stepEnabled() const override {
        if (qdatetimeedit_stepenabled_callback) {
            int callback_ret = qdatetimeedit_stepenabled_callback(this);
            return static_cast<QAbstractSpinBox::StepEnabled>(callback_ret);
        }
        return QDateTimeEdit::stepEnabled();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qdatetimeedit_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qdatetimeedit_mousepressevent_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qdatetimeedit_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qdatetimeedit_paintevent_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionSpinBox* option) const override {
        if (qdatetimeedit_initstyleoption_callback) {
            QStyleOptionSpinBox* cbval1 = option;
            qdatetimeedit_initstyleoption_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qdatetimeedit_minimumsizehint_callback) {
            QSize* callback_ret = qdatetimeedit_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDateTimeEdit::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qdatetimeedit_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qdatetimeedit_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDateTimeEdit::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qdatetimeedit_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qdatetimeedit_resizeevent_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qdatetimeedit_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qdatetimeedit_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qdatetimeedit_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qdatetimeedit_focusoutevent_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qdatetimeedit_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qdatetimeedit_contextmenuevent_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qdatetimeedit_changeevent_callback) {
            QEvent* cbval1 = event;
            qdatetimeedit_changeevent_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qdatetimeedit_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qdatetimeedit_closeevent_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qdatetimeedit_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qdatetimeedit_hideevent_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qdatetimeedit_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qdatetimeedit_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qdatetimeedit_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qdatetimeedit_mousemoveevent_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdatetimeedit_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qdatetimeedit_timerevent_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qdatetimeedit_showevent_callback) {
            QShowEvent* cbval1 = event;
            qdatetimeedit_showevent_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qdatetimeedit_devtype_callback) {
            int callback_ret = qdatetimeedit_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QDateTimeEdit::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qdatetimeedit_setvisible_callback) {
            bool cbval1 = visible;
            qdatetimeedit_setvisible_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qdatetimeedit_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qdatetimeedit_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDateTimeEdit::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qdatetimeedit_hasheightforwidth_callback) {
            bool callback_ret = qdatetimeedit_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QDateTimeEdit::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qdatetimeedit_paintengine_callback) {
            QPaintEngine* callback_ret = qdatetimeedit_paintengine_callback(this);
            return callback_ret;
        }
        return QDateTimeEdit::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qdatetimeedit_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qdatetimeedit_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qdatetimeedit_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qdatetimeedit_enterevent_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qdatetimeedit_leaveevent_callback) {
            QEvent* cbval1 = event;
            qdatetimeedit_leaveevent_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qdatetimeedit_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qdatetimeedit_moveevent_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qdatetimeedit_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qdatetimeedit_tabletevent_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qdatetimeedit_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qdatetimeedit_actionevent_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qdatetimeedit_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qdatetimeedit_dragenterevent_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qdatetimeedit_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qdatetimeedit_dragmoveevent_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qdatetimeedit_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qdatetimeedit_dragleaveevent_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qdatetimeedit_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qdatetimeedit_dropevent_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qdatetimeedit_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qdatetimeedit_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QDateTimeEdit::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qdatetimeedit_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qdatetimeedit_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDateTimeEdit::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qdatetimeedit_initpainter_callback) {
            QPainter* cbval1 = painter;
            qdatetimeedit_initpainter_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qdatetimeedit_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qdatetimeedit_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QDateTimeEdit::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qdatetimeedit_sharedpainter_callback) {
            QPainter* callback_ret = qdatetimeedit_sharedpainter_callback(this);
            return callback_ret;
        }
        return QDateTimeEdit::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qdatetimeedit_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qdatetimeedit_inputmethodevent_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdatetimeedit_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qdatetimeedit_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDateTimeEdit::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdatetimeedit_childevent_callback) {
            QChildEvent* cbval1 = event;
            qdatetimeedit_childevent_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdatetimeedit_customevent_callback) {
            QEvent* cbval1 = event;
            qdatetimeedit_customevent_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdatetimeedit_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdatetimeedit_connectnotify_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdatetimeedit_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdatetimeedit_disconnectnotify_callback(this, cbval1);
            return;
        }
        QDateTimeEdit::disconnectNotify(signal);
    }

    // Friend functions
    friend void QDateTimeEdit_SuperKeyPressEvent(QDateTimeEdit* self, QKeyEvent* event);
    friend void QDateTimeEdit_SuperWheelEvent(QDateTimeEdit* self, QWheelEvent* event);
    friend void QDateTimeEdit_SuperFocusInEvent(QDateTimeEdit* self, QFocusEvent* event);
    friend bool QDateTimeEdit_SuperFocusNextPrevChild(QDateTimeEdit* self, bool next);
    friend int QDateTimeEdit_SuperValidate(const QDateTimeEdit* self, libqt_string input, int* pos);
    friend void QDateTimeEdit_SuperFixup(const QDateTimeEdit* self, libqt_string input);
    friend QDateTime* QDateTimeEdit_SuperDateTimeFromText(const QDateTimeEdit* self, const libqt_string text);
    friend libqt_string QDateTimeEdit_SuperTextFromDateTime(const QDateTimeEdit* self, const QDateTime* dt);
    friend int QDateTimeEdit_SuperStepEnabled(const QDateTimeEdit* self);
    friend void QDateTimeEdit_SuperMousePressEvent(QDateTimeEdit* self, QMouseEvent* event);
    friend void QDateTimeEdit_SuperPaintEvent(QDateTimeEdit* self, QPaintEvent* event);
    friend void QDateTimeEdit_SuperInitStyleOption(const QDateTimeEdit* self, QStyleOptionSpinBox* option);
    friend void QDateTimeEdit_SuperResizeEvent(QDateTimeEdit* self, QResizeEvent* event);
    friend void QDateTimeEdit_SuperKeyReleaseEvent(QDateTimeEdit* self, QKeyEvent* event);
    friend void QDateTimeEdit_SuperFocusOutEvent(QDateTimeEdit* self, QFocusEvent* event);
    friend void QDateTimeEdit_SuperContextMenuEvent(QDateTimeEdit* self, QContextMenuEvent* event);
    friend void QDateTimeEdit_SuperChangeEvent(QDateTimeEdit* self, QEvent* event);
    friend void QDateTimeEdit_SuperCloseEvent(QDateTimeEdit* self, QCloseEvent* event);
    friend void QDateTimeEdit_SuperHideEvent(QDateTimeEdit* self, QHideEvent* event);
    friend void QDateTimeEdit_SuperMouseReleaseEvent(QDateTimeEdit* self, QMouseEvent* event);
    friend void QDateTimeEdit_SuperMouseMoveEvent(QDateTimeEdit* self, QMouseEvent* event);
    friend void QDateTimeEdit_SuperTimerEvent(QDateTimeEdit* self, QTimerEvent* event);
    friend void QDateTimeEdit_SuperShowEvent(QDateTimeEdit* self, QShowEvent* event);
    friend void QDateTimeEdit_SuperMouseDoubleClickEvent(QDateTimeEdit* self, QMouseEvent* event);
    friend void QDateTimeEdit_SuperEnterEvent(QDateTimeEdit* self, QEnterEvent* event);
    friend void QDateTimeEdit_SuperLeaveEvent(QDateTimeEdit* self, QEvent* event);
    friend void QDateTimeEdit_SuperMoveEvent(QDateTimeEdit* self, QMoveEvent* event);
    friend void QDateTimeEdit_SuperTabletEvent(QDateTimeEdit* self, QTabletEvent* event);
    friend void QDateTimeEdit_SuperActionEvent(QDateTimeEdit* self, QActionEvent* event);
    friend void QDateTimeEdit_SuperDragEnterEvent(QDateTimeEdit* self, QDragEnterEvent* event);
    friend void QDateTimeEdit_SuperDragMoveEvent(QDateTimeEdit* self, QDragMoveEvent* event);
    friend void QDateTimeEdit_SuperDragLeaveEvent(QDateTimeEdit* self, QDragLeaveEvent* event);
    friend void QDateTimeEdit_SuperDropEvent(QDateTimeEdit* self, QDropEvent* event);
    friend bool QDateTimeEdit_SuperNativeEvent(QDateTimeEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QDateTimeEdit_SuperMetric(const QDateTimeEdit* self, int param1);
    friend void QDateTimeEdit_SuperInitPainter(const QDateTimeEdit* self, QPainter* painter);
    friend QPaintDevice* QDateTimeEdit_SuperRedirected(const QDateTimeEdit* self, QPoint* offset);
    friend QPainter* QDateTimeEdit_SuperSharedPainter(const QDateTimeEdit* self);
    friend void QDateTimeEdit_SuperInputMethodEvent(QDateTimeEdit* self, QInputMethodEvent* param1);
    friend void QDateTimeEdit_SuperChildEvent(QDateTimeEdit* self, QChildEvent* event);
    friend void QDateTimeEdit_SuperCustomEvent(QDateTimeEdit* self, QEvent* event);
    friend void QDateTimeEdit_SuperConnectNotify(QDateTimeEdit* self, const QMetaMethod* signal);
    friend void QDateTimeEdit_SuperDisconnectNotify(QDateTimeEdit* self, const QMetaMethod* signal);
};

// This class is a subclass of QTimeEdit
class VirtualQTimeEdit final : public QTimeEdit {
  public:
    // Virtual class public types (including callbacks and access types)
    using QTimeEdit_MetaObject_Callback = QMetaObject* (*)(const QTimeEdit*);
    using QTimeEdit_Metacast_Callback = void* (*)(QTimeEdit*, const char*);
    using QTimeEdit_Metacall_Callback = int (*)(QTimeEdit*, int, int, void**);
    using QTimeEdit_SizeHint_Callback = QSize* (*)(const QTimeEdit*);
    using QTimeEdit_Clear_Callback = void (*)(QTimeEdit*);
    using QTimeEdit_StepBy_Callback = void (*)(QTimeEdit*, int);
    using QTimeEdit_Event_Callback = bool (*)(QTimeEdit*, QEvent*);
    using QTimeEdit_KeyPressEvent_Callback = void (*)(QTimeEdit*, QKeyEvent*);
    using QTimeEdit_WheelEvent_Callback = void (*)(QTimeEdit*, QWheelEvent*);
    using QTimeEdit_FocusInEvent_Callback = void (*)(QTimeEdit*, QFocusEvent*);
    using QTimeEdit_FocusNextPrevChild_Callback = bool (*)(QTimeEdit*, bool);
    using QTimeEdit_Validate_Callback = int (*)(const QTimeEdit*, const char*, int*);
    using QTimeEdit_Fixup_Callback = void (*)(const QTimeEdit*, const char*);
    using QTimeEdit_DateTimeFromText_Callback = QDateTime* (*)(const QTimeEdit*, const char*);
    using QTimeEdit_TextFromDateTime_Callback = const char* (*)(const QTimeEdit*, QDateTime*);
    using QTimeEdit_StepEnabled_Callback = int (*)(const QTimeEdit*);
    using QTimeEdit_MousePressEvent_Callback = void (*)(QTimeEdit*, QMouseEvent*);
    using QTimeEdit_PaintEvent_Callback = void (*)(QTimeEdit*, QPaintEvent*);
    using QTimeEdit_InitStyleOption_Callback = void (*)(const QTimeEdit*, QStyleOptionSpinBox*);
    using QTimeEdit_MinimumSizeHint_Callback = QSize* (*)(const QTimeEdit*);
    using QTimeEdit_InputMethodQuery_Callback = QVariant* (*)(const QTimeEdit*, int);
    using QTimeEdit_ResizeEvent_Callback = void (*)(QTimeEdit*, QResizeEvent*);
    using QTimeEdit_KeyReleaseEvent_Callback = void (*)(QTimeEdit*, QKeyEvent*);
    using QTimeEdit_FocusOutEvent_Callback = void (*)(QTimeEdit*, QFocusEvent*);
    using QTimeEdit_ContextMenuEvent_Callback = void (*)(QTimeEdit*, QContextMenuEvent*);
    using QTimeEdit_ChangeEvent_Callback = void (*)(QTimeEdit*, QEvent*);
    using QTimeEdit_CloseEvent_Callback = void (*)(QTimeEdit*, QCloseEvent*);
    using QTimeEdit_HideEvent_Callback = void (*)(QTimeEdit*, QHideEvent*);
    using QTimeEdit_MouseReleaseEvent_Callback = void (*)(QTimeEdit*, QMouseEvent*);
    using QTimeEdit_MouseMoveEvent_Callback = void (*)(QTimeEdit*, QMouseEvent*);
    using QTimeEdit_TimerEvent_Callback = void (*)(QTimeEdit*, QTimerEvent*);
    using QTimeEdit_ShowEvent_Callback = void (*)(QTimeEdit*, QShowEvent*);
    using QTimeEdit_DevType_Callback = int (*)(const QTimeEdit*);
    using QTimeEdit_SetVisible_Callback = void (*)(QTimeEdit*, bool);
    using QTimeEdit_HeightForWidth_Callback = int (*)(const QTimeEdit*, int);
    using QTimeEdit_HasHeightForWidth_Callback = bool (*)(const QTimeEdit*);
    using QTimeEdit_PaintEngine_Callback = QPaintEngine* (*)(const QTimeEdit*);
    using QTimeEdit_MouseDoubleClickEvent_Callback = void (*)(QTimeEdit*, QMouseEvent*);
    using QTimeEdit_EnterEvent_Callback = void (*)(QTimeEdit*, QEnterEvent*);
    using QTimeEdit_LeaveEvent_Callback = void (*)(QTimeEdit*, QEvent*);
    using QTimeEdit_MoveEvent_Callback = void (*)(QTimeEdit*, QMoveEvent*);
    using QTimeEdit_TabletEvent_Callback = void (*)(QTimeEdit*, QTabletEvent*);
    using QTimeEdit_ActionEvent_Callback = void (*)(QTimeEdit*, QActionEvent*);
    using QTimeEdit_DragEnterEvent_Callback = void (*)(QTimeEdit*, QDragEnterEvent*);
    using QTimeEdit_DragMoveEvent_Callback = void (*)(QTimeEdit*, QDragMoveEvent*);
    using QTimeEdit_DragLeaveEvent_Callback = void (*)(QTimeEdit*, QDragLeaveEvent*);
    using QTimeEdit_DropEvent_Callback = void (*)(QTimeEdit*, QDropEvent*);
    using QTimeEdit_NativeEvent_Callback = bool (*)(QTimeEdit*, libqt_string, void*, intptr_t*);
    using QTimeEdit_Metric_Callback = int (*)(const QTimeEdit*, int);
    using QTimeEdit_InitPainter_Callback = void (*)(const QTimeEdit*, QPainter*);
    using QTimeEdit_Redirected_Callback = QPaintDevice* (*)(const QTimeEdit*, QPoint*);
    using QTimeEdit_SharedPainter_Callback = QPainter* (*)(const QTimeEdit*);
    using QTimeEdit_InputMethodEvent_Callback = void (*)(QTimeEdit*, QInputMethodEvent*);
    using QTimeEdit_EventFilter_Callback = bool (*)(QTimeEdit*, QObject*, QEvent*);
    using QTimeEdit_ChildEvent_Callback = void (*)(QTimeEdit*, QChildEvent*);
    using QTimeEdit_CustomEvent_Callback = void (*)(QTimeEdit*, QEvent*);
    using QTimeEdit_ConnectNotify_Callback = void (*)(QTimeEdit*, QMetaMethod*);
    using QTimeEdit_DisconnectNotify_Callback = void (*)(QTimeEdit*, QMetaMethod*);
    using QTimeEdit::create;
    using QTimeEdit::destroy;
    using QTimeEdit::focusNextChild;
    using QTimeEdit::focusPreviousChild;
    using QTimeEdit::getDecodedMetricF;
    using QTimeEdit::isSignalConnected;
    using QTimeEdit::lineEdit;
    using QTimeEdit::receivers;
    using QTimeEdit::sender;
    using QTimeEdit::senderSignalIndex;
    using QTimeEdit::setLineEdit;
    using QTimeEdit::updateMicroFocus;

    // Instance callback storage
    QTimeEdit_MetaObject_Callback qtimeedit_metaobject_callback = nullptr;
    QTimeEdit_Metacast_Callback qtimeedit_metacast_callback = nullptr;
    QTimeEdit_Metacall_Callback qtimeedit_metacall_callback = nullptr;
    QTimeEdit_SizeHint_Callback qtimeedit_sizehint_callback = nullptr;
    QTimeEdit_Clear_Callback qtimeedit_clear_callback = nullptr;
    QTimeEdit_StepBy_Callback qtimeedit_stepby_callback = nullptr;
    QTimeEdit_Event_Callback qtimeedit_event_callback = nullptr;
    QTimeEdit_KeyPressEvent_Callback qtimeedit_keypressevent_callback = nullptr;
    QTimeEdit_WheelEvent_Callback qtimeedit_wheelevent_callback = nullptr;
    QTimeEdit_FocusInEvent_Callback qtimeedit_focusinevent_callback = nullptr;
    QTimeEdit_FocusNextPrevChild_Callback qtimeedit_focusnextprevchild_callback = nullptr;
    QTimeEdit_Validate_Callback qtimeedit_validate_callback = nullptr;
    QTimeEdit_Fixup_Callback qtimeedit_fixup_callback = nullptr;
    QTimeEdit_DateTimeFromText_Callback qtimeedit_datetimefromtext_callback = nullptr;
    QTimeEdit_TextFromDateTime_Callback qtimeedit_textfromdatetime_callback = nullptr;
    QTimeEdit_StepEnabled_Callback qtimeedit_stepenabled_callback = nullptr;
    QTimeEdit_MousePressEvent_Callback qtimeedit_mousepressevent_callback = nullptr;
    QTimeEdit_PaintEvent_Callback qtimeedit_paintevent_callback = nullptr;
    QTimeEdit_InitStyleOption_Callback qtimeedit_initstyleoption_callback = nullptr;
    QTimeEdit_MinimumSizeHint_Callback qtimeedit_minimumsizehint_callback = nullptr;
    QTimeEdit_InputMethodQuery_Callback qtimeedit_inputmethodquery_callback = nullptr;
    QTimeEdit_ResizeEvent_Callback qtimeedit_resizeevent_callback = nullptr;
    QTimeEdit_KeyReleaseEvent_Callback qtimeedit_keyreleaseevent_callback = nullptr;
    QTimeEdit_FocusOutEvent_Callback qtimeedit_focusoutevent_callback = nullptr;
    QTimeEdit_ContextMenuEvent_Callback qtimeedit_contextmenuevent_callback = nullptr;
    QTimeEdit_ChangeEvent_Callback qtimeedit_changeevent_callback = nullptr;
    QTimeEdit_CloseEvent_Callback qtimeedit_closeevent_callback = nullptr;
    QTimeEdit_HideEvent_Callback qtimeedit_hideevent_callback = nullptr;
    QTimeEdit_MouseReleaseEvent_Callback qtimeedit_mousereleaseevent_callback = nullptr;
    QTimeEdit_MouseMoveEvent_Callback qtimeedit_mousemoveevent_callback = nullptr;
    QTimeEdit_TimerEvent_Callback qtimeedit_timerevent_callback = nullptr;
    QTimeEdit_ShowEvent_Callback qtimeedit_showevent_callback = nullptr;
    QTimeEdit_DevType_Callback qtimeedit_devtype_callback = nullptr;
    QTimeEdit_SetVisible_Callback qtimeedit_setvisible_callback = nullptr;
    QTimeEdit_HeightForWidth_Callback qtimeedit_heightforwidth_callback = nullptr;
    QTimeEdit_HasHeightForWidth_Callback qtimeedit_hasheightforwidth_callback = nullptr;
    QTimeEdit_PaintEngine_Callback qtimeedit_paintengine_callback = nullptr;
    QTimeEdit_MouseDoubleClickEvent_Callback qtimeedit_mousedoubleclickevent_callback = nullptr;
    QTimeEdit_EnterEvent_Callback qtimeedit_enterevent_callback = nullptr;
    QTimeEdit_LeaveEvent_Callback qtimeedit_leaveevent_callback = nullptr;
    QTimeEdit_MoveEvent_Callback qtimeedit_moveevent_callback = nullptr;
    QTimeEdit_TabletEvent_Callback qtimeedit_tabletevent_callback = nullptr;
    QTimeEdit_ActionEvent_Callback qtimeedit_actionevent_callback = nullptr;
    QTimeEdit_DragEnterEvent_Callback qtimeedit_dragenterevent_callback = nullptr;
    QTimeEdit_DragMoveEvent_Callback qtimeedit_dragmoveevent_callback = nullptr;
    QTimeEdit_DragLeaveEvent_Callback qtimeedit_dragleaveevent_callback = nullptr;
    QTimeEdit_DropEvent_Callback qtimeedit_dropevent_callback = nullptr;
    QTimeEdit_NativeEvent_Callback qtimeedit_nativeevent_callback = nullptr;
    QTimeEdit_Metric_Callback qtimeedit_metric_callback = nullptr;
    QTimeEdit_InitPainter_Callback qtimeedit_initpainter_callback = nullptr;
    QTimeEdit_Redirected_Callback qtimeedit_redirected_callback = nullptr;
    QTimeEdit_SharedPainter_Callback qtimeedit_sharedpainter_callback = nullptr;
    QTimeEdit_InputMethodEvent_Callback qtimeedit_inputmethodevent_callback = nullptr;
    QTimeEdit_EventFilter_Callback qtimeedit_eventfilter_callback = nullptr;
    QTimeEdit_ChildEvent_Callback qtimeedit_childevent_callback = nullptr;
    QTimeEdit_CustomEvent_Callback qtimeedit_customevent_callback = nullptr;
    QTimeEdit_ConnectNotify_Callback qtimeedit_connectnotify_callback = nullptr;
    QTimeEdit_DisconnectNotify_Callback qtimeedit_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QTimeEdit {
        using QTimeEdit::actionEvent;
        using QTimeEdit::changeEvent;
        using QTimeEdit::childEvent;
        using QTimeEdit::closeEvent;
        using QTimeEdit::connectNotify;
        using QTimeEdit::contextMenuEvent;
        using QTimeEdit::customEvent;
        using QTimeEdit::dateTimeFromText;
        using QTimeEdit::disconnectNotify;
        using QTimeEdit::dragEnterEvent;
        using QTimeEdit::dragLeaveEvent;
        using QTimeEdit::dragMoveEvent;
        using QTimeEdit::dropEvent;
        using QTimeEdit::enterEvent;
        using QTimeEdit::fixup;
        using QTimeEdit::focusInEvent;
        using QTimeEdit::focusNextPrevChild;
        using QTimeEdit::focusOutEvent;
        using QTimeEdit::hideEvent;
        using QTimeEdit::initPainter;
        using QTimeEdit::initStyleOption;
        using QTimeEdit::inputMethodEvent;
        using QTimeEdit::keyPressEvent;
        using QTimeEdit::keyReleaseEvent;
        using QTimeEdit::leaveEvent;
        using QTimeEdit::metric;
        using QTimeEdit::mouseDoubleClickEvent;
        using QTimeEdit::mouseMoveEvent;
        using QTimeEdit::mousePressEvent;
        using QTimeEdit::mouseReleaseEvent;
        using QTimeEdit::moveEvent;
        using QTimeEdit::nativeEvent;
        using QTimeEdit::paintEvent;
        using QTimeEdit::redirected;
        using QTimeEdit::resizeEvent;
        using QTimeEdit::sharedPainter;
        using QTimeEdit::showEvent;
        using QTimeEdit::stepEnabled;
        using QTimeEdit::tabletEvent;
        using QTimeEdit::textFromDateTime;
        using QTimeEdit::timerEvent;
        using QTimeEdit::validate;
        using QTimeEdit::wheelEvent;
    };

    VirtualQTimeEdit(QWidget* parent) : QTimeEdit(parent) {};
    VirtualQTimeEdit() : QTimeEdit() {};
    VirtualQTimeEdit(QTime time) : QTimeEdit(time) {};
    VirtualQTimeEdit(QTime time, QWidget* parent) : QTimeEdit(time, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtimeedit_metaobject_callback) {
            QMetaObject* callback_ret = qtimeedit_metaobject_callback(this);
            return callback_ret;
        }
        return QTimeEdit::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtimeedit_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qtimeedit_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QTimeEdit::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtimeedit_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qtimeedit_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTimeEdit::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qtimeedit_sizehint_callback) {
            QSize* callback_ret = qtimeedit_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTimeEdit::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (qtimeedit_clear_callback) {
            qtimeedit_clear_callback(this);
            return;
        }
        QTimeEdit::clear();
    }

    // Virtual method for C ABI access and custom callback
    virtual void stepBy(int steps) override {
        if (qtimeedit_stepby_callback) {
            int cbval1 = steps;
            qtimeedit_stepby_callback(this, cbval1);
            return;
        }
        QTimeEdit::stepBy(steps);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtimeedit_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qtimeedit_event_callback(this, cbval1);
            return callback_ret;
        }
        return QTimeEdit::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qtimeedit_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qtimeedit_keypressevent_callback(this, cbval1);
            return;
        }
        QTimeEdit::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qtimeedit_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qtimeedit_wheelevent_callback(this, cbval1);
            return;
        }
        QTimeEdit::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qtimeedit_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qtimeedit_focusinevent_callback(this, cbval1);
            return;
        }
        QTimeEdit::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qtimeedit_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qtimeedit_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QTimeEdit::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual QValidator::State validate(QString& input, int& pos) const override {
        if (qtimeedit_validate_callback) {
            auto input_ret = input;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray input_b = input_ret.toUtf8();
            auto input_str_len = input_b.length();
            const char* input_str = static_cast<const char*>(malloc(input_str_len + 1));
            memcpy((void*)input_str, input_b.data(), input_str_len);
            ((char*)input_str)[input_str_len] = '\0';
            const char* cbval1 = input_str;
            int* cbval2 = &pos;
            int callback_ret = qtimeedit_validate_callback(this, cbval1, cbval2);
            libqt_free(input_str);
            return static_cast<QValidator::State>(callback_ret);
        }
        return QTimeEdit::validate(input, pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fixup(QString& input) const override {
        if (qtimeedit_fixup_callback) {
            auto input_ret = input;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray input_b = input_ret.toUtf8();
            auto input_str_len = input_b.length();
            const char* input_str = static_cast<const char*>(malloc(input_str_len + 1));
            memcpy((void*)input_str, input_b.data(), input_str_len);
            ((char*)input_str)[input_str_len] = '\0';
            const char* cbval1 = input_str;
            qtimeedit_fixup_callback(this, cbval1);
            libqt_free(input_str);
            return;
        }
        QTimeEdit::fixup(input);
    }

    // Virtual method for C ABI access and custom callback
    virtual QDateTime dateTimeFromText(const QString& text) const override {
        if (qtimeedit_datetimefromtext_callback) {
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            QDateTime* callback_ret = qtimeedit_datetimefromtext_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(text_str);
            return callback_ret_Value;
        }
        return QTimeEdit::dateTimeFromText(text);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString textFromDateTime(const QDateTime& dt) const override {
        if (qtimeedit_textfromdatetime_callback) {
            const QDateTime& dt_ret = dt;
            // Cast returned reference into pointer
            QDateTime* cbval1 = const_cast<QDateTime*>(&dt_ret);
            const char* callback_ret = qtimeedit_textfromdatetime_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QTimeEdit::textFromDateTime(dt);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSpinBox::StepEnabled stepEnabled() const override {
        if (qtimeedit_stepenabled_callback) {
            int callback_ret = qtimeedit_stepenabled_callback(this);
            return static_cast<QAbstractSpinBox::StepEnabled>(callback_ret);
        }
        return QTimeEdit::stepEnabled();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qtimeedit_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qtimeedit_mousepressevent_callback(this, cbval1);
            return;
        }
        QTimeEdit::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qtimeedit_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qtimeedit_paintevent_callback(this, cbval1);
            return;
        }
        QTimeEdit::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionSpinBox* option) const override {
        if (qtimeedit_initstyleoption_callback) {
            QStyleOptionSpinBox* cbval1 = option;
            qtimeedit_initstyleoption_callback(this, cbval1);
            return;
        }
        QTimeEdit::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qtimeedit_minimumsizehint_callback) {
            QSize* callback_ret = qtimeedit_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTimeEdit::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qtimeedit_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qtimeedit_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTimeEdit::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qtimeedit_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qtimeedit_resizeevent_callback(this, cbval1);
            return;
        }
        QTimeEdit::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qtimeedit_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qtimeedit_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QTimeEdit::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qtimeedit_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qtimeedit_focusoutevent_callback(this, cbval1);
            return;
        }
        QTimeEdit::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qtimeedit_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qtimeedit_contextmenuevent_callback(this, cbval1);
            return;
        }
        QTimeEdit::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qtimeedit_changeevent_callback) {
            QEvent* cbval1 = event;
            qtimeedit_changeevent_callback(this, cbval1);
            return;
        }
        QTimeEdit::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qtimeedit_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qtimeedit_closeevent_callback(this, cbval1);
            return;
        }
        QTimeEdit::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qtimeedit_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qtimeedit_hideevent_callback(this, cbval1);
            return;
        }
        QTimeEdit::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qtimeedit_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qtimeedit_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QTimeEdit::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qtimeedit_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qtimeedit_mousemoveevent_callback(this, cbval1);
            return;
        }
        QTimeEdit::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtimeedit_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qtimeedit_timerevent_callback(this, cbval1);
            return;
        }
        QTimeEdit::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qtimeedit_showevent_callback) {
            QShowEvent* cbval1 = event;
            qtimeedit_showevent_callback(this, cbval1);
            return;
        }
        QTimeEdit::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qtimeedit_devtype_callback) {
            int callback_ret = qtimeedit_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QTimeEdit::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qtimeedit_setvisible_callback) {
            bool cbval1 = visible;
            qtimeedit_setvisible_callback(this, cbval1);
            return;
        }
        QTimeEdit::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qtimeedit_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qtimeedit_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTimeEdit::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qtimeedit_hasheightforwidth_callback) {
            bool callback_ret = qtimeedit_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QTimeEdit::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qtimeedit_paintengine_callback) {
            QPaintEngine* callback_ret = qtimeedit_paintengine_callback(this);
            return callback_ret;
        }
        return QTimeEdit::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qtimeedit_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qtimeedit_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QTimeEdit::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qtimeedit_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qtimeedit_enterevent_callback(this, cbval1);
            return;
        }
        QTimeEdit::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qtimeedit_leaveevent_callback) {
            QEvent* cbval1 = event;
            qtimeedit_leaveevent_callback(this, cbval1);
            return;
        }
        QTimeEdit::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qtimeedit_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qtimeedit_moveevent_callback(this, cbval1);
            return;
        }
        QTimeEdit::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qtimeedit_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qtimeedit_tabletevent_callback(this, cbval1);
            return;
        }
        QTimeEdit::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qtimeedit_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qtimeedit_actionevent_callback(this, cbval1);
            return;
        }
        QTimeEdit::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qtimeedit_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qtimeedit_dragenterevent_callback(this, cbval1);
            return;
        }
        QTimeEdit::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qtimeedit_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qtimeedit_dragmoveevent_callback(this, cbval1);
            return;
        }
        QTimeEdit::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qtimeedit_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qtimeedit_dragleaveevent_callback(this, cbval1);
            return;
        }
        QTimeEdit::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qtimeedit_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qtimeedit_dropevent_callback(this, cbval1);
            return;
        }
        QTimeEdit::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qtimeedit_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qtimeedit_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QTimeEdit::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qtimeedit_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qtimeedit_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTimeEdit::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qtimeedit_initpainter_callback) {
            QPainter* cbval1 = painter;
            qtimeedit_initpainter_callback(this, cbval1);
            return;
        }
        QTimeEdit::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qtimeedit_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qtimeedit_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QTimeEdit::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qtimeedit_sharedpainter_callback) {
            QPainter* callback_ret = qtimeedit_sharedpainter_callback(this);
            return callback_ret;
        }
        return QTimeEdit::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qtimeedit_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qtimeedit_inputmethodevent_callback(this, cbval1);
            return;
        }
        QTimeEdit::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtimeedit_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qtimeedit_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTimeEdit::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtimeedit_childevent_callback) {
            QChildEvent* cbval1 = event;
            qtimeedit_childevent_callback(this, cbval1);
            return;
        }
        QTimeEdit::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtimeedit_customevent_callback) {
            QEvent* cbval1 = event;
            qtimeedit_customevent_callback(this, cbval1);
            return;
        }
        QTimeEdit::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtimeedit_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtimeedit_connectnotify_callback(this, cbval1);
            return;
        }
        QTimeEdit::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtimeedit_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtimeedit_disconnectnotify_callback(this, cbval1);
            return;
        }
        QTimeEdit::disconnectNotify(signal);
    }

    // Friend functions
    friend void QTimeEdit_SuperKeyPressEvent(QTimeEdit* self, QKeyEvent* event);
    friend void QTimeEdit_SuperWheelEvent(QTimeEdit* self, QWheelEvent* event);
    friend void QTimeEdit_SuperFocusInEvent(QTimeEdit* self, QFocusEvent* event);
    friend bool QTimeEdit_SuperFocusNextPrevChild(QTimeEdit* self, bool next);
    friend int QTimeEdit_SuperValidate(const QTimeEdit* self, libqt_string input, int* pos);
    friend void QTimeEdit_SuperFixup(const QTimeEdit* self, libqt_string input);
    friend QDateTime* QTimeEdit_SuperDateTimeFromText(const QTimeEdit* self, const libqt_string text);
    friend libqt_string QTimeEdit_SuperTextFromDateTime(const QTimeEdit* self, const QDateTime* dt);
    friend int QTimeEdit_SuperStepEnabled(const QTimeEdit* self);
    friend void QTimeEdit_SuperMousePressEvent(QTimeEdit* self, QMouseEvent* event);
    friend void QTimeEdit_SuperPaintEvent(QTimeEdit* self, QPaintEvent* event);
    friend void QTimeEdit_SuperInitStyleOption(const QTimeEdit* self, QStyleOptionSpinBox* option);
    friend void QTimeEdit_SuperResizeEvent(QTimeEdit* self, QResizeEvent* event);
    friend void QTimeEdit_SuperKeyReleaseEvent(QTimeEdit* self, QKeyEvent* event);
    friend void QTimeEdit_SuperFocusOutEvent(QTimeEdit* self, QFocusEvent* event);
    friend void QTimeEdit_SuperContextMenuEvent(QTimeEdit* self, QContextMenuEvent* event);
    friend void QTimeEdit_SuperChangeEvent(QTimeEdit* self, QEvent* event);
    friend void QTimeEdit_SuperCloseEvent(QTimeEdit* self, QCloseEvent* event);
    friend void QTimeEdit_SuperHideEvent(QTimeEdit* self, QHideEvent* event);
    friend void QTimeEdit_SuperMouseReleaseEvent(QTimeEdit* self, QMouseEvent* event);
    friend void QTimeEdit_SuperMouseMoveEvent(QTimeEdit* self, QMouseEvent* event);
    friend void QTimeEdit_SuperTimerEvent(QTimeEdit* self, QTimerEvent* event);
    friend void QTimeEdit_SuperShowEvent(QTimeEdit* self, QShowEvent* event);
    friend void QTimeEdit_SuperMouseDoubleClickEvent(QTimeEdit* self, QMouseEvent* event);
    friend void QTimeEdit_SuperEnterEvent(QTimeEdit* self, QEnterEvent* event);
    friend void QTimeEdit_SuperLeaveEvent(QTimeEdit* self, QEvent* event);
    friend void QTimeEdit_SuperMoveEvent(QTimeEdit* self, QMoveEvent* event);
    friend void QTimeEdit_SuperTabletEvent(QTimeEdit* self, QTabletEvent* event);
    friend void QTimeEdit_SuperActionEvent(QTimeEdit* self, QActionEvent* event);
    friend void QTimeEdit_SuperDragEnterEvent(QTimeEdit* self, QDragEnterEvent* event);
    friend void QTimeEdit_SuperDragMoveEvent(QTimeEdit* self, QDragMoveEvent* event);
    friend void QTimeEdit_SuperDragLeaveEvent(QTimeEdit* self, QDragLeaveEvent* event);
    friend void QTimeEdit_SuperDropEvent(QTimeEdit* self, QDropEvent* event);
    friend bool QTimeEdit_SuperNativeEvent(QTimeEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QTimeEdit_SuperMetric(const QTimeEdit* self, int param1);
    friend void QTimeEdit_SuperInitPainter(const QTimeEdit* self, QPainter* painter);
    friend QPaintDevice* QTimeEdit_SuperRedirected(const QTimeEdit* self, QPoint* offset);
    friend QPainter* QTimeEdit_SuperSharedPainter(const QTimeEdit* self);
    friend void QTimeEdit_SuperInputMethodEvent(QTimeEdit* self, QInputMethodEvent* param1);
    friend void QTimeEdit_SuperChildEvent(QTimeEdit* self, QChildEvent* event);
    friend void QTimeEdit_SuperCustomEvent(QTimeEdit* self, QEvent* event);
    friend void QTimeEdit_SuperConnectNotify(QTimeEdit* self, const QMetaMethod* signal);
    friend void QTimeEdit_SuperDisconnectNotify(QTimeEdit* self, const QMetaMethod* signal);
};

// This class is a subclass of QDateEdit
class VirtualQDateEdit final : public QDateEdit {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDateEdit_MetaObject_Callback = QMetaObject* (*)(const QDateEdit*);
    using QDateEdit_Metacast_Callback = void* (*)(QDateEdit*, const char*);
    using QDateEdit_Metacall_Callback = int (*)(QDateEdit*, int, int, void**);
    using QDateEdit_SizeHint_Callback = QSize* (*)(const QDateEdit*);
    using QDateEdit_Clear_Callback = void (*)(QDateEdit*);
    using QDateEdit_StepBy_Callback = void (*)(QDateEdit*, int);
    using QDateEdit_Event_Callback = bool (*)(QDateEdit*, QEvent*);
    using QDateEdit_KeyPressEvent_Callback = void (*)(QDateEdit*, QKeyEvent*);
    using QDateEdit_WheelEvent_Callback = void (*)(QDateEdit*, QWheelEvent*);
    using QDateEdit_FocusInEvent_Callback = void (*)(QDateEdit*, QFocusEvent*);
    using QDateEdit_FocusNextPrevChild_Callback = bool (*)(QDateEdit*, bool);
    using QDateEdit_Validate_Callback = int (*)(const QDateEdit*, const char*, int*);
    using QDateEdit_Fixup_Callback = void (*)(const QDateEdit*, const char*);
    using QDateEdit_DateTimeFromText_Callback = QDateTime* (*)(const QDateEdit*, const char*);
    using QDateEdit_TextFromDateTime_Callback = const char* (*)(const QDateEdit*, QDateTime*);
    using QDateEdit_StepEnabled_Callback = int (*)(const QDateEdit*);
    using QDateEdit_MousePressEvent_Callback = void (*)(QDateEdit*, QMouseEvent*);
    using QDateEdit_PaintEvent_Callback = void (*)(QDateEdit*, QPaintEvent*);
    using QDateEdit_InitStyleOption_Callback = void (*)(const QDateEdit*, QStyleOptionSpinBox*);
    using QDateEdit_MinimumSizeHint_Callback = QSize* (*)(const QDateEdit*);
    using QDateEdit_InputMethodQuery_Callback = QVariant* (*)(const QDateEdit*, int);
    using QDateEdit_ResizeEvent_Callback = void (*)(QDateEdit*, QResizeEvent*);
    using QDateEdit_KeyReleaseEvent_Callback = void (*)(QDateEdit*, QKeyEvent*);
    using QDateEdit_FocusOutEvent_Callback = void (*)(QDateEdit*, QFocusEvent*);
    using QDateEdit_ContextMenuEvent_Callback = void (*)(QDateEdit*, QContextMenuEvent*);
    using QDateEdit_ChangeEvent_Callback = void (*)(QDateEdit*, QEvent*);
    using QDateEdit_CloseEvent_Callback = void (*)(QDateEdit*, QCloseEvent*);
    using QDateEdit_HideEvent_Callback = void (*)(QDateEdit*, QHideEvent*);
    using QDateEdit_MouseReleaseEvent_Callback = void (*)(QDateEdit*, QMouseEvent*);
    using QDateEdit_MouseMoveEvent_Callback = void (*)(QDateEdit*, QMouseEvent*);
    using QDateEdit_TimerEvent_Callback = void (*)(QDateEdit*, QTimerEvent*);
    using QDateEdit_ShowEvent_Callback = void (*)(QDateEdit*, QShowEvent*);
    using QDateEdit_DevType_Callback = int (*)(const QDateEdit*);
    using QDateEdit_SetVisible_Callback = void (*)(QDateEdit*, bool);
    using QDateEdit_HeightForWidth_Callback = int (*)(const QDateEdit*, int);
    using QDateEdit_HasHeightForWidth_Callback = bool (*)(const QDateEdit*);
    using QDateEdit_PaintEngine_Callback = QPaintEngine* (*)(const QDateEdit*);
    using QDateEdit_MouseDoubleClickEvent_Callback = void (*)(QDateEdit*, QMouseEvent*);
    using QDateEdit_EnterEvent_Callback = void (*)(QDateEdit*, QEnterEvent*);
    using QDateEdit_LeaveEvent_Callback = void (*)(QDateEdit*, QEvent*);
    using QDateEdit_MoveEvent_Callback = void (*)(QDateEdit*, QMoveEvent*);
    using QDateEdit_TabletEvent_Callback = void (*)(QDateEdit*, QTabletEvent*);
    using QDateEdit_ActionEvent_Callback = void (*)(QDateEdit*, QActionEvent*);
    using QDateEdit_DragEnterEvent_Callback = void (*)(QDateEdit*, QDragEnterEvent*);
    using QDateEdit_DragMoveEvent_Callback = void (*)(QDateEdit*, QDragMoveEvent*);
    using QDateEdit_DragLeaveEvent_Callback = void (*)(QDateEdit*, QDragLeaveEvent*);
    using QDateEdit_DropEvent_Callback = void (*)(QDateEdit*, QDropEvent*);
    using QDateEdit_NativeEvent_Callback = bool (*)(QDateEdit*, libqt_string, void*, intptr_t*);
    using QDateEdit_Metric_Callback = int (*)(const QDateEdit*, int);
    using QDateEdit_InitPainter_Callback = void (*)(const QDateEdit*, QPainter*);
    using QDateEdit_Redirected_Callback = QPaintDevice* (*)(const QDateEdit*, QPoint*);
    using QDateEdit_SharedPainter_Callback = QPainter* (*)(const QDateEdit*);
    using QDateEdit_InputMethodEvent_Callback = void (*)(QDateEdit*, QInputMethodEvent*);
    using QDateEdit_EventFilter_Callback = bool (*)(QDateEdit*, QObject*, QEvent*);
    using QDateEdit_ChildEvent_Callback = void (*)(QDateEdit*, QChildEvent*);
    using QDateEdit_CustomEvent_Callback = void (*)(QDateEdit*, QEvent*);
    using QDateEdit_ConnectNotify_Callback = void (*)(QDateEdit*, QMetaMethod*);
    using QDateEdit_DisconnectNotify_Callback = void (*)(QDateEdit*, QMetaMethod*);
    using QDateEdit::create;
    using QDateEdit::destroy;
    using QDateEdit::focusNextChild;
    using QDateEdit::focusPreviousChild;
    using QDateEdit::getDecodedMetricF;
    using QDateEdit::isSignalConnected;
    using QDateEdit::lineEdit;
    using QDateEdit::receivers;
    using QDateEdit::sender;
    using QDateEdit::senderSignalIndex;
    using QDateEdit::setLineEdit;
    using QDateEdit::updateMicroFocus;

    // Instance callback storage
    QDateEdit_MetaObject_Callback qdateedit_metaobject_callback = nullptr;
    QDateEdit_Metacast_Callback qdateedit_metacast_callback = nullptr;
    QDateEdit_Metacall_Callback qdateedit_metacall_callback = nullptr;
    QDateEdit_SizeHint_Callback qdateedit_sizehint_callback = nullptr;
    QDateEdit_Clear_Callback qdateedit_clear_callback = nullptr;
    QDateEdit_StepBy_Callback qdateedit_stepby_callback = nullptr;
    QDateEdit_Event_Callback qdateedit_event_callback = nullptr;
    QDateEdit_KeyPressEvent_Callback qdateedit_keypressevent_callback = nullptr;
    QDateEdit_WheelEvent_Callback qdateedit_wheelevent_callback = nullptr;
    QDateEdit_FocusInEvent_Callback qdateedit_focusinevent_callback = nullptr;
    QDateEdit_FocusNextPrevChild_Callback qdateedit_focusnextprevchild_callback = nullptr;
    QDateEdit_Validate_Callback qdateedit_validate_callback = nullptr;
    QDateEdit_Fixup_Callback qdateedit_fixup_callback = nullptr;
    QDateEdit_DateTimeFromText_Callback qdateedit_datetimefromtext_callback = nullptr;
    QDateEdit_TextFromDateTime_Callback qdateedit_textfromdatetime_callback = nullptr;
    QDateEdit_StepEnabled_Callback qdateedit_stepenabled_callback = nullptr;
    QDateEdit_MousePressEvent_Callback qdateedit_mousepressevent_callback = nullptr;
    QDateEdit_PaintEvent_Callback qdateedit_paintevent_callback = nullptr;
    QDateEdit_InitStyleOption_Callback qdateedit_initstyleoption_callback = nullptr;
    QDateEdit_MinimumSizeHint_Callback qdateedit_minimumsizehint_callback = nullptr;
    QDateEdit_InputMethodQuery_Callback qdateedit_inputmethodquery_callback = nullptr;
    QDateEdit_ResizeEvent_Callback qdateedit_resizeevent_callback = nullptr;
    QDateEdit_KeyReleaseEvent_Callback qdateedit_keyreleaseevent_callback = nullptr;
    QDateEdit_FocusOutEvent_Callback qdateedit_focusoutevent_callback = nullptr;
    QDateEdit_ContextMenuEvent_Callback qdateedit_contextmenuevent_callback = nullptr;
    QDateEdit_ChangeEvent_Callback qdateedit_changeevent_callback = nullptr;
    QDateEdit_CloseEvent_Callback qdateedit_closeevent_callback = nullptr;
    QDateEdit_HideEvent_Callback qdateedit_hideevent_callback = nullptr;
    QDateEdit_MouseReleaseEvent_Callback qdateedit_mousereleaseevent_callback = nullptr;
    QDateEdit_MouseMoveEvent_Callback qdateedit_mousemoveevent_callback = nullptr;
    QDateEdit_TimerEvent_Callback qdateedit_timerevent_callback = nullptr;
    QDateEdit_ShowEvent_Callback qdateedit_showevent_callback = nullptr;
    QDateEdit_DevType_Callback qdateedit_devtype_callback = nullptr;
    QDateEdit_SetVisible_Callback qdateedit_setvisible_callback = nullptr;
    QDateEdit_HeightForWidth_Callback qdateedit_heightforwidth_callback = nullptr;
    QDateEdit_HasHeightForWidth_Callback qdateedit_hasheightforwidth_callback = nullptr;
    QDateEdit_PaintEngine_Callback qdateedit_paintengine_callback = nullptr;
    QDateEdit_MouseDoubleClickEvent_Callback qdateedit_mousedoubleclickevent_callback = nullptr;
    QDateEdit_EnterEvent_Callback qdateedit_enterevent_callback = nullptr;
    QDateEdit_LeaveEvent_Callback qdateedit_leaveevent_callback = nullptr;
    QDateEdit_MoveEvent_Callback qdateedit_moveevent_callback = nullptr;
    QDateEdit_TabletEvent_Callback qdateedit_tabletevent_callback = nullptr;
    QDateEdit_ActionEvent_Callback qdateedit_actionevent_callback = nullptr;
    QDateEdit_DragEnterEvent_Callback qdateedit_dragenterevent_callback = nullptr;
    QDateEdit_DragMoveEvent_Callback qdateedit_dragmoveevent_callback = nullptr;
    QDateEdit_DragLeaveEvent_Callback qdateedit_dragleaveevent_callback = nullptr;
    QDateEdit_DropEvent_Callback qdateedit_dropevent_callback = nullptr;
    QDateEdit_NativeEvent_Callback qdateedit_nativeevent_callback = nullptr;
    QDateEdit_Metric_Callback qdateedit_metric_callback = nullptr;
    QDateEdit_InitPainter_Callback qdateedit_initpainter_callback = nullptr;
    QDateEdit_Redirected_Callback qdateedit_redirected_callback = nullptr;
    QDateEdit_SharedPainter_Callback qdateedit_sharedpainter_callback = nullptr;
    QDateEdit_InputMethodEvent_Callback qdateedit_inputmethodevent_callback = nullptr;
    QDateEdit_EventFilter_Callback qdateedit_eventfilter_callback = nullptr;
    QDateEdit_ChildEvent_Callback qdateedit_childevent_callback = nullptr;
    QDateEdit_CustomEvent_Callback qdateedit_customevent_callback = nullptr;
    QDateEdit_ConnectNotify_Callback qdateedit_connectnotify_callback = nullptr;
    QDateEdit_DisconnectNotify_Callback qdateedit_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QDateEdit {
        using QDateEdit::actionEvent;
        using QDateEdit::changeEvent;
        using QDateEdit::childEvent;
        using QDateEdit::closeEvent;
        using QDateEdit::connectNotify;
        using QDateEdit::contextMenuEvent;
        using QDateEdit::customEvent;
        using QDateEdit::dateTimeFromText;
        using QDateEdit::disconnectNotify;
        using QDateEdit::dragEnterEvent;
        using QDateEdit::dragLeaveEvent;
        using QDateEdit::dragMoveEvent;
        using QDateEdit::dropEvent;
        using QDateEdit::enterEvent;
        using QDateEdit::fixup;
        using QDateEdit::focusInEvent;
        using QDateEdit::focusNextPrevChild;
        using QDateEdit::focusOutEvent;
        using QDateEdit::hideEvent;
        using QDateEdit::initPainter;
        using QDateEdit::initStyleOption;
        using QDateEdit::inputMethodEvent;
        using QDateEdit::keyPressEvent;
        using QDateEdit::keyReleaseEvent;
        using QDateEdit::leaveEvent;
        using QDateEdit::metric;
        using QDateEdit::mouseDoubleClickEvent;
        using QDateEdit::mouseMoveEvent;
        using QDateEdit::mousePressEvent;
        using QDateEdit::mouseReleaseEvent;
        using QDateEdit::moveEvent;
        using QDateEdit::nativeEvent;
        using QDateEdit::paintEvent;
        using QDateEdit::redirected;
        using QDateEdit::resizeEvent;
        using QDateEdit::sharedPainter;
        using QDateEdit::showEvent;
        using QDateEdit::stepEnabled;
        using QDateEdit::tabletEvent;
        using QDateEdit::textFromDateTime;
        using QDateEdit::timerEvent;
        using QDateEdit::validate;
        using QDateEdit::wheelEvent;
    };

    VirtualQDateEdit(QWidget* parent) : QDateEdit(parent) {};
    VirtualQDateEdit() : QDateEdit() {};
    VirtualQDateEdit(QDate date) : QDateEdit(date) {};
    VirtualQDateEdit(QDate date, QWidget* parent) : QDateEdit(date, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdateedit_metaobject_callback) {
            QMetaObject* callback_ret = qdateedit_metaobject_callback(this);
            return callback_ret;
        }
        return QDateEdit::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdateedit_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qdateedit_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QDateEdit::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdateedit_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qdateedit_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDateEdit::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qdateedit_sizehint_callback) {
            QSize* callback_ret = qdateedit_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDateEdit::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (qdateedit_clear_callback) {
            qdateedit_clear_callback(this);
            return;
        }
        QDateEdit::clear();
    }

    // Virtual method for C ABI access and custom callback
    virtual void stepBy(int steps) override {
        if (qdateedit_stepby_callback) {
            int cbval1 = steps;
            qdateedit_stepby_callback(this, cbval1);
            return;
        }
        QDateEdit::stepBy(steps);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdateedit_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qdateedit_event_callback(this, cbval1);
            return callback_ret;
        }
        return QDateEdit::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qdateedit_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qdateedit_keypressevent_callback(this, cbval1);
            return;
        }
        QDateEdit::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qdateedit_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qdateedit_wheelevent_callback(this, cbval1);
            return;
        }
        QDateEdit::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qdateedit_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qdateedit_focusinevent_callback(this, cbval1);
            return;
        }
        QDateEdit::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qdateedit_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qdateedit_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QDateEdit::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual QValidator::State validate(QString& input, int& pos) const override {
        if (qdateedit_validate_callback) {
            auto input_ret = input;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray input_b = input_ret.toUtf8();
            auto input_str_len = input_b.length();
            const char* input_str = static_cast<const char*>(malloc(input_str_len + 1));
            memcpy((void*)input_str, input_b.data(), input_str_len);
            ((char*)input_str)[input_str_len] = '\0';
            const char* cbval1 = input_str;
            int* cbval2 = &pos;
            int callback_ret = qdateedit_validate_callback(this, cbval1, cbval2);
            libqt_free(input_str);
            return static_cast<QValidator::State>(callback_ret);
        }
        return QDateEdit::validate(input, pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fixup(QString& input) const override {
        if (qdateedit_fixup_callback) {
            auto input_ret = input;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray input_b = input_ret.toUtf8();
            auto input_str_len = input_b.length();
            const char* input_str = static_cast<const char*>(malloc(input_str_len + 1));
            memcpy((void*)input_str, input_b.data(), input_str_len);
            ((char*)input_str)[input_str_len] = '\0';
            const char* cbval1 = input_str;
            qdateedit_fixup_callback(this, cbval1);
            libqt_free(input_str);
            return;
        }
        QDateEdit::fixup(input);
    }

    // Virtual method for C ABI access and custom callback
    virtual QDateTime dateTimeFromText(const QString& text) const override {
        if (qdateedit_datetimefromtext_callback) {
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            QDateTime* callback_ret = qdateedit_datetimefromtext_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(text_str);
            return callback_ret_Value;
        }
        return QDateEdit::dateTimeFromText(text);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString textFromDateTime(const QDateTime& dt) const override {
        if (qdateedit_textfromdatetime_callback) {
            const QDateTime& dt_ret = dt;
            // Cast returned reference into pointer
            QDateTime* cbval1 = const_cast<QDateTime*>(&dt_ret);
            const char* callback_ret = qdateedit_textfromdatetime_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QDateEdit::textFromDateTime(dt);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSpinBox::StepEnabled stepEnabled() const override {
        if (qdateedit_stepenabled_callback) {
            int callback_ret = qdateedit_stepenabled_callback(this);
            return static_cast<QAbstractSpinBox::StepEnabled>(callback_ret);
        }
        return QDateEdit::stepEnabled();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qdateedit_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qdateedit_mousepressevent_callback(this, cbval1);
            return;
        }
        QDateEdit::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qdateedit_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qdateedit_paintevent_callback(this, cbval1);
            return;
        }
        QDateEdit::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionSpinBox* option) const override {
        if (qdateedit_initstyleoption_callback) {
            QStyleOptionSpinBox* cbval1 = option;
            qdateedit_initstyleoption_callback(this, cbval1);
            return;
        }
        QDateEdit::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qdateedit_minimumsizehint_callback) {
            QSize* callback_ret = qdateedit_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDateEdit::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qdateedit_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qdateedit_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDateEdit::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qdateedit_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qdateedit_resizeevent_callback(this, cbval1);
            return;
        }
        QDateEdit::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qdateedit_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qdateedit_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QDateEdit::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qdateedit_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qdateedit_focusoutevent_callback(this, cbval1);
            return;
        }
        QDateEdit::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qdateedit_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qdateedit_contextmenuevent_callback(this, cbval1);
            return;
        }
        QDateEdit::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qdateedit_changeevent_callback) {
            QEvent* cbval1 = event;
            qdateedit_changeevent_callback(this, cbval1);
            return;
        }
        QDateEdit::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qdateedit_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qdateedit_closeevent_callback(this, cbval1);
            return;
        }
        QDateEdit::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qdateedit_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qdateedit_hideevent_callback(this, cbval1);
            return;
        }
        QDateEdit::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qdateedit_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qdateedit_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QDateEdit::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qdateedit_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qdateedit_mousemoveevent_callback(this, cbval1);
            return;
        }
        QDateEdit::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdateedit_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qdateedit_timerevent_callback(this, cbval1);
            return;
        }
        QDateEdit::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qdateedit_showevent_callback) {
            QShowEvent* cbval1 = event;
            qdateedit_showevent_callback(this, cbval1);
            return;
        }
        QDateEdit::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qdateedit_devtype_callback) {
            int callback_ret = qdateedit_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QDateEdit::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qdateedit_setvisible_callback) {
            bool cbval1 = visible;
            qdateedit_setvisible_callback(this, cbval1);
            return;
        }
        QDateEdit::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qdateedit_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qdateedit_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDateEdit::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qdateedit_hasheightforwidth_callback) {
            bool callback_ret = qdateedit_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QDateEdit::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qdateedit_paintengine_callback) {
            QPaintEngine* callback_ret = qdateedit_paintengine_callback(this);
            return callback_ret;
        }
        return QDateEdit::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qdateedit_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qdateedit_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QDateEdit::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qdateedit_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qdateedit_enterevent_callback(this, cbval1);
            return;
        }
        QDateEdit::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qdateedit_leaveevent_callback) {
            QEvent* cbval1 = event;
            qdateedit_leaveevent_callback(this, cbval1);
            return;
        }
        QDateEdit::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qdateedit_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qdateedit_moveevent_callback(this, cbval1);
            return;
        }
        QDateEdit::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qdateedit_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qdateedit_tabletevent_callback(this, cbval1);
            return;
        }
        QDateEdit::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qdateedit_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qdateedit_actionevent_callback(this, cbval1);
            return;
        }
        QDateEdit::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qdateedit_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qdateedit_dragenterevent_callback(this, cbval1);
            return;
        }
        QDateEdit::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qdateedit_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qdateedit_dragmoveevent_callback(this, cbval1);
            return;
        }
        QDateEdit::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qdateedit_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qdateedit_dragleaveevent_callback(this, cbval1);
            return;
        }
        QDateEdit::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qdateedit_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qdateedit_dropevent_callback(this, cbval1);
            return;
        }
        QDateEdit::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qdateedit_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qdateedit_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QDateEdit::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qdateedit_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qdateedit_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDateEdit::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qdateedit_initpainter_callback) {
            QPainter* cbval1 = painter;
            qdateedit_initpainter_callback(this, cbval1);
            return;
        }
        QDateEdit::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qdateedit_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qdateedit_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QDateEdit::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qdateedit_sharedpainter_callback) {
            QPainter* callback_ret = qdateedit_sharedpainter_callback(this);
            return callback_ret;
        }
        return QDateEdit::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qdateedit_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qdateedit_inputmethodevent_callback(this, cbval1);
            return;
        }
        QDateEdit::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdateedit_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qdateedit_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDateEdit::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdateedit_childevent_callback) {
            QChildEvent* cbval1 = event;
            qdateedit_childevent_callback(this, cbval1);
            return;
        }
        QDateEdit::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdateedit_customevent_callback) {
            QEvent* cbval1 = event;
            qdateedit_customevent_callback(this, cbval1);
            return;
        }
        QDateEdit::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdateedit_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdateedit_connectnotify_callback(this, cbval1);
            return;
        }
        QDateEdit::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdateedit_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdateedit_disconnectnotify_callback(this, cbval1);
            return;
        }
        QDateEdit::disconnectNotify(signal);
    }

    // Friend functions
    friend void QDateEdit_SuperKeyPressEvent(QDateEdit* self, QKeyEvent* event);
    friend void QDateEdit_SuperWheelEvent(QDateEdit* self, QWheelEvent* event);
    friend void QDateEdit_SuperFocusInEvent(QDateEdit* self, QFocusEvent* event);
    friend bool QDateEdit_SuperFocusNextPrevChild(QDateEdit* self, bool next);
    friend int QDateEdit_SuperValidate(const QDateEdit* self, libqt_string input, int* pos);
    friend void QDateEdit_SuperFixup(const QDateEdit* self, libqt_string input);
    friend QDateTime* QDateEdit_SuperDateTimeFromText(const QDateEdit* self, const libqt_string text);
    friend libqt_string QDateEdit_SuperTextFromDateTime(const QDateEdit* self, const QDateTime* dt);
    friend int QDateEdit_SuperStepEnabled(const QDateEdit* self);
    friend void QDateEdit_SuperMousePressEvent(QDateEdit* self, QMouseEvent* event);
    friend void QDateEdit_SuperPaintEvent(QDateEdit* self, QPaintEvent* event);
    friend void QDateEdit_SuperInitStyleOption(const QDateEdit* self, QStyleOptionSpinBox* option);
    friend void QDateEdit_SuperResizeEvent(QDateEdit* self, QResizeEvent* event);
    friend void QDateEdit_SuperKeyReleaseEvent(QDateEdit* self, QKeyEvent* event);
    friend void QDateEdit_SuperFocusOutEvent(QDateEdit* self, QFocusEvent* event);
    friend void QDateEdit_SuperContextMenuEvent(QDateEdit* self, QContextMenuEvent* event);
    friend void QDateEdit_SuperChangeEvent(QDateEdit* self, QEvent* event);
    friend void QDateEdit_SuperCloseEvent(QDateEdit* self, QCloseEvent* event);
    friend void QDateEdit_SuperHideEvent(QDateEdit* self, QHideEvent* event);
    friend void QDateEdit_SuperMouseReleaseEvent(QDateEdit* self, QMouseEvent* event);
    friend void QDateEdit_SuperMouseMoveEvent(QDateEdit* self, QMouseEvent* event);
    friend void QDateEdit_SuperTimerEvent(QDateEdit* self, QTimerEvent* event);
    friend void QDateEdit_SuperShowEvent(QDateEdit* self, QShowEvent* event);
    friend void QDateEdit_SuperMouseDoubleClickEvent(QDateEdit* self, QMouseEvent* event);
    friend void QDateEdit_SuperEnterEvent(QDateEdit* self, QEnterEvent* event);
    friend void QDateEdit_SuperLeaveEvent(QDateEdit* self, QEvent* event);
    friend void QDateEdit_SuperMoveEvent(QDateEdit* self, QMoveEvent* event);
    friend void QDateEdit_SuperTabletEvent(QDateEdit* self, QTabletEvent* event);
    friend void QDateEdit_SuperActionEvent(QDateEdit* self, QActionEvent* event);
    friend void QDateEdit_SuperDragEnterEvent(QDateEdit* self, QDragEnterEvent* event);
    friend void QDateEdit_SuperDragMoveEvent(QDateEdit* self, QDragMoveEvent* event);
    friend void QDateEdit_SuperDragLeaveEvent(QDateEdit* self, QDragLeaveEvent* event);
    friend void QDateEdit_SuperDropEvent(QDateEdit* self, QDropEvent* event);
    friend bool QDateEdit_SuperNativeEvent(QDateEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QDateEdit_SuperMetric(const QDateEdit* self, int param1);
    friend void QDateEdit_SuperInitPainter(const QDateEdit* self, QPainter* painter);
    friend QPaintDevice* QDateEdit_SuperRedirected(const QDateEdit* self, QPoint* offset);
    friend QPainter* QDateEdit_SuperSharedPainter(const QDateEdit* self);
    friend void QDateEdit_SuperInputMethodEvent(QDateEdit* self, QInputMethodEvent* param1);
    friend void QDateEdit_SuperChildEvent(QDateEdit* self, QChildEvent* event);
    friend void QDateEdit_SuperCustomEvent(QDateEdit* self, QEvent* event);
    friend void QDateEdit_SuperConnectNotify(QDateEdit* self, const QMetaMethod* signal);
    friend void QDateEdit_SuperDisconnectNotify(QDateEdit* self, const QMetaMethod* signal);
};

#endif
