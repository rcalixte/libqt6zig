#include <KCompletion>
#include <KCompletionMatches>
#include <KShellCompletion>
#include <KUrlCompletion>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QUrl>
#include <kshellcompletion.h>
#include "libkshellcompletion.h"
#include "libkshellcompletion.hxx"

KShellCompletion* KShellCompletion_new() {
    return new VirtualKShellCompletion();
}

QMetaObject* KShellCompletion_MetaObject(const KShellCompletion* self) {
    return (QMetaObject*)self->metaObject();
}

void* KShellCompletion_Metacast(KShellCompletion* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KShellCompletion_Metacall(KShellCompletion* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KShellCompletion_Tr(const char* s) {
    auto _ret = KShellCompletion::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KShellCompletion_MakeCompletion(KShellCompletion* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto _ret = self->makeCompletion(text_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KShellCompletion_PostProcessMatches(const KShellCompletion* self, libqt_list /* of libqt_string */ matches) {
    QList<QString>* matches_QList = new QList<QString>();
    matches_QList->reserve(matches.len);
    libqt_string* matches_arr = static_cast<libqt_string*>(matches.data);
    for (size_t i = 0; i < matches.len; ++i) {
        QString matches_arr_i_QString = QString::fromUtf8(matches_arr[i].data, matches_arr[i].len);
        matches_QList->push_back(matches_arr_i_QString);
    }
    auto* vkshellcompletion = dynamic_cast<const VirtualKShellCompletion*>(self);
    if (vkshellcompletion) {
        vkshellcompletion->postProcessMatches(matches_QList);
    }
}

void KShellCompletion_PostProcessMatches2(const KShellCompletion* self, KCompletionMatches* matches) {
    auto* vkshellcompletion = dynamic_cast<const VirtualKShellCompletion*>(self);
    if (vkshellcompletion) {
        vkshellcompletion->postProcessMatches(matches);
    }
}

libqt_string KShellCompletion_Tr2(const char* s, const char* c) {
    auto _ret = KShellCompletion::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KShellCompletion_Tr3(const char* s, const char* c, int n) {
    auto _ret = KShellCompletion::tr(s, c, static_cast<int>(n));
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
QMetaObject* KShellCompletion_SuperMetaObject(const KShellCompletion* self) {
    return (QMetaObject*)self->KShellCompletion::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnMetaObject(KShellCompletion* self, intptr_t slot) {
    if (auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self)))
        vkshellcompletion->kshellcompletion_metaobject_callback = reinterpret_cast<VirtualKShellCompletion::KShellCompletion_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KShellCompletion_SuperMetacast(KShellCompletion* self, const char* param1) {
    return self->KShellCompletion::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnMetacast(KShellCompletion* self, intptr_t slot) {
    if (auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self))
        vkshellcompletion->kshellcompletion_metacast_callback = reinterpret_cast<VirtualKShellCompletion::KShellCompletion_Metacast_Callback>(slot);
}

// Base class handler implementation
int KShellCompletion_SuperMetacall(KShellCompletion* self, int param1, int param2, void** param3) {
    return self->KShellCompletion::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnMetacall(KShellCompletion* self, intptr_t slot) {
    if (auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self))
        vkshellcompletion->kshellcompletion_metacall_callback = reinterpret_cast<VirtualKShellCompletion::KShellCompletion_Metacall_Callback>(slot);
}

// Base class handler implementation
libqt_string KShellCompletion_SuperMakeCompletion(KShellCompletion* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto _ret = self->KShellCompletion::makeCompletion(text_QString);
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
void KShellCompletion_OnMakeCompletion(KShellCompletion* self, intptr_t slot) {
    if (auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self))
        vkshellcompletion->kshellcompletion_makecompletion_callback = reinterpret_cast<VirtualKShellCompletion::KShellCompletion_MakeCompletion_Callback>(slot);
}

// Base class handler implementation
void KShellCompletion_SuperPostProcessMatches(const KShellCompletion* self, libqt_list /* of libqt_string */ matches) {
    QList<QString>* matches_QList = new QList<QString>();
    matches_QList->reserve(matches.len);
    libqt_string* matches_arr = static_cast<libqt_string*>(matches.data);
    for (size_t i = 0; i < matches.len; ++i) {
        QString matches_arr_i_QString = QString::fromUtf8(matches_arr[i].data, matches_arr[i].len);
        matches_QList->push_back(matches_arr_i_QString);
    }
    if (auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self))) {
        vkshellcompletion->KShellCompletion::postProcessMatches(matches_QList);
    } else
        qFatal("Error: Protected virtual method KShellCompletion::postProcessMatches called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnPostProcessMatches(KShellCompletion* self, intptr_t slot) {
    if (auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self)))
        vkshellcompletion->kshellcompletion_postprocessmatches_callback = reinterpret_cast<VirtualKShellCompletion::KShellCompletion_PostProcessMatches_Callback>(slot);
}

// Base class handler implementation
void KShellCompletion_SuperPostProcessMatches2(const KShellCompletion* self, KCompletionMatches* matches) {
    if (auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self))) {
        vkshellcompletion->KShellCompletion::postProcessMatches(matches);
    } else
        qFatal("Error: Protected virtual method KShellCompletion::postProcessMatches2 called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnPostProcessMatches2(KShellCompletion* self, intptr_t slot) {
    if (auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self)))
        vkshellcompletion->kshellcompletion_postprocessmatches2_callback = reinterpret_cast<VirtualKShellCompletion::KShellCompletion_PostProcessMatches2_Callback>(slot);
}

// Derived class handler implementation
void KShellCompletion_SetDir(KShellCompletion* self, const QUrl* dir) {
    self->setDir(*dir);
}

// Base class handler implementation
void KShellCompletion_SuperSetDir(KShellCompletion* self, const QUrl* dir) {
    self->KShellCompletion::setDir(*dir);
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnSetDir(KShellCompletion* self, intptr_t slot) {
    if (auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self))
        vkshellcompletion->kshellcompletion_setdir_callback = reinterpret_cast<VirtualKShellCompletion::KShellCompletion_SetDir_Callback>(slot);
}

// Derived class handler implementation
QUrl* KShellCompletion_Dir(const KShellCompletion* self) {
    return new QUrl(self->dir());
}

// Base class handler implementation
QUrl* KShellCompletion_SuperDir(const KShellCompletion* self) {
    return new QUrl(self->KShellCompletion::dir());
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnDir(KShellCompletion* self, intptr_t slot) {
    if (auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self)))
        vkshellcompletion->kshellcompletion_dir_callback = reinterpret_cast<VirtualKShellCompletion::KShellCompletion_Dir_Callback>(slot);
}

// Derived class handler implementation
bool KShellCompletion_IsRunning(const KShellCompletion* self) {
    return self->isRunning();
}

// Base class handler implementation
bool KShellCompletion_SuperIsRunning(const KShellCompletion* self) {
    return self->KShellCompletion::isRunning();
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnIsRunning(KShellCompletion* self, intptr_t slot) {
    if (auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self)))
        vkshellcompletion->kshellcompletion_isrunning_callback = reinterpret_cast<VirtualKShellCompletion::KShellCompletion_IsRunning_Callback>(slot);
}

// Derived class handler implementation
void KShellCompletion_Stop(KShellCompletion* self) {
    self->stop();
}

// Base class handler implementation
void KShellCompletion_SuperStop(KShellCompletion* self) {
    self->KShellCompletion::stop();
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnStop(KShellCompletion* self, intptr_t slot) {
    if (auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self))
        vkshellcompletion->kshellcompletion_stop_callback = reinterpret_cast<VirtualKShellCompletion::KShellCompletion_Stop_Callback>(slot);
}

// Derived class handler implementation
int KShellCompletion_Mode(const KShellCompletion* self) {
    return static_cast<int>(self->mode());
}

// Base class handler implementation
int KShellCompletion_SuperMode(const KShellCompletion* self) {
    return static_cast<int>(self->KShellCompletion::mode());
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnMode(KShellCompletion* self, intptr_t slot) {
    if (auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self)))
        vkshellcompletion->kshellcompletion_mode_callback = reinterpret_cast<VirtualKShellCompletion::KShellCompletion_Mode_Callback>(slot);
}

// Derived class handler implementation
void KShellCompletion_SetMode(KShellCompletion* self, int mode) {
    self->setMode(static_cast<KUrlCompletion::Mode>(mode));
}

// Base class handler implementation
void KShellCompletion_SuperSetMode(KShellCompletion* self, int mode) {
    self->KShellCompletion::setMode(static_cast<KUrlCompletion::Mode>(mode));
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnSetMode(KShellCompletion* self, intptr_t slot) {
    if (auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self))
        vkshellcompletion->kshellcompletion_setmode_callback = reinterpret_cast<VirtualKShellCompletion::KShellCompletion_SetMode_Callback>(slot);
}

// Derived class handler implementation
bool KShellCompletion_ReplaceEnv(const KShellCompletion* self) {
    return self->replaceEnv();
}

// Base class handler implementation
bool KShellCompletion_SuperReplaceEnv(const KShellCompletion* self) {
    return self->KShellCompletion::replaceEnv();
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnReplaceEnv(KShellCompletion* self, intptr_t slot) {
    if (auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self)))
        vkshellcompletion->kshellcompletion_replaceenv_callback = reinterpret_cast<VirtualKShellCompletion::KShellCompletion_ReplaceEnv_Callback>(slot);
}

// Derived class handler implementation
void KShellCompletion_SetReplaceEnv(KShellCompletion* self, bool replace) {
    self->setReplaceEnv(replace);
}

// Base class handler implementation
void KShellCompletion_SuperSetReplaceEnv(KShellCompletion* self, bool replace) {
    self->KShellCompletion::setReplaceEnv(replace);
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnSetReplaceEnv(KShellCompletion* self, intptr_t slot) {
    if (auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self))
        vkshellcompletion->kshellcompletion_setreplaceenv_callback = reinterpret_cast<VirtualKShellCompletion::KShellCompletion_SetReplaceEnv_Callback>(slot);
}

// Derived class handler implementation
bool KShellCompletion_ReplaceHome(const KShellCompletion* self) {
    return self->replaceHome();
}

// Base class handler implementation
bool KShellCompletion_SuperReplaceHome(const KShellCompletion* self) {
    return self->KShellCompletion::replaceHome();
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnReplaceHome(KShellCompletion* self, intptr_t slot) {
    if (auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self)))
        vkshellcompletion->kshellcompletion_replacehome_callback = reinterpret_cast<VirtualKShellCompletion::KShellCompletion_ReplaceHome_Callback>(slot);
}

// Derived class handler implementation
void KShellCompletion_SetReplaceHome(KShellCompletion* self, bool replace) {
    self->setReplaceHome(replace);
}

// Base class handler implementation
void KShellCompletion_SuperSetReplaceHome(KShellCompletion* self, bool replace) {
    self->KShellCompletion::setReplaceHome(replace);
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnSetReplaceHome(KShellCompletion* self, intptr_t slot) {
    if (auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self))
        vkshellcompletion->kshellcompletion_setreplacehome_callback = reinterpret_cast<VirtualKShellCompletion::KShellCompletion_SetReplaceHome_Callback>(slot);
}

// Derived class handler implementation
libqt_string KShellCompletion_LastMatch(const KShellCompletion* self) {
    const auto _ret = self->lastMatch();
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
libqt_string KShellCompletion_SuperLastMatch(const KShellCompletion* self) {
    const auto _ret = self->KShellCompletion::lastMatch();
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
void KShellCompletion_OnLastMatch(KShellCompletion* self, intptr_t slot) {
    if (auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self)))
        vkshellcompletion->kshellcompletion_lastmatch_callback = reinterpret_cast<VirtualKShellCompletion::KShellCompletion_LastMatch_Callback>(slot);
}

// Derived class handler implementation
void KShellCompletion_SetCompletionMode(KShellCompletion* self, int mode) {
    self->setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
}

// Base class handler implementation
void KShellCompletion_SuperSetCompletionMode(KShellCompletion* self, int mode) {
    self->KShellCompletion::setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnSetCompletionMode(KShellCompletion* self, intptr_t slot) {
    if (auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self))
        vkshellcompletion->kshellcompletion_setcompletionmode_callback = reinterpret_cast<VirtualKShellCompletion::KShellCompletion_SetCompletionMode_Callback>(slot);
}

// Derived class handler implementation
void KShellCompletion_SetOrder(KShellCompletion* self, int order) {
    self->setOrder(static_cast<KCompletion::CompOrder>(order));
}

// Base class handler implementation
void KShellCompletion_SuperSetOrder(KShellCompletion* self, int order) {
    self->KShellCompletion::setOrder(static_cast<KCompletion::CompOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnSetOrder(KShellCompletion* self, intptr_t slot) {
    if (auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self))
        vkshellcompletion->kshellcompletion_setorder_callback = reinterpret_cast<VirtualKShellCompletion::KShellCompletion_SetOrder_Callback>(slot);
}

// Derived class handler implementation
void KShellCompletion_SetIgnoreCase(KShellCompletion* self, bool ignoreCase) {
    self->setIgnoreCase(ignoreCase);
}

// Base class handler implementation
void KShellCompletion_SuperSetIgnoreCase(KShellCompletion* self, bool ignoreCase) {
    self->KShellCompletion::setIgnoreCase(ignoreCase);
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnSetIgnoreCase(KShellCompletion* self, intptr_t slot) {
    if (auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self))
        vkshellcompletion->kshellcompletion_setignorecase_callback = reinterpret_cast<VirtualKShellCompletion::KShellCompletion_SetIgnoreCase_Callback>(slot);
}

// Derived class handler implementation
void KShellCompletion_SetSoundsEnabled(KShellCompletion* self, bool enable) {
    self->setSoundsEnabled(enable);
}

// Base class handler implementation
void KShellCompletion_SuperSetSoundsEnabled(KShellCompletion* self, bool enable) {
    self->KShellCompletion::setSoundsEnabled(enable);
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnSetSoundsEnabled(KShellCompletion* self, intptr_t slot) {
    if (auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self))
        vkshellcompletion->kshellcompletion_setsoundsenabled_callback = reinterpret_cast<VirtualKShellCompletion::KShellCompletion_SetSoundsEnabled_Callback>(slot);
}

// Derived class handler implementation
void KShellCompletion_SetItems(KShellCompletion* self, const libqt_list /* of libqt_string */ itemList) {
    QList<QString> itemList_QList;
    itemList_QList.reserve(itemList.len);
    libqt_string* itemList_arr = static_cast<libqt_string*>(itemList.data);
    for (size_t i = 0; i < itemList.len; ++i) {
        QString itemList_arr_i_QString = QString::fromUtf8(itemList_arr[i].data, itemList_arr[i].len);
        itemList_QList.push_back(itemList_arr_i_QString);
    }
    self->setItems(itemList_QList);
}

// Base class handler implementation
void KShellCompletion_SuperSetItems(KShellCompletion* self, const libqt_list /* of libqt_string */ itemList) {
    QList<QString> itemList_QList;
    itemList_QList.reserve(itemList.len);
    libqt_string* itemList_arr = static_cast<libqt_string*>(itemList.data);
    for (size_t i = 0; i < itemList.len; ++i) {
        QString itemList_arr_i_QString = QString::fromUtf8(itemList_arr[i].data, itemList_arr[i].len);
        itemList_QList.push_back(itemList_arr_i_QString);
    }
    self->KShellCompletion::setItems(itemList_QList);
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnSetItems(KShellCompletion* self, intptr_t slot) {
    if (auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self))
        vkshellcompletion->kshellcompletion_setitems_callback = reinterpret_cast<VirtualKShellCompletion::KShellCompletion_SetItems_Callback>(slot);
}

// Derived class handler implementation
void KShellCompletion_Clear(KShellCompletion* self) {
    self->clear();
}

// Base class handler implementation
void KShellCompletion_SuperClear(KShellCompletion* self) {
    self->KShellCompletion::clear();
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnClear(KShellCompletion* self, intptr_t slot) {
    if (auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self))
        vkshellcompletion->kshellcompletion_clear_callback = reinterpret_cast<VirtualKShellCompletion::KShellCompletion_Clear_Callback>(slot);
}

// Derived class handler implementation
bool KShellCompletion_Event(KShellCompletion* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KShellCompletion_SuperEvent(KShellCompletion* self, QEvent* event) {
    return self->KShellCompletion::event(event);
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnEvent(KShellCompletion* self, intptr_t slot) {
    if (auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self))
        vkshellcompletion->kshellcompletion_event_callback = reinterpret_cast<VirtualKShellCompletion::KShellCompletion_Event_Callback>(slot);
}

// Derived class handler implementation
bool KShellCompletion_EventFilter(KShellCompletion* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KShellCompletion_SuperEventFilter(KShellCompletion* self, QObject* watched, QEvent* event) {
    return self->KShellCompletion::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnEventFilter(KShellCompletion* self, intptr_t slot) {
    if (auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self))
        vkshellcompletion->kshellcompletion_eventfilter_callback = reinterpret_cast<VirtualKShellCompletion::KShellCompletion_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KShellCompletion_TimerEvent(KShellCompletion* self, QTimerEvent* event) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion) {
        vkshellcompletion->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShellCompletion::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShellCompletion_SuperTimerEvent(KShellCompletion* self, QTimerEvent* event) {
    if (auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self)) {
        vkshellcompletion->KShellCompletion::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KShellCompletion::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnTimerEvent(KShellCompletion* self, intptr_t slot) {
    if (auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self))
        vkshellcompletion->kshellcompletion_timerevent_callback = reinterpret_cast<VirtualKShellCompletion::KShellCompletion_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KShellCompletion_ChildEvent(KShellCompletion* self, QChildEvent* event) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion) {
        vkshellcompletion->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShellCompletion::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShellCompletion_SuperChildEvent(KShellCompletion* self, QChildEvent* event) {
    if (auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self)) {
        vkshellcompletion->KShellCompletion::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KShellCompletion::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnChildEvent(KShellCompletion* self, intptr_t slot) {
    if (auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self))
        vkshellcompletion->kshellcompletion_childevent_callback = reinterpret_cast<VirtualKShellCompletion::KShellCompletion_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KShellCompletion_CustomEvent(KShellCompletion* self, QEvent* event) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion) {
        vkshellcompletion->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShellCompletion::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShellCompletion_SuperCustomEvent(KShellCompletion* self, QEvent* event) {
    if (auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self)) {
        vkshellcompletion->KShellCompletion::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KShellCompletion::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnCustomEvent(KShellCompletion* self, intptr_t slot) {
    if (auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self))
        vkshellcompletion->kshellcompletion_customevent_callback = reinterpret_cast<VirtualKShellCompletion::KShellCompletion_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KShellCompletion_ConnectNotify(KShellCompletion* self, const QMetaMethod* signal) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion) {
        vkshellcompletion->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KShellCompletion::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KShellCompletion_SuperConnectNotify(KShellCompletion* self, const QMetaMethod* signal) {
    if (auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self)) {
        vkshellcompletion->KShellCompletion::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KShellCompletion::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnConnectNotify(KShellCompletion* self, intptr_t slot) {
    if (auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self))
        vkshellcompletion->kshellcompletion_connectnotify_callback = reinterpret_cast<VirtualKShellCompletion::KShellCompletion_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KShellCompletion_DisconnectNotify(KShellCompletion* self, const QMetaMethod* signal) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion) {
        vkshellcompletion->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KShellCompletion::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KShellCompletion_SuperDisconnectNotify(KShellCompletion* self, const QMetaMethod* signal) {
    if (auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self)) {
        vkshellcompletion->KShellCompletion::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KShellCompletion::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnDisconnectNotify(KShellCompletion* self, intptr_t slot) {
    if (auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self))
        vkshellcompletion->kshellcompletion_disconnectnotify_callback = reinterpret_cast<VirtualKShellCompletion::KShellCompletion_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KShellCompletion_SetShouldAutoSuggest(KShellCompletion* self, bool shouldAutosuggest) {
    if (auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self)) {
        vkshellcompletion->VirtualKShellCompletion::setShouldAutoSuggest(shouldAutosuggest);
    } else
        qFatal("Error: Protected method KShellCompletion::setShouldAutoSuggest called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KShellCompletion_Sender(const KShellCompletion* self) {
    if (auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self))) {
        return vkshellcompletion->VirtualKShellCompletion::sender();
    } else
        qFatal("Error: Protected method KShellCompletion::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KShellCompletion_SenderSignalIndex(const KShellCompletion* self) {
    if (auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self))) {
        return vkshellcompletion->VirtualKShellCompletion::senderSignalIndex();
    } else
        qFatal("Error: Protected method KShellCompletion::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KShellCompletion_Receivers(const KShellCompletion* self, const char* signal) {
    if (auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self))) {
        return vkshellcompletion->VirtualKShellCompletion::receivers(signal);
    } else
        qFatal("Error: Protected method KShellCompletion::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KShellCompletion_IsSignalConnected(const KShellCompletion* self, const QMetaMethod* signal) {
    if (auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self))) {
        return vkshellcompletion->VirtualKShellCompletion::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KShellCompletion::isSignalConnected called without a directly constructed type");
}

void KShellCompletion_Delete(KShellCompletion* self) {
    delete self;
}
