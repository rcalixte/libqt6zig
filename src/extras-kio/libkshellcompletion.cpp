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
#include <QByteArray>
#include <cstring>
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
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKShellCompletion*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KShellCompletion_Tr(const char* s) {
    QString _ret = KShellCompletion::tr(s);
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
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        QString _ret = self->makeCompletion(text_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKShellCompletion*)self)->makeCompletion(text_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

void KShellCompletion_PostProcessMatches(const KShellCompletion* self, libqt_list /* of libqt_string */ matches) {
    QList<QString> matches_QList;
    matches_QList.reserve(matches.len);
    libqt_string* matches_arr = static_cast<libqt_string*>(matches.data);
    for (size_t i = 0; i < matches.len; ++i) {
        QString matches_arr_i_QString = QString::fromUtf8(matches_arr[i].data, matches_arr[i].len);
        matches_QList.push_back(matches_arr_i_QString);
    }
    auto* vkshellcompletion = dynamic_cast<const VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->postProcessMatches(&matches_QList);
    }
}

void KShellCompletion_PostProcessMatches2(const KShellCompletion* self, KCompletionMatches* matches) {
    auto* vkshellcompletion = dynamic_cast<const VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->postProcessMatches(matches);
    }
}

libqt_string KShellCompletion_Tr2(const char* s, const char* c) {
    QString _ret = KShellCompletion::tr(s, c);
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
    QString _ret = KShellCompletion::tr(s, c, static_cast<int>(n));
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
int KShellCompletion_QBaseMetacall(KShellCompletion* self, int param1, int param2, void** param3) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_Metacall_IsBase(true);
        return vkshellcompletion->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KShellCompletion::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnMetacall(KShellCompletion* self, intptr_t slot) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_Metacall_Callback(reinterpret_cast<VirtualKShellCompletion::KShellCompletion_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string KShellCompletion_QBaseMakeCompletion(KShellCompletion* self, const libqt_string text) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_MakeCompletion_IsBase(true);
        QString _ret = vkshellcompletion->makeCompletion(text_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KShellCompletion::makeCompletion(text_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnMakeCompletion(KShellCompletion* self, intptr_t slot) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_MakeCompletion_Callback(reinterpret_cast<VirtualKShellCompletion::KShellCompletion_MakeCompletion_Callback>(slot));
    }
}

// Base class handler implementation
void KShellCompletion_QBasePostProcessMatches(const KShellCompletion* self, libqt_list /* of libqt_string */ matches) {
    auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self));
    QList<QString> matches_QList;
    matches_QList.reserve(matches.len);
    libqt_string* matches_arr = static_cast<libqt_string*>(matches.data);
    for (size_t i = 0; i < matches.len; ++i) {
        QString matches_arr_i_QString = QString::fromUtf8(matches_arr[i].data, matches_arr[i].len);
        matches_QList.push_back(matches_arr_i_QString);
    }
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_PostProcessMatches_IsBase(true);
        vkshellcompletion->postProcessMatches(&matches_QList);
    } else {
        ((VirtualKShellCompletion*)self)->postProcessMatches(&matches_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnPostProcessMatches(const KShellCompletion* self, intptr_t slot) {
    auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self));
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_PostProcessMatches_Callback(reinterpret_cast<VirtualKShellCompletion::KShellCompletion_PostProcessMatches_Callback>(slot));
    }
}

// Base class handler implementation
void KShellCompletion_QBasePostProcessMatches2(const KShellCompletion* self, KCompletionMatches* matches) {
    auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self));
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_PostProcessMatches2_IsBase(true);
        vkshellcompletion->postProcessMatches(matches);
    } else {
        ((VirtualKShellCompletion*)self)->postProcessMatches(matches);
    }
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnPostProcessMatches2(const KShellCompletion* self, intptr_t slot) {
    auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self));
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_PostProcessMatches2_Callback(reinterpret_cast<VirtualKShellCompletion::KShellCompletion_PostProcessMatches2_Callback>(slot));
    }
}

// Derived class handler implementation
void KShellCompletion_SetDir(KShellCompletion* self, const QUrl* dir) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setDir(*dir);
    } else {
        self->KShellCompletion::setDir(*dir);
    }
}

// Base class handler implementation
void KShellCompletion_QBaseSetDir(KShellCompletion* self, const QUrl* dir) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_SetDir_IsBase(true);
        vkshellcompletion->setDir(*dir);
    } else {
        self->KShellCompletion::setDir(*dir);
    }
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnSetDir(KShellCompletion* self, intptr_t slot) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_SetDir_Callback(reinterpret_cast<VirtualKShellCompletion::KShellCompletion_SetDir_Callback>(slot));
    }
}

// Derived class handler implementation
QUrl* KShellCompletion_Dir(const KShellCompletion* self) {
    auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self));
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        return new QUrl(vkshellcompletion->dir());
    } else {
        return new QUrl(((VirtualKShellCompletion*)self)->dir());
    }
}

// Base class handler implementation
QUrl* KShellCompletion_QBaseDir(const KShellCompletion* self) {
    auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self));
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_Dir_IsBase(true);
        return new QUrl(vkshellcompletion->dir());
    } else {
        return new QUrl(((VirtualKShellCompletion*)self)->dir());
    }
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnDir(const KShellCompletion* self, intptr_t slot) {
    auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self));
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_Dir_Callback(reinterpret_cast<VirtualKShellCompletion::KShellCompletion_Dir_Callback>(slot));
    }
}

// Derived class handler implementation
bool KShellCompletion_IsRunning(const KShellCompletion* self) {
    auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self));
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        return vkshellcompletion->isRunning();
    } else {
        return self->KShellCompletion::isRunning();
    }
}

// Base class handler implementation
bool KShellCompletion_QBaseIsRunning(const KShellCompletion* self) {
    auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self));
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_IsRunning_IsBase(true);
        return vkshellcompletion->isRunning();
    } else {
        return self->KShellCompletion::isRunning();
    }
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnIsRunning(const KShellCompletion* self, intptr_t slot) {
    auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self));
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_IsRunning_Callback(reinterpret_cast<VirtualKShellCompletion::KShellCompletion_IsRunning_Callback>(slot));
    }
}

// Derived class handler implementation
void KShellCompletion_Stop(KShellCompletion* self) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->stop();
    } else {
        self->KShellCompletion::stop();
    }
}

// Base class handler implementation
void KShellCompletion_QBaseStop(KShellCompletion* self) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_Stop_IsBase(true);
        vkshellcompletion->stop();
    } else {
        self->KShellCompletion::stop();
    }
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnStop(KShellCompletion* self, intptr_t slot) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_Stop_Callback(reinterpret_cast<VirtualKShellCompletion::KShellCompletion_Stop_Callback>(slot));
    }
}

// Derived class handler implementation
int KShellCompletion_Mode(const KShellCompletion* self) {
    auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self));
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        return static_cast<int>(vkshellcompletion->mode());
    } else {
        return static_cast<int>(self->KShellCompletion::mode());
    }
}

// Base class handler implementation
int KShellCompletion_QBaseMode(const KShellCompletion* self) {
    auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self));
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_Mode_IsBase(true);
        return static_cast<int>(vkshellcompletion->mode());
    } else {
        return static_cast<int>(self->KShellCompletion::mode());
    }
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnMode(const KShellCompletion* self, intptr_t slot) {
    auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self));
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_Mode_Callback(reinterpret_cast<VirtualKShellCompletion::KShellCompletion_Mode_Callback>(slot));
    }
}

// Derived class handler implementation
void KShellCompletion_SetMode(KShellCompletion* self, int mode) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setMode(static_cast<KUrlCompletion::Mode>(mode));
    } else {
        self->KShellCompletion::setMode(static_cast<KUrlCompletion::Mode>(mode));
    }
}

// Base class handler implementation
void KShellCompletion_QBaseSetMode(KShellCompletion* self, int mode) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_SetMode_IsBase(true);
        vkshellcompletion->setMode(static_cast<KUrlCompletion::Mode>(mode));
    } else {
        self->KShellCompletion::setMode(static_cast<KUrlCompletion::Mode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnSetMode(KShellCompletion* self, intptr_t slot) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_SetMode_Callback(reinterpret_cast<VirtualKShellCompletion::KShellCompletion_SetMode_Callback>(slot));
    }
}

// Derived class handler implementation
bool KShellCompletion_ReplaceEnv(const KShellCompletion* self) {
    auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self));
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        return vkshellcompletion->replaceEnv();
    } else {
        return self->KShellCompletion::replaceEnv();
    }
}

// Base class handler implementation
bool KShellCompletion_QBaseReplaceEnv(const KShellCompletion* self) {
    auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self));
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_ReplaceEnv_IsBase(true);
        return vkshellcompletion->replaceEnv();
    } else {
        return self->KShellCompletion::replaceEnv();
    }
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnReplaceEnv(const KShellCompletion* self, intptr_t slot) {
    auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self));
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_ReplaceEnv_Callback(reinterpret_cast<VirtualKShellCompletion::KShellCompletion_ReplaceEnv_Callback>(slot));
    }
}

// Derived class handler implementation
void KShellCompletion_SetReplaceEnv(KShellCompletion* self, bool replace) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setReplaceEnv(replace);
    } else {
        self->KShellCompletion::setReplaceEnv(replace);
    }
}

// Base class handler implementation
void KShellCompletion_QBaseSetReplaceEnv(KShellCompletion* self, bool replace) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_SetReplaceEnv_IsBase(true);
        vkshellcompletion->setReplaceEnv(replace);
    } else {
        self->KShellCompletion::setReplaceEnv(replace);
    }
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnSetReplaceEnv(KShellCompletion* self, intptr_t slot) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_SetReplaceEnv_Callback(reinterpret_cast<VirtualKShellCompletion::KShellCompletion_SetReplaceEnv_Callback>(slot));
    }
}

// Derived class handler implementation
bool KShellCompletion_ReplaceHome(const KShellCompletion* self) {
    auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self));
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        return vkshellcompletion->replaceHome();
    } else {
        return self->KShellCompletion::replaceHome();
    }
}

// Base class handler implementation
bool KShellCompletion_QBaseReplaceHome(const KShellCompletion* self) {
    auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self));
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_ReplaceHome_IsBase(true);
        return vkshellcompletion->replaceHome();
    } else {
        return self->KShellCompletion::replaceHome();
    }
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnReplaceHome(const KShellCompletion* self, intptr_t slot) {
    auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self));
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_ReplaceHome_Callback(reinterpret_cast<VirtualKShellCompletion::KShellCompletion_ReplaceHome_Callback>(slot));
    }
}

// Derived class handler implementation
void KShellCompletion_SetReplaceHome(KShellCompletion* self, bool replace) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setReplaceHome(replace);
    } else {
        self->KShellCompletion::setReplaceHome(replace);
    }
}

// Base class handler implementation
void KShellCompletion_QBaseSetReplaceHome(KShellCompletion* self, bool replace) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_SetReplaceHome_IsBase(true);
        vkshellcompletion->setReplaceHome(replace);
    } else {
        self->KShellCompletion::setReplaceHome(replace);
    }
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnSetReplaceHome(KShellCompletion* self, intptr_t slot) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_SetReplaceHome_Callback(reinterpret_cast<VirtualKShellCompletion::KShellCompletion_SetReplaceHome_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KShellCompletion_LastMatch(const KShellCompletion* self) {
    auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self));
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        const QString _ret = vkshellcompletion->lastMatch();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        const QString _ret = self->KShellCompletion::lastMatch();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string KShellCompletion_QBaseLastMatch(const KShellCompletion* self) {
    auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self));
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_LastMatch_IsBase(true);
        const QString _ret = vkshellcompletion->lastMatch();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        const QString _ret = self->KShellCompletion::lastMatch();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnLastMatch(const KShellCompletion* self, intptr_t slot) {
    auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self));
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_LastMatch_Callback(reinterpret_cast<VirtualKShellCompletion::KShellCompletion_LastMatch_Callback>(slot));
    }
}

// Derived class handler implementation
void KShellCompletion_SetCompletionMode(KShellCompletion* self, int mode) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    } else {
        self->KShellCompletion::setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    }
}

// Base class handler implementation
void KShellCompletion_QBaseSetCompletionMode(KShellCompletion* self, int mode) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_SetCompletionMode_IsBase(true);
        vkshellcompletion->setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    } else {
        self->KShellCompletion::setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnSetCompletionMode(KShellCompletion* self, intptr_t slot) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_SetCompletionMode_Callback(reinterpret_cast<VirtualKShellCompletion::KShellCompletion_SetCompletionMode_Callback>(slot));
    }
}

// Derived class handler implementation
void KShellCompletion_SetOrder(KShellCompletion* self, int order) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setOrder(static_cast<KCompletion::CompOrder>(order));
    } else {
        self->KShellCompletion::setOrder(static_cast<KCompletion::CompOrder>(order));
    }
}

// Base class handler implementation
void KShellCompletion_QBaseSetOrder(KShellCompletion* self, int order) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_SetOrder_IsBase(true);
        vkshellcompletion->setOrder(static_cast<KCompletion::CompOrder>(order));
    } else {
        self->KShellCompletion::setOrder(static_cast<KCompletion::CompOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnSetOrder(KShellCompletion* self, intptr_t slot) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_SetOrder_Callback(reinterpret_cast<VirtualKShellCompletion::KShellCompletion_SetOrder_Callback>(slot));
    }
}

// Derived class handler implementation
void KShellCompletion_SetIgnoreCase(KShellCompletion* self, bool ignoreCase) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setIgnoreCase(ignoreCase);
    } else {
        self->KShellCompletion::setIgnoreCase(ignoreCase);
    }
}

// Base class handler implementation
void KShellCompletion_QBaseSetIgnoreCase(KShellCompletion* self, bool ignoreCase) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_SetIgnoreCase_IsBase(true);
        vkshellcompletion->setIgnoreCase(ignoreCase);
    } else {
        self->KShellCompletion::setIgnoreCase(ignoreCase);
    }
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnSetIgnoreCase(KShellCompletion* self, intptr_t slot) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_SetIgnoreCase_Callback(reinterpret_cast<VirtualKShellCompletion::KShellCompletion_SetIgnoreCase_Callback>(slot));
    }
}

// Derived class handler implementation
void KShellCompletion_SetSoundsEnabled(KShellCompletion* self, bool enable) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setSoundsEnabled(enable);
    } else {
        self->KShellCompletion::setSoundsEnabled(enable);
    }
}

// Base class handler implementation
void KShellCompletion_QBaseSetSoundsEnabled(KShellCompletion* self, bool enable) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_SetSoundsEnabled_IsBase(true);
        vkshellcompletion->setSoundsEnabled(enable);
    } else {
        self->KShellCompletion::setSoundsEnabled(enable);
    }
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnSetSoundsEnabled(KShellCompletion* self, intptr_t slot) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_SetSoundsEnabled_Callback(reinterpret_cast<VirtualKShellCompletion::KShellCompletion_SetSoundsEnabled_Callback>(slot));
    }
}

// Derived class handler implementation
void KShellCompletion_SetItems(KShellCompletion* self, const libqt_list /* of libqt_string */ itemList) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    QList<QString> itemList_QList;
    itemList_QList.reserve(itemList.len);
    libqt_string* itemList_arr = static_cast<libqt_string*>(itemList.data);
    for (size_t i = 0; i < itemList.len; ++i) {
        QString itemList_arr_i_QString = QString::fromUtf8(itemList_arr[i].data, itemList_arr[i].len);
        itemList_QList.push_back(itemList_arr_i_QString);
    }
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setItems(itemList_QList);
    } else {
        self->KShellCompletion::setItems(itemList_QList);
    }
}

// Base class handler implementation
void KShellCompletion_QBaseSetItems(KShellCompletion* self, const libqt_list /* of libqt_string */ itemList) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    QList<QString> itemList_QList;
    itemList_QList.reserve(itemList.len);
    libqt_string* itemList_arr = static_cast<libqt_string*>(itemList.data);
    for (size_t i = 0; i < itemList.len; ++i) {
        QString itemList_arr_i_QString = QString::fromUtf8(itemList_arr[i].data, itemList_arr[i].len);
        itemList_QList.push_back(itemList_arr_i_QString);
    }
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_SetItems_IsBase(true);
        vkshellcompletion->setItems(itemList_QList);
    } else {
        self->KShellCompletion::setItems(itemList_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnSetItems(KShellCompletion* self, intptr_t slot) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_SetItems_Callback(reinterpret_cast<VirtualKShellCompletion::KShellCompletion_SetItems_Callback>(slot));
    }
}

// Derived class handler implementation
void KShellCompletion_Clear(KShellCompletion* self) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->clear();
    } else {
        self->KShellCompletion::clear();
    }
}

// Base class handler implementation
void KShellCompletion_QBaseClear(KShellCompletion* self) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_Clear_IsBase(true);
        vkshellcompletion->clear();
    } else {
        self->KShellCompletion::clear();
    }
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnClear(KShellCompletion* self, intptr_t slot) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_Clear_Callback(reinterpret_cast<VirtualKShellCompletion::KShellCompletion_Clear_Callback>(slot));
    }
}

// Derived class handler implementation
bool KShellCompletion_Event(KShellCompletion* self, QEvent* event) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        return vkshellcompletion->event(event);
    } else {
        return self->KShellCompletion::event(event);
    }
}

// Base class handler implementation
bool KShellCompletion_QBaseEvent(KShellCompletion* self, QEvent* event) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_Event_IsBase(true);
        return vkshellcompletion->event(event);
    } else {
        return self->KShellCompletion::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnEvent(KShellCompletion* self, intptr_t slot) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_Event_Callback(reinterpret_cast<VirtualKShellCompletion::KShellCompletion_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KShellCompletion_EventFilter(KShellCompletion* self, QObject* watched, QEvent* event) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        return vkshellcompletion->eventFilter(watched, event);
    } else {
        return self->KShellCompletion::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KShellCompletion_QBaseEventFilter(KShellCompletion* self, QObject* watched, QEvent* event) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_EventFilter_IsBase(true);
        return vkshellcompletion->eventFilter(watched, event);
    } else {
        return self->KShellCompletion::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnEventFilter(KShellCompletion* self, intptr_t slot) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_EventFilter_Callback(reinterpret_cast<VirtualKShellCompletion::KShellCompletion_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KShellCompletion_TimerEvent(KShellCompletion* self, QTimerEvent* event) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->timerEvent(event);
    } else {
        ((VirtualKShellCompletion*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KShellCompletion_QBaseTimerEvent(KShellCompletion* self, QTimerEvent* event) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_TimerEvent_IsBase(true);
        vkshellcompletion->timerEvent(event);
    } else {
        ((VirtualKShellCompletion*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnTimerEvent(KShellCompletion* self, intptr_t slot) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_TimerEvent_Callback(reinterpret_cast<VirtualKShellCompletion::KShellCompletion_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShellCompletion_ChildEvent(KShellCompletion* self, QChildEvent* event) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->childEvent(event);
    } else {
        ((VirtualKShellCompletion*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KShellCompletion_QBaseChildEvent(KShellCompletion* self, QChildEvent* event) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_ChildEvent_IsBase(true);
        vkshellcompletion->childEvent(event);
    } else {
        ((VirtualKShellCompletion*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnChildEvent(KShellCompletion* self, intptr_t slot) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_ChildEvent_Callback(reinterpret_cast<VirtualKShellCompletion::KShellCompletion_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShellCompletion_CustomEvent(KShellCompletion* self, QEvent* event) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->customEvent(event);
    } else {
        ((VirtualKShellCompletion*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KShellCompletion_QBaseCustomEvent(KShellCompletion* self, QEvent* event) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_CustomEvent_IsBase(true);
        vkshellcompletion->customEvent(event);
    } else {
        ((VirtualKShellCompletion*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnCustomEvent(KShellCompletion* self, intptr_t slot) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_CustomEvent_Callback(reinterpret_cast<VirtualKShellCompletion::KShellCompletion_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShellCompletion_ConnectNotify(KShellCompletion* self, const QMetaMethod* signal) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->connectNotify(*signal);
    } else {
        ((VirtualKShellCompletion*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KShellCompletion_QBaseConnectNotify(KShellCompletion* self, const QMetaMethod* signal) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_ConnectNotify_IsBase(true);
        vkshellcompletion->connectNotify(*signal);
    } else {
        ((VirtualKShellCompletion*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnConnectNotify(KShellCompletion* self, intptr_t slot) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_ConnectNotify_Callback(reinterpret_cast<VirtualKShellCompletion::KShellCompletion_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KShellCompletion_DisconnectNotify(KShellCompletion* self, const QMetaMethod* signal) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->disconnectNotify(*signal);
    } else {
        ((VirtualKShellCompletion*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KShellCompletion_QBaseDisconnectNotify(KShellCompletion* self, const QMetaMethod* signal) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_DisconnectNotify_IsBase(true);
        vkshellcompletion->disconnectNotify(*signal);
    } else {
        ((VirtualKShellCompletion*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnDisconnectNotify(KShellCompletion* self, intptr_t slot) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_DisconnectNotify_Callback(reinterpret_cast<VirtualKShellCompletion::KShellCompletion_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KShellCompletion_SetShouldAutoSuggest(KShellCompletion* self, bool shouldAutosuggest) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setShouldAutoSuggest(shouldAutosuggest);
    } else {
        ((VirtualKShellCompletion*)self)->setShouldAutoSuggest(shouldAutosuggest);
    }
}

// Base class handler implementation
void KShellCompletion_QBaseSetShouldAutoSuggest(KShellCompletion* self, bool shouldAutosuggest) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_SetShouldAutoSuggest_IsBase(true);
        vkshellcompletion->setShouldAutoSuggest(shouldAutosuggest);
    } else {
        ((VirtualKShellCompletion*)self)->setShouldAutoSuggest(shouldAutosuggest);
    }
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnSetShouldAutoSuggest(KShellCompletion* self, intptr_t slot) {
    auto* vkshellcompletion = dynamic_cast<VirtualKShellCompletion*>(self);
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_SetShouldAutoSuggest_Callback(reinterpret_cast<VirtualKShellCompletion::KShellCompletion_SetShouldAutoSuggest_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KShellCompletion_Sender(const KShellCompletion* self) {
    auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self));
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        return vkshellcompletion->sender();
    } else {
        return ((VirtualKShellCompletion*)self)->sender();
    }
}

// Base class handler implementation
QObject* KShellCompletion_QBaseSender(const KShellCompletion* self) {
    auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self));
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_Sender_IsBase(true);
        return vkshellcompletion->sender();
    } else {
        return ((VirtualKShellCompletion*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnSender(const KShellCompletion* self, intptr_t slot) {
    auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self));
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_Sender_Callback(reinterpret_cast<VirtualKShellCompletion::KShellCompletion_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KShellCompletion_SenderSignalIndex(const KShellCompletion* self) {
    auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self));
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        return vkshellcompletion->senderSignalIndex();
    } else {
        return ((VirtualKShellCompletion*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KShellCompletion_QBaseSenderSignalIndex(const KShellCompletion* self) {
    auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self));
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_SenderSignalIndex_IsBase(true);
        return vkshellcompletion->senderSignalIndex();
    } else {
        return ((VirtualKShellCompletion*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnSenderSignalIndex(const KShellCompletion* self, intptr_t slot) {
    auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self));
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_SenderSignalIndex_Callback(reinterpret_cast<VirtualKShellCompletion::KShellCompletion_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KShellCompletion_Receivers(const KShellCompletion* self, const char* signal) {
    auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self));
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        return vkshellcompletion->receivers(signal);
    } else {
        return ((VirtualKShellCompletion*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KShellCompletion_QBaseReceivers(const KShellCompletion* self, const char* signal) {
    auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self));
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_Receivers_IsBase(true);
        return vkshellcompletion->receivers(signal);
    } else {
        return ((VirtualKShellCompletion*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnReceivers(const KShellCompletion* self, intptr_t slot) {
    auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self));
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_Receivers_Callback(reinterpret_cast<VirtualKShellCompletion::KShellCompletion_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KShellCompletion_IsSignalConnected(const KShellCompletion* self, const QMetaMethod* signal) {
    auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self));
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        return vkshellcompletion->isSignalConnected(*signal);
    } else {
        return ((VirtualKShellCompletion*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KShellCompletion_QBaseIsSignalConnected(const KShellCompletion* self, const QMetaMethod* signal) {
    auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self));
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_IsSignalConnected_IsBase(true);
        return vkshellcompletion->isSignalConnected(*signal);
    } else {
        return ((VirtualKShellCompletion*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KShellCompletion_OnIsSignalConnected(const KShellCompletion* self, intptr_t slot) {
    auto* vkshellcompletion = const_cast<VirtualKShellCompletion*>(dynamic_cast<const VirtualKShellCompletion*>(self));
    if (vkshellcompletion && vkshellcompletion->isVirtualKShellCompletion) {
        vkshellcompletion->setKShellCompletion_IsSignalConnected_Callback(reinterpret_cast<VirtualKShellCompletion::KShellCompletion_IsSignalConnected_Callback>(slot));
    }
}

void KShellCompletion_Delete(KShellCompletion* self) {
    delete self;
}
