#pragma once
#ifndef EXTRAS_KXMLGUI_LIBKSHORTCUTSEDITOR_HXX
#define EXTRAS_KXMLGUI_LIBKSHORTCUTSEDITOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KShortcutsEditor
class VirtualKShortcutsEditor final : public KShortcutsEditor {
  public:
    // Virtual class public types (including callbacks and access types)
    using KShortcutsEditor_MetaObject_Callback = QMetaObject* (*)(const KShortcutsEditor*);
    using KShortcutsEditor_Metacast_Callback = void* (*)(KShortcutsEditor*, const char*);
    using KShortcutsEditor_Metacall_Callback = int (*)(KShortcutsEditor*, int, int, void**);
    using KShortcutsEditor_DevType_Callback = int (*)(const KShortcutsEditor*);
    using KShortcutsEditor_SetVisible_Callback = void (*)(KShortcutsEditor*, bool);
    using KShortcutsEditor_SizeHint_Callback = QSize* (*)(const KShortcutsEditor*);
    using KShortcutsEditor_MinimumSizeHint_Callback = QSize* (*)(const KShortcutsEditor*);
    using KShortcutsEditor_HeightForWidth_Callback = int (*)(const KShortcutsEditor*, int);
    using KShortcutsEditor_HasHeightForWidth_Callback = bool (*)(const KShortcutsEditor*);
    using KShortcutsEditor_PaintEngine_Callback = QPaintEngine* (*)(const KShortcutsEditor*);
    using KShortcutsEditor_Event_Callback = bool (*)(KShortcutsEditor*, QEvent*);
    using KShortcutsEditor_MousePressEvent_Callback = void (*)(KShortcutsEditor*, QMouseEvent*);
    using KShortcutsEditor_MouseReleaseEvent_Callback = void (*)(KShortcutsEditor*, QMouseEvent*);
    using KShortcutsEditor_MouseDoubleClickEvent_Callback = void (*)(KShortcutsEditor*, QMouseEvent*);
    using KShortcutsEditor_MouseMoveEvent_Callback = void (*)(KShortcutsEditor*, QMouseEvent*);
    using KShortcutsEditor_WheelEvent_Callback = void (*)(KShortcutsEditor*, QWheelEvent*);
    using KShortcutsEditor_KeyPressEvent_Callback = void (*)(KShortcutsEditor*, QKeyEvent*);
    using KShortcutsEditor_KeyReleaseEvent_Callback = void (*)(KShortcutsEditor*, QKeyEvent*);
    using KShortcutsEditor_FocusInEvent_Callback = void (*)(KShortcutsEditor*, QFocusEvent*);
    using KShortcutsEditor_FocusOutEvent_Callback = void (*)(KShortcutsEditor*, QFocusEvent*);
    using KShortcutsEditor_EnterEvent_Callback = void (*)(KShortcutsEditor*, QEnterEvent*);
    using KShortcutsEditor_LeaveEvent_Callback = void (*)(KShortcutsEditor*, QEvent*);
    using KShortcutsEditor_PaintEvent_Callback = void (*)(KShortcutsEditor*, QPaintEvent*);
    using KShortcutsEditor_MoveEvent_Callback = void (*)(KShortcutsEditor*, QMoveEvent*);
    using KShortcutsEditor_ResizeEvent_Callback = void (*)(KShortcutsEditor*, QResizeEvent*);
    using KShortcutsEditor_CloseEvent_Callback = void (*)(KShortcutsEditor*, QCloseEvent*);
    using KShortcutsEditor_ContextMenuEvent_Callback = void (*)(KShortcutsEditor*, QContextMenuEvent*);
    using KShortcutsEditor_TabletEvent_Callback = void (*)(KShortcutsEditor*, QTabletEvent*);
    using KShortcutsEditor_ActionEvent_Callback = void (*)(KShortcutsEditor*, QActionEvent*);
    using KShortcutsEditor_DragEnterEvent_Callback = void (*)(KShortcutsEditor*, QDragEnterEvent*);
    using KShortcutsEditor_DragMoveEvent_Callback = void (*)(KShortcutsEditor*, QDragMoveEvent*);
    using KShortcutsEditor_DragLeaveEvent_Callback = void (*)(KShortcutsEditor*, QDragLeaveEvent*);
    using KShortcutsEditor_DropEvent_Callback = void (*)(KShortcutsEditor*, QDropEvent*);
    using KShortcutsEditor_ShowEvent_Callback = void (*)(KShortcutsEditor*, QShowEvent*);
    using KShortcutsEditor_HideEvent_Callback = void (*)(KShortcutsEditor*, QHideEvent*);
    using KShortcutsEditor_NativeEvent_Callback = bool (*)(KShortcutsEditor*, libqt_string, void*, intptr_t*);
    using KShortcutsEditor_ChangeEvent_Callback = void (*)(KShortcutsEditor*, QEvent*);
    using KShortcutsEditor_Metric_Callback = int (*)(const KShortcutsEditor*, int);
    using KShortcutsEditor_InitPainter_Callback = void (*)(const KShortcutsEditor*, QPainter*);
    using KShortcutsEditor_Redirected_Callback = QPaintDevice* (*)(const KShortcutsEditor*, QPoint*);
    using KShortcutsEditor_SharedPainter_Callback = QPainter* (*)(const KShortcutsEditor*);
    using KShortcutsEditor_InputMethodEvent_Callback = void (*)(KShortcutsEditor*, QInputMethodEvent*);
    using KShortcutsEditor_InputMethodQuery_Callback = QVariant* (*)(const KShortcutsEditor*, int);
    using KShortcutsEditor_FocusNextPrevChild_Callback = bool (*)(KShortcutsEditor*, bool);
    using KShortcutsEditor_EventFilter_Callback = bool (*)(KShortcutsEditor*, QObject*, QEvent*);
    using KShortcutsEditor_TimerEvent_Callback = void (*)(KShortcutsEditor*, QTimerEvent*);
    using KShortcutsEditor_ChildEvent_Callback = void (*)(KShortcutsEditor*, QChildEvent*);
    using KShortcutsEditor_CustomEvent_Callback = void (*)(KShortcutsEditor*, QEvent*);
    using KShortcutsEditor_ConnectNotify_Callback = void (*)(KShortcutsEditor*, QMetaMethod*);
    using KShortcutsEditor_DisconnectNotify_Callback = void (*)(KShortcutsEditor*, QMetaMethod*);
    using KShortcutsEditor::create;
    using KShortcutsEditor::destroy;
    using KShortcutsEditor::focusNextChild;
    using KShortcutsEditor::focusPreviousChild;
    using KShortcutsEditor::getDecodedMetricF;
    using KShortcutsEditor::isSignalConnected;
    using KShortcutsEditor::receivers;
    using KShortcutsEditor::sender;
    using KShortcutsEditor::senderSignalIndex;
    using KShortcutsEditor::updateMicroFocus;

    // Instance callback storage
    KShortcutsEditor_MetaObject_Callback kshortcutseditor_metaobject_callback = nullptr;
    KShortcutsEditor_Metacast_Callback kshortcutseditor_metacast_callback = nullptr;
    KShortcutsEditor_Metacall_Callback kshortcutseditor_metacall_callback = nullptr;
    KShortcutsEditor_DevType_Callback kshortcutseditor_devtype_callback = nullptr;
    KShortcutsEditor_SetVisible_Callback kshortcutseditor_setvisible_callback = nullptr;
    KShortcutsEditor_SizeHint_Callback kshortcutseditor_sizehint_callback = nullptr;
    KShortcutsEditor_MinimumSizeHint_Callback kshortcutseditor_minimumsizehint_callback = nullptr;
    KShortcutsEditor_HeightForWidth_Callback kshortcutseditor_heightforwidth_callback = nullptr;
    KShortcutsEditor_HasHeightForWidth_Callback kshortcutseditor_hasheightforwidth_callback = nullptr;
    KShortcutsEditor_PaintEngine_Callback kshortcutseditor_paintengine_callback = nullptr;
    KShortcutsEditor_Event_Callback kshortcutseditor_event_callback = nullptr;
    KShortcutsEditor_MousePressEvent_Callback kshortcutseditor_mousepressevent_callback = nullptr;
    KShortcutsEditor_MouseReleaseEvent_Callback kshortcutseditor_mousereleaseevent_callback = nullptr;
    KShortcutsEditor_MouseDoubleClickEvent_Callback kshortcutseditor_mousedoubleclickevent_callback = nullptr;
    KShortcutsEditor_MouseMoveEvent_Callback kshortcutseditor_mousemoveevent_callback = nullptr;
    KShortcutsEditor_WheelEvent_Callback kshortcutseditor_wheelevent_callback = nullptr;
    KShortcutsEditor_KeyPressEvent_Callback kshortcutseditor_keypressevent_callback = nullptr;
    KShortcutsEditor_KeyReleaseEvent_Callback kshortcutseditor_keyreleaseevent_callback = nullptr;
    KShortcutsEditor_FocusInEvent_Callback kshortcutseditor_focusinevent_callback = nullptr;
    KShortcutsEditor_FocusOutEvent_Callback kshortcutseditor_focusoutevent_callback = nullptr;
    KShortcutsEditor_EnterEvent_Callback kshortcutseditor_enterevent_callback = nullptr;
    KShortcutsEditor_LeaveEvent_Callback kshortcutseditor_leaveevent_callback = nullptr;
    KShortcutsEditor_PaintEvent_Callback kshortcutseditor_paintevent_callback = nullptr;
    KShortcutsEditor_MoveEvent_Callback kshortcutseditor_moveevent_callback = nullptr;
    KShortcutsEditor_ResizeEvent_Callback kshortcutseditor_resizeevent_callback = nullptr;
    KShortcutsEditor_CloseEvent_Callback kshortcutseditor_closeevent_callback = nullptr;
    KShortcutsEditor_ContextMenuEvent_Callback kshortcutseditor_contextmenuevent_callback = nullptr;
    KShortcutsEditor_TabletEvent_Callback kshortcutseditor_tabletevent_callback = nullptr;
    KShortcutsEditor_ActionEvent_Callback kshortcutseditor_actionevent_callback = nullptr;
    KShortcutsEditor_DragEnterEvent_Callback kshortcutseditor_dragenterevent_callback = nullptr;
    KShortcutsEditor_DragMoveEvent_Callback kshortcutseditor_dragmoveevent_callback = nullptr;
    KShortcutsEditor_DragLeaveEvent_Callback kshortcutseditor_dragleaveevent_callback = nullptr;
    KShortcutsEditor_DropEvent_Callback kshortcutseditor_dropevent_callback = nullptr;
    KShortcutsEditor_ShowEvent_Callback kshortcutseditor_showevent_callback = nullptr;
    KShortcutsEditor_HideEvent_Callback kshortcutseditor_hideevent_callback = nullptr;
    KShortcutsEditor_NativeEvent_Callback kshortcutseditor_nativeevent_callback = nullptr;
    KShortcutsEditor_ChangeEvent_Callback kshortcutseditor_changeevent_callback = nullptr;
    KShortcutsEditor_Metric_Callback kshortcutseditor_metric_callback = nullptr;
    KShortcutsEditor_InitPainter_Callback kshortcutseditor_initpainter_callback = nullptr;
    KShortcutsEditor_Redirected_Callback kshortcutseditor_redirected_callback = nullptr;
    KShortcutsEditor_SharedPainter_Callback kshortcutseditor_sharedpainter_callback = nullptr;
    KShortcutsEditor_InputMethodEvent_Callback kshortcutseditor_inputmethodevent_callback = nullptr;
    KShortcutsEditor_InputMethodQuery_Callback kshortcutseditor_inputmethodquery_callback = nullptr;
    KShortcutsEditor_FocusNextPrevChild_Callback kshortcutseditor_focusnextprevchild_callback = nullptr;
    KShortcutsEditor_EventFilter_Callback kshortcutseditor_eventfilter_callback = nullptr;
    KShortcutsEditor_TimerEvent_Callback kshortcutseditor_timerevent_callback = nullptr;
    KShortcutsEditor_ChildEvent_Callback kshortcutseditor_childevent_callback = nullptr;
    KShortcutsEditor_CustomEvent_Callback kshortcutseditor_customevent_callback = nullptr;
    KShortcutsEditor_ConnectNotify_Callback kshortcutseditor_connectnotify_callback = nullptr;
    KShortcutsEditor_DisconnectNotify_Callback kshortcutseditor_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KShortcutsEditor {
        using KShortcutsEditor::actionEvent;
        using KShortcutsEditor::changeEvent;
        using KShortcutsEditor::childEvent;
        using KShortcutsEditor::closeEvent;
        using KShortcutsEditor::connectNotify;
        using KShortcutsEditor::contextMenuEvent;
        using KShortcutsEditor::customEvent;
        using KShortcutsEditor::disconnectNotify;
        using KShortcutsEditor::dragEnterEvent;
        using KShortcutsEditor::dragLeaveEvent;
        using KShortcutsEditor::dragMoveEvent;
        using KShortcutsEditor::dropEvent;
        using KShortcutsEditor::enterEvent;
        using KShortcutsEditor::event;
        using KShortcutsEditor::focusInEvent;
        using KShortcutsEditor::focusNextPrevChild;
        using KShortcutsEditor::focusOutEvent;
        using KShortcutsEditor::hideEvent;
        using KShortcutsEditor::initPainter;
        using KShortcutsEditor::inputMethodEvent;
        using KShortcutsEditor::keyPressEvent;
        using KShortcutsEditor::keyReleaseEvent;
        using KShortcutsEditor::leaveEvent;
        using KShortcutsEditor::metric;
        using KShortcutsEditor::mouseDoubleClickEvent;
        using KShortcutsEditor::mouseMoveEvent;
        using KShortcutsEditor::mousePressEvent;
        using KShortcutsEditor::mouseReleaseEvent;
        using KShortcutsEditor::moveEvent;
        using KShortcutsEditor::nativeEvent;
        using KShortcutsEditor::paintEvent;
        using KShortcutsEditor::redirected;
        using KShortcutsEditor::resizeEvent;
        using KShortcutsEditor::sharedPainter;
        using KShortcutsEditor::showEvent;
        using KShortcutsEditor::tabletEvent;
        using KShortcutsEditor::timerEvent;
        using KShortcutsEditor::wheelEvent;
    };

    VirtualKShortcutsEditor(QWidget* parent) : KShortcutsEditor(parent) {};
    VirtualKShortcutsEditor(KActionCollection* collection, QWidget* parent) : KShortcutsEditor(collection, parent) {};
    VirtualKShortcutsEditor(KActionCollection* collection, QWidget* parent, KShortcutsEditor::ActionTypes actionTypes) : KShortcutsEditor(collection, parent, actionTypes) {};
    VirtualKShortcutsEditor(KActionCollection* collection, QWidget* parent, KShortcutsEditor::ActionTypes actionTypes, KShortcutsEditor::LetterShortcuts allowLetterShortcuts) : KShortcutsEditor(collection, parent, actionTypes, allowLetterShortcuts) {};
    VirtualKShortcutsEditor(QWidget* parent, KShortcutsEditor::ActionTypes actionTypes) : KShortcutsEditor(parent, actionTypes) {};
    VirtualKShortcutsEditor(QWidget* parent, KShortcutsEditor::ActionTypes actionTypes, KShortcutsEditor::LetterShortcuts allowLetterShortcuts) : KShortcutsEditor(parent, actionTypes, allowLetterShortcuts) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kshortcutseditor_metaobject_callback) {
            QMetaObject* callback_ret = kshortcutseditor_metaobject_callback(this);
            return callback_ret;
        }
        return KShortcutsEditor::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kshortcutseditor_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kshortcutseditor_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KShortcutsEditor::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kshortcutseditor_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kshortcutseditor_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KShortcutsEditor::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kshortcutseditor_devtype_callback) {
            int callback_ret = kshortcutseditor_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KShortcutsEditor::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kshortcutseditor_setvisible_callback) {
            bool cbval1 = visible;
            kshortcutseditor_setvisible_callback(this, cbval1);
            return;
        }
        KShortcutsEditor::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kshortcutseditor_sizehint_callback) {
            QSize* callback_ret = kshortcutseditor_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KShortcutsEditor::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kshortcutseditor_minimumsizehint_callback) {
            QSize* callback_ret = kshortcutseditor_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KShortcutsEditor::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kshortcutseditor_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kshortcutseditor_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KShortcutsEditor::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kshortcutseditor_hasheightforwidth_callback) {
            bool callback_ret = kshortcutseditor_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KShortcutsEditor::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kshortcutseditor_paintengine_callback) {
            QPaintEngine* callback_ret = kshortcutseditor_paintengine_callback(this);
            return callback_ret;
        }
        return KShortcutsEditor::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kshortcutseditor_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kshortcutseditor_event_callback(this, cbval1);
            return callback_ret;
        }
        return KShortcutsEditor::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kshortcutseditor_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kshortcutseditor_mousepressevent_callback(this, cbval1);
            return;
        }
        KShortcutsEditor::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kshortcutseditor_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kshortcutseditor_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KShortcutsEditor::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kshortcutseditor_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kshortcutseditor_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KShortcutsEditor::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kshortcutseditor_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kshortcutseditor_mousemoveevent_callback(this, cbval1);
            return;
        }
        KShortcutsEditor::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kshortcutseditor_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kshortcutseditor_wheelevent_callback(this, cbval1);
            return;
        }
        KShortcutsEditor::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kshortcutseditor_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kshortcutseditor_keypressevent_callback(this, cbval1);
            return;
        }
        KShortcutsEditor::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kshortcutseditor_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kshortcutseditor_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KShortcutsEditor::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kshortcutseditor_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kshortcutseditor_focusinevent_callback(this, cbval1);
            return;
        }
        KShortcutsEditor::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kshortcutseditor_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kshortcutseditor_focusoutevent_callback(this, cbval1);
            return;
        }
        KShortcutsEditor::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kshortcutseditor_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kshortcutseditor_enterevent_callback(this, cbval1);
            return;
        }
        KShortcutsEditor::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kshortcutseditor_leaveevent_callback) {
            QEvent* cbval1 = event;
            kshortcutseditor_leaveevent_callback(this, cbval1);
            return;
        }
        KShortcutsEditor::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kshortcutseditor_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kshortcutseditor_paintevent_callback(this, cbval1);
            return;
        }
        KShortcutsEditor::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kshortcutseditor_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kshortcutseditor_moveevent_callback(this, cbval1);
            return;
        }
        KShortcutsEditor::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kshortcutseditor_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kshortcutseditor_resizeevent_callback(this, cbval1);
            return;
        }
        KShortcutsEditor::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kshortcutseditor_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kshortcutseditor_closeevent_callback(this, cbval1);
            return;
        }
        KShortcutsEditor::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kshortcutseditor_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kshortcutseditor_contextmenuevent_callback(this, cbval1);
            return;
        }
        KShortcutsEditor::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kshortcutseditor_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kshortcutseditor_tabletevent_callback(this, cbval1);
            return;
        }
        KShortcutsEditor::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kshortcutseditor_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kshortcutseditor_actionevent_callback(this, cbval1);
            return;
        }
        KShortcutsEditor::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kshortcutseditor_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kshortcutseditor_dragenterevent_callback(this, cbval1);
            return;
        }
        KShortcutsEditor::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kshortcutseditor_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kshortcutseditor_dragmoveevent_callback(this, cbval1);
            return;
        }
        KShortcutsEditor::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kshortcutseditor_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kshortcutseditor_dragleaveevent_callback(this, cbval1);
            return;
        }
        KShortcutsEditor::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kshortcutseditor_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kshortcutseditor_dropevent_callback(this, cbval1);
            return;
        }
        KShortcutsEditor::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kshortcutseditor_showevent_callback) {
            QShowEvent* cbval1 = event;
            kshortcutseditor_showevent_callback(this, cbval1);
            return;
        }
        KShortcutsEditor::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kshortcutseditor_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kshortcutseditor_hideevent_callback(this, cbval1);
            return;
        }
        KShortcutsEditor::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kshortcutseditor_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kshortcutseditor_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KShortcutsEditor::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kshortcutseditor_changeevent_callback) {
            QEvent* cbval1 = param1;
            kshortcutseditor_changeevent_callback(this, cbval1);
            return;
        }
        KShortcutsEditor::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kshortcutseditor_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kshortcutseditor_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KShortcutsEditor::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kshortcutseditor_initpainter_callback) {
            QPainter* cbval1 = painter;
            kshortcutseditor_initpainter_callback(this, cbval1);
            return;
        }
        KShortcutsEditor::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kshortcutseditor_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kshortcutseditor_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KShortcutsEditor::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kshortcutseditor_sharedpainter_callback) {
            QPainter* callback_ret = kshortcutseditor_sharedpainter_callback(this);
            return callback_ret;
        }
        return KShortcutsEditor::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kshortcutseditor_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kshortcutseditor_inputmethodevent_callback(this, cbval1);
            return;
        }
        KShortcutsEditor::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kshortcutseditor_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kshortcutseditor_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KShortcutsEditor::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kshortcutseditor_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kshortcutseditor_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KShortcutsEditor::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kshortcutseditor_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kshortcutseditor_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KShortcutsEditor::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kshortcutseditor_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kshortcutseditor_timerevent_callback(this, cbval1);
            return;
        }
        KShortcutsEditor::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kshortcutseditor_childevent_callback) {
            QChildEvent* cbval1 = event;
            kshortcutseditor_childevent_callback(this, cbval1);
            return;
        }
        KShortcutsEditor::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kshortcutseditor_customevent_callback) {
            QEvent* cbval1 = event;
            kshortcutseditor_customevent_callback(this, cbval1);
            return;
        }
        KShortcutsEditor::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kshortcutseditor_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kshortcutseditor_connectnotify_callback(this, cbval1);
            return;
        }
        KShortcutsEditor::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kshortcutseditor_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kshortcutseditor_disconnectnotify_callback(this, cbval1);
            return;
        }
        KShortcutsEditor::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KShortcutsEditor_SuperEvent(KShortcutsEditor* self, QEvent* event);
    friend void KShortcutsEditor_SuperMousePressEvent(KShortcutsEditor* self, QMouseEvent* event);
    friend void KShortcutsEditor_SuperMouseReleaseEvent(KShortcutsEditor* self, QMouseEvent* event);
    friend void KShortcutsEditor_SuperMouseDoubleClickEvent(KShortcutsEditor* self, QMouseEvent* event);
    friend void KShortcutsEditor_SuperMouseMoveEvent(KShortcutsEditor* self, QMouseEvent* event);
    friend void KShortcutsEditor_SuperWheelEvent(KShortcutsEditor* self, QWheelEvent* event);
    friend void KShortcutsEditor_SuperKeyPressEvent(KShortcutsEditor* self, QKeyEvent* event);
    friend void KShortcutsEditor_SuperKeyReleaseEvent(KShortcutsEditor* self, QKeyEvent* event);
    friend void KShortcutsEditor_SuperFocusInEvent(KShortcutsEditor* self, QFocusEvent* event);
    friend void KShortcutsEditor_SuperFocusOutEvent(KShortcutsEditor* self, QFocusEvent* event);
    friend void KShortcutsEditor_SuperEnterEvent(KShortcutsEditor* self, QEnterEvent* event);
    friend void KShortcutsEditor_SuperLeaveEvent(KShortcutsEditor* self, QEvent* event);
    friend void KShortcutsEditor_SuperPaintEvent(KShortcutsEditor* self, QPaintEvent* event);
    friend void KShortcutsEditor_SuperMoveEvent(KShortcutsEditor* self, QMoveEvent* event);
    friend void KShortcutsEditor_SuperResizeEvent(KShortcutsEditor* self, QResizeEvent* event);
    friend void KShortcutsEditor_SuperCloseEvent(KShortcutsEditor* self, QCloseEvent* event);
    friend void KShortcutsEditor_SuperContextMenuEvent(KShortcutsEditor* self, QContextMenuEvent* event);
    friend void KShortcutsEditor_SuperTabletEvent(KShortcutsEditor* self, QTabletEvent* event);
    friend void KShortcutsEditor_SuperActionEvent(KShortcutsEditor* self, QActionEvent* event);
    friend void KShortcutsEditor_SuperDragEnterEvent(KShortcutsEditor* self, QDragEnterEvent* event);
    friend void KShortcutsEditor_SuperDragMoveEvent(KShortcutsEditor* self, QDragMoveEvent* event);
    friend void KShortcutsEditor_SuperDragLeaveEvent(KShortcutsEditor* self, QDragLeaveEvent* event);
    friend void KShortcutsEditor_SuperDropEvent(KShortcutsEditor* self, QDropEvent* event);
    friend void KShortcutsEditor_SuperShowEvent(KShortcutsEditor* self, QShowEvent* event);
    friend void KShortcutsEditor_SuperHideEvent(KShortcutsEditor* self, QHideEvent* event);
    friend bool KShortcutsEditor_SuperNativeEvent(KShortcutsEditor* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KShortcutsEditor_SuperChangeEvent(KShortcutsEditor* self, QEvent* param1);
    friend int KShortcutsEditor_SuperMetric(const KShortcutsEditor* self, int param1);
    friend void KShortcutsEditor_SuperInitPainter(const KShortcutsEditor* self, QPainter* painter);
    friend QPaintDevice* KShortcutsEditor_SuperRedirected(const KShortcutsEditor* self, QPoint* offset);
    friend QPainter* KShortcutsEditor_SuperSharedPainter(const KShortcutsEditor* self);
    friend void KShortcutsEditor_SuperInputMethodEvent(KShortcutsEditor* self, QInputMethodEvent* param1);
    friend bool KShortcutsEditor_SuperFocusNextPrevChild(KShortcutsEditor* self, bool next);
    friend void KShortcutsEditor_SuperTimerEvent(KShortcutsEditor* self, QTimerEvent* event);
    friend void KShortcutsEditor_SuperChildEvent(KShortcutsEditor* self, QChildEvent* event);
    friend void KShortcutsEditor_SuperCustomEvent(KShortcutsEditor* self, QEvent* event);
    friend void KShortcutsEditor_SuperConnectNotify(KShortcutsEditor* self, const QMetaMethod* signal);
    friend void KShortcutsEditor_SuperDisconnectNotify(KShortcutsEditor* self, const QMetaMethod* signal);
};

#endif
