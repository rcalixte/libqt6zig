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
#include <QByteArray>
#include <cstring>
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

QMetaObject* KXmlGuiWindow_MetaObject(const KXmlGuiWindow* self) {
    return (QMetaObject*)self->metaObject();
}

void* KXmlGuiWindow_Metacast(KXmlGuiWindow* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KXmlGuiWindow_Metacall(KXmlGuiWindow* self, int param1, int param2, void** param3) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKXmlGuiWindow*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KXmlGuiWindow_Tr(const char* s) {
    QString _ret = KXmlGuiWindow::tr(s);
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
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        return self->guiFactory();
    } else {
        return ((VirtualKXmlGuiWindow*)self)->guiFactory();
    }
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
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
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
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        self->applyMainWindowSettings(*config);
    } else {
        ((VirtualKXmlGuiWindow*)self)->applyMainWindowSettings(*config);
    }
}

void KXmlGuiWindow_SetCommandBarEnabled(KXmlGuiWindow* self, bool showCommandBar) {
    self->setCommandBarEnabled(showCommandBar);
}

bool KXmlGuiWindow_IsCommandBarEnabled(const KXmlGuiWindow* self) {
    return self->isCommandBarEnabled();
}

void KXmlGuiWindow_ConfigureToolbars(KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        self->configureToolbars();
    } else {
        ((VirtualKXmlGuiWindow*)self)->configureToolbars();
    }
}

void KXmlGuiWindow_SlotStateChanged(KXmlGuiWindow* self, const libqt_string newstate) {
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        self->slotStateChanged(newstate_QString);
    } else {
        ((VirtualKXmlGuiWindow*)self)->slotStateChanged(newstate_QString);
    }
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
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        return vkxmlguiwindow->event(event);
    }
    return {};
}

void KXmlGuiWindow_SaveNewToolbarConfig(KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->saveNewToolbarConfig();
    }
}

libqt_string KXmlGuiWindow_Tr2(const char* s, const char* c) {
    QString _ret = KXmlGuiWindow::tr(s, c);
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
    QString _ret = KXmlGuiWindow::tr(s, c, static_cast<int>(n));
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
int KXmlGuiWindow_QBaseMetacall(KXmlGuiWindow* self, int param1, int param2, void** param3) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_Metacall_IsBase(true);
        return vkxmlguiwindow->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KXmlGuiWindow::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnMetacall(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_Metacall_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
KXMLGUIFactory* KXmlGuiWindow_QBaseGuiFactory(KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_GuiFactory_IsBase(true);
        return vkxmlguiwindow->guiFactory();
    } else {
        return self->KXmlGuiWindow::guiFactory();
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnGuiFactory(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_GuiFactory_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_GuiFactory_Callback>(slot));
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseApplyMainWindowSettings(KXmlGuiWindow* self, const KConfigGroup* config) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_ApplyMainWindowSettings_IsBase(true);
        vkxmlguiwindow->applyMainWindowSettings(*config);
    } else {
        self->KXmlGuiWindow::applyMainWindowSettings(*config);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnApplyMainWindowSettings(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_ApplyMainWindowSettings_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_ApplyMainWindowSettings_Callback>(slot));
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseConfigureToolbars(KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_ConfigureToolbars_IsBase(true);
        vkxmlguiwindow->configureToolbars();
    } else {
        self->KXmlGuiWindow::configureToolbars();
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnConfigureToolbars(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_ConfigureToolbars_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_ConfigureToolbars_Callback>(slot));
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseSlotStateChanged(KXmlGuiWindow* self, const libqt_string newstate) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SlotStateChanged_IsBase(true);
        vkxmlguiwindow->slotStateChanged(newstate_QString);
    } else {
        self->KXmlGuiWindow::slotStateChanged(newstate_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnSlotStateChanged(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SlotStateChanged_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_SlotStateChanged_Callback>(slot));
    }
}

// Base class handler implementation
bool KXmlGuiWindow_QBaseEvent(KXmlGuiWindow* self, QEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_Event_IsBase(true);
        return vkxmlguiwindow->event(event);
    } else {
        return ((VirtualKXmlGuiWindow*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnEvent(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_Event_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_Event_Callback>(slot));
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseSaveNewToolbarConfig(KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SaveNewToolbarConfig_IsBase(true);
        vkxmlguiwindow->saveNewToolbarConfig();
    } else {
        ((VirtualKXmlGuiWindow*)self)->saveNewToolbarConfig();
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnSaveNewToolbarConfig(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SaveNewToolbarConfig_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_SaveNewToolbarConfig_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_SetCaption(KXmlGuiWindow* self, const libqt_string caption) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setCaption(caption_QString);
    } else {
        self->KXmlGuiWindow::setCaption(caption_QString);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseSetCaption(KXmlGuiWindow* self, const libqt_string caption) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SetCaption_IsBase(true);
        vkxmlguiwindow->setCaption(caption_QString);
    } else {
        self->KXmlGuiWindow::setCaption(caption_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnSetCaption(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SetCaption_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_SetCaption_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_SetPlainCaption(KXmlGuiWindow* self, const libqt_string caption) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setPlainCaption(caption_QString);
    } else {
        self->KXmlGuiWindow::setPlainCaption(caption_QString);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseSetPlainCaption(KXmlGuiWindow* self, const libqt_string caption) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SetPlainCaption_IsBase(true);
        vkxmlguiwindow->setPlainCaption(caption_QString);
    } else {
        self->KXmlGuiWindow::setPlainCaption(caption_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnSetPlainCaption(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SetPlainCaption_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_SetPlainCaption_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_KeyPressEvent(KXmlGuiWindow* self, QKeyEvent* keyEvent) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->keyPressEvent(keyEvent);
    } else {
        ((VirtualKXmlGuiWindow*)self)->keyPressEvent(keyEvent);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseKeyPressEvent(KXmlGuiWindow* self, QKeyEvent* keyEvent) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_KeyPressEvent_IsBase(true);
        vkxmlguiwindow->keyPressEvent(keyEvent);
    } else {
        ((VirtualKXmlGuiWindow*)self)->keyPressEvent(keyEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnKeyPressEvent(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_KeyPressEvent_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_CloseEvent(KXmlGuiWindow* self, QCloseEvent* param1) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->closeEvent(param1);
    } else {
        ((VirtualKXmlGuiWindow*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseCloseEvent(KXmlGuiWindow* self, QCloseEvent* param1) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_CloseEvent_IsBase(true);
        vkxmlguiwindow->closeEvent(param1);
    } else {
        ((VirtualKXmlGuiWindow*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnCloseEvent(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_CloseEvent_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KXmlGuiWindow_QueryClose(KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        return vkxmlguiwindow->queryClose();
    } else {
        return ((VirtualKXmlGuiWindow*)self)->queryClose();
    }
}

// Base class handler implementation
bool KXmlGuiWindow_QBaseQueryClose(KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_QueryClose_IsBase(true);
        return vkxmlguiwindow->queryClose();
    } else {
        return ((VirtualKXmlGuiWindow*)self)->queryClose();
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnQueryClose(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_QueryClose_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_QueryClose_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_SaveProperties(KXmlGuiWindow* self, KConfigGroup* param1) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->saveProperties(*param1);
    } else {
        ((VirtualKXmlGuiWindow*)self)->saveProperties(*param1);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseSaveProperties(KXmlGuiWindow* self, KConfigGroup* param1) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SaveProperties_IsBase(true);
        vkxmlguiwindow->saveProperties(*param1);
    } else {
        ((VirtualKXmlGuiWindow*)self)->saveProperties(*param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnSaveProperties(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SaveProperties_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_SaveProperties_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_ReadProperties(KXmlGuiWindow* self, const KConfigGroup* param1) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->readProperties(*param1);
    } else {
        ((VirtualKXmlGuiWindow*)self)->readProperties(*param1);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseReadProperties(KXmlGuiWindow* self, const KConfigGroup* param1) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_ReadProperties_IsBase(true);
        vkxmlguiwindow->readProperties(*param1);
    } else {
        ((VirtualKXmlGuiWindow*)self)->readProperties(*param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnReadProperties(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_ReadProperties_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_SaveGlobalProperties(KXmlGuiWindow* self, KConfig* sessionConfig) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->saveGlobalProperties(sessionConfig);
    } else {
        ((VirtualKXmlGuiWindow*)self)->saveGlobalProperties(sessionConfig);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseSaveGlobalProperties(KXmlGuiWindow* self, KConfig* sessionConfig) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SaveGlobalProperties_IsBase(true);
        vkxmlguiwindow->saveGlobalProperties(sessionConfig);
    } else {
        ((VirtualKXmlGuiWindow*)self)->saveGlobalProperties(sessionConfig);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnSaveGlobalProperties(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SaveGlobalProperties_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_SaveGlobalProperties_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_ReadGlobalProperties(KXmlGuiWindow* self, KConfig* sessionConfig) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->readGlobalProperties(sessionConfig);
    } else {
        ((VirtualKXmlGuiWindow*)self)->readGlobalProperties(sessionConfig);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseReadGlobalProperties(KXmlGuiWindow* self, KConfig* sessionConfig) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_ReadGlobalProperties_IsBase(true);
        vkxmlguiwindow->readGlobalProperties(sessionConfig);
    } else {
        ((VirtualKXmlGuiWindow*)self)->readGlobalProperties(sessionConfig);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnReadGlobalProperties(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_ReadGlobalProperties_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_ReadGlobalProperties_Callback>(slot));
    }
}

// Derived class handler implementation
QMenu* KXmlGuiWindow_CreatePopupMenu(KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        return vkxmlguiwindow->createPopupMenu();
    } else {
        return self->KXmlGuiWindow::createPopupMenu();
    }
}

// Base class handler implementation
QMenu* KXmlGuiWindow_QBaseCreatePopupMenu(KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_CreatePopupMenu_IsBase(true);
        return vkxmlguiwindow->createPopupMenu();
    } else {
        return self->KXmlGuiWindow::createPopupMenu();
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnCreatePopupMenu(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_CreatePopupMenu_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_CreatePopupMenu_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_ContextMenuEvent(KXmlGuiWindow* self, QContextMenuEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->contextMenuEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseContextMenuEvent(KXmlGuiWindow* self, QContextMenuEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_ContextMenuEvent_IsBase(true);
        vkxmlguiwindow->contextMenuEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnContextMenuEvent(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_ContextMenuEvent_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KXmlGuiWindow_DevType(const KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        return vkxmlguiwindow->devType();
    } else {
        return self->KXmlGuiWindow::devType();
    }
}

// Base class handler implementation
int KXmlGuiWindow_QBaseDevType(const KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_DevType_IsBase(true);
        return vkxmlguiwindow->devType();
    } else {
        return self->KXmlGuiWindow::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnDevType(const KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_DevType_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_SetVisible(KXmlGuiWindow* self, bool visible) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setVisible(visible);
    } else {
        self->KXmlGuiWindow::setVisible(visible);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseSetVisible(KXmlGuiWindow* self, bool visible) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SetVisible_IsBase(true);
        vkxmlguiwindow->setVisible(visible);
    } else {
        self->KXmlGuiWindow::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnSetVisible(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SetVisible_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KXmlGuiWindow_SizeHint(const KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        return new QSize(vkxmlguiwindow->sizeHint());
    } else {
        return new QSize(((VirtualKXmlGuiWindow*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KXmlGuiWindow_QBaseSizeHint(const KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SizeHint_IsBase(true);
        return new QSize(vkxmlguiwindow->sizeHint());
    } else {
        return new QSize(((VirtualKXmlGuiWindow*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnSizeHint(const KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SizeHint_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KXmlGuiWindow_MinimumSizeHint(const KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        return new QSize(vkxmlguiwindow->minimumSizeHint());
    } else {
        return new QSize(((VirtualKXmlGuiWindow*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KXmlGuiWindow_QBaseMinimumSizeHint(const KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_MinimumSizeHint_IsBase(true);
        return new QSize(vkxmlguiwindow->minimumSizeHint());
    } else {
        return new QSize(((VirtualKXmlGuiWindow*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnMinimumSizeHint(const KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_MinimumSizeHint_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KXmlGuiWindow_HeightForWidth(const KXmlGuiWindow* self, int param1) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        return vkxmlguiwindow->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KXmlGuiWindow::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KXmlGuiWindow_QBaseHeightForWidth(const KXmlGuiWindow* self, int param1) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_HeightForWidth_IsBase(true);
        return vkxmlguiwindow->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KXmlGuiWindow::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnHeightForWidth(const KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_HeightForWidth_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KXmlGuiWindow_HasHeightForWidth(const KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        return vkxmlguiwindow->hasHeightForWidth();
    } else {
        return self->KXmlGuiWindow::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KXmlGuiWindow_QBaseHasHeightForWidth(const KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_HasHeightForWidth_IsBase(true);
        return vkxmlguiwindow->hasHeightForWidth();
    } else {
        return self->KXmlGuiWindow::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnHasHeightForWidth(const KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_HasHeightForWidth_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KXmlGuiWindow_PaintEngine(const KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        return vkxmlguiwindow->paintEngine();
    } else {
        return self->KXmlGuiWindow::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KXmlGuiWindow_QBasePaintEngine(const KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_PaintEngine_IsBase(true);
        return vkxmlguiwindow->paintEngine();
    } else {
        return self->KXmlGuiWindow::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnPaintEngine(const KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_PaintEngine_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_MousePressEvent(KXmlGuiWindow* self, QMouseEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->mousePressEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseMousePressEvent(KXmlGuiWindow* self, QMouseEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_MousePressEvent_IsBase(true);
        vkxmlguiwindow->mousePressEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnMousePressEvent(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_MousePressEvent_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_MouseReleaseEvent(KXmlGuiWindow* self, QMouseEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->mouseReleaseEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseMouseReleaseEvent(KXmlGuiWindow* self, QMouseEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_MouseReleaseEvent_IsBase(true);
        vkxmlguiwindow->mouseReleaseEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnMouseReleaseEvent(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_MouseDoubleClickEvent(KXmlGuiWindow* self, QMouseEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseMouseDoubleClickEvent(KXmlGuiWindow* self, QMouseEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_MouseDoubleClickEvent_IsBase(true);
        vkxmlguiwindow->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnMouseDoubleClickEvent(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_MouseMoveEvent(KXmlGuiWindow* self, QMouseEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->mouseMoveEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseMouseMoveEvent(KXmlGuiWindow* self, QMouseEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_MouseMoveEvent_IsBase(true);
        vkxmlguiwindow->mouseMoveEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnMouseMoveEvent(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_MouseMoveEvent_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_WheelEvent(KXmlGuiWindow* self, QWheelEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->wheelEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseWheelEvent(KXmlGuiWindow* self, QWheelEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_WheelEvent_IsBase(true);
        vkxmlguiwindow->wheelEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnWheelEvent(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_WheelEvent_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_KeyReleaseEvent(KXmlGuiWindow* self, QKeyEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->keyReleaseEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseKeyReleaseEvent(KXmlGuiWindow* self, QKeyEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_KeyReleaseEvent_IsBase(true);
        vkxmlguiwindow->keyReleaseEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnKeyReleaseEvent(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_FocusInEvent(KXmlGuiWindow* self, QFocusEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->focusInEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseFocusInEvent(KXmlGuiWindow* self, QFocusEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_FocusInEvent_IsBase(true);
        vkxmlguiwindow->focusInEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnFocusInEvent(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_FocusInEvent_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_FocusOutEvent(KXmlGuiWindow* self, QFocusEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->focusOutEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseFocusOutEvent(KXmlGuiWindow* self, QFocusEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_FocusOutEvent_IsBase(true);
        vkxmlguiwindow->focusOutEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnFocusOutEvent(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_FocusOutEvent_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_EnterEvent(KXmlGuiWindow* self, QEnterEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->enterEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseEnterEvent(KXmlGuiWindow* self, QEnterEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_EnterEvent_IsBase(true);
        vkxmlguiwindow->enterEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnEnterEvent(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_EnterEvent_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_LeaveEvent(KXmlGuiWindow* self, QEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->leaveEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseLeaveEvent(KXmlGuiWindow* self, QEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_LeaveEvent_IsBase(true);
        vkxmlguiwindow->leaveEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnLeaveEvent(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_LeaveEvent_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_PaintEvent(KXmlGuiWindow* self, QPaintEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->paintEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBasePaintEvent(KXmlGuiWindow* self, QPaintEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_PaintEvent_IsBase(true);
        vkxmlguiwindow->paintEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnPaintEvent(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_PaintEvent_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_MoveEvent(KXmlGuiWindow* self, QMoveEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->moveEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseMoveEvent(KXmlGuiWindow* self, QMoveEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_MoveEvent_IsBase(true);
        vkxmlguiwindow->moveEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnMoveEvent(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_MoveEvent_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_ResizeEvent(KXmlGuiWindow* self, QResizeEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->resizeEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseResizeEvent(KXmlGuiWindow* self, QResizeEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_ResizeEvent_IsBase(true);
        vkxmlguiwindow->resizeEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnResizeEvent(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_ResizeEvent_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_TabletEvent(KXmlGuiWindow* self, QTabletEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->tabletEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseTabletEvent(KXmlGuiWindow* self, QTabletEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_TabletEvent_IsBase(true);
        vkxmlguiwindow->tabletEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnTabletEvent(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_TabletEvent_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_ActionEvent(KXmlGuiWindow* self, QActionEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->actionEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseActionEvent(KXmlGuiWindow* self, QActionEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_ActionEvent_IsBase(true);
        vkxmlguiwindow->actionEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnActionEvent(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_ActionEvent_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_DragEnterEvent(KXmlGuiWindow* self, QDragEnterEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->dragEnterEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseDragEnterEvent(KXmlGuiWindow* self, QDragEnterEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_DragEnterEvent_IsBase(true);
        vkxmlguiwindow->dragEnterEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnDragEnterEvent(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_DragEnterEvent_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_DragMoveEvent(KXmlGuiWindow* self, QDragMoveEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->dragMoveEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseDragMoveEvent(KXmlGuiWindow* self, QDragMoveEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_DragMoveEvent_IsBase(true);
        vkxmlguiwindow->dragMoveEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnDragMoveEvent(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_DragMoveEvent_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_DragLeaveEvent(KXmlGuiWindow* self, QDragLeaveEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->dragLeaveEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseDragLeaveEvent(KXmlGuiWindow* self, QDragLeaveEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_DragLeaveEvent_IsBase(true);
        vkxmlguiwindow->dragLeaveEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnDragLeaveEvent(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_DragLeaveEvent_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_DropEvent(KXmlGuiWindow* self, QDropEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->dropEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseDropEvent(KXmlGuiWindow* self, QDropEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_DropEvent_IsBase(true);
        vkxmlguiwindow->dropEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnDropEvent(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_DropEvent_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_ShowEvent(KXmlGuiWindow* self, QShowEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->showEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseShowEvent(KXmlGuiWindow* self, QShowEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_ShowEvent_IsBase(true);
        vkxmlguiwindow->showEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnShowEvent(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_ShowEvent_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_HideEvent(KXmlGuiWindow* self, QHideEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->hideEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseHideEvent(KXmlGuiWindow* self, QHideEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_HideEvent_IsBase(true);
        vkxmlguiwindow->hideEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnHideEvent(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_HideEvent_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KXmlGuiWindow_NativeEvent(KXmlGuiWindow* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        return vkxmlguiwindow->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKXmlGuiWindow*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KXmlGuiWindow_QBaseNativeEvent(KXmlGuiWindow* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_NativeEvent_IsBase(true);
        return vkxmlguiwindow->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKXmlGuiWindow*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnNativeEvent(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_NativeEvent_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_ChangeEvent(KXmlGuiWindow* self, QEvent* param1) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->changeEvent(param1);
    } else {
        ((VirtualKXmlGuiWindow*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseChangeEvent(KXmlGuiWindow* self, QEvent* param1) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_ChangeEvent_IsBase(true);
        vkxmlguiwindow->changeEvent(param1);
    } else {
        ((VirtualKXmlGuiWindow*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnChangeEvent(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_ChangeEvent_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KXmlGuiWindow_Metric(const KXmlGuiWindow* self, int param1) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        return vkxmlguiwindow->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKXmlGuiWindow*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KXmlGuiWindow_QBaseMetric(const KXmlGuiWindow* self, int param1) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_Metric_IsBase(true);
        return vkxmlguiwindow->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKXmlGuiWindow*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnMetric(const KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_Metric_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_InitPainter(const KXmlGuiWindow* self, QPainter* painter) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->initPainter(painter);
    } else {
        ((VirtualKXmlGuiWindow*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseInitPainter(const KXmlGuiWindow* self, QPainter* painter) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_InitPainter_IsBase(true);
        vkxmlguiwindow->initPainter(painter);
    } else {
        ((VirtualKXmlGuiWindow*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnInitPainter(const KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_InitPainter_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KXmlGuiWindow_Redirected(const KXmlGuiWindow* self, QPoint* offset) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        return vkxmlguiwindow->redirected(offset);
    } else {
        return ((VirtualKXmlGuiWindow*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KXmlGuiWindow_QBaseRedirected(const KXmlGuiWindow* self, QPoint* offset) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_Redirected_IsBase(true);
        return vkxmlguiwindow->redirected(offset);
    } else {
        return ((VirtualKXmlGuiWindow*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnRedirected(const KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_Redirected_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KXmlGuiWindow_SharedPainter(const KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        return vkxmlguiwindow->sharedPainter();
    } else {
        return ((VirtualKXmlGuiWindow*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KXmlGuiWindow_QBaseSharedPainter(const KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SharedPainter_IsBase(true);
        return vkxmlguiwindow->sharedPainter();
    } else {
        return ((VirtualKXmlGuiWindow*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnSharedPainter(const KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SharedPainter_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_InputMethodEvent(KXmlGuiWindow* self, QInputMethodEvent* param1) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->inputMethodEvent(param1);
    } else {
        ((VirtualKXmlGuiWindow*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseInputMethodEvent(KXmlGuiWindow* self, QInputMethodEvent* param1) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_InputMethodEvent_IsBase(true);
        vkxmlguiwindow->inputMethodEvent(param1);
    } else {
        ((VirtualKXmlGuiWindow*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnInputMethodEvent(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_InputMethodEvent_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KXmlGuiWindow_InputMethodQuery(const KXmlGuiWindow* self, int param1) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        return new QVariant(vkxmlguiwindow->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKXmlGuiWindow*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KXmlGuiWindow_QBaseInputMethodQuery(const KXmlGuiWindow* self, int param1) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_InputMethodQuery_IsBase(true);
        return new QVariant(vkxmlguiwindow->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKXmlGuiWindow*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnInputMethodQuery(const KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_InputMethodQuery_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KXmlGuiWindow_FocusNextPrevChild(KXmlGuiWindow* self, bool next) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        return vkxmlguiwindow->focusNextPrevChild(next);
    } else {
        return ((VirtualKXmlGuiWindow*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KXmlGuiWindow_QBaseFocusNextPrevChild(KXmlGuiWindow* self, bool next) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_FocusNextPrevChild_IsBase(true);
        return vkxmlguiwindow->focusNextPrevChild(next);
    } else {
        return ((VirtualKXmlGuiWindow*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnFocusNextPrevChild(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KXmlGuiWindow_EventFilter(KXmlGuiWindow* self, QObject* watched, QEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        return vkxmlguiwindow->eventFilter(watched, event);
    } else {
        return self->KXmlGuiWindow::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KXmlGuiWindow_QBaseEventFilter(KXmlGuiWindow* self, QObject* watched, QEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_EventFilter_IsBase(true);
        return vkxmlguiwindow->eventFilter(watched, event);
    } else {
        return self->KXmlGuiWindow::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnEventFilter(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_EventFilter_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_TimerEvent(KXmlGuiWindow* self, QTimerEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->timerEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseTimerEvent(KXmlGuiWindow* self, QTimerEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_TimerEvent_IsBase(true);
        vkxmlguiwindow->timerEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnTimerEvent(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_TimerEvent_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_ChildEvent(KXmlGuiWindow* self, QChildEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->childEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseChildEvent(KXmlGuiWindow* self, QChildEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_ChildEvent_IsBase(true);
        vkxmlguiwindow->childEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnChildEvent(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_ChildEvent_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_CustomEvent(KXmlGuiWindow* self, QEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->customEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseCustomEvent(KXmlGuiWindow* self, QEvent* event) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_CustomEvent_IsBase(true);
        vkxmlguiwindow->customEvent(event);
    } else {
        ((VirtualKXmlGuiWindow*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnCustomEvent(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_CustomEvent_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_ConnectNotify(KXmlGuiWindow* self, const QMetaMethod* signal) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->connectNotify(*signal);
    } else {
        ((VirtualKXmlGuiWindow*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseConnectNotify(KXmlGuiWindow* self, const QMetaMethod* signal) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_ConnectNotify_IsBase(true);
        vkxmlguiwindow->connectNotify(*signal);
    } else {
        ((VirtualKXmlGuiWindow*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnConnectNotify(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_ConnectNotify_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_DisconnectNotify(KXmlGuiWindow* self, const QMetaMethod* signal) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->disconnectNotify(*signal);
    } else {
        ((VirtualKXmlGuiWindow*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseDisconnectNotify(KXmlGuiWindow* self, const QMetaMethod* signal) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_DisconnectNotify_IsBase(true);
        vkxmlguiwindow->disconnectNotify(*signal);
    } else {
        ((VirtualKXmlGuiWindow*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnDisconnectNotify(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_DisconnectNotify_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KXmlGuiWindow_ContainerTags(const KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        QList<QString> _ret = vkxmlguiwindow->containerTags();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
    } else {
        QList<QString> _ret = self->KXmlGuiWindow::containerTags();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
}

// Base class handler implementation
libqt_list /* of libqt_string */ KXmlGuiWindow_QBaseContainerTags(const KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_ContainerTags_IsBase(true);
        QList<QString> _ret = vkxmlguiwindow->containerTags();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
    } else {
        QList<QString> _ret = self->KXmlGuiWindow::containerTags();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnContainerTags(const KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_ContainerTags_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_ContainerTags_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* KXmlGuiWindow_CreateContainer(KXmlGuiWindow* self, QWidget* parent, int index, const QDomElement* element, QAction** containerAction) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        return vkxmlguiwindow->createContainer(parent, static_cast<int>(index), *element, *containerAction);
    } else {
        return self->KXmlGuiWindow::createContainer(parent, static_cast<int>(index), *element, *containerAction);
    }
}

// Base class handler implementation
QWidget* KXmlGuiWindow_QBaseCreateContainer(KXmlGuiWindow* self, QWidget* parent, int index, const QDomElement* element, QAction** containerAction) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_CreateContainer_IsBase(true);
        return vkxmlguiwindow->createContainer(parent, static_cast<int>(index), *element, *containerAction);
    } else {
        return self->KXmlGuiWindow::createContainer(parent, static_cast<int>(index), *element, *containerAction);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnCreateContainer(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_CreateContainer_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_CreateContainer_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_RemoveContainer(KXmlGuiWindow* self, QWidget* container, QWidget* parent, QDomElement* element, QAction* containerAction) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->removeContainer(container, parent, *element, containerAction);
    } else {
        self->KXmlGuiWindow::removeContainer(container, parent, *element, containerAction);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseRemoveContainer(KXmlGuiWindow* self, QWidget* container, QWidget* parent, QDomElement* element, QAction* containerAction) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_RemoveContainer_IsBase(true);
        vkxmlguiwindow->removeContainer(container, parent, *element, containerAction);
    } else {
        self->KXmlGuiWindow::removeContainer(container, parent, *element, containerAction);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnRemoveContainer(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_RemoveContainer_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_RemoveContainer_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KXmlGuiWindow_CustomTags(const KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        QList<QString> _ret = vkxmlguiwindow->customTags();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
    } else {
        QList<QString> _ret = self->KXmlGuiWindow::customTags();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
}

// Base class handler implementation
libqt_list /* of libqt_string */ KXmlGuiWindow_QBaseCustomTags(const KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_CustomTags_IsBase(true);
        QList<QString> _ret = vkxmlguiwindow->customTags();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
    } else {
        QList<QString> _ret = self->KXmlGuiWindow::customTags();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnCustomTags(const KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_CustomTags_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_CustomTags_Callback>(slot));
    }
}

// Derived class handler implementation
QAction* KXmlGuiWindow_CreateCustomElement(KXmlGuiWindow* self, QWidget* parent, int index, const QDomElement* element) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        return vkxmlguiwindow->createCustomElement(parent, static_cast<int>(index), *element);
    } else {
        return self->KXmlGuiWindow::createCustomElement(parent, static_cast<int>(index), *element);
    }
}

// Base class handler implementation
QAction* KXmlGuiWindow_QBaseCreateCustomElement(KXmlGuiWindow* self, QWidget* parent, int index, const QDomElement* element) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_CreateCustomElement_IsBase(true);
        return vkxmlguiwindow->createCustomElement(parent, static_cast<int>(index), *element);
    } else {
        return self->KXmlGuiWindow::createCustomElement(parent, static_cast<int>(index), *element);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnCreateCustomElement(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_CreateCustomElement_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_CreateCustomElement_Callback>(slot));
    }
}

// Derived class handler implementation
QAction* KXmlGuiWindow_Action2(const KXmlGuiWindow* self, const QDomElement* element) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        return vkxmlguiwindow->action(*element);
    } else {
        return self->KXmlGuiWindow::action(*element);
    }
}

// Base class handler implementation
QAction* KXmlGuiWindow_QBaseAction2(const KXmlGuiWindow* self, const QDomElement* element) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_Action2_IsBase(true);
        return vkxmlguiwindow->action(*element);
    } else {
        return self->KXmlGuiWindow::action(*element);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnAction2(const KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_Action2_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_Action2_Callback>(slot));
    }
}

// Derived class handler implementation
KActionCollection* KXmlGuiWindow_ActionCollection(const KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        return vkxmlguiwindow->actionCollection();
    } else {
        return self->KXmlGuiWindow::actionCollection();
    }
}

// Base class handler implementation
KActionCollection* KXmlGuiWindow_QBaseActionCollection(const KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_ActionCollection_IsBase(true);
        return vkxmlguiwindow->actionCollection();
    } else {
        return self->KXmlGuiWindow::actionCollection();
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnActionCollection(const KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_ActionCollection_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_ActionCollection_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KXmlGuiWindow_ComponentName(const KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        QString _ret = vkxmlguiwindow->componentName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KXmlGuiWindow::componentName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string KXmlGuiWindow_QBaseComponentName(const KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_ComponentName_IsBase(true);
        QString _ret = vkxmlguiwindow->componentName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KXmlGuiWindow::componentName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnComponentName(const KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_ComponentName_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_ComponentName_Callback>(slot));
    }
}

// Derived class handler implementation
QDomDocument* KXmlGuiWindow_DomDocument(const KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        return new QDomDocument(vkxmlguiwindow->domDocument());
    } else {
        return new QDomDocument(((VirtualKXmlGuiWindow*)self)->domDocument());
    }
}

// Base class handler implementation
QDomDocument* KXmlGuiWindow_QBaseDomDocument(const KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_DomDocument_IsBase(true);
        return new QDomDocument(vkxmlguiwindow->domDocument());
    } else {
        return new QDomDocument(((VirtualKXmlGuiWindow*)self)->domDocument());
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnDomDocument(const KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_DomDocument_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_DomDocument_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KXmlGuiWindow_XmlFile(const KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        QString _ret = vkxmlguiwindow->xmlFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KXmlGuiWindow::xmlFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string KXmlGuiWindow_QBaseXmlFile(const KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_XmlFile_IsBase(true);
        QString _ret = vkxmlguiwindow->xmlFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KXmlGuiWindow::xmlFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnXmlFile(const KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_XmlFile_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_XmlFile_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KXmlGuiWindow_LocalXMLFile(const KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        QString _ret = vkxmlguiwindow->localXMLFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KXmlGuiWindow::localXMLFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string KXmlGuiWindow_QBaseLocalXMLFile(const KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_LocalXMLFile_IsBase(true);
        QString _ret = vkxmlguiwindow->localXMLFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KXmlGuiWindow::localXMLFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnLocalXMLFile(const KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_LocalXMLFile_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_LocalXMLFile_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_SetComponentName(KXmlGuiWindow* self, const libqt_string componentName, const libqt_string componentDisplayName) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    QString componentDisplayName_QString = QString::fromUtf8(componentDisplayName.data, componentDisplayName.len);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setComponentName(componentName_QString, componentDisplayName_QString);
    } else {
        ((VirtualKXmlGuiWindow*)self)->setComponentName(componentName_QString, componentDisplayName_QString);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseSetComponentName(KXmlGuiWindow* self, const libqt_string componentName, const libqt_string componentDisplayName) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    QString componentDisplayName_QString = QString::fromUtf8(componentDisplayName.data, componentDisplayName.len);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SetComponentName_IsBase(true);
        vkxmlguiwindow->setComponentName(componentName_QString, componentDisplayName_QString);
    } else {
        ((VirtualKXmlGuiWindow*)self)->setComponentName(componentName_QString, componentDisplayName_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnSetComponentName(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SetComponentName_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_SetComponentName_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_SetXMLFile(KXmlGuiWindow* self, const libqt_string file, bool merge, bool setXMLDoc) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setXMLFile(file_QString, merge, setXMLDoc);
    } else {
        ((VirtualKXmlGuiWindow*)self)->setXMLFile(file_QString, merge, setXMLDoc);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseSetXMLFile(KXmlGuiWindow* self, const libqt_string file, bool merge, bool setXMLDoc) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SetXMLFile_IsBase(true);
        vkxmlguiwindow->setXMLFile(file_QString, merge, setXMLDoc);
    } else {
        ((VirtualKXmlGuiWindow*)self)->setXMLFile(file_QString, merge, setXMLDoc);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnSetXMLFile(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SetXMLFile_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_SetXMLFile_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_SetLocalXMLFile(KXmlGuiWindow* self, const libqt_string file) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setLocalXMLFile(file_QString);
    } else {
        ((VirtualKXmlGuiWindow*)self)->setLocalXMLFile(file_QString);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseSetLocalXMLFile(KXmlGuiWindow* self, const libqt_string file) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SetLocalXMLFile_IsBase(true);
        vkxmlguiwindow->setLocalXMLFile(file_QString);
    } else {
        ((VirtualKXmlGuiWindow*)self)->setLocalXMLFile(file_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnSetLocalXMLFile(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SetLocalXMLFile_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_SetLocalXMLFile_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_SetXML(KXmlGuiWindow* self, const libqt_string document, bool merge) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    QString document_QString = QString::fromUtf8(document.data, document.len);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setXML(document_QString, merge);
    } else {
        ((VirtualKXmlGuiWindow*)self)->setXML(document_QString, merge);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseSetXML(KXmlGuiWindow* self, const libqt_string document, bool merge) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    QString document_QString = QString::fromUtf8(document.data, document.len);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SetXML_IsBase(true);
        vkxmlguiwindow->setXML(document_QString, merge);
    } else {
        ((VirtualKXmlGuiWindow*)self)->setXML(document_QString, merge);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnSetXML(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SetXML_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_SetXML_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_SetDOMDocument(KXmlGuiWindow* self, const QDomDocument* document, bool merge) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setDOMDocument(*document, merge);
    } else {
        ((VirtualKXmlGuiWindow*)self)->setDOMDocument(*document, merge);
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseSetDOMDocument(KXmlGuiWindow* self, const QDomDocument* document, bool merge) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SetDOMDocument_IsBase(true);
        vkxmlguiwindow->setDOMDocument(*document, merge);
    } else {
        ((VirtualKXmlGuiWindow*)self)->setDOMDocument(*document, merge);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnSetDOMDocument(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SetDOMDocument_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_SetDOMDocument_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_StateChanged(KXmlGuiWindow* self, const libqt_string newstate, int reverse) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    } else {
        ((VirtualKXmlGuiWindow*)self)->stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseStateChanged(KXmlGuiWindow* self, const libqt_string newstate, int reverse) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_StateChanged_IsBase(true);
        vkxmlguiwindow->stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    } else {
        ((VirtualKXmlGuiWindow*)self)->stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnStateChanged(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_StateChanged_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_StateChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_CheckAmbiguousShortcuts(KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->checkAmbiguousShortcuts();
    } else {
        ((VirtualKXmlGuiWindow*)self)->checkAmbiguousShortcuts();
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseCheckAmbiguousShortcuts(KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_CheckAmbiguousShortcuts_IsBase(true);
        vkxmlguiwindow->checkAmbiguousShortcuts();
    } else {
        ((VirtualKXmlGuiWindow*)self)->checkAmbiguousShortcuts();
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnCheckAmbiguousShortcuts(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_CheckAmbiguousShortcuts_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_CheckAmbiguousShortcuts_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_SavePropertiesInternal(KXmlGuiWindow* self, KConfig* param1, int param2) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->savePropertiesInternal(param1, static_cast<int>(param2));
    } else {
        ((VirtualKXmlGuiWindow*)self)->savePropertiesInternal(param1, static_cast<int>(param2));
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseSavePropertiesInternal(KXmlGuiWindow* self, KConfig* param1, int param2) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SavePropertiesInternal_IsBase(true);
        vkxmlguiwindow->savePropertiesInternal(param1, static_cast<int>(param2));
    } else {
        ((VirtualKXmlGuiWindow*)self)->savePropertiesInternal(param1, static_cast<int>(param2));
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnSavePropertiesInternal(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SavePropertiesInternal_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_SavePropertiesInternal_Callback>(slot));
    }
}

// Derived class handler implementation
bool KXmlGuiWindow_ReadPropertiesInternal(KXmlGuiWindow* self, KConfig* param1, int param2) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        return vkxmlguiwindow->readPropertiesInternal(param1, static_cast<int>(param2));
    } else {
        return ((VirtualKXmlGuiWindow*)self)->readPropertiesInternal(param1, static_cast<int>(param2));
    }
}

// Base class handler implementation
bool KXmlGuiWindow_QBaseReadPropertiesInternal(KXmlGuiWindow* self, KConfig* param1, int param2) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_ReadPropertiesInternal_IsBase(true);
        return vkxmlguiwindow->readPropertiesInternal(param1, static_cast<int>(param2));
    } else {
        return ((VirtualKXmlGuiWindow*)self)->readPropertiesInternal(param1, static_cast<int>(param2));
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnReadPropertiesInternal(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_ReadPropertiesInternal_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_ReadPropertiesInternal_Callback>(slot));
    }
}

// Derived class handler implementation
bool KXmlGuiWindow_SettingsDirty(const KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        return vkxmlguiwindow->settingsDirty();
    } else {
        return ((VirtualKXmlGuiWindow*)self)->settingsDirty();
    }
}

// Base class handler implementation
bool KXmlGuiWindow_QBaseSettingsDirty(const KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SettingsDirty_IsBase(true);
        return vkxmlguiwindow->settingsDirty();
    } else {
        return ((VirtualKXmlGuiWindow*)self)->settingsDirty();
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnSettingsDirty(const KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SettingsDirty_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_SettingsDirty_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_SaveAutoSaveSettings(KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->saveAutoSaveSettings();
    } else {
        ((VirtualKXmlGuiWindow*)self)->saveAutoSaveSettings();
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseSaveAutoSaveSettings(KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SaveAutoSaveSettings_IsBase(true);
        vkxmlguiwindow->saveAutoSaveSettings();
    } else {
        ((VirtualKXmlGuiWindow*)self)->saveAutoSaveSettings();
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnSaveAutoSaveSettings(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SaveAutoSaveSettings_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_SaveAutoSaveSettings_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_UpdateMicroFocus(KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->updateMicroFocus();
    } else {
        ((VirtualKXmlGuiWindow*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseUpdateMicroFocus(KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_UpdateMicroFocus_IsBase(true);
        vkxmlguiwindow->updateMicroFocus();
    } else {
        ((VirtualKXmlGuiWindow*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnUpdateMicroFocus(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_Create(KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->create();
    } else {
        ((VirtualKXmlGuiWindow*)self)->create();
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseCreate(KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_Create_IsBase(true);
        vkxmlguiwindow->create();
    } else {
        ((VirtualKXmlGuiWindow*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnCreate(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_Create_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_Destroy(KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->destroy();
    } else {
        ((VirtualKXmlGuiWindow*)self)->destroy();
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseDestroy(KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_Destroy_IsBase(true);
        vkxmlguiwindow->destroy();
    } else {
        ((VirtualKXmlGuiWindow*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnDestroy(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_Destroy_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KXmlGuiWindow_FocusNextChild(KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        return vkxmlguiwindow->focusNextChild();
    } else {
        return ((VirtualKXmlGuiWindow*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KXmlGuiWindow_QBaseFocusNextChild(KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_FocusNextChild_IsBase(true);
        return vkxmlguiwindow->focusNextChild();
    } else {
        return ((VirtualKXmlGuiWindow*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnFocusNextChild(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_FocusNextChild_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KXmlGuiWindow_FocusPreviousChild(KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        return vkxmlguiwindow->focusPreviousChild();
    } else {
        return ((VirtualKXmlGuiWindow*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KXmlGuiWindow_QBaseFocusPreviousChild(KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_FocusPreviousChild_IsBase(true);
        return vkxmlguiwindow->focusPreviousChild();
    } else {
        return ((VirtualKXmlGuiWindow*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnFocusPreviousChild(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_FocusPreviousChild_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KXmlGuiWindow_Sender(const KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        return vkxmlguiwindow->sender();
    } else {
        return ((VirtualKXmlGuiWindow*)self)->sender();
    }
}

// Base class handler implementation
QObject* KXmlGuiWindow_QBaseSender(const KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_Sender_IsBase(true);
        return vkxmlguiwindow->sender();
    } else {
        return ((VirtualKXmlGuiWindow*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnSender(const KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_Sender_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KXmlGuiWindow_SenderSignalIndex(const KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        return vkxmlguiwindow->senderSignalIndex();
    } else {
        return ((VirtualKXmlGuiWindow*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KXmlGuiWindow_QBaseSenderSignalIndex(const KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SenderSignalIndex_IsBase(true);
        return vkxmlguiwindow->senderSignalIndex();
    } else {
        return ((VirtualKXmlGuiWindow*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnSenderSignalIndex(const KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_SenderSignalIndex_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KXmlGuiWindow_Receivers(const KXmlGuiWindow* self, const char* signal) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        return vkxmlguiwindow->receivers(signal);
    } else {
        return ((VirtualKXmlGuiWindow*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KXmlGuiWindow_QBaseReceivers(const KXmlGuiWindow* self, const char* signal) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_Receivers_IsBase(true);
        return vkxmlguiwindow->receivers(signal);
    } else {
        return ((VirtualKXmlGuiWindow*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnReceivers(const KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_Receivers_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KXmlGuiWindow_IsSignalConnected(const KXmlGuiWindow* self, const QMetaMethod* signal) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        return vkxmlguiwindow->isSignalConnected(*signal);
    } else {
        return ((VirtualKXmlGuiWindow*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KXmlGuiWindow_QBaseIsSignalConnected(const KXmlGuiWindow* self, const QMetaMethod* signal) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_IsSignalConnected_IsBase(true);
        return vkxmlguiwindow->isSignalConnected(*signal);
    } else {
        return ((VirtualKXmlGuiWindow*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnIsSignalConnected(const KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_IsSignalConnected_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KXmlGuiWindow_GetDecodedMetricF(const KXmlGuiWindow* self, int metricA, int metricB) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        return vkxmlguiwindow->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKXmlGuiWindow*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KXmlGuiWindow_QBaseGetDecodedMetricF(const KXmlGuiWindow* self, int metricA, int metricB) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_GetDecodedMetricF_IsBase(true);
        return vkxmlguiwindow->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKXmlGuiWindow*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnGetDecodedMetricF(const KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = const_cast<VirtualKXmlGuiWindow*>(dynamic_cast<const VirtualKXmlGuiWindow*>(self));
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_GetDecodedMetricF_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KXmlGuiWindow_StandardsXmlFileLocation(KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        QString _ret = vkxmlguiwindow->standardsXmlFileLocation();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKXmlGuiWindow*)self)->standardsXmlFileLocation();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string KXmlGuiWindow_QBaseStandardsXmlFileLocation(KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_StandardsXmlFileLocation_IsBase(true);
        QString _ret = vkxmlguiwindow->standardsXmlFileLocation();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKXmlGuiWindow*)self)->standardsXmlFileLocation();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnStandardsXmlFileLocation(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_StandardsXmlFileLocation_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_StandardsXmlFileLocation_Callback>(slot));
    }
}

// Derived class handler implementation
void KXmlGuiWindow_LoadStandardsXmlFile(KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->loadStandardsXmlFile();
    } else {
        ((VirtualKXmlGuiWindow*)self)->loadStandardsXmlFile();
    }
}

// Base class handler implementation
void KXmlGuiWindow_QBaseLoadStandardsXmlFile(KXmlGuiWindow* self) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_LoadStandardsXmlFile_IsBase(true);
        vkxmlguiwindow->loadStandardsXmlFile();
    } else {
        ((VirtualKXmlGuiWindow*)self)->loadStandardsXmlFile();
    }
}

// Auxiliary method to allow providing re-implementation
void KXmlGuiWindow_OnLoadStandardsXmlFile(KXmlGuiWindow* self, intptr_t slot) {
    auto* vkxmlguiwindow = dynamic_cast<VirtualKXmlGuiWindow*>(self);
    if (vkxmlguiwindow && vkxmlguiwindow->isVirtualKXmlGuiWindow) {
        vkxmlguiwindow->setKXmlGuiWindow_LoadStandardsXmlFile_Callback(reinterpret_cast<VirtualKXmlGuiWindow::KXmlGuiWindow_LoadStandardsXmlFile_Callback>(slot));
    }
}

void KXmlGuiWindow_Delete(KXmlGuiWindow* self) {
    delete self;
}
