#pragma once
#ifndef EXTRAS_KTEXTEDITOR_LIBCONFIGPAGE_HXX
#define EXTRAS_KTEXTEDITOR_LIBCONFIGPAGE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTextEditor::ConfigPage
class VirtualKTextEditorConfigPage : public KTextEditor::ConfigPage {
  public:
    // Virtual class public types (including callbacks and access types)
    using KTextEditor__ConfigPage_MetaObject_Callback = QMetaObject* (*)(const KTextEditor__ConfigPage*);
    using KTextEditor__ConfigPage_Metacast_Callback = void* (*)(KTextEditor__ConfigPage*, const char*);
    using KTextEditor__ConfigPage_Metacall_Callback = int (*)(KTextEditor__ConfigPage*, int, int, void**);
    using KTextEditor__ConfigPage_Name_Callback = const char* (*)(const KTextEditor__ConfigPage*);
    using KTextEditor__ConfigPage_FullName_Callback = const char* (*)(const KTextEditor__ConfigPage*);
    using KTextEditor__ConfigPage_Icon_Callback = QIcon* (*)(const KTextEditor__ConfigPage*);
    using KTextEditor__ConfigPage_Apply_Callback = void (*)(KTextEditor__ConfigPage*);
    using KTextEditor__ConfigPage_Reset_Callback = void (*)(KTextEditor__ConfigPage*);
    using KTextEditor__ConfigPage_Defaults_Callback = void (*)(KTextEditor__ConfigPage*);
    using KTextEditor__ConfigPage_DevType_Callback = int (*)(const KTextEditor__ConfigPage*);
    using KTextEditor__ConfigPage_SetVisible_Callback = void (*)(KTextEditor__ConfigPage*, bool);
    using KTextEditor__ConfigPage_SizeHint_Callback = QSize* (*)(const KTextEditor__ConfigPage*);
    using KTextEditor__ConfigPage_MinimumSizeHint_Callback = QSize* (*)(const KTextEditor__ConfigPage*);
    using KTextEditor__ConfigPage_HeightForWidth_Callback = int (*)(const KTextEditor__ConfigPage*, int);
    using KTextEditor__ConfigPage_HasHeightForWidth_Callback = bool (*)(const KTextEditor__ConfigPage*);
    using KTextEditor__ConfigPage_PaintEngine_Callback = QPaintEngine* (*)(const KTextEditor__ConfigPage*);
    using KTextEditor__ConfigPage_Event_Callback = bool (*)(KTextEditor__ConfigPage*, QEvent*);
    using KTextEditor__ConfigPage_MousePressEvent_Callback = void (*)(KTextEditor__ConfigPage*, QMouseEvent*);
    using KTextEditor__ConfigPage_MouseReleaseEvent_Callback = void (*)(KTextEditor__ConfigPage*, QMouseEvent*);
    using KTextEditor__ConfigPage_MouseDoubleClickEvent_Callback = void (*)(KTextEditor__ConfigPage*, QMouseEvent*);
    using KTextEditor__ConfigPage_MouseMoveEvent_Callback = void (*)(KTextEditor__ConfigPage*, QMouseEvent*);
    using KTextEditor__ConfigPage_WheelEvent_Callback = void (*)(KTextEditor__ConfigPage*, QWheelEvent*);
    using KTextEditor__ConfigPage_KeyPressEvent_Callback = void (*)(KTextEditor__ConfigPage*, QKeyEvent*);
    using KTextEditor__ConfigPage_KeyReleaseEvent_Callback = void (*)(KTextEditor__ConfigPage*, QKeyEvent*);
    using KTextEditor__ConfigPage_FocusInEvent_Callback = void (*)(KTextEditor__ConfigPage*, QFocusEvent*);
    using KTextEditor__ConfigPage_FocusOutEvent_Callback = void (*)(KTextEditor__ConfigPage*, QFocusEvent*);
    using KTextEditor__ConfigPage_EnterEvent_Callback = void (*)(KTextEditor__ConfigPage*, QEnterEvent*);
    using KTextEditor__ConfigPage_LeaveEvent_Callback = void (*)(KTextEditor__ConfigPage*, QEvent*);
    using KTextEditor__ConfigPage_PaintEvent_Callback = void (*)(KTextEditor__ConfigPage*, QPaintEvent*);
    using KTextEditor__ConfigPage_MoveEvent_Callback = void (*)(KTextEditor__ConfigPage*, QMoveEvent*);
    using KTextEditor__ConfigPage_ResizeEvent_Callback = void (*)(KTextEditor__ConfigPage*, QResizeEvent*);
    using KTextEditor__ConfigPage_CloseEvent_Callback = void (*)(KTextEditor__ConfigPage*, QCloseEvent*);
    using KTextEditor__ConfigPage_ContextMenuEvent_Callback = void (*)(KTextEditor__ConfigPage*, QContextMenuEvent*);
    using KTextEditor__ConfigPage_TabletEvent_Callback = void (*)(KTextEditor__ConfigPage*, QTabletEvent*);
    using KTextEditor__ConfigPage_ActionEvent_Callback = void (*)(KTextEditor__ConfigPage*, QActionEvent*);
    using KTextEditor__ConfigPage_DragEnterEvent_Callback = void (*)(KTextEditor__ConfigPage*, QDragEnterEvent*);
    using KTextEditor__ConfigPage_DragMoveEvent_Callback = void (*)(KTextEditor__ConfigPage*, QDragMoveEvent*);
    using KTextEditor__ConfigPage_DragLeaveEvent_Callback = void (*)(KTextEditor__ConfigPage*, QDragLeaveEvent*);
    using KTextEditor__ConfigPage_DropEvent_Callback = void (*)(KTextEditor__ConfigPage*, QDropEvent*);
    using KTextEditor__ConfigPage_ShowEvent_Callback = void (*)(KTextEditor__ConfigPage*, QShowEvent*);
    using KTextEditor__ConfigPage_HideEvent_Callback = void (*)(KTextEditor__ConfigPage*, QHideEvent*);
    using KTextEditor__ConfigPage_NativeEvent_Callback = bool (*)(KTextEditor__ConfigPage*, libqt_string, void*, intptr_t*);
    using KTextEditor__ConfigPage_ChangeEvent_Callback = void (*)(KTextEditor__ConfigPage*, QEvent*);
    using KTextEditor__ConfigPage_Metric_Callback = int (*)(const KTextEditor__ConfigPage*, int);
    using KTextEditor__ConfigPage_InitPainter_Callback = void (*)(const KTextEditor__ConfigPage*, QPainter*);
    using KTextEditor__ConfigPage_Redirected_Callback = QPaintDevice* (*)(const KTextEditor__ConfigPage*, QPoint*);
    using KTextEditor__ConfigPage_SharedPainter_Callback = QPainter* (*)(const KTextEditor__ConfigPage*);
    using KTextEditor__ConfigPage_InputMethodEvent_Callback = void (*)(KTextEditor__ConfigPage*, QInputMethodEvent*);
    using KTextEditor__ConfigPage_InputMethodQuery_Callback = QVariant* (*)(const KTextEditor__ConfigPage*, int);
    using KTextEditor__ConfigPage_FocusNextPrevChild_Callback = bool (*)(KTextEditor__ConfigPage*, bool);
    using KTextEditor__ConfigPage_EventFilter_Callback = bool (*)(KTextEditor__ConfigPage*, QObject*, QEvent*);
    using KTextEditor__ConfigPage_TimerEvent_Callback = void (*)(KTextEditor__ConfigPage*, QTimerEvent*);
    using KTextEditor__ConfigPage_ChildEvent_Callback = void (*)(KTextEditor__ConfigPage*, QChildEvent*);
    using KTextEditor__ConfigPage_CustomEvent_Callback = void (*)(KTextEditor__ConfigPage*, QEvent*);
    using KTextEditor__ConfigPage_ConnectNotify_Callback = void (*)(KTextEditor__ConfigPage*, QMetaMethod*);
    using KTextEditor__ConfigPage_DisconnectNotify_Callback = void (*)(KTextEditor__ConfigPage*, QMetaMethod*);
    using KTextEditor::ConfigPage::create;
    using KTextEditor::ConfigPage::destroy;
    using KTextEditor::ConfigPage::focusNextChild;
    using KTextEditor::ConfigPage::focusPreviousChild;
    using KTextEditor::ConfigPage::getDecodedMetricF;
    using KTextEditor::ConfigPage::isSignalConnected;
    using KTextEditor::ConfigPage::receivers;
    using KTextEditor::ConfigPage::sender;
    using KTextEditor::ConfigPage::senderSignalIndex;
    using KTextEditor::ConfigPage::updateMicroFocus;

    // Instance callback storage
    KTextEditor__ConfigPage_MetaObject_Callback ktexteditor__configpage_metaobject_callback = nullptr;
    KTextEditor__ConfigPage_Metacast_Callback ktexteditor__configpage_metacast_callback = nullptr;
    KTextEditor__ConfigPage_Metacall_Callback ktexteditor__configpage_metacall_callback = nullptr;
    KTextEditor__ConfigPage_Name_Callback ktexteditor__configpage_name_callback = nullptr;
    KTextEditor__ConfigPage_FullName_Callback ktexteditor__configpage_fullname_callback = nullptr;
    KTextEditor__ConfigPage_Icon_Callback ktexteditor__configpage_icon_callback = nullptr;
    KTextEditor__ConfigPage_Apply_Callback ktexteditor__configpage_apply_callback = nullptr;
    KTextEditor__ConfigPage_Reset_Callback ktexteditor__configpage_reset_callback = nullptr;
    KTextEditor__ConfigPage_Defaults_Callback ktexteditor__configpage_defaults_callback = nullptr;
    KTextEditor__ConfigPage_DevType_Callback ktexteditor__configpage_devtype_callback = nullptr;
    KTextEditor__ConfigPage_SetVisible_Callback ktexteditor__configpage_setvisible_callback = nullptr;
    KTextEditor__ConfigPage_SizeHint_Callback ktexteditor__configpage_sizehint_callback = nullptr;
    KTextEditor__ConfigPage_MinimumSizeHint_Callback ktexteditor__configpage_minimumsizehint_callback = nullptr;
    KTextEditor__ConfigPage_HeightForWidth_Callback ktexteditor__configpage_heightforwidth_callback = nullptr;
    KTextEditor__ConfigPage_HasHeightForWidth_Callback ktexteditor__configpage_hasheightforwidth_callback = nullptr;
    KTextEditor__ConfigPage_PaintEngine_Callback ktexteditor__configpage_paintengine_callback = nullptr;
    KTextEditor__ConfigPage_Event_Callback ktexteditor__configpage_event_callback = nullptr;
    KTextEditor__ConfigPage_MousePressEvent_Callback ktexteditor__configpage_mousepressevent_callback = nullptr;
    KTextEditor__ConfigPage_MouseReleaseEvent_Callback ktexteditor__configpage_mousereleaseevent_callback = nullptr;
    KTextEditor__ConfigPage_MouseDoubleClickEvent_Callback ktexteditor__configpage_mousedoubleclickevent_callback = nullptr;
    KTextEditor__ConfigPage_MouseMoveEvent_Callback ktexteditor__configpage_mousemoveevent_callback = nullptr;
    KTextEditor__ConfigPage_WheelEvent_Callback ktexteditor__configpage_wheelevent_callback = nullptr;
    KTextEditor__ConfigPage_KeyPressEvent_Callback ktexteditor__configpage_keypressevent_callback = nullptr;
    KTextEditor__ConfigPage_KeyReleaseEvent_Callback ktexteditor__configpage_keyreleaseevent_callback = nullptr;
    KTextEditor__ConfigPage_FocusInEvent_Callback ktexteditor__configpage_focusinevent_callback = nullptr;
    KTextEditor__ConfigPage_FocusOutEvent_Callback ktexteditor__configpage_focusoutevent_callback = nullptr;
    KTextEditor__ConfigPage_EnterEvent_Callback ktexteditor__configpage_enterevent_callback = nullptr;
    KTextEditor__ConfigPage_LeaveEvent_Callback ktexteditor__configpage_leaveevent_callback = nullptr;
    KTextEditor__ConfigPage_PaintEvent_Callback ktexteditor__configpage_paintevent_callback = nullptr;
    KTextEditor__ConfigPage_MoveEvent_Callback ktexteditor__configpage_moveevent_callback = nullptr;
    KTextEditor__ConfigPage_ResizeEvent_Callback ktexteditor__configpage_resizeevent_callback = nullptr;
    KTextEditor__ConfigPage_CloseEvent_Callback ktexteditor__configpage_closeevent_callback = nullptr;
    KTextEditor__ConfigPage_ContextMenuEvent_Callback ktexteditor__configpage_contextmenuevent_callback = nullptr;
    KTextEditor__ConfigPage_TabletEvent_Callback ktexteditor__configpage_tabletevent_callback = nullptr;
    KTextEditor__ConfigPage_ActionEvent_Callback ktexteditor__configpage_actionevent_callback = nullptr;
    KTextEditor__ConfigPage_DragEnterEvent_Callback ktexteditor__configpage_dragenterevent_callback = nullptr;
    KTextEditor__ConfigPage_DragMoveEvent_Callback ktexteditor__configpage_dragmoveevent_callback = nullptr;
    KTextEditor__ConfigPage_DragLeaveEvent_Callback ktexteditor__configpage_dragleaveevent_callback = nullptr;
    KTextEditor__ConfigPage_DropEvent_Callback ktexteditor__configpage_dropevent_callback = nullptr;
    KTextEditor__ConfigPage_ShowEvent_Callback ktexteditor__configpage_showevent_callback = nullptr;
    KTextEditor__ConfigPage_HideEvent_Callback ktexteditor__configpage_hideevent_callback = nullptr;
    KTextEditor__ConfigPage_NativeEvent_Callback ktexteditor__configpage_nativeevent_callback = nullptr;
    KTextEditor__ConfigPage_ChangeEvent_Callback ktexteditor__configpage_changeevent_callback = nullptr;
    KTextEditor__ConfigPage_Metric_Callback ktexteditor__configpage_metric_callback = nullptr;
    KTextEditor__ConfigPage_InitPainter_Callback ktexteditor__configpage_initpainter_callback = nullptr;
    KTextEditor__ConfigPage_Redirected_Callback ktexteditor__configpage_redirected_callback = nullptr;
    KTextEditor__ConfigPage_SharedPainter_Callback ktexteditor__configpage_sharedpainter_callback = nullptr;
    KTextEditor__ConfigPage_InputMethodEvent_Callback ktexteditor__configpage_inputmethodevent_callback = nullptr;
    KTextEditor__ConfigPage_InputMethodQuery_Callback ktexteditor__configpage_inputmethodquery_callback = nullptr;
    KTextEditor__ConfigPage_FocusNextPrevChild_Callback ktexteditor__configpage_focusnextprevchild_callback = nullptr;
    KTextEditor__ConfigPage_EventFilter_Callback ktexteditor__configpage_eventfilter_callback = nullptr;
    KTextEditor__ConfigPage_TimerEvent_Callback ktexteditor__configpage_timerevent_callback = nullptr;
    KTextEditor__ConfigPage_ChildEvent_Callback ktexteditor__configpage_childevent_callback = nullptr;
    KTextEditor__ConfigPage_CustomEvent_Callback ktexteditor__configpage_customevent_callback = nullptr;
    KTextEditor__ConfigPage_ConnectNotify_Callback ktexteditor__configpage_connectnotify_callback = nullptr;
    KTextEditor__ConfigPage_DisconnectNotify_Callback ktexteditor__configpage_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KTextEditor::ConfigPage {
        using KTextEditor::ConfigPage::actionEvent;
        using KTextEditor::ConfigPage::changeEvent;
        using KTextEditor::ConfigPage::childEvent;
        using KTextEditor::ConfigPage::closeEvent;
        using KTextEditor::ConfigPage::connectNotify;
        using KTextEditor::ConfigPage::contextMenuEvent;
        using KTextEditor::ConfigPage::customEvent;
        using KTextEditor::ConfigPage::disconnectNotify;
        using KTextEditor::ConfigPage::dragEnterEvent;
        using KTextEditor::ConfigPage::dragLeaveEvent;
        using KTextEditor::ConfigPage::dragMoveEvent;
        using KTextEditor::ConfigPage::dropEvent;
        using KTextEditor::ConfigPage::enterEvent;
        using KTextEditor::ConfigPage::event;
        using KTextEditor::ConfigPage::focusInEvent;
        using KTextEditor::ConfigPage::focusNextPrevChild;
        using KTextEditor::ConfigPage::focusOutEvent;
        using KTextEditor::ConfigPage::hideEvent;
        using KTextEditor::ConfigPage::initPainter;
        using KTextEditor::ConfigPage::inputMethodEvent;
        using KTextEditor::ConfigPage::keyPressEvent;
        using KTextEditor::ConfigPage::keyReleaseEvent;
        using KTextEditor::ConfigPage::leaveEvent;
        using KTextEditor::ConfigPage::metric;
        using KTextEditor::ConfigPage::mouseDoubleClickEvent;
        using KTextEditor::ConfigPage::mouseMoveEvent;
        using KTextEditor::ConfigPage::mousePressEvent;
        using KTextEditor::ConfigPage::mouseReleaseEvent;
        using KTextEditor::ConfigPage::moveEvent;
        using KTextEditor::ConfigPage::nativeEvent;
        using KTextEditor::ConfigPage::paintEvent;
        using KTextEditor::ConfigPage::redirected;
        using KTextEditor::ConfigPage::resizeEvent;
        using KTextEditor::ConfigPage::sharedPainter;
        using KTextEditor::ConfigPage::showEvent;
        using KTextEditor::ConfigPage::tabletEvent;
        using KTextEditor::ConfigPage::timerEvent;
        using KTextEditor::ConfigPage::wheelEvent;
    };

    VirtualKTextEditorConfigPage(QWidget* parent) : KTextEditor::ConfigPage(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ktexteditor__configpage_metaobject_callback) {
            QMetaObject* callback_ret = ktexteditor__configpage_metaobject_callback(this);
            return callback_ret;
        }
        return KTextEditor__ConfigPage::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ktexteditor__configpage_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = ktexteditor__configpage_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KTextEditor__ConfigPage::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktexteditor__configpage_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = ktexteditor__configpage_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KTextEditor__ConfigPage::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString name() const override {
        if (ktexteditor__configpage_name_callback) {
            const char* callback_ret = ktexteditor__configpage_name_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KTextEditor::ConfigPage::name called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QString fullName() const override {
        if (ktexteditor__configpage_fullname_callback) {
            const char* callback_ret = ktexteditor__configpage_fullname_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KTextEditor__ConfigPage::fullName();
    }

    // Virtual method for C ABI access and custom callback
    virtual QIcon icon() const override {
        if (ktexteditor__configpage_icon_callback) {
            QIcon* callback_ret = ktexteditor__configpage_icon_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KTextEditor__ConfigPage::icon();
    }

    // Virtual method for C ABI access and custom callback
    virtual void apply() override {
        if (ktexteditor__configpage_apply_callback) {
            ktexteditor__configpage_apply_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KTextEditor::ConfigPage::apply called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (ktexteditor__configpage_reset_callback) {
            ktexteditor__configpage_reset_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KTextEditor::ConfigPage::reset called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void defaults() override {
        if (ktexteditor__configpage_defaults_callback) {
            ktexteditor__configpage_defaults_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KTextEditor::ConfigPage::defaults called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (ktexteditor__configpage_devtype_callback) {
            int callback_ret = ktexteditor__configpage_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KTextEditor__ConfigPage::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (ktexteditor__configpage_setvisible_callback) {
            bool cbval1 = visible;
            ktexteditor__configpage_setvisible_callback(this, cbval1);
            return;
        }
        KTextEditor__ConfigPage::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (ktexteditor__configpage_sizehint_callback) {
            QSize* callback_ret = ktexteditor__configpage_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KTextEditor__ConfigPage::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (ktexteditor__configpage_minimumsizehint_callback) {
            QSize* callback_ret = ktexteditor__configpage_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KTextEditor__ConfigPage::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (ktexteditor__configpage_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = ktexteditor__configpage_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KTextEditor__ConfigPage::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (ktexteditor__configpage_hasheightforwidth_callback) {
            bool callback_ret = ktexteditor__configpage_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KTextEditor__ConfigPage::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (ktexteditor__configpage_paintengine_callback) {
            QPaintEngine* callback_ret = ktexteditor__configpage_paintengine_callback(this);
            return callback_ret;
        }
        return KTextEditor__ConfigPage::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktexteditor__configpage_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = ktexteditor__configpage_event_callback(this, cbval1);
            return callback_ret;
        }
        return KTextEditor__ConfigPage::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (ktexteditor__configpage_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            ktexteditor__configpage_mousepressevent_callback(this, cbval1);
            return;
        }
        KTextEditor__ConfigPage::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (ktexteditor__configpage_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            ktexteditor__configpage_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KTextEditor__ConfigPage::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (ktexteditor__configpage_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            ktexteditor__configpage_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KTextEditor__ConfigPage::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (ktexteditor__configpage_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            ktexteditor__configpage_mousemoveevent_callback(this, cbval1);
            return;
        }
        KTextEditor__ConfigPage::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (ktexteditor__configpage_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            ktexteditor__configpage_wheelevent_callback(this, cbval1);
            return;
        }
        KTextEditor__ConfigPage::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (ktexteditor__configpage_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            ktexteditor__configpage_keypressevent_callback(this, cbval1);
            return;
        }
        KTextEditor__ConfigPage::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (ktexteditor__configpage_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            ktexteditor__configpage_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KTextEditor__ConfigPage::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (ktexteditor__configpage_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            ktexteditor__configpage_focusinevent_callback(this, cbval1);
            return;
        }
        KTextEditor__ConfigPage::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (ktexteditor__configpage_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            ktexteditor__configpage_focusoutevent_callback(this, cbval1);
            return;
        }
        KTextEditor__ConfigPage::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (ktexteditor__configpage_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            ktexteditor__configpage_enterevent_callback(this, cbval1);
            return;
        }
        KTextEditor__ConfigPage::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (ktexteditor__configpage_leaveevent_callback) {
            QEvent* cbval1 = event;
            ktexteditor__configpage_leaveevent_callback(this, cbval1);
            return;
        }
        KTextEditor__ConfigPage::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (ktexteditor__configpage_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            ktexteditor__configpage_paintevent_callback(this, cbval1);
            return;
        }
        KTextEditor__ConfigPage::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (ktexteditor__configpage_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            ktexteditor__configpage_moveevent_callback(this, cbval1);
            return;
        }
        KTextEditor__ConfigPage::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (ktexteditor__configpage_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            ktexteditor__configpage_resizeevent_callback(this, cbval1);
            return;
        }
        KTextEditor__ConfigPage::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (ktexteditor__configpage_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            ktexteditor__configpage_closeevent_callback(this, cbval1);
            return;
        }
        KTextEditor__ConfigPage::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (ktexteditor__configpage_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            ktexteditor__configpage_contextmenuevent_callback(this, cbval1);
            return;
        }
        KTextEditor__ConfigPage::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (ktexteditor__configpage_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            ktexteditor__configpage_tabletevent_callback(this, cbval1);
            return;
        }
        KTextEditor__ConfigPage::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (ktexteditor__configpage_actionevent_callback) {
            QActionEvent* cbval1 = event;
            ktexteditor__configpage_actionevent_callback(this, cbval1);
            return;
        }
        KTextEditor__ConfigPage::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (ktexteditor__configpage_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            ktexteditor__configpage_dragenterevent_callback(this, cbval1);
            return;
        }
        KTextEditor__ConfigPage::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (ktexteditor__configpage_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            ktexteditor__configpage_dragmoveevent_callback(this, cbval1);
            return;
        }
        KTextEditor__ConfigPage::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (ktexteditor__configpage_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            ktexteditor__configpage_dragleaveevent_callback(this, cbval1);
            return;
        }
        KTextEditor__ConfigPage::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (ktexteditor__configpage_dropevent_callback) {
            QDropEvent* cbval1 = event;
            ktexteditor__configpage_dropevent_callback(this, cbval1);
            return;
        }
        KTextEditor__ConfigPage::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (ktexteditor__configpage_showevent_callback) {
            QShowEvent* cbval1 = event;
            ktexteditor__configpage_showevent_callback(this, cbval1);
            return;
        }
        KTextEditor__ConfigPage::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (ktexteditor__configpage_hideevent_callback) {
            QHideEvent* cbval1 = event;
            ktexteditor__configpage_hideevent_callback(this, cbval1);
            return;
        }
        KTextEditor__ConfigPage::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (ktexteditor__configpage_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = ktexteditor__configpage_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KTextEditor__ConfigPage::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (ktexteditor__configpage_changeevent_callback) {
            QEvent* cbval1 = param1;
            ktexteditor__configpage_changeevent_callback(this, cbval1);
            return;
        }
        KTextEditor__ConfigPage::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (ktexteditor__configpage_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = ktexteditor__configpage_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KTextEditor__ConfigPage::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (ktexteditor__configpage_initpainter_callback) {
            QPainter* cbval1 = painter;
            ktexteditor__configpage_initpainter_callback(this, cbval1);
            return;
        }
        KTextEditor__ConfigPage::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (ktexteditor__configpage_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = ktexteditor__configpage_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KTextEditor__ConfigPage::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (ktexteditor__configpage_sharedpainter_callback) {
            QPainter* callback_ret = ktexteditor__configpage_sharedpainter_callback(this);
            return callback_ret;
        }
        return KTextEditor__ConfigPage::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (ktexteditor__configpage_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            ktexteditor__configpage_inputmethodevent_callback(this, cbval1);
            return;
        }
        KTextEditor__ConfigPage::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (ktexteditor__configpage_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = ktexteditor__configpage_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KTextEditor__ConfigPage::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (ktexteditor__configpage_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = ktexteditor__configpage_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KTextEditor__ConfigPage::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktexteditor__configpage_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = ktexteditor__configpage_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KTextEditor__ConfigPage::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktexteditor__configpage_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            ktexteditor__configpage_timerevent_callback(this, cbval1);
            return;
        }
        KTextEditor__ConfigPage::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktexteditor__configpage_childevent_callback) {
            QChildEvent* cbval1 = event;
            ktexteditor__configpage_childevent_callback(this, cbval1);
            return;
        }
        KTextEditor__ConfigPage::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktexteditor__configpage_customevent_callback) {
            QEvent* cbval1 = event;
            ktexteditor__configpage_customevent_callback(this, cbval1);
            return;
        }
        KTextEditor__ConfigPage::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__configpage_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktexteditor__configpage_connectnotify_callback(this, cbval1);
            return;
        }
        KTextEditor__ConfigPage::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__configpage_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktexteditor__configpage_disconnectnotify_callback(this, cbval1);
            return;
        }
        KTextEditor__ConfigPage::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KTextEditor__ConfigPage_SuperEvent(KTextEditor::ConfigPage* self, QEvent* event);
    friend void KTextEditor__ConfigPage_SuperMousePressEvent(KTextEditor::ConfigPage* self, QMouseEvent* event);
    friend void KTextEditor__ConfigPage_SuperMouseReleaseEvent(KTextEditor::ConfigPage* self, QMouseEvent* event);
    friend void KTextEditor__ConfigPage_SuperMouseDoubleClickEvent(KTextEditor::ConfigPage* self, QMouseEvent* event);
    friend void KTextEditor__ConfigPage_SuperMouseMoveEvent(KTextEditor::ConfigPage* self, QMouseEvent* event);
    friend void KTextEditor__ConfigPage_SuperWheelEvent(KTextEditor::ConfigPage* self, QWheelEvent* event);
    friend void KTextEditor__ConfigPage_SuperKeyPressEvent(KTextEditor::ConfigPage* self, QKeyEvent* event);
    friend void KTextEditor__ConfigPage_SuperKeyReleaseEvent(KTextEditor::ConfigPage* self, QKeyEvent* event);
    friend void KTextEditor__ConfigPage_SuperFocusInEvent(KTextEditor::ConfigPage* self, QFocusEvent* event);
    friend void KTextEditor__ConfigPage_SuperFocusOutEvent(KTextEditor::ConfigPage* self, QFocusEvent* event);
    friend void KTextEditor__ConfigPage_SuperEnterEvent(KTextEditor::ConfigPage* self, QEnterEvent* event);
    friend void KTextEditor__ConfigPage_SuperLeaveEvent(KTextEditor::ConfigPage* self, QEvent* event);
    friend void KTextEditor__ConfigPage_SuperPaintEvent(KTextEditor::ConfigPage* self, QPaintEvent* event);
    friend void KTextEditor__ConfigPage_SuperMoveEvent(KTextEditor::ConfigPage* self, QMoveEvent* event);
    friend void KTextEditor__ConfigPage_SuperResizeEvent(KTextEditor::ConfigPage* self, QResizeEvent* event);
    friend void KTextEditor__ConfigPage_SuperCloseEvent(KTextEditor::ConfigPage* self, QCloseEvent* event);
    friend void KTextEditor__ConfigPage_SuperContextMenuEvent(KTextEditor::ConfigPage* self, QContextMenuEvent* event);
    friend void KTextEditor__ConfigPage_SuperTabletEvent(KTextEditor::ConfigPage* self, QTabletEvent* event);
    friend void KTextEditor__ConfigPage_SuperActionEvent(KTextEditor::ConfigPage* self, QActionEvent* event);
    friend void KTextEditor__ConfigPage_SuperDragEnterEvent(KTextEditor::ConfigPage* self, QDragEnterEvent* event);
    friend void KTextEditor__ConfigPage_SuperDragMoveEvent(KTextEditor::ConfigPage* self, QDragMoveEvent* event);
    friend void KTextEditor__ConfigPage_SuperDragLeaveEvent(KTextEditor::ConfigPage* self, QDragLeaveEvent* event);
    friend void KTextEditor__ConfigPage_SuperDropEvent(KTextEditor::ConfigPage* self, QDropEvent* event);
    friend void KTextEditor__ConfigPage_SuperShowEvent(KTextEditor::ConfigPage* self, QShowEvent* event);
    friend void KTextEditor__ConfigPage_SuperHideEvent(KTextEditor::ConfigPage* self, QHideEvent* event);
    friend bool KTextEditor__ConfigPage_SuperNativeEvent(KTextEditor::ConfigPage* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KTextEditor__ConfigPage_SuperChangeEvent(KTextEditor::ConfigPage* self, QEvent* param1);
    friend int KTextEditor__ConfigPage_SuperMetric(const KTextEditor::ConfigPage* self, int param1);
    friend void KTextEditor__ConfigPage_SuperInitPainter(const KTextEditor::ConfigPage* self, QPainter* painter);
    friend QPaintDevice* KTextEditor__ConfigPage_SuperRedirected(const KTextEditor::ConfigPage* self, QPoint* offset);
    friend QPainter* KTextEditor__ConfigPage_SuperSharedPainter(const KTextEditor::ConfigPage* self);
    friend void KTextEditor__ConfigPage_SuperInputMethodEvent(KTextEditor::ConfigPage* self, QInputMethodEvent* param1);
    friend bool KTextEditor__ConfigPage_SuperFocusNextPrevChild(KTextEditor::ConfigPage* self, bool next);
    friend void KTextEditor__ConfigPage_SuperTimerEvent(KTextEditor::ConfigPage* self, QTimerEvent* event);
    friend void KTextEditor__ConfigPage_SuperChildEvent(KTextEditor::ConfigPage* self, QChildEvent* event);
    friend void KTextEditor__ConfigPage_SuperCustomEvent(KTextEditor::ConfigPage* self, QEvent* event);
    friend void KTextEditor__ConfigPage_SuperConnectNotify(KTextEditor::ConfigPage* self, const QMetaMethod* signal);
    friend void KTextEditor__ConfigPage_SuperDisconnectNotify(KTextEditor::ConfigPage* self, const QMetaMethod* signal);
};

#endif
