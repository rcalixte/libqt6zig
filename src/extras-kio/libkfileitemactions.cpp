#include <KFileItemActions>
#include <KFileItemListProperties>
#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QWidget>
#include <kfileitemactions.h>
#include "libkfileitemactions.h"
#include "libkfileitemactions.hxx"

KFileItemActions* KFileItemActions_new() {
    return new VirtualKFileItemActions();
}

KFileItemActions* KFileItemActions_new2(QObject* parent) {
    return new VirtualKFileItemActions(parent);
}

QMetaObject* KFileItemActions_MetaObject(const KFileItemActions* self) {
    return (QMetaObject*)self->metaObject();
}

void* KFileItemActions_Metacast(KFileItemActions* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KFileItemActions_Metacall(KFileItemActions* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KFileItemActions_Tr(const char* s) {
    auto _ret = KFileItemActions::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KFileItemActions_SetItemListProperties(KFileItemActions* self, const KFileItemListProperties* itemList) {
    self->setItemListProperties(*itemList);
}

void KFileItemActions_SetParentWidget(KFileItemActions* self, QWidget* widget) {
    self->setParentWidget(widget);
}

void KFileItemActions_InsertOpenWithActionsTo(KFileItemActions* self, QAction* before, QMenu* topMenu, const libqt_list /* of libqt_string */ excludedDesktopEntryNames) {
    QList<QString> excludedDesktopEntryNames_QList;
    excludedDesktopEntryNames_QList.reserve(excludedDesktopEntryNames.len);
    libqt_string* excludedDesktopEntryNames_arr = static_cast<libqt_string*>(excludedDesktopEntryNames.data);
    for (size_t i = 0; i < excludedDesktopEntryNames.len; ++i) {
        QString excludedDesktopEntryNames_arr_i_QString = QString::fromUtf8(excludedDesktopEntryNames_arr[i].data, excludedDesktopEntryNames_arr[i].len);
        excludedDesktopEntryNames_QList.push_back(excludedDesktopEntryNames_arr_i_QString);
    }
    self->insertOpenWithActionsTo(before, topMenu, excludedDesktopEntryNames_QList);
}

void KFileItemActions_AddActionsTo(KFileItemActions* self, QMenu* menu) {
    self->addActionsTo(menu);
}

void KFileItemActions_OpenWithDialogAboutToBeShown(KFileItemActions* self) {
    self->openWithDialogAboutToBeShown();
}

void KFileItemActions_Connect_OpenWithDialogAboutToBeShown(KFileItemActions* self, intptr_t slot) {
    void (*slotFunc)(KFileItemActions*) = reinterpret_cast<void (*)(KFileItemActions*)>(slot);
    KFileItemActions::connect(self,
                              static_cast<void (KFileItemActions::*)()>(&KFileItemActions::openWithDialogAboutToBeShown),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void KFileItemActions_Error(KFileItemActions* self, const libqt_string errorMessage) {
    QString errorMessage_QString = QString::fromUtf8(errorMessage.data, errorMessage.len);
    self->error(errorMessage_QString);
}

void KFileItemActions_Connect_Error(KFileItemActions* self, intptr_t slot) {
    void (*slotFunc)(KFileItemActions*, const char*) = reinterpret_cast<void (*)(KFileItemActions*, const char*)>(slot);
    KFileItemActions::connect(self,
                              static_cast<void (KFileItemActions::*)(const QString&)>(&KFileItemActions::error),
                              [self, slotFunc](const QString& errorMessage) {
                                  const auto errorMessage_ret = errorMessage;
                                  // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                  QByteArray errorMessage_b = errorMessage_ret.toUtf8();
                                  auto errorMessage_str_len = errorMessage_b.length();
                                  const char* errorMessage_str = static_cast<const char*>(malloc(errorMessage_str_len + 1));
                                  memcpy((void*)errorMessage_str, errorMessage_b.data(), errorMessage_str_len);
                                  ((char*)errorMessage_str)[errorMessage_str_len] = '\0';
                                  const char* sigval1 = errorMessage_str;
                                  slotFunc(self, sigval1);
                                  libqt_free(errorMessage_str);
                              });
}

void KFileItemActions_RunPreferredApplications(KFileItemActions* self, const KFileItemList* fileOpenList) {
    self->runPreferredApplications(*fileOpenList);
}

libqt_string KFileItemActions_Tr2(const char* s, const char* c) {
    auto _ret = KFileItemActions::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFileItemActions_Tr3(const char* s, const char* c, int n) {
    auto _ret = KFileItemActions::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KFileItemActions_AddActionsTo2(KFileItemActions* self, QMenu* menu, int sources) {
    self->addActionsTo(menu, static_cast<KFileItemActions::MenuActionSources>(sources));
}

void KFileItemActions_AddActionsTo3(KFileItemActions* self, QMenu* menu, int sources, const libqt_list /* of QAction* */ additionalActions) {
    QList<QAction*> additionalActions_QList;
    additionalActions_QList.reserve(additionalActions.len);
    QAction** additionalActions_arr = static_cast<QAction**>(additionalActions.data);
    for (size_t i = 0; i < additionalActions.len; ++i) {
        additionalActions_QList.push_back(additionalActions_arr[i]);
    }
    self->addActionsTo(menu, static_cast<KFileItemActions::MenuActionSources>(sources), additionalActions_QList);
}

void KFileItemActions_AddActionsTo4(KFileItemActions* self, QMenu* menu, int sources, const libqt_list /* of QAction* */ additionalActions, const libqt_list /* of libqt_string */ excludeList) {
    QList<QAction*> additionalActions_QList;
    additionalActions_QList.reserve(additionalActions.len);
    QAction** additionalActions_arr = static_cast<QAction**>(additionalActions.data);
    for (size_t i = 0; i < additionalActions.len; ++i) {
        additionalActions_QList.push_back(additionalActions_arr[i]);
    }
    QList<QString> excludeList_QList;
    excludeList_QList.reserve(excludeList.len);
    libqt_string* excludeList_arr = static_cast<libqt_string*>(excludeList.data);
    for (size_t i = 0; i < excludeList.len; ++i) {
        QString excludeList_arr_i_QString = QString::fromUtf8(excludeList_arr[i].data, excludeList_arr[i].len);
        excludeList_QList.push_back(excludeList_arr_i_QString);
    }
    self->addActionsTo(menu, static_cast<KFileItemActions::MenuActionSources>(sources), additionalActions_QList, excludeList_QList);
}

// Base class handler implementation
QMetaObject* KFileItemActions_SuperMetaObject(const KFileItemActions* self) {
    return (QMetaObject*)self->KFileItemActions::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KFileItemActions_OnMetaObject(KFileItemActions* self, intptr_t slot) {
    if (auto* vkfileitemactions = const_cast<VirtualKFileItemActions*>(dynamic_cast<const VirtualKFileItemActions*>(self)))
        vkfileitemactions->kfileitemactions_metaobject_callback = reinterpret_cast<VirtualKFileItemActions::KFileItemActions_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KFileItemActions_SuperMetacast(KFileItemActions* self, const char* param1) {
    return self->KFileItemActions::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KFileItemActions_OnMetacast(KFileItemActions* self, intptr_t slot) {
    if (auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self))
        vkfileitemactions->kfileitemactions_metacast_callback = reinterpret_cast<VirtualKFileItemActions::KFileItemActions_Metacast_Callback>(slot);
}

// Base class handler implementation
int KFileItemActions_SuperMetacall(KFileItemActions* self, int param1, int param2, void** param3) {
    return self->KFileItemActions::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KFileItemActions_OnMetacall(KFileItemActions* self, intptr_t slot) {
    if (auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self))
        vkfileitemactions->kfileitemactions_metacall_callback = reinterpret_cast<VirtualKFileItemActions::KFileItemActions_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KFileItemActions_Event(KFileItemActions* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KFileItemActions_SuperEvent(KFileItemActions* self, QEvent* event) {
    return self->KFileItemActions::event(event);
}

// Auxiliary method to allow providing re-implementation
void KFileItemActions_OnEvent(KFileItemActions* self, intptr_t slot) {
    if (auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self))
        vkfileitemactions->kfileitemactions_event_callback = reinterpret_cast<VirtualKFileItemActions::KFileItemActions_Event_Callback>(slot);
}

// Derived class handler implementation
bool KFileItemActions_EventFilter(KFileItemActions* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KFileItemActions_SuperEventFilter(KFileItemActions* self, QObject* watched, QEvent* event) {
    return self->KFileItemActions::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KFileItemActions_OnEventFilter(KFileItemActions* self, intptr_t slot) {
    if (auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self))
        vkfileitemactions->kfileitemactions_eventfilter_callback = reinterpret_cast<VirtualKFileItemActions::KFileItemActions_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KFileItemActions_TimerEvent(KFileItemActions* self, QTimerEvent* event) {
    auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self);
    if (vkfileitemactions) {
        vkfileitemactions->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileItemActions::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileItemActions_SuperTimerEvent(KFileItemActions* self, QTimerEvent* event) {
    if (auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self)) {
        vkfileitemactions->KFileItemActions::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileItemActions::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileItemActions_OnTimerEvent(KFileItemActions* self, intptr_t slot) {
    if (auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self))
        vkfileitemactions->kfileitemactions_timerevent_callback = reinterpret_cast<VirtualKFileItemActions::KFileItemActions_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileItemActions_ChildEvent(KFileItemActions* self, QChildEvent* event) {
    auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self);
    if (vkfileitemactions) {
        vkfileitemactions->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileItemActions::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileItemActions_SuperChildEvent(KFileItemActions* self, QChildEvent* event) {
    if (auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self)) {
        vkfileitemactions->KFileItemActions::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileItemActions::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileItemActions_OnChildEvent(KFileItemActions* self, intptr_t slot) {
    if (auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self))
        vkfileitemactions->kfileitemactions_childevent_callback = reinterpret_cast<VirtualKFileItemActions::KFileItemActions_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileItemActions_CustomEvent(KFileItemActions* self, QEvent* event) {
    auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self);
    if (vkfileitemactions) {
        vkfileitemactions->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileItemActions::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileItemActions_SuperCustomEvent(KFileItemActions* self, QEvent* event) {
    if (auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self)) {
        vkfileitemactions->KFileItemActions::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileItemActions::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileItemActions_OnCustomEvent(KFileItemActions* self, intptr_t slot) {
    if (auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self))
        vkfileitemactions->kfileitemactions_customevent_callback = reinterpret_cast<VirtualKFileItemActions::KFileItemActions_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileItemActions_ConnectNotify(KFileItemActions* self, const QMetaMethod* signal) {
    auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self);
    if (vkfileitemactions) {
        vkfileitemactions->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFileItemActions::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileItemActions_SuperConnectNotify(KFileItemActions* self, const QMetaMethod* signal) {
    if (auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self)) {
        vkfileitemactions->KFileItemActions::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFileItemActions::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileItemActions_OnConnectNotify(KFileItemActions* self, intptr_t slot) {
    if (auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self))
        vkfileitemactions->kfileitemactions_connectnotify_callback = reinterpret_cast<VirtualKFileItemActions::KFileItemActions_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KFileItemActions_DisconnectNotify(KFileItemActions* self, const QMetaMethod* signal) {
    auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self);
    if (vkfileitemactions) {
        vkfileitemactions->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFileItemActions::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileItemActions_SuperDisconnectNotify(KFileItemActions* self, const QMetaMethod* signal) {
    if (auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self)) {
        vkfileitemactions->KFileItemActions::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFileItemActions::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileItemActions_OnDisconnectNotify(KFileItemActions* self, intptr_t slot) {
    if (auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self))
        vkfileitemactions->kfileitemactions_disconnectnotify_callback = reinterpret_cast<VirtualKFileItemActions::KFileItemActions_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KFileItemActions_Sender(const KFileItemActions* self) {
    if (auto* vkfileitemactions = const_cast<VirtualKFileItemActions*>(dynamic_cast<const VirtualKFileItemActions*>(self))) {
        return vkfileitemactions->VirtualKFileItemActions::sender();
    } else
        qFatal("Error: Protected method KFileItemActions::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KFileItemActions_SenderSignalIndex(const KFileItemActions* self) {
    if (auto* vkfileitemactions = const_cast<VirtualKFileItemActions*>(dynamic_cast<const VirtualKFileItemActions*>(self))) {
        return vkfileitemactions->VirtualKFileItemActions::senderSignalIndex();
    } else
        qFatal("Error: Protected method KFileItemActions::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KFileItemActions_Receivers(const KFileItemActions* self, const char* signal) {
    if (auto* vkfileitemactions = const_cast<VirtualKFileItemActions*>(dynamic_cast<const VirtualKFileItemActions*>(self))) {
        return vkfileitemactions->VirtualKFileItemActions::receivers(signal);
    } else
        qFatal("Error: Protected method KFileItemActions::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFileItemActions_IsSignalConnected(const KFileItemActions* self, const QMetaMethod* signal) {
    if (auto* vkfileitemactions = const_cast<VirtualKFileItemActions*>(dynamic_cast<const VirtualKFileItemActions*>(self))) {
        return vkfileitemactions->VirtualKFileItemActions::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KFileItemActions::isSignalConnected called without a directly constructed type");
}

void KFileItemActions_Delete(KFileItemActions* self) {
    delete self;
}
