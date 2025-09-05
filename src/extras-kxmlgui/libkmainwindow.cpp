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
#include <QByteArray>
#include <cstring>
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
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKMainWindow*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KMainWindow_Tr(const char* s) {
    QString _ret = KMainWindow::tr(s);
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
    const QString _ret = KMainWindow::classNameOfToplevel(static_cast<int>(instanceNumber));
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
    KMainWindow** _arr = static_cast<KMainWindow**>(malloc(sizeof(KMainWindow*) * (_ret.size() + 1)));
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
    KToolBar** _arr = static_cast<KToolBar**>(malloc(sizeof(KToolBar*) * (_ret.size() + 1)));
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
    QString _ret = self->autoSaveGroup();
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
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        self->applyMainWindowSettings(*config);
    } else {
        ((VirtualKMainWindow*)self)->applyMainWindowSettings(*config);
    }
}

void KMainWindow_SaveMainWindowSettings(KMainWindow* self, KConfigGroup* config) {
    self->saveMainWindowSettings(*config);
}

libqt_string KMainWindow_DbusName(const KMainWindow* self) {
    QString _ret = self->dbusName();
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
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        self->setCaption(caption_QString);
    } else {
        ((VirtualKMainWindow*)self)->setCaption(caption_QString);
    }
}

void KMainWindow_SetCaption2(KMainWindow* self, const libqt_string caption, bool modified) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        self->setCaption(caption_QString, modified);
    } else {
        ((VirtualKMainWindow*)self)->setCaption(caption_QString, modified);
    }
}

void KMainWindow_SetPlainCaption(KMainWindow* self, const libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        self->setPlainCaption(caption_QString);
    } else {
        ((VirtualKMainWindow*)self)->setPlainCaption(caption_QString);
    }
}

void KMainWindow_AppHelpActivated(KMainWindow* self) {
    self->appHelpActivated();
}

void KMainWindow_SetSettingsDirty(KMainWindow* self) {
    self->setSettingsDirty();
}

bool KMainWindow_Event(KMainWindow* self, QEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        return vkmainwindow->event(event);
    }
    return {};
}

void KMainWindow_KeyPressEvent(KMainWindow* self, QKeyEvent* keyEvent) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->keyPressEvent(keyEvent);
    }
}

void KMainWindow_CloseEvent(KMainWindow* self, QCloseEvent* param1) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->closeEvent(param1);
    }
}

bool KMainWindow_QueryClose(KMainWindow* self) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        return vkmainwindow->queryClose();
    }
    return {};
}

void KMainWindow_SaveProperties(KMainWindow* self, KConfigGroup* param1) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->saveProperties(*param1);
    }
}

void KMainWindow_ReadProperties(KMainWindow* self, const KConfigGroup* param1) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->readProperties(*param1);
    }
}

void KMainWindow_SaveGlobalProperties(KMainWindow* self, KConfig* sessionConfig) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->saveGlobalProperties(sessionConfig);
    }
}

void KMainWindow_ReadGlobalProperties(KMainWindow* self, KConfig* sessionConfig) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->readGlobalProperties(sessionConfig);
    }
}

libqt_string KMainWindow_Tr2(const char* s, const char* c) {
    QString _ret = KMainWindow::tr(s, c);
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
    QString _ret = KMainWindow::tr(s, c, static_cast<int>(n));
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
int KMainWindow_QBaseMetacall(KMainWindow* self, int param1, int param2, void** param3) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_Metacall_IsBase(true);
        return vkmainwindow->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KMainWindow::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnMetacall(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_Metacall_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KMainWindow_QBaseApplyMainWindowSettings(KMainWindow* self, const KConfigGroup* config) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_ApplyMainWindowSettings_IsBase(true);
        vkmainwindow->applyMainWindowSettings(*config);
    } else {
        self->KMainWindow::applyMainWindowSettings(*config);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnApplyMainWindowSettings(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_ApplyMainWindowSettings_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_ApplyMainWindowSettings_Callback>(slot));
    }
}

// Base class handler implementation
void KMainWindow_QBaseSetCaption(KMainWindow* self, const libqt_string caption) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_SetCaption_IsBase(true);
        vkmainwindow->setCaption(caption_QString);
    } else {
        self->KMainWindow::setCaption(caption_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnSetCaption(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_SetCaption_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_SetCaption_Callback>(slot));
    }
}

// Base class handler implementation
void KMainWindow_QBaseSetCaption2(KMainWindow* self, const libqt_string caption, bool modified) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_SetCaption2_IsBase(true);
        vkmainwindow->setCaption(caption_QString, modified);
    } else {
        self->KMainWindow::setCaption(caption_QString, modified);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnSetCaption2(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_SetCaption2_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_SetCaption2_Callback>(slot));
    }
}

// Base class handler implementation
void KMainWindow_QBaseSetPlainCaption(KMainWindow* self, const libqt_string caption) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_SetPlainCaption_IsBase(true);
        vkmainwindow->setPlainCaption(caption_QString);
    } else {
        self->KMainWindow::setPlainCaption(caption_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnSetPlainCaption(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_SetPlainCaption_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_SetPlainCaption_Callback>(slot));
    }
}

// Base class handler implementation
bool KMainWindow_QBaseEvent(KMainWindow* self, QEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_Event_IsBase(true);
        return vkmainwindow->event(event);
    } else {
        return ((VirtualKMainWindow*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnEvent(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_Event_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_Event_Callback>(slot));
    }
}

// Base class handler implementation
void KMainWindow_QBaseKeyPressEvent(KMainWindow* self, QKeyEvent* keyEvent) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_KeyPressEvent_IsBase(true);
        vkmainwindow->keyPressEvent(keyEvent);
    } else {
        ((VirtualKMainWindow*)self)->keyPressEvent(keyEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnKeyPressEvent(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_KeyPressEvent_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_KeyPressEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KMainWindow_QBaseCloseEvent(KMainWindow* self, QCloseEvent* param1) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_CloseEvent_IsBase(true);
        vkmainwindow->closeEvent(param1);
    } else {
        ((VirtualKMainWindow*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnCloseEvent(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_CloseEvent_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_CloseEvent_Callback>(slot));
    }
}

// Base class handler implementation
bool KMainWindow_QBaseQueryClose(KMainWindow* self) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_QueryClose_IsBase(true);
        return vkmainwindow->queryClose();
    } else {
        return ((VirtualKMainWindow*)self)->queryClose();
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnQueryClose(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_QueryClose_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_QueryClose_Callback>(slot));
    }
}

// Base class handler implementation
void KMainWindow_QBaseSaveProperties(KMainWindow* self, KConfigGroup* param1) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_SaveProperties_IsBase(true);
        vkmainwindow->saveProperties(*param1);
    } else {
        ((VirtualKMainWindow*)self)->saveProperties(*param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnSaveProperties(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_SaveProperties_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_SaveProperties_Callback>(slot));
    }
}

// Base class handler implementation
void KMainWindow_QBaseReadProperties(KMainWindow* self, const KConfigGroup* param1) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_ReadProperties_IsBase(true);
        vkmainwindow->readProperties(*param1);
    } else {
        ((VirtualKMainWindow*)self)->readProperties(*param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnReadProperties(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_ReadProperties_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_ReadProperties_Callback>(slot));
    }
}

// Base class handler implementation
void KMainWindow_QBaseSaveGlobalProperties(KMainWindow* self, KConfig* sessionConfig) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_SaveGlobalProperties_IsBase(true);
        vkmainwindow->saveGlobalProperties(sessionConfig);
    } else {
        ((VirtualKMainWindow*)self)->saveGlobalProperties(sessionConfig);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnSaveGlobalProperties(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_SaveGlobalProperties_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_SaveGlobalProperties_Callback>(slot));
    }
}

// Base class handler implementation
void KMainWindow_QBaseReadGlobalProperties(KMainWindow* self, KConfig* sessionConfig) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_ReadGlobalProperties_IsBase(true);
        vkmainwindow->readGlobalProperties(sessionConfig);
    } else {
        ((VirtualKMainWindow*)self)->readGlobalProperties(sessionConfig);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnReadGlobalProperties(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_ReadGlobalProperties_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_ReadGlobalProperties_Callback>(slot));
    }
}

// Derived class handler implementation
QMenu* KMainWindow_CreatePopupMenu(KMainWindow* self) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        return vkmainwindow->createPopupMenu();
    } else {
        return self->KMainWindow::createPopupMenu();
    }
}

// Base class handler implementation
QMenu* KMainWindow_QBaseCreatePopupMenu(KMainWindow* self) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_CreatePopupMenu_IsBase(true);
        return vkmainwindow->createPopupMenu();
    } else {
        return self->KMainWindow::createPopupMenu();
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnCreatePopupMenu(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_CreatePopupMenu_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_CreatePopupMenu_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_ContextMenuEvent(KMainWindow* self, QContextMenuEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->contextMenuEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KMainWindow_QBaseContextMenuEvent(KMainWindow* self, QContextMenuEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_ContextMenuEvent_IsBase(true);
        vkmainwindow->contextMenuEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnContextMenuEvent(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_ContextMenuEvent_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KMainWindow_DevType(const KMainWindow* self) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        return vkmainwindow->devType();
    } else {
        return self->KMainWindow::devType();
    }
}

// Base class handler implementation
int KMainWindow_QBaseDevType(const KMainWindow* self) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_DevType_IsBase(true);
        return vkmainwindow->devType();
    } else {
        return self->KMainWindow::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnDevType(const KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_DevType_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_SetVisible(KMainWindow* self, bool visible) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setVisible(visible);
    } else {
        self->KMainWindow::setVisible(visible);
    }
}

// Base class handler implementation
void KMainWindow_QBaseSetVisible(KMainWindow* self, bool visible) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_SetVisible_IsBase(true);
        vkmainwindow->setVisible(visible);
    } else {
        self->KMainWindow::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnSetVisible(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_SetVisible_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KMainWindow_SizeHint(const KMainWindow* self) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        return new QSize(vkmainwindow->sizeHint());
    } else {
        return new QSize(((VirtualKMainWindow*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KMainWindow_QBaseSizeHint(const KMainWindow* self) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_SizeHint_IsBase(true);
        return new QSize(vkmainwindow->sizeHint());
    } else {
        return new QSize(((VirtualKMainWindow*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnSizeHint(const KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_SizeHint_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KMainWindow_MinimumSizeHint(const KMainWindow* self) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        return new QSize(vkmainwindow->minimumSizeHint());
    } else {
        return new QSize(((VirtualKMainWindow*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KMainWindow_QBaseMinimumSizeHint(const KMainWindow* self) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_MinimumSizeHint_IsBase(true);
        return new QSize(vkmainwindow->minimumSizeHint());
    } else {
        return new QSize(((VirtualKMainWindow*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnMinimumSizeHint(const KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_MinimumSizeHint_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KMainWindow_HeightForWidth(const KMainWindow* self, int param1) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        return vkmainwindow->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KMainWindow::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KMainWindow_QBaseHeightForWidth(const KMainWindow* self, int param1) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_HeightForWidth_IsBase(true);
        return vkmainwindow->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KMainWindow::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnHeightForWidth(const KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_HeightForWidth_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMainWindow_HasHeightForWidth(const KMainWindow* self) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        return vkmainwindow->hasHeightForWidth();
    } else {
        return self->KMainWindow::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KMainWindow_QBaseHasHeightForWidth(const KMainWindow* self) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_HasHeightForWidth_IsBase(true);
        return vkmainwindow->hasHeightForWidth();
    } else {
        return self->KMainWindow::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnHasHeightForWidth(const KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_HasHeightForWidth_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KMainWindow_PaintEngine(const KMainWindow* self) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        return vkmainwindow->paintEngine();
    } else {
        return self->KMainWindow::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KMainWindow_QBasePaintEngine(const KMainWindow* self) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_PaintEngine_IsBase(true);
        return vkmainwindow->paintEngine();
    } else {
        return self->KMainWindow::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnPaintEngine(const KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_PaintEngine_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_MousePressEvent(KMainWindow* self, QMouseEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->mousePressEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KMainWindow_QBaseMousePressEvent(KMainWindow* self, QMouseEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_MousePressEvent_IsBase(true);
        vkmainwindow->mousePressEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnMousePressEvent(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_MousePressEvent_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_MouseReleaseEvent(KMainWindow* self, QMouseEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->mouseReleaseEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KMainWindow_QBaseMouseReleaseEvent(KMainWindow* self, QMouseEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_MouseReleaseEvent_IsBase(true);
        vkmainwindow->mouseReleaseEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnMouseReleaseEvent(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_MouseDoubleClickEvent(KMainWindow* self, QMouseEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KMainWindow_QBaseMouseDoubleClickEvent(KMainWindow* self, QMouseEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_MouseDoubleClickEvent_IsBase(true);
        vkmainwindow->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnMouseDoubleClickEvent(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_MouseMoveEvent(KMainWindow* self, QMouseEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->mouseMoveEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KMainWindow_QBaseMouseMoveEvent(KMainWindow* self, QMouseEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_MouseMoveEvent_IsBase(true);
        vkmainwindow->mouseMoveEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnMouseMoveEvent(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_MouseMoveEvent_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_WheelEvent(KMainWindow* self, QWheelEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->wheelEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KMainWindow_QBaseWheelEvent(KMainWindow* self, QWheelEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_WheelEvent_IsBase(true);
        vkmainwindow->wheelEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnWheelEvent(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_WheelEvent_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_KeyReleaseEvent(KMainWindow* self, QKeyEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->keyReleaseEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KMainWindow_QBaseKeyReleaseEvent(KMainWindow* self, QKeyEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_KeyReleaseEvent_IsBase(true);
        vkmainwindow->keyReleaseEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnKeyReleaseEvent(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_FocusInEvent(KMainWindow* self, QFocusEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->focusInEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KMainWindow_QBaseFocusInEvent(KMainWindow* self, QFocusEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_FocusInEvent_IsBase(true);
        vkmainwindow->focusInEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnFocusInEvent(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_FocusInEvent_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_FocusOutEvent(KMainWindow* self, QFocusEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->focusOutEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KMainWindow_QBaseFocusOutEvent(KMainWindow* self, QFocusEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_FocusOutEvent_IsBase(true);
        vkmainwindow->focusOutEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnFocusOutEvent(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_FocusOutEvent_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_EnterEvent(KMainWindow* self, QEnterEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->enterEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KMainWindow_QBaseEnterEvent(KMainWindow* self, QEnterEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_EnterEvent_IsBase(true);
        vkmainwindow->enterEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnEnterEvent(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_EnterEvent_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_LeaveEvent(KMainWindow* self, QEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->leaveEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KMainWindow_QBaseLeaveEvent(KMainWindow* self, QEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_LeaveEvent_IsBase(true);
        vkmainwindow->leaveEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnLeaveEvent(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_LeaveEvent_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_PaintEvent(KMainWindow* self, QPaintEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->paintEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KMainWindow_QBasePaintEvent(KMainWindow* self, QPaintEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_PaintEvent_IsBase(true);
        vkmainwindow->paintEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnPaintEvent(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_PaintEvent_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_MoveEvent(KMainWindow* self, QMoveEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->moveEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KMainWindow_QBaseMoveEvent(KMainWindow* self, QMoveEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_MoveEvent_IsBase(true);
        vkmainwindow->moveEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnMoveEvent(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_MoveEvent_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_ResizeEvent(KMainWindow* self, QResizeEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->resizeEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KMainWindow_QBaseResizeEvent(KMainWindow* self, QResizeEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_ResizeEvent_IsBase(true);
        vkmainwindow->resizeEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnResizeEvent(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_ResizeEvent_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_TabletEvent(KMainWindow* self, QTabletEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->tabletEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KMainWindow_QBaseTabletEvent(KMainWindow* self, QTabletEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_TabletEvent_IsBase(true);
        vkmainwindow->tabletEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnTabletEvent(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_TabletEvent_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_ActionEvent(KMainWindow* self, QActionEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->actionEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KMainWindow_QBaseActionEvent(KMainWindow* self, QActionEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_ActionEvent_IsBase(true);
        vkmainwindow->actionEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnActionEvent(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_ActionEvent_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_DragEnterEvent(KMainWindow* self, QDragEnterEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->dragEnterEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KMainWindow_QBaseDragEnterEvent(KMainWindow* self, QDragEnterEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_DragEnterEvent_IsBase(true);
        vkmainwindow->dragEnterEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnDragEnterEvent(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_DragEnterEvent_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_DragMoveEvent(KMainWindow* self, QDragMoveEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->dragMoveEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KMainWindow_QBaseDragMoveEvent(KMainWindow* self, QDragMoveEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_DragMoveEvent_IsBase(true);
        vkmainwindow->dragMoveEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnDragMoveEvent(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_DragMoveEvent_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_DragLeaveEvent(KMainWindow* self, QDragLeaveEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->dragLeaveEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KMainWindow_QBaseDragLeaveEvent(KMainWindow* self, QDragLeaveEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_DragLeaveEvent_IsBase(true);
        vkmainwindow->dragLeaveEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnDragLeaveEvent(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_DragLeaveEvent_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_DropEvent(KMainWindow* self, QDropEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->dropEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KMainWindow_QBaseDropEvent(KMainWindow* self, QDropEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_DropEvent_IsBase(true);
        vkmainwindow->dropEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnDropEvent(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_DropEvent_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_ShowEvent(KMainWindow* self, QShowEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->showEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KMainWindow_QBaseShowEvent(KMainWindow* self, QShowEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_ShowEvent_IsBase(true);
        vkmainwindow->showEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnShowEvent(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_ShowEvent_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_HideEvent(KMainWindow* self, QHideEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->hideEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KMainWindow_QBaseHideEvent(KMainWindow* self, QHideEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_HideEvent_IsBase(true);
        vkmainwindow->hideEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnHideEvent(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_HideEvent_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMainWindow_NativeEvent(KMainWindow* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        return vkmainwindow->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKMainWindow*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KMainWindow_QBaseNativeEvent(KMainWindow* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_NativeEvent_IsBase(true);
        return vkmainwindow->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKMainWindow*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnNativeEvent(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_NativeEvent_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_ChangeEvent(KMainWindow* self, QEvent* param1) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->changeEvent(param1);
    } else {
        ((VirtualKMainWindow*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KMainWindow_QBaseChangeEvent(KMainWindow* self, QEvent* param1) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_ChangeEvent_IsBase(true);
        vkmainwindow->changeEvent(param1);
    } else {
        ((VirtualKMainWindow*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnChangeEvent(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_ChangeEvent_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KMainWindow_Metric(const KMainWindow* self, int param1) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        return vkmainwindow->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKMainWindow*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KMainWindow_QBaseMetric(const KMainWindow* self, int param1) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_Metric_IsBase(true);
        return vkmainwindow->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKMainWindow*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnMetric(const KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_Metric_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_InitPainter(const KMainWindow* self, QPainter* painter) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->initPainter(painter);
    } else {
        ((VirtualKMainWindow*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KMainWindow_QBaseInitPainter(const KMainWindow* self, QPainter* painter) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_InitPainter_IsBase(true);
        vkmainwindow->initPainter(painter);
    } else {
        ((VirtualKMainWindow*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnInitPainter(const KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_InitPainter_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KMainWindow_Redirected(const KMainWindow* self, QPoint* offset) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        return vkmainwindow->redirected(offset);
    } else {
        return ((VirtualKMainWindow*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KMainWindow_QBaseRedirected(const KMainWindow* self, QPoint* offset) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_Redirected_IsBase(true);
        return vkmainwindow->redirected(offset);
    } else {
        return ((VirtualKMainWindow*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnRedirected(const KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_Redirected_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KMainWindow_SharedPainter(const KMainWindow* self) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        return vkmainwindow->sharedPainter();
    } else {
        return ((VirtualKMainWindow*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KMainWindow_QBaseSharedPainter(const KMainWindow* self) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_SharedPainter_IsBase(true);
        return vkmainwindow->sharedPainter();
    } else {
        return ((VirtualKMainWindow*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnSharedPainter(const KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_SharedPainter_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_InputMethodEvent(KMainWindow* self, QInputMethodEvent* param1) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->inputMethodEvent(param1);
    } else {
        ((VirtualKMainWindow*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KMainWindow_QBaseInputMethodEvent(KMainWindow* self, QInputMethodEvent* param1) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_InputMethodEvent_IsBase(true);
        vkmainwindow->inputMethodEvent(param1);
    } else {
        ((VirtualKMainWindow*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnInputMethodEvent(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_InputMethodEvent_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KMainWindow_InputMethodQuery(const KMainWindow* self, int param1) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        return new QVariant(vkmainwindow->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKMainWindow*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KMainWindow_QBaseInputMethodQuery(const KMainWindow* self, int param1) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_InputMethodQuery_IsBase(true);
        return new QVariant(vkmainwindow->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKMainWindow*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnInputMethodQuery(const KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_InputMethodQuery_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMainWindow_FocusNextPrevChild(KMainWindow* self, bool next) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        return vkmainwindow->focusNextPrevChild(next);
    } else {
        return ((VirtualKMainWindow*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KMainWindow_QBaseFocusNextPrevChild(KMainWindow* self, bool next) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_FocusNextPrevChild_IsBase(true);
        return vkmainwindow->focusNextPrevChild(next);
    } else {
        return ((VirtualKMainWindow*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnFocusNextPrevChild(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMainWindow_EventFilter(KMainWindow* self, QObject* watched, QEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        return vkmainwindow->eventFilter(watched, event);
    } else {
        return self->KMainWindow::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KMainWindow_QBaseEventFilter(KMainWindow* self, QObject* watched, QEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_EventFilter_IsBase(true);
        return vkmainwindow->eventFilter(watched, event);
    } else {
        return self->KMainWindow::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnEventFilter(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_EventFilter_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_TimerEvent(KMainWindow* self, QTimerEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->timerEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KMainWindow_QBaseTimerEvent(KMainWindow* self, QTimerEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_TimerEvent_IsBase(true);
        vkmainwindow->timerEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnTimerEvent(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_TimerEvent_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_ChildEvent(KMainWindow* self, QChildEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->childEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KMainWindow_QBaseChildEvent(KMainWindow* self, QChildEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_ChildEvent_IsBase(true);
        vkmainwindow->childEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnChildEvent(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_ChildEvent_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_CustomEvent(KMainWindow* self, QEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->customEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KMainWindow_QBaseCustomEvent(KMainWindow* self, QEvent* event) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_CustomEvent_IsBase(true);
        vkmainwindow->customEvent(event);
    } else {
        ((VirtualKMainWindow*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnCustomEvent(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_CustomEvent_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_ConnectNotify(KMainWindow* self, const QMetaMethod* signal) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->connectNotify(*signal);
    } else {
        ((VirtualKMainWindow*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KMainWindow_QBaseConnectNotify(KMainWindow* self, const QMetaMethod* signal) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_ConnectNotify_IsBase(true);
        vkmainwindow->connectNotify(*signal);
    } else {
        ((VirtualKMainWindow*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnConnectNotify(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_ConnectNotify_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_DisconnectNotify(KMainWindow* self, const QMetaMethod* signal) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->disconnectNotify(*signal);
    } else {
        ((VirtualKMainWindow*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KMainWindow_QBaseDisconnectNotify(KMainWindow* self, const QMetaMethod* signal) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_DisconnectNotify_IsBase(true);
        vkmainwindow->disconnectNotify(*signal);
    } else {
        ((VirtualKMainWindow*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnDisconnectNotify(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_DisconnectNotify_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_SavePropertiesInternal(KMainWindow* self, KConfig* param1, int param2) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->savePropertiesInternal(param1, static_cast<int>(param2));
    } else {
        ((VirtualKMainWindow*)self)->savePropertiesInternal(param1, static_cast<int>(param2));
    }
}

// Base class handler implementation
void KMainWindow_QBaseSavePropertiesInternal(KMainWindow* self, KConfig* param1, int param2) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_SavePropertiesInternal_IsBase(true);
        vkmainwindow->savePropertiesInternal(param1, static_cast<int>(param2));
    } else {
        ((VirtualKMainWindow*)self)->savePropertiesInternal(param1, static_cast<int>(param2));
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnSavePropertiesInternal(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_SavePropertiesInternal_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_SavePropertiesInternal_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMainWindow_ReadPropertiesInternal(KMainWindow* self, KConfig* param1, int param2) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        return vkmainwindow->readPropertiesInternal(param1, static_cast<int>(param2));
    } else {
        return ((VirtualKMainWindow*)self)->readPropertiesInternal(param1, static_cast<int>(param2));
    }
}

// Base class handler implementation
bool KMainWindow_QBaseReadPropertiesInternal(KMainWindow* self, KConfig* param1, int param2) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_ReadPropertiesInternal_IsBase(true);
        return vkmainwindow->readPropertiesInternal(param1, static_cast<int>(param2));
    } else {
        return ((VirtualKMainWindow*)self)->readPropertiesInternal(param1, static_cast<int>(param2));
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnReadPropertiesInternal(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_ReadPropertiesInternal_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_ReadPropertiesInternal_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMainWindow_SettingsDirty(const KMainWindow* self) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        return vkmainwindow->settingsDirty();
    } else {
        return ((VirtualKMainWindow*)self)->settingsDirty();
    }
}

// Base class handler implementation
bool KMainWindow_QBaseSettingsDirty(const KMainWindow* self) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_SettingsDirty_IsBase(true);
        return vkmainwindow->settingsDirty();
    } else {
        return ((VirtualKMainWindow*)self)->settingsDirty();
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnSettingsDirty(const KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_SettingsDirty_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_SettingsDirty_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_SaveAutoSaveSettings(KMainWindow* self) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->saveAutoSaveSettings();
    } else {
        ((VirtualKMainWindow*)self)->saveAutoSaveSettings();
    }
}

// Base class handler implementation
void KMainWindow_QBaseSaveAutoSaveSettings(KMainWindow* self) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_SaveAutoSaveSettings_IsBase(true);
        vkmainwindow->saveAutoSaveSettings();
    } else {
        ((VirtualKMainWindow*)self)->saveAutoSaveSettings();
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnSaveAutoSaveSettings(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_SaveAutoSaveSettings_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_SaveAutoSaveSettings_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_UpdateMicroFocus(KMainWindow* self) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->updateMicroFocus();
    } else {
        ((VirtualKMainWindow*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KMainWindow_QBaseUpdateMicroFocus(KMainWindow* self) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_UpdateMicroFocus_IsBase(true);
        vkmainwindow->updateMicroFocus();
    } else {
        ((VirtualKMainWindow*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnUpdateMicroFocus(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_Create(KMainWindow* self) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->create();
    } else {
        ((VirtualKMainWindow*)self)->create();
    }
}

// Base class handler implementation
void KMainWindow_QBaseCreate(KMainWindow* self) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_Create_IsBase(true);
        vkmainwindow->create();
    } else {
        ((VirtualKMainWindow*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnCreate(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_Create_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KMainWindow_Destroy(KMainWindow* self) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->destroy();
    } else {
        ((VirtualKMainWindow*)self)->destroy();
    }
}

// Base class handler implementation
void KMainWindow_QBaseDestroy(KMainWindow* self) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_Destroy_IsBase(true);
        vkmainwindow->destroy();
    } else {
        ((VirtualKMainWindow*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnDestroy(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_Destroy_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMainWindow_FocusNextChild(KMainWindow* self) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        return vkmainwindow->focusNextChild();
    } else {
        return ((VirtualKMainWindow*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KMainWindow_QBaseFocusNextChild(KMainWindow* self) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_FocusNextChild_IsBase(true);
        return vkmainwindow->focusNextChild();
    } else {
        return ((VirtualKMainWindow*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnFocusNextChild(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_FocusNextChild_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMainWindow_FocusPreviousChild(KMainWindow* self) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        return vkmainwindow->focusPreviousChild();
    } else {
        return ((VirtualKMainWindow*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KMainWindow_QBaseFocusPreviousChild(KMainWindow* self) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_FocusPreviousChild_IsBase(true);
        return vkmainwindow->focusPreviousChild();
    } else {
        return ((VirtualKMainWindow*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnFocusPreviousChild(KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = dynamic_cast<VirtualKMainWindow*>(self);
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_FocusPreviousChild_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KMainWindow_Sender(const KMainWindow* self) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        return vkmainwindow->sender();
    } else {
        return ((VirtualKMainWindow*)self)->sender();
    }
}

// Base class handler implementation
QObject* KMainWindow_QBaseSender(const KMainWindow* self) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_Sender_IsBase(true);
        return vkmainwindow->sender();
    } else {
        return ((VirtualKMainWindow*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnSender(const KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_Sender_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KMainWindow_SenderSignalIndex(const KMainWindow* self) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        return vkmainwindow->senderSignalIndex();
    } else {
        return ((VirtualKMainWindow*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KMainWindow_QBaseSenderSignalIndex(const KMainWindow* self) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_SenderSignalIndex_IsBase(true);
        return vkmainwindow->senderSignalIndex();
    } else {
        return ((VirtualKMainWindow*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnSenderSignalIndex(const KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_SenderSignalIndex_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KMainWindow_Receivers(const KMainWindow* self, const char* signal) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        return vkmainwindow->receivers(signal);
    } else {
        return ((VirtualKMainWindow*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KMainWindow_QBaseReceivers(const KMainWindow* self, const char* signal) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_Receivers_IsBase(true);
        return vkmainwindow->receivers(signal);
    } else {
        return ((VirtualKMainWindow*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnReceivers(const KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_Receivers_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMainWindow_IsSignalConnected(const KMainWindow* self, const QMetaMethod* signal) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        return vkmainwindow->isSignalConnected(*signal);
    } else {
        return ((VirtualKMainWindow*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KMainWindow_QBaseIsSignalConnected(const KMainWindow* self, const QMetaMethod* signal) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_IsSignalConnected_IsBase(true);
        return vkmainwindow->isSignalConnected(*signal);
    } else {
        return ((VirtualKMainWindow*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnIsSignalConnected(const KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_IsSignalConnected_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KMainWindow_GetDecodedMetricF(const KMainWindow* self, int metricA, int metricB) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        return vkmainwindow->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKMainWindow*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KMainWindow_QBaseGetDecodedMetricF(const KMainWindow* self, int metricA, int metricB) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_GetDecodedMetricF_IsBase(true);
        return vkmainwindow->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKMainWindow*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KMainWindow_OnGetDecodedMetricF(const KMainWindow* self, intptr_t slot) {
    auto* vkmainwindow = const_cast<VirtualKMainWindow*>(dynamic_cast<const VirtualKMainWindow*>(self));
    if (vkmainwindow && vkmainwindow->isVirtualKMainWindow) {
        vkmainwindow->setKMainWindow_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKMainWindow::KMainWindow_GetDecodedMetricF_Callback>(slot));
    }
}

void KMainWindow_Delete(KMainWindow* self) {
    delete self;
}
