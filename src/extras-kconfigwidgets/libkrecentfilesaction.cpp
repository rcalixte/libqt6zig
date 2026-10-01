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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KRecentFilesAction_Tr(const char* s) {
    auto _ret = KRecentFilesAction::tr(s);
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
    return self->removeAction(action);
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
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QUrl(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KRecentFilesAction_Clear(KRecentFilesAction* self) {
    self->clear();
}

void KRecentFilesAction_UrlSelected(KRecentFilesAction* self, const QUrl* url) {
    self->urlSelected(*url);
}

void KRecentFilesAction_Connect_UrlSelected(KRecentFilesAction* self, intptr_t slot) {
    void (*slotFunc)(KRecentFilesAction*, QUrl*) = reinterpret_cast<void (*)(KRecentFilesAction*, QUrl*)>(slot);
    KRecentFilesAction::connect(self,
                                static_cast<void (KRecentFilesAction::*)(const QUrl&)>(&KRecentFilesAction::urlSelected),
                                [self, slotFunc](const QUrl& url) {
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
    KRecentFilesAction::connect(self,
                                static_cast<void (KRecentFilesAction::*)()>(&KRecentFilesAction::recentListCleared),
                                [self, slotFunc]() {
                                    slotFunc(self);
                                });
}

libqt_string KRecentFilesAction_Tr2(const char* s, const char* c) {
    auto _ret = KRecentFilesAction::tr(s, c);
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
    auto _ret = KRecentFilesAction::tr(s, c, static_cast<int>(n));
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
QMetaObject* KRecentFilesAction_SuperMetaObject(const KRecentFilesAction* self) {
    return (QMetaObject*)self->KRecentFilesAction::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnMetaObject(KRecentFilesAction* self, intptr_t slot) {
    if (auto* vkrecentfilesaction = const_cast<VirtualKRecentFilesAction*>(dynamic_cast<const VirtualKRecentFilesAction*>(self)))
        vkrecentfilesaction->krecentfilesaction_metaobject_callback = reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KRecentFilesAction_SuperMetacast(KRecentFilesAction* self, const char* param1) {
    return self->KRecentFilesAction::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnMetacast(KRecentFilesAction* self, intptr_t slot) {
    if (auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self))
        vkrecentfilesaction->krecentfilesaction_metacast_callback = reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_Metacast_Callback>(slot);
}

// Base class handler implementation
int KRecentFilesAction_SuperMetacall(KRecentFilesAction* self, int param1, int param2, void** param3) {
    return self->KRecentFilesAction::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnMetacall(KRecentFilesAction* self, intptr_t slot) {
    if (auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self))
        vkrecentfilesaction->krecentfilesaction_metacall_callback = reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_Metacall_Callback>(slot);
}

// Base class handler implementation
QAction* KRecentFilesAction_SuperRemoveAction(KRecentFilesAction* self, QAction* action) {
    return self->KRecentFilesAction::removeAction(action);
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnRemoveAction(KRecentFilesAction* self, intptr_t slot) {
    if (auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self))
        vkrecentfilesaction->krecentfilesaction_removeaction_callback = reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_RemoveAction_Callback>(slot);
}

// Base class handler implementation
void KRecentFilesAction_SuperClear(KRecentFilesAction* self) {
    self->KRecentFilesAction::clear();
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnClear(KRecentFilesAction* self, intptr_t slot) {
    if (auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self))
        vkrecentfilesaction->krecentfilesaction_clear_callback = reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_Clear_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesAction_InsertAction(KRecentFilesAction* self, QAction* before, QAction* action) {
    self->insertAction(before, action);
}

// Base class handler implementation
void KRecentFilesAction_SuperInsertAction(KRecentFilesAction* self, QAction* before, QAction* action) {
    self->KRecentFilesAction::insertAction(before, action);
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnInsertAction(KRecentFilesAction* self, intptr_t slot) {
    if (auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self))
        vkrecentfilesaction->krecentfilesaction_insertaction_callback = reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_InsertAction_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesAction_SlotActionTriggered(KRecentFilesAction* self, QAction* action) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction) {
        vkrecentfilesaction->slotActionTriggered(action);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesAction::slotActionTriggered called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesAction_SuperSlotActionTriggered(KRecentFilesAction* self, QAction* action) {
    if (auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self)) {
        vkrecentfilesaction->KRecentFilesAction::slotActionTriggered(action);
    } else
        qFatal("Error: Protected virtual method KRecentFilesAction::slotActionTriggered called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnSlotActionTriggered(KRecentFilesAction* self, intptr_t slot) {
    if (auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self))
        vkrecentfilesaction->krecentfilesaction_slotactiontriggered_callback = reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_SlotActionTriggered_Callback>(slot);
}

// Derived class handler implementation
QWidget* KRecentFilesAction_CreateWidget(KRecentFilesAction* self, QWidget* parent) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction) {
        return vkrecentfilesaction->createWidget(parent);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesAction::createWidget called without a directly constructed type");
    }
}

// Base class handler implementation
QWidget* KRecentFilesAction_SuperCreateWidget(KRecentFilesAction* self, QWidget* parent) {
    if (auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self)) {
        return vkrecentfilesaction->KRecentFilesAction::createWidget(parent);
    } else
        qFatal("Error: Protected virtual method KRecentFilesAction::createWidget called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnCreateWidget(KRecentFilesAction* self, intptr_t slot) {
    if (auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self))
        vkrecentfilesaction->krecentfilesaction_createwidget_callback = reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_CreateWidget_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesAction_DeleteWidget(KRecentFilesAction* self, QWidget* widget) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction) {
        vkrecentfilesaction->deleteWidget(widget);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesAction::deleteWidget called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesAction_SuperDeleteWidget(KRecentFilesAction* self, QWidget* widget) {
    if (auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self)) {
        vkrecentfilesaction->KRecentFilesAction::deleteWidget(widget);
    } else
        qFatal("Error: Protected virtual method KRecentFilesAction::deleteWidget called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnDeleteWidget(KRecentFilesAction* self, intptr_t slot) {
    if (auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self))
        vkrecentfilesaction->krecentfilesaction_deletewidget_callback = reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_DeleteWidget_Callback>(slot);
}

// Derived class handler implementation
bool KRecentFilesAction_Event(KRecentFilesAction* self, QEvent* event) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction) {
        return vkrecentfilesaction->event(event);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesAction::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KRecentFilesAction_SuperEvent(KRecentFilesAction* self, QEvent* event) {
    if (auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self)) {
        return vkrecentfilesaction->KRecentFilesAction::event(event);
    } else
        qFatal("Error: Protected virtual method KRecentFilesAction::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnEvent(KRecentFilesAction* self, intptr_t slot) {
    if (auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self))
        vkrecentfilesaction->krecentfilesaction_event_callback = reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_Event_Callback>(slot);
}

// Derived class handler implementation
bool KRecentFilesAction_EventFilter(KRecentFilesAction* self, QObject* watched, QEvent* event) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction) {
        return vkrecentfilesaction->eventFilter(watched, event);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesAction::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KRecentFilesAction_SuperEventFilter(KRecentFilesAction* self, QObject* watched, QEvent* event) {
    if (auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self)) {
        return vkrecentfilesaction->KRecentFilesAction::eventFilter(watched, event);
    } else
        qFatal("Error: Protected virtual method KRecentFilesAction::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnEventFilter(KRecentFilesAction* self, intptr_t slot) {
    if (auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self))
        vkrecentfilesaction->krecentfilesaction_eventfilter_callback = reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesAction_TimerEvent(KRecentFilesAction* self, QTimerEvent* event) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction) {
        vkrecentfilesaction->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesAction::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesAction_SuperTimerEvent(KRecentFilesAction* self, QTimerEvent* event) {
    if (auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self)) {
        vkrecentfilesaction->KRecentFilesAction::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KRecentFilesAction::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnTimerEvent(KRecentFilesAction* self, intptr_t slot) {
    if (auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self))
        vkrecentfilesaction->krecentfilesaction_timerevent_callback = reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesAction_ChildEvent(KRecentFilesAction* self, QChildEvent* event) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction) {
        vkrecentfilesaction->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesAction::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesAction_SuperChildEvent(KRecentFilesAction* self, QChildEvent* event) {
    if (auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self)) {
        vkrecentfilesaction->KRecentFilesAction::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KRecentFilesAction::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnChildEvent(KRecentFilesAction* self, intptr_t slot) {
    if (auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self))
        vkrecentfilesaction->krecentfilesaction_childevent_callback = reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesAction_CustomEvent(KRecentFilesAction* self, QEvent* event) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction) {
        vkrecentfilesaction->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesAction::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesAction_SuperCustomEvent(KRecentFilesAction* self, QEvent* event) {
    if (auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self)) {
        vkrecentfilesaction->KRecentFilesAction::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KRecentFilesAction::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnCustomEvent(KRecentFilesAction* self, intptr_t slot) {
    if (auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self))
        vkrecentfilesaction->krecentfilesaction_customevent_callback = reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesAction_ConnectNotify(KRecentFilesAction* self, const QMetaMethod* signal) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction) {
        vkrecentfilesaction->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesAction::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesAction_SuperConnectNotify(KRecentFilesAction* self, const QMetaMethod* signal) {
    if (auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self)) {
        vkrecentfilesaction->KRecentFilesAction::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KRecentFilesAction::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnConnectNotify(KRecentFilesAction* self, intptr_t slot) {
    if (auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self))
        vkrecentfilesaction->krecentfilesaction_connectnotify_callback = reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesAction_DisconnectNotify(KRecentFilesAction* self, const QMetaMethod* signal) {
    auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self);
    if (vkrecentfilesaction) {
        vkrecentfilesaction->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesAction::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesAction_SuperDisconnectNotify(KRecentFilesAction* self, const QMetaMethod* signal) {
    if (auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self)) {
        vkrecentfilesaction->KRecentFilesAction::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KRecentFilesAction::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesAction_OnDisconnectNotify(KRecentFilesAction* self, intptr_t slot) {
    if (auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self))
        vkrecentfilesaction->krecentfilesaction_disconnectnotify_callback = reinterpret_cast<VirtualKRecentFilesAction::KRecentFilesAction_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KRecentFilesAction_SlotToggled(KRecentFilesAction* self, bool param1) {
    if (auto* vkrecentfilesaction = dynamic_cast<VirtualKRecentFilesAction*>(self)) {
        vkrecentfilesaction->VirtualKRecentFilesAction::slotToggled(param1);
    } else
        qFatal("Error: Protected method KRecentFilesAction::slotToggled called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QWidget* */ KRecentFilesAction_CreatedWidgets(const KRecentFilesAction* self) {
    if (auto* vkrecentfilesaction = const_cast<VirtualKRecentFilesAction*>(dynamic_cast<const VirtualKRecentFilesAction*>(self))) {
        QList<QWidget*> _ret = vkrecentfilesaction->VirtualKRecentFilesAction::createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else
        qFatal("Error: Protected method KRecentFilesAction::createdWidgets called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KRecentFilesAction_Sender(const KRecentFilesAction* self) {
    if (auto* vkrecentfilesaction = const_cast<VirtualKRecentFilesAction*>(dynamic_cast<const VirtualKRecentFilesAction*>(self))) {
        return vkrecentfilesaction->VirtualKRecentFilesAction::sender();
    } else
        qFatal("Error: Protected method KRecentFilesAction::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KRecentFilesAction_SenderSignalIndex(const KRecentFilesAction* self) {
    if (auto* vkrecentfilesaction = const_cast<VirtualKRecentFilesAction*>(dynamic_cast<const VirtualKRecentFilesAction*>(self))) {
        return vkrecentfilesaction->VirtualKRecentFilesAction::senderSignalIndex();
    } else
        qFatal("Error: Protected method KRecentFilesAction::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KRecentFilesAction_Receivers(const KRecentFilesAction* self, const char* signal) {
    if (auto* vkrecentfilesaction = const_cast<VirtualKRecentFilesAction*>(dynamic_cast<const VirtualKRecentFilesAction*>(self))) {
        return vkrecentfilesaction->VirtualKRecentFilesAction::receivers(signal);
    } else
        qFatal("Error: Protected method KRecentFilesAction::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KRecentFilesAction_IsSignalConnected(const KRecentFilesAction* self, const QMetaMethod* signal) {
    if (auto* vkrecentfilesaction = const_cast<VirtualKRecentFilesAction*>(dynamic_cast<const VirtualKRecentFilesAction*>(self))) {
        return vkrecentfilesaction->VirtualKRecentFilesAction::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KRecentFilesAction::isSignalConnected called without a directly constructed type");
}

void KRecentFilesAction_Delete(KRecentFilesAction* self) {
    delete self;
}
