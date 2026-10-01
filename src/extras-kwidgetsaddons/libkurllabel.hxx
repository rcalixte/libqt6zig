#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKURLLABEL_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKURLLABEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KUrlLabel
class VirtualKUrlLabel final : public KUrlLabel {
  public:
    // Virtual class public types (including callbacks and access types)
    using KUrlLabel_MetaObject_Callback = QMetaObject* (*)(const KUrlLabel*);
    using KUrlLabel_Metacast_Callback = void* (*)(KUrlLabel*, const char*);
    using KUrlLabel_Metacall_Callback = int (*)(KUrlLabel*, int, int, void**);
    using KUrlLabel_SetFont_Callback = void (*)(KUrlLabel*, QFont*);
    using KUrlLabel_MouseReleaseEvent_Callback = void (*)(KUrlLabel*, QMouseEvent*);
    using KUrlLabel_EnterEvent_Callback = void (*)(KUrlLabel*, QEnterEvent*);
    using KUrlLabel_LeaveEvent_Callback = void (*)(KUrlLabel*, QEvent*);
    using KUrlLabel_Event_Callback = bool (*)(KUrlLabel*, QEvent*);
    using KUrlLabel_SizeHint_Callback = QSize* (*)(const KUrlLabel*);
    using KUrlLabel_MinimumSizeHint_Callback = QSize* (*)(const KUrlLabel*);
    using KUrlLabel_HeightForWidth_Callback = int (*)(const KUrlLabel*, int);
    using KUrlLabel_KeyPressEvent_Callback = void (*)(KUrlLabel*, QKeyEvent*);
    using KUrlLabel_PaintEvent_Callback = void (*)(KUrlLabel*, QPaintEvent*);
    using KUrlLabel_ChangeEvent_Callback = void (*)(KUrlLabel*, QEvent*);
    using KUrlLabel_MousePressEvent_Callback = void (*)(KUrlLabel*, QMouseEvent*);
    using KUrlLabel_MouseMoveEvent_Callback = void (*)(KUrlLabel*, QMouseEvent*);
    using KUrlLabel_ContextMenuEvent_Callback = void (*)(KUrlLabel*, QContextMenuEvent*);
    using KUrlLabel_FocusInEvent_Callback = void (*)(KUrlLabel*, QFocusEvent*);
    using KUrlLabel_FocusOutEvent_Callback = void (*)(KUrlLabel*, QFocusEvent*);
    using KUrlLabel_FocusNextPrevChild_Callback = bool (*)(KUrlLabel*, bool);
    using KUrlLabel_InitStyleOption_Callback = void (*)(const KUrlLabel*, QStyleOptionFrame*);
    using KUrlLabel_DevType_Callback = int (*)(const KUrlLabel*);
    using KUrlLabel_SetVisible_Callback = void (*)(KUrlLabel*, bool);
    using KUrlLabel_HasHeightForWidth_Callback = bool (*)(const KUrlLabel*);
    using KUrlLabel_PaintEngine_Callback = QPaintEngine* (*)(const KUrlLabel*);
    using KUrlLabel_MouseDoubleClickEvent_Callback = void (*)(KUrlLabel*, QMouseEvent*);
    using KUrlLabel_WheelEvent_Callback = void (*)(KUrlLabel*, QWheelEvent*);
    using KUrlLabel_KeyReleaseEvent_Callback = void (*)(KUrlLabel*, QKeyEvent*);
    using KUrlLabel_MoveEvent_Callback = void (*)(KUrlLabel*, QMoveEvent*);
    using KUrlLabel_ResizeEvent_Callback = void (*)(KUrlLabel*, QResizeEvent*);
    using KUrlLabel_CloseEvent_Callback = void (*)(KUrlLabel*, QCloseEvent*);
    using KUrlLabel_TabletEvent_Callback = void (*)(KUrlLabel*, QTabletEvent*);
    using KUrlLabel_ActionEvent_Callback = void (*)(KUrlLabel*, QActionEvent*);
    using KUrlLabel_DragEnterEvent_Callback = void (*)(KUrlLabel*, QDragEnterEvent*);
    using KUrlLabel_DragMoveEvent_Callback = void (*)(KUrlLabel*, QDragMoveEvent*);
    using KUrlLabel_DragLeaveEvent_Callback = void (*)(KUrlLabel*, QDragLeaveEvent*);
    using KUrlLabel_DropEvent_Callback = void (*)(KUrlLabel*, QDropEvent*);
    using KUrlLabel_ShowEvent_Callback = void (*)(KUrlLabel*, QShowEvent*);
    using KUrlLabel_HideEvent_Callback = void (*)(KUrlLabel*, QHideEvent*);
    using KUrlLabel_NativeEvent_Callback = bool (*)(KUrlLabel*, libqt_string, void*, intptr_t*);
    using KUrlLabel_Metric_Callback = int (*)(const KUrlLabel*, int);
    using KUrlLabel_InitPainter_Callback = void (*)(const KUrlLabel*, QPainter*);
    using KUrlLabel_Redirected_Callback = QPaintDevice* (*)(const KUrlLabel*, QPoint*);
    using KUrlLabel_SharedPainter_Callback = QPainter* (*)(const KUrlLabel*);
    using KUrlLabel_InputMethodEvent_Callback = void (*)(KUrlLabel*, QInputMethodEvent*);
    using KUrlLabel_InputMethodQuery_Callback = QVariant* (*)(const KUrlLabel*, int);
    using KUrlLabel_EventFilter_Callback = bool (*)(KUrlLabel*, QObject*, QEvent*);
    using KUrlLabel_TimerEvent_Callback = void (*)(KUrlLabel*, QTimerEvent*);
    using KUrlLabel_ChildEvent_Callback = void (*)(KUrlLabel*, QChildEvent*);
    using KUrlLabel_CustomEvent_Callback = void (*)(KUrlLabel*, QEvent*);
    using KUrlLabel_ConnectNotify_Callback = void (*)(KUrlLabel*, QMetaMethod*);
    using KUrlLabel_DisconnectNotify_Callback = void (*)(KUrlLabel*, QMetaMethod*);
    using KUrlLabel::create;
    using KUrlLabel::destroy;
    using KUrlLabel::drawFrame;
    using KUrlLabel::focusNextChild;
    using KUrlLabel::focusPreviousChild;
    using KUrlLabel::getDecodedMetricF;
    using KUrlLabel::isSignalConnected;
    using KUrlLabel::receivers;
    using KUrlLabel::sender;
    using KUrlLabel::senderSignalIndex;
    using KUrlLabel::updateMicroFocus;

    // Instance callback storage
    KUrlLabel_MetaObject_Callback kurllabel_metaobject_callback = nullptr;
    KUrlLabel_Metacast_Callback kurllabel_metacast_callback = nullptr;
    KUrlLabel_Metacall_Callback kurllabel_metacall_callback = nullptr;
    KUrlLabel_SetFont_Callback kurllabel_setfont_callback = nullptr;
    KUrlLabel_MouseReleaseEvent_Callback kurllabel_mousereleaseevent_callback = nullptr;
    KUrlLabel_EnterEvent_Callback kurllabel_enterevent_callback = nullptr;
    KUrlLabel_LeaveEvent_Callback kurllabel_leaveevent_callback = nullptr;
    KUrlLabel_Event_Callback kurllabel_event_callback = nullptr;
    KUrlLabel_SizeHint_Callback kurllabel_sizehint_callback = nullptr;
    KUrlLabel_MinimumSizeHint_Callback kurllabel_minimumsizehint_callback = nullptr;
    KUrlLabel_HeightForWidth_Callback kurllabel_heightforwidth_callback = nullptr;
    KUrlLabel_KeyPressEvent_Callback kurllabel_keypressevent_callback = nullptr;
    KUrlLabel_PaintEvent_Callback kurllabel_paintevent_callback = nullptr;
    KUrlLabel_ChangeEvent_Callback kurllabel_changeevent_callback = nullptr;
    KUrlLabel_MousePressEvent_Callback kurllabel_mousepressevent_callback = nullptr;
    KUrlLabel_MouseMoveEvent_Callback kurllabel_mousemoveevent_callback = nullptr;
    KUrlLabel_ContextMenuEvent_Callback kurllabel_contextmenuevent_callback = nullptr;
    KUrlLabel_FocusInEvent_Callback kurllabel_focusinevent_callback = nullptr;
    KUrlLabel_FocusOutEvent_Callback kurllabel_focusoutevent_callback = nullptr;
    KUrlLabel_FocusNextPrevChild_Callback kurllabel_focusnextprevchild_callback = nullptr;
    KUrlLabel_InitStyleOption_Callback kurllabel_initstyleoption_callback = nullptr;
    KUrlLabel_DevType_Callback kurllabel_devtype_callback = nullptr;
    KUrlLabel_SetVisible_Callback kurllabel_setvisible_callback = nullptr;
    KUrlLabel_HasHeightForWidth_Callback kurllabel_hasheightforwidth_callback = nullptr;
    KUrlLabel_PaintEngine_Callback kurllabel_paintengine_callback = nullptr;
    KUrlLabel_MouseDoubleClickEvent_Callback kurllabel_mousedoubleclickevent_callback = nullptr;
    KUrlLabel_WheelEvent_Callback kurllabel_wheelevent_callback = nullptr;
    KUrlLabel_KeyReleaseEvent_Callback kurllabel_keyreleaseevent_callback = nullptr;
    KUrlLabel_MoveEvent_Callback kurllabel_moveevent_callback = nullptr;
    KUrlLabel_ResizeEvent_Callback kurllabel_resizeevent_callback = nullptr;
    KUrlLabel_CloseEvent_Callback kurllabel_closeevent_callback = nullptr;
    KUrlLabel_TabletEvent_Callback kurllabel_tabletevent_callback = nullptr;
    KUrlLabel_ActionEvent_Callback kurllabel_actionevent_callback = nullptr;
    KUrlLabel_DragEnterEvent_Callback kurllabel_dragenterevent_callback = nullptr;
    KUrlLabel_DragMoveEvent_Callback kurllabel_dragmoveevent_callback = nullptr;
    KUrlLabel_DragLeaveEvent_Callback kurllabel_dragleaveevent_callback = nullptr;
    KUrlLabel_DropEvent_Callback kurllabel_dropevent_callback = nullptr;
    KUrlLabel_ShowEvent_Callback kurllabel_showevent_callback = nullptr;
    KUrlLabel_HideEvent_Callback kurllabel_hideevent_callback = nullptr;
    KUrlLabel_NativeEvent_Callback kurllabel_nativeevent_callback = nullptr;
    KUrlLabel_Metric_Callback kurllabel_metric_callback = nullptr;
    KUrlLabel_InitPainter_Callback kurllabel_initpainter_callback = nullptr;
    KUrlLabel_Redirected_Callback kurllabel_redirected_callback = nullptr;
    KUrlLabel_SharedPainter_Callback kurllabel_sharedpainter_callback = nullptr;
    KUrlLabel_InputMethodEvent_Callback kurllabel_inputmethodevent_callback = nullptr;
    KUrlLabel_InputMethodQuery_Callback kurllabel_inputmethodquery_callback = nullptr;
    KUrlLabel_EventFilter_Callback kurllabel_eventfilter_callback = nullptr;
    KUrlLabel_TimerEvent_Callback kurllabel_timerevent_callback = nullptr;
    KUrlLabel_ChildEvent_Callback kurllabel_childevent_callback = nullptr;
    KUrlLabel_CustomEvent_Callback kurllabel_customevent_callback = nullptr;
    KUrlLabel_ConnectNotify_Callback kurllabel_connectnotify_callback = nullptr;
    KUrlLabel_DisconnectNotify_Callback kurllabel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KUrlLabel {
        using KUrlLabel::actionEvent;
        using KUrlLabel::changeEvent;
        using KUrlLabel::childEvent;
        using KUrlLabel::closeEvent;
        using KUrlLabel::connectNotify;
        using KUrlLabel::contextMenuEvent;
        using KUrlLabel::customEvent;
        using KUrlLabel::disconnectNotify;
        using KUrlLabel::dragEnterEvent;
        using KUrlLabel::dragLeaveEvent;
        using KUrlLabel::dragMoveEvent;
        using KUrlLabel::dropEvent;
        using KUrlLabel::enterEvent;
        using KUrlLabel::event;
        using KUrlLabel::focusInEvent;
        using KUrlLabel::focusNextPrevChild;
        using KUrlLabel::focusOutEvent;
        using KUrlLabel::hideEvent;
        using KUrlLabel::initPainter;
        using KUrlLabel::initStyleOption;
        using KUrlLabel::inputMethodEvent;
        using KUrlLabel::keyPressEvent;
        using KUrlLabel::keyReleaseEvent;
        using KUrlLabel::leaveEvent;
        using KUrlLabel::metric;
        using KUrlLabel::mouseDoubleClickEvent;
        using KUrlLabel::mouseMoveEvent;
        using KUrlLabel::mousePressEvent;
        using KUrlLabel::mouseReleaseEvent;
        using KUrlLabel::moveEvent;
        using KUrlLabel::nativeEvent;
        using KUrlLabel::paintEvent;
        using KUrlLabel::redirected;
        using KUrlLabel::resizeEvent;
        using KUrlLabel::sharedPainter;
        using KUrlLabel::showEvent;
        using KUrlLabel::tabletEvent;
        using KUrlLabel::timerEvent;
        using KUrlLabel::wheelEvent;
    };

    VirtualKUrlLabel(QWidget* parent) : KUrlLabel(parent) {};
    VirtualKUrlLabel() : KUrlLabel() {};
    VirtualKUrlLabel(const QString& url) : KUrlLabel(url) {};
    VirtualKUrlLabel(const QString& url, const QString& text) : KUrlLabel(url, text) {};
    VirtualKUrlLabel(const QString& url, const QString& text, QWidget* parent) : KUrlLabel(url, text, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kurllabel_metaobject_callback) {
            QMetaObject* callback_ret = kurllabel_metaobject_callback(this);
            return callback_ret;
        }
        return KUrlLabel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kurllabel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kurllabel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KUrlLabel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kurllabel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kurllabel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KUrlLabel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& font) override {
        if (kurllabel_setfont_callback) {
            const QFont& font_ret = font;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&font_ret);
            kurllabel_setfont_callback(this, cbval1);
            return;
        }
        KUrlLabel::setFont(font);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (kurllabel_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = param1;
            kurllabel_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KUrlLabel::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kurllabel_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kurllabel_enterevent_callback(this, cbval1);
            return;
        }
        KUrlLabel::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* param1) override {
        if (kurllabel_leaveevent_callback) {
            QEvent* cbval1 = param1;
            kurllabel_leaveevent_callback(this, cbval1);
            return;
        }
        KUrlLabel::leaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (kurllabel_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = kurllabel_event_callback(this, cbval1);
            return callback_ret;
        }
        return KUrlLabel::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kurllabel_sizehint_callback) {
            QSize* callback_ret = kurllabel_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KUrlLabel::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kurllabel_minimumsizehint_callback) {
            QSize* callback_ret = kurllabel_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KUrlLabel::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kurllabel_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kurllabel_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KUrlLabel::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* ev) override {
        if (kurllabel_keypressevent_callback) {
            QKeyEvent* cbval1 = ev;
            kurllabel_keypressevent_callback(this, cbval1);
            return;
        }
        KUrlLabel::keyPressEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kurllabel_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            kurllabel_paintevent_callback(this, cbval1);
            return;
        }
        KUrlLabel::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kurllabel_changeevent_callback) {
            QEvent* cbval1 = param1;
            kurllabel_changeevent_callback(this, cbval1);
            return;
        }
        KUrlLabel::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* ev) override {
        if (kurllabel_mousepressevent_callback) {
            QMouseEvent* cbval1 = ev;
            kurllabel_mousepressevent_callback(this, cbval1);
            return;
        }
        KUrlLabel::mousePressEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* ev) override {
        if (kurllabel_mousemoveevent_callback) {
            QMouseEvent* cbval1 = ev;
            kurllabel_mousemoveevent_callback(this, cbval1);
            return;
        }
        KUrlLabel::mouseMoveEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* ev) override {
        if (kurllabel_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = ev;
            kurllabel_contextmenuevent_callback(this, cbval1);
            return;
        }
        KUrlLabel::contextMenuEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* ev) override {
        if (kurllabel_focusinevent_callback) {
            QFocusEvent* cbval1 = ev;
            kurllabel_focusinevent_callback(this, cbval1);
            return;
        }
        KUrlLabel::focusInEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* ev) override {
        if (kurllabel_focusoutevent_callback) {
            QFocusEvent* cbval1 = ev;
            kurllabel_focusoutevent_callback(this, cbval1);
            return;
        }
        KUrlLabel::focusOutEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kurllabel_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kurllabel_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KUrlLabel::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (kurllabel_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            kurllabel_initstyleoption_callback(this, cbval1);
            return;
        }
        KUrlLabel::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kurllabel_devtype_callback) {
            int callback_ret = kurllabel_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KUrlLabel::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kurllabel_setvisible_callback) {
            bool cbval1 = visible;
            kurllabel_setvisible_callback(this, cbval1);
            return;
        }
        KUrlLabel::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kurllabel_hasheightforwidth_callback) {
            bool callback_ret = kurllabel_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KUrlLabel::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kurllabel_paintengine_callback) {
            QPaintEngine* callback_ret = kurllabel_paintengine_callback(this);
            return callback_ret;
        }
        return KUrlLabel::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kurllabel_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kurllabel_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KUrlLabel::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kurllabel_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kurllabel_wheelevent_callback(this, cbval1);
            return;
        }
        KUrlLabel::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kurllabel_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kurllabel_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KUrlLabel::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kurllabel_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kurllabel_moveevent_callback(this, cbval1);
            return;
        }
        KUrlLabel::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kurllabel_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kurllabel_resizeevent_callback(this, cbval1);
            return;
        }
        KUrlLabel::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kurllabel_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kurllabel_closeevent_callback(this, cbval1);
            return;
        }
        KUrlLabel::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kurllabel_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kurllabel_tabletevent_callback(this, cbval1);
            return;
        }
        KUrlLabel::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kurllabel_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kurllabel_actionevent_callback(this, cbval1);
            return;
        }
        KUrlLabel::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kurllabel_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kurllabel_dragenterevent_callback(this, cbval1);
            return;
        }
        KUrlLabel::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kurllabel_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kurllabel_dragmoveevent_callback(this, cbval1);
            return;
        }
        KUrlLabel::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kurllabel_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kurllabel_dragleaveevent_callback(this, cbval1);
            return;
        }
        KUrlLabel::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kurllabel_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kurllabel_dropevent_callback(this, cbval1);
            return;
        }
        KUrlLabel::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kurllabel_showevent_callback) {
            QShowEvent* cbval1 = event;
            kurllabel_showevent_callback(this, cbval1);
            return;
        }
        KUrlLabel::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kurllabel_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kurllabel_hideevent_callback(this, cbval1);
            return;
        }
        KUrlLabel::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kurllabel_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kurllabel_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KUrlLabel::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kurllabel_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kurllabel_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KUrlLabel::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kurllabel_initpainter_callback) {
            QPainter* cbval1 = painter;
            kurllabel_initpainter_callback(this, cbval1);
            return;
        }
        KUrlLabel::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kurllabel_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kurllabel_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KUrlLabel::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kurllabel_sharedpainter_callback) {
            QPainter* callback_ret = kurllabel_sharedpainter_callback(this);
            return callback_ret;
        }
        return KUrlLabel::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kurllabel_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kurllabel_inputmethodevent_callback(this, cbval1);
            return;
        }
        KUrlLabel::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kurllabel_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kurllabel_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KUrlLabel::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kurllabel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kurllabel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KUrlLabel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kurllabel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kurllabel_timerevent_callback(this, cbval1);
            return;
        }
        KUrlLabel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kurllabel_childevent_callback) {
            QChildEvent* cbval1 = event;
            kurllabel_childevent_callback(this, cbval1);
            return;
        }
        KUrlLabel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kurllabel_customevent_callback) {
            QEvent* cbval1 = event;
            kurllabel_customevent_callback(this, cbval1);
            return;
        }
        KUrlLabel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kurllabel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kurllabel_connectnotify_callback(this, cbval1);
            return;
        }
        KUrlLabel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kurllabel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kurllabel_disconnectnotify_callback(this, cbval1);
            return;
        }
        KUrlLabel::disconnectNotify(signal);
    }

    // Friend functions
    friend void KUrlLabel_SuperMouseReleaseEvent(KUrlLabel* self, QMouseEvent* param1);
    friend void KUrlLabel_SuperEnterEvent(KUrlLabel* self, QEnterEvent* event);
    friend void KUrlLabel_SuperLeaveEvent(KUrlLabel* self, QEvent* param1);
    friend bool KUrlLabel_SuperEvent(KUrlLabel* self, QEvent* param1);
    friend void KUrlLabel_SuperKeyPressEvent(KUrlLabel* self, QKeyEvent* ev);
    friend void KUrlLabel_SuperPaintEvent(KUrlLabel* self, QPaintEvent* param1);
    friend void KUrlLabel_SuperChangeEvent(KUrlLabel* self, QEvent* param1);
    friend void KUrlLabel_SuperMousePressEvent(KUrlLabel* self, QMouseEvent* ev);
    friend void KUrlLabel_SuperMouseMoveEvent(KUrlLabel* self, QMouseEvent* ev);
    friend void KUrlLabel_SuperContextMenuEvent(KUrlLabel* self, QContextMenuEvent* ev);
    friend void KUrlLabel_SuperFocusInEvent(KUrlLabel* self, QFocusEvent* ev);
    friend void KUrlLabel_SuperFocusOutEvent(KUrlLabel* self, QFocusEvent* ev);
    friend bool KUrlLabel_SuperFocusNextPrevChild(KUrlLabel* self, bool next);
    friend void KUrlLabel_SuperInitStyleOption(const KUrlLabel* self, QStyleOptionFrame* option);
    friend void KUrlLabel_SuperMouseDoubleClickEvent(KUrlLabel* self, QMouseEvent* event);
    friend void KUrlLabel_SuperWheelEvent(KUrlLabel* self, QWheelEvent* event);
    friend void KUrlLabel_SuperKeyReleaseEvent(KUrlLabel* self, QKeyEvent* event);
    friend void KUrlLabel_SuperMoveEvent(KUrlLabel* self, QMoveEvent* event);
    friend void KUrlLabel_SuperResizeEvent(KUrlLabel* self, QResizeEvent* event);
    friend void KUrlLabel_SuperCloseEvent(KUrlLabel* self, QCloseEvent* event);
    friend void KUrlLabel_SuperTabletEvent(KUrlLabel* self, QTabletEvent* event);
    friend void KUrlLabel_SuperActionEvent(KUrlLabel* self, QActionEvent* event);
    friend void KUrlLabel_SuperDragEnterEvent(KUrlLabel* self, QDragEnterEvent* event);
    friend void KUrlLabel_SuperDragMoveEvent(KUrlLabel* self, QDragMoveEvent* event);
    friend void KUrlLabel_SuperDragLeaveEvent(KUrlLabel* self, QDragLeaveEvent* event);
    friend void KUrlLabel_SuperDropEvent(KUrlLabel* self, QDropEvent* event);
    friend void KUrlLabel_SuperShowEvent(KUrlLabel* self, QShowEvent* event);
    friend void KUrlLabel_SuperHideEvent(KUrlLabel* self, QHideEvent* event);
    friend bool KUrlLabel_SuperNativeEvent(KUrlLabel* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KUrlLabel_SuperMetric(const KUrlLabel* self, int param1);
    friend void KUrlLabel_SuperInitPainter(const KUrlLabel* self, QPainter* painter);
    friend QPaintDevice* KUrlLabel_SuperRedirected(const KUrlLabel* self, QPoint* offset);
    friend QPainter* KUrlLabel_SuperSharedPainter(const KUrlLabel* self);
    friend void KUrlLabel_SuperInputMethodEvent(KUrlLabel* self, QInputMethodEvent* param1);
    friend void KUrlLabel_SuperTimerEvent(KUrlLabel* self, QTimerEvent* event);
    friend void KUrlLabel_SuperChildEvent(KUrlLabel* self, QChildEvent* event);
    friend void KUrlLabel_SuperCustomEvent(KUrlLabel* self, QEvent* event);
    friend void KUrlLabel_SuperConnectNotify(KUrlLabel* self, const QMetaMethod* signal);
    friend void KUrlLabel_SuperDisconnectNotify(KUrlLabel* self, const QMetaMethod* signal);
};

#endif
