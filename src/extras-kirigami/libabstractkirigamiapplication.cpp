#include <AbstractKirigamiApplication>
#include <KirigamiActionCollection>
#include <QAbstractListModel>
#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSortFilterProxyModel>
#include <QString>
#include <QTimerEvent>
#include <abstractkirigamiapplication.h>
#include "libabstractkirigamiapplication.h"
#include "libabstractkirigamiapplication.hxx"

AbstractKirigamiApplication* AbstractKirigamiApplication_new() {
    return new VirtualAbstractKirigamiApplication();
}

AbstractKirigamiApplication* AbstractKirigamiApplication_new2(QObject* parent) {
    return new VirtualAbstractKirigamiApplication(parent);
}

QMetaObject* AbstractKirigamiApplication_MetaObject(const AbstractKirigamiApplication* self) {
    return (QMetaObject*)self->metaObject();
}

void* AbstractKirigamiApplication_Metacast(AbstractKirigamiApplication* self, const char* param1) {
    return self->qt_metacast(param1);
}

int AbstractKirigamiApplication_Metacall(AbstractKirigamiApplication* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string AbstractKirigamiApplication_Tr(const char* s) {
    auto _ret = AbstractKirigamiApplication::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of KirigamiActionCollection* */ AbstractKirigamiApplication_ActionCollections(const AbstractKirigamiApplication* self) {
    QList<KirigamiActionCollection*> _ret = self->actionCollections();
    // Convert QList<> from C++ memory to manually-managed C memory
    KirigamiActionCollection** _arr = static_cast<KirigamiActionCollection**>(malloc(sizeof(KirigamiActionCollection*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

KirigamiActionCollection* AbstractKirigamiApplication_MainCollection(const AbstractKirigamiApplication* self) {
    return self->mainCollection();
}

QSortFilterProxyModel* AbstractKirigamiApplication_ActionsModel(AbstractKirigamiApplication* self) {
    return self->actionsModel();
}

QAbstractListModel* AbstractKirigamiApplication_ShortcutsModel(AbstractKirigamiApplication* self) {
    return self->shortcutsModel();
}

QAction* AbstractKirigamiApplication_Action(AbstractKirigamiApplication* self, const libqt_string actionName) {
    QString actionName_QString = QString::fromUtf8(actionName.data, actionName.len);
    return self->action(actionName_QString);
}

QObject* AbstractKirigamiApplication_ConfigurationView(const AbstractKirigamiApplication* self) {
    return self->configurationView();
}

void AbstractKirigamiApplication_SetConfigurationView(AbstractKirigamiApplication* self, QObject* configurationView) {
    self->setConfigurationView(configurationView);
}

void AbstractKirigamiApplication_OpenAboutPage(AbstractKirigamiApplication* self) {
    self->openAboutPage();
}

void AbstractKirigamiApplication_Connect_OpenAboutPage(AbstractKirigamiApplication* self, intptr_t slot) {
    void (*slotFunc)(AbstractKirigamiApplication*) = reinterpret_cast<void (*)(AbstractKirigamiApplication*)>(slot);
    AbstractKirigamiApplication::connect(self,
                                         static_cast<void (AbstractKirigamiApplication::*)()>(&AbstractKirigamiApplication::openAboutPage),
                                         [self, slotFunc]() {
                                             slotFunc(self);
                                         });
}

void AbstractKirigamiApplication_OpenAboutKDEPage(AbstractKirigamiApplication* self) {
    self->openAboutKDEPage();
}

void AbstractKirigamiApplication_Connect_OpenAboutKDEPage(AbstractKirigamiApplication* self, intptr_t slot) {
    void (*slotFunc)(AbstractKirigamiApplication*) = reinterpret_cast<void (*)(AbstractKirigamiApplication*)>(slot);
    AbstractKirigamiApplication::connect(self,
                                         static_cast<void (AbstractKirigamiApplication::*)()>(&AbstractKirigamiApplication::openAboutKDEPage),
                                         [self, slotFunc]() {
                                             slotFunc(self);
                                         });
}

void AbstractKirigamiApplication_OpenKCommandBarAction(AbstractKirigamiApplication* self) {
    self->openKCommandBarAction();
}

void AbstractKirigamiApplication_Connect_OpenKCommandBarAction(AbstractKirigamiApplication* self, intptr_t slot) {
    void (*slotFunc)(AbstractKirigamiApplication*) = reinterpret_cast<void (*)(AbstractKirigamiApplication*)>(slot);
    AbstractKirigamiApplication::connect(self,
                                         static_cast<void (AbstractKirigamiApplication::*)()>(&AbstractKirigamiApplication::openKCommandBarAction),
                                         [self, slotFunc]() {
                                             slotFunc(self);
                                         });
}

void AbstractKirigamiApplication_ShortcutsEditorAction(AbstractKirigamiApplication* self) {
    self->shortcutsEditorAction();
}

void AbstractKirigamiApplication_Connect_ShortcutsEditorAction(AbstractKirigamiApplication* self, intptr_t slot) {
    void (*slotFunc)(AbstractKirigamiApplication*) = reinterpret_cast<void (*)(AbstractKirigamiApplication*)>(slot);
    AbstractKirigamiApplication::connect(self,
                                         static_cast<void (AbstractKirigamiApplication::*)()>(&AbstractKirigamiApplication::shortcutsEditorAction),
                                         [self, slotFunc]() {
                                             slotFunc(self);
                                         });
}

void AbstractKirigamiApplication_ConfigurationViewChanged(AbstractKirigamiApplication* self) {
    self->configurationViewChanged();
}

void AbstractKirigamiApplication_Connect_ConfigurationViewChanged(AbstractKirigamiApplication* self, intptr_t slot) {
    void (*slotFunc)(AbstractKirigamiApplication*) = reinterpret_cast<void (*)(AbstractKirigamiApplication*)>(slot);
    AbstractKirigamiApplication::connect(self,
                                         static_cast<void (AbstractKirigamiApplication::*)()>(&AbstractKirigamiApplication::configurationViewChanged),
                                         [self, slotFunc]() {
                                             slotFunc(self);
                                         });
}

void AbstractKirigamiApplication_SetupActions(AbstractKirigamiApplication* self) {
    auto* vabstractkirigamiapplication = dynamic_cast<VirtualAbstractKirigamiApplication*>(self);
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication) {
        vabstractkirigamiapplication->setupActions();
    }
}

libqt_string AbstractKirigamiApplication_Tr2(const char* s, const char* c) {
    auto _ret = AbstractKirigamiApplication::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string AbstractKirigamiApplication_Tr3(const char* s, const char* c, int n) {
    auto _ret = AbstractKirigamiApplication::tr(s, c, static_cast<int>(n));
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
QMetaObject* AbstractKirigamiApplication_SuperMetaObject(const AbstractKirigamiApplication* self) {
    auto* vabstractkirigamiapplication = const_cast<VirtualAbstractKirigamiApplication*>(dynamic_cast<const VirtualAbstractKirigamiApplication*>(self));
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication) {
        vabstractkirigamiapplication->setAbstractKirigamiApplication_MetaObject_IsBase(true);
        return (QMetaObject*)vabstractkirigamiapplication->metaObject();
    } else {
        return (QMetaObject*)self->AbstractKirigamiApplication::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void AbstractKirigamiApplication_OnMetaObject(const AbstractKirigamiApplication* self, intptr_t slot) {
    auto* vabstractkirigamiapplication = const_cast<VirtualAbstractKirigamiApplication*>(dynamic_cast<const VirtualAbstractKirigamiApplication*>(self));
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication)
        vabstractkirigamiapplication->setAbstractKirigamiApplication_MetaObject_Callback(reinterpret_cast<VirtualAbstractKirigamiApplication::AbstractKirigamiApplication_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* AbstractKirigamiApplication_SuperMetacast(AbstractKirigamiApplication* self, const char* param1) {
    auto* vabstractkirigamiapplication = dynamic_cast<VirtualAbstractKirigamiApplication*>(self);
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication) {
        vabstractkirigamiapplication->setAbstractKirigamiApplication_Metacast_IsBase(true);
        return vabstractkirigamiapplication->qt_metacast(param1);
    } else {
        return self->AbstractKirigamiApplication::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void AbstractKirigamiApplication_OnMetacast(AbstractKirigamiApplication* self, intptr_t slot) {
    auto* vabstractkirigamiapplication = dynamic_cast<VirtualAbstractKirigamiApplication*>(self);
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication)
        vabstractkirigamiapplication->setAbstractKirigamiApplication_Metacast_Callback(reinterpret_cast<VirtualAbstractKirigamiApplication::AbstractKirigamiApplication_Metacast_Callback>(slot));
}

// Base class handler implementation
int AbstractKirigamiApplication_SuperMetacall(AbstractKirigamiApplication* self, int param1, int param2, void** param3) {
    auto* vabstractkirigamiapplication = dynamic_cast<VirtualAbstractKirigamiApplication*>(self);
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication) {
        vabstractkirigamiapplication->setAbstractKirigamiApplication_Metacall_IsBase(true);
        return vabstractkirigamiapplication->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->AbstractKirigamiApplication::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void AbstractKirigamiApplication_OnMetacall(AbstractKirigamiApplication* self, intptr_t slot) {
    auto* vabstractkirigamiapplication = dynamic_cast<VirtualAbstractKirigamiApplication*>(self);
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication)
        vabstractkirigamiapplication->setAbstractKirigamiApplication_Metacall_Callback(reinterpret_cast<VirtualAbstractKirigamiApplication::AbstractKirigamiApplication_Metacall_Callback>(slot));
}

// Base class handler implementation
libqt_list /* of KirigamiActionCollection* */ AbstractKirigamiApplication_SuperActionCollections(const AbstractKirigamiApplication* self) {
    auto* vabstractkirigamiapplication = const_cast<VirtualAbstractKirigamiApplication*>(dynamic_cast<const VirtualAbstractKirigamiApplication*>(self));
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication) {
        vabstractkirigamiapplication->setAbstractKirigamiApplication_ActionCollections_IsBase(true);
        QList<KirigamiActionCollection*> _ret = vabstractkirigamiapplication->actionCollections();
        // Convert QList<> from C++ memory to manually-managed C memory
        KirigamiActionCollection** _arr = static_cast<KirigamiActionCollection**>(malloc(sizeof(KirigamiActionCollection*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<KirigamiActionCollection*> _ret = self->AbstractKirigamiApplication::actionCollections();
        // Convert QList<> from C++ memory to manually-managed C memory
        KirigamiActionCollection** _arr = static_cast<KirigamiActionCollection**>(malloc(sizeof(KirigamiActionCollection*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void AbstractKirigamiApplication_OnActionCollections(const AbstractKirigamiApplication* self, intptr_t slot) {
    auto* vabstractkirigamiapplication = const_cast<VirtualAbstractKirigamiApplication*>(dynamic_cast<const VirtualAbstractKirigamiApplication*>(self));
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication)
        vabstractkirigamiapplication->setAbstractKirigamiApplication_ActionCollections_Callback(reinterpret_cast<VirtualAbstractKirigamiApplication::AbstractKirigamiApplication_ActionCollections_Callback>(slot));
}

// Base class handler implementation
void AbstractKirigamiApplication_SuperSetupActions(AbstractKirigamiApplication* self) {
    auto* vabstractkirigamiapplication = dynamic_cast<VirtualAbstractKirigamiApplication*>(self);
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication) {
        vabstractkirigamiapplication->setAbstractKirigamiApplication_SetupActions_IsBase(true);
        vabstractkirigamiapplication->setupActions();
    } else {
        ((VirtualAbstractKirigamiApplication*)self)->setupActions();
    }
}

// Auxiliary method to allow providing re-implementation
void AbstractKirigamiApplication_OnSetupActions(AbstractKirigamiApplication* self, intptr_t slot) {
    auto* vabstractkirigamiapplication = dynamic_cast<VirtualAbstractKirigamiApplication*>(self);
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication)
        vabstractkirigamiapplication->setAbstractKirigamiApplication_SetupActions_Callback(reinterpret_cast<VirtualAbstractKirigamiApplication::AbstractKirigamiApplication_SetupActions_Callback>(slot));
}

// Derived class handler implementation
bool AbstractKirigamiApplication_Event(AbstractKirigamiApplication* self, QEvent* event) {
    auto* vabstractkirigamiapplication = dynamic_cast<VirtualAbstractKirigamiApplication*>(self);
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication) {
        return vabstractkirigamiapplication->event(event);
    } else {
        return self->AbstractKirigamiApplication::event(event);
    }
}

// Base class handler implementation
bool AbstractKirigamiApplication_SuperEvent(AbstractKirigamiApplication* self, QEvent* event) {
    auto* vabstractkirigamiapplication = dynamic_cast<VirtualAbstractKirigamiApplication*>(self);
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication) {
        vabstractkirigamiapplication->setAbstractKirigamiApplication_Event_IsBase(true);
        return vabstractkirigamiapplication->event(event);
    } else {
        return self->AbstractKirigamiApplication::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void AbstractKirigamiApplication_OnEvent(AbstractKirigamiApplication* self, intptr_t slot) {
    auto* vabstractkirigamiapplication = dynamic_cast<VirtualAbstractKirigamiApplication*>(self);
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication)
        vabstractkirigamiapplication->setAbstractKirigamiApplication_Event_Callback(reinterpret_cast<VirtualAbstractKirigamiApplication::AbstractKirigamiApplication_Event_Callback>(slot));
}

// Derived class handler implementation
bool AbstractKirigamiApplication_EventFilter(AbstractKirigamiApplication* self, QObject* watched, QEvent* event) {
    auto* vabstractkirigamiapplication = dynamic_cast<VirtualAbstractKirigamiApplication*>(self);
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication) {
        return vabstractkirigamiapplication->eventFilter(watched, event);
    } else {
        return self->AbstractKirigamiApplication::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool AbstractKirigamiApplication_SuperEventFilter(AbstractKirigamiApplication* self, QObject* watched, QEvent* event) {
    auto* vabstractkirigamiapplication = dynamic_cast<VirtualAbstractKirigamiApplication*>(self);
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication) {
        vabstractkirigamiapplication->setAbstractKirigamiApplication_EventFilter_IsBase(true);
        return vabstractkirigamiapplication->eventFilter(watched, event);
    } else {
        return self->AbstractKirigamiApplication::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void AbstractKirigamiApplication_OnEventFilter(AbstractKirigamiApplication* self, intptr_t slot) {
    auto* vabstractkirigamiapplication = dynamic_cast<VirtualAbstractKirigamiApplication*>(self);
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication)
        vabstractkirigamiapplication->setAbstractKirigamiApplication_EventFilter_Callback(reinterpret_cast<VirtualAbstractKirigamiApplication::AbstractKirigamiApplication_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void AbstractKirigamiApplication_TimerEvent(AbstractKirigamiApplication* self, QTimerEvent* event) {
    auto* vabstractkirigamiapplication = dynamic_cast<VirtualAbstractKirigamiApplication*>(self);
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication) {
        vabstractkirigamiapplication->timerEvent(event);
    } else {
        ((VirtualAbstractKirigamiApplication*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void AbstractKirigamiApplication_SuperTimerEvent(AbstractKirigamiApplication* self, QTimerEvent* event) {
    auto* vabstractkirigamiapplication = dynamic_cast<VirtualAbstractKirigamiApplication*>(self);
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication) {
        vabstractkirigamiapplication->setAbstractKirigamiApplication_TimerEvent_IsBase(true);
        vabstractkirigamiapplication->timerEvent(event);
    } else {
        ((VirtualAbstractKirigamiApplication*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void AbstractKirigamiApplication_OnTimerEvent(AbstractKirigamiApplication* self, intptr_t slot) {
    auto* vabstractkirigamiapplication = dynamic_cast<VirtualAbstractKirigamiApplication*>(self);
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication)
        vabstractkirigamiapplication->setAbstractKirigamiApplication_TimerEvent_Callback(reinterpret_cast<VirtualAbstractKirigamiApplication::AbstractKirigamiApplication_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void AbstractKirigamiApplication_ChildEvent(AbstractKirigamiApplication* self, QChildEvent* event) {
    auto* vabstractkirigamiapplication = dynamic_cast<VirtualAbstractKirigamiApplication*>(self);
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication) {
        vabstractkirigamiapplication->childEvent(event);
    } else {
        ((VirtualAbstractKirigamiApplication*)self)->childEvent(event);
    }
}

// Base class handler implementation
void AbstractKirigamiApplication_SuperChildEvent(AbstractKirigamiApplication* self, QChildEvent* event) {
    auto* vabstractkirigamiapplication = dynamic_cast<VirtualAbstractKirigamiApplication*>(self);
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication) {
        vabstractkirigamiapplication->setAbstractKirigamiApplication_ChildEvent_IsBase(true);
        vabstractkirigamiapplication->childEvent(event);
    } else {
        ((VirtualAbstractKirigamiApplication*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void AbstractKirigamiApplication_OnChildEvent(AbstractKirigamiApplication* self, intptr_t slot) {
    auto* vabstractkirigamiapplication = dynamic_cast<VirtualAbstractKirigamiApplication*>(self);
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication)
        vabstractkirigamiapplication->setAbstractKirigamiApplication_ChildEvent_Callback(reinterpret_cast<VirtualAbstractKirigamiApplication::AbstractKirigamiApplication_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void AbstractKirigamiApplication_CustomEvent(AbstractKirigamiApplication* self, QEvent* event) {
    auto* vabstractkirigamiapplication = dynamic_cast<VirtualAbstractKirigamiApplication*>(self);
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication) {
        vabstractkirigamiapplication->customEvent(event);
    } else {
        ((VirtualAbstractKirigamiApplication*)self)->customEvent(event);
    }
}

// Base class handler implementation
void AbstractKirigamiApplication_SuperCustomEvent(AbstractKirigamiApplication* self, QEvent* event) {
    auto* vabstractkirigamiapplication = dynamic_cast<VirtualAbstractKirigamiApplication*>(self);
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication) {
        vabstractkirigamiapplication->setAbstractKirigamiApplication_CustomEvent_IsBase(true);
        vabstractkirigamiapplication->customEvent(event);
    } else {
        ((VirtualAbstractKirigamiApplication*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void AbstractKirigamiApplication_OnCustomEvent(AbstractKirigamiApplication* self, intptr_t slot) {
    auto* vabstractkirigamiapplication = dynamic_cast<VirtualAbstractKirigamiApplication*>(self);
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication)
        vabstractkirigamiapplication->setAbstractKirigamiApplication_CustomEvent_Callback(reinterpret_cast<VirtualAbstractKirigamiApplication::AbstractKirigamiApplication_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void AbstractKirigamiApplication_ConnectNotify(AbstractKirigamiApplication* self, const QMetaMethod* signal) {
    auto* vabstractkirigamiapplication = dynamic_cast<VirtualAbstractKirigamiApplication*>(self);
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication) {
        vabstractkirigamiapplication->connectNotify(*signal);
    } else {
        ((VirtualAbstractKirigamiApplication*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void AbstractKirigamiApplication_SuperConnectNotify(AbstractKirigamiApplication* self, const QMetaMethod* signal) {
    auto* vabstractkirigamiapplication = dynamic_cast<VirtualAbstractKirigamiApplication*>(self);
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication) {
        vabstractkirigamiapplication->setAbstractKirigamiApplication_ConnectNotify_IsBase(true);
        vabstractkirigamiapplication->connectNotify(*signal);
    } else {
        ((VirtualAbstractKirigamiApplication*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void AbstractKirigamiApplication_OnConnectNotify(AbstractKirigamiApplication* self, intptr_t slot) {
    auto* vabstractkirigamiapplication = dynamic_cast<VirtualAbstractKirigamiApplication*>(self);
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication)
        vabstractkirigamiapplication->setAbstractKirigamiApplication_ConnectNotify_Callback(reinterpret_cast<VirtualAbstractKirigamiApplication::AbstractKirigamiApplication_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void AbstractKirigamiApplication_DisconnectNotify(AbstractKirigamiApplication* self, const QMetaMethod* signal) {
    auto* vabstractkirigamiapplication = dynamic_cast<VirtualAbstractKirigamiApplication*>(self);
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication) {
        vabstractkirigamiapplication->disconnectNotify(*signal);
    } else {
        ((VirtualAbstractKirigamiApplication*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void AbstractKirigamiApplication_SuperDisconnectNotify(AbstractKirigamiApplication* self, const QMetaMethod* signal) {
    auto* vabstractkirigamiapplication = dynamic_cast<VirtualAbstractKirigamiApplication*>(self);
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication) {
        vabstractkirigamiapplication->setAbstractKirigamiApplication_DisconnectNotify_IsBase(true);
        vabstractkirigamiapplication->disconnectNotify(*signal);
    } else {
        ((VirtualAbstractKirigamiApplication*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void AbstractKirigamiApplication_OnDisconnectNotify(AbstractKirigamiApplication* self, intptr_t slot) {
    auto* vabstractkirigamiapplication = dynamic_cast<VirtualAbstractKirigamiApplication*>(self);
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication)
        vabstractkirigamiapplication->setAbstractKirigamiApplication_DisconnectNotify_Callback(reinterpret_cast<VirtualAbstractKirigamiApplication::AbstractKirigamiApplication_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
void AbstractKirigamiApplication_ReadSettings(AbstractKirigamiApplication* self) {
    auto* vabstractkirigamiapplication = dynamic_cast<VirtualAbstractKirigamiApplication*>(self);
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication) {
        vabstractkirigamiapplication->readSettings();
    } else {
        ((VirtualAbstractKirigamiApplication*)self)->readSettings();
    }
}

// Base class handler implementation
void AbstractKirigamiApplication_SuperReadSettings(AbstractKirigamiApplication* self) {
    auto* vabstractkirigamiapplication = dynamic_cast<VirtualAbstractKirigamiApplication*>(self);
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication) {
        vabstractkirigamiapplication->setAbstractKirigamiApplication_ReadSettings_IsBase(true);
        vabstractkirigamiapplication->readSettings();
    } else {
        ((VirtualAbstractKirigamiApplication*)self)->readSettings();
    }
}

// Auxiliary method to allow providing re-implementation
void AbstractKirigamiApplication_OnReadSettings(AbstractKirigamiApplication* self, intptr_t slot) {
    auto* vabstractkirigamiapplication = dynamic_cast<VirtualAbstractKirigamiApplication*>(self);
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication)
        vabstractkirigamiapplication->setAbstractKirigamiApplication_ReadSettings_Callback(reinterpret_cast<VirtualAbstractKirigamiApplication::AbstractKirigamiApplication_ReadSettings_Callback>(slot));
}

// Derived class handler implementation
QObject* AbstractKirigamiApplication_Sender(const AbstractKirigamiApplication* self) {
    auto* vabstractkirigamiapplication = const_cast<VirtualAbstractKirigamiApplication*>(dynamic_cast<const VirtualAbstractKirigamiApplication*>(self));
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication) {
        return vabstractkirigamiapplication->sender();
    } else {
        return ((VirtualAbstractKirigamiApplication*)self)->sender();
    }
}

// Base class handler implementation
QObject* AbstractKirigamiApplication_SuperSender(const AbstractKirigamiApplication* self) {
    auto* vabstractkirigamiapplication = const_cast<VirtualAbstractKirigamiApplication*>(dynamic_cast<const VirtualAbstractKirigamiApplication*>(self));
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication) {
        vabstractkirigamiapplication->setAbstractKirigamiApplication_Sender_IsBase(true);
        return vabstractkirigamiapplication->sender();
    } else {
        return ((VirtualAbstractKirigamiApplication*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void AbstractKirigamiApplication_OnSender(const AbstractKirigamiApplication* self, intptr_t slot) {
    auto* vabstractkirigamiapplication = const_cast<VirtualAbstractKirigamiApplication*>(dynamic_cast<const VirtualAbstractKirigamiApplication*>(self));
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication)
        vabstractkirigamiapplication->setAbstractKirigamiApplication_Sender_Callback(reinterpret_cast<VirtualAbstractKirigamiApplication::AbstractKirigamiApplication_Sender_Callback>(slot));
}

// Derived class handler implementation
int AbstractKirigamiApplication_SenderSignalIndex(const AbstractKirigamiApplication* self) {
    auto* vabstractkirigamiapplication = const_cast<VirtualAbstractKirigamiApplication*>(dynamic_cast<const VirtualAbstractKirigamiApplication*>(self));
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication) {
        return vabstractkirigamiapplication->senderSignalIndex();
    } else {
        return ((VirtualAbstractKirigamiApplication*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int AbstractKirigamiApplication_SuperSenderSignalIndex(const AbstractKirigamiApplication* self) {
    auto* vabstractkirigamiapplication = const_cast<VirtualAbstractKirigamiApplication*>(dynamic_cast<const VirtualAbstractKirigamiApplication*>(self));
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication) {
        vabstractkirigamiapplication->setAbstractKirigamiApplication_SenderSignalIndex_IsBase(true);
        return vabstractkirigamiapplication->senderSignalIndex();
    } else {
        return ((VirtualAbstractKirigamiApplication*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void AbstractKirigamiApplication_OnSenderSignalIndex(const AbstractKirigamiApplication* self, intptr_t slot) {
    auto* vabstractkirigamiapplication = const_cast<VirtualAbstractKirigamiApplication*>(dynamic_cast<const VirtualAbstractKirigamiApplication*>(self));
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication)
        vabstractkirigamiapplication->setAbstractKirigamiApplication_SenderSignalIndex_Callback(reinterpret_cast<VirtualAbstractKirigamiApplication::AbstractKirigamiApplication_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int AbstractKirigamiApplication_Receivers(const AbstractKirigamiApplication* self, const char* signal) {
    auto* vabstractkirigamiapplication = const_cast<VirtualAbstractKirigamiApplication*>(dynamic_cast<const VirtualAbstractKirigamiApplication*>(self));
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication) {
        return vabstractkirigamiapplication->receivers(signal);
    } else {
        return ((VirtualAbstractKirigamiApplication*)self)->receivers(signal);
    }
}

// Base class handler implementation
int AbstractKirigamiApplication_SuperReceivers(const AbstractKirigamiApplication* self, const char* signal) {
    auto* vabstractkirigamiapplication = const_cast<VirtualAbstractKirigamiApplication*>(dynamic_cast<const VirtualAbstractKirigamiApplication*>(self));
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication) {
        vabstractkirigamiapplication->setAbstractKirigamiApplication_Receivers_IsBase(true);
        return vabstractkirigamiapplication->receivers(signal);
    } else {
        return ((VirtualAbstractKirigamiApplication*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void AbstractKirigamiApplication_OnReceivers(const AbstractKirigamiApplication* self, intptr_t slot) {
    auto* vabstractkirigamiapplication = const_cast<VirtualAbstractKirigamiApplication*>(dynamic_cast<const VirtualAbstractKirigamiApplication*>(self));
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication)
        vabstractkirigamiapplication->setAbstractKirigamiApplication_Receivers_Callback(reinterpret_cast<VirtualAbstractKirigamiApplication::AbstractKirigamiApplication_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool AbstractKirigamiApplication_IsSignalConnected(const AbstractKirigamiApplication* self, const QMetaMethod* signal) {
    auto* vabstractkirigamiapplication = const_cast<VirtualAbstractKirigamiApplication*>(dynamic_cast<const VirtualAbstractKirigamiApplication*>(self));
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication) {
        return vabstractkirigamiapplication->isSignalConnected(*signal);
    } else {
        return ((VirtualAbstractKirigamiApplication*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool AbstractKirigamiApplication_SuperIsSignalConnected(const AbstractKirigamiApplication* self, const QMetaMethod* signal) {
    auto* vabstractkirigamiapplication = const_cast<VirtualAbstractKirigamiApplication*>(dynamic_cast<const VirtualAbstractKirigamiApplication*>(self));
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication) {
        vabstractkirigamiapplication->setAbstractKirigamiApplication_IsSignalConnected_IsBase(true);
        return vabstractkirigamiapplication->isSignalConnected(*signal);
    } else {
        return ((VirtualAbstractKirigamiApplication*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void AbstractKirigamiApplication_OnIsSignalConnected(const AbstractKirigamiApplication* self, intptr_t slot) {
    auto* vabstractkirigamiapplication = const_cast<VirtualAbstractKirigamiApplication*>(dynamic_cast<const VirtualAbstractKirigamiApplication*>(self));
    if (vabstractkirigamiapplication && vabstractkirigamiapplication->isVirtualAbstractKirigamiApplication)
        vabstractkirigamiapplication->setAbstractKirigamiApplication_IsSignalConnected_Callback(reinterpret_cast<VirtualAbstractKirigamiApplication::AbstractKirigamiApplication_IsSignalConnected_Callback>(slot));
}

void AbstractKirigamiApplication_Delete(AbstractKirigamiApplication* self) {
    delete self;
}
