#pragma once
#ifndef EXTRAS_KXMLGUI_LIBKMAINWINDOW_HXX
#define EXTRAS_KXMLGUI_LIBKMAINWINDOW_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KMainWindow
class VirtualKMainWindow final : public KMainWindow {
  public:
    // Virtual class public types (including callbacks and access types)
    using KMainWindow_MetaObject_Callback = QMetaObject* (*)(const KMainWindow*);
    using KMainWindow_Metacast_Callback = void* (*)(KMainWindow*, const char*);
    using KMainWindow_Metacall_Callback = int (*)(KMainWindow*, int, int, void**);
    using KMainWindow_ApplyMainWindowSettings_Callback = void (*)(KMainWindow*, KConfigGroup*);
    using KMainWindow_SetCaption_Callback = void (*)(KMainWindow*, const char*);
    using KMainWindow_SetCaption2_Callback = void (*)(KMainWindow*, const char*, bool);
    using KMainWindow_SetPlainCaption_Callback = void (*)(KMainWindow*, const char*);
    using KMainWindow_Event_Callback = bool (*)(KMainWindow*, QEvent*);
    using KMainWindow_KeyPressEvent_Callback = void (*)(KMainWindow*, QKeyEvent*);
    using KMainWindow_CloseEvent_Callback = void (*)(KMainWindow*, QCloseEvent*);
    using KMainWindow_QueryClose_Callback = bool (*)(KMainWindow*);
    using KMainWindow_SaveProperties_Callback = void (*)(KMainWindow*, KConfigGroup*);
    using KMainWindow_ReadProperties_Callback = void (*)(KMainWindow*, KConfigGroup*);
    using KMainWindow_SaveGlobalProperties_Callback = void (*)(KMainWindow*, KConfig*);
    using KMainWindow_ReadGlobalProperties_Callback = void (*)(KMainWindow*, KConfig*);
    using KMainWindow_CreatePopupMenu_Callback = QMenu* (*)(KMainWindow*);
    using KMainWindow_ContextMenuEvent_Callback = void (*)(KMainWindow*, QContextMenuEvent*);
    using KMainWindow_DevType_Callback = int (*)(const KMainWindow*);
    using KMainWindow_SetVisible_Callback = void (*)(KMainWindow*, bool);
    using KMainWindow_SizeHint_Callback = QSize* (*)(const KMainWindow*);
    using KMainWindow_MinimumSizeHint_Callback = QSize* (*)(const KMainWindow*);
    using KMainWindow_HeightForWidth_Callback = int (*)(const KMainWindow*, int);
    using KMainWindow_HasHeightForWidth_Callback = bool (*)(const KMainWindow*);
    using KMainWindow_PaintEngine_Callback = QPaintEngine* (*)(const KMainWindow*);
    using KMainWindow_MousePressEvent_Callback = void (*)(KMainWindow*, QMouseEvent*);
    using KMainWindow_MouseReleaseEvent_Callback = void (*)(KMainWindow*, QMouseEvent*);
    using KMainWindow_MouseDoubleClickEvent_Callback = void (*)(KMainWindow*, QMouseEvent*);
    using KMainWindow_MouseMoveEvent_Callback = void (*)(KMainWindow*, QMouseEvent*);
    using KMainWindow_WheelEvent_Callback = void (*)(KMainWindow*, QWheelEvent*);
    using KMainWindow_KeyReleaseEvent_Callback = void (*)(KMainWindow*, QKeyEvent*);
    using KMainWindow_FocusInEvent_Callback = void (*)(KMainWindow*, QFocusEvent*);
    using KMainWindow_FocusOutEvent_Callback = void (*)(KMainWindow*, QFocusEvent*);
    using KMainWindow_EnterEvent_Callback = void (*)(KMainWindow*, QEnterEvent*);
    using KMainWindow_LeaveEvent_Callback = void (*)(KMainWindow*, QEvent*);
    using KMainWindow_PaintEvent_Callback = void (*)(KMainWindow*, QPaintEvent*);
    using KMainWindow_MoveEvent_Callback = void (*)(KMainWindow*, QMoveEvent*);
    using KMainWindow_ResizeEvent_Callback = void (*)(KMainWindow*, QResizeEvent*);
    using KMainWindow_TabletEvent_Callback = void (*)(KMainWindow*, QTabletEvent*);
    using KMainWindow_ActionEvent_Callback = void (*)(KMainWindow*, QActionEvent*);
    using KMainWindow_DragEnterEvent_Callback = void (*)(KMainWindow*, QDragEnterEvent*);
    using KMainWindow_DragMoveEvent_Callback = void (*)(KMainWindow*, QDragMoveEvent*);
    using KMainWindow_DragLeaveEvent_Callback = void (*)(KMainWindow*, QDragLeaveEvent*);
    using KMainWindow_DropEvent_Callback = void (*)(KMainWindow*, QDropEvent*);
    using KMainWindow_ShowEvent_Callback = void (*)(KMainWindow*, QShowEvent*);
    using KMainWindow_HideEvent_Callback = void (*)(KMainWindow*, QHideEvent*);
    using KMainWindow_NativeEvent_Callback = bool (*)(KMainWindow*, libqt_string, void*, intptr_t*);
    using KMainWindow_ChangeEvent_Callback = void (*)(KMainWindow*, QEvent*);
    using KMainWindow_Metric_Callback = int (*)(const KMainWindow*, int);
    using KMainWindow_InitPainter_Callback = void (*)(const KMainWindow*, QPainter*);
    using KMainWindow_Redirected_Callback = QPaintDevice* (*)(const KMainWindow*, QPoint*);
    using KMainWindow_SharedPainter_Callback = QPainter* (*)(const KMainWindow*);
    using KMainWindow_InputMethodEvent_Callback = void (*)(KMainWindow*, QInputMethodEvent*);
    using KMainWindow_InputMethodQuery_Callback = QVariant* (*)(const KMainWindow*, int);
    using KMainWindow_FocusNextPrevChild_Callback = bool (*)(KMainWindow*, bool);
    using KMainWindow_EventFilter_Callback = bool (*)(KMainWindow*, QObject*, QEvent*);
    using KMainWindow_TimerEvent_Callback = void (*)(KMainWindow*, QTimerEvent*);
    using KMainWindow_ChildEvent_Callback = void (*)(KMainWindow*, QChildEvent*);
    using KMainWindow_CustomEvent_Callback = void (*)(KMainWindow*, QEvent*);
    using KMainWindow_ConnectNotify_Callback = void (*)(KMainWindow*, QMetaMethod*);
    using KMainWindow_DisconnectNotify_Callback = void (*)(KMainWindow*, QMetaMethod*);
    using KMainWindow::create;
    using KMainWindow::destroy;
    using KMainWindow::focusNextChild;
    using KMainWindow::focusPreviousChild;
    using KMainWindow::getDecodedMetricF;
    using KMainWindow::isSignalConnected;
    using KMainWindow::readPropertiesInternal;
    using KMainWindow::receivers;
    using KMainWindow::saveAutoSaveSettings;
    using KMainWindow::savePropertiesInternal;
    using KMainWindow::sender;
    using KMainWindow::senderSignalIndex;
    using KMainWindow::settingsDirty;
    using KMainWindow::updateMicroFocus;

    // Instance callback storage
    KMainWindow_MetaObject_Callback kmainwindow_metaobject_callback = nullptr;
    KMainWindow_Metacast_Callback kmainwindow_metacast_callback = nullptr;
    KMainWindow_Metacall_Callback kmainwindow_metacall_callback = nullptr;
    KMainWindow_ApplyMainWindowSettings_Callback kmainwindow_applymainwindowsettings_callback = nullptr;
    KMainWindow_SetCaption_Callback kmainwindow_setcaption_callback = nullptr;
    KMainWindow_SetCaption2_Callback kmainwindow_setcaption2_callback = nullptr;
    KMainWindow_SetPlainCaption_Callback kmainwindow_setplaincaption_callback = nullptr;
    KMainWindow_Event_Callback kmainwindow_event_callback = nullptr;
    KMainWindow_KeyPressEvent_Callback kmainwindow_keypressevent_callback = nullptr;
    KMainWindow_CloseEvent_Callback kmainwindow_closeevent_callback = nullptr;
    KMainWindow_QueryClose_Callback kmainwindow_queryclose_callback = nullptr;
    KMainWindow_SaveProperties_Callback kmainwindow_saveproperties_callback = nullptr;
    KMainWindow_ReadProperties_Callback kmainwindow_readproperties_callback = nullptr;
    KMainWindow_SaveGlobalProperties_Callback kmainwindow_saveglobalproperties_callback = nullptr;
    KMainWindow_ReadGlobalProperties_Callback kmainwindow_readglobalproperties_callback = nullptr;
    KMainWindow_CreatePopupMenu_Callback kmainwindow_createpopupmenu_callback = nullptr;
    KMainWindow_ContextMenuEvent_Callback kmainwindow_contextmenuevent_callback = nullptr;
    KMainWindow_DevType_Callback kmainwindow_devtype_callback = nullptr;
    KMainWindow_SetVisible_Callback kmainwindow_setvisible_callback = nullptr;
    KMainWindow_SizeHint_Callback kmainwindow_sizehint_callback = nullptr;
    KMainWindow_MinimumSizeHint_Callback kmainwindow_minimumsizehint_callback = nullptr;
    KMainWindow_HeightForWidth_Callback kmainwindow_heightforwidth_callback = nullptr;
    KMainWindow_HasHeightForWidth_Callback kmainwindow_hasheightforwidth_callback = nullptr;
    KMainWindow_PaintEngine_Callback kmainwindow_paintengine_callback = nullptr;
    KMainWindow_MousePressEvent_Callback kmainwindow_mousepressevent_callback = nullptr;
    KMainWindow_MouseReleaseEvent_Callback kmainwindow_mousereleaseevent_callback = nullptr;
    KMainWindow_MouseDoubleClickEvent_Callback kmainwindow_mousedoubleclickevent_callback = nullptr;
    KMainWindow_MouseMoveEvent_Callback kmainwindow_mousemoveevent_callback = nullptr;
    KMainWindow_WheelEvent_Callback kmainwindow_wheelevent_callback = nullptr;
    KMainWindow_KeyReleaseEvent_Callback kmainwindow_keyreleaseevent_callback = nullptr;
    KMainWindow_FocusInEvent_Callback kmainwindow_focusinevent_callback = nullptr;
    KMainWindow_FocusOutEvent_Callback kmainwindow_focusoutevent_callback = nullptr;
    KMainWindow_EnterEvent_Callback kmainwindow_enterevent_callback = nullptr;
    KMainWindow_LeaveEvent_Callback kmainwindow_leaveevent_callback = nullptr;
    KMainWindow_PaintEvent_Callback kmainwindow_paintevent_callback = nullptr;
    KMainWindow_MoveEvent_Callback kmainwindow_moveevent_callback = nullptr;
    KMainWindow_ResizeEvent_Callback kmainwindow_resizeevent_callback = nullptr;
    KMainWindow_TabletEvent_Callback kmainwindow_tabletevent_callback = nullptr;
    KMainWindow_ActionEvent_Callback kmainwindow_actionevent_callback = nullptr;
    KMainWindow_DragEnterEvent_Callback kmainwindow_dragenterevent_callback = nullptr;
    KMainWindow_DragMoveEvent_Callback kmainwindow_dragmoveevent_callback = nullptr;
    KMainWindow_DragLeaveEvent_Callback kmainwindow_dragleaveevent_callback = nullptr;
    KMainWindow_DropEvent_Callback kmainwindow_dropevent_callback = nullptr;
    KMainWindow_ShowEvent_Callback kmainwindow_showevent_callback = nullptr;
    KMainWindow_HideEvent_Callback kmainwindow_hideevent_callback = nullptr;
    KMainWindow_NativeEvent_Callback kmainwindow_nativeevent_callback = nullptr;
    KMainWindow_ChangeEvent_Callback kmainwindow_changeevent_callback = nullptr;
    KMainWindow_Metric_Callback kmainwindow_metric_callback = nullptr;
    KMainWindow_InitPainter_Callback kmainwindow_initpainter_callback = nullptr;
    KMainWindow_Redirected_Callback kmainwindow_redirected_callback = nullptr;
    KMainWindow_SharedPainter_Callback kmainwindow_sharedpainter_callback = nullptr;
    KMainWindow_InputMethodEvent_Callback kmainwindow_inputmethodevent_callback = nullptr;
    KMainWindow_InputMethodQuery_Callback kmainwindow_inputmethodquery_callback = nullptr;
    KMainWindow_FocusNextPrevChild_Callback kmainwindow_focusnextprevchild_callback = nullptr;
    KMainWindow_EventFilter_Callback kmainwindow_eventfilter_callback = nullptr;
    KMainWindow_TimerEvent_Callback kmainwindow_timerevent_callback = nullptr;
    KMainWindow_ChildEvent_Callback kmainwindow_childevent_callback = nullptr;
    KMainWindow_CustomEvent_Callback kmainwindow_customevent_callback = nullptr;
    KMainWindow_ConnectNotify_Callback kmainwindow_connectnotify_callback = nullptr;
    KMainWindow_DisconnectNotify_Callback kmainwindow_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KMainWindow {
        using KMainWindow::actionEvent;
        using KMainWindow::changeEvent;
        using KMainWindow::childEvent;
        using KMainWindow::closeEvent;
        using KMainWindow::connectNotify;
        using KMainWindow::contextMenuEvent;
        using KMainWindow::customEvent;
        using KMainWindow::disconnectNotify;
        using KMainWindow::dragEnterEvent;
        using KMainWindow::dragLeaveEvent;
        using KMainWindow::dragMoveEvent;
        using KMainWindow::dropEvent;
        using KMainWindow::enterEvent;
        using KMainWindow::event;
        using KMainWindow::focusInEvent;
        using KMainWindow::focusNextPrevChild;
        using KMainWindow::focusOutEvent;
        using KMainWindow::hideEvent;
        using KMainWindow::initPainter;
        using KMainWindow::inputMethodEvent;
        using KMainWindow::keyPressEvent;
        using KMainWindow::keyReleaseEvent;
        using KMainWindow::leaveEvent;
        using KMainWindow::metric;
        using KMainWindow::mouseDoubleClickEvent;
        using KMainWindow::mouseMoveEvent;
        using KMainWindow::mousePressEvent;
        using KMainWindow::mouseReleaseEvent;
        using KMainWindow::moveEvent;
        using KMainWindow::nativeEvent;
        using KMainWindow::paintEvent;
        using KMainWindow::queryClose;
        using KMainWindow::readGlobalProperties;
        using KMainWindow::readProperties;
        using KMainWindow::redirected;
        using KMainWindow::resizeEvent;
        using KMainWindow::saveGlobalProperties;
        using KMainWindow::saveProperties;
        using KMainWindow::sharedPainter;
        using KMainWindow::showEvent;
        using KMainWindow::tabletEvent;
        using KMainWindow::timerEvent;
        using KMainWindow::wheelEvent;
    };

    VirtualKMainWindow(QWidget* parent) : KMainWindow(parent) {};
    VirtualKMainWindow() : KMainWindow() {};
    VirtualKMainWindow(QWidget* parent, Qt::WindowFlags flags) : KMainWindow(parent, flags) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kmainwindow_metaobject_callback) {
            QMetaObject* callback_ret = kmainwindow_metaobject_callback(this);
            return callback_ret;
        }
        return KMainWindow::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kmainwindow_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kmainwindow_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KMainWindow::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kmainwindow_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kmainwindow_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KMainWindow::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void applyMainWindowSettings(const KConfigGroup& config) override {
        if (kmainwindow_applymainwindowsettings_callback) {
            const KConfigGroup& config_ret = config;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = const_cast<KConfigGroup*>(&config_ret);
            kmainwindow_applymainwindowsettings_callback(this, cbval1);
            return;
        }
        KMainWindow::applyMainWindowSettings(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCaption(const QString& caption) override {
        if (kmainwindow_setcaption_callback) {
            const auto caption_ret = caption;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray caption_b = caption_ret.toUtf8();
            auto caption_str_len = caption_b.length();
            const char* caption_str = static_cast<const char*>(malloc(caption_str_len + 1));
            memcpy((void*)caption_str, caption_b.data(), caption_str_len);
            ((char*)caption_str)[caption_str_len] = '\0';
            const char* cbval1 = caption_str;
            kmainwindow_setcaption_callback(this, cbval1);
            libqt_free(caption_str);
            return;
        }
        KMainWindow::setCaption(caption);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCaption(const QString& caption, bool modified) override {
        if (kmainwindow_setcaption2_callback) {
            const auto caption_ret = caption;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray caption_b = caption_ret.toUtf8();
            auto caption_str_len = caption_b.length();
            const char* caption_str = static_cast<const char*>(malloc(caption_str_len + 1));
            memcpy((void*)caption_str, caption_b.data(), caption_str_len);
            ((char*)caption_str)[caption_str_len] = '\0';
            const char* cbval1 = caption_str;
            bool cbval2 = modified;
            kmainwindow_setcaption2_callback(this, cbval1, cbval2);
            libqt_free(caption_str);
            return;
        }
        KMainWindow::setCaption(caption, modified);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPlainCaption(const QString& caption) override {
        if (kmainwindow_setplaincaption_callback) {
            const auto caption_ret = caption;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray caption_b = caption_ret.toUtf8();
            auto caption_str_len = caption_b.length();
            const char* caption_str = static_cast<const char*>(malloc(caption_str_len + 1));
            memcpy((void*)caption_str, caption_b.data(), caption_str_len);
            ((char*)caption_str)[caption_str_len] = '\0';
            const char* cbval1 = caption_str;
            kmainwindow_setplaincaption_callback(this, cbval1);
            libqt_free(caption_str);
            return;
        }
        KMainWindow::setPlainCaption(caption);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kmainwindow_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kmainwindow_event_callback(this, cbval1);
            return callback_ret;
        }
        return KMainWindow::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* keyEvent) override {
        if (kmainwindow_keypressevent_callback) {
            QKeyEvent* cbval1 = keyEvent;
            kmainwindow_keypressevent_callback(this, cbval1);
            return;
        }
        KMainWindow::keyPressEvent(keyEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kmainwindow_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            kmainwindow_closeevent_callback(this, cbval1);
            return;
        }
        KMainWindow::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool queryClose() override {
        if (kmainwindow_queryclose_callback) {
            bool callback_ret = kmainwindow_queryclose_callback(this);
            return callback_ret;
        }
        return KMainWindow::queryClose();
    }

    // Virtual method for C ABI access and custom callback
    virtual void saveProperties(KConfigGroup& param1) override {
        if (kmainwindow_saveproperties_callback) {
            KConfigGroup& param1_ret = param1;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = &param1_ret;
            kmainwindow_saveproperties_callback(this, cbval1);
            return;
        }
        KMainWindow::saveProperties(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void readProperties(const KConfigGroup& param1) override {
        if (kmainwindow_readproperties_callback) {
            const KConfigGroup& param1_ret = param1;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = const_cast<KConfigGroup*>(&param1_ret);
            kmainwindow_readproperties_callback(this, cbval1);
            return;
        }
        KMainWindow::readProperties(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void saveGlobalProperties(KConfig* sessionConfig) override {
        if (kmainwindow_saveglobalproperties_callback) {
            KConfig* cbval1 = sessionConfig;
            kmainwindow_saveglobalproperties_callback(this, cbval1);
            return;
        }
        KMainWindow::saveGlobalProperties(sessionConfig);
    }

    // Virtual method for C ABI access and custom callback
    virtual void readGlobalProperties(KConfig* sessionConfig) override {
        if (kmainwindow_readglobalproperties_callback) {
            KConfig* cbval1 = sessionConfig;
            kmainwindow_readglobalproperties_callback(this, cbval1);
            return;
        }
        KMainWindow::readGlobalProperties(sessionConfig);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMenu* createPopupMenu() override {
        if (kmainwindow_createpopupmenu_callback) {
            QMenu* callback_ret = kmainwindow_createpopupmenu_callback(this);
            return callback_ret;
        }
        return KMainWindow::createPopupMenu();
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kmainwindow_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kmainwindow_contextmenuevent_callback(this, cbval1);
            return;
        }
        KMainWindow::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kmainwindow_devtype_callback) {
            int callback_ret = kmainwindow_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KMainWindow::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kmainwindow_setvisible_callback) {
            bool cbval1 = visible;
            kmainwindow_setvisible_callback(this, cbval1);
            return;
        }
        KMainWindow::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kmainwindow_sizehint_callback) {
            QSize* callback_ret = kmainwindow_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KMainWindow::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kmainwindow_minimumsizehint_callback) {
            QSize* callback_ret = kmainwindow_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KMainWindow::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kmainwindow_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kmainwindow_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KMainWindow::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kmainwindow_hasheightforwidth_callback) {
            bool callback_ret = kmainwindow_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KMainWindow::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kmainwindow_paintengine_callback) {
            QPaintEngine* callback_ret = kmainwindow_paintengine_callback(this);
            return callback_ret;
        }
        return KMainWindow::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kmainwindow_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kmainwindow_mousepressevent_callback(this, cbval1);
            return;
        }
        KMainWindow::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kmainwindow_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kmainwindow_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KMainWindow::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kmainwindow_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kmainwindow_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KMainWindow::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kmainwindow_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kmainwindow_mousemoveevent_callback(this, cbval1);
            return;
        }
        KMainWindow::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kmainwindow_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kmainwindow_wheelevent_callback(this, cbval1);
            return;
        }
        KMainWindow::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kmainwindow_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kmainwindow_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KMainWindow::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kmainwindow_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kmainwindow_focusinevent_callback(this, cbval1);
            return;
        }
        KMainWindow::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kmainwindow_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kmainwindow_focusoutevent_callback(this, cbval1);
            return;
        }
        KMainWindow::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kmainwindow_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kmainwindow_enterevent_callback(this, cbval1);
            return;
        }
        KMainWindow::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kmainwindow_leaveevent_callback) {
            QEvent* cbval1 = event;
            kmainwindow_leaveevent_callback(this, cbval1);
            return;
        }
        KMainWindow::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kmainwindow_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kmainwindow_paintevent_callback(this, cbval1);
            return;
        }
        KMainWindow::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kmainwindow_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kmainwindow_moveevent_callback(this, cbval1);
            return;
        }
        KMainWindow::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kmainwindow_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kmainwindow_resizeevent_callback(this, cbval1);
            return;
        }
        KMainWindow::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kmainwindow_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kmainwindow_tabletevent_callback(this, cbval1);
            return;
        }
        KMainWindow::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kmainwindow_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kmainwindow_actionevent_callback(this, cbval1);
            return;
        }
        KMainWindow::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kmainwindow_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kmainwindow_dragenterevent_callback(this, cbval1);
            return;
        }
        KMainWindow::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kmainwindow_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kmainwindow_dragmoveevent_callback(this, cbval1);
            return;
        }
        KMainWindow::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kmainwindow_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kmainwindow_dragleaveevent_callback(this, cbval1);
            return;
        }
        KMainWindow::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kmainwindow_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kmainwindow_dropevent_callback(this, cbval1);
            return;
        }
        KMainWindow::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kmainwindow_showevent_callback) {
            QShowEvent* cbval1 = event;
            kmainwindow_showevent_callback(this, cbval1);
            return;
        }
        KMainWindow::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kmainwindow_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kmainwindow_hideevent_callback(this, cbval1);
            return;
        }
        KMainWindow::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kmainwindow_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kmainwindow_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KMainWindow::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kmainwindow_changeevent_callback) {
            QEvent* cbval1 = param1;
            kmainwindow_changeevent_callback(this, cbval1);
            return;
        }
        KMainWindow::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kmainwindow_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kmainwindow_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KMainWindow::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kmainwindow_initpainter_callback) {
            QPainter* cbval1 = painter;
            kmainwindow_initpainter_callback(this, cbval1);
            return;
        }
        KMainWindow::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kmainwindow_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kmainwindow_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KMainWindow::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kmainwindow_sharedpainter_callback) {
            QPainter* callback_ret = kmainwindow_sharedpainter_callback(this);
            return callback_ret;
        }
        return KMainWindow::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kmainwindow_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kmainwindow_inputmethodevent_callback(this, cbval1);
            return;
        }
        KMainWindow::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kmainwindow_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kmainwindow_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KMainWindow::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kmainwindow_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kmainwindow_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KMainWindow::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kmainwindow_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kmainwindow_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KMainWindow::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kmainwindow_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kmainwindow_timerevent_callback(this, cbval1);
            return;
        }
        KMainWindow::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kmainwindow_childevent_callback) {
            QChildEvent* cbval1 = event;
            kmainwindow_childevent_callback(this, cbval1);
            return;
        }
        KMainWindow::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kmainwindow_customevent_callback) {
            QEvent* cbval1 = event;
            kmainwindow_customevent_callback(this, cbval1);
            return;
        }
        KMainWindow::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kmainwindow_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kmainwindow_connectnotify_callback(this, cbval1);
            return;
        }
        KMainWindow::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kmainwindow_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kmainwindow_disconnectnotify_callback(this, cbval1);
            return;
        }
        KMainWindow::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KMainWindow_SuperEvent(KMainWindow* self, QEvent* event);
    friend void KMainWindow_SuperKeyPressEvent(KMainWindow* self, QKeyEvent* keyEvent);
    friend void KMainWindow_SuperCloseEvent(KMainWindow* self, QCloseEvent* param1);
    friend bool KMainWindow_SuperQueryClose(KMainWindow* self);
    friend void KMainWindow_SuperSaveProperties(KMainWindow* self, KConfigGroup* param1);
    friend void KMainWindow_SuperReadProperties(KMainWindow* self, const KConfigGroup* param1);
    friend void KMainWindow_SuperSaveGlobalProperties(KMainWindow* self, KConfig* sessionConfig);
    friend void KMainWindow_SuperReadGlobalProperties(KMainWindow* self, KConfig* sessionConfig);
    friend void KMainWindow_SuperContextMenuEvent(KMainWindow* self, QContextMenuEvent* event);
    friend void KMainWindow_SuperMousePressEvent(KMainWindow* self, QMouseEvent* event);
    friend void KMainWindow_SuperMouseReleaseEvent(KMainWindow* self, QMouseEvent* event);
    friend void KMainWindow_SuperMouseDoubleClickEvent(KMainWindow* self, QMouseEvent* event);
    friend void KMainWindow_SuperMouseMoveEvent(KMainWindow* self, QMouseEvent* event);
    friend void KMainWindow_SuperWheelEvent(KMainWindow* self, QWheelEvent* event);
    friend void KMainWindow_SuperKeyReleaseEvent(KMainWindow* self, QKeyEvent* event);
    friend void KMainWindow_SuperFocusInEvent(KMainWindow* self, QFocusEvent* event);
    friend void KMainWindow_SuperFocusOutEvent(KMainWindow* self, QFocusEvent* event);
    friend void KMainWindow_SuperEnterEvent(KMainWindow* self, QEnterEvent* event);
    friend void KMainWindow_SuperLeaveEvent(KMainWindow* self, QEvent* event);
    friend void KMainWindow_SuperPaintEvent(KMainWindow* self, QPaintEvent* event);
    friend void KMainWindow_SuperMoveEvent(KMainWindow* self, QMoveEvent* event);
    friend void KMainWindow_SuperResizeEvent(KMainWindow* self, QResizeEvent* event);
    friend void KMainWindow_SuperTabletEvent(KMainWindow* self, QTabletEvent* event);
    friend void KMainWindow_SuperActionEvent(KMainWindow* self, QActionEvent* event);
    friend void KMainWindow_SuperDragEnterEvent(KMainWindow* self, QDragEnterEvent* event);
    friend void KMainWindow_SuperDragMoveEvent(KMainWindow* self, QDragMoveEvent* event);
    friend void KMainWindow_SuperDragLeaveEvent(KMainWindow* self, QDragLeaveEvent* event);
    friend void KMainWindow_SuperDropEvent(KMainWindow* self, QDropEvent* event);
    friend void KMainWindow_SuperShowEvent(KMainWindow* self, QShowEvent* event);
    friend void KMainWindow_SuperHideEvent(KMainWindow* self, QHideEvent* event);
    friend bool KMainWindow_SuperNativeEvent(KMainWindow* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KMainWindow_SuperChangeEvent(KMainWindow* self, QEvent* param1);
    friend int KMainWindow_SuperMetric(const KMainWindow* self, int param1);
    friend void KMainWindow_SuperInitPainter(const KMainWindow* self, QPainter* painter);
    friend QPaintDevice* KMainWindow_SuperRedirected(const KMainWindow* self, QPoint* offset);
    friend QPainter* KMainWindow_SuperSharedPainter(const KMainWindow* self);
    friend void KMainWindow_SuperInputMethodEvent(KMainWindow* self, QInputMethodEvent* param1);
    friend bool KMainWindow_SuperFocusNextPrevChild(KMainWindow* self, bool next);
    friend void KMainWindow_SuperTimerEvent(KMainWindow* self, QTimerEvent* event);
    friend void KMainWindow_SuperChildEvent(KMainWindow* self, QChildEvent* event);
    friend void KMainWindow_SuperCustomEvent(KMainWindow* self, QEvent* event);
    friend void KMainWindow_SuperConnectNotify(KMainWindow* self, const QMetaMethod* signal);
    friend void KMainWindow_SuperDisconnectNotify(KMainWindow* self, const QMetaMethod* signal);
};

#endif
