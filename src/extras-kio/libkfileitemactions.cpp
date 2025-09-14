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
#include <QByteArray>
#include <cstring>
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
    auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self);
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKFileItemActions*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KFileItemActions_Tr(const char* s) {
    QString _ret = KFileItemActions::tr(s);
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
    KFileItemActions::connect(self, &KFileItemActions::openWithDialogAboutToBeShown, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KFileItemActions_Error(KFileItemActions* self, const libqt_string errorMessage) {
    QString errorMessage_QString = QString::fromUtf8(errorMessage.data, errorMessage.len);
    self->error(errorMessage_QString);
}

void KFileItemActions_Connect_Error(KFileItemActions* self, intptr_t slot) {
    void (*slotFunc)(KFileItemActions*, const char*) = reinterpret_cast<void (*)(KFileItemActions*, const char*)>(slot);
    KFileItemActions::connect(self, &KFileItemActions::error, [self, slotFunc](const QString& errorMessage) {
        const QString errorMessage_ret = errorMessage;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray errorMessage_b = errorMessage_ret.toUtf8();
        const char* errorMessage_str = static_cast<const char*>(malloc(errorMessage_b.length() + 1));
        memcpy((void*)errorMessage_str, errorMessage_b.data(), errorMessage_b.length());
        ((char*)errorMessage_str)[errorMessage_b.length()] = '\0';
        const char* sigval1 = errorMessage_str;
        slotFunc(self, sigval1);
        libqt_free(errorMessage_str);
    });
}

void KFileItemActions_RunPreferredApplications(KFileItemActions* self, const KFileItemList* fileOpenList) {
    self->runPreferredApplications(*fileOpenList);
}

libqt_string KFileItemActions_Tr2(const char* s, const char* c) {
    QString _ret = KFileItemActions::tr(s, c);
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
    QString _ret = KFileItemActions::tr(s, c, static_cast<int>(n));
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
int KFileItemActions_QBaseMetacall(KFileItemActions* self, int param1, int param2, void** param3) {
    auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self);
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        vkfileitemactions->setKFileItemActions_Metacall_IsBase(true);
        return vkfileitemactions->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KFileItemActions::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileItemActions_OnMetacall(KFileItemActions* self, intptr_t slot) {
    auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self);
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        vkfileitemactions->setKFileItemActions_Metacall_Callback(reinterpret_cast<VirtualKFileItemActions::KFileItemActions_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileItemActions_Event(KFileItemActions* self, QEvent* event) {
    auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self);
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        return vkfileitemactions->event(event);
    } else {
        return self->KFileItemActions::event(event);
    }
}

// Base class handler implementation
bool KFileItemActions_QBaseEvent(KFileItemActions* self, QEvent* event) {
    auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self);
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        vkfileitemactions->setKFileItemActions_Event_IsBase(true);
        return vkfileitemactions->event(event);
    } else {
        return self->KFileItemActions::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileItemActions_OnEvent(KFileItemActions* self, intptr_t slot) {
    auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self);
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        vkfileitemactions->setKFileItemActions_Event_Callback(reinterpret_cast<VirtualKFileItemActions::KFileItemActions_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileItemActions_EventFilter(KFileItemActions* self, QObject* watched, QEvent* event) {
    auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self);
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        return vkfileitemactions->eventFilter(watched, event);
    } else {
        return self->KFileItemActions::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KFileItemActions_QBaseEventFilter(KFileItemActions* self, QObject* watched, QEvent* event) {
    auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self);
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        vkfileitemactions->setKFileItemActions_EventFilter_IsBase(true);
        return vkfileitemactions->eventFilter(watched, event);
    } else {
        return self->KFileItemActions::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileItemActions_OnEventFilter(KFileItemActions* self, intptr_t slot) {
    auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self);
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        vkfileitemactions->setKFileItemActions_EventFilter_Callback(reinterpret_cast<VirtualKFileItemActions::KFileItemActions_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileItemActions_TimerEvent(KFileItemActions* self, QTimerEvent* event) {
    auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self);
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        vkfileitemactions->timerEvent(event);
    } else {
        ((VirtualKFileItemActions*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KFileItemActions_QBaseTimerEvent(KFileItemActions* self, QTimerEvent* event) {
    auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self);
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        vkfileitemactions->setKFileItemActions_TimerEvent_IsBase(true);
        vkfileitemactions->timerEvent(event);
    } else {
        ((VirtualKFileItemActions*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileItemActions_OnTimerEvent(KFileItemActions* self, intptr_t slot) {
    auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self);
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        vkfileitemactions->setKFileItemActions_TimerEvent_Callback(reinterpret_cast<VirtualKFileItemActions::KFileItemActions_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileItemActions_ChildEvent(KFileItemActions* self, QChildEvent* event) {
    auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self);
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        vkfileitemactions->childEvent(event);
    } else {
        ((VirtualKFileItemActions*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KFileItemActions_QBaseChildEvent(KFileItemActions* self, QChildEvent* event) {
    auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self);
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        vkfileitemactions->setKFileItemActions_ChildEvent_IsBase(true);
        vkfileitemactions->childEvent(event);
    } else {
        ((VirtualKFileItemActions*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileItemActions_OnChildEvent(KFileItemActions* self, intptr_t slot) {
    auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self);
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        vkfileitemactions->setKFileItemActions_ChildEvent_Callback(reinterpret_cast<VirtualKFileItemActions::KFileItemActions_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileItemActions_CustomEvent(KFileItemActions* self, QEvent* event) {
    auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self);
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        vkfileitemactions->customEvent(event);
    } else {
        ((VirtualKFileItemActions*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KFileItemActions_QBaseCustomEvent(KFileItemActions* self, QEvent* event) {
    auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self);
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        vkfileitemactions->setKFileItemActions_CustomEvent_IsBase(true);
        vkfileitemactions->customEvent(event);
    } else {
        ((VirtualKFileItemActions*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileItemActions_OnCustomEvent(KFileItemActions* self, intptr_t slot) {
    auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self);
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        vkfileitemactions->setKFileItemActions_CustomEvent_Callback(reinterpret_cast<VirtualKFileItemActions::KFileItemActions_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileItemActions_ConnectNotify(KFileItemActions* self, const QMetaMethod* signal) {
    auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self);
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        vkfileitemactions->connectNotify(*signal);
    } else {
        ((VirtualKFileItemActions*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KFileItemActions_QBaseConnectNotify(KFileItemActions* self, const QMetaMethod* signal) {
    auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self);
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        vkfileitemactions->setKFileItemActions_ConnectNotify_IsBase(true);
        vkfileitemactions->connectNotify(*signal);
    } else {
        ((VirtualKFileItemActions*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileItemActions_OnConnectNotify(KFileItemActions* self, intptr_t slot) {
    auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self);
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        vkfileitemactions->setKFileItemActions_ConnectNotify_Callback(reinterpret_cast<VirtualKFileItemActions::KFileItemActions_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileItemActions_DisconnectNotify(KFileItemActions* self, const QMetaMethod* signal) {
    auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self);
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        vkfileitemactions->disconnectNotify(*signal);
    } else {
        ((VirtualKFileItemActions*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KFileItemActions_QBaseDisconnectNotify(KFileItemActions* self, const QMetaMethod* signal) {
    auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self);
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        vkfileitemactions->setKFileItemActions_DisconnectNotify_IsBase(true);
        vkfileitemactions->disconnectNotify(*signal);
    } else {
        ((VirtualKFileItemActions*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileItemActions_OnDisconnectNotify(KFileItemActions* self, intptr_t slot) {
    auto* vkfileitemactions = dynamic_cast<VirtualKFileItemActions*>(self);
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        vkfileitemactions->setKFileItemActions_DisconnectNotify_Callback(reinterpret_cast<VirtualKFileItemActions::KFileItemActions_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KFileItemActions_Sender(const KFileItemActions* self) {
    auto* vkfileitemactions = const_cast<VirtualKFileItemActions*>(dynamic_cast<const VirtualKFileItemActions*>(self));
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        return vkfileitemactions->sender();
    } else {
        return ((VirtualKFileItemActions*)self)->sender();
    }
}

// Base class handler implementation
QObject* KFileItemActions_QBaseSender(const KFileItemActions* self) {
    auto* vkfileitemactions = const_cast<VirtualKFileItemActions*>(dynamic_cast<const VirtualKFileItemActions*>(self));
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        vkfileitemactions->setKFileItemActions_Sender_IsBase(true);
        return vkfileitemactions->sender();
    } else {
        return ((VirtualKFileItemActions*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileItemActions_OnSender(const KFileItemActions* self, intptr_t slot) {
    auto* vkfileitemactions = const_cast<VirtualKFileItemActions*>(dynamic_cast<const VirtualKFileItemActions*>(self));
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        vkfileitemactions->setKFileItemActions_Sender_Callback(reinterpret_cast<VirtualKFileItemActions::KFileItemActions_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KFileItemActions_SenderSignalIndex(const KFileItemActions* self) {
    auto* vkfileitemactions = const_cast<VirtualKFileItemActions*>(dynamic_cast<const VirtualKFileItemActions*>(self));
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        return vkfileitemactions->senderSignalIndex();
    } else {
        return ((VirtualKFileItemActions*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KFileItemActions_QBaseSenderSignalIndex(const KFileItemActions* self) {
    auto* vkfileitemactions = const_cast<VirtualKFileItemActions*>(dynamic_cast<const VirtualKFileItemActions*>(self));
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        vkfileitemactions->setKFileItemActions_SenderSignalIndex_IsBase(true);
        return vkfileitemactions->senderSignalIndex();
    } else {
        return ((VirtualKFileItemActions*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileItemActions_OnSenderSignalIndex(const KFileItemActions* self, intptr_t slot) {
    auto* vkfileitemactions = const_cast<VirtualKFileItemActions*>(dynamic_cast<const VirtualKFileItemActions*>(self));
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        vkfileitemactions->setKFileItemActions_SenderSignalIndex_Callback(reinterpret_cast<VirtualKFileItemActions::KFileItemActions_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KFileItemActions_Receivers(const KFileItemActions* self, const char* signal) {
    auto* vkfileitemactions = const_cast<VirtualKFileItemActions*>(dynamic_cast<const VirtualKFileItemActions*>(self));
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        return vkfileitemactions->receivers(signal);
    } else {
        return ((VirtualKFileItemActions*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KFileItemActions_QBaseReceivers(const KFileItemActions* self, const char* signal) {
    auto* vkfileitemactions = const_cast<VirtualKFileItemActions*>(dynamic_cast<const VirtualKFileItemActions*>(self));
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        vkfileitemactions->setKFileItemActions_Receivers_IsBase(true);
        return vkfileitemactions->receivers(signal);
    } else {
        return ((VirtualKFileItemActions*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileItemActions_OnReceivers(const KFileItemActions* self, intptr_t slot) {
    auto* vkfileitemactions = const_cast<VirtualKFileItemActions*>(dynamic_cast<const VirtualKFileItemActions*>(self));
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        vkfileitemactions->setKFileItemActions_Receivers_Callback(reinterpret_cast<VirtualKFileItemActions::KFileItemActions_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileItemActions_IsSignalConnected(const KFileItemActions* self, const QMetaMethod* signal) {
    auto* vkfileitemactions = const_cast<VirtualKFileItemActions*>(dynamic_cast<const VirtualKFileItemActions*>(self));
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        return vkfileitemactions->isSignalConnected(*signal);
    } else {
        return ((VirtualKFileItemActions*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KFileItemActions_QBaseIsSignalConnected(const KFileItemActions* self, const QMetaMethod* signal) {
    auto* vkfileitemactions = const_cast<VirtualKFileItemActions*>(dynamic_cast<const VirtualKFileItemActions*>(self));
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        vkfileitemactions->setKFileItemActions_IsSignalConnected_IsBase(true);
        return vkfileitemactions->isSignalConnected(*signal);
    } else {
        return ((VirtualKFileItemActions*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileItemActions_OnIsSignalConnected(const KFileItemActions* self, intptr_t slot) {
    auto* vkfileitemactions = const_cast<VirtualKFileItemActions*>(dynamic_cast<const VirtualKFileItemActions*>(self));
    if (vkfileitemactions && vkfileitemactions->isVirtualKFileItemActions) {
        vkfileitemactions->setKFileItemActions_IsSignalConnected_Callback(reinterpret_cast<VirtualKFileItemActions::KFileItemActions_IsSignalConnected_Callback>(slot));
    }
}

void KFileItemActions_Delete(KFileItemActions* self) {
    delete self;
}
