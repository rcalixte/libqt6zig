#include <KConfig>
#include <KConfigGroup>
#include <KMainWindow>
#include <KToolBar>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
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
#include <kmainwindow.h>
#include "libkmainwindow.h"
#include "libkmainwindow.hxx"

KMainWindow* KMainWindow_new(QWidget* parent) {
    return new VirtualKMainWindow(parent);
}

KMainWindow* KMainWindow_new2() {
    return new VirtualKMainWindow();
}

KMainWindow* KMainWindow_new3(QWidget* parent, int flags) {
    return new VirtualKMainWindow(parent, static_cast<Qt::WindowFlags>(flags));
}

QMetaObject* KMainWindow_MetaObject(const KMainWindow* self) {
    return (QMetaObject*)self->metaObject();
}

void* KMainWindow_Metacast(KMainWindow* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KMainWindow_Metacall(KMainWindow* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KMainWindow_Tr(const char* s) {
    auto _ret = KMainWindow::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KMainWindow_CanBeRestored(int numberOfInstances) {
    return KMainWindow::canBeRestored(static_cast<int>(numberOfInstances));
}

libqt_string KMainWindow_ClassNameOfToplevel(int instanceNumber) {
    const auto _ret = KMainWindow::classNameOfToplevel(static_cast<int>(instanceNumber));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KMainWindow_Restore(KMainWindow* self, int numberOfInstances) {
    return self->restore(static_cast<int>(numberOfInstances));
}

bool KMainWindow_HasMenuBar(KMainWindow* self) {
    return self->hasMenuBar();
}

libqt_list /* of KMainWindow* */ KMainWindow_MemberList() {
    QList<KMainWindow*> _ret = KMainWindow::memberList();
    // Convert QList<> from C++ memory to manually-managed C memory
    KMainWindow** _arr = static_cast<KMainWindow**>(malloc(sizeof(KMainWindow*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

KToolBar* KMainWindow_ToolBar(KMainWindow* self) {
    return self->toolBar();
}

libqt_list /* of KToolBar* */ KMainWindow_ToolBars(const KMainWindow* self) {
    QList<KToolBar*> _ret = self->toolBars();
    // Convert QList<> from C++ memory to manually-managed C memory
    KToolBar** _arr = static_cast<KToolBar**>(malloc(sizeof(KToolBar*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KMainWindow_SetAutoSaveSettings(KMainWindow* self) {
    self->setAutoSaveSettings();
}

void KMainWindow_SetAutoSaveSettings2(KMainWindow* self, const KConfigGroup* group) {
    self->setAutoSaveSettings(*group);
}

void KMainWindow_ResetAutoSaveSettings(KMainWindow* self) {
    self->resetAutoSaveSettings();
}

bool KMainWindow_AutoSaveSettings(const KMainWindow* self) {
    return self->autoSaveSettings();
}

libqt_string KMainWindow_AutoSaveGroup(const KMainWindow* self) {
    auto _ret = self->autoSaveGroup();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KConfigGroup* KMainWindow_AutoSaveConfigGroup(const KMainWindow* self) {
    return new KConfigGroup(self->autoSaveConfigGroup());
}

void KMainWindow_SetStateConfigGroup(KMainWindow* self, const libqt_string configGroup) {
    QString configGroup_QString = QString::fromUtf8(configGroup.data, configGroup.len);
    self->setStateConfigGroup(configGroup_QString);
}

KConfigGroup* KMainWindow_StateConfigGroup(const KMainWindow* self) {
    return new KConfigGroup(self->stateConfigGroup());
}

void KMainWindow_ApplyMainWindowSettings(KMainWindow* self, const KConfigGroup* config) {
    self->applyMainWindowSettings(*config);
}

void KMainWindow_SaveMainWindowSettings(KMainWindow* self, KConfigGroup* config) {
    self->saveMainWindowSettings(*config);
}

libqt_string KMainWindow_DbusName(const KMainWindow* self) {
    auto _ret = self->dbusName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KMainWindow_SetCaption(KMainWindow* self, const libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    self->setCaption(caption_QString);
}

void KMainWindow_SetCaption2(KMainWindow* self, const libqt_string caption, bool modified) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    self->setCaption(caption_QString, modified);
}

void KMainWindow_SetPlainCaption(KMainWindow* self, const libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    self->setPlainCaption(caption_QString);
}

void KMainWindow_AppHelpActivated(KMainWindow* self) {
    self->appHelpActivated();
}

void KMainWindow_SetSettingsDirty(KMainWindow* self) {
    self->setSettingsDirty();
}

bool KMainWindow_Event(KMainWindow* self, QEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        return vkmainwindow->event(event);
    }
    qFatal("Error: Protected method KMainWindow::event called without a directly constructed type");
}

void KMainWindow_KeyPressEvent(KMainWindow* self, QKeyEvent* keyEvent) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->keyPressEvent(keyEvent);
    }
}

void KMainWindow_CloseEvent(KMainWindow* self, QCloseEvent* param1) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->closeEvent(param1);
    }
}

bool KMainWindow_QueryClose(KMainWindow* self) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        return vkmainwindow->queryClose();
    }
    qFatal("Error: Protected method KMainWindow::queryClose called without a directly constructed type");
}

void KMainWindow_SaveProperties(KMainWindow* self, KConfigGroup* param1) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->saveProperties(*param1);
    }
}

void KMainWindow_ReadProperties(KMainWindow* self, const KConfigGroup* param1) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->readProperties(*param1);
    }
}

void KMainWindow_SaveGlobalProperties(KMainWindow* self, KConfig* sessionConfig) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->saveGlobalProperties(sessionConfig);
    }
}

void KMainWindow_ReadGlobalProperties(KMainWindow* self, KConfig* sessionConfig) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->readGlobalProperties(sessionConfig);
    }
}

libqt_string KMainWindow_Tr2(const char* s, const char* c) {
    auto _ret = KMainWindow::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KMainWindow_Tr3(const char* s, const char* c, int n) {
    auto _ret = KMainWindow::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KMainWindow_Restore2(KMainWindow* self, int numberOfInstances, bool show) {
    return self->restore(static_cast<int>(numberOfInstances), show);
}

KToolBar* KMainWindow_ToolBar1(KMainWindow* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->toolBar(name_QString);
}

void KMainWindow_SetAutoSaveSettings1(KMainWindow* self, const libqt_string groupName) {
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    self->setAutoSaveSettings(groupName_QString);
}

void KMainWindow_SetAutoSaveSettings22(KMainWindow* self, const libqt_string groupName, bool saveWindowSize) {
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    self->setAutoSaveSettings(groupName_QString, saveWindowSize);
}

void KMainWindow_SetAutoSaveSettings23(KMainWindow* self, const KConfigGroup* group, bool saveWindowSize) {
    self->setAutoSaveSettings(*group, saveWindowSize);
}

// Base class handler implementation
QMetaObject* KMainWindow_SuperMetaObject(const KMainWindow* self) {
    return (QMetaObject*)self->KMainWindow::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnMetaObject(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self)))
        vkmainwindow->kmainwindow_metaobject_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KMainWindow_SuperMetacast(KMainWindow* self, const char* param1) {
    return self->KMainWindow::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnMetacast(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_metacast_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_Metacast_Callback>(slot);
}

// Base class handler implementation
int KMainWindow_SuperMetacall(KMainWindow* self, int param1, int param2, void** param3) {
    return self->KMainWindow::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnMetacall(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_metacall_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_Metacall_Callback>(slot);
}

// Base class handler implementation
void KMainWindow_SuperApplyMainWindowSettings(KMainWindow* self, const KConfigGroup* config) {
    self->KMainWindow::applyMainWindowSettings(*config);
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnApplyMainWindowSettings(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_applymainwindowsettings_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_ApplyMainWindowSettings_Callback>(slot);
}

// Base class handler implementation
void KMainWindow_SuperSetCaption(KMainWindow* self, const libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    self->KMainWindow::setCaption(caption_QString);
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnSetCaption(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_setcaption_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_SetCaption_Callback>(slot);
}

// Base class handler implementation
void KMainWindow_SuperSetCaption2(KMainWindow* self, const libqt_string caption, bool modified) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    self->KMainWindow::setCaption(caption_QString, modified);
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnSetCaption2(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_setcaption2_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_SetCaption2_Callback>(slot);
}

// Base class handler implementation
void KMainWindow_SuperSetPlainCaption(KMainWindow* self, const libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    self->KMainWindow::setPlainCaption(caption_QString);
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnSetPlainCaption(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_setplaincaption_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_SetPlainCaption_Callback>(slot);
}

// Base class handler implementation
bool KMainWindow_SuperEvent(KMainWindow* self, QEvent* event) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        return vkmainwindow->KMainWindow::event(event);
    } else
        qFatal("Error: Protected virtual method KMainWindow::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnEvent(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_event_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_Event_Callback>(slot);
}

// Base class handler implementation
void KMainWindow_SuperKeyPressEvent(KMainWindow* self, QKeyEvent* keyEvent) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::keyPressEvent(keyEvent);
    } else
        qFatal("Error: Protected virtual method KMainWindow::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnKeyPressEvent(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_keypressevent_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void KMainWindow_SuperCloseEvent(KMainWindow* self, QCloseEvent* param1) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KMainWindow::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnCloseEvent(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_closeevent_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_CloseEvent_Callback>(slot);
}

// Base class handler implementation
bool KMainWindow_SuperQueryClose(KMainWindow* self) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        return vkmainwindow->KMainWindow::queryClose();
    } else
        qFatal("Error: Protected virtual method KMainWindow::queryClose called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnQueryClose(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_queryclose_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_QueryClose_Callback>(slot);
}

// Base class handler implementation
void KMainWindow_SuperSaveProperties(KMainWindow* self, KConfigGroup* param1) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::saveProperties(*param1);
    } else
        qFatal("Error: Protected virtual method KMainWindow::saveProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnSaveProperties(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_saveproperties_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_SaveProperties_Callback>(slot);
}

// Base class handler implementation
void KMainWindow_SuperReadProperties(KMainWindow* self, const KConfigGroup* param1) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::readProperties(*param1);
    } else
        qFatal("Error: Protected virtual method KMainWindow::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnReadProperties(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_readproperties_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_ReadProperties_Callback>(slot);
}

// Base class handler implementation
void KMainWindow_SuperSaveGlobalProperties(KMainWindow* self, KConfig* sessionConfig) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::saveGlobalProperties(sessionConfig);
    } else
        qFatal("Error: Protected virtual method KMainWindow::saveGlobalProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnSaveGlobalProperties(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_saveglobalproperties_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_SaveGlobalProperties_Callback>(slot);
}

// Base class handler implementation
void KMainWindow_SuperReadGlobalProperties(KMainWindow* self, KConfig* sessionConfig) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::readGlobalProperties(sessionConfig);
    } else
        qFatal("Error: Protected virtual method KMainWindow::readGlobalProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnReadGlobalProperties(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_readglobalproperties_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_ReadGlobalProperties_Callback>(slot);
}

// Derived class handler implementation
QMenu* KMainWindow_CreatePopupMenu(KMainWindow* self) {
    return self->createPopupMenu();
}

// Base class handler implementation
QMenu* KMainWindow_SuperCreatePopupMenu(KMainWindow* self) {
    return self->KMainWindow::createPopupMenu();
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnCreatePopupMenu(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_createpopupmenu_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_CreatePopupMenu_Callback>(slot);
}

// Derived class handler implementation
void KMainWindow_ContextMenuEvent(KMainWindow* self, QContextMenuEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMainWindow::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMainWindow_SuperContextMenuEvent(KMainWindow* self, QContextMenuEvent* event) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KMainWindow::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnContextMenuEvent(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_contextmenuevent_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
int KMainWindow_DevType(const KMainWindow* self) {
    return self->devType();
}

// Base class handler implementation
int KMainWindow_SuperDevType(const KMainWindow* self) {
    return self->KMainWindow::devType();
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnDevType(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self)))
        vkmainwindow->kmainwindow_devtype_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_DevType_Callback>(slot);
}

// Derived class handler implementation
void KMainWindow_SetVisible(KMainWindow* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KMainWindow_SuperSetVisible(KMainWindow* self, bool visible) {
    self->KMainWindow::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnSetVisible(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_setvisible_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KMainWindow_SizeHint(const KMainWindow* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KMainWindow_SuperSizeHint(const KMainWindow* self) {
    return new QSize(self->KMainWindow::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnSizeHint(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self)))
        vkmainwindow->kmainwindow_sizehint_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KMainWindow_MinimumSizeHint(const KMainWindow* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KMainWindow_SuperMinimumSizeHint(const KMainWindow* self) {
    return new QSize(self->KMainWindow::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnMinimumSizeHint(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self)))
        vkmainwindow->kmainwindow_minimumsizehint_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KMainWindow_HeightForWidth(const KMainWindow* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KMainWindow_SuperHeightForWidth(const KMainWindow* self, int param1) {
    return self->KMainWindow::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnHeightForWidth(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self)))
        vkmainwindow->kmainwindow_heightforwidth_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KMainWindow_HasHeightForWidth(const KMainWindow* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KMainWindow_SuperHasHeightForWidth(const KMainWindow* self) {
    return self->KMainWindow::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnHasHeightForWidth(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self)))
        vkmainwindow->kmainwindow_hasheightforwidth_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KMainWindow_PaintEngine(const KMainWindow* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KMainWindow_SuperPaintEngine(const KMainWindow* self) {
    return self->KMainWindow::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnPaintEngine(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self)))
        vkmainwindow->kmainwindow_paintengine_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KMainWindow_MousePressEvent(KMainWindow* self, QMouseEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMainWindow::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMainWindow_SuperMousePressEvent(KMainWindow* self, QMouseEvent* event) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KMainWindow::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnMousePressEvent(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_mousepressevent_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KMainWindow_MouseReleaseEvent(KMainWindow* self, QMouseEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMainWindow::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMainWindow_SuperMouseReleaseEvent(KMainWindow* self, QMouseEvent* event) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KMainWindow::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnMouseReleaseEvent(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_mousereleaseevent_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KMainWindow_MouseDoubleClickEvent(KMainWindow* self, QMouseEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMainWindow::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMainWindow_SuperMouseDoubleClickEvent(KMainWindow* self, QMouseEvent* event) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KMainWindow::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnMouseDoubleClickEvent(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_mousedoubleclickevent_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KMainWindow_MouseMoveEvent(KMainWindow* self, QMouseEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMainWindow::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMainWindow_SuperMouseMoveEvent(KMainWindow* self, QMouseEvent* event) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KMainWindow::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnMouseMoveEvent(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_mousemoveevent_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KMainWindow_WheelEvent(KMainWindow* self, QWheelEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMainWindow::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMainWindow_SuperWheelEvent(KMainWindow* self, QWheelEvent* event) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KMainWindow::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnWheelEvent(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_wheelevent_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KMainWindow_KeyReleaseEvent(KMainWindow* self, QKeyEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMainWindow::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMainWindow_SuperKeyReleaseEvent(KMainWindow* self, QKeyEvent* event) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KMainWindow::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnKeyReleaseEvent(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_keyreleaseevent_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KMainWindow_FocusInEvent(KMainWindow* self, QFocusEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMainWindow::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMainWindow_SuperFocusInEvent(KMainWindow* self, QFocusEvent* event) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KMainWindow::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnFocusInEvent(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_focusinevent_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KMainWindow_FocusOutEvent(KMainWindow* self, QFocusEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMainWindow::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMainWindow_SuperFocusOutEvent(KMainWindow* self, QFocusEvent* event) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KMainWindow::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnFocusOutEvent(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_focusoutevent_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KMainWindow_EnterEvent(KMainWindow* self, QEnterEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMainWindow::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMainWindow_SuperEnterEvent(KMainWindow* self, QEnterEvent* event) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KMainWindow::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnEnterEvent(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_enterevent_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KMainWindow_LeaveEvent(KMainWindow* self, QEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMainWindow::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMainWindow_SuperLeaveEvent(KMainWindow* self, QEvent* event) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KMainWindow::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnLeaveEvent(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_leaveevent_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KMainWindow_PaintEvent(KMainWindow* self, QPaintEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMainWindow::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMainWindow_SuperPaintEvent(KMainWindow* self, QPaintEvent* event) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KMainWindow::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnPaintEvent(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_paintevent_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KMainWindow_MoveEvent(KMainWindow* self, QMoveEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMainWindow::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMainWindow_SuperMoveEvent(KMainWindow* self, QMoveEvent* event) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KMainWindow::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnMoveEvent(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_moveevent_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KMainWindow_ResizeEvent(KMainWindow* self, QResizeEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMainWindow::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMainWindow_SuperResizeEvent(KMainWindow* self, QResizeEvent* event) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KMainWindow::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnResizeEvent(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_resizeevent_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KMainWindow_TabletEvent(KMainWindow* self, QTabletEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMainWindow::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMainWindow_SuperTabletEvent(KMainWindow* self, QTabletEvent* event) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KMainWindow::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnTabletEvent(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_tabletevent_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KMainWindow_ActionEvent(KMainWindow* self, QActionEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMainWindow::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMainWindow_SuperActionEvent(KMainWindow* self, QActionEvent* event) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KMainWindow::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnActionEvent(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_actionevent_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KMainWindow_DragEnterEvent(KMainWindow* self, QDragEnterEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMainWindow::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMainWindow_SuperDragEnterEvent(KMainWindow* self, QDragEnterEvent* event) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KMainWindow::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnDragEnterEvent(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_dragenterevent_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KMainWindow_DragMoveEvent(KMainWindow* self, QDragMoveEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMainWindow::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMainWindow_SuperDragMoveEvent(KMainWindow* self, QDragMoveEvent* event) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KMainWindow::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnDragMoveEvent(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_dragmoveevent_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KMainWindow_DragLeaveEvent(KMainWindow* self, QDragLeaveEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMainWindow::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMainWindow_SuperDragLeaveEvent(KMainWindow* self, QDragLeaveEvent* event) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KMainWindow::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnDragLeaveEvent(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_dragleaveevent_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KMainWindow_DropEvent(KMainWindow* self, QDropEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMainWindow::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMainWindow_SuperDropEvent(KMainWindow* self, QDropEvent* event) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KMainWindow::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnDropEvent(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_dropevent_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KMainWindow_ShowEvent(KMainWindow* self, QShowEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMainWindow::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMainWindow_SuperShowEvent(KMainWindow* self, QShowEvent* event) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KMainWindow::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnShowEvent(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_showevent_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KMainWindow_HideEvent(KMainWindow* self, QHideEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMainWindow::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMainWindow_SuperHideEvent(KMainWindow* self, QHideEvent* event) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KMainWindow::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnHideEvent(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_hideevent_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KMainWindow_NativeEvent(KMainWindow* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        return vkmainwindow->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KMainWindow::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KMainWindow_SuperNativeEvent(KMainWindow* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        return vkmainwindow->KMainWindow::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KMainWindow::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnNativeEvent(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_nativeevent_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KMainWindow_ChangeEvent(KMainWindow* self, QEvent* param1) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KMainWindow::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMainWindow_SuperChangeEvent(KMainWindow* self, QEvent* param1) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KMainWindow::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnChangeEvent(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_changeevent_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KMainWindow_Metric(const KMainWindow* self, int param1) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow) {
        return vkmainwindow->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KMainWindow::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KMainWindow_SuperMetric(const KMainWindow* self, int param1) {
    if (auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self))) {
        return vkmainwindow->KMainWindow::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KMainWindow::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnMetric(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self)))
        vkmainwindow->kmainwindow_metric_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_Metric_Callback>(slot);
}

// Derived class handler implementation
void KMainWindow_InitPainter(const KMainWindow* self, QPainter* painter) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow) {
        vkmainwindow->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KMainWindow::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KMainWindow_SuperInitPainter(const KMainWindow* self, QPainter* painter) {
    if (auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self))) {
        vkmainwindow->KMainWindow::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KMainWindow::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnInitPainter(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self)))
        vkmainwindow->kmainwindow_initpainter_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KMainWindow_Redirected(const KMainWindow* self, QPoint* offset) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow) {
        return vkmainwindow->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KMainWindow::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KMainWindow_SuperRedirected(const KMainWindow* self, QPoint* offset) {
    if (auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self))) {
        return vkmainwindow->KMainWindow::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KMainWindow::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnRedirected(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self)))
        vkmainwindow->kmainwindow_redirected_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KMainWindow_SharedPainter(const KMainWindow* self) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow) {
        return vkmainwindow->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KMainWindow::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KMainWindow_SuperSharedPainter(const KMainWindow* self) {
    if (auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self))) {
        return vkmainwindow->KMainWindow::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KMainWindow::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnSharedPainter(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self)))
        vkmainwindow->kmainwindow_sharedpainter_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KMainWindow_InputMethodEvent(KMainWindow* self, QInputMethodEvent* param1) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KMainWindow::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMainWindow_SuperInputMethodEvent(KMainWindow* self, QInputMethodEvent* param1) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KMainWindow::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnInputMethodEvent(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_inputmethodevent_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KMainWindow_InputMethodQuery(const KMainWindow* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KMainWindow_SuperInputMethodQuery(const KMainWindow* self, int param1) {
    return new QVariant(self->KMainWindow::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnInputMethodQuery(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self)))
        vkmainwindow->kmainwindow_inputmethodquery_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KMainWindow_FocusNextPrevChild(KMainWindow* self, bool next) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        return vkmainwindow->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KMainWindow::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KMainWindow_SuperFocusNextPrevChild(KMainWindow* self, bool next) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        return vkmainwindow->KMainWindow::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KMainWindow::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnFocusNextPrevChild(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_focusnextprevchild_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KMainWindow_EventFilter(KMainWindow* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KMainWindow_SuperEventFilter(KMainWindow* self, QObject* watched, QEvent* event) {
    return self->KMainWindow::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnEventFilter(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_eventfilter_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KMainWindow_TimerEvent(KMainWindow* self, QTimerEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMainWindow::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMainWindow_SuperTimerEvent(KMainWindow* self, QTimerEvent* event) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KMainWindow::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnTimerEvent(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_timerevent_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KMainWindow_ChildEvent(KMainWindow* self, QChildEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMainWindow::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMainWindow_SuperChildEvent(KMainWindow* self, QChildEvent* event) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KMainWindow::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnChildEvent(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_childevent_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KMainWindow_CustomEvent(KMainWindow* self, QEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMainWindow::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMainWindow_SuperCustomEvent(KMainWindow* self, QEvent* event) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KMainWindow::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnCustomEvent(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_customevent_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KMainWindow_ConnectNotify(KMainWindow* self, const QMetaMethod* signal) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KMainWindow::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KMainWindow_SuperConnectNotify(KMainWindow* self, const QMetaMethod* signal) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KMainWindow::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnConnectNotify(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_connectnotify_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KMainWindow_DisconnectNotify(KMainWindow* self, const QMetaMethod* signal) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow) {
        vkmainwindow->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KMainWindow::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KMainWindow_SuperDisconnectNotify(KMainWindow* self, const QMetaMethod* signal) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->KMainWindow::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KMainWindow::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnDisconnectNotify(KMainWindow* self, intptr_t slot) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self))
        vkmainwindow->kmainwindow_disconnectnotify_callback = reinterpret_cast<VirtualKMainWindow::KMainWindow_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KMainWindow_SavePropertiesInternal(KMainWindow* self, KConfig* param1, int param2) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->VirtualKMainWindow::savePropertiesInternal(param1, static_cast<int>(param2));
    } else
        qFatal("Error: Protected method KMainWindow::savePropertiesInternal called without a directly constructed type");
}

// Derived class protected handler implementation
bool KMainWindow_ReadPropertiesInternal(KMainWindow* self, KConfig* param1, int param2) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        return vkmainwindow->VirtualKMainWindow::readPropertiesInternal(param1, static_cast<int>(param2));
    } else
        qFatal("Error: Protected method KMainWindow::readPropertiesInternal called without a directly constructed type");
}

// Derived class protected handler implementation
bool KMainWindow_SettingsDirty(const KMainWindow* self) {
    if (auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self))) {
        return vkmainwindow->VirtualKMainWindow::settingsDirty();
    } else
        qFatal("Error: Protected method KMainWindow::settingsDirty called without a directly constructed type");
}

// Derived class protected handler implementation
void KMainWindow_SaveAutoSaveSettings(KMainWindow* self) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->VirtualKMainWindow::saveAutoSaveSettings();
    } else
        qFatal("Error: Protected method KMainWindow::saveAutoSaveSettings called without a directly constructed type");
}

// Derived class protected handler implementation
void KMainWindow_UpdateMicroFocus(KMainWindow* self) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->VirtualKMainWindow::updateMicroFocus();
    } else
        qFatal("Error: Protected method KMainWindow::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KMainWindow_Create(KMainWindow* self) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->VirtualKMainWindow::create();
    } else
        qFatal("Error: Protected method KMainWindow::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KMainWindow_Destroy(KMainWindow* self) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        vkmainwindow->VirtualKMainWindow::destroy();
    } else
        qFatal("Error: Protected method KMainWindow::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KMainWindow_FocusNextChild(KMainWindow* self) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        return vkmainwindow->VirtualKMainWindow::focusNextChild();
    } else
        qFatal("Error: Protected method KMainWindow::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KMainWindow_FocusPreviousChild(KMainWindow* self) {
    if (auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self)) {
        return vkmainwindow->VirtualKMainWindow::focusPreviousChild();
    } else
        qFatal("Error: Protected method KMainWindow::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KMainWindow_Sender(const KMainWindow* self) {
    if (auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self))) {
        return vkmainwindow->VirtualKMainWindow::sender();
    } else
        qFatal("Error: Protected method KMainWindow::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KMainWindow_SenderSignalIndex(const KMainWindow* self) {
    if (auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self))) {
        return vkmainwindow->VirtualKMainWindow::senderSignalIndex();
    } else
        qFatal("Error: Protected method KMainWindow::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KMainWindow_Receivers(const KMainWindow* self, const char* signal) {
    if (auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self))) {
        return vkmainwindow->VirtualKMainWindow::receivers(signal);
    } else
        qFatal("Error: Protected method KMainWindow::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KMainWindow_IsSignalConnected(const KMainWindow* self, const QMetaMethod* signal) {
    if (auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self))) {
        return vkmainwindow->VirtualKMainWindow::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KMainWindow::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KMainWindow_GetDecodedMetricF(const KMainWindow* self, int metricA, int metricB) {
    if (auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self))) {
        return vkmainwindow->VirtualKMainWindow::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KMainWindow::getDecodedMetricF called without a directly constructed type");
}

void KMainWindow_Delete(KMainWindow* self) {
    delete self;
}
