#include <QChildEvent>
#include <QEvent>
#include <QIcon>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsCore__CustomEmojiIconManager
#include <customemojiiconmanager.h>
#include "libcustomemojiiconmanager.h"
#include "libcustomemojiiconmanager.hxx"

TextEmoticonsCore__CustomEmojiIconManager* TextEmoticonsCore__CustomEmojiIconManager_new() {
    return new VirtualTextEmoticonsCoreCustomEmojiIconManager();
}

TextEmoticonsCore__CustomEmojiIconManager* TextEmoticonsCore__CustomEmojiIconManager_new2(QObject* parent) {
    return new VirtualTextEmoticonsCoreCustomEmojiIconManager(parent);
}

QIcon* TextEmoticonsCore__CustomEmojiIconManager_GenerateIcon(TextEmoticonsCore__CustomEmojiIconManager* self, const libqt_string customIdentifier) {
    QString customIdentifier_QString = QString::fromUtf8(customIdentifier.data, customIdentifier.len);
    return new QIcon(self->generateIcon(customIdentifier_QString));
}

libqt_string TextEmoticonsCore__CustomEmojiIconManager_FileName(TextEmoticonsCore__CustomEmojiIconManager* self, const libqt_string customIdentifier) {
    QString customIdentifier_QString = QString::fromUtf8(customIdentifier.data, customIdentifier.len);
    auto _ret = self->fileName(customIdentifier_QString);
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
QIcon* TextEmoticonsCore__CustomEmojiIconManager_SuperGenerateIcon(TextEmoticonsCore__CustomEmojiIconManager* self, const libqt_string customIdentifier) {
    QString customIdentifier_QString = QString::fromUtf8(customIdentifier.data, customIdentifier.len);
    return new QIcon(self->TextEmoticonsCore::CustomEmojiIconManager::generateIcon(customIdentifier_QString));
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__CustomEmojiIconManager_OnGenerateIcon(TextEmoticonsCore__CustomEmojiIconManager* self, intptr_t slot) {
    if (auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self))
        vtextemoticonscorecustomemojiiconmanager->textemoticonscore__customemojiiconmanager_generateicon_callback = reinterpret_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager::TextEmoticonsCore__CustomEmojiIconManager_GenerateIcon_Callback>(slot);
}

// Base class handler implementation
libqt_string TextEmoticonsCore__CustomEmojiIconManager_SuperFileName(TextEmoticonsCore__CustomEmojiIconManager* self, const libqt_string customIdentifier) {
    QString customIdentifier_QString = QString::fromUtf8(customIdentifier.data, customIdentifier.len);
    auto _ret = self->TextEmoticonsCore::CustomEmojiIconManager::fileName(customIdentifier_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__CustomEmojiIconManager_OnFileName(TextEmoticonsCore__CustomEmojiIconManager* self, intptr_t slot) {
    if (auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self))
        vtextemoticonscorecustomemojiiconmanager->textemoticonscore__customemojiiconmanager_filename_callback = reinterpret_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager::TextEmoticonsCore__CustomEmojiIconManager_FileName_Callback>(slot);
}

// Derived class handler implementation
QMetaObject* TextEmoticonsCore__CustomEmojiIconManager_MetaObject(const TextEmoticonsCore__CustomEmojiIconManager* self) {
    return (QMetaObject*)self->metaObject();
}

// Base class handler implementation
QMetaObject* TextEmoticonsCore__CustomEmojiIconManager_SuperMetaObject(const TextEmoticonsCore__CustomEmojiIconManager* self) {
    return (QMetaObject*)self->TextEmoticonsCore::CustomEmojiIconManager::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__CustomEmojiIconManager_OnMetaObject(TextEmoticonsCore__CustomEmojiIconManager* self, intptr_t slot) {
    if (auto* vtextemoticonscorecustomemojiiconmanager = const_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(dynamic_cast<const VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self)))
        vtextemoticonscorecustomemojiiconmanager->textemoticonscore__customemojiiconmanager_metaobject_callback = reinterpret_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager::TextEmoticonsCore__CustomEmojiIconManager_MetaObject_Callback>(slot);
}

// Derived class handler implementation
void* TextEmoticonsCore__CustomEmojiIconManager_Metacast(TextEmoticonsCore__CustomEmojiIconManager* self, const char* param1) {
    return self->qt_metacast(param1);
}

// Base class handler implementation
void* TextEmoticonsCore__CustomEmojiIconManager_SuperMetacast(TextEmoticonsCore__CustomEmojiIconManager* self, const char* param1) {
    return self->TextEmoticonsCore::CustomEmojiIconManager::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__CustomEmojiIconManager_OnMetacast(TextEmoticonsCore__CustomEmojiIconManager* self, intptr_t slot) {
    if (auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self))
        vtextemoticonscorecustomemojiiconmanager->textemoticonscore__customemojiiconmanager_metacast_callback = reinterpret_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager::TextEmoticonsCore__CustomEmojiIconManager_Metacast_Callback>(slot);
}

// Derived class handler implementation
int TextEmoticonsCore__CustomEmojiIconManager_Metacall(TextEmoticonsCore__CustomEmojiIconManager* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Base class handler implementation
int TextEmoticonsCore__CustomEmojiIconManager_SuperMetacall(TextEmoticonsCore__CustomEmojiIconManager* self, int param1, int param2, void** param3) {
    return self->TextEmoticonsCore::CustomEmojiIconManager::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__CustomEmojiIconManager_OnMetacall(TextEmoticonsCore__CustomEmojiIconManager* self, intptr_t slot) {
    if (auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self))
        vtextemoticonscorecustomemojiiconmanager->textemoticonscore__customemojiiconmanager_metacall_callback = reinterpret_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager::TextEmoticonsCore__CustomEmojiIconManager_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__CustomEmojiIconManager_Event(TextEmoticonsCore__CustomEmojiIconManager* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool TextEmoticonsCore__CustomEmojiIconManager_SuperEvent(TextEmoticonsCore__CustomEmojiIconManager* self, QEvent* event) {
    return self->TextEmoticonsCore::CustomEmojiIconManager::event(event);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__CustomEmojiIconManager_OnEvent(TextEmoticonsCore__CustomEmojiIconManager* self, intptr_t slot) {
    if (auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self))
        vtextemoticonscorecustomemojiiconmanager->textemoticonscore__customemojiiconmanager_event_callback = reinterpret_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager::TextEmoticonsCore__CustomEmojiIconManager_Event_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__CustomEmojiIconManager_EventFilter(TextEmoticonsCore__CustomEmojiIconManager* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextEmoticonsCore__CustomEmojiIconManager_SuperEventFilter(TextEmoticonsCore__CustomEmojiIconManager* self, QObject* watched, QEvent* event) {
    return self->TextEmoticonsCore::CustomEmojiIconManager::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__CustomEmojiIconManager_OnEventFilter(TextEmoticonsCore__CustomEmojiIconManager* self, intptr_t slot) {
    if (auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self))
        vtextemoticonscorecustomemojiiconmanager->textemoticonscore__customemojiiconmanager_eventfilter_callback = reinterpret_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager::TextEmoticonsCore__CustomEmojiIconManager_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__CustomEmojiIconManager_TimerEvent(TextEmoticonsCore__CustomEmojiIconManager* self, QTimerEvent* event) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscorecustomemojiiconmanager) {
        vtextemoticonscorecustomemojiiconmanager->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsCore::CustomEmojiIconManager::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsCore__CustomEmojiIconManager_SuperTimerEvent(TextEmoticonsCore__CustomEmojiIconManager* self, QTimerEvent* event) {
    if (auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self)) {
        vtextemoticonscorecustomemojiiconmanager->TextEmoticonsCore::CustomEmojiIconManager::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsCore::CustomEmojiIconManager::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__CustomEmojiIconManager_OnTimerEvent(TextEmoticonsCore__CustomEmojiIconManager* self, intptr_t slot) {
    if (auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self))
        vtextemoticonscorecustomemojiiconmanager->textemoticonscore__customemojiiconmanager_timerevent_callback = reinterpret_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager::TextEmoticonsCore__CustomEmojiIconManager_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__CustomEmojiIconManager_ChildEvent(TextEmoticonsCore__CustomEmojiIconManager* self, QChildEvent* event) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscorecustomemojiiconmanager) {
        vtextemoticonscorecustomemojiiconmanager->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsCore::CustomEmojiIconManager::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsCore__CustomEmojiIconManager_SuperChildEvent(TextEmoticonsCore__CustomEmojiIconManager* self, QChildEvent* event) {
    if (auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self)) {
        vtextemoticonscorecustomemojiiconmanager->TextEmoticonsCore::CustomEmojiIconManager::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsCore::CustomEmojiIconManager::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__CustomEmojiIconManager_OnChildEvent(TextEmoticonsCore__CustomEmojiIconManager* self, intptr_t slot) {
    if (auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self))
        vtextemoticonscorecustomemojiiconmanager->textemoticonscore__customemojiiconmanager_childevent_callback = reinterpret_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager::TextEmoticonsCore__CustomEmojiIconManager_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__CustomEmojiIconManager_CustomEvent(TextEmoticonsCore__CustomEmojiIconManager* self, QEvent* event) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscorecustomemojiiconmanager) {
        vtextemoticonscorecustomemojiiconmanager->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsCore::CustomEmojiIconManager::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsCore__CustomEmojiIconManager_SuperCustomEvent(TextEmoticonsCore__CustomEmojiIconManager* self, QEvent* event) {
    if (auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self)) {
        vtextemoticonscorecustomemojiiconmanager->TextEmoticonsCore::CustomEmojiIconManager::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsCore::CustomEmojiIconManager::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__CustomEmojiIconManager_OnCustomEvent(TextEmoticonsCore__CustomEmojiIconManager* self, intptr_t slot) {
    if (auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self))
        vtextemoticonscorecustomemojiiconmanager->textemoticonscore__customemojiiconmanager_customevent_callback = reinterpret_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager::TextEmoticonsCore__CustomEmojiIconManager_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__CustomEmojiIconManager_ConnectNotify(TextEmoticonsCore__CustomEmojiIconManager* self, const QMetaMethod* signal) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscorecustomemojiiconmanager) {
        vtextemoticonscorecustomemojiiconmanager->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsCore::CustomEmojiIconManager::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsCore__CustomEmojiIconManager_SuperConnectNotify(TextEmoticonsCore__CustomEmojiIconManager* self, const QMetaMethod* signal) {
    if (auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self)) {
        vtextemoticonscorecustomemojiiconmanager->TextEmoticonsCore::CustomEmojiIconManager::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsCore::CustomEmojiIconManager::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__CustomEmojiIconManager_OnConnectNotify(TextEmoticonsCore__CustomEmojiIconManager* self, intptr_t slot) {
    if (auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self))
        vtextemoticonscorecustomemojiiconmanager->textemoticonscore__customemojiiconmanager_connectnotify_callback = reinterpret_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager::TextEmoticonsCore__CustomEmojiIconManager_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__CustomEmojiIconManager_DisconnectNotify(TextEmoticonsCore__CustomEmojiIconManager* self, const QMetaMethod* signal) {
    auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self);
    if (vtextemoticonscorecustomemojiiconmanager) {
        vtextemoticonscorecustomemojiiconmanager->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsCore::CustomEmojiIconManager::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsCore__CustomEmojiIconManager_SuperDisconnectNotify(TextEmoticonsCore__CustomEmojiIconManager* self, const QMetaMethod* signal) {
    if (auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self)) {
        vtextemoticonscorecustomemojiiconmanager->TextEmoticonsCore::CustomEmojiIconManager::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsCore::CustomEmojiIconManager::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__CustomEmojiIconManager_OnDisconnectNotify(TextEmoticonsCore__CustomEmojiIconManager* self, intptr_t slot) {
    if (auto* vtextemoticonscorecustomemojiiconmanager = dynamic_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self))
        vtextemoticonscorecustomemojiiconmanager->textemoticonscore__customemojiiconmanager_disconnectnotify_callback = reinterpret_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager::TextEmoticonsCore__CustomEmojiIconManager_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* TextEmoticonsCore__CustomEmojiIconManager_Sender(const TextEmoticonsCore__CustomEmojiIconManager* self) {
    if (auto* vtextemoticonscorecustomemojiiconmanager = const_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(dynamic_cast<const VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self))) {
        return vtextemoticonscorecustomemojiiconmanager->VirtualTextEmoticonsCoreCustomEmojiIconManager::sender();
    } else
        qFatal("Error: Protected method TextEmoticonsCore::CustomEmojiIconManager::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextEmoticonsCore__CustomEmojiIconManager_SenderSignalIndex(const TextEmoticonsCore__CustomEmojiIconManager* self) {
    if (auto* vtextemoticonscorecustomemojiiconmanager = const_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(dynamic_cast<const VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self))) {
        return vtextemoticonscorecustomemojiiconmanager->VirtualTextEmoticonsCoreCustomEmojiIconManager::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextEmoticonsCore::CustomEmojiIconManager::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextEmoticonsCore__CustomEmojiIconManager_Receivers(const TextEmoticonsCore__CustomEmojiIconManager* self, const char* signal) {
    if (auto* vtextemoticonscorecustomemojiiconmanager = const_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(dynamic_cast<const VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self))) {
        return vtextemoticonscorecustomemojiiconmanager->VirtualTextEmoticonsCoreCustomEmojiIconManager::receivers(signal);
    } else
        qFatal("Error: Protected method TextEmoticonsCore::CustomEmojiIconManager::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextEmoticonsCore__CustomEmojiIconManager_IsSignalConnected(const TextEmoticonsCore__CustomEmojiIconManager* self, const QMetaMethod* signal) {
    if (auto* vtextemoticonscorecustomemojiiconmanager = const_cast<VirtualTextEmoticonsCoreCustomEmojiIconManager*>(dynamic_cast<const VirtualTextEmoticonsCoreCustomEmojiIconManager*>(self))) {
        return vtextemoticonscorecustomemojiiconmanager->VirtualTextEmoticonsCoreCustomEmojiIconManager::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextEmoticonsCore::CustomEmojiIconManager::isSignalConnected called without a directly constructed type");
}

void TextEmoticonsCore__CustomEmojiIconManager_Delete(TextEmoticonsCore__CustomEmojiIconManager* self) {
    delete self;
}
