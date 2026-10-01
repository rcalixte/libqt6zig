#include <KActionCollection>
#include <KConfig>
#include <KConfigGroup>
#include <KMainWindow>
#include <KXMLGUIBuilder>
#include <KXMLGUIClient>
#include <KXMLGUIFactory>
#include <KXmlGuiWindow>
#include <QAction>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDomDocument>
#include <QDomElement>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QList>
#include <QMainWindow>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kxmlguiwindow.h>
#include "libkxmlguiwindow.h"
#include "libkxmlguiwindow.hxx"

KXmlGuiWindow* KXmlGuiWindow_new(QWidget* parent) {
    return new VirtualKXmlGuiWindow(parent);
}

KXmlGuiWindow* KXmlGuiWindow_new2() {
    return new VirtualKXmlGuiWindow();
}

KXmlGuiWindow* KXmlGuiWindow_new3(QWidget* parent, int flags) {
    return new VirtualKXmlGuiWindow(parent, static_cast<Qt::WindowFlags>(flags));
}

KXMLGUIBuilder* KXmlGuiWindow_AsKXMLGUIBuilder(KXmlGuiWindow* self) {
    return static_cast<KXMLGUIBuilder*>(self);
}

KXmlGuiWindow* KXmlGuiWindow_FromKXMLGUIBuilder(KXMLGUIBuilder* _kxmlguibuilder) {
    return dynamic_cast<KXmlGuiWindow*>(static_cast<KXMLGUIBuilder*>(_kxmlguibuilder));
}

KXMLGUIClient* KXmlGuiWindow_AsKXMLGUIClient(KXmlGuiWindow* self) {
    return static_cast<KXMLGUIClient*>(self);
}

KXmlGuiWindow* KXmlGuiWindow_FromKXMLGUIClient(KXMLGUIClient* _kxmlguiclient) {
    return dynamic_cast<KXmlGuiWindow*>(static_cast<KXMLGUIClient*>(_kxmlguiclient));
}

QMetaObject* KXmlGuiWindow_MetaObject(const KXmlGuiWindow* self) {
    return (QMetaObject*)self->metaObject();
}

void* KXmlGuiWindow_Metacast(KXmlGuiWindow* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KXmlGuiWindow_Metacall(KXmlGuiWindow* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KXmlGuiWindow_Tr(const char* s) {
    auto _ret = KXmlGuiWindow::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KXmlGuiWindow_SetHelpMenuEnabled(KXmlGuiWindow* self) {
    self->setHelpMenuEnabled();
}

bool KXmlGuiWindow_IsHelpMenuEnabled(const KXmlGuiWindow* self) {
    return self->isHelpMenuEnabled();
}

KXMLGUIFactory* KXmlGuiWindow_GuiFactory(KXmlGuiWindow* self) {
    return self->guiFactory();
}

void KXmlGuiWindow_CreateGUI(KXmlGuiWindow* self) {
    self->createGUI();
}

void KXmlGuiWindow_SetStandardToolBarMenuEnabled(KXmlGuiWindow* self, bool showToolBarMenu) {
    self->setStandardToolBarMenuEnabled(showToolBarMenu);
}

bool KXmlGuiWindow_IsStandardToolBarMenuEnabled(const KXmlGuiWindow* self) {
    return self->isStandardToolBarMenuEnabled();
}

void KXmlGuiWindow_CreateStandardStatusBarAction(KXmlGuiWindow* self) {
    self->createStandardStatusBarAction();
}

void KXmlGuiWindow_SetupGUI(KXmlGuiWindow* self) {
    self->setupGUI();
}

void KXmlGuiWindow_SetupGUI2(KXmlGuiWindow* self, const QSize* defaultSize) {
    self->setupGUI(*defaultSize);
}

QAction* KXmlGuiWindow_ToolBarMenuAction(KXmlGuiWindow* self) {
    return self->toolBarMenuAction();
}

void KXmlGuiWindow_SetupToolbarMenuActions(KXmlGuiWindow* self) {
    self->setupToolbarMenuActions();
}

libqt_list /* of libqt_string */ KXmlGuiWindow_ToolBarNames(const KXmlGuiWindow* self) {
    QList<QString> _ret = self->toolBarNames();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KXmlGuiWindow_FinalizeGUI(KXmlGuiWindow* self, bool force) {
    self->finalizeGUI(force);
}

void KXmlGuiWindow_ApplyMainWindowSettings(KXmlGuiWindow* self, const KConfigGroup* config) {
    self->applyMainWindowSettings(*config);
}

void KXmlGuiWindow_SetCommandBarEnabled(KXmlGuiWindow* self, bool showCommandBar) {
    self->setCommandBarEnabled(showCommandBar);
}

bool KXmlGuiWindow_IsCommandBarEnabled(const KXmlGuiWindow* self) {
    return self->isCommandBarEnabled();
}

void KXmlGuiWindow_ConfigureToolbars(KXmlGuiWindow* self) {
    self->configureToolbars();
}

void KXmlGuiWindow_SlotStateChanged(KXmlGuiWindow* self, const libqt_string newstate) {
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    self->slotStateChanged(newstate_QString);
}

void KXmlGuiWindow_SlotStateChanged2(KXmlGuiWindow* self, const libqt_string newstate, bool reverse) {
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    self->slotStateChanged(newstate_QString, reverse);
}

bool KXmlGuiWindow_IsToolBarVisible(KXmlGuiWindow* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->isToolBarVisible(name_QString);
}

void KXmlGuiWindow_SetToolBarVisible(KXmlGuiWindow* self, const libqt_string name, bool visible) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setToolBarVisible(name_QString, visible);
}

bool KXmlGuiWindow_Event(KXmlGuiWindow* self, QEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        return vkxmlguiwindow->event(event);
    }
    qFatal("Error: Protected method KXmlGuiWindow::event called without a directly constructed type");
}

void KXmlGuiWindow_SaveNewToolbarConfig(KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->saveNewToolbarConfig();
    }
}

libqt_string KXmlGuiWindow_Tr2(const char* s, const char* c) {
    auto _ret = KXmlGuiWindow::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KXmlGuiWindow_Tr3(const char* s, const char* c, int n) {
    auto _ret = KXmlGuiWindow::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KXmlGuiWindow_SetHelpMenuEnabled1(KXmlGuiWindow* self, bool showHelpMenu) {
    self->setHelpMenuEnabled(showHelpMenu);
}

void KXmlGuiWindow_CreateGUI1(KXmlGuiWindow* self, const libqt_string xmlfile) {
    QString xmlfile_QString = QString::fromUtf8(xmlfile.data, xmlfile.len);
    self->createGUI(xmlfile_QString);
}

void KXmlGuiWindow_SetupGUI1(KXmlGuiWindow* self, int options) {
    self->setupGUI(static_cast<KXmlGuiWindow::StandardWindowOptions>(options));
}

void KXmlGuiWindow_SetupGUI22(KXmlGuiWindow* self, int options, const libqt_string xmlfile) {
    QString xmlfile_QString = QString::fromUtf8(xmlfile.data, xmlfile.len);
    self->setupGUI(static_cast<KXmlGuiWindow::StandardWindowOptions>(options), xmlfile_QString);
}

void KXmlGuiWindow_SetupGUI23(KXmlGuiWindow* self, const QSize* defaultSize, int options) {
    self->setupGUI(*defaultSize, static_cast<KXmlGuiWindow::StandardWindowOptions>(options));
}

void KXmlGuiWindow_SetupGUI3(KXmlGuiWindow* self, const QSize* defaultSize, int options, const libqt_string xmlfile) {
    QString xmlfile_QString = QString::fromUtf8(xmlfile.data, xmlfile.len);
    self->setupGUI(*defaultSize, static_cast<KXmlGuiWindow::StandardWindowOptions>(options), xmlfile_QString);
}

// Base class handler implementation
QMetaObject* KXmlGuiWindow_SuperMetaObject(const KXmlGuiWindow* self) {
    return (QMetaObject*)self->KXmlGuiWindow::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnMetaObject(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self)))
        vkxmlguiwindow->kxmlguiwindow_metaobject_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KXmlGuiWindow_SuperMetacast(KXmlGuiWindow* self, const char* param1) {
    return self->KXmlGuiWindow::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnMetacast(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_metacast_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_Metacast_Callback>(slot);
}

// Base class handler implementation
int KXmlGuiWindow_SuperMetacall(KXmlGuiWindow* self, int param1, int param2, void** param3) {
    return self->KXmlGuiWindow::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnMetacall(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_metacall_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_Metacall_Callback>(slot);
}

// Base class handler implementation
KXMLGUIFactory* KXmlGuiWindow_SuperGuiFactory(KXmlGuiWindow* self) {
    return self->KXmlGuiWindow::guiFactory();
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnGuiFactory(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_guifactory_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_GuiFactory_Callback>(slot);
}

// Base class handler implementation
void KXmlGuiWindow_SuperApplyMainWindowSettings(KXmlGuiWindow* self, const KConfigGroup* config) {
    self->KXmlGuiWindow::applyMainWindowSettings(*config);
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnApplyMainWindowSettings(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_applymainwindowsettings_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_ApplyMainWindowSettings_Callback>(slot);
}

// Base class handler implementation
void KXmlGuiWindow_SuperConfigureToolbars(KXmlGuiWindow* self) {
    self->KXmlGuiWindow::configureToolbars();
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnConfigureToolbars(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_configuretoolbars_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_ConfigureToolbars_Callback>(slot);
}

// Base class handler implementation
void KXmlGuiWindow_SuperSlotStateChanged(KXmlGuiWindow* self, const libqt_string newstate) {
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    self->KXmlGuiWindow::slotStateChanged(newstate_QString);
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnSlotStateChanged(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_slotstatechanged_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_SlotStateChanged_Callback>(slot);
}

// Base class handler implementation
bool KXmlGuiWindow_SuperEvent(KXmlGuiWindow* self, QEvent* event) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        return vkxmlguiwindow->KXmlGuiWindow::event(event);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnEvent(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_event_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_Event_Callback>(slot);
}

// Base class handler implementation
void KXmlGuiWindow_SuperSaveNewToolbarConfig(KXmlGuiWindow* self) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::saveNewToolbarConfig();
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::saveNewToolbarConfig called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnSaveNewToolbarConfig(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_savenewtoolbarconfig_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_SaveNewToolbarConfig_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_SetCaption(KXmlGuiWindow* self, const libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    self->setCaption(caption_QString);
}

// Base class handler implementation
void KXmlGuiWindow_SuperSetCaption(KXmlGuiWindow* self, const libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    self->KXmlGuiWindow::setCaption(caption_QString);
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnSetCaption(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_setcaption_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_SetCaption_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_SetPlainCaption(KXmlGuiWindow* self, const libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    self->setPlainCaption(caption_QString);
}

// Base class handler implementation
void KXmlGuiWindow_SuperSetPlainCaption(KXmlGuiWindow* self, const libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    self->KXmlGuiWindow::setPlainCaption(caption_QString);
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnSetPlainCaption(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_setplaincaption_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_SetPlainCaption_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_KeyPressEvent(KXmlGuiWindow* self, QKeyEvent* keyEvent) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->keyPressEvent(keyEvent);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperKeyPressEvent(KXmlGuiWindow* self, QKeyEvent* keyEvent) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::keyPressEvent(keyEvent);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnKeyPressEvent(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_keypressevent_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_CloseEvent(KXmlGuiWindow* self, QCloseEvent* param1) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperCloseEvent(KXmlGuiWindow* self, QCloseEvent* param1) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnCloseEvent(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_closeevent_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
bool KXmlGuiWindow_QueryClose(KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        return vkxmlguiwindow->queryClose();
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::queryClose called without a directly constructed type");
    }
}

// Base class handler implementation
bool KXmlGuiWindow_SuperQueryClose(KXmlGuiWindow* self) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        return vkxmlguiwindow->KXmlGuiWindow::queryClose();
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::queryClose called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnQueryClose(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_queryclose_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_QueryClose_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_SaveProperties(KXmlGuiWindow* self, KConfigGroup* param1) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->saveProperties(*param1);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::saveProperties called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperSaveProperties(KXmlGuiWindow* self, KConfigGroup* param1) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::saveProperties(*param1);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::saveProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnSaveProperties(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_saveproperties_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_SaveProperties_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_ReadProperties(KXmlGuiWindow* self, const KConfigGroup* param1) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->readProperties(*param1);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperReadProperties(KXmlGuiWindow* self, const KConfigGroup* param1) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::readProperties(*param1);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnReadProperties(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_readproperties_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_SaveGlobalProperties(KXmlGuiWindow* self, KConfig* sessionConfig) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->saveGlobalProperties(sessionConfig);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::saveGlobalProperties called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperSaveGlobalProperties(KXmlGuiWindow* self, KConfig* sessionConfig) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::saveGlobalProperties(sessionConfig);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::saveGlobalProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnSaveGlobalProperties(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_saveglobalproperties_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_SaveGlobalProperties_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_ReadGlobalProperties(KXmlGuiWindow* self, KConfig* sessionConfig) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->readGlobalProperties(sessionConfig);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::readGlobalProperties called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperReadGlobalProperties(KXmlGuiWindow* self, KConfig* sessionConfig) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::readGlobalProperties(sessionConfig);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::readGlobalProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnReadGlobalProperties(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_readglobalproperties_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_ReadGlobalProperties_Callback>(slot);
}

// Derived class handler implementation
QMenu* KXmlGuiWindow_CreatePopupMenu(KXmlGuiWindow* self) {
    return self->createPopupMenu();
}

// Base class handler implementation
QMenu* KXmlGuiWindow_SuperCreatePopupMenu(KXmlGuiWindow* self) {
    return self->KXmlGuiWindow::createPopupMenu();
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnCreatePopupMenu(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_createpopupmenu_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_CreatePopupMenu_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_ContextMenuEvent(KXmlGuiWindow* self, QContextMenuEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperContextMenuEvent(KXmlGuiWindow* self, QContextMenuEvent* event) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnContextMenuEvent(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_contextmenuevent_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
int KXmlGuiWindow_DevType(const KXmlGuiWindow* self) {
    return self->devType();
}

// Base class handler implementation
int KXmlGuiWindow_SuperDevType(const KXmlGuiWindow* self) {
    return self->KXmlGuiWindow::devType();
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnDevType(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self)))
        vkxmlguiwindow->kxmlguiwindow_devtype_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_DevType_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_SetVisible(KXmlGuiWindow* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KXmlGuiWindow_SuperSetVisible(KXmlGuiWindow* self, bool visible) {
    self->KXmlGuiWindow::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnSetVisible(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_setvisible_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KXmlGuiWindow_SizeHint(const KXmlGuiWindow* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KXmlGuiWindow_SuperSizeHint(const KXmlGuiWindow* self) {
    return new QSize(self->KXmlGuiWindow::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnSizeHint(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self)))
        vkxmlguiwindow->kxmlguiwindow_sizehint_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KXmlGuiWindow_MinimumSizeHint(const KXmlGuiWindow* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KXmlGuiWindow_SuperMinimumSizeHint(const KXmlGuiWindow* self) {
    return new QSize(self->KXmlGuiWindow::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnMinimumSizeHint(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self)))
        vkxmlguiwindow->kxmlguiwindow_minimumsizehint_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KXmlGuiWindow_HeightForWidth(const KXmlGuiWindow* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KXmlGuiWindow_SuperHeightForWidth(const KXmlGuiWindow* self, int param1) {
    return self->KXmlGuiWindow::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnHeightForWidth(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self)))
        vkxmlguiwindow->kxmlguiwindow_heightforwidth_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KXmlGuiWindow_HasHeightForWidth(const KXmlGuiWindow* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KXmlGuiWindow_SuperHasHeightForWidth(const KXmlGuiWindow* self) {
    return self->KXmlGuiWindow::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnHasHeightForWidth(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self)))
        vkxmlguiwindow->kxmlguiwindow_hasheightforwidth_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KXmlGuiWindow_PaintEngine(const KXmlGuiWindow* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KXmlGuiWindow_SuperPaintEngine(const KXmlGuiWindow* self) {
    return self->KXmlGuiWindow::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnPaintEngine(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self)))
        vkxmlguiwindow->kxmlguiwindow_paintengine_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_MousePressEvent(KXmlGuiWindow* self, QMouseEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperMousePressEvent(KXmlGuiWindow* self, QMouseEvent* event) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnMousePressEvent(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_mousepressevent_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_MouseReleaseEvent(KXmlGuiWindow* self, QMouseEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperMouseReleaseEvent(KXmlGuiWindow* self, QMouseEvent* event) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnMouseReleaseEvent(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_mousereleaseevent_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_MouseDoubleClickEvent(KXmlGuiWindow* self, QMouseEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperMouseDoubleClickEvent(KXmlGuiWindow* self, QMouseEvent* event) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnMouseDoubleClickEvent(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_mousedoubleclickevent_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_MouseMoveEvent(KXmlGuiWindow* self, QMouseEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperMouseMoveEvent(KXmlGuiWindow* self, QMouseEvent* event) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnMouseMoveEvent(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_mousemoveevent_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_WheelEvent(KXmlGuiWindow* self, QWheelEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperWheelEvent(KXmlGuiWindow* self, QWheelEvent* event) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnWheelEvent(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_wheelevent_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_KeyReleaseEvent(KXmlGuiWindow* self, QKeyEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperKeyReleaseEvent(KXmlGuiWindow* self, QKeyEvent* event) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnKeyReleaseEvent(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_keyreleaseevent_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_FocusInEvent(KXmlGuiWindow* self, QFocusEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperFocusInEvent(KXmlGuiWindow* self, QFocusEvent* event) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnFocusInEvent(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_focusinevent_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_FocusOutEvent(KXmlGuiWindow* self, QFocusEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperFocusOutEvent(KXmlGuiWindow* self, QFocusEvent* event) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnFocusOutEvent(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_focusoutevent_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_EnterEvent(KXmlGuiWindow* self, QEnterEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperEnterEvent(KXmlGuiWindow* self, QEnterEvent* event) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnEnterEvent(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_enterevent_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_LeaveEvent(KXmlGuiWindow* self, QEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperLeaveEvent(KXmlGuiWindow* self, QEvent* event) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnLeaveEvent(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_leaveevent_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_PaintEvent(KXmlGuiWindow* self, QPaintEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperPaintEvent(KXmlGuiWindow* self, QPaintEvent* event) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnPaintEvent(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_paintevent_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_MoveEvent(KXmlGuiWindow* self, QMoveEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperMoveEvent(KXmlGuiWindow* self, QMoveEvent* event) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnMoveEvent(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_moveevent_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_ResizeEvent(KXmlGuiWindow* self, QResizeEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperResizeEvent(KXmlGuiWindow* self, QResizeEvent* event) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnResizeEvent(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_resizeevent_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_TabletEvent(KXmlGuiWindow* self, QTabletEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperTabletEvent(KXmlGuiWindow* self, QTabletEvent* event) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnTabletEvent(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_tabletevent_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_ActionEvent(KXmlGuiWindow* self, QActionEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperActionEvent(KXmlGuiWindow* self, QActionEvent* event) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnActionEvent(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_actionevent_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_DragEnterEvent(KXmlGuiWindow* self, QDragEnterEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperDragEnterEvent(KXmlGuiWindow* self, QDragEnterEvent* event) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnDragEnterEvent(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_dragenterevent_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_DragMoveEvent(KXmlGuiWindow* self, QDragMoveEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperDragMoveEvent(KXmlGuiWindow* self, QDragMoveEvent* event) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnDragMoveEvent(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_dragmoveevent_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_DragLeaveEvent(KXmlGuiWindow* self, QDragLeaveEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperDragLeaveEvent(KXmlGuiWindow* self, QDragLeaveEvent* event) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnDragLeaveEvent(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_dragleaveevent_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_DropEvent(KXmlGuiWindow* self, QDropEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperDropEvent(KXmlGuiWindow* self, QDropEvent* event) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnDropEvent(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_dropevent_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_ShowEvent(KXmlGuiWindow* self, QShowEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperShowEvent(KXmlGuiWindow* self, QShowEvent* event) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnShowEvent(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_showevent_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_HideEvent(KXmlGuiWindow* self, QHideEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperHideEvent(KXmlGuiWindow* self, QHideEvent* event) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnHideEvent(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_hideevent_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KXmlGuiWindow_NativeEvent(KXmlGuiWindow* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        return vkxmlguiwindow->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KXmlGuiWindow_SuperNativeEvent(KXmlGuiWindow* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        return vkxmlguiwindow->KXmlGuiWindow::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnNativeEvent(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_nativeevent_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_ChangeEvent(KXmlGuiWindow* self, QEvent* param1) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperChangeEvent(KXmlGuiWindow* self, QEvent* param1) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnChangeEvent(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_changeevent_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KXmlGuiWindow_Metric(const KXmlGuiWindow* self, int param1) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow) {
        return vkxmlguiwindow->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KXmlGuiWindow_SuperMetric(const KXmlGuiWindow* self, int param1) {
    if (auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self))) {
        return vkxmlguiwindow->KXmlGuiWindow::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnMetric(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self)))
        vkxmlguiwindow->kxmlguiwindow_metric_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_Metric_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_InitPainter(const KXmlGuiWindow* self, QPainter* painter) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow) {
        vkxmlguiwindow->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperInitPainter(const KXmlGuiWindow* self, QPainter* painter) {
    if (auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self))) {
        vkxmlguiwindow->KXmlGuiWindow::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnInitPainter(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self)))
        vkxmlguiwindow->kxmlguiwindow_initpainter_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KXmlGuiWindow_Redirected(const KXmlGuiWindow* self, QPoint* offset) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow) {
        return vkxmlguiwindow->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KXmlGuiWindow_SuperRedirected(const KXmlGuiWindow* self, QPoint* offset) {
    if (auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self))) {
        return vkxmlguiwindow->KXmlGuiWindow::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnRedirected(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self)))
        vkxmlguiwindow->kxmlguiwindow_redirected_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KXmlGuiWindow_SharedPainter(const KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow) {
        return vkxmlguiwindow->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KXmlGuiWindow_SuperSharedPainter(const KXmlGuiWindow* self) {
    if (auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self))) {
        return vkxmlguiwindow->KXmlGuiWindow::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnSharedPainter(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self)))
        vkxmlguiwindow->kxmlguiwindow_sharedpainter_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_InputMethodEvent(KXmlGuiWindow* self, QInputMethodEvent* param1) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperInputMethodEvent(KXmlGuiWindow* self, QInputMethodEvent* param1) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnInputMethodEvent(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_inputmethodevent_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KXmlGuiWindow_InputMethodQuery(const KXmlGuiWindow* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KXmlGuiWindow_SuperInputMethodQuery(const KXmlGuiWindow* self, int param1) {
    return new QVariant(self->KXmlGuiWindow::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnInputMethodQuery(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self)))
        vkxmlguiwindow->kxmlguiwindow_inputmethodquery_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KXmlGuiWindow_FocusNextPrevChild(KXmlGuiWindow* self, bool next) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        return vkxmlguiwindow->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KXmlGuiWindow_SuperFocusNextPrevChild(KXmlGuiWindow* self, bool next) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        return vkxmlguiwindow->KXmlGuiWindow::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnFocusNextPrevChild(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_focusnextprevchild_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KXmlGuiWindow_EventFilter(KXmlGuiWindow* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KXmlGuiWindow_SuperEventFilter(KXmlGuiWindow* self, QObject* watched, QEvent* event) {
    return self->KXmlGuiWindow::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnEventFilter(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_eventfilter_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_TimerEvent(KXmlGuiWindow* self, QTimerEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperTimerEvent(KXmlGuiWindow* self, QTimerEvent* event) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnTimerEvent(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_timerevent_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_ChildEvent(KXmlGuiWindow* self, QChildEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperChildEvent(KXmlGuiWindow* self, QChildEvent* event) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnChildEvent(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_childevent_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_CustomEvent(KXmlGuiWindow* self, QEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperCustomEvent(KXmlGuiWindow* self, QEvent* event) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnCustomEvent(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_customevent_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_ConnectNotify(KXmlGuiWindow* self, const QMetaMethod* signal) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperConnectNotify(KXmlGuiWindow* self, const QMetaMethod* signal) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnConnectNotify(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_connectnotify_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_DisconnectNotify(KXmlGuiWindow* self, const QMetaMethod* signal) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperDisconnectNotify(KXmlGuiWindow* self, const QMetaMethod* signal) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnDisconnectNotify(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_disconnectnotify_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KXmlGuiWindow_ContainerTags(const KXmlGuiWindow* self) {
    QList<QString> _ret = self->containerTags();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Base class handler implementation
libqt_list /* of libqt_string */ KXmlGuiWindow_SuperContainerTags(const KXmlGuiWindow* self) {
    QList<QString> _ret = self->KXmlGuiWindow::containerTags();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnContainerTags(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self)))
        vkxmlguiwindow->kxmlguiwindow_containertags_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_ContainerTags_Callback>(slot);
}

// Derived class handler implementation
QWidget* KXmlGuiWindow_CreateContainer(KXmlGuiWindow* self, QWidget* parent, int index, const QDomElement* element, QAction** containerAction) {
    return self->createContainer(parent, static_cast<int>(index), *element, *containerAction);
}

// Base class handler implementation
QWidget* KXmlGuiWindow_SuperCreateContainer(KXmlGuiWindow* self, QWidget* parent, int index, const QDomElement* element, QAction** containerAction) {
    return self->KXmlGuiWindow::createContainer(parent, static_cast<int>(index), *element, *containerAction);
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnCreateContainer(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_createcontainer_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_CreateContainer_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_RemoveContainer(KXmlGuiWindow* self, QWidget* container, QWidget* parent, QDomElement* element, QAction* containerAction) {
    self->removeContainer(container, parent, *element, containerAction);
}

// Base class handler implementation
void KXmlGuiWindow_SuperRemoveContainer(KXmlGuiWindow* self, QWidget* container, QWidget* parent, QDomElement* element, QAction* containerAction) {
    self->KXmlGuiWindow::removeContainer(container, parent, *element, containerAction);
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnRemoveContainer(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_removecontainer_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_RemoveContainer_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KXmlGuiWindow_CustomTags(const KXmlGuiWindow* self) {
    QList<QString> _ret = self->customTags();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Base class handler implementation
libqt_list /* of libqt_string */ KXmlGuiWindow_SuperCustomTags(const KXmlGuiWindow* self) {
    QList<QString> _ret = self->KXmlGuiWindow::customTags();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnCustomTags(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self)))
        vkxmlguiwindow->kxmlguiwindow_customtags_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_CustomTags_Callback>(slot);
}

// Derived class handler implementation
QAction* KXmlGuiWindow_CreateCustomElement(KXmlGuiWindow* self, QWidget* parent, int index, const QDomElement* element) {
    return self->createCustomElement(parent, static_cast<int>(index), *element);
}

// Base class handler implementation
QAction* KXmlGuiWindow_SuperCreateCustomElement(KXmlGuiWindow* self, QWidget* parent, int index, const QDomElement* element) {
    return self->KXmlGuiWindow::createCustomElement(parent, static_cast<int>(index), *element);
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnCreateCustomElement(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_createcustomelement_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_CreateCustomElement_Callback>(slot);
}

// Derived class handler implementation
QAction* KXmlGuiWindow_Action2(const KXmlGuiWindow* self, const QDomElement* element) {
    return self->action(*element);
}

// Base class handler implementation
QAction* KXmlGuiWindow_SuperAction2(const KXmlGuiWindow* self, const QDomElement* element) {
    return self->KXmlGuiWindow::action(*element);
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnAction2(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self)))
        vkxmlguiwindow->kxmlguiwindow_action2_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_Action2_Callback>(slot);
}

// Derived class handler implementation
KActionCollection* KXmlGuiWindow_ActionCollection(const KXmlGuiWindow* self) {
    return self->actionCollection();
}

// Base class handler implementation
KActionCollection* KXmlGuiWindow_SuperActionCollection(const KXmlGuiWindow* self) {
    return self->KXmlGuiWindow::actionCollection();
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnActionCollection(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self)))
        vkxmlguiwindow->kxmlguiwindow_actioncollection_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_ActionCollection_Callback>(slot);
}

// Derived class handler implementation
libqt_string KXmlGuiWindow_ComponentName(const KXmlGuiWindow* self) {
    auto _ret = self->componentName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
libqt_string KXmlGuiWindow_SuperComponentName(const KXmlGuiWindow* self) {
    auto _ret = self->KXmlGuiWindow::componentName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnComponentName(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self)))
        vkxmlguiwindow->kxmlguiwindow_componentname_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_ComponentName_Callback>(slot);
}

// Derived class handler implementation
QDomDocument* KXmlGuiWindow_DomDocument(const KXmlGuiWindow* self) {
    return new QDomDocument(self->domDocument());
}

// Base class handler implementation
QDomDocument* KXmlGuiWindow_SuperDomDocument(const KXmlGuiWindow* self) {
    return new QDomDocument(self->KXmlGuiWindow::domDocument());
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnDomDocument(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self)))
        vkxmlguiwindow->kxmlguiwindow_domdocument_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_DomDocument_Callback>(slot);
}

// Derived class handler implementation
libqt_string KXmlGuiWindow_XmlFile(const KXmlGuiWindow* self) {
    auto _ret = self->xmlFile();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
libqt_string KXmlGuiWindow_SuperXmlFile(const KXmlGuiWindow* self) {
    auto _ret = self->KXmlGuiWindow::xmlFile();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnXmlFile(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self)))
        vkxmlguiwindow->kxmlguiwindow_xmlfile_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_XmlFile_Callback>(slot);
}

// Derived class handler implementation
libqt_string KXmlGuiWindow_LocalXMLFile(const KXmlGuiWindow* self) {
    auto _ret = self->localXMLFile();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
libqt_string KXmlGuiWindow_SuperLocalXMLFile(const KXmlGuiWindow* self) {
    auto _ret = self->KXmlGuiWindow::localXMLFile();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnLocalXMLFile(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self)))
        vkxmlguiwindow->kxmlguiwindow_localxmlfile_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_LocalXMLFile_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_SetComponentName(KXmlGuiWindow* self, const libqt_string componentName, const libqt_string componentDisplayName) {
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    QString componentDisplayName_QString = QString::fromUtf8(componentDisplayName.data, componentDisplayName.len);
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->setComponentName(componentName_QString, componentDisplayName_QString);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::setComponentName called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperSetComponentName(KXmlGuiWindow* self, const libqt_string componentName, const libqt_string componentDisplayName) {
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    QString componentDisplayName_QString = QString::fromUtf8(componentDisplayName.data, componentDisplayName.len);
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::setComponentName(componentName_QString, componentDisplayName_QString);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::setComponentName called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnSetComponentName(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_setcomponentname_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_SetComponentName_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_SetXMLFile(KXmlGuiWindow* self, const libqt_string file, bool merge, bool setXMLDoc) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->setXMLFile(file_QString, merge, setXMLDoc);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::setXMLFile called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperSetXMLFile(KXmlGuiWindow* self, const libqt_string file, bool merge, bool setXMLDoc) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::setXMLFile(file_QString, merge, setXMLDoc);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::setXMLFile called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnSetXMLFile(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_setxmlfile_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_SetXMLFile_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_SetLocalXMLFile(KXmlGuiWindow* self, const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->setLocalXMLFile(file_QString);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::setLocalXMLFile called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperSetLocalXMLFile(KXmlGuiWindow* self, const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::setLocalXMLFile(file_QString);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::setLocalXMLFile called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnSetLocalXMLFile(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_setlocalxmlfile_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_SetLocalXMLFile_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_SetXML(KXmlGuiWindow* self, const libqt_string document, bool merge) {
    QString document_QString = QString::fromUtf8(document.data, document.len);
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->setXML(document_QString, merge);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::setXML called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperSetXML(KXmlGuiWindow* self, const libqt_string document, bool merge) {
    QString document_QString = QString::fromUtf8(document.data, document.len);
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::setXML(document_QString, merge);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::setXML called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnSetXML(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_setxml_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_SetXML_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_SetDOMDocument(KXmlGuiWindow* self, const QDomDocument* document, bool merge) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->setDOMDocument(*document, merge);
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::setDOMDocument called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperSetDOMDocument(KXmlGuiWindow* self, const QDomDocument* document, bool merge) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::setDOMDocument(*document, merge);
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::setDOMDocument called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnSetDOMDocument(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_setdomdocument_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_SetDOMDocument_Callback>(slot);
}

// Derived class handler implementation
void KXmlGuiWindow_StateChanged(KXmlGuiWindow* self, const libqt_string newstate, int reverse) {
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow) {
        vkxmlguiwindow->stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    } else {
        qFatal("Error: Protected virtual method KXmlGuiWindow::stateChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void KXmlGuiWindow_SuperStateChanged(KXmlGuiWindow* self, const libqt_string newstate, int reverse) {
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->KXmlGuiWindow::stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    } else
        qFatal("Error: Protected virtual method KXmlGuiWindow::stateChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnStateChanged(KXmlGuiWindow* self, intptr_t slot) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self))
        vkxmlguiwindow->kxmlguiwindow_statechanged_callback = reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_StateChanged_Callback>(slot);
}

// Derived class protected handler implementation
void KXmlGuiWindow_CheckAmbiguousShortcuts(KXmlGuiWindow* self) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->VirtualKXmlGuiWindow::checkAmbiguousShortcuts();
    } else
        qFatal("Error: Protected method KXmlGuiWindow::checkAmbiguousShortcuts called without a directly constructed type");
}

// Derived class protected handler implementation
void KXmlGuiWindow_SavePropertiesInternal(KXmlGuiWindow* self, KConfig* param1, int param2) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->VirtualKXmlGuiWindow::savePropertiesInternal(param1, static_cast<int>(param2));
    } else
        qFatal("Error: Protected method KXmlGuiWindow::savePropertiesInternal called without a directly constructed type");
}

// Derived class protected handler implementation
bool KXmlGuiWindow_ReadPropertiesInternal(KXmlGuiWindow* self, KConfig* param1, int param2) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        return vkxmlguiwindow->VirtualKXmlGuiWindow::readPropertiesInternal(param1, static_cast<int>(param2));
    } else
        qFatal("Error: Protected method KXmlGuiWindow::readPropertiesInternal called without a directly constructed type");
}

// Derived class protected handler implementation
bool KXmlGuiWindow_SettingsDirty(const KXmlGuiWindow* self) {
    if (auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self))) {
        return vkxmlguiwindow->VirtualKXmlGuiWindow::settingsDirty();
    } else
        qFatal("Error: Protected method KXmlGuiWindow::settingsDirty called without a directly constructed type");
}

// Derived class protected handler implementation
void KXmlGuiWindow_SaveAutoSaveSettings(KXmlGuiWindow* self) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->VirtualKXmlGuiWindow::saveAutoSaveSettings();
    } else
        qFatal("Error: Protected method KXmlGuiWindow::saveAutoSaveSettings called without a directly constructed type");
}

// Derived class protected handler implementation
void KXmlGuiWindow_UpdateMicroFocus(KXmlGuiWindow* self) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->VirtualKXmlGuiWindow::updateMicroFocus();
    } else
        qFatal("Error: Protected method KXmlGuiWindow::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KXmlGuiWindow_Create(KXmlGuiWindow* self) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->VirtualKXmlGuiWindow::create();
    } else
        qFatal("Error: Protected method KXmlGuiWindow::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KXmlGuiWindow_Destroy(KXmlGuiWindow* self) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->VirtualKXmlGuiWindow::destroy();
    } else
        qFatal("Error: Protected method KXmlGuiWindow::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KXmlGuiWindow_FocusNextChild(KXmlGuiWindow* self) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        return vkxmlguiwindow->VirtualKXmlGuiWindow::focusNextChild();
    } else
        qFatal("Error: Protected method KXmlGuiWindow::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KXmlGuiWindow_FocusPreviousChild(KXmlGuiWindow* self) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        return vkxmlguiwindow->VirtualKXmlGuiWindow::focusPreviousChild();
    } else
        qFatal("Error: Protected method KXmlGuiWindow::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KXmlGuiWindow_Sender(const KXmlGuiWindow* self) {
    if (auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self))) {
        return vkxmlguiwindow->VirtualKXmlGuiWindow::sender();
    } else
        qFatal("Error: Protected method KXmlGuiWindow::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KXmlGuiWindow_SenderSignalIndex(const KXmlGuiWindow* self) {
    if (auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self))) {
        return vkxmlguiwindow->VirtualKXmlGuiWindow::senderSignalIndex();
    } else
        qFatal("Error: Protected method KXmlGuiWindow::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KXmlGuiWindow_Receivers(const KXmlGuiWindow* self, const char* signal) {
    if (auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self))) {
        return vkxmlguiwindow->VirtualKXmlGuiWindow::receivers(signal);
    } else
        qFatal("Error: Protected method KXmlGuiWindow::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KXmlGuiWindow_IsSignalConnected(const KXmlGuiWindow* self, const QMetaMethod* signal) {
    if (auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self))) {
        return vkxmlguiwindow->VirtualKXmlGuiWindow::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KXmlGuiWindow::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KXmlGuiWindow_GetDecodedMetricF(const KXmlGuiWindow* self, int metricA, int metricB) {
    if (auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self))) {
        return vkxmlguiwindow->VirtualKXmlGuiWindow::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KXmlGuiWindow::getDecodedMetricF called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string KXmlGuiWindow_StandardsXmlFileLocation(KXmlGuiWindow* self) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        auto _ret = vkxmlguiwindow->VirtualKXmlGuiWindow::standardsXmlFileLocation();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method KXmlGuiWindow::standardsXmlFileLocation called without a directly constructed type");
}

// Derived class protected handler implementation
void KXmlGuiWindow_LoadStandardsXmlFile(KXmlGuiWindow* self) {
    if (auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self)) {
        vkxmlguiwindow->VirtualKXmlGuiWindow::loadStandardsXmlFile();
    } else
        qFatal("Error: Protected method KXmlGuiWindow::loadStandardsXmlFile called without a directly constructed type");
}

void KXmlGuiWindow_Delete(KXmlGuiWindow* self) {
    delete self;
}
