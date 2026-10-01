#include <KActionCollection>
#include <KConfig>
#include <KConfigGroup>
#include <KMainWindow>
#include <KParts/MainWindow>
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__Part
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__PartBase
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
#include <mainwindow.h>
#include "libmainwindow.h"
#include "libmainwindow.hxx"

KParts__MainWindow* KParts__MainWindow_new(QWidget* parent) {
    return new VirtualKPartsMainWindow(parent);
}

KParts__MainWindow* KParts__MainWindow_new2() {
    return new VirtualKPartsMainWindow();
}

KParts__MainWindow* KParts__MainWindow_new3(QWidget* parent, int f) {
    return new VirtualKPartsMainWindow(parent, static_cast<Qt::WindowFlags>(f));
}

KParts__PartBase* KParts__MainWindow_AsKParts__PartBase(KParts__MainWindow* self) {
    return static_cast<KParts::PartBase*>(self);
}

KParts__MainWindow* KParts__MainWindow_FromKParts__PartBase(KParts::PartBase* _kparts__partbase) {
    return dynamic_cast<KParts::MainWindow*>(static_cast<KParts::PartBase*>(_kparts__partbase));
}

QMetaObject* KParts__MainWindow_MetaObject(const KParts__MainWindow* self) {
    return (QMetaObject*)self->metaObject();
}

void* KParts__MainWindow_Metacast(KParts__MainWindow* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KParts__MainWindow_Metacall(KParts__MainWindow* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KParts__MainWindow_Tr(const char* s) {
    auto _ret = KParts::MainWindow::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KParts__MainWindow_ConfigureToolbars(KParts__MainWindow* self) {
    self->configureToolbars();
}

void KParts__MainWindow_SlotSetStatusBarText(KParts__MainWindow* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    auto* vkparts__mainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkparts__mainwindow) {
        vkparts__mainwindow->slotSetStatusBarText(param1_QString);
    }
}

void KParts__MainWindow_SaveNewToolbarConfig(KParts__MainWindow* self) {
    auto* vkparts__mainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkparts__mainwindow) {
        vkparts__mainwindow->saveNewToolbarConfig();
    }
}

void KParts__MainWindow_CreateShellGUI(KParts__MainWindow* self, bool create) {
    auto* vkparts__mainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkparts__mainwindow) {
        vkparts__mainwindow->createShellGUI(create);
    }
}

libqt_string KParts__MainWindow_Tr2(const char* s, const char* c) {
    auto _ret = KParts::MainWindow::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KParts__MainWindow_Tr3(const char* s, const char* c, int n) {
    auto _ret = KParts::MainWindow::tr(s, c, static_cast<int>(n));
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
QMetaObject* KParts__MainWindow_SuperMetaObject(const KParts__MainWindow* self) {
    return (QMetaObject*)self->KParts::MainWindow::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnMetaObject(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self)))
        vkpartsmainwindow->kparts__mainwindow_metaobject_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KParts__MainWindow_SuperMetacast(KParts__MainWindow* self, const char* param1) {
    return self->KParts::MainWindow::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnMetacast(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_metacast_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_Metacast_Callback>(slot);
}

// Base class handler implementation
int KParts__MainWindow_SuperMetacall(KParts__MainWindow* self, int param1, int param2, void** param3) {
    return self->KParts::MainWindow::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnMetacall(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_metacall_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_Metacall_Callback>(slot);
}

// Base class handler implementation
void KParts__MainWindow_SuperConfigureToolbars(KParts__MainWindow* self) {
    self->KParts::MainWindow::configureToolbars();
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnConfigureToolbars(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_configuretoolbars_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_ConfigureToolbars_Callback>(slot);
}

// Base class handler implementation
void KParts__MainWindow_SuperSlotSetStatusBarText(KParts__MainWindow* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::slotSetStatusBarText(param1_QString);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::slotSetStatusBarText called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSlotSetStatusBarText(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_slotsetstatusbartext_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SlotSetStatusBarText_Callback>(slot);
}

// Base class handler implementation
void KParts__MainWindow_SuperSaveNewToolbarConfig(KParts__MainWindow* self) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::saveNewToolbarConfig();
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::saveNewToolbarConfig called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSaveNewToolbarConfig(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_savenewtoolbarconfig_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SaveNewToolbarConfig_Callback>(slot);
}

// Base class handler implementation
void KParts__MainWindow_SuperCreateShellGUI(KParts__MainWindow* self, bool create) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::createShellGUI(create);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::createShellGUI called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnCreateShellGUI(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_createshellgui_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_CreateShellGUI_Callback>(slot);
}

// Derived class handler implementation
KXMLGUIFactory* KParts__MainWindow_GuiFactory(KParts__MainWindow* self) {
    return self->guiFactory();
}

// Base class handler implementation
KXMLGUIFactory* KParts__MainWindow_SuperGuiFactory(KParts__MainWindow* self) {
    return self->KParts::MainWindow::guiFactory();
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnGuiFactory(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_guifactory_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_GuiFactory_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_ApplyMainWindowSettings(KParts__MainWindow* self, const KConfigGroup* config) {
    self->applyMainWindowSettings(*config);
}

// Base class handler implementation
void KParts__MainWindow_SuperApplyMainWindowSettings(KParts__MainWindow* self, const KConfigGroup* config) {
    self->KParts::MainWindow::applyMainWindowSettings(*config);
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnApplyMainWindowSettings(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_applymainwindowsettings_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_ApplyMainWindowSettings_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_SlotStateChanged(KParts__MainWindow* self, const libqt_string newstate) {
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    self->slotStateChanged(newstate_QString);
}

// Base class handler implementation
void KParts__MainWindow_SuperSlotStateChanged(KParts__MainWindow* self, const libqt_string newstate) {
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    self->KParts::MainWindow::slotStateChanged(newstate_QString);
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSlotStateChanged(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_slotstatechanged_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SlotStateChanged_Callback>(slot);
}

// Derived class handler implementation
bool KParts__MainWindow_Event(KParts__MainWindow* self, QEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        return vkpartsmainwindow->event(event);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KParts__MainWindow_SuperEvent(KParts__MainWindow* self, QEvent* event) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        return vkpartsmainwindow->KParts::MainWindow::event(event);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnEvent(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_event_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_Event_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_SetCaption(KParts__MainWindow* self, const libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    self->setCaption(caption_QString);
}

// Base class handler implementation
void KParts__MainWindow_SuperSetCaption(KParts__MainWindow* self, const libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    self->KParts::MainWindow::setCaption(caption_QString);
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSetCaption(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_setcaption_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SetCaption_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_SetPlainCaption(KParts__MainWindow* self, const libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    self->setPlainCaption(caption_QString);
}

// Base class handler implementation
void KParts__MainWindow_SuperSetPlainCaption(KParts__MainWindow* self, const libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    self->KParts::MainWindow::setPlainCaption(caption_QString);
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSetPlainCaption(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_setplaincaption_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SetPlainCaption_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_KeyPressEvent(KParts__MainWindow* self, QKeyEvent* keyEvent) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->keyPressEvent(keyEvent);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperKeyPressEvent(KParts__MainWindow* self, QKeyEvent* keyEvent) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::keyPressEvent(keyEvent);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnKeyPressEvent(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_keypressevent_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_CloseEvent(KParts__MainWindow* self, QCloseEvent* param1) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperCloseEvent(KParts__MainWindow* self, QCloseEvent* param1) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnCloseEvent(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_closeevent_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
bool KParts__MainWindow_QueryClose(KParts__MainWindow* self) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        return vkpartsmainwindow->queryClose();
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::queryClose called without a directly constructed type");
    }
}

// Base class handler implementation
bool KParts__MainWindow_SuperQueryClose(KParts__MainWindow* self) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        return vkpartsmainwindow->KParts::MainWindow::queryClose();
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::queryClose called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnQueryClose(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_queryclose_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_QueryClose_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_SaveProperties(KParts__MainWindow* self, KConfigGroup* param1) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->saveProperties(*param1);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::saveProperties called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperSaveProperties(KParts__MainWindow* self, KConfigGroup* param1) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::saveProperties(*param1);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::saveProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSaveProperties(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_saveproperties_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SaveProperties_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_ReadProperties(KParts__MainWindow* self, const KConfigGroup* param1) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->readProperties(*param1);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperReadProperties(KParts__MainWindow* self, const KConfigGroup* param1) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::readProperties(*param1);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnReadProperties(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_readproperties_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_SaveGlobalProperties(KParts__MainWindow* self, KConfig* sessionConfig) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->saveGlobalProperties(sessionConfig);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::saveGlobalProperties called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperSaveGlobalProperties(KParts__MainWindow* self, KConfig* sessionConfig) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::saveGlobalProperties(sessionConfig);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::saveGlobalProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSaveGlobalProperties(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_saveglobalproperties_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SaveGlobalProperties_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_ReadGlobalProperties(KParts__MainWindow* self, KConfig* sessionConfig) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->readGlobalProperties(sessionConfig);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::readGlobalProperties called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperReadGlobalProperties(KParts__MainWindow* self, KConfig* sessionConfig) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::readGlobalProperties(sessionConfig);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::readGlobalProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnReadGlobalProperties(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_readglobalproperties_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_ReadGlobalProperties_Callback>(slot);
}

// Derived class handler implementation
QMenu* KParts__MainWindow_CreatePopupMenu(KParts__MainWindow* self) {
    return self->createPopupMenu();
}

// Base class handler implementation
QMenu* KParts__MainWindow_SuperCreatePopupMenu(KParts__MainWindow* self) {
    return self->KParts::MainWindow::createPopupMenu();
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnCreatePopupMenu(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_createpopupmenu_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_CreatePopupMenu_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_ContextMenuEvent(KParts__MainWindow* self, QContextMenuEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperContextMenuEvent(KParts__MainWindow* self, QContextMenuEvent* event) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnContextMenuEvent(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_contextmenuevent_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
int KParts__MainWindow_DevType(const KParts__MainWindow* self) {
    return self->devType();
}

// Base class handler implementation
int KParts__MainWindow_SuperDevType(const KParts__MainWindow* self) {
    return self->KParts::MainWindow::devType();
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnDevType(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self)))
        vkpartsmainwindow->kparts__mainwindow_devtype_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_DevType_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_SetVisible(KParts__MainWindow* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KParts__MainWindow_SuperSetVisible(KParts__MainWindow* self, bool visible) {
    self->KParts::MainWindow::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSetVisible(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_setvisible_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KParts__MainWindow_SizeHint(const KParts__MainWindow* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KParts__MainWindow_SuperSizeHint(const KParts__MainWindow* self) {
    return new QSize(self->KParts::MainWindow::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSizeHint(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self)))
        vkpartsmainwindow->kparts__mainwindow_sizehint_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KParts__MainWindow_MinimumSizeHint(const KParts__MainWindow* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KParts__MainWindow_SuperMinimumSizeHint(const KParts__MainWindow* self) {
    return new QSize(self->KParts::MainWindow::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnMinimumSizeHint(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self)))
        vkpartsmainwindow->kparts__mainwindow_minimumsizehint_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KParts__MainWindow_HeightForWidth(const KParts__MainWindow* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KParts__MainWindow_SuperHeightForWidth(const KParts__MainWindow* self, int param1) {
    return self->KParts::MainWindow::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnHeightForWidth(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self)))
        vkpartsmainwindow->kparts__mainwindow_heightforwidth_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KParts__MainWindow_HasHeightForWidth(const KParts__MainWindow* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KParts__MainWindow_SuperHasHeightForWidth(const KParts__MainWindow* self) {
    return self->KParts::MainWindow::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnHasHeightForWidth(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self)))
        vkpartsmainwindow->kparts__mainwindow_hasheightforwidth_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KParts__MainWindow_PaintEngine(const KParts__MainWindow* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KParts__MainWindow_SuperPaintEngine(const KParts__MainWindow* self) {
    return self->KParts::MainWindow::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnPaintEngine(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self)))
        vkpartsmainwindow->kparts__mainwindow_paintengine_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_MousePressEvent(KParts__MainWindow* self, QMouseEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperMousePressEvent(KParts__MainWindow* self, QMouseEvent* event) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnMousePressEvent(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_mousepressevent_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_MouseReleaseEvent(KParts__MainWindow* self, QMouseEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperMouseReleaseEvent(KParts__MainWindow* self, QMouseEvent* event) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnMouseReleaseEvent(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_mousereleaseevent_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_MouseDoubleClickEvent(KParts__MainWindow* self, QMouseEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperMouseDoubleClickEvent(KParts__MainWindow* self, QMouseEvent* event) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnMouseDoubleClickEvent(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_mousedoubleclickevent_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_MouseMoveEvent(KParts__MainWindow* self, QMouseEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperMouseMoveEvent(KParts__MainWindow* self, QMouseEvent* event) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnMouseMoveEvent(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_mousemoveevent_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_WheelEvent(KParts__MainWindow* self, QWheelEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperWheelEvent(KParts__MainWindow* self, QWheelEvent* event) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnWheelEvent(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_wheelevent_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_KeyReleaseEvent(KParts__MainWindow* self, QKeyEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperKeyReleaseEvent(KParts__MainWindow* self, QKeyEvent* event) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnKeyReleaseEvent(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_keyreleaseevent_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_FocusInEvent(KParts__MainWindow* self, QFocusEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperFocusInEvent(KParts__MainWindow* self, QFocusEvent* event) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnFocusInEvent(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_focusinevent_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_FocusOutEvent(KParts__MainWindow* self, QFocusEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperFocusOutEvent(KParts__MainWindow* self, QFocusEvent* event) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnFocusOutEvent(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_focusoutevent_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_EnterEvent(KParts__MainWindow* self, QEnterEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperEnterEvent(KParts__MainWindow* self, QEnterEvent* event) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnEnterEvent(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_enterevent_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_LeaveEvent(KParts__MainWindow* self, QEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperLeaveEvent(KParts__MainWindow* self, QEvent* event) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnLeaveEvent(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_leaveevent_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_PaintEvent(KParts__MainWindow* self, QPaintEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperPaintEvent(KParts__MainWindow* self, QPaintEvent* event) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnPaintEvent(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_paintevent_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_MoveEvent(KParts__MainWindow* self, QMoveEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperMoveEvent(KParts__MainWindow* self, QMoveEvent* event) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnMoveEvent(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_moveevent_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_ResizeEvent(KParts__MainWindow* self, QResizeEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperResizeEvent(KParts__MainWindow* self, QResizeEvent* event) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnResizeEvent(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_resizeevent_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_TabletEvent(KParts__MainWindow* self, QTabletEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperTabletEvent(KParts__MainWindow* self, QTabletEvent* event) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnTabletEvent(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_tabletevent_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_ActionEvent(KParts__MainWindow* self, QActionEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperActionEvent(KParts__MainWindow* self, QActionEvent* event) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnActionEvent(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_actionevent_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_DragEnterEvent(KParts__MainWindow* self, QDragEnterEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperDragEnterEvent(KParts__MainWindow* self, QDragEnterEvent* event) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnDragEnterEvent(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_dragenterevent_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_DragMoveEvent(KParts__MainWindow* self, QDragMoveEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperDragMoveEvent(KParts__MainWindow* self, QDragMoveEvent* event) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnDragMoveEvent(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_dragmoveevent_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_DragLeaveEvent(KParts__MainWindow* self, QDragLeaveEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperDragLeaveEvent(KParts__MainWindow* self, QDragLeaveEvent* event) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnDragLeaveEvent(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_dragleaveevent_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_DropEvent(KParts__MainWindow* self, QDropEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperDropEvent(KParts__MainWindow* self, QDropEvent* event) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnDropEvent(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_dropevent_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_ShowEvent(KParts__MainWindow* self, QShowEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperShowEvent(KParts__MainWindow* self, QShowEvent* event) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnShowEvent(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_showevent_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_HideEvent(KParts__MainWindow* self, QHideEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperHideEvent(KParts__MainWindow* self, QHideEvent* event) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnHideEvent(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_hideevent_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KParts__MainWindow_NativeEvent(KParts__MainWindow* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        return vkpartsmainwindow->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KParts__MainWindow_SuperNativeEvent(KParts__MainWindow* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        return vkpartsmainwindow->KParts::MainWindow::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnNativeEvent(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_nativeevent_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_ChangeEvent(KParts__MainWindow* self, QEvent* param1) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperChangeEvent(KParts__MainWindow* self, QEvent* param1) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnChangeEvent(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_changeevent_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KParts__MainWindow_Metric(const KParts__MainWindow* self, int param1) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow) {
        return vkpartsmainwindow->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KParts__MainWindow_SuperMetric(const KParts__MainWindow* self, int param1) {
    if (auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self))) {
        return vkpartsmainwindow->KParts::MainWindow::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnMetric(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self)))
        vkpartsmainwindow->kparts__mainwindow_metric_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_Metric_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_InitPainter(const KParts__MainWindow* self, QPainter* painter) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow) {
        vkpartsmainwindow->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperInitPainter(const KParts__MainWindow* self, QPainter* painter) {
    if (auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self))) {
        vkpartsmainwindow->KParts::MainWindow::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnInitPainter(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self)))
        vkpartsmainwindow->kparts__mainwindow_initpainter_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KParts__MainWindow_Redirected(const KParts__MainWindow* self, QPoint* offset) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow) {
        return vkpartsmainwindow->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KParts__MainWindow_SuperRedirected(const KParts__MainWindow* self, QPoint* offset) {
    if (auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self))) {
        return vkpartsmainwindow->KParts::MainWindow::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnRedirected(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self)))
        vkpartsmainwindow->kparts__mainwindow_redirected_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KParts__MainWindow_SharedPainter(const KParts__MainWindow* self) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow) {
        return vkpartsmainwindow->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KParts__MainWindow_SuperSharedPainter(const KParts__MainWindow* self) {
    if (auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self))) {
        return vkpartsmainwindow->KParts::MainWindow::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSharedPainter(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self)))
        vkpartsmainwindow->kparts__mainwindow_sharedpainter_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_InputMethodEvent(KParts__MainWindow* self, QInputMethodEvent* param1) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperInputMethodEvent(KParts__MainWindow* self, QInputMethodEvent* param1) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnInputMethodEvent(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_inputmethodevent_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KParts__MainWindow_InputMethodQuery(const KParts__MainWindow* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KParts__MainWindow_SuperInputMethodQuery(const KParts__MainWindow* self, int param1) {
    return new QVariant(self->KParts::MainWindow::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnInputMethodQuery(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self)))
        vkpartsmainwindow->kparts__mainwindow_inputmethodquery_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KParts__MainWindow_FocusNextPrevChild(KParts__MainWindow* self, bool next) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        return vkpartsmainwindow->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KParts__MainWindow_SuperFocusNextPrevChild(KParts__MainWindow* self, bool next) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        return vkpartsmainwindow->KParts::MainWindow::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnFocusNextPrevChild(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_focusnextprevchild_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KParts__MainWindow_EventFilter(KParts__MainWindow* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KParts__MainWindow_SuperEventFilter(KParts__MainWindow* self, QObject* watched, QEvent* event) {
    return self->KParts::MainWindow::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnEventFilter(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_eventfilter_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_TimerEvent(KParts__MainWindow* self, QTimerEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperTimerEvent(KParts__MainWindow* self, QTimerEvent* event) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnTimerEvent(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_timerevent_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_ChildEvent(KParts__MainWindow* self, QChildEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperChildEvent(KParts__MainWindow* self, QChildEvent* event) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnChildEvent(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_childevent_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_CustomEvent(KParts__MainWindow* self, QEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperCustomEvent(KParts__MainWindow* self, QEvent* event) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnCustomEvent(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_customevent_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_ConnectNotify(KParts__MainWindow* self, const QMetaMethod* signal) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperConnectNotify(KParts__MainWindow* self, const QMetaMethod* signal) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnConnectNotify(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_connectnotify_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_DisconnectNotify(KParts__MainWindow* self, const QMetaMethod* signal) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperDisconnectNotify(KParts__MainWindow* self, const QMetaMethod* signal) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnDisconnectNotify(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_disconnectnotify_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KParts__MainWindow_ContainerTags(const KParts__MainWindow* self) {
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
libqt_list /* of libqt_string */ KParts__MainWindow_SuperContainerTags(const KParts__MainWindow* self) {
    QList<QString> _ret = self->KParts::MainWindow::containerTags();
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
void KParts__MainWindow_OnContainerTags(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self)))
        vkpartsmainwindow->kparts__mainwindow_containertags_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_ContainerTags_Callback>(slot);
}

// Derived class handler implementation
QWidget* KParts__MainWindow_CreateContainer(KParts__MainWindow* self, QWidget* parent, int index, const QDomElement* element, QAction** containerAction) {
    return self->createContainer(parent, static_cast<int>(index), *element, *containerAction);
}

// Base class handler implementation
QWidget* KParts__MainWindow_SuperCreateContainer(KParts__MainWindow* self, QWidget* parent, int index, const QDomElement* element, QAction** containerAction) {
    return self->KParts::MainWindow::createContainer(parent, static_cast<int>(index), *element, *containerAction);
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnCreateContainer(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_createcontainer_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_CreateContainer_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_RemoveContainer(KParts__MainWindow* self, QWidget* container, QWidget* parent, QDomElement* element, QAction* containerAction) {
    self->removeContainer(container, parent, *element, containerAction);
}

// Base class handler implementation
void KParts__MainWindow_SuperRemoveContainer(KParts__MainWindow* self, QWidget* container, QWidget* parent, QDomElement* element, QAction* containerAction) {
    self->KParts::MainWindow::removeContainer(container, parent, *element, containerAction);
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnRemoveContainer(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_removecontainer_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_RemoveContainer_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KParts__MainWindow_CustomTags(const KParts__MainWindow* self) {
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
libqt_list /* of libqt_string */ KParts__MainWindow_SuperCustomTags(const KParts__MainWindow* self) {
    QList<QString> _ret = self->KParts::MainWindow::customTags();
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
void KParts__MainWindow_OnCustomTags(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self)))
        vkpartsmainwindow->kparts__mainwindow_customtags_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_CustomTags_Callback>(slot);
}

// Derived class handler implementation
QAction* KParts__MainWindow_CreateCustomElement(KParts__MainWindow* self, QWidget* parent, int index, const QDomElement* element) {
    return self->createCustomElement(parent, static_cast<int>(index), *element);
}

// Base class handler implementation
QAction* KParts__MainWindow_SuperCreateCustomElement(KParts__MainWindow* self, QWidget* parent, int index, const QDomElement* element) {
    return self->KParts::MainWindow::createCustomElement(parent, static_cast<int>(index), *element);
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnCreateCustomElement(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_createcustomelement_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_CreateCustomElement_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_FinalizeGUI(KParts__MainWindow* self, KXMLGUIClient* client) {
    self->finalizeGUI(client);
}

// Base class handler implementation
void KParts__MainWindow_SuperFinalizeGUI(KParts__MainWindow* self, KXMLGUIClient* client) {
    self->KParts::MainWindow::finalizeGUI(client);
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnFinalizeGUI(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_finalizegui_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_FinalizeGUI_Callback>(slot);
}

// Derived class handler implementation
QAction* KParts__MainWindow_Action2(const KParts__MainWindow* self, const QDomElement* element) {
    return self->action(*element);
}

// Base class handler implementation
QAction* KParts__MainWindow_SuperAction2(const KParts__MainWindow* self, const QDomElement* element) {
    return self->KParts::MainWindow::action(*element);
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnAction2(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self)))
        vkpartsmainwindow->kparts__mainwindow_action2_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_Action2_Callback>(slot);
}

// Derived class handler implementation
KActionCollection* KParts__MainWindow_ActionCollection(const KParts__MainWindow* self) {
    return self->actionCollection();
}

// Base class handler implementation
KActionCollection* KParts__MainWindow_SuperActionCollection(const KParts__MainWindow* self) {
    return self->KParts::MainWindow::actionCollection();
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnActionCollection(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self)))
        vkpartsmainwindow->kparts__mainwindow_actioncollection_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_ActionCollection_Callback>(slot);
}

// Derived class handler implementation
libqt_string KParts__MainWindow_ComponentName(const KParts__MainWindow* self) {
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
libqt_string KParts__MainWindow_SuperComponentName(const KParts__MainWindow* self) {
    auto _ret = self->KParts::MainWindow::componentName();
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
void KParts__MainWindow_OnComponentName(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self)))
        vkpartsmainwindow->kparts__mainwindow_componentname_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_ComponentName_Callback>(slot);
}

// Derived class handler implementation
QDomDocument* KParts__MainWindow_DomDocument(const KParts__MainWindow* self) {
    return new QDomDocument(self->domDocument());
}

// Base class handler implementation
QDomDocument* KParts__MainWindow_SuperDomDocument(const KParts__MainWindow* self) {
    return new QDomDocument(self->KParts::MainWindow::domDocument());
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnDomDocument(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self)))
        vkpartsmainwindow->kparts__mainwindow_domdocument_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_DomDocument_Callback>(slot);
}

// Derived class handler implementation
libqt_string KParts__MainWindow_XmlFile(const KParts__MainWindow* self) {
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
libqt_string KParts__MainWindow_SuperXmlFile(const KParts__MainWindow* self) {
    auto _ret = self->KParts::MainWindow::xmlFile();
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
void KParts__MainWindow_OnXmlFile(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self)))
        vkpartsmainwindow->kparts__mainwindow_xmlfile_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_XmlFile_Callback>(slot);
}

// Derived class handler implementation
libqt_string KParts__MainWindow_LocalXMLFile(const KParts__MainWindow* self) {
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
libqt_string KParts__MainWindow_SuperLocalXMLFile(const KParts__MainWindow* self) {
    auto _ret = self->KParts::MainWindow::localXMLFile();
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
void KParts__MainWindow_OnLocalXMLFile(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self)))
        vkpartsmainwindow->kparts__mainwindow_localxmlfile_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_LocalXMLFile_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_SetComponentName(KParts__MainWindow* self, const libqt_string componentName, const libqt_string componentDisplayName) {
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    QString componentDisplayName_QString = QString::fromUtf8(componentDisplayName.data, componentDisplayName.len);
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->setComponentName(componentName_QString, componentDisplayName_QString);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::setComponentName called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperSetComponentName(KParts__MainWindow* self, const libqt_string componentName, const libqt_string componentDisplayName) {
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    QString componentDisplayName_QString = QString::fromUtf8(componentDisplayName.data, componentDisplayName.len);
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::setComponentName(componentName_QString, componentDisplayName_QString);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::setComponentName called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSetComponentName(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_setcomponentname_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SetComponentName_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_SetXMLFile(KParts__MainWindow* self, const libqt_string file, bool merge, bool setXMLDoc) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->setXMLFile(file_QString, merge, setXMLDoc);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::setXMLFile called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperSetXMLFile(KParts__MainWindow* self, const libqt_string file, bool merge, bool setXMLDoc) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::setXMLFile(file_QString, merge, setXMLDoc);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::setXMLFile called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSetXMLFile(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_setxmlfile_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SetXMLFile_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_SetLocalXMLFile(KParts__MainWindow* self, const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->setLocalXMLFile(file_QString);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::setLocalXMLFile called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperSetLocalXMLFile(KParts__MainWindow* self, const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::setLocalXMLFile(file_QString);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::setLocalXMLFile called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSetLocalXMLFile(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_setlocalxmlfile_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SetLocalXMLFile_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_SetXML(KParts__MainWindow* self, const libqt_string document, bool merge) {
    QString document_QString = QString::fromUtf8(document.data, document.len);
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->setXML(document_QString, merge);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::setXML called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperSetXML(KParts__MainWindow* self, const libqt_string document, bool merge) {
    QString document_QString = QString::fromUtf8(document.data, document.len);
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::setXML(document_QString, merge);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::setXML called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSetXML(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_setxml_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SetXML_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_SetDOMDocument(KParts__MainWindow* self, const QDomDocument* document, bool merge) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->setDOMDocument(*document, merge);
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::setDOMDocument called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperSetDOMDocument(KParts__MainWindow* self, const QDomDocument* document, bool merge) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::setDOMDocument(*document, merge);
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::setDOMDocument called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSetDOMDocument(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_setdomdocument_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SetDOMDocument_Callback>(slot);
}

// Derived class handler implementation
void KParts__MainWindow_StateChanged(KParts__MainWindow* self, const libqt_string newstate, int reverse) {
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow) {
        vkpartsmainwindow->stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    } else {
        qFatal("Error: Protected virtual method KParts::MainWindow::stateChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__MainWindow_SuperStateChanged(KParts__MainWindow* self, const libqt_string newstate, int reverse) {
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->KParts::MainWindow::stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    } else
        qFatal("Error: Protected virtual method KParts::MainWindow::stateChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnStateChanged(KParts__MainWindow* self, intptr_t slot) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self))
        vkpartsmainwindow->kparts__mainwindow_statechanged_callback = reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_StateChanged_Callback>(slot);
}

// Derived class protected handler implementation
void KParts__MainWindow_CreateGUI(KParts__MainWindow* self, KParts__Part* part) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->VirtualKPartsMainWindow::createGUI(part);
    } else
        qFatal("Error: Protected method KParts::MainWindow::createGUI called without a directly constructed type");
}

// Derived class protected handler implementation
void KParts__MainWindow_SetWindowTitleHandling(KParts__MainWindow* self, bool enabled) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->VirtualKPartsMainWindow::setWindowTitleHandling(enabled);
    } else
        qFatal("Error: Protected method KParts::MainWindow::setWindowTitleHandling called without a directly constructed type");
}

// Derived class protected handler implementation
void KParts__MainWindow_CheckAmbiguousShortcuts(KParts__MainWindow* self) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->VirtualKPartsMainWindow::checkAmbiguousShortcuts();
    } else
        qFatal("Error: Protected method KParts::MainWindow::checkAmbiguousShortcuts called without a directly constructed type");
}

// Derived class protected handler implementation
void KParts__MainWindow_SavePropertiesInternal(KParts__MainWindow* self, KConfig* param1, int param2) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->VirtualKPartsMainWindow::savePropertiesInternal(param1, static_cast<int>(param2));
    } else
        qFatal("Error: Protected method KParts::MainWindow::savePropertiesInternal called without a directly constructed type");
}

// Derived class protected handler implementation
bool KParts__MainWindow_ReadPropertiesInternal(KParts__MainWindow* self, KConfig* param1, int param2) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        return vkpartsmainwindow->VirtualKPartsMainWindow::readPropertiesInternal(param1, static_cast<int>(param2));
    } else
        qFatal("Error: Protected method KParts::MainWindow::readPropertiesInternal called without a directly constructed type");
}

// Derived class protected handler implementation
bool KParts__MainWindow_SettingsDirty(const KParts__MainWindow* self) {
    if (auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self))) {
        return vkpartsmainwindow->VirtualKPartsMainWindow::settingsDirty();
    } else
        qFatal("Error: Protected method KParts::MainWindow::settingsDirty called without a directly constructed type");
}

// Derived class protected handler implementation
void KParts__MainWindow_SaveAutoSaveSettings(KParts__MainWindow* self) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->VirtualKPartsMainWindow::saveAutoSaveSettings();
    } else
        qFatal("Error: Protected method KParts::MainWindow::saveAutoSaveSettings called without a directly constructed type");
}

// Derived class protected handler implementation
void KParts__MainWindow_UpdateMicroFocus(KParts__MainWindow* self) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->VirtualKPartsMainWindow::updateMicroFocus();
    } else
        qFatal("Error: Protected method KParts::MainWindow::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KParts__MainWindow_Create(KParts__MainWindow* self) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->VirtualKPartsMainWindow::create();
    } else
        qFatal("Error: Protected method KParts::MainWindow::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KParts__MainWindow_Destroy(KParts__MainWindow* self) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->VirtualKPartsMainWindow::destroy();
    } else
        qFatal("Error: Protected method KParts::MainWindow::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KParts__MainWindow_FocusNextChild(KParts__MainWindow* self) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        return vkpartsmainwindow->VirtualKPartsMainWindow::focusNextChild();
    } else
        qFatal("Error: Protected method KParts::MainWindow::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KParts__MainWindow_FocusPreviousChild(KParts__MainWindow* self) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        return vkpartsmainwindow->VirtualKPartsMainWindow::focusPreviousChild();
    } else
        qFatal("Error: Protected method KParts::MainWindow::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KParts__MainWindow_Sender(const KParts__MainWindow* self) {
    if (auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self))) {
        return vkpartsmainwindow->VirtualKPartsMainWindow::sender();
    } else
        qFatal("Error: Protected method KParts::MainWindow::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KParts__MainWindow_SenderSignalIndex(const KParts__MainWindow* self) {
    if (auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self))) {
        return vkpartsmainwindow->VirtualKPartsMainWindow::senderSignalIndex();
    } else
        qFatal("Error: Protected method KParts::MainWindow::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KParts__MainWindow_Receivers(const KParts__MainWindow* self, const char* signal) {
    if (auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self))) {
        return vkpartsmainwindow->VirtualKPartsMainWindow::receivers(signal);
    } else
        qFatal("Error: Protected method KParts::MainWindow::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KParts__MainWindow_IsSignalConnected(const KParts__MainWindow* self, const QMetaMethod* signal) {
    if (auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self))) {
        return vkpartsmainwindow->VirtualKPartsMainWindow::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KParts::MainWindow::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KParts__MainWindow_GetDecodedMetricF(const KParts__MainWindow* self, int metricA, int metricB) {
    if (auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self))) {
        return vkpartsmainwindow->VirtualKPartsMainWindow::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KParts::MainWindow::getDecodedMetricF called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string KParts__MainWindow_StandardsXmlFileLocation(KParts__MainWindow* self) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        auto _ret = vkpartsmainwindow->VirtualKPartsMainWindow::standardsXmlFileLocation();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method KParts::MainWindow::standardsXmlFileLocation called without a directly constructed type");
}

// Derived class protected handler implementation
void KParts__MainWindow_LoadStandardsXmlFile(KParts__MainWindow* self) {
    if (auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self)) {
        vkpartsmainwindow->VirtualKPartsMainWindow::loadStandardsXmlFile();
    } else
        qFatal("Error: Protected method KParts::MainWindow::loadStandardsXmlFile called without a directly constructed type");
}

void KParts__MainWindow_Delete(KParts__MainWindow* self) {
    delete self;
}
