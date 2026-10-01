#include <KCompletion>
#include <KCompletionMatches>
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
#include <kurlcompletion.h>
#include "libkurlcompletion.h"
#include "libkurlcompletion.hxx"

KUrlCompletion* KUrlCompletion_new() {
    return new VirtualKUrlCompletion();
}

KUrlCompletion* KUrlCompletion_new2(int param1) {
    return new VirtualKUrlCompletion(static_cast<KUrlCompletion::Mode>(param1));
}

QMetaObject* KUrlCompletion_MetaObject(const KUrlCompletion* self) {
    return (QMetaObject*)self->metaObject();
}

void* KUrlCompletion_Metacast(KUrlCompletion* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KUrlCompletion_Metacall(KUrlCompletion* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KUrlCompletion_Tr(const char* s) {
    auto _ret = KUrlCompletion::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUrlCompletion_MakeCompletion(KUrlCompletion* self, const libqt_string text) {
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

void KUrlCompletion_SetDir(KUrlCompletion* self, const QUrl* dir) {
    self->setDir(*dir);
}

QUrl* KUrlCompletion_Dir(const KUrlCompletion* self) {
    return new QUrl(self->dir());
}

bool KUrlCompletion_IsRunning(const KUrlCompletion* self) {
    return self->isRunning();
}

void KUrlCompletion_Stop(KUrlCompletion* self) {
    self->stop();
}

int KUrlCompletion_Mode(const KUrlCompletion* self) {
    return static_cast<int>(self->mode());
}

void KUrlCompletion_SetMode(KUrlCompletion* self, int mode) {
    self->setMode(static_cast<KUrlCompletion::Mode>(mode));
}

bool KUrlCompletion_ReplaceEnv(const KUrlCompletion* self) {
    return self->replaceEnv();
}

void KUrlCompletion_SetReplaceEnv(KUrlCompletion* self, bool replace) {
    self->setReplaceEnv(replace);
}

bool KUrlCompletion_ReplaceHome(const KUrlCompletion* self) {
    return self->replaceHome();
}

void KUrlCompletion_SetReplaceHome(KUrlCompletion* self, bool replace) {
    self->setReplaceHome(replace);
}

libqt_string KUrlCompletion_ReplacedPath(const KUrlCompletion* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto _ret = self->replacedPath(text_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUrlCompletion_ReplacedPath2(const libqt_string text, bool replaceHome) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto _ret = KUrlCompletion::replacedPath(text_QString, replaceHome);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KUrlCompletion_SetMimeTypeFilters(KUrlCompletion* self, const libqt_list /* of libqt_string */ mimeTypes) {
    QList<QString> mimeTypes_QList;
    mimeTypes_QList.reserve(mimeTypes.len);
    libqt_string* mimeTypes_arr = static_cast<libqt_string*>(mimeTypes.data);
    for (size_t i = 0; i < mimeTypes.len; ++i) {
        QString mimeTypes_arr_i_QString = QString::fromUtf8(mimeTypes_arr[i].data, mimeTypes_arr[i].len);
        mimeTypes_QList.push_back(mimeTypes_arr_i_QString);
    }
    self->setMimeTypeFilters(mimeTypes_QList);
}

libqt_list /* of libqt_string */ KUrlCompletion_MimeTypeFilters(const KUrlCompletion* self) {
    QList<QString> _ret = self->mimeTypeFilters();
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

void KUrlCompletion_PostProcessMatches(const KUrlCompletion* self, libqt_list /* of libqt_string */ matches) {
    QList<QString>* matches_QList = new QList<QString>();
    matches_QList->reserve(matches.len);
    libqt_string* matches_arr = static_cast<libqt_string*>(matches.data);
    for (size_t i = 0; i < matches.len; ++i) {
        QString matches_arr_i_QString = QString::fromUtf8(matches_arr[i].data, matches_arr[i].len);
        matches_QList->push_back(matches_arr_i_QString);
    }
    auto* vkurlcompletion = dynamic_cast<const VirtualKUrlCompletion*>(self);
    if (vkurlcompletion) {
        vkurlcompletion->postProcessMatches(matches_QList);
    }
}

void KUrlCompletion_PostProcessMatches2(const KUrlCompletion* self, KCompletionMatches* matches) {
    auto* vkurlcompletion = dynamic_cast<const VirtualKUrlCompletion*>(self);
    if (vkurlcompletion) {
        vkurlcompletion->postProcessMatches(matches);
    }
}

libqt_string KUrlCompletion_Tr2(const char* s, const char* c) {
    auto _ret = KUrlCompletion::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUrlCompletion_Tr3(const char* s, const char* c, int n) {
    auto _ret = KUrlCompletion::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUrlCompletion_ReplacedPath3(const libqt_string text, bool replaceHome, bool replaceEnv) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto _ret = KUrlCompletion::replacedPath(text_QString, replaceHome, replaceEnv);
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
QMetaObject* KUrlCompletion_SuperMetaObject(const KUrlCompletion* self) {
    return (QMetaObject*)self->KUrlCompletion::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnMetaObject(KUrlCompletion* self, intptr_t slot) {
    if (auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self)))
        vkurlcompletion->kurlcompletion_metaobject_callback = reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KUrlCompletion_SuperMetacast(KUrlCompletion* self, const char* param1) {
    return self->KUrlCompletion::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnMetacast(KUrlCompletion* self, intptr_t slot) {
    if (auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self))
        vkurlcompletion->kurlcompletion_metacast_callback = reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_Metacast_Callback>(slot);
}

// Base class handler implementation
int KUrlCompletion_SuperMetacall(KUrlCompletion* self, int param1, int param2, void** param3) {
    return self->KUrlCompletion::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnMetacall(KUrlCompletion* self, intptr_t slot) {
    if (auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self))
        vkurlcompletion->kurlcompletion_metacall_callback = reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_Metacall_Callback>(slot);
}

// Base class handler implementation
libqt_string KUrlCompletion_SuperMakeCompletion(KUrlCompletion* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto _ret = self->KUrlCompletion::makeCompletion(text_QString);
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
void KUrlCompletion_OnMakeCompletion(KUrlCompletion* self, intptr_t slot) {
    if (auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self))
        vkurlcompletion->kurlcompletion_makecompletion_callback = reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_MakeCompletion_Callback>(slot);
}

// Base class handler implementation
void KUrlCompletion_SuperSetDir(KUrlCompletion* self, const QUrl* dir) {
    self->KUrlCompletion::setDir(*dir);
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnSetDir(KUrlCompletion* self, intptr_t slot) {
    if (auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self))
        vkurlcompletion->kurlcompletion_setdir_callback = reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_SetDir_Callback>(slot);
}

// Base class handler implementation
QUrl* KUrlCompletion_SuperDir(const KUrlCompletion* self) {
    return new QUrl(self->KUrlCompletion::dir());
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnDir(KUrlCompletion* self, intptr_t slot) {
    if (auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self)))
        vkurlcompletion->kurlcompletion_dir_callback = reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_Dir_Callback>(slot);
}

// Base class handler implementation
bool KUrlCompletion_SuperIsRunning(const KUrlCompletion* self) {
    return self->KUrlCompletion::isRunning();
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnIsRunning(KUrlCompletion* self, intptr_t slot) {
    if (auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self)))
        vkurlcompletion->kurlcompletion_isrunning_callback = reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_IsRunning_Callback>(slot);
}

// Base class handler implementation
void KUrlCompletion_SuperStop(KUrlCompletion* self) {
    self->KUrlCompletion::stop();
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnStop(KUrlCompletion* self, intptr_t slot) {
    if (auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self))
        vkurlcompletion->kurlcompletion_stop_callback = reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_Stop_Callback>(slot);
}

// Base class handler implementation
int KUrlCompletion_SuperMode(const KUrlCompletion* self) {
    return static_cast<int>(self->KUrlCompletion::mode());
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnMode(KUrlCompletion* self, intptr_t slot) {
    if (auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self)))
        vkurlcompletion->kurlcompletion_mode_callback = reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_Mode_Callback>(slot);
}

// Base class handler implementation
void KUrlCompletion_SuperSetMode(KUrlCompletion* self, int mode) {
    self->KUrlCompletion::setMode(static_cast<KUrlCompletion::Mode>(mode));
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnSetMode(KUrlCompletion* self, intptr_t slot) {
    if (auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self))
        vkurlcompletion->kurlcompletion_setmode_callback = reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_SetMode_Callback>(slot);
}

// Base class handler implementation
bool KUrlCompletion_SuperReplaceEnv(const KUrlCompletion* self) {
    return self->KUrlCompletion::replaceEnv();
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnReplaceEnv(KUrlCompletion* self, intptr_t slot) {
    if (auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self)))
        vkurlcompletion->kurlcompletion_replaceenv_callback = reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_ReplaceEnv_Callback>(slot);
}

// Base class handler implementation
void KUrlCompletion_SuperSetReplaceEnv(KUrlCompletion* self, bool replace) {
    self->KUrlCompletion::setReplaceEnv(replace);
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnSetReplaceEnv(KUrlCompletion* self, intptr_t slot) {
    if (auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self))
        vkurlcompletion->kurlcompletion_setreplaceenv_callback = reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_SetReplaceEnv_Callback>(slot);
}

// Base class handler implementation
bool KUrlCompletion_SuperReplaceHome(const KUrlCompletion* self) {
    return self->KUrlCompletion::replaceHome();
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnReplaceHome(KUrlCompletion* self, intptr_t slot) {
    if (auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self)))
        vkurlcompletion->kurlcompletion_replacehome_callback = reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_ReplaceHome_Callback>(slot);
}

// Base class handler implementation
void KUrlCompletion_SuperSetReplaceHome(KUrlCompletion* self, bool replace) {
    self->KUrlCompletion::setReplaceHome(replace);
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnSetReplaceHome(KUrlCompletion* self, intptr_t slot) {
    if (auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self))
        vkurlcompletion->kurlcompletion_setreplacehome_callback = reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_SetReplaceHome_Callback>(slot);
}

// Base class handler implementation
void KUrlCompletion_SuperPostProcessMatches(const KUrlCompletion* self, libqt_list /* of libqt_string */ matches) {
    QList<QString>* matches_QList = new QList<QString>();
    matches_QList->reserve(matches.len);
    libqt_string* matches_arr = static_cast<libqt_string*>(matches.data);
    for (size_t i = 0; i < matches.len; ++i) {
        QString matches_arr_i_QString = QString::fromUtf8(matches_arr[i].data, matches_arr[i].len);
        matches_QList->push_back(matches_arr_i_QString);
    }
    if (auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self))) {
        vkurlcompletion->KUrlCompletion::postProcessMatches(matches_QList);
    } else
        qFatal("Error: Protected virtual method KUrlCompletion::postProcessMatches called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnPostProcessMatches(KUrlCompletion* self, intptr_t slot) {
    if (auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self)))
        vkurlcompletion->kurlcompletion_postprocessmatches_callback = reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_PostProcessMatches_Callback>(slot);
}

// Base class handler implementation
void KUrlCompletion_SuperPostProcessMatches2(const KUrlCompletion* self, KCompletionMatches* matches) {
    if (auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self))) {
        vkurlcompletion->KUrlCompletion::postProcessMatches(matches);
    } else
        qFatal("Error: Protected virtual method KUrlCompletion::postProcessMatches2 called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnPostProcessMatches2(KUrlCompletion* self, intptr_t slot) {
    if (auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self)))
        vkurlcompletion->kurlcompletion_postprocessmatches2_callback = reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_PostProcessMatches2_Callback>(slot);
}

// Derived class handler implementation
libqt_string KUrlCompletion_LastMatch(const KUrlCompletion* self) {
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
libqt_string KUrlCompletion_SuperLastMatch(const KUrlCompletion* self) {
    const auto _ret = self->KUrlCompletion::lastMatch();
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
void KUrlCompletion_OnLastMatch(KUrlCompletion* self, intptr_t slot) {
    if (auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self)))
        vkurlcompletion->kurlcompletion_lastmatch_callback = reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_LastMatch_Callback>(slot);
}

// Derived class handler implementation
void KUrlCompletion_SetCompletionMode(KUrlCompletion* self, int mode) {
    self->setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
}

// Base class handler implementation
void KUrlCompletion_SuperSetCompletionMode(KUrlCompletion* self, int mode) {
    self->KUrlCompletion::setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnSetCompletionMode(KUrlCompletion* self, intptr_t slot) {
    if (auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self))
        vkurlcompletion->kurlcompletion_setcompletionmode_callback = reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_SetCompletionMode_Callback>(slot);
}

// Derived class handler implementation
void KUrlCompletion_SetOrder(KUrlCompletion* self, int order) {
    self->setOrder(static_cast<KCompletion::CompOrder>(order));
}

// Base class handler implementation
void KUrlCompletion_SuperSetOrder(KUrlCompletion* self, int order) {
    self->KUrlCompletion::setOrder(static_cast<KCompletion::CompOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnSetOrder(KUrlCompletion* self, intptr_t slot) {
    if (auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self))
        vkurlcompletion->kurlcompletion_setorder_callback = reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_SetOrder_Callback>(slot);
}

// Derived class handler implementation
void KUrlCompletion_SetIgnoreCase(KUrlCompletion* self, bool ignoreCase) {
    self->setIgnoreCase(ignoreCase);
}

// Base class handler implementation
void KUrlCompletion_SuperSetIgnoreCase(KUrlCompletion* self, bool ignoreCase) {
    self->KUrlCompletion::setIgnoreCase(ignoreCase);
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnSetIgnoreCase(KUrlCompletion* self, intptr_t slot) {
    if (auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self))
        vkurlcompletion->kurlcompletion_setignorecase_callback = reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_SetIgnoreCase_Callback>(slot);
}

// Derived class handler implementation
void KUrlCompletion_SetSoundsEnabled(KUrlCompletion* self, bool enable) {
    self->setSoundsEnabled(enable);
}

// Base class handler implementation
void KUrlCompletion_SuperSetSoundsEnabled(KUrlCompletion* self, bool enable) {
    self->KUrlCompletion::setSoundsEnabled(enable);
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnSetSoundsEnabled(KUrlCompletion* self, intptr_t slot) {
    if (auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self))
        vkurlcompletion->kurlcompletion_setsoundsenabled_callback = reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_SetSoundsEnabled_Callback>(slot);
}

// Derived class handler implementation
void KUrlCompletion_SetItems(KUrlCompletion* self, const libqt_list /* of libqt_string */ itemList) {
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
void KUrlCompletion_SuperSetItems(KUrlCompletion* self, const libqt_list /* of libqt_string */ itemList) {
    QList<QString> itemList_QList;
    itemList_QList.reserve(itemList.len);
    libqt_string* itemList_arr = static_cast<libqt_string*>(itemList.data);
    for (size_t i = 0; i < itemList.len; ++i) {
        QString itemList_arr_i_QString = QString::fromUtf8(itemList_arr[i].data, itemList_arr[i].len);
        itemList_QList.push_back(itemList_arr_i_QString);
    }
    self->KUrlCompletion::setItems(itemList_QList);
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnSetItems(KUrlCompletion* self, intptr_t slot) {
    if (auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self))
        vkurlcompletion->kurlcompletion_setitems_callback = reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_SetItems_Callback>(slot);
}

// Derived class handler implementation
void KUrlCompletion_Clear(KUrlCompletion* self) {
    self->clear();
}

// Base class handler implementation
void KUrlCompletion_SuperClear(KUrlCompletion* self) {
    self->KUrlCompletion::clear();
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnClear(KUrlCompletion* self, intptr_t slot) {
    if (auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self))
        vkurlcompletion->kurlcompletion_clear_callback = reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_Clear_Callback>(slot);
}

// Derived class handler implementation
bool KUrlCompletion_Event(KUrlCompletion* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KUrlCompletion_SuperEvent(KUrlCompletion* self, QEvent* event) {
    return self->KUrlCompletion::event(event);
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnEvent(KUrlCompletion* self, intptr_t slot) {
    if (auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self))
        vkurlcompletion->kurlcompletion_event_callback = reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_Event_Callback>(slot);
}

// Derived class handler implementation
bool KUrlCompletion_EventFilter(KUrlCompletion* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KUrlCompletion_SuperEventFilter(KUrlCompletion* self, QObject* watched, QEvent* event) {
    return self->KUrlCompletion::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnEventFilter(KUrlCompletion* self, intptr_t slot) {
    if (auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self))
        vkurlcompletion->kurlcompletion_eventfilter_callback = reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KUrlCompletion_TimerEvent(KUrlCompletion* self, QTimerEvent* event) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion) {
        vkurlcompletion->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlCompletion::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlCompletion_SuperTimerEvent(KUrlCompletion* self, QTimerEvent* event) {
    if (auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self)) {
        vkurlcompletion->KUrlCompletion::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlCompletion::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnTimerEvent(KUrlCompletion* self, intptr_t slot) {
    if (auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self))
        vkurlcompletion->kurlcompletion_timerevent_callback = reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlCompletion_ChildEvent(KUrlCompletion* self, QChildEvent* event) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion) {
        vkurlcompletion->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlCompletion::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlCompletion_SuperChildEvent(KUrlCompletion* self, QChildEvent* event) {
    if (auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self)) {
        vkurlcompletion->KUrlCompletion::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlCompletion::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnChildEvent(KUrlCompletion* self, intptr_t slot) {
    if (auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self))
        vkurlcompletion->kurlcompletion_childevent_callback = reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlCompletion_CustomEvent(KUrlCompletion* self, QEvent* event) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion) {
        vkurlcompletion->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlCompletion::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlCompletion_SuperCustomEvent(KUrlCompletion* self, QEvent* event) {
    if (auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self)) {
        vkurlcompletion->KUrlCompletion::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlCompletion::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnCustomEvent(KUrlCompletion* self, intptr_t slot) {
    if (auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self))
        vkurlcompletion->kurlcompletion_customevent_callback = reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlCompletion_ConnectNotify(KUrlCompletion* self, const QMetaMethod* signal) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion) {
        vkurlcompletion->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KUrlCompletion::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlCompletion_SuperConnectNotify(KUrlCompletion* self, const QMetaMethod* signal) {
    if (auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self)) {
        vkurlcompletion->KUrlCompletion::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KUrlCompletion::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnConnectNotify(KUrlCompletion* self, intptr_t slot) {
    if (auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self))
        vkurlcompletion->kurlcompletion_connectnotify_callback = reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KUrlCompletion_DisconnectNotify(KUrlCompletion* self, const QMetaMethod* signal) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion) {
        vkurlcompletion->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KUrlCompletion::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlCompletion_SuperDisconnectNotify(KUrlCompletion* self, const QMetaMethod* signal) {
    if (auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self)) {
        vkurlcompletion->KUrlCompletion::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KUrlCompletion::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnDisconnectNotify(KUrlCompletion* self, intptr_t slot) {
    if (auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self))
        vkurlcompletion->kurlcompletion_disconnectnotify_callback = reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KUrlCompletion_SetShouldAutoSuggest(KUrlCompletion* self, bool shouldAutosuggest) {
    if (auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self)) {
        vkurlcompletion->VirtualKUrlCompletion::setShouldAutoSuggest(shouldAutosuggest);
    } else
        qFatal("Error: Protected method KUrlCompletion::setShouldAutoSuggest called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KUrlCompletion_Sender(const KUrlCompletion* self) {
    if (auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self))) {
        return vkurlcompletion->VirtualKUrlCompletion::sender();
    } else
        qFatal("Error: Protected method KUrlCompletion::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KUrlCompletion_SenderSignalIndex(const KUrlCompletion* self) {
    if (auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self))) {
        return vkurlcompletion->VirtualKUrlCompletion::senderSignalIndex();
    } else
        qFatal("Error: Protected method KUrlCompletion::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KUrlCompletion_Receivers(const KUrlCompletion* self, const char* signal) {
    if (auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self))) {
        return vkurlcompletion->VirtualKUrlCompletion::receivers(signal);
    } else
        qFatal("Error: Protected method KUrlCompletion::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KUrlCompletion_IsSignalConnected(const KUrlCompletion* self, const QMetaMethod* signal) {
    if (auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self))) {
        return vkurlcompletion->VirtualKUrlCompletion::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KUrlCompletion::isSignalConnected called without a directly constructed type");
}

void KUrlCompletion_Delete(KUrlCompletion* self) {
    delete self;
}
