#pragma once
#ifndef EXTRAS_KPARTS_LIBMAINWINDOW_HXX
#define EXTRAS_KPARTS_LIBMAINWINDOW_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KParts::MainWindow
class VirtualKPartsMainWindow final : public KParts::MainWindow {
  public:
    // Virtual class public types (including callbacks and access types)
    using KParts__MainWindow_MetaObject_Callback = QMetaObject* (*)(const KParts__MainWindow*);
    using KParts__MainWindow_Metacast_Callback = void* (*)(KParts__MainWindow*, const char*);
    using KParts__MainWindow_Metacall_Callback = int (*)(KParts__MainWindow*, int, int, void**);
    using KParts__MainWindow_ConfigureToolbars_Callback = void (*)(KParts__MainWindow*);
    using KParts__MainWindow_SlotSetStatusBarText_Callback = void (*)(KParts__MainWindow*, const char*);
    using KParts__MainWindow_SaveNewToolbarConfig_Callback = void (*)(KParts__MainWindow*);
    using KParts__MainWindow_CreateShellGUI_Callback = void (*)(KParts__MainWindow*, bool);
    using KParts__MainWindow_GuiFactory_Callback = KXMLGUIFactory* (*)(KParts__MainWindow*);
    using KParts__MainWindow_ApplyMainWindowSettings_Callback = void (*)(KParts__MainWindow*, KConfigGroup*);
    using KParts__MainWindow_SlotStateChanged_Callback = void (*)(KParts__MainWindow*, const char*);
    using KParts__MainWindow_Event_Callback = bool (*)(KParts__MainWindow*, QEvent*);
    using KParts__MainWindow_SetCaption_Callback = void (*)(KParts__MainWindow*, const char*);
    using KParts__MainWindow_SetPlainCaption_Callback = void (*)(KParts__MainWindow*, const char*);
    using KParts__MainWindow_KeyPressEvent_Callback = void (*)(KParts__MainWindow*, QKeyEvent*);
    using KParts__MainWindow_CloseEvent_Callback = void (*)(KParts__MainWindow*, QCloseEvent*);
    using KParts__MainWindow_QueryClose_Callback = bool (*)(KParts__MainWindow*);
    using KParts__MainWindow_SaveProperties_Callback = void (*)(KParts__MainWindow*, KConfigGroup*);
    using KParts__MainWindow_ReadProperties_Callback = void (*)(KParts__MainWindow*, KConfigGroup*);
    using KParts__MainWindow_SaveGlobalProperties_Callback = void (*)(KParts__MainWindow*, KConfig*);
    using KParts__MainWindow_ReadGlobalProperties_Callback = void (*)(KParts__MainWindow*, KConfig*);
    using KParts__MainWindow_CreatePopupMenu_Callback = QMenu* (*)(KParts__MainWindow*);
    using KParts__MainWindow_ContextMenuEvent_Callback = void (*)(KParts__MainWindow*, QContextMenuEvent*);
    using KParts__MainWindow_DevType_Callback = int (*)(const KParts__MainWindow*);
    using KParts__MainWindow_SetVisible_Callback = void (*)(KParts__MainWindow*, bool);
    using KParts__MainWindow_SizeHint_Callback = QSize* (*)(const KParts__MainWindow*);
    using KParts__MainWindow_MinimumSizeHint_Callback = QSize* (*)(const KParts__MainWindow*);
    using KParts__MainWindow_HeightForWidth_Callback = int (*)(const KParts__MainWindow*, int);
    using KParts__MainWindow_HasHeightForWidth_Callback = bool (*)(const KParts__MainWindow*);
    using KParts__MainWindow_PaintEngine_Callback = QPaintEngine* (*)(const KParts__MainWindow*);
    using KParts__MainWindow_MousePressEvent_Callback = void (*)(KParts__MainWindow*, QMouseEvent*);
    using KParts__MainWindow_MouseReleaseEvent_Callback = void (*)(KParts__MainWindow*, QMouseEvent*);
    using KParts__MainWindow_MouseDoubleClickEvent_Callback = void (*)(KParts__MainWindow*, QMouseEvent*);
    using KParts__MainWindow_MouseMoveEvent_Callback = void (*)(KParts__MainWindow*, QMouseEvent*);
    using KParts__MainWindow_WheelEvent_Callback = void (*)(KParts__MainWindow*, QWheelEvent*);
    using KParts__MainWindow_KeyReleaseEvent_Callback = void (*)(KParts__MainWindow*, QKeyEvent*);
    using KParts__MainWindow_FocusInEvent_Callback = void (*)(KParts__MainWindow*, QFocusEvent*);
    using KParts__MainWindow_FocusOutEvent_Callback = void (*)(KParts__MainWindow*, QFocusEvent*);
    using KParts__MainWindow_EnterEvent_Callback = void (*)(KParts__MainWindow*, QEnterEvent*);
    using KParts__MainWindow_LeaveEvent_Callback = void (*)(KParts__MainWindow*, QEvent*);
    using KParts__MainWindow_PaintEvent_Callback = void (*)(KParts__MainWindow*, QPaintEvent*);
    using KParts__MainWindow_MoveEvent_Callback = void (*)(KParts__MainWindow*, QMoveEvent*);
    using KParts__MainWindow_ResizeEvent_Callback = void (*)(KParts__MainWindow*, QResizeEvent*);
    using KParts__MainWindow_TabletEvent_Callback = void (*)(KParts__MainWindow*, QTabletEvent*);
    using KParts__MainWindow_ActionEvent_Callback = void (*)(KParts__MainWindow*, QActionEvent*);
    using KParts__MainWindow_DragEnterEvent_Callback = void (*)(KParts__MainWindow*, QDragEnterEvent*);
    using KParts__MainWindow_DragMoveEvent_Callback = void (*)(KParts__MainWindow*, QDragMoveEvent*);
    using KParts__MainWindow_DragLeaveEvent_Callback = void (*)(KParts__MainWindow*, QDragLeaveEvent*);
    using KParts__MainWindow_DropEvent_Callback = void (*)(KParts__MainWindow*, QDropEvent*);
    using KParts__MainWindow_ShowEvent_Callback = void (*)(KParts__MainWindow*, QShowEvent*);
    using KParts__MainWindow_HideEvent_Callback = void (*)(KParts__MainWindow*, QHideEvent*);
    using KParts__MainWindow_NativeEvent_Callback = bool (*)(KParts__MainWindow*, libqt_string, void*, intptr_t*);
    using KParts__MainWindow_ChangeEvent_Callback = void (*)(KParts__MainWindow*, QEvent*);
    using KParts__MainWindow_Metric_Callback = int (*)(const KParts__MainWindow*, int);
    using KParts__MainWindow_InitPainter_Callback = void (*)(const KParts__MainWindow*, QPainter*);
    using KParts__MainWindow_Redirected_Callback = QPaintDevice* (*)(const KParts__MainWindow*, QPoint*);
    using KParts__MainWindow_SharedPainter_Callback = QPainter* (*)(const KParts__MainWindow*);
    using KParts__MainWindow_InputMethodEvent_Callback = void (*)(KParts__MainWindow*, QInputMethodEvent*);
    using KParts__MainWindow_InputMethodQuery_Callback = QVariant* (*)(const KParts__MainWindow*, int);
    using KParts__MainWindow_FocusNextPrevChild_Callback = bool (*)(KParts__MainWindow*, bool);
    using KParts__MainWindow_EventFilter_Callback = bool (*)(KParts__MainWindow*, QObject*, QEvent*);
    using KParts__MainWindow_TimerEvent_Callback = void (*)(KParts__MainWindow*, QTimerEvent*);
    using KParts__MainWindow_ChildEvent_Callback = void (*)(KParts__MainWindow*, QChildEvent*);
    using KParts__MainWindow_CustomEvent_Callback = void (*)(KParts__MainWindow*, QEvent*);
    using KParts__MainWindow_ConnectNotify_Callback = void (*)(KParts__MainWindow*, QMetaMethod*);
    using KParts__MainWindow_DisconnectNotify_Callback = void (*)(KParts__MainWindow*, QMetaMethod*);
    using KParts__MainWindow_ContainerTags_Callback = const char** (*)(const KParts__MainWindow*);
    using KParts__MainWindow_CreateContainer_Callback = QWidget* (*)(KParts__MainWindow*, QWidget*, int, QDomElement*, QAction**);
    using KParts__MainWindow_RemoveContainer_Callback = void (*)(KParts__MainWindow*, QWidget*, QWidget*, QDomElement*, QAction*);
    using KParts__MainWindow_CustomTags_Callback = const char** (*)(const KParts__MainWindow*);
    using KParts__MainWindow_CreateCustomElement_Callback = QAction* (*)(KParts__MainWindow*, QWidget*, int, QDomElement*);
    using KParts__MainWindow_FinalizeGUI_Callback = void (*)(KParts__MainWindow*, KXMLGUIClient*);
    using KParts__MainWindow_Action2_Callback = QAction* (*)(const KParts__MainWindow*, QDomElement*);
    using KParts__MainWindow_ActionCollection_Callback = KActionCollection* (*)(const KParts__MainWindow*);
    using KParts__MainWindow_ComponentName_Callback = const char* (*)(const KParts__MainWindow*);
    using KParts__MainWindow_DomDocument_Callback = QDomDocument* (*)(const KParts__MainWindow*);
    using KParts__MainWindow_XmlFile_Callback = const char* (*)(const KParts__MainWindow*);
    using KParts__MainWindow_LocalXMLFile_Callback = const char* (*)(const KParts__MainWindow*);
    using KParts__MainWindow_SetComponentName_Callback = void (*)(KParts__MainWindow*, const char*, const char*);
    using KParts__MainWindow_SetXMLFile_Callback = void (*)(KParts__MainWindow*, const char*, bool, bool);
    using KParts__MainWindow_SetLocalXMLFile_Callback = void (*)(KParts__MainWindow*, const char*);
    using KParts__MainWindow_SetXML_Callback = void (*)(KParts__MainWindow*, const char*, bool);
    using KParts__MainWindow_SetDOMDocument_Callback = void (*)(KParts__MainWindow*, QDomDocument*, bool);
    using KParts__MainWindow_StateChanged_Callback = void (*)(KParts__MainWindow*, const char*, int);
    using KParts::MainWindow::checkAmbiguousShortcuts;
    using KParts::MainWindow::create;
    using KParts::MainWindow::createGUI;
    using KParts::MainWindow::destroy;
    using KParts::MainWindow::focusNextChild;
    using KParts::MainWindow::focusPreviousChild;
    using KParts::MainWindow::getDecodedMetricF;
    using KParts::MainWindow::isSignalConnected;
    using KParts::MainWindow::loadStandardsXmlFile;
    using KParts::MainWindow::readPropertiesInternal;
    using KParts::MainWindow::receivers;
    using KParts::MainWindow::saveAutoSaveSettings;
    using KParts::MainWindow::savePropertiesInternal;
    using KParts::MainWindow::sender;
    using KParts::MainWindow::senderSignalIndex;
    using KParts::MainWindow::settingsDirty;
    using KParts::MainWindow::setWindowTitleHandling;
    using KParts::MainWindow::standardsXmlFileLocation;
    using KParts::MainWindow::updateMicroFocus;

    // Instance callback storage
    KParts__MainWindow_MetaObject_Callback kparts__mainwindow_metaobject_callback = nullptr;
    KParts__MainWindow_Metacast_Callback kparts__mainwindow_metacast_callback = nullptr;
    KParts__MainWindow_Metacall_Callback kparts__mainwindow_metacall_callback = nullptr;
    KParts__MainWindow_ConfigureToolbars_Callback kparts__mainwindow_configuretoolbars_callback = nullptr;
    KParts__MainWindow_SlotSetStatusBarText_Callback kparts__mainwindow_slotsetstatusbartext_callback = nullptr;
    KParts__MainWindow_SaveNewToolbarConfig_Callback kparts__mainwindow_savenewtoolbarconfig_callback = nullptr;
    KParts__MainWindow_CreateShellGUI_Callback kparts__mainwindow_createshellgui_callback = nullptr;
    KParts__MainWindow_GuiFactory_Callback kparts__mainwindow_guifactory_callback = nullptr;
    KParts__MainWindow_ApplyMainWindowSettings_Callback kparts__mainwindow_applymainwindowsettings_callback = nullptr;
    KParts__MainWindow_SlotStateChanged_Callback kparts__mainwindow_slotstatechanged_callback = nullptr;
    KParts__MainWindow_Event_Callback kparts__mainwindow_event_callback = nullptr;
    KParts__MainWindow_SetCaption_Callback kparts__mainwindow_setcaption_callback = nullptr;
    KParts__MainWindow_SetPlainCaption_Callback kparts__mainwindow_setplaincaption_callback = nullptr;
    KParts__MainWindow_KeyPressEvent_Callback kparts__mainwindow_keypressevent_callback = nullptr;
    KParts__MainWindow_CloseEvent_Callback kparts__mainwindow_closeevent_callback = nullptr;
    KParts__MainWindow_QueryClose_Callback kparts__mainwindow_queryclose_callback = nullptr;
    KParts__MainWindow_SaveProperties_Callback kparts__mainwindow_saveproperties_callback = nullptr;
    KParts__MainWindow_ReadProperties_Callback kparts__mainwindow_readproperties_callback = nullptr;
    KParts__MainWindow_SaveGlobalProperties_Callback kparts__mainwindow_saveglobalproperties_callback = nullptr;
    KParts__MainWindow_ReadGlobalProperties_Callback kparts__mainwindow_readglobalproperties_callback = nullptr;
    KParts__MainWindow_CreatePopupMenu_Callback kparts__mainwindow_createpopupmenu_callback = nullptr;
    KParts__MainWindow_ContextMenuEvent_Callback kparts__mainwindow_contextmenuevent_callback = nullptr;
    KParts__MainWindow_DevType_Callback kparts__mainwindow_devtype_callback = nullptr;
    KParts__MainWindow_SetVisible_Callback kparts__mainwindow_setvisible_callback = nullptr;
    KParts__MainWindow_SizeHint_Callback kparts__mainwindow_sizehint_callback = nullptr;
    KParts__MainWindow_MinimumSizeHint_Callback kparts__mainwindow_minimumsizehint_callback = nullptr;
    KParts__MainWindow_HeightForWidth_Callback kparts__mainwindow_heightforwidth_callback = nullptr;
    KParts__MainWindow_HasHeightForWidth_Callback kparts__mainwindow_hasheightforwidth_callback = nullptr;
    KParts__MainWindow_PaintEngine_Callback kparts__mainwindow_paintengine_callback = nullptr;
    KParts__MainWindow_MousePressEvent_Callback kparts__mainwindow_mousepressevent_callback = nullptr;
    KParts__MainWindow_MouseReleaseEvent_Callback kparts__mainwindow_mousereleaseevent_callback = nullptr;
    KParts__MainWindow_MouseDoubleClickEvent_Callback kparts__mainwindow_mousedoubleclickevent_callback = nullptr;
    KParts__MainWindow_MouseMoveEvent_Callback kparts__mainwindow_mousemoveevent_callback = nullptr;
    KParts__MainWindow_WheelEvent_Callback kparts__mainwindow_wheelevent_callback = nullptr;
    KParts__MainWindow_KeyReleaseEvent_Callback kparts__mainwindow_keyreleaseevent_callback = nullptr;
    KParts__MainWindow_FocusInEvent_Callback kparts__mainwindow_focusinevent_callback = nullptr;
    KParts__MainWindow_FocusOutEvent_Callback kparts__mainwindow_focusoutevent_callback = nullptr;
    KParts__MainWindow_EnterEvent_Callback kparts__mainwindow_enterevent_callback = nullptr;
    KParts__MainWindow_LeaveEvent_Callback kparts__mainwindow_leaveevent_callback = nullptr;
    KParts__MainWindow_PaintEvent_Callback kparts__mainwindow_paintevent_callback = nullptr;
    KParts__MainWindow_MoveEvent_Callback kparts__mainwindow_moveevent_callback = nullptr;
    KParts__MainWindow_ResizeEvent_Callback kparts__mainwindow_resizeevent_callback = nullptr;
    KParts__MainWindow_TabletEvent_Callback kparts__mainwindow_tabletevent_callback = nullptr;
    KParts__MainWindow_ActionEvent_Callback kparts__mainwindow_actionevent_callback = nullptr;
    KParts__MainWindow_DragEnterEvent_Callback kparts__mainwindow_dragenterevent_callback = nullptr;
    KParts__MainWindow_DragMoveEvent_Callback kparts__mainwindow_dragmoveevent_callback = nullptr;
    KParts__MainWindow_DragLeaveEvent_Callback kparts__mainwindow_dragleaveevent_callback = nullptr;
    KParts__MainWindow_DropEvent_Callback kparts__mainwindow_dropevent_callback = nullptr;
    KParts__MainWindow_ShowEvent_Callback kparts__mainwindow_showevent_callback = nullptr;
    KParts__MainWindow_HideEvent_Callback kparts__mainwindow_hideevent_callback = nullptr;
    KParts__MainWindow_NativeEvent_Callback kparts__mainwindow_nativeevent_callback = nullptr;
    KParts__MainWindow_ChangeEvent_Callback kparts__mainwindow_changeevent_callback = nullptr;
    KParts__MainWindow_Metric_Callback kparts__mainwindow_metric_callback = nullptr;
    KParts__MainWindow_InitPainter_Callback kparts__mainwindow_initpainter_callback = nullptr;
    KParts__MainWindow_Redirected_Callback kparts__mainwindow_redirected_callback = nullptr;
    KParts__MainWindow_SharedPainter_Callback kparts__mainwindow_sharedpainter_callback = nullptr;
    KParts__MainWindow_InputMethodEvent_Callback kparts__mainwindow_inputmethodevent_callback = nullptr;
    KParts__MainWindow_InputMethodQuery_Callback kparts__mainwindow_inputmethodquery_callback = nullptr;
    KParts__MainWindow_FocusNextPrevChild_Callback kparts__mainwindow_focusnextprevchild_callback = nullptr;
    KParts__MainWindow_EventFilter_Callback kparts__mainwindow_eventfilter_callback = nullptr;
    KParts__MainWindow_TimerEvent_Callback kparts__mainwindow_timerevent_callback = nullptr;
    KParts__MainWindow_ChildEvent_Callback kparts__mainwindow_childevent_callback = nullptr;
    KParts__MainWindow_CustomEvent_Callback kparts__mainwindow_customevent_callback = nullptr;
    KParts__MainWindow_ConnectNotify_Callback kparts__mainwindow_connectnotify_callback = nullptr;
    KParts__MainWindow_DisconnectNotify_Callback kparts__mainwindow_disconnectnotify_callback = nullptr;
    KParts__MainWindow_ContainerTags_Callback kparts__mainwindow_containertags_callback = nullptr;
    KParts__MainWindow_CreateContainer_Callback kparts__mainwindow_createcontainer_callback = nullptr;
    KParts__MainWindow_RemoveContainer_Callback kparts__mainwindow_removecontainer_callback = nullptr;
    KParts__MainWindow_CustomTags_Callback kparts__mainwindow_customtags_callback = nullptr;
    KParts__MainWindow_CreateCustomElement_Callback kparts__mainwindow_createcustomelement_callback = nullptr;
    KParts__MainWindow_FinalizeGUI_Callback kparts__mainwindow_finalizegui_callback = nullptr;
    KParts__MainWindow_Action2_Callback kparts__mainwindow_action2_callback = nullptr;
    KParts__MainWindow_ActionCollection_Callback kparts__mainwindow_actioncollection_callback = nullptr;
    KParts__MainWindow_ComponentName_Callback kparts__mainwindow_componentname_callback = nullptr;
    KParts__MainWindow_DomDocument_Callback kparts__mainwindow_domdocument_callback = nullptr;
    KParts__MainWindow_XmlFile_Callback kparts__mainwindow_xmlfile_callback = nullptr;
    KParts__MainWindow_LocalXMLFile_Callback kparts__mainwindow_localxmlfile_callback = nullptr;
    KParts__MainWindow_SetComponentName_Callback kparts__mainwindow_setcomponentname_callback = nullptr;
    KParts__MainWindow_SetXMLFile_Callback kparts__mainwindow_setxmlfile_callback = nullptr;
    KParts__MainWindow_SetLocalXMLFile_Callback kparts__mainwindow_setlocalxmlfile_callback = nullptr;
    KParts__MainWindow_SetXML_Callback kparts__mainwindow_setxml_callback = nullptr;
    KParts__MainWindow_SetDOMDocument_Callback kparts__mainwindow_setdomdocument_callback = nullptr;
    KParts__MainWindow_StateChanged_Callback kparts__mainwindow_statechanged_callback = nullptr;

    // Access struct
    struct Base : KParts::MainWindow {
        using KParts::MainWindow::actionEvent;
        using KParts::MainWindow::changeEvent;
        using KParts::MainWindow::childEvent;
        using KParts::MainWindow::closeEvent;
        using KParts::MainWindow::connectNotify;
        using KParts::MainWindow::contextMenuEvent;
        using KParts::MainWindow::createShellGUI;
        using KParts::MainWindow::customEvent;
        using KParts::MainWindow::disconnectNotify;
        using KParts::MainWindow::dragEnterEvent;
        using KParts::MainWindow::dragLeaveEvent;
        using KParts::MainWindow::dragMoveEvent;
        using KParts::MainWindow::dropEvent;
        using KParts::MainWindow::enterEvent;
        using KParts::MainWindow::event;
        using KParts::MainWindow::focusInEvent;
        using KParts::MainWindow::focusNextPrevChild;
        using KParts::MainWindow::focusOutEvent;
        using KParts::MainWindow::hideEvent;
        using KParts::MainWindow::initPainter;
        using KParts::MainWindow::inputMethodEvent;
        using KParts::MainWindow::keyPressEvent;
        using KParts::MainWindow::keyReleaseEvent;
        using KParts::MainWindow::leaveEvent;
        using KParts::MainWindow::metric;
        using KParts::MainWindow::mouseDoubleClickEvent;
        using KParts::MainWindow::mouseMoveEvent;
        using KParts::MainWindow::mousePressEvent;
        using KParts::MainWindow::mouseReleaseEvent;
        using KParts::MainWindow::moveEvent;
        using KParts::MainWindow::nativeEvent;
        using KParts::MainWindow::paintEvent;
        using KParts::MainWindow::queryClose;
        using KParts::MainWindow::readGlobalProperties;
        using KParts::MainWindow::readProperties;
        using KParts::MainWindow::redirected;
        using KParts::MainWindow::resizeEvent;
        using KParts::MainWindow::saveGlobalProperties;
        using KParts::MainWindow::saveNewToolbarConfig;
        using KParts::MainWindow::saveProperties;
        using KParts::MainWindow::setComponentName;
        using KParts::MainWindow::setDOMDocument;
        using KParts::MainWindow::setLocalXMLFile;
        using KParts::MainWindow::setXML;
        using KParts::MainWindow::setXMLFile;
        using KParts::MainWindow::sharedPainter;
        using KParts::MainWindow::showEvent;
        using KParts::MainWindow::slotSetStatusBarText;
        using KParts::MainWindow::stateChanged;
        using KParts::MainWindow::tabletEvent;
        using KParts::MainWindow::timerEvent;
        using KParts::MainWindow::wheelEvent;
    };

    VirtualKPartsMainWindow(QWidget* parent) : KParts::MainWindow(parent) {};
    VirtualKPartsMainWindow() : KParts::MainWindow() {};
    VirtualKPartsMainWindow(QWidget* parent, Qt::WindowFlags f) : KParts::MainWindow(parent, f) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kparts__mainwindow_metaobject_callback) {
            QMetaObject* callback_ret = kparts__mainwindow_metaobject_callback(this);
            return callback_ret;
        }
        return KParts__MainWindow::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kparts__mainwindow_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kparts__mainwindow_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KParts__MainWindow::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kparts__mainwindow_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kparts__mainwindow_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KParts__MainWindow::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void configureToolbars() override {
        if (kparts__mainwindow_configuretoolbars_callback) {
            kparts__mainwindow_configuretoolbars_callback(this);
            return;
        }
        KParts__MainWindow::configureToolbars();
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotSetStatusBarText(const QString& param1) override {
        if (kparts__mainwindow_slotsetstatusbartext_callback) {
            const auto param1_ret = param1;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray param1_b = param1_ret.toUtf8();
            auto param1_str_len = param1_b.length();
            const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
            memcpy((void*)param1_str, param1_b.data(), param1_str_len);
            ((char*)param1_str)[param1_str_len] = '\0';
            const char* cbval1 = param1_str;
            kparts__mainwindow_slotsetstatusbartext_callback(this, cbval1);
            libqt_free(param1_str);
            return;
        }
        KParts__MainWindow::slotSetStatusBarText(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void saveNewToolbarConfig() override {
        if (kparts__mainwindow_savenewtoolbarconfig_callback) {
            kparts__mainwindow_savenewtoolbarconfig_callback(this);
            return;
        }
        KParts__MainWindow::saveNewToolbarConfig();
    }

    // Virtual method for C ABI access and custom callback
    virtual void createShellGUI(bool create) override {
        if (kparts__mainwindow_createshellgui_callback) {
            bool cbval1 = create;
            kparts__mainwindow_createshellgui_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::createShellGUI(create);
    }

    // Virtual method for C ABI access and custom callback
    virtual KXMLGUIFactory* guiFactory() override {
        if (kparts__mainwindow_guifactory_callback) {
            KXMLGUIFactory* callback_ret = kparts__mainwindow_guifactory_callback(this);
            return callback_ret;
        }
        return KParts__MainWindow::guiFactory();
    }

    // Virtual method for C ABI access and custom callback
    virtual void applyMainWindowSettings(const KConfigGroup& config) override {
        if (kparts__mainwindow_applymainwindowsettings_callback) {
            const KConfigGroup& config_ret = config;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = const_cast<KConfigGroup*>(&config_ret);
            kparts__mainwindow_applymainwindowsettings_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::applyMainWindowSettings(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotStateChanged(const QString& newstate) override {
        if (kparts__mainwindow_slotstatechanged_callback) {
            const auto newstate_ret = newstate;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray newstate_b = newstate_ret.toUtf8();
            auto newstate_str_len = newstate_b.length();
            const char* newstate_str = static_cast<const char*>(malloc(newstate_str_len + 1));
            memcpy((void*)newstate_str, newstate_b.data(), newstate_str_len);
            ((char*)newstate_str)[newstate_str_len] = '\0';
            const char* cbval1 = newstate_str;
            kparts__mainwindow_slotstatechanged_callback(this, cbval1);
            libqt_free(newstate_str);
            return;
        }
        KParts__MainWindow::slotStateChanged(newstate);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kparts__mainwindow_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kparts__mainwindow_event_callback(this, cbval1);
            return callback_ret;
        }
        return KParts__MainWindow::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCaption(const QString& caption) override {
        if (kparts__mainwindow_setcaption_callback) {
            const auto caption_ret = caption;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray caption_b = caption_ret.toUtf8();
            auto caption_str_len = caption_b.length();
            const char* caption_str = static_cast<const char*>(malloc(caption_str_len + 1));
            memcpy((void*)caption_str, caption_b.data(), caption_str_len);
            ((char*)caption_str)[caption_str_len] = '\0';
            const char* cbval1 = caption_str;
            kparts__mainwindow_setcaption_callback(this, cbval1);
            libqt_free(caption_str);
            return;
        }
        KParts__MainWindow::setCaption(caption);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPlainCaption(const QString& caption) override {
        if (kparts__mainwindow_setplaincaption_callback) {
            const auto caption_ret = caption;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray caption_b = caption_ret.toUtf8();
            auto caption_str_len = caption_b.length();
            const char* caption_str = static_cast<const char*>(malloc(caption_str_len + 1));
            memcpy((void*)caption_str, caption_b.data(), caption_str_len);
            ((char*)caption_str)[caption_str_len] = '\0';
            const char* cbval1 = caption_str;
            kparts__mainwindow_setplaincaption_callback(this, cbval1);
            libqt_free(caption_str);
            return;
        }
        KParts__MainWindow::setPlainCaption(caption);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* keyEvent) override {
        if (kparts__mainwindow_keypressevent_callback) {
            QKeyEvent* cbval1 = keyEvent;
            kparts__mainwindow_keypressevent_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::keyPressEvent(keyEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kparts__mainwindow_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            kparts__mainwindow_closeevent_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool queryClose() override {
        if (kparts__mainwindow_queryclose_callback) {
            bool callback_ret = kparts__mainwindow_queryclose_callback(this);
            return callback_ret;
        }
        return KParts__MainWindow::queryClose();
    }

    // Virtual method for C ABI access and custom callback
    virtual void saveProperties(KConfigGroup& param1) override {
        if (kparts__mainwindow_saveproperties_callback) {
            KConfigGroup& param1_ret = param1;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = &param1_ret;
            kparts__mainwindow_saveproperties_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::saveProperties(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void readProperties(const KConfigGroup& param1) override {
        if (kparts__mainwindow_readproperties_callback) {
            const KConfigGroup& param1_ret = param1;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = const_cast<KConfigGroup*>(&param1_ret);
            kparts__mainwindow_readproperties_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::readProperties(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void saveGlobalProperties(KConfig* sessionConfig) override {
        if (kparts__mainwindow_saveglobalproperties_callback) {
            KConfig* cbval1 = sessionConfig;
            kparts__mainwindow_saveglobalproperties_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::saveGlobalProperties(sessionConfig);
    }

    // Virtual method for C ABI access and custom callback
    virtual void readGlobalProperties(KConfig* sessionConfig) override {
        if (kparts__mainwindow_readglobalproperties_callback) {
            KConfig* cbval1 = sessionConfig;
            kparts__mainwindow_readglobalproperties_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::readGlobalProperties(sessionConfig);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMenu* createPopupMenu() override {
        if (kparts__mainwindow_createpopupmenu_callback) {
            QMenu* callback_ret = kparts__mainwindow_createpopupmenu_callback(this);
            return callback_ret;
        }
        return KParts__MainWindow::createPopupMenu();
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kparts__mainwindow_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kparts__mainwindow_contextmenuevent_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kparts__mainwindow_devtype_callback) {
            int callback_ret = kparts__mainwindow_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KParts__MainWindow::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kparts__mainwindow_setvisible_callback) {
            bool cbval1 = visible;
            kparts__mainwindow_setvisible_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kparts__mainwindow_sizehint_callback) {
            QSize* callback_ret = kparts__mainwindow_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KParts__MainWindow::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kparts__mainwindow_minimumsizehint_callback) {
            QSize* callback_ret = kparts__mainwindow_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KParts__MainWindow::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kparts__mainwindow_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kparts__mainwindow_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KParts__MainWindow::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kparts__mainwindow_hasheightforwidth_callback) {
            bool callback_ret = kparts__mainwindow_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KParts__MainWindow::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kparts__mainwindow_paintengine_callback) {
            QPaintEngine* callback_ret = kparts__mainwindow_paintengine_callback(this);
            return callback_ret;
        }
        return KParts__MainWindow::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kparts__mainwindow_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kparts__mainwindow_mousepressevent_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kparts__mainwindow_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kparts__mainwindow_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kparts__mainwindow_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kparts__mainwindow_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kparts__mainwindow_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kparts__mainwindow_mousemoveevent_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kparts__mainwindow_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kparts__mainwindow_wheelevent_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kparts__mainwindow_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kparts__mainwindow_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kparts__mainwindow_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kparts__mainwindow_focusinevent_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kparts__mainwindow_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kparts__mainwindow_focusoutevent_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kparts__mainwindow_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kparts__mainwindow_enterevent_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kparts__mainwindow_leaveevent_callback) {
            QEvent* cbval1 = event;
            kparts__mainwindow_leaveevent_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kparts__mainwindow_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kparts__mainwindow_paintevent_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kparts__mainwindow_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kparts__mainwindow_moveevent_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kparts__mainwindow_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kparts__mainwindow_resizeevent_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kparts__mainwindow_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kparts__mainwindow_tabletevent_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kparts__mainwindow_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kparts__mainwindow_actionevent_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kparts__mainwindow_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kparts__mainwindow_dragenterevent_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kparts__mainwindow_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kparts__mainwindow_dragmoveevent_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kparts__mainwindow_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kparts__mainwindow_dragleaveevent_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kparts__mainwindow_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kparts__mainwindow_dropevent_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kparts__mainwindow_showevent_callback) {
            QShowEvent* cbval1 = event;
            kparts__mainwindow_showevent_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kparts__mainwindow_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kparts__mainwindow_hideevent_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kparts__mainwindow_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kparts__mainwindow_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KParts__MainWindow::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kparts__mainwindow_changeevent_callback) {
            QEvent* cbval1 = param1;
            kparts__mainwindow_changeevent_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kparts__mainwindow_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kparts__mainwindow_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KParts__MainWindow::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kparts__mainwindow_initpainter_callback) {
            QPainter* cbval1 = painter;
            kparts__mainwindow_initpainter_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kparts__mainwindow_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kparts__mainwindow_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KParts__MainWindow::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kparts__mainwindow_sharedpainter_callback) {
            QPainter* callback_ret = kparts__mainwindow_sharedpainter_callback(this);
            return callback_ret;
        }
        return KParts__MainWindow::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kparts__mainwindow_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kparts__mainwindow_inputmethodevent_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kparts__mainwindow_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kparts__mainwindow_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KParts__MainWindow::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kparts__mainwindow_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kparts__mainwindow_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KParts__MainWindow::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kparts__mainwindow_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kparts__mainwindow_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KParts__MainWindow::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kparts__mainwindow_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kparts__mainwindow_timerevent_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kparts__mainwindow_childevent_callback) {
            QChildEvent* cbval1 = event;
            kparts__mainwindow_childevent_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kparts__mainwindow_customevent_callback) {
            QEvent* cbval1 = event;
            kparts__mainwindow_customevent_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kparts__mainwindow_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kparts__mainwindow_connectnotify_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kparts__mainwindow_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kparts__mainwindow_disconnectnotify_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> containerTags() const override {
        if (kparts__mainwindow_containertags_callback) {
            const char** callback_ret = kparts__mainwindow_containertags_callback(this);
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
        return KParts__MainWindow::containerTags();
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createContainer(QWidget* parent, int index, const QDomElement& element, QAction*& containerAction) override {
        if (kparts__mainwindow_createcontainer_callback) {
            QWidget* cbval1 = parent;
            int cbval2 = index;
            const QDomElement& element_ret = element;
            // Cast returned reference into pointer
            QDomElement* cbval3 = const_cast<QDomElement*>(&element_ret);
            QAction*& containerAction_ret = containerAction;
            // Cast returned reference into pointer
            QAction** cbval4 = &containerAction_ret;
            QWidget* callback_ret = kparts__mainwindow_createcontainer_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KParts__MainWindow::createContainer(parent, index, element, containerAction);
    }

    // Virtual method for C ABI access and custom callback
    virtual void removeContainer(QWidget* container, QWidget* parent, QDomElement& element, QAction* containerAction) override {
        if (kparts__mainwindow_removecontainer_callback) {
            QWidget* cbval1 = container;
            QWidget* cbval2 = parent;
            QDomElement& element_ret = element;
            // Cast returned reference into pointer
            QDomElement* cbval3 = &element_ret;
            QAction* cbval4 = containerAction;
            kparts__mainwindow_removecontainer_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        KParts__MainWindow::removeContainer(container, parent, element, containerAction);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> customTags() const override {
        if (kparts__mainwindow_customtags_callback) {
            const char** callback_ret = kparts__mainwindow_customtags_callback(this);
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
        return KParts__MainWindow::customTags();
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* createCustomElement(QWidget* parent, int index, const QDomElement& element) override {
        if (kparts__mainwindow_createcustomelement_callback) {
            QWidget* cbval1 = parent;
            int cbval2 = index;
            const QDomElement& element_ret = element;
            // Cast returned reference into pointer
            QDomElement* cbval3 = const_cast<QDomElement*>(&element_ret);
            QAction* callback_ret = kparts__mainwindow_createcustomelement_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KParts__MainWindow::createCustomElement(parent, index, element);
    }

    // Virtual method for C ABI access and custom callback
    virtual void finalizeGUI(KXMLGUIClient* client) override {
        if (kparts__mainwindow_finalizegui_callback) {
            KXMLGUIClient* cbval1 = client;
            kparts__mainwindow_finalizegui_callback(this, cbval1);
            return;
        }
        KParts__MainWindow::finalizeGUI(client);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* action(const QDomElement& element) const override {
        if (kparts__mainwindow_action2_callback) {
            const QDomElement& element_ret = element;
            // Cast returned reference into pointer
            QDomElement* cbval1 = const_cast<QDomElement*>(&element_ret);
            QAction* callback_ret = kparts__mainwindow_action2_callback(this, cbval1);
            return callback_ret;
        }
        return KParts__MainWindow::action(element);
    }

    // Virtual method for C ABI access and custom callback
    virtual KActionCollection* actionCollection() const override {
        if (kparts__mainwindow_actioncollection_callback) {
            KActionCollection* callback_ret = kparts__mainwindow_actioncollection_callback(this);
            return callback_ret;
        }
        return KParts__MainWindow::actionCollection();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString componentName() const override {
        if (kparts__mainwindow_componentname_callback) {
            const char* callback_ret = kparts__mainwindow_componentname_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KParts__MainWindow::componentName();
    }

    // Virtual method for C ABI access and custom callback
    virtual QDomDocument domDocument() const override {
        if (kparts__mainwindow_domdocument_callback) {
            QDomDocument* callback_ret = kparts__mainwindow_domdocument_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KParts__MainWindow::domDocument();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString xmlFile() const override {
        if (kparts__mainwindow_xmlfile_callback) {
            const char* callback_ret = kparts__mainwindow_xmlfile_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KParts__MainWindow::xmlFile();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString localXMLFile() const override {
        if (kparts__mainwindow_localxmlfile_callback) {
            const char* callback_ret = kparts__mainwindow_localxmlfile_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KParts__MainWindow::localXMLFile();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setComponentName(const QString& componentName, const QString& componentDisplayName) override {
        if (kparts__mainwindow_setcomponentname_callback) {
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
            kparts__mainwindow_setcomponentname_callback(this, cbval1, cbval2);
            libqt_free(componentName_str);
            libqt_free(componentDisplayName_str);
            return;
        }
        KParts__MainWindow::setComponentName(componentName, componentDisplayName);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setXMLFile(const QString& file, bool merge, bool setXMLDoc) override {
        if (kparts__mainwindow_setxmlfile_callback) {
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
            kparts__mainwindow_setxmlfile_callback(this, cbval1, cbval2, cbval3);
            libqt_free(file_str);
            return;
        }
        KParts__MainWindow::setXMLFile(file, merge, setXMLDoc);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setLocalXMLFile(const QString& file) override {
        if (kparts__mainwindow_setlocalxmlfile_callback) {
            const auto file_ret = file;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray file_b = file_ret.toUtf8();
            auto file_str_len = file_b.length();
            const char* file_str = static_cast<const char*>(malloc(file_str_len + 1));
            memcpy((void*)file_str, file_b.data(), file_str_len);
            ((char*)file_str)[file_str_len] = '\0';
            const char* cbval1 = file_str;
            kparts__mainwindow_setlocalxmlfile_callback(this, cbval1);
            libqt_free(file_str);
            return;
        }
        KParts__MainWindow::setLocalXMLFile(file);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setXML(const QString& document, bool merge) override {
        if (kparts__mainwindow_setxml_callback) {
            const auto document_ret = document;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray document_b = document_ret.toUtf8();
            auto document_str_len = document_b.length();
            const char* document_str = static_cast<const char*>(malloc(document_str_len + 1));
            memcpy((void*)document_str, document_b.data(), document_str_len);
            ((char*)document_str)[document_str_len] = '\0';
            const char* cbval1 = document_str;
            bool cbval2 = merge;
            kparts__mainwindow_setxml_callback(this, cbval1, cbval2);
            libqt_free(document_str);
            return;
        }
        KParts__MainWindow::setXML(document, merge);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDOMDocument(const QDomDocument& document, bool merge) override {
        if (kparts__mainwindow_setdomdocument_callback) {
            const QDomDocument& document_ret = document;
            // Cast returned reference into pointer
            QDomDocument* cbval1 = const_cast<QDomDocument*>(&document_ret);
            bool cbval2 = merge;
            kparts__mainwindow_setdomdocument_callback(this, cbval1, cbval2);
            return;
        }
        KParts__MainWindow::setDOMDocument(document, merge);
    }

    // Virtual method for C ABI access and custom callback
    virtual void stateChanged(const QString& newstate, KXMLGUIClient::ReverseStateChange reverse) override {
        if (kparts__mainwindow_statechanged_callback) {
            const auto newstate_ret = newstate;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray newstate_b = newstate_ret.toUtf8();
            auto newstate_str_len = newstate_b.length();
            const char* newstate_str = static_cast<const char*>(malloc(newstate_str_len + 1));
            memcpy((void*)newstate_str, newstate_b.data(), newstate_str_len);
            ((char*)newstate_str)[newstate_str_len] = '\0';
            const char* cbval1 = newstate_str;
            int cbval2 = static_cast<int>(reverse);
            kparts__mainwindow_statechanged_callback(this, cbval1, cbval2);
            libqt_free(newstate_str);
            return;
        }
        KParts__MainWindow::stateChanged(newstate, reverse);
    }

    // Friend functions
    friend void KParts__MainWindow_SuperSlotSetStatusBarText(KParts::MainWindow* self, const libqt_string param1);
    friend void KParts__MainWindow_SuperSaveNewToolbarConfig(KParts::MainWindow* self);
    friend void KParts__MainWindow_SuperCreateShellGUI(KParts::MainWindow* self, bool create);
    friend bool KParts__MainWindow_SuperEvent(KParts::MainWindow* self, QEvent* event);
    friend void KParts__MainWindow_SuperKeyPressEvent(KParts::MainWindow* self, QKeyEvent* keyEvent);
    friend void KParts__MainWindow_SuperCloseEvent(KParts::MainWindow* self, QCloseEvent* param1);
    friend bool KParts__MainWindow_SuperQueryClose(KParts::MainWindow* self);
    friend void KParts__MainWindow_SuperSaveProperties(KParts::MainWindow* self, KConfigGroup* param1);
    friend void KParts__MainWindow_SuperReadProperties(KParts::MainWindow* self, const KConfigGroup* param1);
    friend void KParts__MainWindow_SuperSaveGlobalProperties(KParts::MainWindow* self, KConfig* sessionConfig);
    friend void KParts__MainWindow_SuperReadGlobalProperties(KParts::MainWindow* self, KConfig* sessionConfig);
    friend void KParts__MainWindow_SuperContextMenuEvent(KParts::MainWindow* self, QContextMenuEvent* event);
    friend void KParts__MainWindow_SuperMousePressEvent(KParts::MainWindow* self, QMouseEvent* event);
    friend void KParts__MainWindow_SuperMouseReleaseEvent(KParts::MainWindow* self, QMouseEvent* event);
    friend void KParts__MainWindow_SuperMouseDoubleClickEvent(KParts::MainWindow* self, QMouseEvent* event);
    friend void KParts__MainWindow_SuperMouseMoveEvent(KParts::MainWindow* self, QMouseEvent* event);
    friend void KParts__MainWindow_SuperWheelEvent(KParts::MainWindow* self, QWheelEvent* event);
    friend void KParts__MainWindow_SuperKeyReleaseEvent(KParts::MainWindow* self, QKeyEvent* event);
    friend void KParts__MainWindow_SuperFocusInEvent(KParts::MainWindow* self, QFocusEvent* event);
    friend void KParts__MainWindow_SuperFocusOutEvent(KParts::MainWindow* self, QFocusEvent* event);
    friend void KParts__MainWindow_SuperEnterEvent(KParts::MainWindow* self, QEnterEvent* event);
    friend void KParts__MainWindow_SuperLeaveEvent(KParts::MainWindow* self, QEvent* event);
    friend void KParts__MainWindow_SuperPaintEvent(KParts::MainWindow* self, QPaintEvent* event);
    friend void KParts__MainWindow_SuperMoveEvent(KParts::MainWindow* self, QMoveEvent* event);
    friend void KParts__MainWindow_SuperResizeEvent(KParts::MainWindow* self, QResizeEvent* event);
    friend void KParts__MainWindow_SuperTabletEvent(KParts::MainWindow* self, QTabletEvent* event);
    friend void KParts__MainWindow_SuperActionEvent(KParts::MainWindow* self, QActionEvent* event);
    friend void KParts__MainWindow_SuperDragEnterEvent(KParts::MainWindow* self, QDragEnterEvent* event);
    friend void KParts__MainWindow_SuperDragMoveEvent(KParts::MainWindow* self, QDragMoveEvent* event);
    friend void KParts__MainWindow_SuperDragLeaveEvent(KParts::MainWindow* self, QDragLeaveEvent* event);
    friend void KParts__MainWindow_SuperDropEvent(KParts::MainWindow* self, QDropEvent* event);
    friend void KParts__MainWindow_SuperShowEvent(KParts::MainWindow* self, QShowEvent* event);
    friend void KParts__MainWindow_SuperHideEvent(KParts::MainWindow* self, QHideEvent* event);
    friend bool KParts__MainWindow_SuperNativeEvent(KParts::MainWindow* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KParts__MainWindow_SuperChangeEvent(KParts::MainWindow* self, QEvent* param1);
    friend int KParts__MainWindow_SuperMetric(const KParts::MainWindow* self, int param1);
    friend void KParts__MainWindow_SuperInitPainter(const KParts::MainWindow* self, QPainter* painter);
    friend QPaintDevice* KParts__MainWindow_SuperRedirected(const KParts::MainWindow* self, QPoint* offset);
    friend QPainter* KParts__MainWindow_SuperSharedPainter(const KParts::MainWindow* self);
    friend void KParts__MainWindow_SuperInputMethodEvent(KParts::MainWindow* self, QInputMethodEvent* param1);
    friend bool KParts__MainWindow_SuperFocusNextPrevChild(KParts::MainWindow* self, bool next);
    friend void KParts__MainWindow_SuperTimerEvent(KParts::MainWindow* self, QTimerEvent* event);
    friend void KParts__MainWindow_SuperChildEvent(KParts::MainWindow* self, QChildEvent* event);
    friend void KParts__MainWindow_SuperCustomEvent(KParts::MainWindow* self, QEvent* event);
    friend void KParts__MainWindow_SuperConnectNotify(KParts::MainWindow* self, const QMetaMethod* signal);
    friend void KParts__MainWindow_SuperDisconnectNotify(KParts::MainWindow* self, const QMetaMethod* signal);
    friend void KParts__MainWindow_SuperSetComponentName(KParts::MainWindow* self, const libqt_string componentName, const libqt_string componentDisplayName);
    friend void KParts__MainWindow_SuperSetXMLFile(KParts::MainWindow* self, const libqt_string file, bool merge, bool setXMLDoc);
    friend void KParts__MainWindow_SuperSetLocalXMLFile(KParts::MainWindow* self, const libqt_string file);
    friend void KParts__MainWindow_SuperSetXML(KParts::MainWindow* self, const libqt_string document, bool merge);
    friend void KParts__MainWindow_SuperSetDOMDocument(KParts::MainWindow* self, const QDomDocument* document, bool merge);
    friend void KParts__MainWindow_SuperStateChanged(KParts::MainWindow* self, const libqt_string newstate, int reverse);
};

#endif
