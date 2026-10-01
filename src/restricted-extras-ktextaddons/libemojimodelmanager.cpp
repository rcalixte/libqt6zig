#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsCore__CustomEmojiIconManager
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsCore__EmojiModel
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsCore__EmojiModelManager
#include <emojimodelmanager.h>
#include "libemojimodelmanager.h"
#include "libemojimodelmanager.hxx"

TextEmoticonsCore__EmojiModelManager* TextEmoticonsCore__EmojiModelManager_new() {
    return new VirtualTextEmoticonsCoreEmojiModelManager();
}

TextEmoticonsCore__EmojiModelManager* TextEmoticonsCore__EmojiModelManager_new2(QObject* parent) {
    return new VirtualTextEmoticonsCoreEmojiModelManager(parent);
}

QMetaObject* TextEmoticonsCore__EmojiModelManager_MetaObject(const TextEmoticonsCore__EmojiModelManager* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextEmoticonsCore__EmojiModelManager_Metacast(TextEmoticonsCore__EmojiModelManager* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextEmoticonsCore__EmojiModelManager_Metacall(TextEmoticonsCore__EmojiModelManager* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextEmoticonsCore__EmojiModelManager_Tr(const char* s) {
    auto _ret = TextEmoticonsCore::EmojiModelManager::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

TextEmoticonsCore__EmojiModelManager* TextEmoticonsCore__EmojiModelManager_Self() {
    return TextEmoticonsCore::EmojiModelManager::self();
}

TextEmoticonsCore__EmojiModel* TextEmoticonsCore__EmojiModelManager_EmojiModel(const TextEmoticonsCore__EmojiModelManager* self) {
    return self->emojiModel();
}

libqt_list /* of libqt_string */ TextEmoticonsCore__EmojiModelManager_RecentIdentifier(const TextEmoticonsCore__EmojiModelManager* self) {
    const QList<QString>& _ret = self->recentIdentifier();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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

void TextEmoticonsCore__EmojiModelManager_SetRecentIdentifier(TextEmoticonsCore__EmojiModelManager* self, const libqt_list /* of libqt_string */ newRecentIdentifier) {
    QList<QString> newRecentIdentifier_QList;
    newRecentIdentifier_QList.reserve(newRecentIdentifier.len);
    libqt_string* newRecentIdentifier_arr = static_cast<libqt_string*>(newRecentIdentifier.data);
    for (size_t i = 0; i < newRecentIdentifier.len; ++i) {
        QString newRecentIdentifier_arr_i_QString = QString::fromUtf8(newRecentIdentifier_arr[i].data, newRecentIdentifier_arr[i].len);
        newRecentIdentifier_QList.push_back(newRecentIdentifier_arr_i_QString);
    }
    self->setRecentIdentifier(newRecentIdentifier_QList);
}

void TextEmoticonsCore__EmojiModelManager_AddIdentifier(TextEmoticonsCore__EmojiModelManager* self, const libqt_string identifier) {
    QString identifier_QString = QString::fromUtf8(identifier.data, identifier.len);
    self->addIdentifier(identifier_QString);
}

TextEmoticonsCore__CustomEmojiIconManager* TextEmoticonsCore__EmojiModelManager_CustomEmojiIconManager(const TextEmoticonsCore__EmojiModelManager* self) {
    return self->customEmojiIconManager();
}

void TextEmoticonsCore__EmojiModelManager_SetCustomEmojiIconManager(TextEmoticonsCore__EmojiModelManager* self, TextEmoticonsCore__CustomEmojiIconManager* newCustomEmojiIconManager) {
    self->setCustomEmojiIconManager(newCustomEmojiIconManager);
}

libqt_list /* of libqt_string */ TextEmoticonsCore__EmojiModelManager_ExcludeEmoticons(const TextEmoticonsCore__EmojiModelManager* self) {
    QList<QString> _ret = self->excludeEmoticons();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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

void TextEmoticonsCore__EmojiModelManager_SetExcludeEmoticons(TextEmoticonsCore__EmojiModelManager* self, const libqt_list /* of libqt_string */ emoticons) {
    QList<QString> emoticons_QList;
    emoticons_QList.reserve(emoticons.len);
    libqt_string* emoticons_arr = static_cast<libqt_string*>(emoticons.data);
    for (size_t i = 0; i < emoticons.len; ++i) {
        QString emoticons_arr_i_QString = QString::fromUtf8(emoticons_arr[i].data, emoticons_arr[i].len);
        emoticons_QList.push_back(emoticons_arr_i_QString);
    }
    self->setExcludeEmoticons(emoticons_QList);
}

void TextEmoticonsCore__EmojiModelManager_UsedIdentifierChanged(TextEmoticonsCore__EmojiModelManager* self, const libqt_list /* of libqt_string */ lst) {
    QList<QString> lst_QList;
    lst_QList.reserve(lst.len);
    libqt_string* lst_arr = static_cast<libqt_string*>(lst.data);
    for (size_t i = 0; i < lst.len; ++i) {
        QString lst_arr_i_QString = QString::fromUtf8(lst_arr[i].data, lst_arr[i].len);
        lst_QList.push_back(lst_arr_i_QString);
    }
    self->usedIdentifierChanged(lst_QList);
}

void TextEmoticonsCore__EmojiModelManager_Connect_UsedIdentifierChanged(TextEmoticonsCore__EmojiModelManager* self, intptr_t slot) {
    void (*slotFunc)(TextEmoticonsCore__EmojiModelManager*, const char**) = reinterpret_cast<void (*)(TextEmoticonsCore__EmojiModelManager*, const char**)>(slot);
    TextEmoticonsCore::EmojiModelManager::connect(self,
                                                  static_cast<void (TextEmoticonsCore::EmojiModelManager::*)(const QList<QString>&)>(&TextEmoticonsCore::EmojiModelManager::usedIdentifierChanged),
                                                  [self, slotFunc](const QList<QString>& lst) {
                                                      const QList<QString>& lst_ret = lst;
                                                      // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
                                                      const char** lst_arr = static_cast<const char**>(malloc(sizeof(const char*) * (lst_ret.size() + 1)));
                                                      for (qsizetype i = 0; i < lst_ret.size(); ++i) {
                                                          QByteArray lst_b = lst_ret[i].toUtf8();
                                                          auto lst_str_len = lst_b.length();
                                                          char* lst_str = static_cast<char*>(malloc(lst_str_len + 1));
                                                          memcpy(lst_str, lst_b.data(), lst_str_len);
                                                          lst_str[lst_str_len] = '\0';
                                                          lst_arr[i] = lst_str;
                                                      }
                                                      // Append sentinel null terminator to the list
                                                      lst_arr[lst_ret.size()] = nullptr;
                                                      const char** sigval1 = lst_arr;
                                                      slotFunc(self, sigval1);
                                                      libqt_free(lst_arr);
                                                  });
}

void TextEmoticonsCore__EmojiModelManager_ExcludeEmoticonsChanged(TextEmoticonsCore__EmojiModelManager* self) {
    self->excludeEmoticonsChanged();
}

void TextEmoticonsCore__EmojiModelManager_Connect_ExcludeEmoticonsChanged(TextEmoticonsCore__EmojiModelManager* self, intptr_t slot) {
    void (*slotFunc)(TextEmoticonsCore__EmojiModelManager*) = reinterpret_cast<void (*)(TextEmoticonsCore__EmojiModelManager*)>(slot);
    TextEmoticonsCore::EmojiModelManager::connect(self,
                                                  static_cast<void (TextEmoticonsCore::EmojiModelManager::*)()>(&TextEmoticonsCore::EmojiModelManager::excludeEmoticonsChanged),
                                                  [self, slotFunc]() {
                                                      slotFunc(self);
                                                  });
}

libqt_string TextEmoticonsCore__EmojiModelManager_Tr2(const char* s, const char* c) {
    auto _ret = TextEmoticonsCore::EmojiModelManager::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextEmoticonsCore__EmojiModelManager_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextEmoticonsCore::EmojiModelManager::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextEmoticonsCore__EmojiModelManager_SuperMetaObject(const TextEmoticonsCore__EmojiModelManager* self) {
    return (QMetaObject*)self->TextEmoticonsCore::EmojiModelManager::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModelManager_OnMetaObject(TextEmoticonsCore__EmojiModelManager* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodelmanager = const_cast<VirtualTextEmoticonsCoreEmojiModelManager*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModelManager*>(self)))
        vtextemoticonscoreemojimodelmanager->textemoticonscore__emojimodelmanager_metaobject_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModelManager::TextEmoticonsCore__EmojiModelManager_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextEmoticonsCore__EmojiModelManager_SuperMetacast(TextEmoticonsCore__EmojiModelManager* self, const char* param1) {
    return self->TextEmoticonsCore::EmojiModelManager::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModelManager_OnMetacast(TextEmoticonsCore__EmojiModelManager* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodelmanager = dynamic_cast<VirtualTextEmoticonsCoreEmojiModelManager*>(self))
        vtextemoticonscoreemojimodelmanager->textemoticonscore__emojimodelmanager_metacast_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModelManager::TextEmoticonsCore__EmojiModelManager_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextEmoticonsCore__EmojiModelManager_SuperMetacall(TextEmoticonsCore__EmojiModelManager* self, int param1, int param2, void** param3) {
    return self->TextEmoticonsCore::EmojiModelManager::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModelManager_OnMetacall(TextEmoticonsCore__EmojiModelManager* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodelmanager = dynamic_cast<VirtualTextEmoticonsCoreEmojiModelManager*>(self))
        vtextemoticonscoreemojimodelmanager->textemoticonscore__emojimodelmanager_metacall_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModelManager::TextEmoticonsCore__EmojiModelManager_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModelManager_Event(TextEmoticonsCore__EmojiModelManager* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModelManager_SuperEvent(TextEmoticonsCore__EmojiModelManager* self, QEvent* event) {
    return self->TextEmoticonsCore::EmojiModelManager::event(event);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModelManager_OnEvent(TextEmoticonsCore__EmojiModelManager* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodelmanager = dynamic_cast<VirtualTextEmoticonsCoreEmojiModelManager*>(self))
        vtextemoticonscoreemojimodelmanager->textemoticonscore__emojimodelmanager_event_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModelManager::TextEmoticonsCore__EmojiModelManager_Event_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModelManager_EventFilter(TextEmoticonsCore__EmojiModelManager* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModelManager_SuperEventFilter(TextEmoticonsCore__EmojiModelManager* self, QObject* watched, QEvent* event) {
    return self->TextEmoticonsCore::EmojiModelManager::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModelManager_OnEventFilter(TextEmoticonsCore__EmojiModelManager* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodelmanager = dynamic_cast<VirtualTextEmoticonsCoreEmojiModelManager*>(self))
        vtextemoticonscoreemojimodelmanager->textemoticonscore__emojimodelmanager_eventfilter_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModelManager::TextEmoticonsCore__EmojiModelManager_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModelManager_TimerEvent(TextEmoticonsCore__EmojiModelManager* self, QTimerEvent* event) {
    auto* vtextemoticonscoreemojimodelmanager = dynamic_cast<VirtualTextEmoticonsCoreEmojiModelManager*>(self);
    if (vtextemoticonscoreemojimodelmanager) {
        vtextemoticonscoreemojimodelmanager->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiModelManager::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModelManager_SuperTimerEvent(TextEmoticonsCore__EmojiModelManager* self, QTimerEvent* event) {
    if (auto* vtextemoticonscoreemojimodelmanager = dynamic_cast<VirtualTextEmoticonsCoreEmojiModelManager*>(self)) {
        vtextemoticonscoreemojimodelmanager->TextEmoticonsCore::EmojiModelManager::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiModelManager::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModelManager_OnTimerEvent(TextEmoticonsCore__EmojiModelManager* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodelmanager = dynamic_cast<VirtualTextEmoticonsCoreEmojiModelManager*>(self))
        vtextemoticonscoreemojimodelmanager->textemoticonscore__emojimodelmanager_timerevent_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModelManager::TextEmoticonsCore__EmojiModelManager_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModelManager_ChildEvent(TextEmoticonsCore__EmojiModelManager* self, QChildEvent* event) {
    auto* vtextemoticonscoreemojimodelmanager = dynamic_cast<VirtualTextEmoticonsCoreEmojiModelManager*>(self);
    if (vtextemoticonscoreemojimodelmanager) {
        vtextemoticonscoreemojimodelmanager->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiModelManager::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModelManager_SuperChildEvent(TextEmoticonsCore__EmojiModelManager* self, QChildEvent* event) {
    if (auto* vtextemoticonscoreemojimodelmanager = dynamic_cast<VirtualTextEmoticonsCoreEmojiModelManager*>(self)) {
        vtextemoticonscoreemojimodelmanager->TextEmoticonsCore::EmojiModelManager::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiModelManager::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModelManager_OnChildEvent(TextEmoticonsCore__EmojiModelManager* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodelmanager = dynamic_cast<VirtualTextEmoticonsCoreEmojiModelManager*>(self))
        vtextemoticonscoreemojimodelmanager->textemoticonscore__emojimodelmanager_childevent_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModelManager::TextEmoticonsCore__EmojiModelManager_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModelManager_CustomEvent(TextEmoticonsCore__EmojiModelManager* self, QEvent* event) {
    auto* vtextemoticonscoreemojimodelmanager = dynamic_cast<VirtualTextEmoticonsCoreEmojiModelManager*>(self);
    if (vtextemoticonscoreemojimodelmanager) {
        vtextemoticonscoreemojimodelmanager->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiModelManager::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModelManager_SuperCustomEvent(TextEmoticonsCore__EmojiModelManager* self, QEvent* event) {
    if (auto* vtextemoticonscoreemojimodelmanager = dynamic_cast<VirtualTextEmoticonsCoreEmojiModelManager*>(self)) {
        vtextemoticonscoreemojimodelmanager->TextEmoticonsCore::EmojiModelManager::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiModelManager::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModelManager_OnCustomEvent(TextEmoticonsCore__EmojiModelManager* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodelmanager = dynamic_cast<VirtualTextEmoticonsCoreEmojiModelManager*>(self))
        vtextemoticonscoreemojimodelmanager->textemoticonscore__emojimodelmanager_customevent_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModelManager::TextEmoticonsCore__EmojiModelManager_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModelManager_ConnectNotify(TextEmoticonsCore__EmojiModelManager* self, const QMetaMethod* signal) {
    auto* vtextemoticonscoreemojimodelmanager = dynamic_cast<VirtualTextEmoticonsCoreEmojiModelManager*>(self);
    if (vtextemoticonscoreemojimodelmanager) {
        vtextemoticonscoreemojimodelmanager->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiModelManager::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModelManager_SuperConnectNotify(TextEmoticonsCore__EmojiModelManager* self, const QMetaMethod* signal) {
    if (auto* vtextemoticonscoreemojimodelmanager = dynamic_cast<VirtualTextEmoticonsCoreEmojiModelManager*>(self)) {
        vtextemoticonscoreemojimodelmanager->TextEmoticonsCore::EmojiModelManager::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiModelManager::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModelManager_OnConnectNotify(TextEmoticonsCore__EmojiModelManager* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodelmanager = dynamic_cast<VirtualTextEmoticonsCoreEmojiModelManager*>(self))
        vtextemoticonscoreemojimodelmanager->textemoticonscore__emojimodelmanager_connectnotify_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModelManager::TextEmoticonsCore__EmojiModelManager_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModelManager_DisconnectNotify(TextEmoticonsCore__EmojiModelManager* self, const QMetaMethod* signal) {
    auto* vtextemoticonscoreemojimodelmanager = dynamic_cast<VirtualTextEmoticonsCoreEmojiModelManager*>(self);
    if (vtextemoticonscoreemojimodelmanager) {
        vtextemoticonscoreemojimodelmanager->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiModelManager::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModelManager_SuperDisconnectNotify(TextEmoticonsCore__EmojiModelManager* self, const QMetaMethod* signal) {
    if (auto* vtextemoticonscoreemojimodelmanager = dynamic_cast<VirtualTextEmoticonsCoreEmojiModelManager*>(self)) {
        vtextemoticonscoreemojimodelmanager->TextEmoticonsCore::EmojiModelManager::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiModelManager::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModelManager_OnDisconnectNotify(TextEmoticonsCore__EmojiModelManager* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodelmanager = dynamic_cast<VirtualTextEmoticonsCoreEmojiModelManager*>(self))
        vtextemoticonscoreemojimodelmanager->textemoticonscore__emojimodelmanager_disconnectnotify_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModelManager::TextEmoticonsCore__EmojiModelManager_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* TextEmoticonsCore__EmojiModelManager_Sender(const TextEmoticonsCore__EmojiModelManager* self) {
    if (auto* vtextemoticonscoreemojimodelmanager = const_cast<VirtualTextEmoticonsCoreEmojiModelManager*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModelManager*>(self))) {
        return vtextemoticonscoreemojimodelmanager->VirtualTextEmoticonsCoreEmojiModelManager::sender();
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiModelManager::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextEmoticonsCore__EmojiModelManager_SenderSignalIndex(const TextEmoticonsCore__EmojiModelManager* self) {
    if (auto* vtextemoticonscoreemojimodelmanager = const_cast<VirtualTextEmoticonsCoreEmojiModelManager*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModelManager*>(self))) {
        return vtextemoticonscoreemojimodelmanager->VirtualTextEmoticonsCoreEmojiModelManager::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiModelManager::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextEmoticonsCore__EmojiModelManager_Receivers(const TextEmoticonsCore__EmojiModelManager* self, const char* signal) {
    if (auto* vtextemoticonscoreemojimodelmanager = const_cast<VirtualTextEmoticonsCoreEmojiModelManager*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModelManager*>(self))) {
        return vtextemoticonscoreemojimodelmanager->VirtualTextEmoticonsCoreEmojiModelManager::receivers(signal);
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiModelManager::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextEmoticonsCore__EmojiModelManager_IsSignalConnected(const TextEmoticonsCore__EmojiModelManager* self, const QMetaMethod* signal) {
    if (auto* vtextemoticonscoreemojimodelmanager = const_cast<VirtualTextEmoticonsCoreEmojiModelManager*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModelManager*>(self))) {
        return vtextemoticonscoreemojimodelmanager->VirtualTextEmoticonsCoreEmojiModelManager::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiModelManager::isSignalConnected called without a directly constructed type");
}

void TextEmoticonsCore__EmojiModelManager_Delete(TextEmoticonsCore__EmojiModelManager* self) {
    delete self;
}
