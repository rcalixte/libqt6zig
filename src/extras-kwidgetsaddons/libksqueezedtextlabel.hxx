#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKSQUEEZEDTEXTLABEL_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKSQUEEZEDTEXTLABEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KSqueezedTextLabel
class VirtualKSqueezedTextLabel final : public KSqueezedTextLabel {
  public:
    // Virtual class public types (including callbacks and access types)
    using KSqueezedTextLabel_MetaObject_Callback = QMetaObject* (*)(const KSqueezedTextLabel*);
    using KSqueezedTextLabel_Metacast_Callback = void* (*)(KSqueezedTextLabel*, const char*);
    using KSqueezedTextLabel_Metacall_Callback = int (*)(KSqueezedTextLabel*, int, int, void**);
    using KSqueezedTextLabel_MinimumSizeHint_Callback = QSize* (*)(const KSqueezedTextLabel*);
    using KSqueezedTextLabel_SizeHint_Callback = QSize* (*)(const KSqueezedTextLabel*);
    using KSqueezedTextLabel_SetAlignment_Callback = void (*)(KSqueezedTextLabel*, int);
    using KSqueezedTextLabel_MouseReleaseEvent_Callback = void (*)(KSqueezedTextLabel*, QMouseEvent*);
    using KSqueezedTextLabel_ResizeEvent_Callback = void (*)(KSqueezedTextLabel*, QResizeEvent*);
    using KSqueezedTextLabel_ContextMenuEvent_Callback = void (*)(KSqueezedTextLabel*, QContextMenuEvent*);
    using KSqueezedTextLabel_HeightForWidth_Callback = int (*)(const KSqueezedTextLabel*, int);
    using KSqueezedTextLabel_Event_Callback = bool (*)(KSqueezedTextLabel*, QEvent*);
    using KSqueezedTextLabel_KeyPressEvent_Callback = void (*)(KSqueezedTextLabel*, QKeyEvent*);
    using KSqueezedTextLabel_PaintEvent_Callback = void (*)(KSqueezedTextLabel*, QPaintEvent*);
    using KSqueezedTextLabel_ChangeEvent_Callback = void (*)(KSqueezedTextLabel*, QEvent*);
    using KSqueezedTextLabel_MousePressEvent_Callback = void (*)(KSqueezedTextLabel*, QMouseEvent*);
    using KSqueezedTextLabel_MouseMoveEvent_Callback = void (*)(KSqueezedTextLabel*, QMouseEvent*);
    using KSqueezedTextLabel_FocusInEvent_Callback = void (*)(KSqueezedTextLabel*, QFocusEvent*);
    using KSqueezedTextLabel_FocusOutEvent_Callback = void (*)(KSqueezedTextLabel*, QFocusEvent*);
    using KSqueezedTextLabel_FocusNextPrevChild_Callback = bool (*)(KSqueezedTextLabel*, bool);
    using KSqueezedTextLabel_InitStyleOption_Callback = void (*)(const KSqueezedTextLabel*, QStyleOptionFrame*);
    using KSqueezedTextLabel_DevType_Callback = int (*)(const KSqueezedTextLabel*);
    using KSqueezedTextLabel_SetVisible_Callback = void (*)(KSqueezedTextLabel*, bool);
    using KSqueezedTextLabel_HasHeightForWidth_Callback = bool (*)(const KSqueezedTextLabel*);
    using KSqueezedTextLabel_PaintEngine_Callback = QPaintEngine* (*)(const KSqueezedTextLabel*);
    using KSqueezedTextLabel_MouseDoubleClickEvent_Callback = void (*)(KSqueezedTextLabel*, QMouseEvent*);
    using KSqueezedTextLabel_WheelEvent_Callback = void (*)(KSqueezedTextLabel*, QWheelEvent*);
    using KSqueezedTextLabel_KeyReleaseEvent_Callback = void (*)(KSqueezedTextLabel*, QKeyEvent*);
    using KSqueezedTextLabel_EnterEvent_Callback = void (*)(KSqueezedTextLabel*, QEnterEvent*);
    using KSqueezedTextLabel_LeaveEvent_Callback = void (*)(KSqueezedTextLabel*, QEvent*);
    using KSqueezedTextLabel_MoveEvent_Callback = void (*)(KSqueezedTextLabel*, QMoveEvent*);
    using KSqueezedTextLabel_CloseEvent_Callback = void (*)(KSqueezedTextLabel*, QCloseEvent*);
    using KSqueezedTextLabel_TabletEvent_Callback = void (*)(KSqueezedTextLabel*, QTabletEvent*);
    using KSqueezedTextLabel_ActionEvent_Callback = void (*)(KSqueezedTextLabel*, QActionEvent*);
    using KSqueezedTextLabel_DragEnterEvent_Callback = void (*)(KSqueezedTextLabel*, QDragEnterEvent*);
    using KSqueezedTextLabel_DragMoveEvent_Callback = void (*)(KSqueezedTextLabel*, QDragMoveEvent*);
    using KSqueezedTextLabel_DragLeaveEvent_Callback = void (*)(KSqueezedTextLabel*, QDragLeaveEvent*);
    using KSqueezedTextLabel_DropEvent_Callback = void (*)(KSqueezedTextLabel*, QDropEvent*);
    using KSqueezedTextLabel_ShowEvent_Callback = void (*)(KSqueezedTextLabel*, QShowEvent*);
    using KSqueezedTextLabel_HideEvent_Callback = void (*)(KSqueezedTextLabel*, QHideEvent*);
    using KSqueezedTextLabel_NativeEvent_Callback = bool (*)(KSqueezedTextLabel*, libqt_string, void*, intptr_t*);
    using KSqueezedTextLabel_Metric_Callback = int (*)(const KSqueezedTextLabel*, int);
    using KSqueezedTextLabel_InitPainter_Callback = void (*)(const KSqueezedTextLabel*, QPainter*);
    using KSqueezedTextLabel_Redirected_Callback = QPaintDevice* (*)(const KSqueezedTextLabel*, QPoint*);
    using KSqueezedTextLabel_SharedPainter_Callback = QPainter* (*)(const KSqueezedTextLabel*);
    using KSqueezedTextLabel_InputMethodEvent_Callback = void (*)(KSqueezedTextLabel*, QInputMethodEvent*);
    using KSqueezedTextLabel_InputMethodQuery_Callback = QVariant* (*)(const KSqueezedTextLabel*, int);
    using KSqueezedTextLabel_EventFilter_Callback = bool (*)(KSqueezedTextLabel*, QObject*, QEvent*);
    using KSqueezedTextLabel_TimerEvent_Callback = void (*)(KSqueezedTextLabel*, QTimerEvent*);
    using KSqueezedTextLabel_ChildEvent_Callback = void (*)(KSqueezedTextLabel*, QChildEvent*);
    using KSqueezedTextLabel_CustomEvent_Callback = void (*)(KSqueezedTextLabel*, QEvent*);
    using KSqueezedTextLabel_ConnectNotify_Callback = void (*)(KSqueezedTextLabel*, QMetaMethod*);
    using KSqueezedTextLabel_DisconnectNotify_Callback = void (*)(KSqueezedTextLabel*, QMetaMethod*);
    using KSqueezedTextLabel::create;
    using KSqueezedTextLabel::destroy;
    using KSqueezedTextLabel::drawFrame;
    using KSqueezedTextLabel::focusNextChild;
    using KSqueezedTextLabel::focusPreviousChild;
    using KSqueezedTextLabel::getDecodedMetricF;
    using KSqueezedTextLabel::isSignalConnected;
    using KSqueezedTextLabel::receivers;
    using KSqueezedTextLabel::sender;
    using KSqueezedTextLabel::senderSignalIndex;
    using KSqueezedTextLabel::squeezeTextToLabel;
    using KSqueezedTextLabel::updateMicroFocus;

    // Instance callback storage
    KSqueezedTextLabel_MetaObject_Callback ksqueezedtextlabel_metaobject_callback = nullptr;
    KSqueezedTextLabel_Metacast_Callback ksqueezedtextlabel_metacast_callback = nullptr;
    KSqueezedTextLabel_Metacall_Callback ksqueezedtextlabel_metacall_callback = nullptr;
    KSqueezedTextLabel_MinimumSizeHint_Callback ksqueezedtextlabel_minimumsizehint_callback = nullptr;
    KSqueezedTextLabel_SizeHint_Callback ksqueezedtextlabel_sizehint_callback = nullptr;
    KSqueezedTextLabel_SetAlignment_Callback ksqueezedtextlabel_setalignment_callback = nullptr;
    KSqueezedTextLabel_MouseReleaseEvent_Callback ksqueezedtextlabel_mousereleaseevent_callback = nullptr;
    KSqueezedTextLabel_ResizeEvent_Callback ksqueezedtextlabel_resizeevent_callback = nullptr;
    KSqueezedTextLabel_ContextMenuEvent_Callback ksqueezedtextlabel_contextmenuevent_callback = nullptr;
    KSqueezedTextLabel_HeightForWidth_Callback ksqueezedtextlabel_heightforwidth_callback = nullptr;
    KSqueezedTextLabel_Event_Callback ksqueezedtextlabel_event_callback = nullptr;
    KSqueezedTextLabel_KeyPressEvent_Callback ksqueezedtextlabel_keypressevent_callback = nullptr;
    KSqueezedTextLabel_PaintEvent_Callback ksqueezedtextlabel_paintevent_callback = nullptr;
    KSqueezedTextLabel_ChangeEvent_Callback ksqueezedtextlabel_changeevent_callback = nullptr;
    KSqueezedTextLabel_MousePressEvent_Callback ksqueezedtextlabel_mousepressevent_callback = nullptr;
    KSqueezedTextLabel_MouseMoveEvent_Callback ksqueezedtextlabel_mousemoveevent_callback = nullptr;
    KSqueezedTextLabel_FocusInEvent_Callback ksqueezedtextlabel_focusinevent_callback = nullptr;
    KSqueezedTextLabel_FocusOutEvent_Callback ksqueezedtextlabel_focusoutevent_callback = nullptr;
    KSqueezedTextLabel_FocusNextPrevChild_Callback ksqueezedtextlabel_focusnextprevchild_callback = nullptr;
    KSqueezedTextLabel_InitStyleOption_Callback ksqueezedtextlabel_initstyleoption_callback = nullptr;
    KSqueezedTextLabel_DevType_Callback ksqueezedtextlabel_devtype_callback = nullptr;
    KSqueezedTextLabel_SetVisible_Callback ksqueezedtextlabel_setvisible_callback = nullptr;
    KSqueezedTextLabel_HasHeightForWidth_Callback ksqueezedtextlabel_hasheightforwidth_callback = nullptr;
    KSqueezedTextLabel_PaintEngine_Callback ksqueezedtextlabel_paintengine_callback = nullptr;
    KSqueezedTextLabel_MouseDoubleClickEvent_Callback ksqueezedtextlabel_mousedoubleclickevent_callback = nullptr;
    KSqueezedTextLabel_WheelEvent_Callback ksqueezedtextlabel_wheelevent_callback = nullptr;
    KSqueezedTextLabel_KeyReleaseEvent_Callback ksqueezedtextlabel_keyreleaseevent_callback = nullptr;
    KSqueezedTextLabel_EnterEvent_Callback ksqueezedtextlabel_enterevent_callback = nullptr;
    KSqueezedTextLabel_LeaveEvent_Callback ksqueezedtextlabel_leaveevent_callback = nullptr;
    KSqueezedTextLabel_MoveEvent_Callback ksqueezedtextlabel_moveevent_callback = nullptr;
    KSqueezedTextLabel_CloseEvent_Callback ksqueezedtextlabel_closeevent_callback = nullptr;
    KSqueezedTextLabel_TabletEvent_Callback ksqueezedtextlabel_tabletevent_callback = nullptr;
    KSqueezedTextLabel_ActionEvent_Callback ksqueezedtextlabel_actionevent_callback = nullptr;
    KSqueezedTextLabel_DragEnterEvent_Callback ksqueezedtextlabel_dragenterevent_callback = nullptr;
    KSqueezedTextLabel_DragMoveEvent_Callback ksqueezedtextlabel_dragmoveevent_callback = nullptr;
    KSqueezedTextLabel_DragLeaveEvent_Callback ksqueezedtextlabel_dragleaveevent_callback = nullptr;
    KSqueezedTextLabel_DropEvent_Callback ksqueezedtextlabel_dropevent_callback = nullptr;
    KSqueezedTextLabel_ShowEvent_Callback ksqueezedtextlabel_showevent_callback = nullptr;
    KSqueezedTextLabel_HideEvent_Callback ksqueezedtextlabel_hideevent_callback = nullptr;
    KSqueezedTextLabel_NativeEvent_Callback ksqueezedtextlabel_nativeevent_callback = nullptr;
    KSqueezedTextLabel_Metric_Callback ksqueezedtextlabel_metric_callback = nullptr;
    KSqueezedTextLabel_InitPainter_Callback ksqueezedtextlabel_initpainter_callback = nullptr;
    KSqueezedTextLabel_Redirected_Callback ksqueezedtextlabel_redirected_callback = nullptr;
    KSqueezedTextLabel_SharedPainter_Callback ksqueezedtextlabel_sharedpainter_callback = nullptr;
    KSqueezedTextLabel_InputMethodEvent_Callback ksqueezedtextlabel_inputmethodevent_callback = nullptr;
    KSqueezedTextLabel_InputMethodQuery_Callback ksqueezedtextlabel_inputmethodquery_callback = nullptr;
    KSqueezedTextLabel_EventFilter_Callback ksqueezedtextlabel_eventfilter_callback = nullptr;
    KSqueezedTextLabel_TimerEvent_Callback ksqueezedtextlabel_timerevent_callback = nullptr;
    KSqueezedTextLabel_ChildEvent_Callback ksqueezedtextlabel_childevent_callback = nullptr;
    KSqueezedTextLabel_CustomEvent_Callback ksqueezedtextlabel_customevent_callback = nullptr;
    KSqueezedTextLabel_ConnectNotify_Callback ksqueezedtextlabel_connectnotify_callback = nullptr;
    KSqueezedTextLabel_DisconnectNotify_Callback ksqueezedtextlabel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KSqueezedTextLabel {
        using KSqueezedTextLabel::actionEvent;
        using KSqueezedTextLabel::changeEvent;
        using KSqueezedTextLabel::childEvent;
        using KSqueezedTextLabel::closeEvent;
        using KSqueezedTextLabel::connectNotify;
        using KSqueezedTextLabel::contextMenuEvent;
        using KSqueezedTextLabel::customEvent;
        using KSqueezedTextLabel::disconnectNotify;
        using KSqueezedTextLabel::dragEnterEvent;
        using KSqueezedTextLabel::dragLeaveEvent;
        using KSqueezedTextLabel::dragMoveEvent;
        using KSqueezedTextLabel::dropEvent;
        using KSqueezedTextLabel::enterEvent;
        using KSqueezedTextLabel::event;
        using KSqueezedTextLabel::focusInEvent;
        using KSqueezedTextLabel::focusNextPrevChild;
        using KSqueezedTextLabel::focusOutEvent;
        using KSqueezedTextLabel::hideEvent;
        using KSqueezedTextLabel::initPainter;
        using KSqueezedTextLabel::initStyleOption;
        using KSqueezedTextLabel::inputMethodEvent;
        using KSqueezedTextLabel::keyPressEvent;
        using KSqueezedTextLabel::keyReleaseEvent;
        using KSqueezedTextLabel::leaveEvent;
        using KSqueezedTextLabel::metric;
        using KSqueezedTextLabel::mouseDoubleClickEvent;
        using KSqueezedTextLabel::mouseMoveEvent;
        using KSqueezedTextLabel::mousePressEvent;
        using KSqueezedTextLabel::mouseReleaseEvent;
        using KSqueezedTextLabel::moveEvent;
        using KSqueezedTextLabel::nativeEvent;
        using KSqueezedTextLabel::paintEvent;
        using KSqueezedTextLabel::redirected;
        using KSqueezedTextLabel::resizeEvent;
        using KSqueezedTextLabel::sharedPainter;
        using KSqueezedTextLabel::showEvent;
        using KSqueezedTextLabel::tabletEvent;
        using KSqueezedTextLabel::timerEvent;
        using KSqueezedTextLabel::wheelEvent;
    };

    VirtualKSqueezedTextLabel(QWidget* parent) : KSqueezedTextLabel(parent) {};
    VirtualKSqueezedTextLabel() : KSqueezedTextLabel() {};
    VirtualKSqueezedTextLabel(const QString& text) : KSqueezedTextLabel(text) {};
    VirtualKSqueezedTextLabel(const QString& text, QWidget* parent) : KSqueezedTextLabel(text, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ksqueezedtextlabel_metaobject_callback) {
            QMetaObject* callback_ret = ksqueezedtextlabel_metaobject_callback(this);
            return callback_ret;
        }
        return KSqueezedTextLabel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ksqueezedtextlabel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = ksqueezedtextlabel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KSqueezedTextLabel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ksqueezedtextlabel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = ksqueezedtextlabel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KSqueezedTextLabel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (ksqueezedtextlabel_minimumsizehint_callback) {
            QSize* callback_ret = ksqueezedtextlabel_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KSqueezedTextLabel::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (ksqueezedtextlabel_sizehint_callback) {
            QSize* callback_ret = ksqueezedtextlabel_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KSqueezedTextLabel::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAlignment(Qt::Alignment alignment) override {
        if (ksqueezedtextlabel_setalignment_callback) {
            int cbval1 = static_cast<int>(alignment);
            ksqueezedtextlabel_setalignment_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::setAlignment(alignment);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (ksqueezedtextlabel_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = param1;
            ksqueezedtextlabel_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (ksqueezedtextlabel_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            ksqueezedtextlabel_resizeevent_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (ksqueezedtextlabel_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            ksqueezedtextlabel_contextmenuevent_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (ksqueezedtextlabel_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = ksqueezedtextlabel_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KSqueezedTextLabel::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (ksqueezedtextlabel_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = ksqueezedtextlabel_event_callback(this, cbval1);
            return callback_ret;
        }
        return KSqueezedTextLabel::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* ev) override {
        if (ksqueezedtextlabel_keypressevent_callback) {
            QKeyEvent* cbval1 = ev;
            ksqueezedtextlabel_keypressevent_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::keyPressEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (ksqueezedtextlabel_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            ksqueezedtextlabel_paintevent_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (ksqueezedtextlabel_changeevent_callback) {
            QEvent* cbval1 = param1;
            ksqueezedtextlabel_changeevent_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* ev) override {
        if (ksqueezedtextlabel_mousepressevent_callback) {
            QMouseEvent* cbval1 = ev;
            ksqueezedtextlabel_mousepressevent_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::mousePressEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* ev) override {
        if (ksqueezedtextlabel_mousemoveevent_callback) {
            QMouseEvent* cbval1 = ev;
            ksqueezedtextlabel_mousemoveevent_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::mouseMoveEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* ev) override {
        if (ksqueezedtextlabel_focusinevent_callback) {
            QFocusEvent* cbval1 = ev;
            ksqueezedtextlabel_focusinevent_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::focusInEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* ev) override {
        if (ksqueezedtextlabel_focusoutevent_callback) {
            QFocusEvent* cbval1 = ev;
            ksqueezedtextlabel_focusoutevent_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::focusOutEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (ksqueezedtextlabel_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = ksqueezedtextlabel_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KSqueezedTextLabel::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (ksqueezedtextlabel_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            ksqueezedtextlabel_initstyleoption_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (ksqueezedtextlabel_devtype_callback) {
            int callback_ret = ksqueezedtextlabel_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KSqueezedTextLabel::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (ksqueezedtextlabel_setvisible_callback) {
            bool cbval1 = visible;
            ksqueezedtextlabel_setvisible_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (ksqueezedtextlabel_hasheightforwidth_callback) {
            bool callback_ret = ksqueezedtextlabel_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KSqueezedTextLabel::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (ksqueezedtextlabel_paintengine_callback) {
            QPaintEngine* callback_ret = ksqueezedtextlabel_paintengine_callback(this);
            return callback_ret;
        }
        return KSqueezedTextLabel::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (ksqueezedtextlabel_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            ksqueezedtextlabel_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (ksqueezedtextlabel_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            ksqueezedtextlabel_wheelevent_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (ksqueezedtextlabel_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            ksqueezedtextlabel_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (ksqueezedtextlabel_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            ksqueezedtextlabel_enterevent_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (ksqueezedtextlabel_leaveevent_callback) {
            QEvent* cbval1 = event;
            ksqueezedtextlabel_leaveevent_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (ksqueezedtextlabel_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            ksqueezedtextlabel_moveevent_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (ksqueezedtextlabel_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            ksqueezedtextlabel_closeevent_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (ksqueezedtextlabel_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            ksqueezedtextlabel_tabletevent_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (ksqueezedtextlabel_actionevent_callback) {
            QActionEvent* cbval1 = event;
            ksqueezedtextlabel_actionevent_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (ksqueezedtextlabel_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            ksqueezedtextlabel_dragenterevent_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (ksqueezedtextlabel_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            ksqueezedtextlabel_dragmoveevent_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (ksqueezedtextlabel_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            ksqueezedtextlabel_dragleaveevent_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (ksqueezedtextlabel_dropevent_callback) {
            QDropEvent* cbval1 = event;
            ksqueezedtextlabel_dropevent_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (ksqueezedtextlabel_showevent_callback) {
            QShowEvent* cbval1 = event;
            ksqueezedtextlabel_showevent_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (ksqueezedtextlabel_hideevent_callback) {
            QHideEvent* cbval1 = event;
            ksqueezedtextlabel_hideevent_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (ksqueezedtextlabel_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = ksqueezedtextlabel_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KSqueezedTextLabel::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (ksqueezedtextlabel_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = ksqueezedtextlabel_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KSqueezedTextLabel::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (ksqueezedtextlabel_initpainter_callback) {
            QPainter* cbval1 = painter;
            ksqueezedtextlabel_initpainter_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (ksqueezedtextlabel_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = ksqueezedtextlabel_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KSqueezedTextLabel::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (ksqueezedtextlabel_sharedpainter_callback) {
            QPainter* callback_ret = ksqueezedtextlabel_sharedpainter_callback(this);
            return callback_ret;
        }
        return KSqueezedTextLabel::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (ksqueezedtextlabel_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            ksqueezedtextlabel_inputmethodevent_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (ksqueezedtextlabel_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = ksqueezedtextlabel_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KSqueezedTextLabel::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ksqueezedtextlabel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = ksqueezedtextlabel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KSqueezedTextLabel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ksqueezedtextlabel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            ksqueezedtextlabel_timerevent_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ksqueezedtextlabel_childevent_callback) {
            QChildEvent* cbval1 = event;
            ksqueezedtextlabel_childevent_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ksqueezedtextlabel_customevent_callback) {
            QEvent* cbval1 = event;
            ksqueezedtextlabel_customevent_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ksqueezedtextlabel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ksqueezedtextlabel_connectnotify_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ksqueezedtextlabel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ksqueezedtextlabel_disconnectnotify_callback(this, cbval1);
            return;
        }
        KSqueezedTextLabel::disconnectNotify(signal);
    }

    // Friend functions
    friend void KSqueezedTextLabel_SuperMouseReleaseEvent(KSqueezedTextLabel* self, QMouseEvent* param1);
    friend void KSqueezedTextLabel_SuperResizeEvent(KSqueezedTextLabel* self, QResizeEvent* param1);
    friend void KSqueezedTextLabel_SuperContextMenuEvent(KSqueezedTextLabel* self, QContextMenuEvent* param1);
    friend bool KSqueezedTextLabel_SuperEvent(KSqueezedTextLabel* self, QEvent* e);
    friend void KSqueezedTextLabel_SuperKeyPressEvent(KSqueezedTextLabel* self, QKeyEvent* ev);
    friend void KSqueezedTextLabel_SuperPaintEvent(KSqueezedTextLabel* self, QPaintEvent* param1);
    friend void KSqueezedTextLabel_SuperChangeEvent(KSqueezedTextLabel* self, QEvent* param1);
    friend void KSqueezedTextLabel_SuperMousePressEvent(KSqueezedTextLabel* self, QMouseEvent* ev);
    friend void KSqueezedTextLabel_SuperMouseMoveEvent(KSqueezedTextLabel* self, QMouseEvent* ev);
    friend void KSqueezedTextLabel_SuperFocusInEvent(KSqueezedTextLabel* self, QFocusEvent* ev);
    friend void KSqueezedTextLabel_SuperFocusOutEvent(KSqueezedTextLabel* self, QFocusEvent* ev);
    friend bool KSqueezedTextLabel_SuperFocusNextPrevChild(KSqueezedTextLabel* self, bool next);
    friend void KSqueezedTextLabel_SuperInitStyleOption(const KSqueezedTextLabel* self, QStyleOptionFrame* option);
    friend void KSqueezedTextLabel_SuperMouseDoubleClickEvent(KSqueezedTextLabel* self, QMouseEvent* event);
    friend void KSqueezedTextLabel_SuperWheelEvent(KSqueezedTextLabel* self, QWheelEvent* event);
    friend void KSqueezedTextLabel_SuperKeyReleaseEvent(KSqueezedTextLabel* self, QKeyEvent* event);
    friend void KSqueezedTextLabel_SuperEnterEvent(KSqueezedTextLabel* self, QEnterEvent* event);
    friend void KSqueezedTextLabel_SuperLeaveEvent(KSqueezedTextLabel* self, QEvent* event);
    friend void KSqueezedTextLabel_SuperMoveEvent(KSqueezedTextLabel* self, QMoveEvent* event);
    friend void KSqueezedTextLabel_SuperCloseEvent(KSqueezedTextLabel* self, QCloseEvent* event);
    friend void KSqueezedTextLabel_SuperTabletEvent(KSqueezedTextLabel* self, QTabletEvent* event);
    friend void KSqueezedTextLabel_SuperActionEvent(KSqueezedTextLabel* self, QActionEvent* event);
    friend void KSqueezedTextLabel_SuperDragEnterEvent(KSqueezedTextLabel* self, QDragEnterEvent* event);
    friend void KSqueezedTextLabel_SuperDragMoveEvent(KSqueezedTextLabel* self, QDragMoveEvent* event);
    friend void KSqueezedTextLabel_SuperDragLeaveEvent(KSqueezedTextLabel* self, QDragLeaveEvent* event);
    friend void KSqueezedTextLabel_SuperDropEvent(KSqueezedTextLabel* self, QDropEvent* event);
    friend void KSqueezedTextLabel_SuperShowEvent(KSqueezedTextLabel* self, QShowEvent* event);
    friend void KSqueezedTextLabel_SuperHideEvent(KSqueezedTextLabel* self, QHideEvent* event);
    friend bool KSqueezedTextLabel_SuperNativeEvent(KSqueezedTextLabel* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KSqueezedTextLabel_SuperMetric(const KSqueezedTextLabel* self, int param1);
    friend void KSqueezedTextLabel_SuperInitPainter(const KSqueezedTextLabel* self, QPainter* painter);
    friend QPaintDevice* KSqueezedTextLabel_SuperRedirected(const KSqueezedTextLabel* self, QPoint* offset);
    friend QPainter* KSqueezedTextLabel_SuperSharedPainter(const KSqueezedTextLabel* self);
    friend void KSqueezedTextLabel_SuperInputMethodEvent(KSqueezedTextLabel* self, QInputMethodEvent* param1);
    friend void KSqueezedTextLabel_SuperTimerEvent(KSqueezedTextLabel* self, QTimerEvent* event);
    friend void KSqueezedTextLabel_SuperChildEvent(KSqueezedTextLabel* self, QChildEvent* event);
    friend void KSqueezedTextLabel_SuperCustomEvent(KSqueezedTextLabel* self, QEvent* event);
    friend void KSqueezedTextLabel_SuperConnectNotify(KSqueezedTextLabel* self, const QMetaMethod* signal);
    friend void KSqueezedTextLabel_SuperDisconnectNotify(KSqueezedTextLabel* self, const QMetaMethod* signal);
};

#endif
