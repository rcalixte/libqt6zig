#pragma once
#ifndef EXTRAS_KITEMVIEWS_LIBKLISTWIDGETSEARCHLINE_HXX
#define EXTRAS_KITEMVIEWS_LIBKLISTWIDGETSEARCHLINE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KListWidgetSearchLine
class VirtualKListWidgetSearchLine final : public KListWidgetSearchLine {
  public:
    // Virtual class public types (including callbacks and access types)
    using KListWidgetSearchLine_MetaObject_Callback = QMetaObject* (*)(const KListWidgetSearchLine*);
    using KListWidgetSearchLine_Metacast_Callback = void* (*)(KListWidgetSearchLine*, const char*);
    using KListWidgetSearchLine_Metacall_Callback = int (*)(KListWidgetSearchLine*, int, int, void**);
    using KListWidgetSearchLine_UpdateSearch_Callback = void (*)(KListWidgetSearchLine*, const char*);
    using KListWidgetSearchLine_ItemMatches_Callback = bool (*)(const KListWidgetSearchLine*, QListWidgetItem*, const char*);
    using KListWidgetSearchLine_Event_Callback = bool (*)(KListWidgetSearchLine*, QEvent*);
    using KListWidgetSearchLine_SizeHint_Callback = QSize* (*)(const KListWidgetSearchLine*);
    using KListWidgetSearchLine_MinimumSizeHint_Callback = QSize* (*)(const KListWidgetSearchLine*);
    using KListWidgetSearchLine_MousePressEvent_Callback = void (*)(KListWidgetSearchLine*, QMouseEvent*);
    using KListWidgetSearchLine_MouseMoveEvent_Callback = void (*)(KListWidgetSearchLine*, QMouseEvent*);
    using KListWidgetSearchLine_MouseReleaseEvent_Callback = void (*)(KListWidgetSearchLine*, QMouseEvent*);
    using KListWidgetSearchLine_MouseDoubleClickEvent_Callback = void (*)(KListWidgetSearchLine*, QMouseEvent*);
    using KListWidgetSearchLine_KeyPressEvent_Callback = void (*)(KListWidgetSearchLine*, QKeyEvent*);
    using KListWidgetSearchLine_KeyReleaseEvent_Callback = void (*)(KListWidgetSearchLine*, QKeyEvent*);
    using KListWidgetSearchLine_FocusInEvent_Callback = void (*)(KListWidgetSearchLine*, QFocusEvent*);
    using KListWidgetSearchLine_FocusOutEvent_Callback = void (*)(KListWidgetSearchLine*, QFocusEvent*);
    using KListWidgetSearchLine_PaintEvent_Callback = void (*)(KListWidgetSearchLine*, QPaintEvent*);
    using KListWidgetSearchLine_DragEnterEvent_Callback = void (*)(KListWidgetSearchLine*, QDragEnterEvent*);
    using KListWidgetSearchLine_DragMoveEvent_Callback = void (*)(KListWidgetSearchLine*, QDragMoveEvent*);
    using KListWidgetSearchLine_DragLeaveEvent_Callback = void (*)(KListWidgetSearchLine*, QDragLeaveEvent*);
    using KListWidgetSearchLine_DropEvent_Callback = void (*)(KListWidgetSearchLine*, QDropEvent*);
    using KListWidgetSearchLine_ChangeEvent_Callback = void (*)(KListWidgetSearchLine*, QEvent*);
    using KListWidgetSearchLine_ContextMenuEvent_Callback = void (*)(KListWidgetSearchLine*, QContextMenuEvent*);
    using KListWidgetSearchLine_InputMethodEvent_Callback = void (*)(KListWidgetSearchLine*, QInputMethodEvent*);
    using KListWidgetSearchLine_InitStyleOption_Callback = void (*)(const KListWidgetSearchLine*, QStyleOptionFrame*);
    using KListWidgetSearchLine_InputMethodQuery_Callback = QVariant* (*)(const KListWidgetSearchLine*, int);
    using KListWidgetSearchLine_TimerEvent_Callback = void (*)(KListWidgetSearchLine*, QTimerEvent*);
    using KListWidgetSearchLine_DevType_Callback = int (*)(const KListWidgetSearchLine*);
    using KListWidgetSearchLine_SetVisible_Callback = void (*)(KListWidgetSearchLine*, bool);
    using KListWidgetSearchLine_HeightForWidth_Callback = int (*)(const KListWidgetSearchLine*, int);
    using KListWidgetSearchLine_HasHeightForWidth_Callback = bool (*)(const KListWidgetSearchLine*);
    using KListWidgetSearchLine_PaintEngine_Callback = QPaintEngine* (*)(const KListWidgetSearchLine*);
    using KListWidgetSearchLine_WheelEvent_Callback = void (*)(KListWidgetSearchLine*, QWheelEvent*);
    using KListWidgetSearchLine_EnterEvent_Callback = void (*)(KListWidgetSearchLine*, QEnterEvent*);
    using KListWidgetSearchLine_LeaveEvent_Callback = void (*)(KListWidgetSearchLine*, QEvent*);
    using KListWidgetSearchLine_MoveEvent_Callback = void (*)(KListWidgetSearchLine*, QMoveEvent*);
    using KListWidgetSearchLine_ResizeEvent_Callback = void (*)(KListWidgetSearchLine*, QResizeEvent*);
    using KListWidgetSearchLine_CloseEvent_Callback = void (*)(KListWidgetSearchLine*, QCloseEvent*);
    using KListWidgetSearchLine_TabletEvent_Callback = void (*)(KListWidgetSearchLine*, QTabletEvent*);
    using KListWidgetSearchLine_ActionEvent_Callback = void (*)(KListWidgetSearchLine*, QActionEvent*);
    using KListWidgetSearchLine_ShowEvent_Callback = void (*)(KListWidgetSearchLine*, QShowEvent*);
    using KListWidgetSearchLine_HideEvent_Callback = void (*)(KListWidgetSearchLine*, QHideEvent*);
    using KListWidgetSearchLine_NativeEvent_Callback = bool (*)(KListWidgetSearchLine*, libqt_string, void*, intptr_t*);
    using KListWidgetSearchLine_Metric_Callback = int (*)(const KListWidgetSearchLine*, int);
    using KListWidgetSearchLine_InitPainter_Callback = void (*)(const KListWidgetSearchLine*, QPainter*);
    using KListWidgetSearchLine_Redirected_Callback = QPaintDevice* (*)(const KListWidgetSearchLine*, QPoint*);
    using KListWidgetSearchLine_SharedPainter_Callback = QPainter* (*)(const KListWidgetSearchLine*);
    using KListWidgetSearchLine_FocusNextPrevChild_Callback = bool (*)(KListWidgetSearchLine*, bool);
    using KListWidgetSearchLine_EventFilter_Callback = bool (*)(KListWidgetSearchLine*, QObject*, QEvent*);
    using KListWidgetSearchLine_ChildEvent_Callback = void (*)(KListWidgetSearchLine*, QChildEvent*);
    using KListWidgetSearchLine_CustomEvent_Callback = void (*)(KListWidgetSearchLine*, QEvent*);
    using KListWidgetSearchLine_ConnectNotify_Callback = void (*)(KListWidgetSearchLine*, QMetaMethod*);
    using KListWidgetSearchLine_DisconnectNotify_Callback = void (*)(KListWidgetSearchLine*, QMetaMethod*);
    using KListWidgetSearchLine::create;
    using KListWidgetSearchLine::cursorRect;
    using KListWidgetSearchLine::destroy;
    using KListWidgetSearchLine::focusNextChild;
    using KListWidgetSearchLine::focusPreviousChild;
    using KListWidgetSearchLine::getDecodedMetricF;
    using KListWidgetSearchLine::isSignalConnected;
    using KListWidgetSearchLine::receivers;
    using KListWidgetSearchLine::sender;
    using KListWidgetSearchLine::senderSignalIndex;
    using KListWidgetSearchLine::updateMicroFocus;

    // Instance callback storage
    KListWidgetSearchLine_MetaObject_Callback klistwidgetsearchline_metaobject_callback = nullptr;
    KListWidgetSearchLine_Metacast_Callback klistwidgetsearchline_metacast_callback = nullptr;
    KListWidgetSearchLine_Metacall_Callback klistwidgetsearchline_metacall_callback = nullptr;
    KListWidgetSearchLine_UpdateSearch_Callback klistwidgetsearchline_updatesearch_callback = nullptr;
    KListWidgetSearchLine_ItemMatches_Callback klistwidgetsearchline_itemmatches_callback = nullptr;
    KListWidgetSearchLine_Event_Callback klistwidgetsearchline_event_callback = nullptr;
    KListWidgetSearchLine_SizeHint_Callback klistwidgetsearchline_sizehint_callback = nullptr;
    KListWidgetSearchLine_MinimumSizeHint_Callback klistwidgetsearchline_minimumsizehint_callback = nullptr;
    KListWidgetSearchLine_MousePressEvent_Callback klistwidgetsearchline_mousepressevent_callback = nullptr;
    KListWidgetSearchLine_MouseMoveEvent_Callback klistwidgetsearchline_mousemoveevent_callback = nullptr;
    KListWidgetSearchLine_MouseReleaseEvent_Callback klistwidgetsearchline_mousereleaseevent_callback = nullptr;
    KListWidgetSearchLine_MouseDoubleClickEvent_Callback klistwidgetsearchline_mousedoubleclickevent_callback = nullptr;
    KListWidgetSearchLine_KeyPressEvent_Callback klistwidgetsearchline_keypressevent_callback = nullptr;
    KListWidgetSearchLine_KeyReleaseEvent_Callback klistwidgetsearchline_keyreleaseevent_callback = nullptr;
    KListWidgetSearchLine_FocusInEvent_Callback klistwidgetsearchline_focusinevent_callback = nullptr;
    KListWidgetSearchLine_FocusOutEvent_Callback klistwidgetsearchline_focusoutevent_callback = nullptr;
    KListWidgetSearchLine_PaintEvent_Callback klistwidgetsearchline_paintevent_callback = nullptr;
    KListWidgetSearchLine_DragEnterEvent_Callback klistwidgetsearchline_dragenterevent_callback = nullptr;
    KListWidgetSearchLine_DragMoveEvent_Callback klistwidgetsearchline_dragmoveevent_callback = nullptr;
    KListWidgetSearchLine_DragLeaveEvent_Callback klistwidgetsearchline_dragleaveevent_callback = nullptr;
    KListWidgetSearchLine_DropEvent_Callback klistwidgetsearchline_dropevent_callback = nullptr;
    KListWidgetSearchLine_ChangeEvent_Callback klistwidgetsearchline_changeevent_callback = nullptr;
    KListWidgetSearchLine_ContextMenuEvent_Callback klistwidgetsearchline_contextmenuevent_callback = nullptr;
    KListWidgetSearchLine_InputMethodEvent_Callback klistwidgetsearchline_inputmethodevent_callback = nullptr;
    KListWidgetSearchLine_InitStyleOption_Callback klistwidgetsearchline_initstyleoption_callback = nullptr;
    KListWidgetSearchLine_InputMethodQuery_Callback klistwidgetsearchline_inputmethodquery_callback = nullptr;
    KListWidgetSearchLine_TimerEvent_Callback klistwidgetsearchline_timerevent_callback = nullptr;
    KListWidgetSearchLine_DevType_Callback klistwidgetsearchline_devtype_callback = nullptr;
    KListWidgetSearchLine_SetVisible_Callback klistwidgetsearchline_setvisible_callback = nullptr;
    KListWidgetSearchLine_HeightForWidth_Callback klistwidgetsearchline_heightforwidth_callback = nullptr;
    KListWidgetSearchLine_HasHeightForWidth_Callback klistwidgetsearchline_hasheightforwidth_callback = nullptr;
    KListWidgetSearchLine_PaintEngine_Callback klistwidgetsearchline_paintengine_callback = nullptr;
    KListWidgetSearchLine_WheelEvent_Callback klistwidgetsearchline_wheelevent_callback = nullptr;
    KListWidgetSearchLine_EnterEvent_Callback klistwidgetsearchline_enterevent_callback = nullptr;
    KListWidgetSearchLine_LeaveEvent_Callback klistwidgetsearchline_leaveevent_callback = nullptr;
    KListWidgetSearchLine_MoveEvent_Callback klistwidgetsearchline_moveevent_callback = nullptr;
    KListWidgetSearchLine_ResizeEvent_Callback klistwidgetsearchline_resizeevent_callback = nullptr;
    KListWidgetSearchLine_CloseEvent_Callback klistwidgetsearchline_closeevent_callback = nullptr;
    KListWidgetSearchLine_TabletEvent_Callback klistwidgetsearchline_tabletevent_callback = nullptr;
    KListWidgetSearchLine_ActionEvent_Callback klistwidgetsearchline_actionevent_callback = nullptr;
    KListWidgetSearchLine_ShowEvent_Callback klistwidgetsearchline_showevent_callback = nullptr;
    KListWidgetSearchLine_HideEvent_Callback klistwidgetsearchline_hideevent_callback = nullptr;
    KListWidgetSearchLine_NativeEvent_Callback klistwidgetsearchline_nativeevent_callback = nullptr;
    KListWidgetSearchLine_Metric_Callback klistwidgetsearchline_metric_callback = nullptr;
    KListWidgetSearchLine_InitPainter_Callback klistwidgetsearchline_initpainter_callback = nullptr;
    KListWidgetSearchLine_Redirected_Callback klistwidgetsearchline_redirected_callback = nullptr;
    KListWidgetSearchLine_SharedPainter_Callback klistwidgetsearchline_sharedpainter_callback = nullptr;
    KListWidgetSearchLine_FocusNextPrevChild_Callback klistwidgetsearchline_focusnextprevchild_callback = nullptr;
    KListWidgetSearchLine_EventFilter_Callback klistwidgetsearchline_eventfilter_callback = nullptr;
    KListWidgetSearchLine_ChildEvent_Callback klistwidgetsearchline_childevent_callback = nullptr;
    KListWidgetSearchLine_CustomEvent_Callback klistwidgetsearchline_customevent_callback = nullptr;
    KListWidgetSearchLine_ConnectNotify_Callback klistwidgetsearchline_connectnotify_callback = nullptr;
    KListWidgetSearchLine_DisconnectNotify_Callback klistwidgetsearchline_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KListWidgetSearchLine {
        using KListWidgetSearchLine::actionEvent;
        using KListWidgetSearchLine::changeEvent;
        using KListWidgetSearchLine::childEvent;
        using KListWidgetSearchLine::closeEvent;
        using KListWidgetSearchLine::connectNotify;
        using KListWidgetSearchLine::contextMenuEvent;
        using KListWidgetSearchLine::customEvent;
        using KListWidgetSearchLine::disconnectNotify;
        using KListWidgetSearchLine::dragEnterEvent;
        using KListWidgetSearchLine::dragLeaveEvent;
        using KListWidgetSearchLine::dragMoveEvent;
        using KListWidgetSearchLine::dropEvent;
        using KListWidgetSearchLine::enterEvent;
        using KListWidgetSearchLine::event;
        using KListWidgetSearchLine::focusInEvent;
        using KListWidgetSearchLine::focusNextPrevChild;
        using KListWidgetSearchLine::focusOutEvent;
        using KListWidgetSearchLine::hideEvent;
        using KListWidgetSearchLine::initPainter;
        using KListWidgetSearchLine::initStyleOption;
        using KListWidgetSearchLine::inputMethodEvent;
        using KListWidgetSearchLine::itemMatches;
        using KListWidgetSearchLine::keyPressEvent;
        using KListWidgetSearchLine::keyReleaseEvent;
        using KListWidgetSearchLine::leaveEvent;
        using KListWidgetSearchLine::metric;
        using KListWidgetSearchLine::mouseDoubleClickEvent;
        using KListWidgetSearchLine::mouseMoveEvent;
        using KListWidgetSearchLine::mousePressEvent;
        using KListWidgetSearchLine::mouseReleaseEvent;
        using KListWidgetSearchLine::moveEvent;
        using KListWidgetSearchLine::nativeEvent;
        using KListWidgetSearchLine::paintEvent;
        using KListWidgetSearchLine::redirected;
        using KListWidgetSearchLine::resizeEvent;
        using KListWidgetSearchLine::sharedPainter;
        using KListWidgetSearchLine::showEvent;
        using KListWidgetSearchLine::tabletEvent;
        using KListWidgetSearchLine::wheelEvent;
    };

    VirtualKListWidgetSearchLine(QWidget* parent) : KListWidgetSearchLine(parent) {};
    VirtualKListWidgetSearchLine() : KListWidgetSearchLine() {};
    VirtualKListWidgetSearchLine(QWidget* parent, QListWidget* listWidget) : KListWidgetSearchLine(parent, listWidget) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (klistwidgetsearchline_metaobject_callback) {
            QMetaObject* callback_ret = klistwidgetsearchline_metaobject_callback(this);
            return callback_ret;
        }
        return KListWidgetSearchLine::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (klistwidgetsearchline_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = klistwidgetsearchline_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KListWidgetSearchLine::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (klistwidgetsearchline_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = klistwidgetsearchline_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KListWidgetSearchLine::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateSearch(const QString& s) override {
        if (klistwidgetsearchline_updatesearch_callback) {
            const auto s_ret = s;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray s_b = s_ret.toUtf8();
            auto s_str_len = s_b.length();
            const char* s_str = static_cast<const char*>(malloc(s_str_len + 1));
            memcpy((void*)s_str, s_b.data(), s_str_len);
            ((char*)s_str)[s_str_len] = '\0';
            const char* cbval1 = s_str;
            klistwidgetsearchline_updatesearch_callback(this, cbval1);
            libqt_free(s_str);
            return;
        }
        KListWidgetSearchLine::updateSearch(s);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool itemMatches(const QListWidgetItem* item, const QString& s) const override {
        if (klistwidgetsearchline_itemmatches_callback) {
            QListWidgetItem* cbval1 = (QListWidgetItem*)item;
            const auto s_ret = s;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray s_b = s_ret.toUtf8();
            auto s_str_len = s_b.length();
            const char* s_str = static_cast<const char*>(malloc(s_str_len + 1));
            memcpy((void*)s_str, s_b.data(), s_str_len);
            ((char*)s_str)[s_str_len] = '\0';
            const char* cbval2 = s_str;
            bool callback_ret = klistwidgetsearchline_itemmatches_callback(this, cbval1, cbval2);
            libqt_free(s_str);
            return callback_ret;
        }
        return KListWidgetSearchLine::itemMatches(item, s);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (klistwidgetsearchline_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = klistwidgetsearchline_event_callback(this, cbval1);
            return callback_ret;
        }
        return KListWidgetSearchLine::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (klistwidgetsearchline_sizehint_callback) {
            QSize* callback_ret = klistwidgetsearchline_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KListWidgetSearchLine::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (klistwidgetsearchline_minimumsizehint_callback) {
            QSize* callback_ret = klistwidgetsearchline_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KListWidgetSearchLine::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (klistwidgetsearchline_mousepressevent_callback) {
            QMouseEvent* cbval1 = param1;
            klistwidgetsearchline_mousepressevent_callback(this, cbval1);
            return;
        }
        KListWidgetSearchLine::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (klistwidgetsearchline_mousemoveevent_callback) {
            QMouseEvent* cbval1 = param1;
            klistwidgetsearchline_mousemoveevent_callback(this, cbval1);
            return;
        }
        KListWidgetSearchLine::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (klistwidgetsearchline_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = param1;
            klistwidgetsearchline_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KListWidgetSearchLine::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (klistwidgetsearchline_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = param1;
            klistwidgetsearchline_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KListWidgetSearchLine::mouseDoubleClickEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (klistwidgetsearchline_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            klistwidgetsearchline_keypressevent_callback(this, cbval1);
            return;
        }
        KListWidgetSearchLine::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* param1) override {
        if (klistwidgetsearchline_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = param1;
            klistwidgetsearchline_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KListWidgetSearchLine::keyReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (klistwidgetsearchline_focusinevent_callback) {
            QFocusEvent* cbval1 = param1;
            klistwidgetsearchline_focusinevent_callback(this, cbval1);
            return;
        }
        KListWidgetSearchLine::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (klistwidgetsearchline_focusoutevent_callback) {
            QFocusEvent* cbval1 = param1;
            klistwidgetsearchline_focusoutevent_callback(this, cbval1);
            return;
        }
        KListWidgetSearchLine::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (klistwidgetsearchline_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            klistwidgetsearchline_paintevent_callback(this, cbval1);
            return;
        }
        KListWidgetSearchLine::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* param1) override {
        if (klistwidgetsearchline_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = param1;
            klistwidgetsearchline_dragenterevent_callback(this, cbval1);
            return;
        }
        KListWidgetSearchLine::dragEnterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (klistwidgetsearchline_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = e;
            klistwidgetsearchline_dragmoveevent_callback(this, cbval1);
            return;
        }
        KListWidgetSearchLine::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (klistwidgetsearchline_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = e;
            klistwidgetsearchline_dragleaveevent_callback(this, cbval1);
            return;
        }
        KListWidgetSearchLine::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (klistwidgetsearchline_dropevent_callback) {
            QDropEvent* cbval1 = param1;
            klistwidgetsearchline_dropevent_callback(this, cbval1);
            return;
        }
        KListWidgetSearchLine::dropEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (klistwidgetsearchline_changeevent_callback) {
            QEvent* cbval1 = param1;
            klistwidgetsearchline_changeevent_callback(this, cbval1);
            return;
        }
        KListWidgetSearchLine::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (klistwidgetsearchline_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            klistwidgetsearchline_contextmenuevent_callback(this, cbval1);
            return;
        }
        KListWidgetSearchLine::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (klistwidgetsearchline_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            klistwidgetsearchline_inputmethodevent_callback(this, cbval1);
            return;
        }
        KListWidgetSearchLine::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (klistwidgetsearchline_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            klistwidgetsearchline_initstyleoption_callback(this, cbval1);
            return;
        }
        KListWidgetSearchLine::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (klistwidgetsearchline_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = klistwidgetsearchline_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KListWidgetSearchLine::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (klistwidgetsearchline_timerevent_callback) {
            QTimerEvent* cbval1 = param1;
            klistwidgetsearchline_timerevent_callback(this, cbval1);
            return;
        }
        KListWidgetSearchLine::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (klistwidgetsearchline_devtype_callback) {
            int callback_ret = klistwidgetsearchline_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KListWidgetSearchLine::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (klistwidgetsearchline_setvisible_callback) {
            bool cbval1 = visible;
            klistwidgetsearchline_setvisible_callback(this, cbval1);
            return;
        }
        KListWidgetSearchLine::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (klistwidgetsearchline_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = klistwidgetsearchline_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KListWidgetSearchLine::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (klistwidgetsearchline_hasheightforwidth_callback) {
            bool callback_ret = klistwidgetsearchline_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KListWidgetSearchLine::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (klistwidgetsearchline_paintengine_callback) {
            QPaintEngine* callback_ret = klistwidgetsearchline_paintengine_callback(this);
            return callback_ret;
        }
        return KListWidgetSearchLine::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (klistwidgetsearchline_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            klistwidgetsearchline_wheelevent_callback(this, cbval1);
            return;
        }
        KListWidgetSearchLine::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (klistwidgetsearchline_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            klistwidgetsearchline_enterevent_callback(this, cbval1);
            return;
        }
        KListWidgetSearchLine::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (klistwidgetsearchline_leaveevent_callback) {
            QEvent* cbval1 = event;
            klistwidgetsearchline_leaveevent_callback(this, cbval1);
            return;
        }
        KListWidgetSearchLine::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (klistwidgetsearchline_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            klistwidgetsearchline_moveevent_callback(this, cbval1);
            return;
        }
        KListWidgetSearchLine::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (klistwidgetsearchline_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            klistwidgetsearchline_resizeevent_callback(this, cbval1);
            return;
        }
        KListWidgetSearchLine::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (klistwidgetsearchline_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            klistwidgetsearchline_closeevent_callback(this, cbval1);
            return;
        }
        KListWidgetSearchLine::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (klistwidgetsearchline_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            klistwidgetsearchline_tabletevent_callback(this, cbval1);
            return;
        }
        KListWidgetSearchLine::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (klistwidgetsearchline_actionevent_callback) {
            QActionEvent* cbval1 = event;
            klistwidgetsearchline_actionevent_callback(this, cbval1);
            return;
        }
        KListWidgetSearchLine::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (klistwidgetsearchline_showevent_callback) {
            QShowEvent* cbval1 = event;
            klistwidgetsearchline_showevent_callback(this, cbval1);
            return;
        }
        KListWidgetSearchLine::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (klistwidgetsearchline_hideevent_callback) {
            QHideEvent* cbval1 = event;
            klistwidgetsearchline_hideevent_callback(this, cbval1);
            return;
        }
        KListWidgetSearchLine::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (klistwidgetsearchline_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = klistwidgetsearchline_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KListWidgetSearchLine::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (klistwidgetsearchline_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = klistwidgetsearchline_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KListWidgetSearchLine::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (klistwidgetsearchline_initpainter_callback) {
            QPainter* cbval1 = painter;
            klistwidgetsearchline_initpainter_callback(this, cbval1);
            return;
        }
        KListWidgetSearchLine::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (klistwidgetsearchline_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = klistwidgetsearchline_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KListWidgetSearchLine::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (klistwidgetsearchline_sharedpainter_callback) {
            QPainter* callback_ret = klistwidgetsearchline_sharedpainter_callback(this);
            return callback_ret;
        }
        return KListWidgetSearchLine::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (klistwidgetsearchline_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = klistwidgetsearchline_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KListWidgetSearchLine::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (klistwidgetsearchline_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = klistwidgetsearchline_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KListWidgetSearchLine::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (klistwidgetsearchline_childevent_callback) {
            QChildEvent* cbval1 = event;
            klistwidgetsearchline_childevent_callback(this, cbval1);
            return;
        }
        KListWidgetSearchLine::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (klistwidgetsearchline_customevent_callback) {
            QEvent* cbval1 = event;
            klistwidgetsearchline_customevent_callback(this, cbval1);
            return;
        }
        KListWidgetSearchLine::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (klistwidgetsearchline_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            klistwidgetsearchline_connectnotify_callback(this, cbval1);
            return;
        }
        KListWidgetSearchLine::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (klistwidgetsearchline_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            klistwidgetsearchline_disconnectnotify_callback(this, cbval1);
            return;
        }
        KListWidgetSearchLine::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KListWidgetSearchLine_SuperItemMatches(const KListWidgetSearchLine* self, const QListWidgetItem* item, const libqt_string s);
    friend bool KListWidgetSearchLine_SuperEvent(KListWidgetSearchLine* self, QEvent* event);
    friend void KListWidgetSearchLine_SuperMousePressEvent(KListWidgetSearchLine* self, QMouseEvent* param1);
    friend void KListWidgetSearchLine_SuperMouseMoveEvent(KListWidgetSearchLine* self, QMouseEvent* param1);
    friend void KListWidgetSearchLine_SuperMouseReleaseEvent(KListWidgetSearchLine* self, QMouseEvent* param1);
    friend void KListWidgetSearchLine_SuperMouseDoubleClickEvent(KListWidgetSearchLine* self, QMouseEvent* param1);
    friend void KListWidgetSearchLine_SuperKeyPressEvent(KListWidgetSearchLine* self, QKeyEvent* param1);
    friend void KListWidgetSearchLine_SuperKeyReleaseEvent(KListWidgetSearchLine* self, QKeyEvent* param1);
    friend void KListWidgetSearchLine_SuperFocusInEvent(KListWidgetSearchLine* self, QFocusEvent* param1);
    friend void KListWidgetSearchLine_SuperFocusOutEvent(KListWidgetSearchLine* self, QFocusEvent* param1);
    friend void KListWidgetSearchLine_SuperPaintEvent(KListWidgetSearchLine* self, QPaintEvent* param1);
    friend void KListWidgetSearchLine_SuperDragEnterEvent(KListWidgetSearchLine* self, QDragEnterEvent* param1);
    friend void KListWidgetSearchLine_SuperDragMoveEvent(KListWidgetSearchLine* self, QDragMoveEvent* e);
    friend void KListWidgetSearchLine_SuperDragLeaveEvent(KListWidgetSearchLine* self, QDragLeaveEvent* e);
    friend void KListWidgetSearchLine_SuperDropEvent(KListWidgetSearchLine* self, QDropEvent* param1);
    friend void KListWidgetSearchLine_SuperChangeEvent(KListWidgetSearchLine* self, QEvent* param1);
    friend void KListWidgetSearchLine_SuperContextMenuEvent(KListWidgetSearchLine* self, QContextMenuEvent* param1);
    friend void KListWidgetSearchLine_SuperInputMethodEvent(KListWidgetSearchLine* self, QInputMethodEvent* param1);
    friend void KListWidgetSearchLine_SuperInitStyleOption(const KListWidgetSearchLine* self, QStyleOptionFrame* option);
    friend void KListWidgetSearchLine_SuperWheelEvent(KListWidgetSearchLine* self, QWheelEvent* event);
    friend void KListWidgetSearchLine_SuperEnterEvent(KListWidgetSearchLine* self, QEnterEvent* event);
    friend void KListWidgetSearchLine_SuperLeaveEvent(KListWidgetSearchLine* self, QEvent* event);
    friend void KListWidgetSearchLine_SuperMoveEvent(KListWidgetSearchLine* self, QMoveEvent* event);
    friend void KListWidgetSearchLine_SuperResizeEvent(KListWidgetSearchLine* self, QResizeEvent* event);
    friend void KListWidgetSearchLine_SuperCloseEvent(KListWidgetSearchLine* self, QCloseEvent* event);
    friend void KListWidgetSearchLine_SuperTabletEvent(KListWidgetSearchLine* self, QTabletEvent* event);
    friend void KListWidgetSearchLine_SuperActionEvent(KListWidgetSearchLine* self, QActionEvent* event);
    friend void KListWidgetSearchLine_SuperShowEvent(KListWidgetSearchLine* self, QShowEvent* event);
    friend void KListWidgetSearchLine_SuperHideEvent(KListWidgetSearchLine* self, QHideEvent* event);
    friend bool KListWidgetSearchLine_SuperNativeEvent(KListWidgetSearchLine* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KListWidgetSearchLine_SuperMetric(const KListWidgetSearchLine* self, int param1);
    friend void KListWidgetSearchLine_SuperInitPainter(const KListWidgetSearchLine* self, QPainter* painter);
    friend QPaintDevice* KListWidgetSearchLine_SuperRedirected(const KListWidgetSearchLine* self, QPoint* offset);
    friend QPainter* KListWidgetSearchLine_SuperSharedPainter(const KListWidgetSearchLine* self);
    friend bool KListWidgetSearchLine_SuperFocusNextPrevChild(KListWidgetSearchLine* self, bool next);
    friend void KListWidgetSearchLine_SuperChildEvent(KListWidgetSearchLine* self, QChildEvent* event);
    friend void KListWidgetSearchLine_SuperCustomEvent(KListWidgetSearchLine* self, QEvent* event);
    friend void KListWidgetSearchLine_SuperConnectNotify(KListWidgetSearchLine* self, const QMetaMethod* signal);
    friend void KListWidgetSearchLine_SuperDisconnectNotify(KListWidgetSearchLine* self, const QMetaMethod* signal);
};

#endif
