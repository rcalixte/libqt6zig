#include <KConfigGroup>
#include <KRecentFilesAction>
#include <KSelectAction>
#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QIcon>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeType>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <QWidget>
#include <QWidgetAction>
#include <krecentfilesaction.h>
#include "libkrecentfilesaction.h"
#include "libkrecentfilesaction.hxx"

KRecentFilesAction* KRecentFilesAction_new(QObject* parent) {
    return new VirtualKRecentFilesAction(parent);
}

KRecentFilesAction* KRecentFilesAction_new2(const libqt_string text, QObject* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKRecentFilesAction(text_QString, parent);
}

KRecentFilesAction* KRecentFilesAction_new3(const QIcon* icon, const libqt_string text, QObject* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKRecentFilesAction(*icon, text_QString, parent);
}

QMetaObject* KRecentFilesAction_MetaObject(const KRecentFilesAction* self) {
    return (QMetaObject*)self->metaObject();
}

void* KRecentFilesAction_Metacast(KRecentFilesAction* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KRecentFilesAction_Metacall(KRecentFilesAction* self, int param1, int param2, void** param3) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKRecentFilesAction*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KRecentFilesAction_Tr(const char* s) {
    QString _ret = KRecentFilesAction::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KRecentFilesAction_AddAction(KRecentFilesAction* self, QAction* action, const QUrl* url, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->addAction(action, *url, name_QString);
}

QAction* KRecentFilesAction_RemoveAction(KRecentFilesAction* self, QAction* action) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        return self->removeAction(action);
    } else {
        return ((VirtualKRecentFilesAction*)self)->removeAction(action);
    }
}

int KRecentFilesAction_MaxItems(const KRecentFilesAction* self) {
    return self->maxItems();
}

void KRecentFilesAction_SetMaxItems(KRecentFilesAction* self, int maxItems) {
    self->setMaxItems(static_cast<int>(maxItems));
}

void KRecentFilesAction_LoadEntries(KRecentFilesAction* self, const KConfigGroup* config) {
    self->loadEntries(*config);
}

void KRecentFilesAction_SaveEntries(KRecentFilesAction* self, const KConfigGroup* config) {
    self->saveEntries(*config);
}

void KRecentFilesAction_AddUrl(KRecentFilesAction* self, const QUrl* url) {
    self->addUrl(*url);
}

void KRecentFilesAction_AddUrl2(KRecentFilesAction* self, const QUrl* url, const libqt_string name, const libqt_string mimeType) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    self->addUrl(*url, name_QString, mimeType_QString);
}

void KRecentFilesAction_RemoveUrl(KRecentFilesAction* self, const QUrl* url) {
    self->removeUrl(*url);
}

libqt_list /* of QUrl* */ KRecentFilesAction_Urls(const KRecentFilesAction* self) {
    QList<QUrl> _ret = self->urls();
    // Convert QList<> from C++ memory to manually-managed C memory
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QUrl(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KRecentFilesAction_Clear(KRecentFilesAction* self) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        self->clear();
    } else {
        ((VirtualKRecentFilesAction*)self)->clear();
    }
}

void KRecentFilesAction_UrlSelected(KRecentFilesAction* self, const QUrl* url) {
    self->urlSelected(*url);
}

void KRecentFilesAction_Connect_UrlSelected(KRecentFilesAction* self, intptr_t slot) {
    void (*slotFunc)(KRecentFilesAction*, QUrl*) = reinterpret_cast<void (*)(KRecentFilesAction*, QUrl*)>(slot);
    KRecentFilesAction::connect(self, &KRecentFilesAction::urlSelected, [self, slotFunc](const QUrl& url) {
        const QUrl& url_ret = url;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
        slotFunc(self, sigval1);
    });
}

void KRecentFilesAction_RecentListCleared(KRecentFilesAction* self) {
    self->recentListCleared();
}

void KRecentFilesAction_Connect_RecentListCleared(KRecentFilesAction* self, intptr_t slot) {
    void (*slotFunc)(KRecentFilesAction*) = reinterpret_cast<void (*)(KRecentFilesAction*)>(slot);
    KRecentFilesAction::connect(self, &KRecentFilesAction::recentListCleared, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string KRecentFilesAction_Tr2(const char* s, const char* c) {
    QString _ret = KRecentFilesAction::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KRecentFilesAction_Tr3(const char* s, const char* c, int n) {
    QString _ret = KRecentFilesAction::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KRecentFilesAction_AddAction4(KRecentFilesAction* self, QAction* action, const QUrl* url, const libqt_string name, const QMimeType* mimeType) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->addAction(action, *url, name_QString, *mimeType);
}

void KRecentFilesAction_AddUrl22(KRecentFilesAction* self, const QUrl* url, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->addUrl(*url, name_QString);
}

// Base class handler implementation
int KRecentFilesAction_QBaseMetacall(KRecentFilesAction* self, int param1, int param2, void** param3) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_Metacall_IsBase(true);
        return vkrecentfilesaction->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KRecentFilesAction::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnMetacall(KRecentFilesAction* self, intptr_t slot) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_Metacall_Callback(reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QAction* KRecentFilesAction_QBaseRemoveAction(KRecentFilesAction* self, QAction* action) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_RemoveAction_IsBase(true);
        return vkrecentfilesaction->removeAction(action);
    } else {
        return self->KRecentFilesAction::removeAction(action);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnRemoveAction(KRecentFilesAction* self, intptr_t slot) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_RemoveAction_Callback(reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_RemoveAction_Callback>(slot));
    }
}

// Base class handler implementation
void KRecentFilesAction_QBaseClear(KRecentFilesAction* self) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_Clear_IsBase(true);
        vkrecentfilesaction->clear();
    } else {
        self->KRecentFilesAction::clear();
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnClear(KRecentFilesAction* self, intptr_t slot) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_Clear_Callback(reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_Clear_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesAction_InsertAction(KRecentFilesAction* self, QAction* before, QAction* action) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->insertAction(before, action);
    } else {
        self->KRecentFilesAction::insertAction(before, action);
    }
}

// Base class handler implementation
void KRecentFilesAction_QBaseInsertAction(KRecentFilesAction* self, QAction* before, QAction* action) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_InsertAction_IsBase(true);
        vkrecentfilesaction->insertAction(before, action);
    } else {
        self->KRecentFilesAction::insertAction(before, action);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnInsertAction(KRecentFilesAction* self, intptr_t slot) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_InsertAction_Callback(reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_InsertAction_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesAction_SlotActionTriggered(KRecentFilesAction* self, QAction* action) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->slotActionTriggered(action);
    } else {
        ((VirtualKRecentFilesAction*)self)->slotActionTriggered(action);
    }
}

// Base class handler implementation
void KRecentFilesAction_QBaseSlotActionTriggered(KRecentFilesAction* self, QAction* action) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_SlotActionTriggered_IsBase(true);
        vkrecentfilesaction->slotActionTriggered(action);
    } else {
        ((VirtualKRecentFilesAction*)self)->slotActionTriggered(action);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnSlotActionTriggered(KRecentFilesAction* self, intptr_t slot) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_SlotActionTriggered_Callback(reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_SlotActionTriggered_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* KRecentFilesAction_CreateWidget(KRecentFilesAction* self, QWidget* parent) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        return vkrecentfilesaction->createWidget(parent);
    } else {
        return ((VirtualKRecentFilesAction*)self)->createWidget(parent);
    }
}

// Base class handler implementation
QWidget* KRecentFilesAction_QBaseCreateWidget(KRecentFilesAction* self, QWidget* parent) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_CreateWidget_IsBase(true);
        return vkrecentfilesaction->createWidget(parent);
    } else {
        return ((VirtualKRecentFilesAction*)self)->createWidget(parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnCreateWidget(KRecentFilesAction* self, intptr_t slot) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_CreateWidget_Callback(reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_CreateWidget_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesAction_DeleteWidget(KRecentFilesAction* self, QWidget* widget) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->deleteWidget(widget);
    } else {
        ((VirtualKRecentFilesAction*)self)->deleteWidget(widget);
    }
}

// Base class handler implementation
void KRecentFilesAction_QBaseDeleteWidget(KRecentFilesAction* self, QWidget* widget) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_DeleteWidget_IsBase(true);
        vkrecentfilesaction->deleteWidget(widget);
    } else {
        ((VirtualKRecentFilesAction*)self)->deleteWidget(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnDeleteWidget(KRecentFilesAction* self, intptr_t slot) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_DeleteWidget_Callback(reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_DeleteWidget_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRecentFilesAction_Event(KRecentFilesAction* self, QEvent* event) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        return vkrecentfilesaction->event(event);
    } else {
        return ((VirtualKRecentFilesAction*)self)->event(event);
    }
}

// Base class handler implementation
bool KRecentFilesAction_QBaseEvent(KRecentFilesAction* self, QEvent* event) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_Event_IsBase(true);
        return vkrecentfilesaction->event(event);
    } else {
        return ((VirtualKRecentFilesAction*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnEvent(KRecentFilesAction* self, intptr_t slot) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_Event_Callback(reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRecentFilesAction_EventFilter(KRecentFilesAction* self, QObject* watched, QEvent* event) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        return vkrecentfilesaction->eventFilter(watched, event);
    } else {
        return ((VirtualKRecentFilesAction*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KRecentFilesAction_QBaseEventFilter(KRecentFilesAction* self, QObject* watched, QEvent* event) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_EventFilter_IsBase(true);
        return vkrecentfilesaction->eventFilter(watched, event);
    } else {
        return ((VirtualKRecentFilesAction*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnEventFilter(KRecentFilesAction* self, intptr_t slot) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_EventFilter_Callback(reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesAction_TimerEvent(KRecentFilesAction* self, QTimerEvent* event) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->timerEvent(event);
    } else {
        ((VirtualKRecentFilesAction*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KRecentFilesAction_QBaseTimerEvent(KRecentFilesAction* self, QTimerEvent* event) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_TimerEvent_IsBase(true);
        vkrecentfilesaction->timerEvent(event);
    } else {
        ((VirtualKRecentFilesAction*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnTimerEvent(KRecentFilesAction* self, intptr_t slot) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_TimerEvent_Callback(reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesAction_ChildEvent(KRecentFilesAction* self, QChildEvent* event) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->childEvent(event);
    } else {
        ((VirtualKRecentFilesAction*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KRecentFilesAction_QBaseChildEvent(KRecentFilesAction* self, QChildEvent* event) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_ChildEvent_IsBase(true);
        vkrecentfilesaction->childEvent(event);
    } else {
        ((VirtualKRecentFilesAction*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnChildEvent(KRecentFilesAction* self, intptr_t slot) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_ChildEvent_Callback(reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesAction_CustomEvent(KRecentFilesAction* self, QEvent* event) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->customEvent(event);
    } else {
        ((VirtualKRecentFilesAction*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KRecentFilesAction_QBaseCustomEvent(KRecentFilesAction* self, QEvent* event) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_CustomEvent_IsBase(true);
        vkrecentfilesaction->customEvent(event);
    } else {
        ((VirtualKRecentFilesAction*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnCustomEvent(KRecentFilesAction* self, intptr_t slot) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_CustomEvent_Callback(reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesAction_ConnectNotify(KRecentFilesAction* self, const QMetaMethod* signal) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->connectNotify(*signal);
    } else {
        ((VirtualKRecentFilesAction*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KRecentFilesAction_QBaseConnectNotify(KRecentFilesAction* self, const QMetaMethod* signal) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_ConnectNotify_IsBase(true);
        vkrecentfilesaction->connectNotify(*signal);
    } else {
        ((VirtualKRecentFilesAction*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnConnectNotify(KRecentFilesAction* self, intptr_t slot) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_ConnectNotify_Callback(reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesAction_DisconnectNotify(KRecentFilesAction* self, const QMetaMethod* signal) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->disconnectNotify(*signal);
    } else {
        ((VirtualKRecentFilesAction*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KRecentFilesAction_QBaseDisconnectNotify(KRecentFilesAction* self, const QMetaMethod* signal) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_DisconnectNotify_IsBase(true);
        vkrecentfilesaction->disconnectNotify(*signal);
    } else {
        ((VirtualKRecentFilesAction*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnDisconnectNotify(KRecentFilesAction* self, intptr_t slot) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_DisconnectNotify_Callback(reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KRecentFilesAction_SlotToggled(KRecentFilesAction* self, bool param1) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->slotToggled(param1);
    } else {
        ((VirtualKRecentFilesAction*)self)->slotToggled(param1);
    }
}

// Base class handler implementation
void KRecentFilesAction_QBaseSlotToggled(KRecentFilesAction* self, bool param1) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_SlotToggled_IsBase(true);
        vkrecentfilesaction->slotToggled(param1);
    } else {
        ((VirtualKRecentFilesAction*)self)->slotToggled(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnSlotToggled(KRecentFilesAction* self, intptr_t slot) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_SlotToggled_Callback(reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_SlotToggled_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QWidget* */ KRecentFilesAction_CreatedWidgets(const KRecentFilesAction* self) {
    auto* vkrecentfilesaction = const_cast<VirtualKRecentFilesAction*>(dynamic_cast<const VirtualKRecentFilesAction*>(self));
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        QList<QWidget*> _ret = vkrecentfilesaction->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QWidget*> _ret = ((VirtualKRecentFilesAction*)self)->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QWidget* */ KRecentFilesAction_QBaseCreatedWidgets(const KRecentFilesAction* self) {
    auto* vkrecentfilesaction = const_cast<VirtualKRecentFilesAction*>(dynamic_cast<const VirtualKRecentFilesAction*>(self));
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_CreatedWidgets_IsBase(true);
        QList<QWidget*> _ret = vkrecentfilesaction->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QWidget*> _ret = ((VirtualKRecentFilesAction*)self)->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size() + 1)));
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
void KRecentFilesAction_OnCreatedWidgets(const KRecentFilesAction* self, intptr_t slot) {
    auto* vkrecentfilesaction = const_cast<VirtualKRecentFilesAction*>(dynamic_cast<const VirtualKRecentFilesAction*>(self));
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_CreatedWidgets_Callback(reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_CreatedWidgets_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KRecentFilesAction_Sender(const KRecentFilesAction* self) {
    auto* vkrecentfilesaction = const_cast<VirtualKRecentFilesAction*>(dynamic_cast<const VirtualKRecentFilesAction*>(self));
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        return vkrecentfilesaction->sender();
    } else {
        return ((VirtualKRecentFilesAction*)self)->sender();
    }
}

// Base class handler implementation
QObject* KRecentFilesAction_QBaseSender(const KRecentFilesAction* self) {
    auto* vkrecentfilesaction = const_cast<VirtualKRecentFilesAction*>(dynamic_cast<const VirtualKRecentFilesAction*>(self));
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_Sender_IsBase(true);
        return vkrecentfilesaction->sender();
    } else {
        return ((VirtualKRecentFilesAction*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnSender(const KRecentFilesAction* self, intptr_t slot) {
    auto* vkrecentfilesaction = const_cast<VirtualKRecentFilesAction*>(dynamic_cast<const VirtualKRecentFilesAction*>(self));
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_Sender_Callback(reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KRecentFilesAction_SenderSignalIndex(const KRecentFilesAction* self) {
    auto* vkrecentfilesaction = const_cast<VirtualKRecentFilesAction*>(dynamic_cast<const VirtualKRecentFilesAction*>(self));
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        return vkrecentfilesaction->senderSignalIndex();
    } else {
        return ((VirtualKRecentFilesAction*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KRecentFilesAction_QBaseSenderSignalIndex(const KRecentFilesAction* self) {
    auto* vkrecentfilesaction = const_cast<VirtualKRecentFilesAction*>(dynamic_cast<const VirtualKRecentFilesAction*>(self));
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_SenderSignalIndex_IsBase(true);
        return vkrecentfilesaction->senderSignalIndex();
    } else {
        return ((VirtualKRecentFilesAction*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnSenderSignalIndex(const KRecentFilesAction* self, intptr_t slot) {
    auto* vkrecentfilesaction = const_cast<VirtualKRecentFilesAction*>(dynamic_cast<const VirtualKRecentFilesAction*>(self));
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_SenderSignalIndex_Callback(reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KRecentFilesAction_Receivers(const KRecentFilesAction* self, const char* signal) {
    auto* vkrecentfilesaction = const_cast<VirtualKRecentFilesAction*>(dynamic_cast<const VirtualKRecentFilesAction*>(self));
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        return vkrecentfilesaction->receivers(signal);
    } else {
        return ((VirtualKRecentFilesAction*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KRecentFilesAction_QBaseReceivers(const KRecentFilesAction* self, const char* signal) {
    auto* vkrecentfilesaction = const_cast<VirtualKRecentFilesAction*>(dynamic_cast<const VirtualKRecentFilesAction*>(self));
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_Receivers_IsBase(true);
        return vkrecentfilesaction->receivers(signal);
    } else {
        return ((VirtualKRecentFilesAction*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnReceivers(const KRecentFilesAction* self, intptr_t slot) {
    auto* vkrecentfilesaction = const_cast<VirtualKRecentFilesAction*>(dynamic_cast<const VirtualKRecentFilesAction*>(self));
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_Receivers_Callback(reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRecentFilesAction_IsSignalConnected(const KRecentFilesAction* self, const QMetaMethod* signal) {
    auto* vkrecentfilesaction = const_cast<VirtualKRecentFilesAction*>(dynamic_cast<const VirtualKRecentFilesAction*>(self));
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        return vkrecentfilesaction->isSignalConnected(*signal);
    } else {
        return ((VirtualKRecentFilesAction*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KRecentFilesAction_QBaseIsSignalConnected(const KRecentFilesAction* self, const QMetaMethod* signal) {
    auto* vkrecentfilesaction = const_cast<VirtualKRecentFilesAction*>(dynamic_cast<const VirtualKRecentFilesAction*>(self));
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_IsSignalConnected_IsBase(true);
        return vkrecentfilesaction->isSignalConnected(*signal);
    } else {
        return ((VirtualKRecentFilesAction*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnIsSignalConnected(const KRecentFilesAction* self, intptr_t slot) {
    auto* vkrecentfilesaction = const_cast<VirtualKRecentFilesAction*>(dynamic_cast<const VirtualKRecentFilesAction*>(self));
    if (vkrecentfilesaction && vkrecentfilesaction->isVirtualKRecentFilesAction) {
        vkrecentfilesaction->setKRecentFilesAction_IsSignalConnected_Callback(reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_IsSignalConnected_Callback>(slot));
    }
}

void KRecentFilesAction_Delete(KRecentFilesAction* self) {
    delete self;
}
