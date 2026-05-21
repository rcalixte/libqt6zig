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
    auto* vtextgrammarcheck__grammalectemanager = dynamic_cast<const VirtualTextGrammarCheckGrammalecteManager*>(self);
    if (vtextgrammarcheck__grammalectemanager && vtextgrammarcheck__grammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualTextGrammarCheckGrammalecteManager*)self)->metaObject();
    }
}

void* TextGrammarCheck__GrammalecteManager_Metacast(TextGrammarCheck__GrammalecteManager* self, const char* param1) {
    auto* vtextgrammarcheck__grammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self);
    if (vtextgrammarcheck__grammalectemanager && vtextgrammarcheck__grammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteManager*)self)->qt_metacast(param1);
    }
}

int TextGrammarCheck__GrammalecteManager_Metacall(TextGrammarCheck__GrammalecteManager* self, int param1, int param2, void** param3) {
    auto* vtextgrammarcheck__grammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self);
    if (vtextgrammarcheck__grammalectemanager && vtextgrammarcheck__grammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteManager*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
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

// Base class handler implementation
QMetaObject* TextGrammarCheck__GrammalecteManager_SuperMetaObject(const TextGrammarCheck__GrammalecteManager* self) {
    auto* vtextgrammarcheckgrammalectemanager = const_cast<VirtualTextGrammarCheckGrammalecteManager*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteManager*>(self));
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        vtextgrammarcheckgrammalectemanager->setTextGrammarCheck__GrammalecteManager_MetaObject_IsBase(true);
        return (QMetaObject*)vtextgrammarcheckgrammalectemanager->metaObject();
    } else {
        return (QMetaObject*)self->TextGrammarCheck::GrammalecteManager::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteManager_OnMetaObject(const TextGrammarCheck__GrammalecteManager* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalectemanager = const_cast<VirtualTextGrammarCheckGrammalecteManager*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteManager*>(self));
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        vtextgrammarcheckgrammalectemanager->setTextGrammarCheck__GrammalecteManager_MetaObject_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteManager::TextGrammarCheck__GrammalecteManager_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextGrammarCheck__GrammalecteManager_SuperMetacast(TextGrammarCheck__GrammalecteManager* self, const char* param1) {
    auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self);
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        vtextgrammarcheckgrammalectemanager->setTextGrammarCheck__GrammalecteManager_Metacast_IsBase(true);
        return vtextgrammarcheckgrammalectemanager->qt_metacast(param1);
    } else {
        return self->TextGrammarCheck::GrammalecteManager::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteManager_OnMetacast(TextGrammarCheck__GrammalecteManager* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self);
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        vtextgrammarcheckgrammalectemanager->setTextGrammarCheck__GrammalecteManager_Metacast_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteManager::TextGrammarCheck__GrammalecteManager_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteManager_SuperMetacall(TextGrammarCheck__GrammalecteManager* self, int param1, int param2, void** param3) {
    auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self);
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        vtextgrammarcheckgrammalectemanager->setTextGrammarCheck__GrammalecteManager_Metacall_IsBase(true);
        return vtextgrammarcheckgrammalectemanager->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextGrammarCheck::GrammalecteManager::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteManager_OnMetacall(TextGrammarCheck__GrammalecteManager* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self);
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        vtextgrammarcheckgrammalectemanager->setTextGrammarCheck__GrammalecteManager_Metacall_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteManager::TextGrammarCheck__GrammalecteManager_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteManager_Event(TextGrammarCheck__GrammalecteManager* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self);
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        return vtextgrammarcheckgrammalectemanager->event(event);
    } else {
        return self->TextGrammarCheck::GrammalecteManager::event(event);
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteManager_SuperEvent(TextGrammarCheck__GrammalecteManager* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self);
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        vtextgrammarcheckgrammalectemanager->setTextGrammarCheck__GrammalecteManager_Event_IsBase(true);
        return vtextgrammarcheckgrammalectemanager->event(event);
    } else {
        return self->TextGrammarCheck::GrammalecteManager::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteManager_OnEvent(TextGrammarCheck__GrammalecteManager* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self);
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        vtextgrammarcheckgrammalectemanager->setTextGrammarCheck__GrammalecteManager_Event_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteManager::TextGrammarCheck__GrammalecteManager_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteManager_EventFilter(TextGrammarCheck__GrammalecteManager* self, QObject* watched, QEvent* event) {
    auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self);
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        return vtextgrammarcheckgrammalectemanager->eventFilter(watched, event);
    } else {
        return self->TextGrammarCheck::GrammalecteManager::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteManager_SuperEventFilter(TextGrammarCheck__GrammalecteManager* self, QObject* watched, QEvent* event) {
    auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self);
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        vtextgrammarcheckgrammalectemanager->setTextGrammarCheck__GrammalecteManager_EventFilter_IsBase(true);
        return vtextgrammarcheckgrammalectemanager->eventFilter(watched, event);
    } else {
        return self->TextGrammarCheck::GrammalecteManager::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteManager_OnEventFilter(TextGrammarCheck__GrammalecteManager* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self);
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        vtextgrammarcheckgrammalectemanager->setTextGrammarCheck__GrammalecteManager_EventFilter_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteManager::TextGrammarCheck__GrammalecteManager_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteManager_TimerEvent(TextGrammarCheck__GrammalecteManager* self, QTimerEvent* event) {
    auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self);
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        vtextgrammarcheckgrammalectemanager->timerEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteManager*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteManager_SuperTimerEvent(TextGrammarCheck__GrammalecteManager* self, QTimerEvent* event) {
    auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self);
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        vtextgrammarcheckgrammalectemanager->setTextGrammarCheck__GrammalecteManager_TimerEvent_IsBase(true);
        vtextgrammarcheckgrammalectemanager->timerEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteManager*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteManager_OnTimerEvent(TextGrammarCheck__GrammalecteManager* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self);
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        vtextgrammarcheckgrammalectemanager->setTextGrammarCheck__GrammalecteManager_TimerEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteManager::TextGrammarCheck__GrammalecteManager_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteManager_ChildEvent(TextGrammarCheck__GrammalecteManager* self, QChildEvent* event) {
    auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self);
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        vtextgrammarcheckgrammalectemanager->childEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteManager*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteManager_SuperChildEvent(TextGrammarCheck__GrammalecteManager* self, QChildEvent* event) {
    auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self);
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        vtextgrammarcheckgrammalectemanager->setTextGrammarCheck__GrammalecteManager_ChildEvent_IsBase(true);
        vtextgrammarcheckgrammalectemanager->childEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteManager*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteManager_OnChildEvent(TextGrammarCheck__GrammalecteManager* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self);
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        vtextgrammarcheckgrammalectemanager->setTextGrammarCheck__GrammalecteManager_ChildEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteManager::TextGrammarCheck__GrammalecteManager_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteManager_CustomEvent(TextGrammarCheck__GrammalecteManager* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self);
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        vtextgrammarcheckgrammalectemanager->customEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteManager*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteManager_SuperCustomEvent(TextGrammarCheck__GrammalecteManager* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self);
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        vtextgrammarcheckgrammalectemanager->setTextGrammarCheck__GrammalecteManager_CustomEvent_IsBase(true);
        vtextgrammarcheckgrammalectemanager->customEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteManager*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteManager_OnCustomEvent(TextGrammarCheck__GrammalecteManager* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self);
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        vtextgrammarcheckgrammalectemanager->setTextGrammarCheck__GrammalecteManager_CustomEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteManager::TextGrammarCheck__GrammalecteManager_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteManager_ConnectNotify(TextGrammarCheck__GrammalecteManager* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self);
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        vtextgrammarcheckgrammalectemanager->connectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckGrammalecteManager*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteManager_SuperConnectNotify(TextGrammarCheck__GrammalecteManager* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self);
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        vtextgrammarcheckgrammalectemanager->setTextGrammarCheck__GrammalecteManager_ConnectNotify_IsBase(true);
        vtextgrammarcheckgrammalectemanager->connectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckGrammalecteManager*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteManager_OnConnectNotify(TextGrammarCheck__GrammalecteManager* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self);
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        vtextgrammarcheckgrammalectemanager->setTextGrammarCheck__GrammalecteManager_ConnectNotify_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteManager::TextGrammarCheck__GrammalecteManager_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteManager_DisconnectNotify(TextGrammarCheck__GrammalecteManager* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self);
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        vtextgrammarcheckgrammalectemanager->disconnectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckGrammalecteManager*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteManager_SuperDisconnectNotify(TextGrammarCheck__GrammalecteManager* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self);
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        vtextgrammarcheckgrammalectemanager->setTextGrammarCheck__GrammalecteManager_DisconnectNotify_IsBase(true);
        vtextgrammarcheckgrammalectemanager->disconnectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckGrammalecteManager*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteManager_OnDisconnectNotify(TextGrammarCheck__GrammalecteManager* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalectemanager = dynamic_cast<VirtualTextGrammarCheckGrammalecteManager*>(self);
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        vtextgrammarcheckgrammalectemanager->setTextGrammarCheck__GrammalecteManager_DisconnectNotify_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteManager::TextGrammarCheck__GrammalecteManager_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextGrammarCheck__GrammalecteManager_Sender(const TextGrammarCheck__GrammalecteManager* self) {
    auto* vtextgrammarcheckgrammalectemanager = const_cast<VirtualTextGrammarCheckGrammalecteManager*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteManager*>(self));
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        return vtextgrammarcheckgrammalectemanager->sender();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteManager*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextGrammarCheck__GrammalecteManager_SuperSender(const TextGrammarCheck__GrammalecteManager* self) {
    auto* vtextgrammarcheckgrammalectemanager = const_cast<VirtualTextGrammarCheckGrammalecteManager*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteManager*>(self));
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        vtextgrammarcheckgrammalectemanager->setTextGrammarCheck__GrammalecteManager_Sender_IsBase(true);
        return vtextgrammarcheckgrammalectemanager->sender();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteManager*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteManager_OnSender(const TextGrammarCheck__GrammalecteManager* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalectemanager = const_cast<VirtualTextGrammarCheckGrammalecteManager*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteManager*>(self));
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        vtextgrammarcheckgrammalectemanager->setTextGrammarCheck__GrammalecteManager_Sender_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteManager::TextGrammarCheck__GrammalecteManager_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__GrammalecteManager_SenderSignalIndex(const TextGrammarCheck__GrammalecteManager* self) {
    auto* vtextgrammarcheckgrammalectemanager = const_cast<VirtualTextGrammarCheckGrammalecteManager*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteManager*>(self));
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        return vtextgrammarcheckgrammalectemanager->senderSignalIndex();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteManager*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteManager_SuperSenderSignalIndex(const TextGrammarCheck__GrammalecteManager* self) {
    auto* vtextgrammarcheckgrammalectemanager = const_cast<VirtualTextGrammarCheckGrammalecteManager*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteManager*>(self));
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        vtextgrammarcheckgrammalectemanager->setTextGrammarCheck__GrammalecteManager_SenderSignalIndex_IsBase(true);
        return vtextgrammarcheckgrammalectemanager->senderSignalIndex();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteManager*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteManager_OnSenderSignalIndex(const TextGrammarCheck__GrammalecteManager* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalectemanager = const_cast<VirtualTextGrammarCheckGrammalecteManager*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteManager*>(self));
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        vtextgrammarcheckgrammalectemanager->setTextGrammarCheck__GrammalecteManager_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteManager::TextGrammarCheck__GrammalecteManager_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__GrammalecteManager_Receivers(const TextGrammarCheck__GrammalecteManager* self, const char* signal) {
    auto* vtextgrammarcheckgrammalectemanager = const_cast<VirtualTextGrammarCheckGrammalecteManager*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteManager*>(self));
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        return vtextgrammarcheckgrammalectemanager->receivers(signal);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteManager*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteManager_SuperReceivers(const TextGrammarCheck__GrammalecteManager* self, const char* signal) {
    auto* vtextgrammarcheckgrammalectemanager = const_cast<VirtualTextGrammarCheckGrammalecteManager*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteManager*>(self));
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        vtextgrammarcheckgrammalectemanager->setTextGrammarCheck__GrammalecteManager_Receivers_IsBase(true);
        return vtextgrammarcheckgrammalectemanager->receivers(signal);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteManager*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteManager_OnReceivers(const TextGrammarCheck__GrammalecteManager* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalectemanager = const_cast<VirtualTextGrammarCheckGrammalecteManager*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteManager*>(self));
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        vtextgrammarcheckgrammalectemanager->setTextGrammarCheck__GrammalecteManager_Receivers_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteManager::TextGrammarCheck__GrammalecteManager_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteManager_IsSignalConnected(const TextGrammarCheck__GrammalecteManager* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalectemanager = const_cast<VirtualTextGrammarCheckGrammalecteManager*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteManager*>(self));
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        return vtextgrammarcheckgrammalectemanager->isSignalConnected(*signal);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteManager*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteManager_SuperIsSignalConnected(const TextGrammarCheck__GrammalecteManager* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalectemanager = const_cast<VirtualTextGrammarCheckGrammalecteManager*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteManager*>(self));
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        vtextgrammarcheckgrammalectemanager->setTextGrammarCheck__GrammalecteManager_IsSignalConnected_IsBase(true);
        return vtextgrammarcheckgrammalectemanager->isSignalConnected(*signal);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteManager*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteManager_OnIsSignalConnected(const TextGrammarCheck__GrammalecteManager* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalectemanager = const_cast<VirtualTextGrammarCheckGrammalecteManager*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteManager*>(self));
    if (vtextgrammarcheckgrammalectemanager && vtextgrammarcheckgrammalectemanager->isVirtualTextGrammarCheckGrammalecteManager) {
        vtextgrammarcheckgrammalectemanager->setTextGrammarCheck__GrammalecteManager_IsSignalConnected_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteManager::TextGrammarCheck__GrammalecteManager_IsSignalConnected_Callback>(slot));
    }
}

void TextGrammarCheck__GrammalecteManager_Delete(TextGrammarCheck__GrammalecteManager* self) {
    delete self;
}
