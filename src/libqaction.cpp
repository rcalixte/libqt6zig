#include <QAction>
#include <QActionGroup>
#include <QChildEvent>
#include <QEvent>
#include <QFont>
#include <QIcon>
#include <QKeySequence>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qaction.h>
#include "libqaction.h"
#include "libqaction.hxx"

QAction* QAction_new() {
    return new VirtualQAction();
}

QAction* QAction_new2(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQAction(text_QString);
}

QAction* QAction_new3(const QIcon* icon, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQAction(*icon, text_QString);
}

QAction* QAction_new4(QObject* parent) {
    return new VirtualQAction(parent);
}

QAction* QAction_new5(const libqt_string text, QObject* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQAction(text_QString, parent);
}

QAction* QAction_new6(const QIcon* icon, const libqt_string text, QObject* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQAction(*icon, text_QString, parent);
}

QMetaObject* QAction_MetaObject(const QAction* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAction_Metacast(QAction* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAction_Metacall(QAction* self, int param1, int param2, void** param3) {
    auto* vqaction = dynamic_cast<VirtualQAction*>(self);
    if (vqaction && vqaction->isVirtualQAction) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAction*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAction_OnMetacall(QAction* self, intptr_t slot) {
    auto* vqaction = dynamic_cast<VirtualQAction*>(self);
    if (vqaction && vqaction->isVirtualQAction) {
        vqaction->setQAction_Metacall_Callback(reinterpret_cast<VirtualQAction::QAction_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAction_QBaseMetacall(QAction* self, int param1, int param2, void** param3) {
    auto* vqaction = dynamic_cast<VirtualQAction*>(self);
    if (vqaction && vqaction->isVirtualQAction) {
        vqaction->setQAction_Metacall_IsBase(true);
        return vqaction->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAction*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAction_Tr(const char* s) {
    QString _ret = QAction::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QObject* */ QAction_AssociatedObjects(const QAction* self) {
    QList<QObject*> _ret = self->associatedObjects();
    // Convert QList<> from C++ memory to manually-managed C memory
    QObject** _arr = static_cast<QObject**>(malloc(sizeof(QObject*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QAction_SetActionGroup(QAction* self, QActionGroup* group) {
    self->setActionGroup(group);
}

QActionGroup* QAction_ActionGroup(const QAction* self) {
    return self->actionGroup();
}

void QAction_SetIcon(QAction* self, const QIcon* icon) {
    self->setIcon(*icon);
}

QIcon* QAction_Icon(const QAction* self) {
    return new QIcon(self->icon());
}

void QAction_SetText(QAction* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

libqt_string QAction_Text(const QAction* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAction_SetIconText(QAction* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setIconText(text_QString);
}

libqt_string QAction_IconText(const QAction* self) {
    QString _ret = self->iconText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAction_SetToolTip(QAction* self, const libqt_string tip) {
    QString tip_QString = QString::fromUtf8(tip.data, tip.len);
    self->setToolTip(tip_QString);
}

libqt_string QAction_ToolTip(const QAction* self) {
    QString _ret = self->toolTip();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAction_SetStatusTip(QAction* self, const libqt_string statusTip) {
    QString statusTip_QString = QString::fromUtf8(statusTip.data, statusTip.len);
    self->setStatusTip(statusTip_QString);
}

libqt_string QAction_StatusTip(const QAction* self) {
    QString _ret = self->statusTip();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAction_SetWhatsThis(QAction* self, const libqt_string what) {
    QString what_QString = QString::fromUtf8(what.data, what.len);
    self->setWhatsThis(what_QString);
}

libqt_string QAction_WhatsThis(const QAction* self) {
    QString _ret = self->whatsThis();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAction_SetPriority(QAction* self, int priority) {
    self->setPriority(static_cast<QAction::Priority>(priority));
}

int QAction_Priority(const QAction* self) {
    return static_cast<int>(self->priority());
}

void QAction_SetSeparator(QAction* self, bool b) {
    self->setSeparator(b);
}

bool QAction_IsSeparator(const QAction* self) {
    return self->isSeparator();
}

void QAction_SetShortcut(QAction* self, const QKeySequence* shortcut) {
    self->setShortcut(*shortcut);
}

QKeySequence* QAction_Shortcut(const QAction* self) {
    return new QKeySequence(self->shortcut());
}

void QAction_SetShortcuts(QAction* self, const libqt_list /* of QKeySequence* */ shortcuts) {
    QList<QKeySequence> shortcuts_QList;
    shortcuts_QList.reserve(shortcuts.len);
    QKeySequence** shortcuts_arr = static_cast<QKeySequence**>(shortcuts.data);
    for (size_t i = 0; i < shortcuts.len; ++i) {
        shortcuts_QList.push_back(*(shortcuts_arr[i]));
    }
    self->setShortcuts(shortcuts_QList);
}

void QAction_SetShortcuts2(QAction* self, int shortcuts) {
    self->setShortcuts(static_cast<QKeySequence::StandardKey>(shortcuts));
}

libqt_list /* of QKeySequence* */ QAction_Shortcuts(const QAction* self) {
    QList<QKeySequence> _ret = self->shortcuts();
    // Convert QList<> from C++ memory to manually-managed C memory
    QKeySequence** _arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QKeySequence(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QAction_SetShortcutContext(QAction* self, int context) {
    self->setShortcutContext(static_cast<Qt::ShortcutContext>(context));
}

int QAction_ShortcutContext(const QAction* self) {
    return static_cast<int>(self->shortcutContext());
}

void QAction_SetAutoRepeat(QAction* self, bool autoRepeat) {
    self->setAutoRepeat(autoRepeat);
}

bool QAction_AutoRepeat(const QAction* self) {
    return self->autoRepeat();
}

void QAction_SetFont(QAction* self, const QFont* font) {
    self->setFont(*font);
}

QFont* QAction_Font(const QAction* self) {
    return new QFont(self->font());
}

void QAction_SetCheckable(QAction* self, bool checkable) {
    self->setCheckable(checkable);
}

bool QAction_IsCheckable(const QAction* self) {
    return self->isCheckable();
}

QVariant* QAction_Data(const QAction* self) {
    return new QVariant(self->data());
}

void QAction_SetData(QAction* self, const QVariant* varVal) {
    self->setData(*varVal);
}

bool QAction_IsChecked(const QAction* self) {
    return self->isChecked();
}

bool QAction_IsEnabled(const QAction* self) {
    return self->isEnabled();
}

bool QAction_IsVisible(const QAction* self) {
    return self->isVisible();
}

void QAction_Activate(QAction* self, int event) {
    self->activate(static_cast<QAction::ActionEvent>(event));
}

void QAction_SetMenuRole(QAction* self, int menuRole) {
    self->setMenuRole(static_cast<QAction::MenuRole>(menuRole));
}

int QAction_MenuRole(const QAction* self) {
    return static_cast<int>(self->menuRole());
}

void QAction_SetIconVisibleInMenu(QAction* self, bool visible) {
    self->setIconVisibleInMenu(visible);
}

bool QAction_IsIconVisibleInMenu(const QAction* self) {
    return self->isIconVisibleInMenu();
}

void QAction_SetShortcutVisibleInContextMenu(QAction* self, bool show) {
    self->setShortcutVisibleInContextMenu(show);
}

bool QAction_IsShortcutVisibleInContextMenu(const QAction* self) {
    return self->isShortcutVisibleInContextMenu();
}

bool QAction_ShowStatusText(QAction* self) {
    return self->showStatusText();
}

bool QAction_Event(QAction* self, QEvent* param1) {
    auto* vqaction = dynamic_cast<VirtualQAction*>(self);
    if (vqaction && vqaction->isVirtualQAction) {
        return vqaction->event(param1);
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QAction_OnEvent(QAction* self, intptr_t slot) {
    auto* vqaction = dynamic_cast<VirtualQAction*>(self);
    if (vqaction && vqaction->isVirtualQAction) {
        vqaction->setQAction_Event_Callback(reinterpret_cast<VirtualQAction::QAction_Event_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QAction_QBaseEvent(QAction* self, QEvent* param1) {
    auto* vqaction = dynamic_cast<VirtualQAction*>(self);
    if (vqaction && vqaction->isVirtualQAction) {
        vqaction->setQAction_Event_IsBase(true);
        return vqaction->event(param1);
    }
    return {};
}

void QAction_Trigger(QAction* self) {
    self->trigger();
}

void QAction_Hover(QAction* self) {
    self->hover();
}

void QAction_SetChecked(QAction* self, bool checked) {
    self->setChecked(checked);
}

void QAction_Toggle(QAction* self) {
    self->toggle();
}

void QAction_SetEnabled(QAction* self, bool enabled) {
    self->setEnabled(enabled);
}

void QAction_ResetEnabled(QAction* self) {
    self->resetEnabled();
}

void QAction_SetDisabled(QAction* self, bool b) {
    self->setDisabled(b);
}

void QAction_SetVisible(QAction* self, bool visible) {
    self->setVisible(visible);
}

void QAction_Changed(QAction* self) {
    self->changed();
}

void QAction_Connect_Changed(QAction* self, intptr_t slot) {
    void (*slotFunc)(QAction*) = reinterpret_cast<void (*)(QAction*)>(slot);
    QAction::connect(self, &QAction::changed, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAction_EnabledChanged(QAction* self, bool enabled) {
    self->enabledChanged(enabled);
}

void QAction_Connect_EnabledChanged(QAction* self, intptr_t slot) {
    void (*slotFunc)(QAction*, bool) = reinterpret_cast<void (*)(QAction*, bool)>(slot);
    QAction::connect(self, &QAction::enabledChanged, [self, slotFunc](bool enabled) {
        bool sigval1 = enabled;
        slotFunc(self, sigval1);
    });
}

void QAction_CheckableChanged(QAction* self, bool checkable) {
    self->checkableChanged(checkable);
}

void QAction_Connect_CheckableChanged(QAction* self, intptr_t slot) {
    void (*slotFunc)(QAction*, bool) = reinterpret_cast<void (*)(QAction*, bool)>(slot);
    QAction::connect(self, &QAction::checkableChanged, [self, slotFunc](bool checkable) {
        bool sigval1 = checkable;
        slotFunc(self, sigval1);
    });
}

void QAction_VisibleChanged(QAction* self) {
    self->visibleChanged();
}

void QAction_Connect_VisibleChanged(QAction* self, intptr_t slot) {
    void (*slotFunc)(QAction*) = reinterpret_cast<void (*)(QAction*)>(slot);
    QAction::connect(self, &QAction::visibleChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAction_Triggered(QAction* self) {
    self->triggered();
}

void QAction_Connect_Triggered(QAction* self, intptr_t slot) {
    void (*slotFunc)(QAction*) = reinterpret_cast<void (*)(QAction*)>(slot);
    QAction::connect(self, &QAction::triggered, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAction_Hovered(QAction* self) {
    self->hovered();
}

void QAction_Connect_Hovered(QAction* self, intptr_t slot) {
    void (*slotFunc)(QAction*) = reinterpret_cast<void (*)(QAction*)>(slot);
    QAction::connect(self, &QAction::hovered, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAction_Toggled(QAction* self, bool param1) {
    self->toggled(param1);
}

void QAction_Connect_Toggled(QAction* self, intptr_t slot) {
    void (*slotFunc)(QAction*, bool) = reinterpret_cast<void (*)(QAction*, bool)>(slot);
    QAction::connect(self, &QAction::toggled, [self, slotFunc](bool param1) {
        bool sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

libqt_string QAction_Tr2(const char* s, const char* c) {
    QString _ret = QAction::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAction_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAction::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QAction_ShowStatusText1(QAction* self, QObject* object) {
    return self->showStatusText(object);
}

void QAction_Triggered1(QAction* self, bool checked) {
    self->triggered(checked);
}

void QAction_Connect_Triggered1(QAction* self, intptr_t slot) {
    void (*slotFunc)(QAction*, bool) = reinterpret_cast<void (*)(QAction*, bool)>(slot);
    QAction::connect(self, &QAction::triggered, [self, slotFunc](bool checked) {
        bool sigval1 = checked;
        slotFunc(self, sigval1);
    });
}

// Derived class handler implementation
bool QAction_EventFilter(QAction* self, QObject* watched, QEvent* event) {
    auto* vqaction = dynamic_cast<VirtualQAction*>(self);
    if (vqaction && vqaction->isVirtualQAction) {
        return vqaction->eventFilter(watched, event);
    } else {
        return self->QAction::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAction_QBaseEventFilter(QAction* self, QObject* watched, QEvent* event) {
    auto* vqaction = dynamic_cast<VirtualQAction*>(self);
    if (vqaction && vqaction->isVirtualQAction) {
        vqaction->setQAction_EventFilter_IsBase(true);
        return vqaction->eventFilter(watched, event);
    } else {
        return self->QAction::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAction_OnEventFilter(QAction* self, intptr_t slot) {
    auto* vqaction = dynamic_cast<VirtualQAction*>(self);
    if (vqaction && vqaction->isVirtualQAction) {
        vqaction->setQAction_EventFilter_Callback(reinterpret_cast<VirtualQAction::QAction_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAction_TimerEvent(QAction* self, QTimerEvent* event) {
    auto* vqaction = dynamic_cast<VirtualQAction*>(self);
    if (vqaction && vqaction->isVirtualQAction) {
        vqaction->timerEvent(event);
    } else {
        ((VirtualQAction*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QAction_QBaseTimerEvent(QAction* self, QTimerEvent* event) {
    auto* vqaction = dynamic_cast<VirtualQAction*>(self);
    if (vqaction && vqaction->isVirtualQAction) {
        vqaction->setQAction_TimerEvent_IsBase(true);
        vqaction->timerEvent(event);
    } else {
        ((VirtualQAction*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAction_OnTimerEvent(QAction* self, intptr_t slot) {
    auto* vqaction = dynamic_cast<VirtualQAction*>(self);
    if (vqaction && vqaction->isVirtualQAction) {
        vqaction->setQAction_TimerEvent_Callback(reinterpret_cast<VirtualQAction::QAction_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAction_ChildEvent(QAction* self, QChildEvent* event) {
    auto* vqaction = dynamic_cast<VirtualQAction*>(self);
    if (vqaction && vqaction->isVirtualQAction) {
        vqaction->childEvent(event);
    } else {
        ((VirtualQAction*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QAction_QBaseChildEvent(QAction* self, QChildEvent* event) {
    auto* vqaction = dynamic_cast<VirtualQAction*>(self);
    if (vqaction && vqaction->isVirtualQAction) {
        vqaction->setQAction_ChildEvent_IsBase(true);
        vqaction->childEvent(event);
    } else {
        ((VirtualQAction*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAction_OnChildEvent(QAction* self, intptr_t slot) {
    auto* vqaction = dynamic_cast<VirtualQAction*>(self);
    if (vqaction && vqaction->isVirtualQAction) {
        vqaction->setQAction_ChildEvent_Callback(reinterpret_cast<VirtualQAction::QAction_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAction_CustomEvent(QAction* self, QEvent* event) {
    auto* vqaction = dynamic_cast<VirtualQAction*>(self);
    if (vqaction && vqaction->isVirtualQAction) {
        vqaction->customEvent(event);
    } else {
        ((VirtualQAction*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QAction_QBaseCustomEvent(QAction* self, QEvent* event) {
    auto* vqaction = dynamic_cast<VirtualQAction*>(self);
    if (vqaction && vqaction->isVirtualQAction) {
        vqaction->setQAction_CustomEvent_IsBase(true);
        vqaction->customEvent(event);
    } else {
        ((VirtualQAction*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAction_OnCustomEvent(QAction* self, intptr_t slot) {
    auto* vqaction = dynamic_cast<VirtualQAction*>(self);
    if (vqaction && vqaction->isVirtualQAction) {
        vqaction->setQAction_CustomEvent_Callback(reinterpret_cast<VirtualQAction::QAction_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAction_ConnectNotify(QAction* self, const QMetaMethod* signal) {
    auto* vqaction = dynamic_cast<VirtualQAction*>(self);
    if (vqaction && vqaction->isVirtualQAction) {
        vqaction->connectNotify(*signal);
    } else {
        ((VirtualQAction*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAction_QBaseConnectNotify(QAction* self, const QMetaMethod* signal) {
    auto* vqaction = dynamic_cast<VirtualQAction*>(self);
    if (vqaction && vqaction->isVirtualQAction) {
        vqaction->setQAction_ConnectNotify_IsBase(true);
        vqaction->connectNotify(*signal);
    } else {
        ((VirtualQAction*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAction_OnConnectNotify(QAction* self, intptr_t slot) {
    auto* vqaction = dynamic_cast<VirtualQAction*>(self);
    if (vqaction && vqaction->isVirtualQAction) {
        vqaction->setQAction_ConnectNotify_Callback(reinterpret_cast<VirtualQAction::QAction_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAction_DisconnectNotify(QAction* self, const QMetaMethod* signal) {
    auto* vqaction = dynamic_cast<VirtualQAction*>(self);
    if (vqaction && vqaction->isVirtualQAction) {
        vqaction->disconnectNotify(*signal);
    } else {
        ((VirtualQAction*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAction_QBaseDisconnectNotify(QAction* self, const QMetaMethod* signal) {
    auto* vqaction = dynamic_cast<VirtualQAction*>(self);
    if (vqaction && vqaction->isVirtualQAction) {
        vqaction->setQAction_DisconnectNotify_IsBase(true);
        vqaction->disconnectNotify(*signal);
    } else {
        ((VirtualQAction*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAction_OnDisconnectNotify(QAction* self, intptr_t slot) {
    auto* vqaction = dynamic_cast<VirtualQAction*>(self);
    if (vqaction && vqaction->isVirtualQAction) {
        vqaction->setQAction_DisconnectNotify_Callback(reinterpret_cast<VirtualQAction::QAction_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAction_Sender(const QAction* self) {
    auto* vqaction = const_cast<VirtualQAction*>(dynamic_cast<const VirtualQAction*>(self));
    if (vqaction && vqaction->isVirtualQAction) {
        return vqaction->sender();
    } else {
        return ((VirtualQAction*)self)->sender();
    }
}

// Base class handler implementation
QObject* QAction_QBaseSender(const QAction* self) {
    auto* vqaction = const_cast<VirtualQAction*>(dynamic_cast<const VirtualQAction*>(self));
    if (vqaction && vqaction->isVirtualQAction) {
        vqaction->setQAction_Sender_IsBase(true);
        return vqaction->sender();
    } else {
        return ((VirtualQAction*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAction_OnSender(const QAction* self, intptr_t slot) {
    auto* vqaction = const_cast<VirtualQAction*>(dynamic_cast<const VirtualQAction*>(self));
    if (vqaction && vqaction->isVirtualQAction) {
        vqaction->setQAction_Sender_Callback(reinterpret_cast<VirtualQAction::QAction_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAction_SenderSignalIndex(const QAction* self) {
    auto* vqaction = const_cast<VirtualQAction*>(dynamic_cast<const VirtualQAction*>(self));
    if (vqaction && vqaction->isVirtualQAction) {
        return vqaction->senderSignalIndex();
    } else {
        return ((VirtualQAction*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QAction_QBaseSenderSignalIndex(const QAction* self) {
    auto* vqaction = const_cast<VirtualQAction*>(dynamic_cast<const VirtualQAction*>(self));
    if (vqaction && vqaction->isVirtualQAction) {
        vqaction->setQAction_SenderSignalIndex_IsBase(true);
        return vqaction->senderSignalIndex();
    } else {
        return ((VirtualQAction*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAction_OnSenderSignalIndex(const QAction* self, intptr_t slot) {
    auto* vqaction = const_cast<VirtualQAction*>(dynamic_cast<const VirtualQAction*>(self));
    if (vqaction && vqaction->isVirtualQAction) {
        vqaction->setQAction_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAction::QAction_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAction_Receivers(const QAction* self, const char* signal) {
    auto* vqaction = const_cast<VirtualQAction*>(dynamic_cast<const VirtualQAction*>(self));
    if (vqaction && vqaction->isVirtualQAction) {
        return vqaction->receivers(signal);
    } else {
        return ((VirtualQAction*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QAction_QBaseReceivers(const QAction* self, const char* signal) {
    auto* vqaction = const_cast<VirtualQAction*>(dynamic_cast<const VirtualQAction*>(self));
    if (vqaction && vqaction->isVirtualQAction) {
        vqaction->setQAction_Receivers_IsBase(true);
        return vqaction->receivers(signal);
    } else {
        return ((VirtualQAction*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAction_OnReceivers(const QAction* self, intptr_t slot) {
    auto* vqaction = const_cast<VirtualQAction*>(dynamic_cast<const VirtualQAction*>(self));
    if (vqaction && vqaction->isVirtualQAction) {
        vqaction->setQAction_Receivers_Callback(reinterpret_cast<VirtualQAction::QAction_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAction_IsSignalConnected(const QAction* self, const QMetaMethod* signal) {
    auto* vqaction = const_cast<VirtualQAction*>(dynamic_cast<const VirtualQAction*>(self));
    if (vqaction && vqaction->isVirtualQAction) {
        return vqaction->isSignalConnected(*signal);
    } else {
        return ((VirtualQAction*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAction_QBaseIsSignalConnected(const QAction* self, const QMetaMethod* signal) {
    auto* vqaction = const_cast<VirtualQAction*>(dynamic_cast<const VirtualQAction*>(self));
    if (vqaction && vqaction->isVirtualQAction) {
        vqaction->setQAction_IsSignalConnected_IsBase(true);
        return vqaction->isSignalConnected(*signal);
    } else {
        return ((VirtualQAction*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAction_OnIsSignalConnected(const QAction* self, intptr_t slot) {
    auto* vqaction = const_cast<VirtualQAction*>(dynamic_cast<const VirtualQAction*>(self));
    if (vqaction && vqaction->isVirtualQAction) {
        vqaction->setQAction_IsSignalConnected_Callback(reinterpret_cast<VirtualQAction::QAction_IsSignalConnected_Callback>(slot));
    }
}

void QAction_Delete(QAction* self) {
    delete self;
}
