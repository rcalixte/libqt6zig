#pragma once
#ifndef EXTRAS_KXMLGUI_LIBKXMLGUIWINDOW_HXX
#define EXTRAS_KXMLGUI_LIBKXMLGUIWINDOW_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KXmlGuiWindow
class VirtualKXmlGuiWindow final : public KXmlGuiWindow {
  public:
    // Virtual class public types (including callbacks and access types)
    using KXmlGuiWindow_MetaObject_Callback = QMetaObject* (*)(const KXmlGuiWindow*);
    using KXmlGuiWindow_Metacast_Callback = void* (*)(KXmlGuiWindow*, const char*);
    using KXmlGuiWindow_Metacall_Callback = int (*)(KXmlGuiWindow*, int, int, void**);
    using KXmlGuiWindow_GuiFactory_Callback = KXMLGUIFactory* (*)(KXmlGuiWindow*);
    using KXmlGuiWindow_ApplyMainWindowSettings_Callback = void (*)(KXmlGuiWindow*, KConfigGroup*);
    using KXmlGuiWindow_ConfigureToolbars_Callback = void (*)(KXmlGuiWindow*);
    using KXmlGuiWindow_SlotStateChanged_Callback = void (*)(KXmlGuiWindow*, const char*);
    using KXmlGuiWindow_Event_Callback = bool (*)(KXmlGuiWindow*, QEvent*);
    using KXmlGuiWindow_SaveNewToolbarConfig_Callback = void (*)(KXmlGuiWindow*);
    using KXmlGuiWindow_SetCaption_Callback = void (*)(KXmlGuiWindow*, const char*);
    using KXmlGuiWindow_SetPlainCaption_Callback = void (*)(KXmlGuiWindow*, const char*);
    using KXmlGuiWindow_KeyPressEvent_Callback = void (*)(KXmlGuiWindow*, QKeyEvent*);
    using KXmlGuiWindow_CloseEvent_Callback = void (*)(KXmlGuiWindow*, QCloseEvent*);
    using KXmlGuiWindow_QueryClose_Callback = bool (*)(KXmlGuiWindow*);
    using KXmlGuiWindow_SaveProperties_Callback = void (*)(KXmlGuiWindow*, KConfigGroup*);
    using KXmlGuiWindow_ReadProperties_Callback = void (*)(KXmlGuiWindow*, KConfigGroup*);
    using KXmlGuiWindow_SaveGlobalProperties_Callback = void (*)(KXmlGuiWindow*, KConfig*);
    using KXmlGuiWindow_ReadGlobalProperties_Callback = void (*)(KXmlGuiWindow*, KConfig*);
    using KXmlGuiWindow_CreatePopupMenu_Callback = QMenu* (*)(KXmlGuiWindow*);
    using KXmlGuiWindow_ContextMenuEvent_Callback = void (*)(KXmlGuiWindow*, QContextMenuEvent*);
    using KXmlGuiWindow_DevType_Callback = int (*)(const KXmlGuiWindow*);
    using KXmlGuiWindow_SetVisible_Callback = void (*)(KXmlGuiWindow*, bool);
    using KXmlGuiWindow_SizeHint_Callback = QSize* (*)(const KXmlGuiWindow*);
    using KXmlGuiWindow_MinimumSizeHint_Callback = QSize* (*)(const KXmlGuiWindow*);
    using KXmlGuiWindow_HeightForWidth_Callback = int (*)(const KXmlGuiWindow*, int);
    using KXmlGuiWindow_HasHeightForWidth_Callback = bool (*)(const KXmlGuiWindow*);
    using KXmlGuiWindow_PaintEngine_Callback = QPaintEngine* (*)(const KXmlGuiWindow*);
    using KXmlGuiWindow_MousePressEvent_Callback = void (*)(KXmlGuiWindow*, QMouseEvent*);
    using KXmlGuiWindow_MouseReleaseEvent_Callback = void (*)(KXmlGuiWindow*, QMouseEvent*);
    using KXmlGuiWindow_MouseDoubleClickEvent_Callback = void (*)(KXmlGuiWindow*, QMouseEvent*);
    using KXmlGuiWindow_MouseMoveEvent_Callback = void (*)(KXmlGuiWindow*, QMouseEvent*);
    using KXmlGuiWindow_WheelEvent_Callback = void (*)(KXmlGuiWindow*, QWheelEvent*);
    using KXmlGuiWindow_KeyReleaseEvent_Callback = void (*)(KXmlGuiWindow*, QKeyEvent*);
    using KXmlGuiWindow_FocusInEvent_Callback = void (*)(KXmlGuiWindow*, QFocusEvent*);
    using KXmlGuiWindow_FocusOutEvent_Callback = void (*)(KXmlGuiWindow*, QFocusEvent*);
    using KXmlGuiWindow_EnterEvent_Callback = void (*)(KXmlGuiWindow*, QEnterEvent*);
    using KXmlGuiWindow_LeaveEvent_Callback = void (*)(KXmlGuiWindow*, QEvent*);
    using KXmlGuiWindow_PaintEvent_Callback = void (*)(KXmlGuiWindow*, QPaintEvent*);
    using KXmlGuiWindow_MoveEvent_Callback = void (*)(KXmlGuiWindow*, QMoveEvent*);
    using KXmlGuiWindow_ResizeEvent_Callback = void (*)(KXmlGuiWindow*, QResizeEvent*);
    using KXmlGuiWindow_TabletEvent_Callback = void (*)(KXmlGuiWindow*, QTabletEvent*);
    using KXmlGuiWindow_ActionEvent_Callback = void (*)(KXmlGuiWindow*, QActionEvent*);
    using KXmlGuiWindow_DragEnterEvent_Callback = void (*)(KXmlGuiWindow*, QDragEnterEvent*);
    using KXmlGuiWindow_DragMoveEvent_Callback = void (*)(KXmlGuiWindow*, QDragMoveEvent*);
    using KXmlGuiWindow_DragLeaveEvent_Callback = void (*)(KXmlGuiWindow*, QDragLeaveEvent*);
    using KXmlGuiWindow_DropEvent_Callback = void (*)(KXmlGuiWindow*, QDropEvent*);
    using KXmlGuiWindow_ShowEvent_Callback = void (*)(KXmlGuiWindow*, QShowEvent*);
    using KXmlGuiWindow_HideEvent_Callback = void (*)(KXmlGuiWindow*, QHideEvent*);
    using KXmlGuiWindow_NativeEvent_Callback = bool (*)(KXmlGuiWindow*, libqt_string, void*, intptr_t*);
    using KXmlGuiWindow_ChangeEvent_Callback = void (*)(KXmlGuiWindow*, QEvent*);
    using KXmlGuiWindow_Metric_Callback = int (*)(const KXmlGuiWindow*, int);
    using KXmlGuiWindow_InitPainter_Callback = void (*)(const KXmlGuiWindow*, QPainter*);
    using KXmlGuiWindow_Redirected_Callback = QPaintDevice* (*)(const KXmlGuiWindow*, QPoint*);
    using KXmlGuiWindow_SharedPainter_Callback = QPainter* (*)(const KXmlGuiWindow*);
    using KXmlGuiWindow_InputMethodEvent_Callback = void (*)(KXmlGuiWindow*, QInputMethodEvent*);
    using KXmlGuiWindow_InputMethodQuery_Callback = QVariant* (*)(const KXmlGuiWindow*, int);
    using KXmlGuiWindow_FocusNextPrevChild_Callback = bool (*)(KXmlGuiWindow*, bool);
    using KXmlGuiWindow_EventFilter_Callback = bool (*)(KXmlGuiWindow*, QObject*, QEvent*);
    using KXmlGuiWindow_TimerEvent_Callback = void (*)(KXmlGuiWindow*, QTimerEvent*);
    using KXmlGuiWindow_ChildEvent_Callback = void (*)(KXmlGuiWindow*, QChildEvent*);
    using KXmlGuiWindow_CustomEvent_Callback = void (*)(KXmlGuiWindow*, QEvent*);
    using KXmlGuiWindow_ConnectNotify_Callback = void (*)(KXmlGuiWindow*, QMetaMethod*);
    using KXmlGuiWindow_DisconnectNotify_Callback = void (*)(KXmlGuiWindow*, QMetaMethod*);
    using KXmlGuiWindow_ContainerTags_Callback = const char** (*)(const KXmlGuiWindow*);
    using KXmlGuiWindow_CreateContainer_Callback = QWidget* (*)(KXmlGuiWindow*, QWidget*, int, QDomElement*, QAction**);
    using KXmlGuiWindow_RemoveContainer_Callback = void (*)(KXmlGuiWindow*, QWidget*, QWidget*, QDomElement*, QAction*);
    using KXmlGuiWindow_CustomTags_Callback = const char** (*)(const KXmlGuiWindow*);
    using KXmlGuiWindow_CreateCustomElement_Callback = QAction* (*)(KXmlGuiWindow*, QWidget*, int, QDomElement*);
    using KXmlGuiWindow_FinalizeGUI_Callback = void (*)(KXmlGuiWindow*, KXMLGUIClient*);
    using KXmlGuiWindow_Action2_Callback = QAction* (*)(const KXmlGuiWindow*, QDomElement*);
    using KXmlGuiWindow_ActionCollection_Callback = KActionCollection* (*)(const KXmlGuiWindow*);
    using KXmlGuiWindow_ComponentName_Callback = const char* (*)(const KXmlGuiWindow*);
    using KXmlGuiWindow_DomDocument_Callback = QDomDocument* (*)(const KXmlGuiWindow*);
    using KXmlGuiWindow_XmlFile_Callback = const char* (*)(const KXmlGuiWindow*);
    using KXmlGuiWindow_LocalXMLFile_Callback = const char* (*)(const KXmlGuiWindow*);
    using KXmlGuiWindow_SetComponentName_Callback = void (*)(KXmlGuiWindow*, const char*, const char*);
    using KXmlGuiWindow_SetXMLFile_Callback = void (*)(KXmlGuiWindow*, const char*, bool, bool);
    using KXmlGuiWindow_SetLocalXMLFile_Callback = void (*)(KXmlGuiWindow*, const char*);
    using KXmlGuiWindow_SetXML_Callback = void (*)(KXmlGuiWindow*, const char*, bool);
    using KXmlGuiWindow_SetDOMDocument_Callback = void (*)(KXmlGuiWindow*, QDomDocument*, bool);
    using KXmlGuiWindow_StateChanged_Callback = void (*)(KXmlGuiWindow*, const char*, int);
    using KXmlGuiWindow::checkAmbiguousShortcuts;
    using KXmlGuiWindow::create;
    using KXmlGuiWindow::destroy;
    using KXmlGuiWindow::focusNextChild;
    using KXmlGuiWindow::focusPreviousChild;
    using KXmlGuiWindow::getDecodedMetricF;
    using KXmlGuiWindow::isSignalConnected;
    using KXmlGuiWindow::loadStandardsXmlFile;
    using KXmlGuiWindow::readPropertiesInternal;
    using KXmlGuiWindow::receivers;
    using KXmlGuiWindow::saveAutoSaveSettings;
    using KXmlGuiWindow::savePropertiesInternal;
    using KXmlGuiWindow::sender;
    using KXmlGuiWindow::senderSignalIndex;
    using KXmlGuiWindow::settingsDirty;
    using KXmlGuiWindow::standardsXmlFileLocation;
    using KXmlGuiWindow::updateMicroFocus;

    // Instance callback storage
    KXmlGuiWindow_MetaObject_Callback kxmlguiwindow_metaobject_callback = nullptr;
    KXmlGuiWindow_Metacast_Callback kxmlguiwindow_metacast_callback = nullptr;
    KXmlGuiWindow_Metacall_Callback kxmlguiwindow_metacall_callback = nullptr;
    KXmlGuiWindow_GuiFactory_Callback kxmlguiwindow_guifactory_callback = nullptr;
    KXmlGuiWindow_ApplyMainWindowSettings_Callback kxmlguiwindow_applymainwindowsettings_callback = nullptr;
    KXmlGuiWindow_ConfigureToolbars_Callback kxmlguiwindow_configuretoolbars_callback = nullptr;
    KXmlGuiWindow_SlotStateChanged_Callback kxmlguiwindow_slotstatechanged_callback = nullptr;
    KXmlGuiWindow_Event_Callback kxmlguiwindow_event_callback = nullptr;
    KXmlGuiWindow_SaveNewToolbarConfig_Callback kxmlguiwindow_savenewtoolbarconfig_callback = nullptr;
    KXmlGuiWindow_SetCaption_Callback kxmlguiwindow_setcaption_callback = nullptr;
    KXmlGuiWindow_SetPlainCaption_Callback kxmlguiwindow_setplaincaption_callback = nullptr;
    KXmlGuiWindow_KeyPressEvent_Callback kxmlguiwindow_keypressevent_callback = nullptr;
    KXmlGuiWindow_CloseEvent_Callback kxmlguiwindow_closeevent_callback = nullptr;
    KXmlGuiWindow_QueryClose_Callback kxmlguiwindow_queryclose_callback = nullptr;
    KXmlGuiWindow_SaveProperties_Callback kxmlguiwindow_saveproperties_callback = nullptr;
    KXmlGuiWindow_ReadProperties_Callback kxmlguiwindow_readproperties_callback = nullptr;
    KXmlGuiWindow_SaveGlobalProperties_Callback kxmlguiwindow_saveglobalproperties_callback = nullptr;
    KXmlGuiWindow_ReadGlobalProperties_Callback kxmlguiwindow_readglobalproperties_callback = nullptr;
    KXmlGuiWindow_CreatePopupMenu_Callback kxmlguiwindow_createpopupmenu_callback = nullptr;
    KXmlGuiWindow_ContextMenuEvent_Callback kxmlguiwindow_contextmenuevent_callback = nullptr;
    KXmlGuiWindow_DevType_Callback kxmlguiwindow_devtype_callback = nullptr;
    KXmlGuiWindow_SetVisible_Callback kxmlguiwindow_setvisible_callback = nullptr;
    KXmlGuiWindow_SizeHint_Callback kxmlguiwindow_sizehint_callback = nullptr;
    KXmlGuiWindow_MinimumSizeHint_Callback kxmlguiwindow_minimumsizehint_callback = nullptr;
    KXmlGuiWindow_HeightForWidth_Callback kxmlguiwindow_heightforwidth_callback = nullptr;
    KXmlGuiWindow_HasHeightForWidth_Callback kxmlguiwindow_hasheightforwidth_callback = nullptr;
    KXmlGuiWindow_PaintEngine_Callback kxmlguiwindow_paintengine_callback = nullptr;
    KXmlGuiWindow_MousePressEvent_Callback kxmlguiwindow_mousepressevent_callback = nullptr;
    KXmlGuiWindow_MouseReleaseEvent_Callback kxmlguiwindow_mousereleaseevent_callback = nullptr;
    KXmlGuiWindow_MouseDoubleClickEvent_Callback kxmlguiwindow_mousedoubleclickevent_callback = nullptr;
    KXmlGuiWindow_MouseMoveEvent_Callback kxmlguiwindow_mousemoveevent_callback = nullptr;
    KXmlGuiWindow_WheelEvent_Callback kxmlguiwindow_wheelevent_callback = nullptr;
    KXmlGuiWindow_KeyReleaseEvent_Callback kxmlguiwindow_keyreleaseevent_callback = nullptr;
    KXmlGuiWindow_FocusInEvent_Callback kxmlguiwindow_focusinevent_callback = nullptr;
    KXmlGuiWindow_FocusOutEvent_Callback kxmlguiwindow_focusoutevent_callback = nullptr;
    KXmlGuiWindow_EnterEvent_Callback kxmlguiwindow_enterevent_callback = nullptr;
    KXmlGuiWindow_LeaveEvent_Callback kxmlguiwindow_leaveevent_callback = nullptr;
    KXmlGuiWindow_PaintEvent_Callback kxmlguiwindow_paintevent_callback = nullptr;
    KXmlGuiWindow_MoveEvent_Callback kxmlguiwindow_moveevent_callback = nullptr;
    KXmlGuiWindow_ResizeEvent_Callback kxmlguiwindow_resizeevent_callback = nullptr;
    KXmlGuiWindow_TabletEvent_Callback kxmlguiwindow_tabletevent_callback = nullptr;
    KXmlGuiWindow_ActionEvent_Callback kxmlguiwindow_actionevent_callback = nullptr;
    KXmlGuiWindow_DragEnterEvent_Callback kxmlguiwindow_dragenterevent_callback = nullptr;
    KXmlGuiWindow_DragMoveEvent_Callback kxmlguiwindow_dragmoveevent_callback = nullptr;
    KXmlGuiWindow_DragLeaveEvent_Callback kxmlguiwindow_dragleaveevent_callback = nullptr;
    KXmlGuiWindow_DropEvent_Callback kxmlguiwindow_dropevent_callback = nullptr;
    KXmlGuiWindow_ShowEvent_Callback kxmlguiwindow_showevent_callback = nullptr;
    KXmlGuiWindow_HideEvent_Callback kxmlguiwindow_hideevent_callback = nullptr;
    KXmlGuiWindow_NativeEvent_Callback kxmlguiwindow_nativeevent_callback = nullptr;
    KXmlGuiWindow_ChangeEvent_Callback kxmlguiwindow_changeevent_callback = nullptr;
    KXmlGuiWindow_Metric_Callback kxmlguiwindow_metric_callback = nullptr;
    KXmlGuiWindow_InitPainter_Callback kxmlguiwindow_initpainter_callback = nullptr;
    KXmlGuiWindow_Redirected_Callback kxmlguiwindow_redirected_callback = nullptr;
    KXmlGuiWindow_SharedPainter_Callback kxmlguiwindow_sharedpainter_callback = nullptr;
    KXmlGuiWindow_InputMethodEvent_Callback kxmlguiwindow_inputmethodevent_callback = nullptr;
    KXmlGuiWindow_InputMethodQuery_Callback kxmlguiwindow_inputmethodquery_callback = nullptr;
    KXmlGuiWindow_FocusNextPrevChild_Callback kxmlguiwindow_focusnextprevchild_callback = nullptr;
    KXmlGuiWindow_EventFilter_Callback kxmlguiwindow_eventfilter_callback = nullptr;
    KXmlGuiWindow_TimerEvent_Callback kxmlguiwindow_timerevent_callback = nullptr;
    KXmlGuiWindow_ChildEvent_Callback kxmlguiwindow_childevent_callback = nullptr;
    KXmlGuiWindow_CustomEvent_Callback kxmlguiwindow_customevent_callback = nullptr;
    KXmlGuiWindow_ConnectNotify_Callback kxmlguiwindow_connectnotify_callback = nullptr;
    KXmlGuiWindow_DisconnectNotify_Callback kxmlguiwindow_disconnectnotify_callback = nullptr;
    KXmlGuiWindow_ContainerTags_Callback kxmlguiwindow_containertags_callback = nullptr;
    KXmlGuiWindow_CreateContainer_Callback kxmlguiwindow_createcontainer_callback = nullptr;
    KXmlGuiWindow_RemoveContainer_Callback kxmlguiwindow_removecontainer_callback = nullptr;
    KXmlGuiWindow_CustomTags_Callback kxmlguiwindow_customtags_callback = nullptr;
    KXmlGuiWindow_CreateCustomElement_Callback kxmlguiwindow_createcustomelement_callback = nullptr;
    KXmlGuiWindow_FinalizeGUI_Callback kxmlguiwindow_finalizegui_callback = nullptr;
    KXmlGuiWindow_Action2_Callback kxmlguiwindow_action2_callback = nullptr;
    KXmlGuiWindow_ActionCollection_Callback kxmlguiwindow_actioncollection_callback = nullptr;
    KXmlGuiWindow_ComponentName_Callback kxmlguiwindow_componentname_callback = nullptr;
    KXmlGuiWindow_DomDocument_Callback kxmlguiwindow_domdocument_callback = nullptr;
    KXmlGuiWindow_XmlFile_Callback kxmlguiwindow_xmlfile_callback = nullptr;
    KXmlGuiWindow_LocalXMLFile_Callback kxmlguiwindow_localxmlfile_callback = nullptr;
    KXmlGuiWindow_SetComponentName_Callback kxmlguiwindow_setcomponentname_callback = nullptr;
    KXmlGuiWindow_SetXMLFile_Callback kxmlguiwindow_setxmlfile_callback = nullptr;
    KXmlGuiWindow_SetLocalXMLFile_Callback kxmlguiwindow_setlocalxmlfile_callback = nullptr;
    KXmlGuiWindow_SetXML_Callback kxmlguiwindow_setxml_callback = nullptr;
    KXmlGuiWindow_SetDOMDocument_Callback kxmlguiwindow_setdomdocument_callback = nullptr;
    KXmlGuiWindow_StateChanged_Callback kxmlguiwindow_statechanged_callback = nullptr;

    // Access struct
    struct Base : KXmlGuiWindow {
        using KXmlGuiWindow::actionEvent;
        using KXmlGuiWindow::changeEvent;
        using KXmlGuiWindow::childEvent;
        using KXmlGuiWindow::closeEvent;
        using KXmlGuiWindow::connectNotify;
        using KXmlGuiWindow::contextMenuEvent;
        using KXmlGuiWindow::customEvent;
        using KXmlGuiWindow::disconnectNotify;
        using KXmlGuiWindow::dragEnterEvent;
        using KXmlGuiWindow::dragLeaveEvent;
        using KXmlGuiWindow::dragMoveEvent;
        using KXmlGuiWindow::dropEvent;
        using KXmlGuiWindow::enterEvent;
        using KXmlGuiWindow::event;
        using KXmlGuiWindow::focusInEvent;
        using KXmlGuiWindow::focusNextPrevChild;
        using KXmlGuiWindow::focusOutEvent;
        using KXmlGuiWindow::hideEvent;
        using KXmlGuiWindow::initPainter;
        using KXmlGuiWindow::inputMethodEvent;
        using KXmlGuiWindow::keyPressEvent;
        using KXmlGuiWindow::keyReleaseEvent;
        using KXmlGuiWindow::leaveEvent;
        using KXmlGuiWindow::metric;
        using KXmlGuiWindow::mouseDoubleClickEvent;
        using KXmlGuiWindow::mouseMoveEvent;
        using KXmlGuiWindow::mousePressEvent;
        using KXmlGuiWindow::mouseReleaseEvent;
        using KXmlGuiWindow::moveEvent;
        using KXmlGuiWindow::nativeEvent;
        using KXmlGuiWindow::paintEvent;
        using KXmlGuiWindow::queryClose;
        using KXmlGuiWindow::readGlobalProperties;
        using KXmlGuiWindow::readProperties;
        using KXmlGuiWindow::redirected;
        using KXmlGuiWindow::resizeEvent;
        using KXmlGuiWindow::saveGlobalProperties;
        using KXmlGuiWindow::saveNewToolbarConfig;
        using KXmlGuiWindow::saveProperties;
        using KXmlGuiWindow::setComponentName;
        using KXmlGuiWindow::setDOMDocument;
        using KXmlGuiWindow::setLocalXMLFile;
        using KXmlGuiWindow::setXML;
        using KXmlGuiWindow::setXMLFile;
        using KXmlGuiWindow::sharedPainter;
        using KXmlGuiWindow::showEvent;
        using KXmlGuiWindow::stateChanged;
        using KXmlGuiWindow::tabletEvent;
        using KXmlGuiWindow::timerEvent;
        using KXmlGuiWindow::wheelEvent;
    };

    VirtualKXmlGuiWindow(QWidget* parent) : KXmlGuiWindow(parent) {};
    VirtualKXmlGuiWindow() : KXmlGuiWindow() {};
    VirtualKXmlGuiWindow(QWidget* parent, Qt::WindowFlags flags) : KXmlGuiWindow(parent, flags) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kxmlguiwindow_metaobject_callback) {
            QMetaObject* callback_ret = kxmlguiwindow_metaobject_callback(this);
            return callback_ret;
        }
        return KXmlGuiWindow::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kxmlguiwindow_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kxmlguiwindow_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KXmlGuiWindow::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kxmlguiwindow_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kxmlguiwindow_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KXmlGuiWindow::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual KXMLGUIFactory* guiFactory() override {
        if (kxmlguiwindow_guifactory_callback) {
            KXMLGUIFactory* callback_ret = kxmlguiwindow_guifactory_callback(this);
            return callback_ret;
        }
        return KXmlGuiWindow::guiFactory();
    }

    // Virtual method for C ABI access and custom callback
    virtual void applyMainWindowSettings(const KConfigGroup& config) override {
        if (kxmlguiwindow_applymainwindowsettings_callback) {
            const KConfigGroup& config_ret = config;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = const_cast<KConfigGroup*>(&config_ret);
            kxmlguiwindow_applymainwindowsettings_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::applyMainWindowSettings(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void configureToolbars() override {
        if (kxmlguiwindow_configuretoolbars_callback) {
            kxmlguiwindow_configuretoolbars_callback(this);
            return;
        }
        KXmlGuiWindow::configureToolbars();
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotStateChanged(const QString& newstate) override {
        if (kxmlguiwindow_slotstatechanged_callback) {
            const auto newstate_ret = newstate;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray newstate_b = newstate_ret.toUtf8();
            auto newstate_str_len = newstate_b.length();
            const char* newstate_str = static_cast<const char*>(malloc(newstate_str_len + 1));
            memcpy((void*)newstate_str, newstate_b.data(), newstate_str_len);
            ((char*)newstate_str)[newstate_str_len] = '\0';
            const char* cbval1 = newstate_str;
            kxmlguiwindow_slotstatechanged_callback(this, cbval1);
            libqt_free(newstate_str);
            return;
        }
        KXmlGuiWindow::slotStateChanged(newstate);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kxmlguiwindow_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kxmlguiwindow_event_callback(this, cbval1);
            return callback_ret;
        }
        return KXmlGuiWindow::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void saveNewToolbarConfig() override {
        if (kxmlguiwindow_savenewtoolbarconfig_callback) {
            kxmlguiwindow_savenewtoolbarconfig_callback(this);
            return;
        }
        KXmlGuiWindow::saveNewToolbarConfig();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCaption(const QString& caption) override {
        if (kxmlguiwindow_setcaption_callback) {
            const auto caption_ret = caption;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray caption_b = caption_ret.toUtf8();
            auto caption_str_len = caption_b.length();
            const char* caption_str = static_cast<const char*>(malloc(caption_str_len + 1));
            memcpy((void*)caption_str, caption_b.data(), caption_str_len);
            ((char*)caption_str)[caption_str_len] = '\0';
            const char* cbval1 = caption_str;
            kxmlguiwindow_setcaption_callback(this, cbval1);
            libqt_free(caption_str);
            return;
        }
        KXmlGuiWindow::setCaption(caption);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPlainCaption(const QString& caption) override {
        if (kxmlguiwindow_setplaincaption_callback) {
            const auto caption_ret = caption;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray caption_b = caption_ret.toUtf8();
            auto caption_str_len = caption_b.length();
            const char* caption_str = static_cast<const char*>(malloc(caption_str_len + 1));
            memcpy((void*)caption_str, caption_b.data(), caption_str_len);
            ((char*)caption_str)[caption_str_len] = '\0';
            const char* cbval1 = caption_str;
            kxmlguiwindow_setplaincaption_callback(this, cbval1);
            libqt_free(caption_str);
            return;
        }
        KXmlGuiWindow::setPlainCaption(caption);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* keyEvent) override {
        if (kxmlguiwindow_keypressevent_callback) {
            QKeyEvent* cbval1 = keyEvent;
            kxmlguiwindow_keypressevent_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::keyPressEvent(keyEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kxmlguiwindow_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            kxmlguiwindow_closeevent_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool queryClose() override {
        if (kxmlguiwindow_queryclose_callback) {
            bool callback_ret = kxmlguiwindow_queryclose_callback(this);
            return callback_ret;
        }
        return KXmlGuiWindow::queryClose();
    }

    // Virtual method for C ABI access and custom callback
    virtual void saveProperties(KConfigGroup& param1) override {
        if (kxmlguiwindow_saveproperties_callback) {
            KConfigGroup& param1_ret = param1;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = &param1_ret;
            kxmlguiwindow_saveproperties_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::saveProperties(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void readProperties(const KConfigGroup& param1) override {
        if (kxmlguiwindow_readproperties_callback) {
            const KConfigGroup& param1_ret = param1;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = const_cast<KConfigGroup*>(&param1_ret);
            kxmlguiwindow_readproperties_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::readProperties(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void saveGlobalProperties(KConfig* sessionConfig) override {
        if (kxmlguiwindow_saveglobalproperties_callback) {
            KConfig* cbval1 = sessionConfig;
            kxmlguiwindow_saveglobalproperties_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::saveGlobalProperties(sessionConfig);
    }

    // Virtual method for C ABI access and custom callback
    virtual void readGlobalProperties(KConfig* sessionConfig) override {
        if (kxmlguiwindow_readglobalproperties_callback) {
            KConfig* cbval1 = sessionConfig;
            kxmlguiwindow_readglobalproperties_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::readGlobalProperties(sessionConfig);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMenu* createPopupMenu() override {
        if (kxmlguiwindow_createpopupmenu_callback) {
            QMenu* callback_ret = kxmlguiwindow_createpopupmenu_callback(this);
            return callback_ret;
        }
        return KXmlGuiWindow::createPopupMenu();
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kxmlguiwindow_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kxmlguiwindow_contextmenuevent_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kxmlguiwindow_devtype_callback) {
            int callback_ret = kxmlguiwindow_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KXmlGuiWindow::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kxmlguiwindow_setvisible_callback) {
            bool cbval1 = visible;
            kxmlguiwindow_setvisible_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kxmlguiwindow_sizehint_callback) {
            QSize* callback_ret = kxmlguiwindow_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KXmlGuiWindow::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kxmlguiwindow_minimumsizehint_callback) {
            QSize* callback_ret = kxmlguiwindow_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KXmlGuiWindow::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kxmlguiwindow_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kxmlguiwindow_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KXmlGuiWindow::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kxmlguiwindow_hasheightforwidth_callback) {
            bool callback_ret = kxmlguiwindow_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KXmlGuiWindow::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kxmlguiwindow_paintengine_callback) {
            QPaintEngine* callback_ret = kxmlguiwindow_paintengine_callback(this);
            return callback_ret;
        }
        return KXmlGuiWindow::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kxmlguiwindow_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kxmlguiwindow_mousepressevent_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kxmlguiwindow_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kxmlguiwindow_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kxmlguiwindow_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kxmlguiwindow_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kxmlguiwindow_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kxmlguiwindow_mousemoveevent_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kxmlguiwindow_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kxmlguiwindow_wheelevent_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kxmlguiwindow_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kxmlguiwindow_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kxmlguiwindow_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kxmlguiwindow_focusinevent_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kxmlguiwindow_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kxmlguiwindow_focusoutevent_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kxmlguiwindow_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kxmlguiwindow_enterevent_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kxmlguiwindow_leaveevent_callback) {
            QEvent* cbval1 = event;
            kxmlguiwindow_leaveevent_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kxmlguiwindow_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kxmlguiwindow_paintevent_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kxmlguiwindow_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kxmlguiwindow_moveevent_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kxmlguiwindow_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kxmlguiwindow_resizeevent_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kxmlguiwindow_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kxmlguiwindow_tabletevent_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kxmlguiwindow_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kxmlguiwindow_actionevent_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kxmlguiwindow_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kxmlguiwindow_dragenterevent_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kxmlguiwindow_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kxmlguiwindow_dragmoveevent_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kxmlguiwindow_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kxmlguiwindow_dragleaveevent_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kxmlguiwindow_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kxmlguiwindow_dropevent_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kxmlguiwindow_showevent_callback) {
            QShowEvent* cbval1 = event;
            kxmlguiwindow_showevent_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kxmlguiwindow_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kxmlguiwindow_hideevent_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kxmlguiwindow_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kxmlguiwindow_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KXmlGuiWindow::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kxmlguiwindow_changeevent_callback) {
            QEvent* cbval1 = param1;
            kxmlguiwindow_changeevent_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kxmlguiwindow_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kxmlguiwindow_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KXmlGuiWindow::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kxmlguiwindow_initpainter_callback) {
            QPainter* cbval1 = painter;
            kxmlguiwindow_initpainter_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kxmlguiwindow_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kxmlguiwindow_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KXmlGuiWindow::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kxmlguiwindow_sharedpainter_callback) {
            QPainter* callback_ret = kxmlguiwindow_sharedpainter_callback(this);
            return callback_ret;
        }
        return KXmlGuiWindow::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kxmlguiwindow_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kxmlguiwindow_inputmethodevent_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kxmlguiwindow_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kxmlguiwindow_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KXmlGuiWindow::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kxmlguiwindow_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kxmlguiwindow_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KXmlGuiWindow::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kxmlguiwindow_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kxmlguiwindow_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KXmlGuiWindow::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kxmlguiwindow_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kxmlguiwindow_timerevent_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kxmlguiwindow_childevent_callback) {
            QChildEvent* cbval1 = event;
            kxmlguiwindow_childevent_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kxmlguiwindow_customevent_callback) {
            QEvent* cbval1 = event;
            kxmlguiwindow_customevent_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kxmlguiwindow_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kxmlguiwindow_connectnotify_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kxmlguiwindow_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kxmlguiwindow_disconnectnotify_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> containerTags() const override {
        if (kxmlguiwindow_containertags_callback) {
            const char** callback_ret = kxmlguiwindow_containertags_callback(this);
            QList<QString> callback_ret_QList;
            size_t callback_ret_len = libqt_strv_length(callback_ret);
            callback_ret_QList.reserve(callback_ret_len);
            const char** callback_ret_arr = static_cast<const char**>(callback_ret);
            for (size_t i = 0; i < callback_ret_len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i]);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            libqt_free(callback_ret);
            return callback_ret_QList;
        }
        return KXmlGuiWindow::containerTags();
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createContainer(QWidget* parent, int index, const QDomElement& element, QAction*& containerAction) override {
        if (kxmlguiwindow_createcontainer_callback) {
            QWidget* cbval1 = parent;
            int cbval2 = index;
            const QDomElement& element_ret = element;
            // Cast returned reference into pointer
            QDomElement* cbval3 = const_cast<QDomElement*>(&element_ret);
            QAction*& containerAction_ret = containerAction;
            // Cast returned reference into pointer
            QAction** cbval4 = &containerAction_ret;
            QWidget* callback_ret = kxmlguiwindow_createcontainer_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KXmlGuiWindow::createContainer(parent, index, element, containerAction);
    }

    // Virtual method for C ABI access and custom callback
    virtual void removeContainer(QWidget* container, QWidget* parent, QDomElement& element, QAction* containerAction) override {
        if (kxmlguiwindow_removecontainer_callback) {
            QWidget* cbval1 = container;
            QWidget* cbval2 = parent;
            QDomElement& element_ret = element;
            // Cast returned reference into pointer
            QDomElement* cbval3 = &element_ret;
            QAction* cbval4 = containerAction;
            kxmlguiwindow_removecontainer_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        KXmlGuiWindow::removeContainer(container, parent, element, containerAction);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> customTags() const override {
        if (kxmlguiwindow_customtags_callback) {
            const char** callback_ret = kxmlguiwindow_customtags_callback(this);
            QList<QString> callback_ret_QList;
            size_t callback_ret_len = libqt_strv_length(callback_ret);
            callback_ret_QList.reserve(callback_ret_len);
            const char** callback_ret_arr = static_cast<const char**>(callback_ret);
            for (size_t i = 0; i < callback_ret_len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i]);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            libqt_free(callback_ret);
            return callback_ret_QList;
        }
        return KXmlGuiWindow::customTags();
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* createCustomElement(QWidget* parent, int index, const QDomElement& element) override {
        if (kxmlguiwindow_createcustomelement_callback) {
            QWidget* cbval1 = parent;
            int cbval2 = index;
            const QDomElement& element_ret = element;
            // Cast returned reference into pointer
            QDomElement* cbval3 = const_cast<QDomElement*>(&element_ret);
            QAction* callback_ret = kxmlguiwindow_createcustomelement_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KXmlGuiWindow::createCustomElement(parent, index, element);
    }

    // Virtual method for C ABI access and custom callback
    virtual void finalizeGUI(KXMLGUIClient* client) override {
        if (kxmlguiwindow_finalizegui_callback) {
            KXMLGUIClient* cbval1 = client;
            kxmlguiwindow_finalizegui_callback(this, cbval1);
            return;
        }
        KXmlGuiWindow::finalizeGUI(client);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* action(const QDomElement& element) const override {
        if (kxmlguiwindow_action2_callback) {
            const QDomElement& element_ret = element;
            // Cast returned reference into pointer
            QDomElement* cbval1 = const_cast<QDomElement*>(&element_ret);
            QAction* callback_ret = kxmlguiwindow_action2_callback(this, cbval1);
            return callback_ret;
        }
        return KXmlGuiWindow::action(element);
    }

    // Virtual method for C ABI access and custom callback
    virtual KActionCollection* actionCollection() const override {
        if (kxmlguiwindow_actioncollection_callback) {
            KActionCollection* callback_ret = kxmlguiwindow_actioncollection_callback(this);
            return callback_ret;
        }
        return KXmlGuiWindow::actionCollection();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString componentName() const override {
        if (kxmlguiwindow_componentname_callback) {
            const char* callback_ret = kxmlguiwindow_componentname_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KXmlGuiWindow::componentName();
    }

    // Virtual method for C ABI access and custom callback
    virtual QDomDocument domDocument() const override {
        if (kxmlguiwindow_domdocument_callback) {
            QDomDocument* callback_ret = kxmlguiwindow_domdocument_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KXmlGuiWindow::domDocument();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString xmlFile() const override {
        if (kxmlguiwindow_xmlfile_callback) {
            const char* callback_ret = kxmlguiwindow_xmlfile_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KXmlGuiWindow::xmlFile();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString localXMLFile() const override {
        if (kxmlguiwindow_localxmlfile_callback) {
            const char* callback_ret = kxmlguiwindow_localxmlfile_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KXmlGuiWindow::localXMLFile();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setComponentName(const QString& componentName, const QString& componentDisplayName) override {
        if (kxmlguiwindow_setcomponentname_callback) {
            const auto componentName_ret = componentName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray componentName_b = componentName_ret.toUtf8();
            auto componentName_str_len = componentName_b.length();
            const char* componentName_str = static_cast<const char*>(malloc(componentName_str_len + 1));
            memcpy((void*)componentName_str, componentName_b.data(), componentName_str_len);
            ((char*)componentName_str)[componentName_str_len] = '\0';
            const char* cbval1 = componentName_str;
            const auto componentDisplayName_ret = componentDisplayName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray componentDisplayName_b = componentDisplayName_ret.toUtf8();
            auto componentDisplayName_str_len = componentDisplayName_b.length();
            const char* componentDisplayName_str = static_cast<const char*>(malloc(componentDisplayName_str_len + 1));
            memcpy((void*)componentDisplayName_str, componentDisplayName_b.data(), componentDisplayName_str_len);
            ((char*)componentDisplayName_str)[componentDisplayName_str_len] = '\0';
            const char* cbval2 = componentDisplayName_str;
            kxmlguiwindow_setcomponentname_callback(this, cbval1, cbval2);
            libqt_free(componentName_str);
            libqt_free(componentDisplayName_str);
            return;
        }
        KXmlGuiWindow::setComponentName(componentName, componentDisplayName);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setXMLFile(const QString& file, bool merge, bool setXMLDoc) override {
        if (kxmlguiwindow_setxmlfile_callback) {
            const auto file_ret = file;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray file_b = file_ret.toUtf8();
            auto file_str_len = file_b.length();
            const char* file_str = static_cast<const char*>(malloc(file_str_len + 1));
            memcpy((void*)file_str, file_b.data(), file_str_len);
            ((char*)file_str)[file_str_len] = '\0';
            const char* cbval1 = file_str;
            bool cbval2 = merge;
            bool cbval3 = setXMLDoc;
            kxmlguiwindow_setxmlfile_callback(this, cbval1, cbval2, cbval3);
            libqt_free(file_str);
            return;
        }
        KXmlGuiWindow::setXMLFile(file, merge, setXMLDoc);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setLocalXMLFile(const QString& file) override {
        if (kxmlguiwindow_setlocalxmlfile_callback) {
            const auto file_ret = file;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray file_b = file_ret.toUtf8();
            auto file_str_len = file_b.length();
            const char* file_str = static_cast<const char*>(malloc(file_str_len + 1));
            memcpy((void*)file_str, file_b.data(), file_str_len);
            ((char*)file_str)[file_str_len] = '\0';
            const char* cbval1 = file_str;
            kxmlguiwindow_setlocalxmlfile_callback(this, cbval1);
            libqt_free(file_str);
            return;
        }
        KXmlGuiWindow::setLocalXMLFile(file);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setXML(const QString& document, bool merge) override {
        if (kxmlguiwindow_setxml_callback) {
            const auto document_ret = document;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray document_b = document_ret.toUtf8();
            auto document_str_len = document_b.length();
            const char* document_str = static_cast<const char*>(malloc(document_str_len + 1));
            memcpy((void*)document_str, document_b.data(), document_str_len);
            ((char*)document_str)[document_str_len] = '\0';
            const char* cbval1 = document_str;
            bool cbval2 = merge;
            kxmlguiwindow_setxml_callback(this, cbval1, cbval2);
            libqt_free(document_str);
            return;
        }
        KXmlGuiWindow::setXML(document, merge);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDOMDocument(const QDomDocument& document, bool merge) override {
        if (kxmlguiwindow_setdomdocument_callback) {
            const QDomDocument& document_ret = document;
            // Cast returned reference into pointer
            QDomDocument* cbval1 = const_cast<QDomDocument*>(&document_ret);
            bool cbval2 = merge;
            kxmlguiwindow_setdomdocument_callback(this, cbval1, cbval2);
            return;
        }
        KXmlGuiWindow::setDOMDocument(document, merge);
    }

    // Virtual method for C ABI access and custom callback
    virtual void stateChanged(const QString& newstate, KXMLGUIClient::ReverseStateChange reverse) override {
        if (kxmlguiwindow_statechanged_callback) {
            const auto newstate_ret = newstate;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray newstate_b = newstate_ret.toUtf8();
            auto newstate_str_len = newstate_b.length();
            const char* newstate_str = static_cast<const char*>(malloc(newstate_str_len + 1));
            memcpy((void*)newstate_str, newstate_b.data(), newstate_str_len);
            ((char*)newstate_str)[newstate_str_len] = '\0';
            const char* cbval1 = newstate_str;
            int cbval2 = static_cast<int>(reverse);
            kxmlguiwindow_statechanged_callback(this, cbval1, cbval2);
            libqt_free(newstate_str);
            return;
        }
        KXmlGuiWindow::stateChanged(newstate, reverse);
    }

    // Friend functions
    friend bool KXmlGuiWindow_SuperEvent(KXmlGuiWindow* self, QEvent* event);
    friend void KXmlGuiWindow_SuperSaveNewToolbarConfig(KXmlGuiWindow* self);
    friend void KXmlGuiWindow_SuperKeyPressEvent(KXmlGuiWindow* self, QKeyEvent* keyEvent);
    friend void KXmlGuiWindow_SuperCloseEvent(KXmlGuiWindow* self, QCloseEvent* param1);
    friend bool KXmlGuiWindow_SuperQueryClose(KXmlGuiWindow* self);
    friend void KXmlGuiWindow_SuperSaveProperties(KXmlGuiWindow* self, KConfigGroup* param1);
    friend void KXmlGuiWindow_SuperReadProperties(KXmlGuiWindow* self, const KConfigGroup* param1);
    friend void KXmlGuiWindow_SuperSaveGlobalProperties(KXmlGuiWindow* self, KConfig* sessionConfig);
    friend void KXmlGuiWindow_SuperReadGlobalProperties(KXmlGuiWindow* self, KConfig* sessionConfig);
    friend void KXmlGuiWindow_SuperContextMenuEvent(KXmlGuiWindow* self, QContextMenuEvent* event);
    friend void KXmlGuiWindow_SuperMousePressEvent(KXmlGuiWindow* self, QMouseEvent* event);
    friend void KXmlGuiWindow_SuperMouseReleaseEvent(KXmlGuiWindow* self, QMouseEvent* event);
    friend void KXmlGuiWindow_SuperMouseDoubleClickEvent(KXmlGuiWindow* self, QMouseEvent* event);
    friend void KXmlGuiWindow_SuperMouseMoveEvent(KXmlGuiWindow* self, QMouseEvent* event);
    friend void KXmlGuiWindow_SuperWheelEvent(KXmlGuiWindow* self, QWheelEvent* event);
    friend void KXmlGuiWindow_SuperKeyReleaseEvent(KXmlGuiWindow* self, QKeyEvent* event);
    friend void KXmlGuiWindow_SuperFocusInEvent(KXmlGuiWindow* self, QFocusEvent* event);
    friend void KXmlGuiWindow_SuperFocusOutEvent(KXmlGuiWindow* self, QFocusEvent* event);
    friend void KXmlGuiWindow_SuperEnterEvent(KXmlGuiWindow* self, QEnterEvent* event);
    friend void KXmlGuiWindow_SuperLeaveEvent(KXmlGuiWindow* self, QEvent* event);
    friend void KXmlGuiWindow_SuperPaintEvent(KXmlGuiWindow* self, QPaintEvent* event);
    friend void KXmlGuiWindow_SuperMoveEvent(KXmlGuiWindow* self, QMoveEvent* event);
    friend void KXmlGuiWindow_SuperResizeEvent(KXmlGuiWindow* self, QResizeEvent* event);
    friend void KXmlGuiWindow_SuperTabletEvent(KXmlGuiWindow* self, QTabletEvent* event);
    friend void KXmlGuiWindow_SuperActionEvent(KXmlGuiWindow* self, QActionEvent* event);
    friend void KXmlGuiWindow_SuperDragEnterEvent(KXmlGuiWindow* self, QDragEnterEvent* event);
    friend void KXmlGuiWindow_SuperDragMoveEvent(KXmlGuiWindow* self, QDragMoveEvent* event);
    friend void KXmlGuiWindow_SuperDragLeaveEvent(KXmlGuiWindow* self, QDragLeaveEvent* event);
    friend void KXmlGuiWindow_SuperDropEvent(KXmlGuiWindow* self, QDropEvent* event);
    friend void KXmlGuiWindow_SuperShowEvent(KXmlGuiWindow* self, QShowEvent* event);
    friend void KXmlGuiWindow_SuperHideEvent(KXmlGuiWindow* self, QHideEvent* event);
    friend bool KXmlGuiWindow_SuperNativeEvent(KXmlGuiWindow* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KXmlGuiWindow_SuperChangeEvent(KXmlGuiWindow* self, QEvent* param1);
    friend int KXmlGuiWindow_SuperMetric(const KXmlGuiWindow* self, int param1);
    friend void KXmlGuiWindow_SuperInitPainter(const KXmlGuiWindow* self, QPainter* painter);
    friend QPaintDevice* KXmlGuiWindow_SuperRedirected(const KXmlGuiWindow* self, QPoint* offset);
    friend QPainter* KXmlGuiWindow_SuperSharedPainter(const KXmlGuiWindow* self);
    friend void KXmlGuiWindow_SuperInputMethodEvent(KXmlGuiWindow* self, QInputMethodEvent* param1);
    friend bool KXmlGuiWindow_SuperFocusNextPrevChild(KXmlGuiWindow* self, bool next);
    friend void KXmlGuiWindow_SuperTimerEvent(KXmlGuiWindow* self, QTimerEvent* event);
    friend void KXmlGuiWindow_SuperChildEvent(KXmlGuiWindow* self, QChildEvent* event);
    friend void KXmlGuiWindow_SuperCustomEvent(KXmlGuiWindow* self, QEvent* event);
    friend void KXmlGuiWindow_SuperConnectNotify(KXmlGuiWindow* self, const QMetaMethod* signal);
    friend void KXmlGuiWindow_SuperDisconnectNotify(KXmlGuiWindow* self, const QMetaMethod* signal);
    friend void KXmlGuiWindow_SuperSetComponentName(KXmlGuiWindow* self, const libqt_string componentName, const libqt_string componentDisplayName);
    friend void KXmlGuiWindow_SuperSetXMLFile(KXmlGuiWindow* self, const libqt_string file, bool merge, bool setXMLDoc);
    friend void KXmlGuiWindow_SuperSetLocalXMLFile(KXmlGuiWindow* self, const libqt_string file);
    friend void KXmlGuiWindow_SuperSetXML(KXmlGuiWindow* self, const libqt_string document, bool merge);
    friend void KXmlGuiWindow_SuperSetDOMDocument(KXmlGuiWindow* self, const QDomDocument* document, bool merge);
    friend void KXmlGuiWindow_SuperStateChanged(KXmlGuiWindow* self, const libqt_string newstate, int reverse);
};

#endif
