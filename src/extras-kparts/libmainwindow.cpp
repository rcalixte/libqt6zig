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
#include <QByteArray>
#include <cstring>
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

QMetaObject* KParts__MainWindow_MetaObject(const KParts__MainWindow* self) {
    return (QMetaObject*)self->metaObject();
}

void* KParts__MainWindow_Metacast(KParts__MainWindow* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KParts__MainWindow_Metacall(KParts__MainWindow* self, int param1, int param2, void** param3) {
    auto* vkparts__mainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkparts__mainwindow && vkparts__mainwindow->isVirtualKPartsMainWindow) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKPartsMainWindow*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KParts__MainWindow_Tr(const char* s) {
    QString _ret = KParts::MainWindow::tr(s);
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
    auto* vkparts__mainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkparts__mainwindow && vkparts__mainwindow->isVirtualKPartsMainWindow) {
        self->configureToolbars();
    } else {
        ((VirtualKPartsMainWindow*)self)->configureToolbars();
    }
}

void KParts__MainWindow_SlotSetStatusBarText(KParts__MainWindow* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    auto* vkparts__mainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkparts__mainwindow && vkparts__mainwindow->isVirtualKPartsMainWindow) {
        vkparts__mainwindow->slotSetStatusBarText(param1_QString);
    }
}

void KParts__MainWindow_SaveNewToolbarConfig(KParts__MainWindow* self) {
    auto* vkparts__mainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkparts__mainwindow && vkparts__mainwindow->isVirtualKPartsMainWindow) {
        vkparts__mainwindow->saveNewToolbarConfig();
    }
}

void KParts__MainWindow_CreateShellGUI(KParts__MainWindow* self, bool create) {
    auto* vkparts__mainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkparts__mainwindow && vkparts__mainwindow->isVirtualKPartsMainWindow) {
        vkparts__mainwindow->createShellGUI(create);
    }
}

libqt_string KParts__MainWindow_Tr2(const char* s, const char* c) {
    QString _ret = KParts::MainWindow::tr(s, c);
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
    QString _ret = KParts::MainWindow::tr(s, c, static_cast<int>(n));
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
int KParts__MainWindow_QBaseMetacall(KParts__MainWindow* self, int param1, int param2, void** param3) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_Metacall_IsBase(true);
        return vkpartsmainwindow->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KParts::MainWindow::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnMetacall(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_Metacall_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseConfigureToolbars(KParts__MainWindow* self) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_ConfigureToolbars_IsBase(true);
        vkpartsmainwindow->configureToolbars();
    } else {
        self->KParts::MainWindow::configureToolbars();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnConfigureToolbars(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_ConfigureToolbars_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_ConfigureToolbars_Callback>(slot));
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseSlotSetStatusBarText(KParts__MainWindow* self, const libqt_string param1) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SlotSetStatusBarText_IsBase(true);
        vkpartsmainwindow->slotSetStatusBarText(param1_QString);
    } else {
        ((VirtualKPartsMainWindow*)self)->slotSetStatusBarText(param1_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSlotSetStatusBarText(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SlotSetStatusBarText_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SlotSetStatusBarText_Callback>(slot));
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseSaveNewToolbarConfig(KParts__MainWindow* self) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SaveNewToolbarConfig_IsBase(true);
        vkpartsmainwindow->saveNewToolbarConfig();
    } else {
        ((VirtualKPartsMainWindow*)self)->saveNewToolbarConfig();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSaveNewToolbarConfig(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SaveNewToolbarConfig_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SaveNewToolbarConfig_Callback>(slot));
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseCreateShellGUI(KParts__MainWindow* self, bool create) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_CreateShellGUI_IsBase(true);
        vkpartsmainwindow->createShellGUI(create);
    } else {
        ((VirtualKPartsMainWindow*)self)->createShellGUI(create);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnCreateShellGUI(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_CreateShellGUI_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_CreateShellGUI_Callback>(slot));
    }
}

// Derived class handler implementation
KXMLGUIFactory* KParts__MainWindow_GuiFactory(KParts__MainWindow* self) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        return vkpartsmainwindow->guiFactory();
    } else {
        return self->KParts::MainWindow::guiFactory();
    }
}

// Base class handler implementation
KXMLGUIFactory* KParts__MainWindow_QBaseGuiFactory(KParts__MainWindow* self) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_GuiFactory_IsBase(true);
        return vkpartsmainwindow->guiFactory();
    } else {
        return self->KParts::MainWindow::guiFactory();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnGuiFactory(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_GuiFactory_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_GuiFactory_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_ApplyMainWindowSettings(KParts__MainWindow* self, const KConfigGroup* config) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->applyMainWindowSettings(*config);
    } else {
        self->KParts::MainWindow::applyMainWindowSettings(*config);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseApplyMainWindowSettings(KParts__MainWindow* self, const KConfigGroup* config) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_ApplyMainWindowSettings_IsBase(true);
        vkpartsmainwindow->applyMainWindowSettings(*config);
    } else {
        self->KParts::MainWindow::applyMainWindowSettings(*config);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnApplyMainWindowSettings(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_ApplyMainWindowSettings_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_ApplyMainWindowSettings_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_SlotStateChanged(KParts__MainWindow* self, const libqt_string newstate) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->slotStateChanged(newstate_QString);
    } else {
        self->KParts::MainWindow::slotStateChanged(newstate_QString);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseSlotStateChanged(KParts__MainWindow* self, const libqt_string newstate) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SlotStateChanged_IsBase(true);
        vkpartsmainwindow->slotStateChanged(newstate_QString);
    } else {
        self->KParts::MainWindow::slotStateChanged(newstate_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSlotStateChanged(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SlotStateChanged_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SlotStateChanged_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__MainWindow_Event(KParts__MainWindow* self, QEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        return vkpartsmainwindow->event(event);
    } else {
        return ((VirtualKPartsMainWindow*)self)->event(event);
    }
}

// Base class handler implementation
bool KParts__MainWindow_QBaseEvent(KParts__MainWindow* self, QEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_Event_IsBase(true);
        return vkpartsmainwindow->event(event);
    } else {
        return ((VirtualKPartsMainWindow*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnEvent(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_Event_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_SetCaption(KParts__MainWindow* self, const libqt_string caption) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setCaption(caption_QString);
    } else {
        self->KParts::MainWindow::setCaption(caption_QString);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseSetCaption(KParts__MainWindow* self, const libqt_string caption) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SetCaption_IsBase(true);
        vkpartsmainwindow->setCaption(caption_QString);
    } else {
        self->KParts::MainWindow::setCaption(caption_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSetCaption(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SetCaption_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SetCaption_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_SetPlainCaption(KParts__MainWindow* self, const libqt_string caption) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setPlainCaption(caption_QString);
    } else {
        self->KParts::MainWindow::setPlainCaption(caption_QString);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseSetPlainCaption(KParts__MainWindow* self, const libqt_string caption) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SetPlainCaption_IsBase(true);
        vkpartsmainwindow->setPlainCaption(caption_QString);
    } else {
        self->KParts::MainWindow::setPlainCaption(caption_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSetPlainCaption(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SetPlainCaption_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SetPlainCaption_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_KeyPressEvent(KParts__MainWindow* self, QKeyEvent* keyEvent) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->keyPressEvent(keyEvent);
    } else {
        ((VirtualKPartsMainWindow*)self)->keyPressEvent(keyEvent);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseKeyPressEvent(KParts__MainWindow* self, QKeyEvent* keyEvent) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_KeyPressEvent_IsBase(true);
        vkpartsmainwindow->keyPressEvent(keyEvent);
    } else {
        ((VirtualKPartsMainWindow*)self)->keyPressEvent(keyEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnKeyPressEvent(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_KeyPressEvent_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_CloseEvent(KParts__MainWindow* self, QCloseEvent* param1) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->closeEvent(param1);
    } else {
        ((VirtualKPartsMainWindow*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseCloseEvent(KParts__MainWindow* self, QCloseEvent* param1) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_CloseEvent_IsBase(true);
        vkpartsmainwindow->closeEvent(param1);
    } else {
        ((VirtualKPartsMainWindow*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnCloseEvent(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_CloseEvent_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__MainWindow_QueryClose(KParts__MainWindow* self) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        return vkpartsmainwindow->queryClose();
    } else {
        return ((VirtualKPartsMainWindow*)self)->queryClose();
    }
}

// Base class handler implementation
bool KParts__MainWindow_QBaseQueryClose(KParts__MainWindow* self) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_QueryClose_IsBase(true);
        return vkpartsmainwindow->queryClose();
    } else {
        return ((VirtualKPartsMainWindow*)self)->queryClose();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnQueryClose(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_QueryClose_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_QueryClose_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_SaveProperties(KParts__MainWindow* self, KConfigGroup* param1) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->saveProperties(*param1);
    } else {
        ((VirtualKPartsMainWindow*)self)->saveProperties(*param1);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseSaveProperties(KParts__MainWindow* self, KConfigGroup* param1) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SaveProperties_IsBase(true);
        vkpartsmainwindow->saveProperties(*param1);
    } else {
        ((VirtualKPartsMainWindow*)self)->saveProperties(*param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSaveProperties(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SaveProperties_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SaveProperties_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_ReadProperties(KParts__MainWindow* self, const KConfigGroup* param1) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->readProperties(*param1);
    } else {
        ((VirtualKPartsMainWindow*)self)->readProperties(*param1);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseReadProperties(KParts__MainWindow* self, const KConfigGroup* param1) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_ReadProperties_IsBase(true);
        vkpartsmainwindow->readProperties(*param1);
    } else {
        ((VirtualKPartsMainWindow*)self)->readProperties(*param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnReadProperties(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_ReadProperties_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_SaveGlobalProperties(KParts__MainWindow* self, KConfig* sessionConfig) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->saveGlobalProperties(sessionConfig);
    } else {
        ((VirtualKPartsMainWindow*)self)->saveGlobalProperties(sessionConfig);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseSaveGlobalProperties(KParts__MainWindow* self, KConfig* sessionConfig) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SaveGlobalProperties_IsBase(true);
        vkpartsmainwindow->saveGlobalProperties(sessionConfig);
    } else {
        ((VirtualKPartsMainWindow*)self)->saveGlobalProperties(sessionConfig);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSaveGlobalProperties(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SaveGlobalProperties_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SaveGlobalProperties_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_ReadGlobalProperties(KParts__MainWindow* self, KConfig* sessionConfig) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->readGlobalProperties(sessionConfig);
    } else {
        ((VirtualKPartsMainWindow*)self)->readGlobalProperties(sessionConfig);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseReadGlobalProperties(KParts__MainWindow* self, KConfig* sessionConfig) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_ReadGlobalProperties_IsBase(true);
        vkpartsmainwindow->readGlobalProperties(sessionConfig);
    } else {
        ((VirtualKPartsMainWindow*)self)->readGlobalProperties(sessionConfig);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnReadGlobalProperties(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_ReadGlobalProperties_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_ReadGlobalProperties_Callback>(slot));
    }
}

// Derived class handler implementation
QMenu* KParts__MainWindow_CreatePopupMenu(KParts__MainWindow* self) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        return vkpartsmainwindow->createPopupMenu();
    } else {
        return self->KParts::MainWindow::createPopupMenu();
    }
}

// Base class handler implementation
QMenu* KParts__MainWindow_QBaseCreatePopupMenu(KParts__MainWindow* self) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_CreatePopupMenu_IsBase(true);
        return vkpartsmainwindow->createPopupMenu();
    } else {
        return self->KParts::MainWindow::createPopupMenu();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnCreatePopupMenu(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_CreatePopupMenu_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_CreatePopupMenu_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_ContextMenuEvent(KParts__MainWindow* self, QContextMenuEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->contextMenuEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseContextMenuEvent(KParts__MainWindow* self, QContextMenuEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_ContextMenuEvent_IsBase(true);
        vkpartsmainwindow->contextMenuEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnContextMenuEvent(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_ContextMenuEvent_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KParts__MainWindow_DevType(const KParts__MainWindow* self) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        return vkpartsmainwindow->devType();
    } else {
        return self->KParts::MainWindow::devType();
    }
}

// Base class handler implementation
int KParts__MainWindow_QBaseDevType(const KParts__MainWindow* self) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_DevType_IsBase(true);
        return vkpartsmainwindow->devType();
    } else {
        return self->KParts::MainWindow::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnDevType(const KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_DevType_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_SetVisible(KParts__MainWindow* self, bool visible) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setVisible(visible);
    } else {
        self->KParts::MainWindow::setVisible(visible);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseSetVisible(KParts__MainWindow* self, bool visible) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SetVisible_IsBase(true);
        vkpartsmainwindow->setVisible(visible);
    } else {
        self->KParts::MainWindow::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSetVisible(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SetVisible_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KParts__MainWindow_SizeHint(const KParts__MainWindow* self) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        return new QSize(vkpartsmainwindow->sizeHint());
    } else {
        return new QSize(((VirtualKPartsMainWindow*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KParts__MainWindow_QBaseSizeHint(const KParts__MainWindow* self) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SizeHint_IsBase(true);
        return new QSize(vkpartsmainwindow->sizeHint());
    } else {
        return new QSize(((VirtualKPartsMainWindow*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSizeHint(const KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SizeHint_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KParts__MainWindow_MinimumSizeHint(const KParts__MainWindow* self) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        return new QSize(vkpartsmainwindow->minimumSizeHint());
    } else {
        return new QSize(((VirtualKPartsMainWindow*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KParts__MainWindow_QBaseMinimumSizeHint(const KParts__MainWindow* self) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_MinimumSizeHint_IsBase(true);
        return new QSize(vkpartsmainwindow->minimumSizeHint());
    } else {
        return new QSize(((VirtualKPartsMainWindow*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnMinimumSizeHint(const KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_MinimumSizeHint_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KParts__MainWindow_HeightForWidth(const KParts__MainWindow* self, int param1) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        return vkpartsmainwindow->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KParts::MainWindow::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KParts__MainWindow_QBaseHeightForWidth(const KParts__MainWindow* self, int param1) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_HeightForWidth_IsBase(true);
        return vkpartsmainwindow->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KParts::MainWindow::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnHeightForWidth(const KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_HeightForWidth_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__MainWindow_HasHeightForWidth(const KParts__MainWindow* self) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        return vkpartsmainwindow->hasHeightForWidth();
    } else {
        return self->KParts::MainWindow::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KParts__MainWindow_QBaseHasHeightForWidth(const KParts__MainWindow* self) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_HasHeightForWidth_IsBase(true);
        return vkpartsmainwindow->hasHeightForWidth();
    } else {
        return self->KParts::MainWindow::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnHasHeightForWidth(const KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_HasHeightForWidth_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KParts__MainWindow_PaintEngine(const KParts__MainWindow* self) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        return vkpartsmainwindow->paintEngine();
    } else {
        return self->KParts::MainWindow::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KParts__MainWindow_QBasePaintEngine(const KParts__MainWindow* self) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_PaintEngine_IsBase(true);
        return vkpartsmainwindow->paintEngine();
    } else {
        return self->KParts::MainWindow::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnPaintEngine(const KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_PaintEngine_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_MousePressEvent(KParts__MainWindow* self, QMouseEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->mousePressEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseMousePressEvent(KParts__MainWindow* self, QMouseEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_MousePressEvent_IsBase(true);
        vkpartsmainwindow->mousePressEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnMousePressEvent(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_MousePressEvent_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_MouseReleaseEvent(KParts__MainWindow* self, QMouseEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->mouseReleaseEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseMouseReleaseEvent(KParts__MainWindow* self, QMouseEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_MouseReleaseEvent_IsBase(true);
        vkpartsmainwindow->mouseReleaseEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnMouseReleaseEvent(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_MouseDoubleClickEvent(KParts__MainWindow* self, QMouseEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseMouseDoubleClickEvent(KParts__MainWindow* self, QMouseEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_MouseDoubleClickEvent_IsBase(true);
        vkpartsmainwindow->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnMouseDoubleClickEvent(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_MouseMoveEvent(KParts__MainWindow* self, QMouseEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->mouseMoveEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseMouseMoveEvent(KParts__MainWindow* self, QMouseEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_MouseMoveEvent_IsBase(true);
        vkpartsmainwindow->mouseMoveEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnMouseMoveEvent(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_MouseMoveEvent_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_WheelEvent(KParts__MainWindow* self, QWheelEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->wheelEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseWheelEvent(KParts__MainWindow* self, QWheelEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_WheelEvent_IsBase(true);
        vkpartsmainwindow->wheelEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnWheelEvent(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_WheelEvent_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_KeyReleaseEvent(KParts__MainWindow* self, QKeyEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->keyReleaseEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseKeyReleaseEvent(KParts__MainWindow* self, QKeyEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_KeyReleaseEvent_IsBase(true);
        vkpartsmainwindow->keyReleaseEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnKeyReleaseEvent(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_FocusInEvent(KParts__MainWindow* self, QFocusEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->focusInEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseFocusInEvent(KParts__MainWindow* self, QFocusEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_FocusInEvent_IsBase(true);
        vkpartsmainwindow->focusInEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnFocusInEvent(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_FocusInEvent_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_FocusOutEvent(KParts__MainWindow* self, QFocusEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->focusOutEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseFocusOutEvent(KParts__MainWindow* self, QFocusEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_FocusOutEvent_IsBase(true);
        vkpartsmainwindow->focusOutEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnFocusOutEvent(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_FocusOutEvent_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_EnterEvent(KParts__MainWindow* self, QEnterEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->enterEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseEnterEvent(KParts__MainWindow* self, QEnterEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_EnterEvent_IsBase(true);
        vkpartsmainwindow->enterEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnEnterEvent(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_EnterEvent_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_LeaveEvent(KParts__MainWindow* self, QEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->leaveEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseLeaveEvent(KParts__MainWindow* self, QEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_LeaveEvent_IsBase(true);
        vkpartsmainwindow->leaveEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnLeaveEvent(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_LeaveEvent_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_PaintEvent(KParts__MainWindow* self, QPaintEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->paintEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBasePaintEvent(KParts__MainWindow* self, QPaintEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_PaintEvent_IsBase(true);
        vkpartsmainwindow->paintEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnPaintEvent(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_PaintEvent_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_MoveEvent(KParts__MainWindow* self, QMoveEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->moveEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseMoveEvent(KParts__MainWindow* self, QMoveEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_MoveEvent_IsBase(true);
        vkpartsmainwindow->moveEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnMoveEvent(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_MoveEvent_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_ResizeEvent(KParts__MainWindow* self, QResizeEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->resizeEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseResizeEvent(KParts__MainWindow* self, QResizeEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_ResizeEvent_IsBase(true);
        vkpartsmainwindow->resizeEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnResizeEvent(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_ResizeEvent_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_TabletEvent(KParts__MainWindow* self, QTabletEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->tabletEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseTabletEvent(KParts__MainWindow* self, QTabletEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_TabletEvent_IsBase(true);
        vkpartsmainwindow->tabletEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnTabletEvent(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_TabletEvent_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_ActionEvent(KParts__MainWindow* self, QActionEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->actionEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseActionEvent(KParts__MainWindow* self, QActionEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_ActionEvent_IsBase(true);
        vkpartsmainwindow->actionEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnActionEvent(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_ActionEvent_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_DragEnterEvent(KParts__MainWindow* self, QDragEnterEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->dragEnterEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseDragEnterEvent(KParts__MainWindow* self, QDragEnterEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_DragEnterEvent_IsBase(true);
        vkpartsmainwindow->dragEnterEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnDragEnterEvent(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_DragEnterEvent_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_DragMoveEvent(KParts__MainWindow* self, QDragMoveEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->dragMoveEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseDragMoveEvent(KParts__MainWindow* self, QDragMoveEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_DragMoveEvent_IsBase(true);
        vkpartsmainwindow->dragMoveEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnDragMoveEvent(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_DragMoveEvent_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_DragLeaveEvent(KParts__MainWindow* self, QDragLeaveEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->dragLeaveEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseDragLeaveEvent(KParts__MainWindow* self, QDragLeaveEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_DragLeaveEvent_IsBase(true);
        vkpartsmainwindow->dragLeaveEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnDragLeaveEvent(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_DragLeaveEvent_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_DropEvent(KParts__MainWindow* self, QDropEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->dropEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseDropEvent(KParts__MainWindow* self, QDropEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_DropEvent_IsBase(true);
        vkpartsmainwindow->dropEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnDropEvent(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_DropEvent_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_ShowEvent(KParts__MainWindow* self, QShowEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->showEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseShowEvent(KParts__MainWindow* self, QShowEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_ShowEvent_IsBase(true);
        vkpartsmainwindow->showEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnShowEvent(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_ShowEvent_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_HideEvent(KParts__MainWindow* self, QHideEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->hideEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseHideEvent(KParts__MainWindow* self, QHideEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_HideEvent_IsBase(true);
        vkpartsmainwindow->hideEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnHideEvent(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_HideEvent_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__MainWindow_NativeEvent(KParts__MainWindow* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        return vkpartsmainwindow->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKPartsMainWindow*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KParts__MainWindow_QBaseNativeEvent(KParts__MainWindow* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_NativeEvent_IsBase(true);
        return vkpartsmainwindow->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKPartsMainWindow*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnNativeEvent(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_NativeEvent_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_ChangeEvent(KParts__MainWindow* self, QEvent* param1) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->changeEvent(param1);
    } else {
        ((VirtualKPartsMainWindow*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseChangeEvent(KParts__MainWindow* self, QEvent* param1) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_ChangeEvent_IsBase(true);
        vkpartsmainwindow->changeEvent(param1);
    } else {
        ((VirtualKPartsMainWindow*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnChangeEvent(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_ChangeEvent_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KParts__MainWindow_Metric(const KParts__MainWindow* self, int param1) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        return vkpartsmainwindow->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKPartsMainWindow*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KParts__MainWindow_QBaseMetric(const KParts__MainWindow* self, int param1) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_Metric_IsBase(true);
        return vkpartsmainwindow->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKPartsMainWindow*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnMetric(const KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_Metric_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_InitPainter(const KParts__MainWindow* self, QPainter* painter) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->initPainter(painter);
    } else {
        ((VirtualKPartsMainWindow*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseInitPainter(const KParts__MainWindow* self, QPainter* painter) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_InitPainter_IsBase(true);
        vkpartsmainwindow->initPainter(painter);
    } else {
        ((VirtualKPartsMainWindow*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnInitPainter(const KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_InitPainter_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KParts__MainWindow_Redirected(const KParts__MainWindow* self, QPoint* offset) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        return vkpartsmainwindow->redirected(offset);
    } else {
        return ((VirtualKPartsMainWindow*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KParts__MainWindow_QBaseRedirected(const KParts__MainWindow* self, QPoint* offset) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_Redirected_IsBase(true);
        return vkpartsmainwindow->redirected(offset);
    } else {
        return ((VirtualKPartsMainWindow*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnRedirected(const KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_Redirected_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KParts__MainWindow_SharedPainter(const KParts__MainWindow* self) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        return vkpartsmainwindow->sharedPainter();
    } else {
        return ((VirtualKPartsMainWindow*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KParts__MainWindow_QBaseSharedPainter(const KParts__MainWindow* self) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SharedPainter_IsBase(true);
        return vkpartsmainwindow->sharedPainter();
    } else {
        return ((VirtualKPartsMainWindow*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSharedPainter(const KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SharedPainter_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_InputMethodEvent(KParts__MainWindow* self, QInputMethodEvent* param1) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->inputMethodEvent(param1);
    } else {
        ((VirtualKPartsMainWindow*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseInputMethodEvent(KParts__MainWindow* self, QInputMethodEvent* param1) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_InputMethodEvent_IsBase(true);
        vkpartsmainwindow->inputMethodEvent(param1);
    } else {
        ((VirtualKPartsMainWindow*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnInputMethodEvent(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_InputMethodEvent_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KParts__MainWindow_InputMethodQuery(const KParts__MainWindow* self, int param1) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        return new QVariant(vkpartsmainwindow->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKPartsMainWindow*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KParts__MainWindow_QBaseInputMethodQuery(const KParts__MainWindow* self, int param1) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_InputMethodQuery_IsBase(true);
        return new QVariant(vkpartsmainwindow->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKPartsMainWindow*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnInputMethodQuery(const KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_InputMethodQuery_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__MainWindow_FocusNextPrevChild(KParts__MainWindow* self, bool next) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        return vkpartsmainwindow->focusNextPrevChild(next);
    } else {
        return ((VirtualKPartsMainWindow*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KParts__MainWindow_QBaseFocusNextPrevChild(KParts__MainWindow* self, bool next) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_FocusNextPrevChild_IsBase(true);
        return vkpartsmainwindow->focusNextPrevChild(next);
    } else {
        return ((VirtualKPartsMainWindow*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnFocusNextPrevChild(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__MainWindow_EventFilter(KParts__MainWindow* self, QObject* watched, QEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        return vkpartsmainwindow->eventFilter(watched, event);
    } else {
        return self->KParts::MainWindow::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KParts__MainWindow_QBaseEventFilter(KParts__MainWindow* self, QObject* watched, QEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_EventFilter_IsBase(true);
        return vkpartsmainwindow->eventFilter(watched, event);
    } else {
        return self->KParts::MainWindow::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnEventFilter(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_EventFilter_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_TimerEvent(KParts__MainWindow* self, QTimerEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->timerEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseTimerEvent(KParts__MainWindow* self, QTimerEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_TimerEvent_IsBase(true);
        vkpartsmainwindow->timerEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnTimerEvent(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_TimerEvent_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_ChildEvent(KParts__MainWindow* self, QChildEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->childEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseChildEvent(KParts__MainWindow* self, QChildEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_ChildEvent_IsBase(true);
        vkpartsmainwindow->childEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnChildEvent(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_ChildEvent_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_CustomEvent(KParts__MainWindow* self, QEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->customEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseCustomEvent(KParts__MainWindow* self, QEvent* event) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_CustomEvent_IsBase(true);
        vkpartsmainwindow->customEvent(event);
    } else {
        ((VirtualKPartsMainWindow*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnCustomEvent(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_CustomEvent_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_ConnectNotify(KParts__MainWindow* self, const QMetaMethod* signal) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->connectNotify(*signal);
    } else {
        ((VirtualKPartsMainWindow*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseConnectNotify(KParts__MainWindow* self, const QMetaMethod* signal) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_ConnectNotify_IsBase(true);
        vkpartsmainwindow->connectNotify(*signal);
    } else {
        ((VirtualKPartsMainWindow*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnConnectNotify(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_ConnectNotify_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_DisconnectNotify(KParts__MainWindow* self, const QMetaMethod* signal) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->disconnectNotify(*signal);
    } else {
        ((VirtualKPartsMainWindow*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseDisconnectNotify(KParts__MainWindow* self, const QMetaMethod* signal) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_DisconnectNotify_IsBase(true);
        vkpartsmainwindow->disconnectNotify(*signal);
    } else {
        ((VirtualKPartsMainWindow*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnDisconnectNotify(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_DisconnectNotify_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KParts__MainWindow_ContainerTags(const KParts__MainWindow* self) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        QList<QString> _ret = vkpartsmainwindow->containerTags();
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
        QList<QString> _ret = self->KParts::MainWindow::containerTags();
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
libqt_list /* of libqt_string */ KParts__MainWindow_QBaseContainerTags(const KParts__MainWindow* self) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_ContainerTags_IsBase(true);
        QList<QString> _ret = vkpartsmainwindow->containerTags();
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
        QList<QString> _ret = self->KParts::MainWindow::containerTags();
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
void KParts__MainWindow_OnContainerTags(const KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_ContainerTags_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_ContainerTags_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* KParts__MainWindow_CreateContainer(KParts__MainWindow* self, QWidget* parent, int index, const QDomElement* element, QAction** containerAction) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        return vkpartsmainwindow->createContainer(parent, static_cast<int>(index), *element, *containerAction);
    } else {
        return self->KParts::MainWindow::createContainer(parent, static_cast<int>(index), *element, *containerAction);
    }
}

// Base class handler implementation
QWidget* KParts__MainWindow_QBaseCreateContainer(KParts__MainWindow* self, QWidget* parent, int index, const QDomElement* element, QAction** containerAction) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_CreateContainer_IsBase(true);
        return vkpartsmainwindow->createContainer(parent, static_cast<int>(index), *element, *containerAction);
    } else {
        return self->KParts::MainWindow::createContainer(parent, static_cast<int>(index), *element, *containerAction);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnCreateContainer(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_CreateContainer_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_CreateContainer_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_RemoveContainer(KParts__MainWindow* self, QWidget* container, QWidget* parent, QDomElement* element, QAction* containerAction) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->removeContainer(container, parent, *element, containerAction);
    } else {
        self->KParts::MainWindow::removeContainer(container, parent, *element, containerAction);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseRemoveContainer(KParts__MainWindow* self, QWidget* container, QWidget* parent, QDomElement* element, QAction* containerAction) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_RemoveContainer_IsBase(true);
        vkpartsmainwindow->removeContainer(container, parent, *element, containerAction);
    } else {
        self->KParts::MainWindow::removeContainer(container, parent, *element, containerAction);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnRemoveContainer(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_RemoveContainer_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_RemoveContainer_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KParts__MainWindow_CustomTags(const KParts__MainWindow* self) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        QList<QString> _ret = vkpartsmainwindow->customTags();
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
        QList<QString> _ret = self->KParts::MainWindow::customTags();
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
libqt_list /* of libqt_string */ KParts__MainWindow_QBaseCustomTags(const KParts__MainWindow* self) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_CustomTags_IsBase(true);
        QList<QString> _ret = vkpartsmainwindow->customTags();
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
        QList<QString> _ret = self->KParts::MainWindow::customTags();
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
void KParts__MainWindow_OnCustomTags(const KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_CustomTags_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_CustomTags_Callback>(slot));
    }
}

// Derived class handler implementation
QAction* KParts__MainWindow_CreateCustomElement(KParts__MainWindow* self, QWidget* parent, int index, const QDomElement* element) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        return vkpartsmainwindow->createCustomElement(parent, static_cast<int>(index), *element);
    } else {
        return self->KParts::MainWindow::createCustomElement(parent, static_cast<int>(index), *element);
    }
}

// Base class handler implementation
QAction* KParts__MainWindow_QBaseCreateCustomElement(KParts__MainWindow* self, QWidget* parent, int index, const QDomElement* element) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_CreateCustomElement_IsBase(true);
        return vkpartsmainwindow->createCustomElement(parent, static_cast<int>(index), *element);
    } else {
        return self->KParts::MainWindow::createCustomElement(parent, static_cast<int>(index), *element);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnCreateCustomElement(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_CreateCustomElement_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_CreateCustomElement_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_FinalizeGUI(KParts__MainWindow* self, KXMLGUIClient* client) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->finalizeGUI(client);
    } else {
        self->KParts::MainWindow::finalizeGUI(client);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseFinalizeGUI(KParts__MainWindow* self, KXMLGUIClient* client) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_FinalizeGUI_IsBase(true);
        vkpartsmainwindow->finalizeGUI(client);
    } else {
        self->KParts::MainWindow::finalizeGUI(client);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnFinalizeGUI(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_FinalizeGUI_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_FinalizeGUI_Callback>(slot));
    }
}

// Derived class handler implementation
QAction* KParts__MainWindow_Action2(const KParts__MainWindow* self, const QDomElement* element) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        return vkpartsmainwindow->action(*element);
    } else {
        return self->KParts::MainWindow::action(*element);
    }
}

// Base class handler implementation
QAction* KParts__MainWindow_QBaseAction2(const KParts__MainWindow* self, const QDomElement* element) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_Action2_IsBase(true);
        return vkpartsmainwindow->action(*element);
    } else {
        return self->KParts::MainWindow::action(*element);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnAction2(const KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_Action2_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_Action2_Callback>(slot));
    }
}

// Derived class handler implementation
KActionCollection* KParts__MainWindow_ActionCollection(const KParts__MainWindow* self) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        return vkpartsmainwindow->actionCollection();
    } else {
        return self->KParts::MainWindow::actionCollection();
    }
}

// Base class handler implementation
KActionCollection* KParts__MainWindow_QBaseActionCollection(const KParts__MainWindow* self) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_ActionCollection_IsBase(true);
        return vkpartsmainwindow->actionCollection();
    } else {
        return self->KParts::MainWindow::actionCollection();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnActionCollection(const KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_ActionCollection_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_ActionCollection_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KParts__MainWindow_ComponentName(const KParts__MainWindow* self) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        QString _ret = vkpartsmainwindow->componentName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KParts::MainWindow::componentName();
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
libqt_string KParts__MainWindow_QBaseComponentName(const KParts__MainWindow* self) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_ComponentName_IsBase(true);
        QString _ret = vkpartsmainwindow->componentName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KParts::MainWindow::componentName();
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
void KParts__MainWindow_OnComponentName(const KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_ComponentName_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_ComponentName_Callback>(slot));
    }
}

// Derived class handler implementation
QDomDocument* KParts__MainWindow_DomDocument(const KParts__MainWindow* self) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        return new QDomDocument(vkpartsmainwindow->domDocument());
    } else {
        return new QDomDocument(((VirtualKPartsMainWindow*)self)->domDocument());
    }
}

// Base class handler implementation
QDomDocument* KParts__MainWindow_QBaseDomDocument(const KParts__MainWindow* self) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_DomDocument_IsBase(true);
        return new QDomDocument(vkpartsmainwindow->domDocument());
    } else {
        return new QDomDocument(((VirtualKPartsMainWindow*)self)->domDocument());
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnDomDocument(const KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_DomDocument_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_DomDocument_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KParts__MainWindow_XmlFile(const KParts__MainWindow* self) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        QString _ret = vkpartsmainwindow->xmlFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KParts::MainWindow::xmlFile();
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
libqt_string KParts__MainWindow_QBaseXmlFile(const KParts__MainWindow* self) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_XmlFile_IsBase(true);
        QString _ret = vkpartsmainwindow->xmlFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KParts::MainWindow::xmlFile();
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
void KParts__MainWindow_OnXmlFile(const KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_XmlFile_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_XmlFile_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KParts__MainWindow_LocalXMLFile(const KParts__MainWindow* self) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        QString _ret = vkpartsmainwindow->localXMLFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KParts::MainWindow::localXMLFile();
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
libqt_string KParts__MainWindow_QBaseLocalXMLFile(const KParts__MainWindow* self) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_LocalXMLFile_IsBase(true);
        QString _ret = vkpartsmainwindow->localXMLFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KParts::MainWindow::localXMLFile();
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
void KParts__MainWindow_OnLocalXMLFile(const KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_LocalXMLFile_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_LocalXMLFile_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_SetComponentName(KParts__MainWindow* self, const libqt_string componentName, const libqt_string componentDisplayName) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    QString componentDisplayName_QString = QString::fromUtf8(componentDisplayName.data, componentDisplayName.len);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setComponentName(componentName_QString, componentDisplayName_QString);
    } else {
        ((VirtualKPartsMainWindow*)self)->setComponentName(componentName_QString, componentDisplayName_QString);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseSetComponentName(KParts__MainWindow* self, const libqt_string componentName, const libqt_string componentDisplayName) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    QString componentDisplayName_QString = QString::fromUtf8(componentDisplayName.data, componentDisplayName.len);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SetComponentName_IsBase(true);
        vkpartsmainwindow->setComponentName(componentName_QString, componentDisplayName_QString);
    } else {
        ((VirtualKPartsMainWindow*)self)->setComponentName(componentName_QString, componentDisplayName_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSetComponentName(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SetComponentName_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SetComponentName_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_SetXMLFile(KParts__MainWindow* self, const libqt_string file, bool merge, bool setXMLDoc) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setXMLFile(file_QString, merge, setXMLDoc);
    } else {
        ((VirtualKPartsMainWindow*)self)->setXMLFile(file_QString, merge, setXMLDoc);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseSetXMLFile(KParts__MainWindow* self, const libqt_string file, bool merge, bool setXMLDoc) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SetXMLFile_IsBase(true);
        vkpartsmainwindow->setXMLFile(file_QString, merge, setXMLDoc);
    } else {
        ((VirtualKPartsMainWindow*)self)->setXMLFile(file_QString, merge, setXMLDoc);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSetXMLFile(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SetXMLFile_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SetXMLFile_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_SetLocalXMLFile(KParts__MainWindow* self, const libqt_string file) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setLocalXMLFile(file_QString);
    } else {
        ((VirtualKPartsMainWindow*)self)->setLocalXMLFile(file_QString);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseSetLocalXMLFile(KParts__MainWindow* self, const libqt_string file) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SetLocalXMLFile_IsBase(true);
        vkpartsmainwindow->setLocalXMLFile(file_QString);
    } else {
        ((VirtualKPartsMainWindow*)self)->setLocalXMLFile(file_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSetLocalXMLFile(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SetLocalXMLFile_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SetLocalXMLFile_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_SetXML(KParts__MainWindow* self, const libqt_string document, bool merge) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    QString document_QString = QString::fromUtf8(document.data, document.len);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setXML(document_QString, merge);
    } else {
        ((VirtualKPartsMainWindow*)self)->setXML(document_QString, merge);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseSetXML(KParts__MainWindow* self, const libqt_string document, bool merge) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    QString document_QString = QString::fromUtf8(document.data, document.len);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SetXML_IsBase(true);
        vkpartsmainwindow->setXML(document_QString, merge);
    } else {
        ((VirtualKPartsMainWindow*)self)->setXML(document_QString, merge);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSetXML(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SetXML_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SetXML_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_SetDOMDocument(KParts__MainWindow* self, const QDomDocument* document, bool merge) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setDOMDocument(*document, merge);
    } else {
        ((VirtualKPartsMainWindow*)self)->setDOMDocument(*document, merge);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseSetDOMDocument(KParts__MainWindow* self, const QDomDocument* document, bool merge) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SetDOMDocument_IsBase(true);
        vkpartsmainwindow->setDOMDocument(*document, merge);
    } else {
        ((VirtualKPartsMainWindow*)self)->setDOMDocument(*document, merge);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSetDOMDocument(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SetDOMDocument_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SetDOMDocument_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_StateChanged(KParts__MainWindow* self, const libqt_string newstate, int reverse) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    } else {
        ((VirtualKPartsMainWindow*)self)->stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseStateChanged(KParts__MainWindow* self, const libqt_string newstate, int reverse) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_StateChanged_IsBase(true);
        vkpartsmainwindow->stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    } else {
        ((VirtualKPartsMainWindow*)self)->stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnStateChanged(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_StateChanged_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_StateChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_CreateGUI(KParts__MainWindow* self, KParts__Part* part) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->createGUI(part);
    } else {
        ((VirtualKPartsMainWindow*)self)->createGUI(part);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseCreateGUI(KParts__MainWindow* self, KParts__Part* part) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_CreateGUI_IsBase(true);
        vkpartsmainwindow->createGUI(part);
    } else {
        ((VirtualKPartsMainWindow*)self)->createGUI(part);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnCreateGUI(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_CreateGUI_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_CreateGUI_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_SetWindowTitleHandling(KParts__MainWindow* self, bool enabled) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setWindowTitleHandling(enabled);
    } else {
        ((VirtualKPartsMainWindow*)self)->setWindowTitleHandling(enabled);
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseSetWindowTitleHandling(KParts__MainWindow* self, bool enabled) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SetWindowTitleHandling_IsBase(true);
        vkpartsmainwindow->setWindowTitleHandling(enabled);
    } else {
        ((VirtualKPartsMainWindow*)self)->setWindowTitleHandling(enabled);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSetWindowTitleHandling(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SetWindowTitleHandling_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SetWindowTitleHandling_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_CheckAmbiguousShortcuts(KParts__MainWindow* self) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->checkAmbiguousShortcuts();
    } else {
        ((VirtualKPartsMainWindow*)self)->checkAmbiguousShortcuts();
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseCheckAmbiguousShortcuts(KParts__MainWindow* self) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_CheckAmbiguousShortcuts_IsBase(true);
        vkpartsmainwindow->checkAmbiguousShortcuts();
    } else {
        ((VirtualKPartsMainWindow*)self)->checkAmbiguousShortcuts();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnCheckAmbiguousShortcuts(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_CheckAmbiguousShortcuts_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_CheckAmbiguousShortcuts_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_SavePropertiesInternal(KParts__MainWindow* self, KConfig* param1, int param2) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->savePropertiesInternal(param1, static_cast<int>(param2));
    } else {
        ((VirtualKPartsMainWindow*)self)->savePropertiesInternal(param1, static_cast<int>(param2));
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseSavePropertiesInternal(KParts__MainWindow* self, KConfig* param1, int param2) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SavePropertiesInternal_IsBase(true);
        vkpartsmainwindow->savePropertiesInternal(param1, static_cast<int>(param2));
    } else {
        ((VirtualKPartsMainWindow*)self)->savePropertiesInternal(param1, static_cast<int>(param2));
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSavePropertiesInternal(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SavePropertiesInternal_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SavePropertiesInternal_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__MainWindow_ReadPropertiesInternal(KParts__MainWindow* self, KConfig* param1, int param2) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        return vkpartsmainwindow->readPropertiesInternal(param1, static_cast<int>(param2));
    } else {
        return ((VirtualKPartsMainWindow*)self)->readPropertiesInternal(param1, static_cast<int>(param2));
    }
}

// Base class handler implementation
bool KParts__MainWindow_QBaseReadPropertiesInternal(KParts__MainWindow* self, KConfig* param1, int param2) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_ReadPropertiesInternal_IsBase(true);
        return vkpartsmainwindow->readPropertiesInternal(param1, static_cast<int>(param2));
    } else {
        return ((VirtualKPartsMainWindow*)self)->readPropertiesInternal(param1, static_cast<int>(param2));
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnReadPropertiesInternal(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_ReadPropertiesInternal_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_ReadPropertiesInternal_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__MainWindow_SettingsDirty(const KParts__MainWindow* self) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        return vkpartsmainwindow->settingsDirty();
    } else {
        return ((VirtualKPartsMainWindow*)self)->settingsDirty();
    }
}

// Base class handler implementation
bool KParts__MainWindow_QBaseSettingsDirty(const KParts__MainWindow* self) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SettingsDirty_IsBase(true);
        return vkpartsmainwindow->settingsDirty();
    } else {
        return ((VirtualKPartsMainWindow*)self)->settingsDirty();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSettingsDirty(const KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SettingsDirty_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SettingsDirty_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_SaveAutoSaveSettings(KParts__MainWindow* self) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->saveAutoSaveSettings();
    } else {
        ((VirtualKPartsMainWindow*)self)->saveAutoSaveSettings();
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseSaveAutoSaveSettings(KParts__MainWindow* self) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SaveAutoSaveSettings_IsBase(true);
        vkpartsmainwindow->saveAutoSaveSettings();
    } else {
        ((VirtualKPartsMainWindow*)self)->saveAutoSaveSettings();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSaveAutoSaveSettings(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SaveAutoSaveSettings_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SaveAutoSaveSettings_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_UpdateMicroFocus(KParts__MainWindow* self) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->updateMicroFocus();
    } else {
        ((VirtualKPartsMainWindow*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseUpdateMicroFocus(KParts__MainWindow* self) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_UpdateMicroFocus_IsBase(true);
        vkpartsmainwindow->updateMicroFocus();
    } else {
        ((VirtualKPartsMainWindow*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnUpdateMicroFocus(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_Create(KParts__MainWindow* self) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->create();
    } else {
        ((VirtualKPartsMainWindow*)self)->create();
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseCreate(KParts__MainWindow* self) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_Create_IsBase(true);
        vkpartsmainwindow->create();
    } else {
        ((VirtualKPartsMainWindow*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnCreate(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_Create_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_Destroy(KParts__MainWindow* self) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->destroy();
    } else {
        ((VirtualKPartsMainWindow*)self)->destroy();
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseDestroy(KParts__MainWindow* self) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_Destroy_IsBase(true);
        vkpartsmainwindow->destroy();
    } else {
        ((VirtualKPartsMainWindow*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnDestroy(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_Destroy_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__MainWindow_FocusNextChild(KParts__MainWindow* self) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        return vkpartsmainwindow->focusNextChild();
    } else {
        return ((VirtualKPartsMainWindow*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KParts__MainWindow_QBaseFocusNextChild(KParts__MainWindow* self) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_FocusNextChild_IsBase(true);
        return vkpartsmainwindow->focusNextChild();
    } else {
        return ((VirtualKPartsMainWindow*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnFocusNextChild(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_FocusNextChild_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__MainWindow_FocusPreviousChild(KParts__MainWindow* self) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        return vkpartsmainwindow->focusPreviousChild();
    } else {
        return ((VirtualKPartsMainWindow*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KParts__MainWindow_QBaseFocusPreviousChild(KParts__MainWindow* self) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_FocusPreviousChild_IsBase(true);
        return vkpartsmainwindow->focusPreviousChild();
    } else {
        return ((VirtualKPartsMainWindow*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnFocusPreviousChild(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_FocusPreviousChild_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KParts__MainWindow_Sender(const KParts__MainWindow* self) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        return vkpartsmainwindow->sender();
    } else {
        return ((VirtualKPartsMainWindow*)self)->sender();
    }
}

// Base class handler implementation
QObject* KParts__MainWindow_QBaseSender(const KParts__MainWindow* self) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_Sender_IsBase(true);
        return vkpartsmainwindow->sender();
    } else {
        return ((VirtualKPartsMainWindow*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSender(const KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_Sender_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KParts__MainWindow_SenderSignalIndex(const KParts__MainWindow* self) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        return vkpartsmainwindow->senderSignalIndex();
    } else {
        return ((VirtualKPartsMainWindow*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KParts__MainWindow_QBaseSenderSignalIndex(const KParts__MainWindow* self) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SenderSignalIndex_IsBase(true);
        return vkpartsmainwindow->senderSignalIndex();
    } else {
        return ((VirtualKPartsMainWindow*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnSenderSignalIndex(const KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_SenderSignalIndex_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KParts__MainWindow_Receivers(const KParts__MainWindow* self, const char* signal) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        return vkpartsmainwindow->receivers(signal);
    } else {
        return ((VirtualKPartsMainWindow*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KParts__MainWindow_QBaseReceivers(const KParts__MainWindow* self, const char* signal) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_Receivers_IsBase(true);
        return vkpartsmainwindow->receivers(signal);
    } else {
        return ((VirtualKPartsMainWindow*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnReceivers(const KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_Receivers_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__MainWindow_IsSignalConnected(const KParts__MainWindow* self, const QMetaMethod* signal) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        return vkpartsmainwindow->isSignalConnected(*signal);
    } else {
        return ((VirtualKPartsMainWindow*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KParts__MainWindow_QBaseIsSignalConnected(const KParts__MainWindow* self, const QMetaMethod* signal) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_IsSignalConnected_IsBase(true);
        return vkpartsmainwindow->isSignalConnected(*signal);
    } else {
        return ((VirtualKPartsMainWindow*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnIsSignalConnected(const KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_IsSignalConnected_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KParts__MainWindow_GetDecodedMetricF(const KParts__MainWindow* self, int metricA, int metricB) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        return vkpartsmainwindow->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKPartsMainWindow*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KParts__MainWindow_QBaseGetDecodedMetricF(const KParts__MainWindow* self, int metricA, int metricB) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_GetDecodedMetricF_IsBase(true);
        return vkpartsmainwindow->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKPartsMainWindow*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnGetDecodedMetricF(const KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = const_cast<VirtualKPartsMainWindow*>(dynamic_cast<const VirtualKPartsMainWindow*>(self));
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_GetDecodedMetricF_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KParts__MainWindow_StandardsXmlFileLocation(KParts__MainWindow* self) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        QString _ret = vkpartsmainwindow->standardsXmlFileLocation();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKPartsMainWindow*)self)->standardsXmlFileLocation();
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
libqt_string KParts__MainWindow_QBaseStandardsXmlFileLocation(KParts__MainWindow* self) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_StandardsXmlFileLocation_IsBase(true);
        QString _ret = vkpartsmainwindow->standardsXmlFileLocation();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKPartsMainWindow*)self)->standardsXmlFileLocation();
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
void KParts__MainWindow_OnStandardsXmlFileLocation(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_StandardsXmlFileLocation_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_StandardsXmlFileLocation_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__MainWindow_LoadStandardsXmlFile(KParts__MainWindow* self) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->loadStandardsXmlFile();
    } else {
        ((VirtualKPartsMainWindow*)self)->loadStandardsXmlFile();
    }
}

// Base class handler implementation
void KParts__MainWindow_QBaseLoadStandardsXmlFile(KParts__MainWindow* self) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_LoadStandardsXmlFile_IsBase(true);
        vkpartsmainwindow->loadStandardsXmlFile();
    } else {
        ((VirtualKPartsMainWindow*)self)->loadStandardsXmlFile();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__MainWindow_OnLoadStandardsXmlFile(KParts__MainWindow* self, intptr_t slot) {
    auto* vkpartsmainwindow = dynamic_cast<VirtualKPartsMainWindow*>(self);
    if (vkpartsmainwindow && vkpartsmainwindow->isVirtualKPartsMainWindow) {
        vkpartsmainwindow->setKParts__MainWindow_LoadStandardsXmlFile_Callback(reinterpret_cast<VirtualKPartsMainWindow::KParts__MainWindow_LoadStandardsXmlFile_Callback>(slot));
    }
}

void KParts__MainWindow_Delete(KParts__MainWindow* self) {
    delete self;
}
