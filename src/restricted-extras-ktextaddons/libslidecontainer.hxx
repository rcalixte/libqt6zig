#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBSLIDECONTAINER_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBSLIDECONTAINER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextAddonsWidgets::SlideContainer
class VirtualTextAddonsWidgetsSlideContainer final : public TextAddonsWidgets::SlideContainer {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextAddonsWidgets__SlideContainer_MetaObject_Callback = QMetaObject* (*)(const TextAddonsWidgets__SlideContainer*);
    using TextAddonsWidgets__SlideContainer_Metacast_Callback = void* (*)(TextAddonsWidgets__SlideContainer*, const char*);
    using TextAddonsWidgets__SlideContainer_Metacall_Callback = int (*)(TextAddonsWidgets__SlideContainer*, int, int, void**);
    using TextAddonsWidgets__SlideContainer_SizeHint_Callback = QSize* (*)(const TextAddonsWidgets__SlideContainer*);
    using TextAddonsWidgets__SlideContainer_MinimumSizeHint_Callback = QSize* (*)(const TextAddonsWidgets__SlideContainer*);
    using TextAddonsWidgets__SlideContainer_ResizeEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QResizeEvent*);
    using TextAddonsWidgets__SlideContainer_EventFilter_Callback = bool (*)(TextAddonsWidgets__SlideContainer*, QObject*, QEvent*);
    using TextAddonsWidgets__SlideContainer_Event_Callback = bool (*)(TextAddonsWidgets__SlideContainer*, QEvent*);
    using TextAddonsWidgets__SlideContainer_PaintEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QPaintEvent*);
    using TextAddonsWidgets__SlideContainer_ChangeEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QEvent*);
    using TextAddonsWidgets__SlideContainer_InitStyleOption_Callback = void (*)(const TextAddonsWidgets__SlideContainer*, QStyleOptionFrame*);
    using TextAddonsWidgets__SlideContainer_DevType_Callback = int (*)(const TextAddonsWidgets__SlideContainer*);
    using TextAddonsWidgets__SlideContainer_SetVisible_Callback = void (*)(TextAddonsWidgets__SlideContainer*, bool);
    using TextAddonsWidgets__SlideContainer_HeightForWidth_Callback = int (*)(const TextAddonsWidgets__SlideContainer*, int);
    using TextAddonsWidgets__SlideContainer_HasHeightForWidth_Callback = bool (*)(const TextAddonsWidgets__SlideContainer*);
    using TextAddonsWidgets__SlideContainer_PaintEngine_Callback = QPaintEngine* (*)(const TextAddonsWidgets__SlideContainer*);
    using TextAddonsWidgets__SlideContainer_MousePressEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QMouseEvent*);
    using TextAddonsWidgets__SlideContainer_MouseReleaseEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QMouseEvent*);
    using TextAddonsWidgets__SlideContainer_MouseDoubleClickEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QMouseEvent*);
    using TextAddonsWidgets__SlideContainer_MouseMoveEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QMouseEvent*);
    using TextAddonsWidgets__SlideContainer_WheelEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QWheelEvent*);
    using TextAddonsWidgets__SlideContainer_KeyPressEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QKeyEvent*);
    using TextAddonsWidgets__SlideContainer_KeyReleaseEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QKeyEvent*);
    using TextAddonsWidgets__SlideContainer_FocusInEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QFocusEvent*);
    using TextAddonsWidgets__SlideContainer_FocusOutEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QFocusEvent*);
    using TextAddonsWidgets__SlideContainer_EnterEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QEnterEvent*);
    using TextAddonsWidgets__SlideContainer_LeaveEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QEvent*);
    using TextAddonsWidgets__SlideContainer_MoveEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QMoveEvent*);
    using TextAddonsWidgets__SlideContainer_CloseEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QCloseEvent*);
    using TextAddonsWidgets__SlideContainer_ContextMenuEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QContextMenuEvent*);
    using TextAddonsWidgets__SlideContainer_TabletEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QTabletEvent*);
    using TextAddonsWidgets__SlideContainer_ActionEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QActionEvent*);
    using TextAddonsWidgets__SlideContainer_DragEnterEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QDragEnterEvent*);
    using TextAddonsWidgets__SlideContainer_DragMoveEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QDragMoveEvent*);
    using TextAddonsWidgets__SlideContainer_DragLeaveEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QDragLeaveEvent*);
    using TextAddonsWidgets__SlideContainer_DropEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QDropEvent*);
    using TextAddonsWidgets__SlideContainer_ShowEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QShowEvent*);
    using TextAddonsWidgets__SlideContainer_HideEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QHideEvent*);
    using TextAddonsWidgets__SlideContainer_NativeEvent_Callback = bool (*)(TextAddonsWidgets__SlideContainer*, libqt_string, void*, intptr_t*);
    using TextAddonsWidgets__SlideContainer_Metric_Callback = int (*)(const TextAddonsWidgets__SlideContainer*, int);
    using TextAddonsWidgets__SlideContainer_InitPainter_Callback = void (*)(const TextAddonsWidgets__SlideContainer*, QPainter*);
    using TextAddonsWidgets__SlideContainer_Redirected_Callback = QPaintDevice* (*)(const TextAddonsWidgets__SlideContainer*, QPoint*);
    using TextAddonsWidgets__SlideContainer_SharedPainter_Callback = QPainter* (*)(const TextAddonsWidgets__SlideContainer*);
    using TextAddonsWidgets__SlideContainer_InputMethodEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QInputMethodEvent*);
    using TextAddonsWidgets__SlideContainer_InputMethodQuery_Callback = QVariant* (*)(const TextAddonsWidgets__SlideContainer*, int);
    using TextAddonsWidgets__SlideContainer_FocusNextPrevChild_Callback = bool (*)(TextAddonsWidgets__SlideContainer*, bool);
    using TextAddonsWidgets__SlideContainer_TimerEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QTimerEvent*);
    using TextAddonsWidgets__SlideContainer_ChildEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QChildEvent*);
    using TextAddonsWidgets__SlideContainer_CustomEvent_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QEvent*);
    using TextAddonsWidgets__SlideContainer_ConnectNotify_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QMetaMethod*);
    using TextAddonsWidgets__SlideContainer_DisconnectNotify_Callback = void (*)(TextAddonsWidgets__SlideContainer*, QMetaMethod*);
    using TextAddonsWidgets::SlideContainer::create;
    using TextAddonsWidgets::SlideContainer::destroy;
    using TextAddonsWidgets::SlideContainer::drawFrame;
    using TextAddonsWidgets::SlideContainer::focusNextChild;
    using TextAddonsWidgets::SlideContainer::focusPreviousChild;
    using TextAddonsWidgets::SlideContainer::getDecodedMetricF;
    using TextAddonsWidgets::SlideContainer::isSignalConnected;
    using TextAddonsWidgets::SlideContainer::receivers;
    using TextAddonsWidgets::SlideContainer::sender;
    using TextAddonsWidgets::SlideContainer::senderSignalIndex;
    using TextAddonsWidgets::SlideContainer::updateMicroFocus;

    // Instance callback storage
    TextAddonsWidgets__SlideContainer_MetaObject_Callback textaddonswidgets__slidecontainer_metaobject_callback = nullptr;
    TextAddonsWidgets__SlideContainer_Metacast_Callback textaddonswidgets__slidecontainer_metacast_callback = nullptr;
    TextAddonsWidgets__SlideContainer_Metacall_Callback textaddonswidgets__slidecontainer_metacall_callback = nullptr;
    TextAddonsWidgets__SlideContainer_SizeHint_Callback textaddonswidgets__slidecontainer_sizehint_callback = nullptr;
    TextAddonsWidgets__SlideContainer_MinimumSizeHint_Callback textaddonswidgets__slidecontainer_minimumsizehint_callback = nullptr;
    TextAddonsWidgets__SlideContainer_ResizeEvent_Callback textaddonswidgets__slidecontainer_resizeevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_EventFilter_Callback textaddonswidgets__slidecontainer_eventfilter_callback = nullptr;
    TextAddonsWidgets__SlideContainer_Event_Callback textaddonswidgets__slidecontainer_event_callback = nullptr;
    TextAddonsWidgets__SlideContainer_PaintEvent_Callback textaddonswidgets__slidecontainer_paintevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_ChangeEvent_Callback textaddonswidgets__slidecontainer_changeevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_InitStyleOption_Callback textaddonswidgets__slidecontainer_initstyleoption_callback = nullptr;
    TextAddonsWidgets__SlideContainer_DevType_Callback textaddonswidgets__slidecontainer_devtype_callback = nullptr;
    TextAddonsWidgets__SlideContainer_SetVisible_Callback textaddonswidgets__slidecontainer_setvisible_callback = nullptr;
    TextAddonsWidgets__SlideContainer_HeightForWidth_Callback textaddonswidgets__slidecontainer_heightforwidth_callback = nullptr;
    TextAddonsWidgets__SlideContainer_HasHeightForWidth_Callback textaddonswidgets__slidecontainer_hasheightforwidth_callback = nullptr;
    TextAddonsWidgets__SlideContainer_PaintEngine_Callback textaddonswidgets__slidecontainer_paintengine_callback = nullptr;
    TextAddonsWidgets__SlideContainer_MousePressEvent_Callback textaddonswidgets__slidecontainer_mousepressevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_MouseReleaseEvent_Callback textaddonswidgets__slidecontainer_mousereleaseevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_MouseDoubleClickEvent_Callback textaddonswidgets__slidecontainer_mousedoubleclickevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_MouseMoveEvent_Callback textaddonswidgets__slidecontainer_mousemoveevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_WheelEvent_Callback textaddonswidgets__slidecontainer_wheelevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_KeyPressEvent_Callback textaddonswidgets__slidecontainer_keypressevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_KeyReleaseEvent_Callback textaddonswidgets__slidecontainer_keyreleaseevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_FocusInEvent_Callback textaddonswidgets__slidecontainer_focusinevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_FocusOutEvent_Callback textaddonswidgets__slidecontainer_focusoutevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_EnterEvent_Callback textaddonswidgets__slidecontainer_enterevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_LeaveEvent_Callback textaddonswidgets__slidecontainer_leaveevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_MoveEvent_Callback textaddonswidgets__slidecontainer_moveevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_CloseEvent_Callback textaddonswidgets__slidecontainer_closeevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_ContextMenuEvent_Callback textaddonswidgets__slidecontainer_contextmenuevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_TabletEvent_Callback textaddonswidgets__slidecontainer_tabletevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_ActionEvent_Callback textaddonswidgets__slidecontainer_actionevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_DragEnterEvent_Callback textaddonswidgets__slidecontainer_dragenterevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_DragMoveEvent_Callback textaddonswidgets__slidecontainer_dragmoveevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_DragLeaveEvent_Callback textaddonswidgets__slidecontainer_dragleaveevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_DropEvent_Callback textaddonswidgets__slidecontainer_dropevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_ShowEvent_Callback textaddonswidgets__slidecontainer_showevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_HideEvent_Callback textaddonswidgets__slidecontainer_hideevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_NativeEvent_Callback textaddonswidgets__slidecontainer_nativeevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_Metric_Callback textaddonswidgets__slidecontainer_metric_callback = nullptr;
    TextAddonsWidgets__SlideContainer_InitPainter_Callback textaddonswidgets__slidecontainer_initpainter_callback = nullptr;
    TextAddonsWidgets__SlideContainer_Redirected_Callback textaddonswidgets__slidecontainer_redirected_callback = nullptr;
    TextAddonsWidgets__SlideContainer_SharedPainter_Callback textaddonswidgets__slidecontainer_sharedpainter_callback = nullptr;
    TextAddonsWidgets__SlideContainer_InputMethodEvent_Callback textaddonswidgets__slidecontainer_inputmethodevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_InputMethodQuery_Callback textaddonswidgets__slidecontainer_inputmethodquery_callback = nullptr;
    TextAddonsWidgets__SlideContainer_FocusNextPrevChild_Callback textaddonswidgets__slidecontainer_focusnextprevchild_callback = nullptr;
    TextAddonsWidgets__SlideContainer_TimerEvent_Callback textaddonswidgets__slidecontainer_timerevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_ChildEvent_Callback textaddonswidgets__slidecontainer_childevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_CustomEvent_Callback textaddonswidgets__slidecontainer_customevent_callback = nullptr;
    TextAddonsWidgets__SlideContainer_ConnectNotify_Callback textaddonswidgets__slidecontainer_connectnotify_callback = nullptr;
    TextAddonsWidgets__SlideContainer_DisconnectNotify_Callback textaddonswidgets__slidecontainer_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextAddonsWidgets::SlideContainer {
        using TextAddonsWidgets::SlideContainer::actionEvent;
        using TextAddonsWidgets::SlideContainer::changeEvent;
        using TextAddonsWidgets::SlideContainer::childEvent;
        using TextAddonsWidgets::SlideContainer::closeEvent;
        using TextAddonsWidgets::SlideContainer::connectNotify;
        using TextAddonsWidgets::SlideContainer::contextMenuEvent;
        using TextAddonsWidgets::SlideContainer::customEvent;
        using TextAddonsWidgets::SlideContainer::disconnectNotify;
        using TextAddonsWidgets::SlideContainer::dragEnterEvent;
        using TextAddonsWidgets::SlideContainer::dragLeaveEvent;
        using TextAddonsWidgets::SlideContainer::dragMoveEvent;
        using TextAddonsWidgets::SlideContainer::dropEvent;
        using TextAddonsWidgets::SlideContainer::enterEvent;
        using TextAddonsWidgets::SlideContainer::event;
        using TextAddonsWidgets::SlideContainer::eventFilter;
        using TextAddonsWidgets::SlideContainer::focusInEvent;
        using TextAddonsWidgets::SlideContainer::focusNextPrevChild;
        using TextAddonsWidgets::SlideContainer::focusOutEvent;
        using TextAddonsWidgets::SlideContainer::hideEvent;
        using TextAddonsWidgets::SlideContainer::initPainter;
        using TextAddonsWidgets::SlideContainer::initStyleOption;
        using TextAddonsWidgets::SlideContainer::inputMethodEvent;
        using TextAddonsWidgets::SlideContainer::keyPressEvent;
        using TextAddonsWidgets::SlideContainer::keyReleaseEvent;
        using TextAddonsWidgets::SlideContainer::leaveEvent;
        using TextAddonsWidgets::SlideContainer::metric;
        using TextAddonsWidgets::SlideContainer::mouseDoubleClickEvent;
        using TextAddonsWidgets::SlideContainer::mouseMoveEvent;
        using TextAddonsWidgets::SlideContainer::mousePressEvent;
        using TextAddonsWidgets::SlideContainer::mouseReleaseEvent;
        using TextAddonsWidgets::SlideContainer::moveEvent;
        using TextAddonsWidgets::SlideContainer::nativeEvent;
        using TextAddonsWidgets::SlideContainer::paintEvent;
        using TextAddonsWidgets::SlideContainer::redirected;
        using TextAddonsWidgets::SlideContainer::resizeEvent;
        using TextAddonsWidgets::SlideContainer::sharedPainter;
        using TextAddonsWidgets::SlideContainer::showEvent;
        using TextAddonsWidgets::SlideContainer::tabletEvent;
        using TextAddonsWidgets::SlideContainer::timerEvent;
        using TextAddonsWidgets::SlideContainer::wheelEvent;
    };

    VirtualTextAddonsWidgetsSlideContainer(QWidget* parent) : TextAddonsWidgets::SlideContainer(parent) {};
    VirtualTextAddonsWidgetsSlideContainer() : TextAddonsWidgets::SlideContainer() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textaddonswidgets__slidecontainer_metaobject_callback) {
            QMetaObject* callback_ret = textaddonswidgets__slidecontainer_metaobject_callback(this);
            return callback_ret;
        }
        return TextAddonsWidgets__SlideContainer::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textaddonswidgets__slidecontainer_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textaddonswidgets__slidecontainer_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextAddonsWidgets__SlideContainer::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textaddonswidgets__slidecontainer_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textaddonswidgets__slidecontainer_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextAddonsWidgets__SlideContainer::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textaddonswidgets__slidecontainer_sizehint_callback) {
            QSize* callback_ret = textaddonswidgets__slidecontainer_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextAddonsWidgets__SlideContainer::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textaddonswidgets__slidecontainer_minimumsizehint_callback) {
            QSize* callback_ret = textaddonswidgets__slidecontainer_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextAddonsWidgets__SlideContainer::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (textaddonswidgets__slidecontainer_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            textaddonswidgets__slidecontainer_resizeevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* event) override {
        if (textaddonswidgets__slidecontainer_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = event;
            bool callback_ret = textaddonswidgets__slidecontainer_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextAddonsWidgets__SlideContainer::eventFilter(param1, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (textaddonswidgets__slidecontainer_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = textaddonswidgets__slidecontainer_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextAddonsWidgets__SlideContainer::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (textaddonswidgets__slidecontainer_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            textaddonswidgets__slidecontainer_paintevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textaddonswidgets__slidecontainer_changeevent_callback) {
            QEvent* cbval1 = param1;
            textaddonswidgets__slidecontainer_changeevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (textaddonswidgets__slidecontainer_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            textaddonswidgets__slidecontainer_initstyleoption_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textaddonswidgets__slidecontainer_devtype_callback) {
            int callback_ret = textaddonswidgets__slidecontainer_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextAddonsWidgets__SlideContainer::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textaddonswidgets__slidecontainer_setvisible_callback) {
            bool cbval1 = visible;
            textaddonswidgets__slidecontainer_setvisible_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textaddonswidgets__slidecontainer_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = textaddonswidgets__slidecontainer_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextAddonsWidgets__SlideContainer::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textaddonswidgets__slidecontainer_hasheightforwidth_callback) {
            bool callback_ret = textaddonswidgets__slidecontainer_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextAddonsWidgets__SlideContainer::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textaddonswidgets__slidecontainer_paintengine_callback) {
            QPaintEngine* callback_ret = textaddonswidgets__slidecontainer_paintengine_callback(this);
            return callback_ret;
        }
        return TextAddonsWidgets__SlideContainer::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textaddonswidgets__slidecontainer_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            textaddonswidgets__slidecontainer_mousepressevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textaddonswidgets__slidecontainer_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            textaddonswidgets__slidecontainer_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textaddonswidgets__slidecontainer_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            textaddonswidgets__slidecontainer_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textaddonswidgets__slidecontainer_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            textaddonswidgets__slidecontainer_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textaddonswidgets__slidecontainer_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            textaddonswidgets__slidecontainer_wheelevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textaddonswidgets__slidecontainer_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            textaddonswidgets__slidecontainer_keypressevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textaddonswidgets__slidecontainer_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            textaddonswidgets__slidecontainer_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textaddonswidgets__slidecontainer_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            textaddonswidgets__slidecontainer_focusinevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textaddonswidgets__slidecontainer_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            textaddonswidgets__slidecontainer_focusoutevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textaddonswidgets__slidecontainer_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            textaddonswidgets__slidecontainer_enterevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textaddonswidgets__slidecontainer_leaveevent_callback) {
            QEvent* cbval1 = event;
            textaddonswidgets__slidecontainer_leaveevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textaddonswidgets__slidecontainer_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            textaddonswidgets__slidecontainer_moveevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textaddonswidgets__slidecontainer_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            textaddonswidgets__slidecontainer_closeevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textaddonswidgets__slidecontainer_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            textaddonswidgets__slidecontainer_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textaddonswidgets__slidecontainer_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            textaddonswidgets__slidecontainer_tabletevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textaddonswidgets__slidecontainer_actionevent_callback) {
            QActionEvent* cbval1 = event;
            textaddonswidgets__slidecontainer_actionevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textaddonswidgets__slidecontainer_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            textaddonswidgets__slidecontainer_dragenterevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textaddonswidgets__slidecontainer_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            textaddonswidgets__slidecontainer_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textaddonswidgets__slidecontainer_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            textaddonswidgets__slidecontainer_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textaddonswidgets__slidecontainer_dropevent_callback) {
            QDropEvent* cbval1 = event;
            textaddonswidgets__slidecontainer_dropevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (textaddonswidgets__slidecontainer_showevent_callback) {
            QShowEvent* cbval1 = event;
            textaddonswidgets__slidecontainer_showevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textaddonswidgets__slidecontainer_hideevent_callback) {
            QHideEvent* cbval1 = event;
            textaddonswidgets__slidecontainer_hideevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textaddonswidgets__slidecontainer_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = textaddonswidgets__slidecontainer_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextAddonsWidgets__SlideContainer::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textaddonswidgets__slidecontainer_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = textaddonswidgets__slidecontainer_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextAddonsWidgets__SlideContainer::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textaddonswidgets__slidecontainer_initpainter_callback) {
            QPainter* cbval1 = painter;
            textaddonswidgets__slidecontainer_initpainter_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textaddonswidgets__slidecontainer_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = textaddonswidgets__slidecontainer_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextAddonsWidgets__SlideContainer::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textaddonswidgets__slidecontainer_sharedpainter_callback) {
            QPainter* callback_ret = textaddonswidgets__slidecontainer_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextAddonsWidgets__SlideContainer::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textaddonswidgets__slidecontainer_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            textaddonswidgets__slidecontainer_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textaddonswidgets__slidecontainer_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = textaddonswidgets__slidecontainer_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextAddonsWidgets__SlideContainer::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textaddonswidgets__slidecontainer_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = textaddonswidgets__slidecontainer_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextAddonsWidgets__SlideContainer::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textaddonswidgets__slidecontainer_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textaddonswidgets__slidecontainer_timerevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textaddonswidgets__slidecontainer_childevent_callback) {
            QChildEvent* cbval1 = event;
            textaddonswidgets__slidecontainer_childevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textaddonswidgets__slidecontainer_customevent_callback) {
            QEvent* cbval1 = event;
            textaddonswidgets__slidecontainer_customevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textaddonswidgets__slidecontainer_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textaddonswidgets__slidecontainer_connectnotify_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textaddonswidgets__slidecontainer_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textaddonswidgets__slidecontainer_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SlideContainer::disconnectNotify(signal);
    }

    // Friend functions
    friend void TextAddonsWidgets__SlideContainer_SuperResizeEvent(TextAddonsWidgets::SlideContainer* self, QResizeEvent* param1);
    friend bool TextAddonsWidgets__SlideContainer_SuperEventFilter(TextAddonsWidgets::SlideContainer* self, QObject* param1, QEvent* event);
    friend bool TextAddonsWidgets__SlideContainer_SuperEvent(TextAddonsWidgets::SlideContainer* self, QEvent* e);
    friend void TextAddonsWidgets__SlideContainer_SuperPaintEvent(TextAddonsWidgets::SlideContainer* self, QPaintEvent* param1);
    friend void TextAddonsWidgets__SlideContainer_SuperChangeEvent(TextAddonsWidgets::SlideContainer* self, QEvent* param1);
    friend void TextAddonsWidgets__SlideContainer_SuperInitStyleOption(const TextAddonsWidgets::SlideContainer* self, QStyleOptionFrame* option);
    friend void TextAddonsWidgets__SlideContainer_SuperMousePressEvent(TextAddonsWidgets::SlideContainer* self, QMouseEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperMouseReleaseEvent(TextAddonsWidgets::SlideContainer* self, QMouseEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperMouseDoubleClickEvent(TextAddonsWidgets::SlideContainer* self, QMouseEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperMouseMoveEvent(TextAddonsWidgets::SlideContainer* self, QMouseEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperWheelEvent(TextAddonsWidgets::SlideContainer* self, QWheelEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperKeyPressEvent(TextAddonsWidgets::SlideContainer* self, QKeyEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperKeyReleaseEvent(TextAddonsWidgets::SlideContainer* self, QKeyEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperFocusInEvent(TextAddonsWidgets::SlideContainer* self, QFocusEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperFocusOutEvent(TextAddonsWidgets::SlideContainer* self, QFocusEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperEnterEvent(TextAddonsWidgets::SlideContainer* self, QEnterEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperLeaveEvent(TextAddonsWidgets::SlideContainer* self, QEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperMoveEvent(TextAddonsWidgets::SlideContainer* self, QMoveEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperCloseEvent(TextAddonsWidgets::SlideContainer* self, QCloseEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperContextMenuEvent(TextAddonsWidgets::SlideContainer* self, QContextMenuEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperTabletEvent(TextAddonsWidgets::SlideContainer* self, QTabletEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperActionEvent(TextAddonsWidgets::SlideContainer* self, QActionEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperDragEnterEvent(TextAddonsWidgets::SlideContainer* self, QDragEnterEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperDragMoveEvent(TextAddonsWidgets::SlideContainer* self, QDragMoveEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperDragLeaveEvent(TextAddonsWidgets::SlideContainer* self, QDragLeaveEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperDropEvent(TextAddonsWidgets::SlideContainer* self, QDropEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperShowEvent(TextAddonsWidgets::SlideContainer* self, QShowEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperHideEvent(TextAddonsWidgets::SlideContainer* self, QHideEvent* event);
    friend bool TextAddonsWidgets__SlideContainer_SuperNativeEvent(TextAddonsWidgets::SlideContainer* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int TextAddonsWidgets__SlideContainer_SuperMetric(const TextAddonsWidgets::SlideContainer* self, int param1);
    friend void TextAddonsWidgets__SlideContainer_SuperInitPainter(const TextAddonsWidgets::SlideContainer* self, QPainter* painter);
    friend QPaintDevice* TextAddonsWidgets__SlideContainer_SuperRedirected(const TextAddonsWidgets::SlideContainer* self, QPoint* offset);
    friend QPainter* TextAddonsWidgets__SlideContainer_SuperSharedPainter(const TextAddonsWidgets::SlideContainer* self);
    friend void TextAddonsWidgets__SlideContainer_SuperInputMethodEvent(TextAddonsWidgets::SlideContainer* self, QInputMethodEvent* param1);
    friend bool TextAddonsWidgets__SlideContainer_SuperFocusNextPrevChild(TextAddonsWidgets::SlideContainer* self, bool next);
    friend void TextAddonsWidgets__SlideContainer_SuperTimerEvent(TextAddonsWidgets::SlideContainer* self, QTimerEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperChildEvent(TextAddonsWidgets::SlideContainer* self, QChildEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperCustomEvent(TextAddonsWidgets::SlideContainer* self, QEvent* event);
    friend void TextAddonsWidgets__SlideContainer_SuperConnectNotify(TextAddonsWidgets::SlideContainer* self, const QMetaMethod* signal);
    friend void TextAddonsWidgets__SlideContainer_SuperDisconnectNotify(TextAddonsWidgets::SlideContainer* self, const QMetaMethod* signal);
};

#endif
