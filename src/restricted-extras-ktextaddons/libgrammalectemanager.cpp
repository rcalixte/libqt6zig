#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__GrammalecteManager
#include <grammalectemanager.h>
#include "libgrammalectemanager.h"
#include "libgrammalectemanager.hxx"

TextGrammarCheck__GrammalecteManager* TextGrammarCheck__GrammalecteManager_new() {
    return new VirtualTextGrammarCheckGrammalecteManager();
}

TextGrammarCheck__GrammalecteManager* TextGrammarCheck__GrammalecteManager_new2(QObject* parent) {
    return new VirtualTextGrammarCheckGrammalecteManager(parent);
}

QMetaObject* TextGrammarCheck__GrammalecteManager_MetaObject(const TextGrammarCheck__GrammalecteManager* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextGrammarCheck__GrammalecteManager_Metacast(TextGrammarCheck__GrammalecteManager* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextGrammarCheck__GrammalecteManager_Metacall(TextGrammarCheck__GrammalecteManager* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextGrammarCheck__GrammalecteManager_Tr(const char* s) {
    auto _ret = TextGrammarCheck::GrammalecteManager::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

TextGrammarCheck__GrammalecteManager* TextGrammarCheck__GrammalecteManager_Self() {
    return TextGrammarCheck::GrammalecteManager::self();
}

libqt_string TextGrammarCheck__GrammalecteManager_PythonPath(const TextGrammarCheck__GrammalecteManager* self) {
    auto _ret = self->pythonPath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextGrammarCheck__GrammalecteManager_GrammalectePath(const TextGrammarCheck__GrammalecteManager* self) {
    auto _ret = self->grammalectePath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextGrammarCheck__GrammalecteManager_SetPythonPath(TextGrammarCheck__GrammalecteManager* self, const libqt_string pythonPath) {
    QString pythonPath_QString = QString::fromUtf8(pythonPath.data, pythonPath.len);
    self->setPythonPath(pythonPath_QString);
}

void TextGrammarCheck__GrammalecteManager_SetGrammalectePath(TextGrammarCheck__GrammalecteManager* self, const libqt_string grammalectePath) {
    QString grammalectePath_QString = QString::fromUtf8(grammalectePath.data, grammalectePath.len);
    self->setGrammalectePath(grammalectePath_QString);
}

libqt_list /* of libqt_string */ TextGrammarCheck__GrammalecteManager_Options(const TextGrammarCheck__GrammalecteManager* self) {
    QList<QString> _ret = self->options();
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

void TextGrammarCheck__GrammalecteManager_SetOptions(TextGrammarCheck__GrammalecteManager* self, const libqt_list /* of libqt_string */ saveOptions) {
    QList<QString> saveOptions_QList;
    saveOptions_QList.reserve(saveOptions.len);
    libqt_string* saveOptions_arr = static_cast<libqt_string*>(saveOptions.data);
    for (size_t i = 0; i < saveOptions.len; ++i) {
        QString saveOptions_arr_i_QString = QString::fromUtf8(saveOptions_arr[i].data, saveOptions_arr[i].len);
        saveOptions_QList.push_back(saveOptions_arr_i_QString);
    }
    self->setOptions(saveOptions_QList);
}

void TextGrammarCheck__GrammalecteManager_LoadSettings(TextGrammarCheck__GrammalecteManager* self) {
    self->loadSettings();
}

void TextGrammarCheck__GrammalecteManager_SaveSettings(TextGrammarCheck__GrammalecteManager* self) {
    self->saveSettings();
}

libqt_string TextGrammarCheck__GrammalecteManager_Tr2(const char* s, const char* c) {
    auto _ret = TextGrammarCheck::GrammalecteManager::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextGrammarCheck__GrammalecteManager_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextGrammarCheck::GrammalecteManager::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextGrammarCheck__GrammalecteManager_SuperMetaObject(const TextGrammarCheck__GrammalecteManager* self) {
    return (QMetaObject*)self->TextGrammarCheck::GrammalecteManager::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteManager_OnMetaObject(TextGrammarCheck__GrammalecteManager* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalectemanager = const_cast<VirtualTextGrammarCheckGrammalecteManager*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteManager*>(self)))
        vtextgrammarcheckgrammalectemanager->textgrammarcheck__grammalectemanager_metaobject_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteManager::TextGrammarCheck__GrammalecteManager_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextGrammarCheck__GrammalecteManager_SuperMetacast(TextGrammarCheck__GrammalecteManager* self, const char* param1) {
    return self->TextGrammarCheck::GrammalecteManager::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteManager_OnMetacast(TextGrammarCheck__GrammalecteManager* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self))
        vtextgrammarcheckgrammalectemanager->textgrammarcheck__grammalectemanager_metacast_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteManager::TextGrammarCheck__GrammalecteManager_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteManager_SuperMetacall(TextGrammarCheck__GrammalecteManager* self, int param1, int param2, void** param3) {
    return self->TextGrammarCheck::GrammalecteManager::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteManager_OnMetacall(TextGrammarCheck__GrammalecteManager* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self))
        vtextgrammarcheckgrammalectemanager->textgrammarcheck__grammalectemanager_metacall_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteManager::TextGrammarCheck__GrammalecteManager_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteManager_Event(TextGrammarCheck__GrammalecteManager* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteManager_SuperEvent(TextGrammarCheck__GrammalecteManager* self, QEvent* event) {
    return self->TextGrammarCheck::GrammalecteManager::event(event);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteManager_OnEvent(TextGrammarCheck__GrammalecteManager* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self))
        vtextgrammarcheckgrammalectemanager->textgrammarcheck__grammalectemanager_event_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteManager::TextGrammarCheck__GrammalecteManager_Event_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteManager_EventFilter(TextGrammarCheck__GrammalecteManager* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteManager_SuperEventFilter(TextGrammarCheck__GrammalecteManager* self, QObject* watched, QEvent* event) {
    return self->TextGrammarCheck::GrammalecteManager::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteManager_OnEventFilter(TextGrammarCheck__GrammalecteManager* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self))
        vtextgrammarcheckgrammalectemanager->textgrammarcheck__grammalectemanager_eventfilter_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteManager::TextGrammarCheck__GrammalecteManager_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteManager_TimerEvent(TextGrammarCheck__GrammalecteManager* self, QTimerEvent* event) {
    auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self);
    if (vtextgrammarcheckgrammalectemanager) {
        vtextgrammarcheckgrammalectemanager->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteManager::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteManager_SuperTimerEvent(TextGrammarCheck__GrammalecteManager* self, QTimerEvent* event) {
    if (auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self)) {
        vtextgrammarcheckgrammalectemanager->TextGrammarCheck::GrammalecteManager::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteManager::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteManager_OnTimerEvent(TextGrammarCheck__GrammalecteManager* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self))
        vtextgrammarcheckgrammalectemanager->textgrammarcheck__grammalectemanager_timerevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteManager::TextGrammarCheck__GrammalecteManager_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteManager_ChildEvent(TextGrammarCheck__GrammalecteManager* self, QChildEvent* event) {
    auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self);
    if (vtextgrammarcheckgrammalectemanager) {
        vtextgrammarcheckgrammalectemanager->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteManager::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteManager_SuperChildEvent(TextGrammarCheck__GrammalecteManager* self, QChildEvent* event) {
    if (auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self)) {
        vtextgrammarcheckgrammalectemanager->TextGrammarCheck::GrammalecteManager::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteManager::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteManager_OnChildEvent(TextGrammarCheck__GrammalecteManager* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self))
        vtextgrammarcheckgrammalectemanager->textgrammarcheck__grammalectemanager_childevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteManager::TextGrammarCheck__GrammalecteManager_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteManager_CustomEvent(TextGrammarCheck__GrammalecteManager* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self);
    if (vtextgrammarcheckgrammalectemanager) {
        vtextgrammarcheckgrammalectemanager->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteManager::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteManager_SuperCustomEvent(TextGrammarCheck__GrammalecteManager* self, QEvent* event) {
    if (auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self)) {
        vtextgrammarcheckgrammalectemanager->TextGrammarCheck::GrammalecteManager::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteManager::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteManager_OnCustomEvent(TextGrammarCheck__GrammalecteManager* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self))
        vtextgrammarcheckgrammalectemanager->textgrammarcheck__grammalectemanager_customevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteManager::TextGrammarCheck__GrammalecteManager_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteManager_ConnectNotify(TextGrammarCheck__GrammalecteManager* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self);
    if (vtextgrammarcheckgrammalectemanager) {
        vtextgrammarcheckgrammalectemanager->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteManager::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteManager_SuperConnectNotify(TextGrammarCheck__GrammalecteManager* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self)) {
        vtextgrammarcheckgrammalectemanager->TextGrammarCheck::GrammalecteManager::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteManager::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteManager_OnConnectNotify(TextGrammarCheck__GrammalecteManager* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self))
        vtextgrammarcheckgrammalectemanager->textgrammarcheck__grammalectemanager_connectnotify_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteManager::TextGrammarCheck__GrammalecteManager_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteManager_DisconnectNotify(TextGrammarCheck__GrammalecteManager* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self);
    if (vtextgrammarcheckgrammalectemanager) {
        vtextgrammarcheckgrammalectemanager->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteManager::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteManager_SuperDisconnectNotify(TextGrammarCheck__GrammalecteManager* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self)) {
        vtextgrammarcheckgrammalectemanager->TextGrammarCheck::GrammalecteManager::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteManager::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteManager_OnDisconnectNotify(TextGrammarCheck__GrammalecteManager* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self))
        vtextgrammarcheckgrammalectemanager->textgrammarcheck__grammalectemanager_disconnectnotify_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteManager::TextGrammarCheck__GrammalecteManager_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* TextGrammarCheck__GrammalecteManager_Sender(const TextGrammarCheck__GrammalecteManager* self) {
    if (auto* vtextgrammarcheckgrammalectemanager = const_cast<VirtualTextGrammarCheckGrammalecteManager*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteManager*>(self))) {
        return vtextgrammarcheckgrammalectemanager->VirtualTextGrammarCheckGrammalecteManager::sender();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteManager::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextGrammarCheck__GrammalecteManager_SenderSignalIndex(const TextGrammarCheck__GrammalecteManager* self) {
    if (auto* vtextgrammarcheckgrammalectemanager = const_cast<VirtualTextGrammarCheckGrammalecteManager*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteManager*>(self))) {
        return vtextgrammarcheckgrammalectemanager->VirtualTextGrammarCheckGrammalecteManager::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteManager::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextGrammarCheck__GrammalecteManager_Receivers(const TextGrammarCheck__GrammalecteManager* self, const char* signal) {
    if (auto* vtextgrammarcheckgrammalectemanager = const_cast<VirtualTextGrammarCheckGrammalecteManager*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteManager*>(self))) {
        return vtextgrammarcheckgrammalectemanager->VirtualTextGrammarCheckGrammalecteManager::receivers(signal);
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteManager::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextGrammarCheck__GrammalecteManager_IsSignalConnected(const TextGrammarCheck__GrammalecteManager* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarcheckgrammalectemanager = const_cast<VirtualTextGrammarCheckGrammalecteManager*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteManager*>(self))) {
        return vtextgrammarcheckgrammalectemanager->VirtualTextGrammarCheckGrammalecteManager::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteManager::isSignalConnected called without a directly constructed type");
}

void TextGrammarCheck__GrammalecteManager_Delete(TextGrammarCheck__GrammalecteManager* self) {
    delete self;
}
