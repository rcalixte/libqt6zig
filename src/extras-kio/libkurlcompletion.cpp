#include <KCompletion>
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
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKUrlCompletion*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KUrlCompletion_Tr(const char* s) {
    QString _ret = KUrlCompletion::tr(s);
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
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
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
        QString _ret = ((VirtualKUrlCompletion*)self)->makeCompletion(text_QString);
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

void KUrlCompletion_SetDir(KUrlCompletion* self, const QUrl* dir) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        self->setDir(*dir);
    } else {
        ((VirtualKUrlCompletion*)self)->setDir(*dir);
    }
}

QUrl* KUrlCompletion_Dir(const KUrlCompletion* self) {
    auto* vkurlcompletion = dynamic_cast<const VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        return new QUrl(self->dir());
    } else {
        return new QUrl(((VirtualKUrlCompletion*)self)->dir());
    }
}

bool KUrlCompletion_IsRunning(const KUrlCompletion* self) {
    auto* vkurlcompletion = dynamic_cast<const VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        return self->isRunning();
    } else {
        return ((VirtualKUrlCompletion*)self)->isRunning();
    }
}

void KUrlCompletion_Stop(KUrlCompletion* self) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        self->stop();
    } else {
        ((VirtualKUrlCompletion*)self)->stop();
    }
}

int KUrlCompletion_Mode(const KUrlCompletion* self) {
    auto* vkurlcompletion = dynamic_cast<const VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        return static_cast<int>(self->mode());
    } else {
        return static_cast<int>(((VirtualKUrlCompletion*)self)->mode());
    }
}

void KUrlCompletion_SetMode(KUrlCompletion* self, int mode) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        self->setMode(static_cast<KUrlCompletion::Mode>(mode));
    } else {
        ((VirtualKUrlCompletion*)self)->setMode(static_cast<KUrlCompletion::Mode>(mode));
    }
}

bool KUrlCompletion_ReplaceEnv(const KUrlCompletion* self) {
    auto* vkurlcompletion = dynamic_cast<const VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        return self->replaceEnv();
    } else {
        return ((VirtualKUrlCompletion*)self)->replaceEnv();
    }
}

void KUrlCompletion_SetReplaceEnv(KUrlCompletion* self, bool replace) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        self->setReplaceEnv(replace);
    } else {
        ((VirtualKUrlCompletion*)self)->setReplaceEnv(replace);
    }
}

bool KUrlCompletion_ReplaceHome(const KUrlCompletion* self) {
    auto* vkurlcompletion = dynamic_cast<const VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        return self->replaceHome();
    } else {
        return ((VirtualKUrlCompletion*)self)->replaceHome();
    }
}

void KUrlCompletion_SetReplaceHome(KUrlCompletion* self, bool replace) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        self->setReplaceHome(replace);
    } else {
        ((VirtualKUrlCompletion*)self)->setReplaceHome(replace);
    }
}

libqt_string KUrlCompletion_ReplacedPath(const KUrlCompletion* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString _ret = self->replacedPath(text_QString);
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
    QString _ret = KUrlCompletion::replacedPath(text_QString, replaceHome);
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
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
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
    QList<QString> matches_QList;
    matches_QList.reserve(matches.len);
    libqt_string* matches_arr = static_cast<libqt_string*>(matches.data);
    for (size_t i = 0; i < matches.len; ++i) {
        QString matches_arr_i_QString = QString::fromUtf8(matches_arr[i].data, matches_arr[i].len);
        matches_QList.push_back(matches_arr_i_QString);
    }
    auto* vkurlcompletion = dynamic_cast<const VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->postProcessMatches(&matches_QList);
    }
}

libqt_string KUrlCompletion_Tr2(const char* s, const char* c) {
    QString _ret = KUrlCompletion::tr(s, c);
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
    QString _ret = KUrlCompletion::tr(s, c, static_cast<int>(n));
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
    QString _ret = KUrlCompletion::replacedPath(text_QString, replaceHome, replaceEnv);
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
int KUrlCompletion_QBaseMetacall(KUrlCompletion* self, int param1, int param2, void** param3) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_Metacall_IsBase(true);
        return vkurlcompletion->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KUrlCompletion::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnMetacall(KUrlCompletion* self, intptr_t slot) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_Metacall_Callback(reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string KUrlCompletion_QBaseMakeCompletion(KUrlCompletion* self, const libqt_string text) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_MakeCompletion_IsBase(true);
        QString _ret = vkurlcompletion->makeCompletion(text_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KUrlCompletion::makeCompletion(text_QString);
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
void KUrlCompletion_OnMakeCompletion(KUrlCompletion* self, intptr_t slot) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_MakeCompletion_Callback(reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_MakeCompletion_Callback>(slot));
    }
}

// Base class handler implementation
void KUrlCompletion_QBaseSetDir(KUrlCompletion* self, const QUrl* dir) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_SetDir_IsBase(true);
        vkurlcompletion->setDir(*dir);
    } else {
        self->KUrlCompletion::setDir(*dir);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnSetDir(KUrlCompletion* self, intptr_t slot) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_SetDir_Callback(reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_SetDir_Callback>(slot));
    }
}

// Base class handler implementation
QUrl* KUrlCompletion_QBaseDir(const KUrlCompletion* self) {
    auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self));
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_Dir_IsBase(true);
        return new QUrl(vkurlcompletion->dir());
    } else {
        return new QUrl(((VirtualKUrlCompletion*)self)->dir());
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnDir(const KUrlCompletion* self, intptr_t slot) {
    auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self));
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_Dir_Callback(reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_Dir_Callback>(slot));
    }
}

// Base class handler implementation
bool KUrlCompletion_QBaseIsRunning(const KUrlCompletion* self) {
    auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self));
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_IsRunning_IsBase(true);
        return vkurlcompletion->isRunning();
    } else {
        return self->KUrlCompletion::isRunning();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnIsRunning(const KUrlCompletion* self, intptr_t slot) {
    auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self));
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_IsRunning_Callback(reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_IsRunning_Callback>(slot));
    }
}

// Base class handler implementation
void KUrlCompletion_QBaseStop(KUrlCompletion* self) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_Stop_IsBase(true);
        vkurlcompletion->stop();
    } else {
        self->KUrlCompletion::stop();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnStop(KUrlCompletion* self, intptr_t slot) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_Stop_Callback(reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_Stop_Callback>(slot));
    }
}

// Base class handler implementation
int KUrlCompletion_QBaseMode(const KUrlCompletion* self) {
    auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self));
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_Mode_IsBase(true);
        return static_cast<int>(vkurlcompletion->mode());
    } else {
        return static_cast<int>(self->KUrlCompletion::mode());
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnMode(const KUrlCompletion* self, intptr_t slot) {
    auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self));
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_Mode_Callback(reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_Mode_Callback>(slot));
    }
}

// Base class handler implementation
void KUrlCompletion_QBaseSetMode(KUrlCompletion* self, int mode) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_SetMode_IsBase(true);
        vkurlcompletion->setMode(static_cast<KUrlCompletion::Mode>(mode));
    } else {
        self->KUrlCompletion::setMode(static_cast<KUrlCompletion::Mode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnSetMode(KUrlCompletion* self, intptr_t slot) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_SetMode_Callback(reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_SetMode_Callback>(slot));
    }
}

// Base class handler implementation
bool KUrlCompletion_QBaseReplaceEnv(const KUrlCompletion* self) {
    auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self));
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_ReplaceEnv_IsBase(true);
        return vkurlcompletion->replaceEnv();
    } else {
        return self->KUrlCompletion::replaceEnv();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnReplaceEnv(const KUrlCompletion* self, intptr_t slot) {
    auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self));
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_ReplaceEnv_Callback(reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_ReplaceEnv_Callback>(slot));
    }
}

// Base class handler implementation
void KUrlCompletion_QBaseSetReplaceEnv(KUrlCompletion* self, bool replace) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_SetReplaceEnv_IsBase(true);
        vkurlcompletion->setReplaceEnv(replace);
    } else {
        self->KUrlCompletion::setReplaceEnv(replace);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnSetReplaceEnv(KUrlCompletion* self, intptr_t slot) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_SetReplaceEnv_Callback(reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_SetReplaceEnv_Callback>(slot));
    }
}

// Base class handler implementation
bool KUrlCompletion_QBaseReplaceHome(const KUrlCompletion* self) {
    auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self));
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_ReplaceHome_IsBase(true);
        return vkurlcompletion->replaceHome();
    } else {
        return self->KUrlCompletion::replaceHome();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnReplaceHome(const KUrlCompletion* self, intptr_t slot) {
    auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self));
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_ReplaceHome_Callback(reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_ReplaceHome_Callback>(slot));
    }
}

// Base class handler implementation
void KUrlCompletion_QBaseSetReplaceHome(KUrlCompletion* self, bool replace) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_SetReplaceHome_IsBase(true);
        vkurlcompletion->setReplaceHome(replace);
    } else {
        self->KUrlCompletion::setReplaceHome(replace);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnSetReplaceHome(KUrlCompletion* self, intptr_t slot) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_SetReplaceHome_Callback(reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_SetReplaceHome_Callback>(slot));
    }
}

// Base class handler implementation
void KUrlCompletion_QBasePostProcessMatches(const KUrlCompletion* self, libqt_list /* of libqt_string */ matches) {
    auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self));
    QList<QString> matches_QList;
    matches_QList.reserve(matches.len);
    libqt_string* matches_arr = static_cast<libqt_string*>(matches.data);
    for (size_t i = 0; i < matches.len; ++i) {
        QString matches_arr_i_QString = QString::fromUtf8(matches_arr[i].data, matches_arr[i].len);
        matches_QList.push_back(matches_arr_i_QString);
    }
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_PostProcessMatches_IsBase(true);
        vkurlcompletion->postProcessMatches(&matches_QList);
    } else {
        ((VirtualKUrlCompletion*)self)->postProcessMatches(&matches_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnPostProcessMatches(const KUrlCompletion* self, intptr_t slot) {
    auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self));
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_PostProcessMatches_Callback(reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_PostProcessMatches_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KUrlCompletion_LastMatch(const KUrlCompletion* self) {
    auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self));
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        const QString _ret = vkurlcompletion->lastMatch();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        const QString _ret = self->KUrlCompletion::lastMatch();
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
libqt_string KUrlCompletion_QBaseLastMatch(const KUrlCompletion* self) {
    auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self));
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_LastMatch_IsBase(true);
        const QString _ret = vkurlcompletion->lastMatch();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        const QString _ret = self->KUrlCompletion::lastMatch();
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
void KUrlCompletion_OnLastMatch(const KUrlCompletion* self, intptr_t slot) {
    auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self));
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_LastMatch_Callback(reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_LastMatch_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlCompletion_SetCompletionMode(KUrlCompletion* self, int mode) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    } else {
        self->KUrlCompletion::setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    }
}

// Base class handler implementation
void KUrlCompletion_QBaseSetCompletionMode(KUrlCompletion* self, int mode) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_SetCompletionMode_IsBase(true);
        vkurlcompletion->setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    } else {
        self->KUrlCompletion::setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnSetCompletionMode(KUrlCompletion* self, intptr_t slot) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_SetCompletionMode_Callback(reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_SetCompletionMode_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlCompletion_SetOrder(KUrlCompletion* self, int order) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setOrder(static_cast<KCompletion::CompOrder>(order));
    } else {
        self->KUrlCompletion::setOrder(static_cast<KCompletion::CompOrder>(order));
    }
}

// Base class handler implementation
void KUrlCompletion_QBaseSetOrder(KUrlCompletion* self, int order) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_SetOrder_IsBase(true);
        vkurlcompletion->setOrder(static_cast<KCompletion::CompOrder>(order));
    } else {
        self->KUrlCompletion::setOrder(static_cast<KCompletion::CompOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnSetOrder(KUrlCompletion* self, intptr_t slot) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_SetOrder_Callback(reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_SetOrder_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlCompletion_SetIgnoreCase(KUrlCompletion* self, bool ignoreCase) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setIgnoreCase(ignoreCase);
    } else {
        self->KUrlCompletion::setIgnoreCase(ignoreCase);
    }
}

// Base class handler implementation
void KUrlCompletion_QBaseSetIgnoreCase(KUrlCompletion* self, bool ignoreCase) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_SetIgnoreCase_IsBase(true);
        vkurlcompletion->setIgnoreCase(ignoreCase);
    } else {
        self->KUrlCompletion::setIgnoreCase(ignoreCase);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnSetIgnoreCase(KUrlCompletion* self, intptr_t slot) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_SetIgnoreCase_Callback(reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_SetIgnoreCase_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlCompletion_SetSoundsEnabled(KUrlCompletion* self, bool enable) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setSoundsEnabled(enable);
    } else {
        self->KUrlCompletion::setSoundsEnabled(enable);
    }
}

// Base class handler implementation
void KUrlCompletion_QBaseSetSoundsEnabled(KUrlCompletion* self, bool enable) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_SetSoundsEnabled_IsBase(true);
        vkurlcompletion->setSoundsEnabled(enable);
    } else {
        self->KUrlCompletion::setSoundsEnabled(enable);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnSetSoundsEnabled(KUrlCompletion* self, intptr_t slot) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_SetSoundsEnabled_Callback(reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_SetSoundsEnabled_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlCompletion_SetItems(KUrlCompletion* self, const libqt_list /* of libqt_string */ itemList) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    QList<QString> itemList_QList;
    itemList_QList.reserve(itemList.len);
    libqt_string* itemList_arr = static_cast<libqt_string*>(itemList.data);
    for (size_t i = 0; i < itemList.len; ++i) {
        QString itemList_arr_i_QString = QString::fromUtf8(itemList_arr[i].data, itemList_arr[i].len);
        itemList_QList.push_back(itemList_arr_i_QString);
    }
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setItems(itemList_QList);
    } else {
        self->KUrlCompletion::setItems(itemList_QList);
    }
}

// Base class handler implementation
void KUrlCompletion_QBaseSetItems(KUrlCompletion* self, const libqt_list /* of libqt_string */ itemList) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    QList<QString> itemList_QList;
    itemList_QList.reserve(itemList.len);
    libqt_string* itemList_arr = static_cast<libqt_string*>(itemList.data);
    for (size_t i = 0; i < itemList.len; ++i) {
        QString itemList_arr_i_QString = QString::fromUtf8(itemList_arr[i].data, itemList_arr[i].len);
        itemList_QList.push_back(itemList_arr_i_QString);
    }
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_SetItems_IsBase(true);
        vkurlcompletion->setItems(itemList_QList);
    } else {
        self->KUrlCompletion::setItems(itemList_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnSetItems(KUrlCompletion* self, intptr_t slot) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_SetItems_Callback(reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_SetItems_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlCompletion_Clear(KUrlCompletion* self) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->clear();
    } else {
        self->KUrlCompletion::clear();
    }
}

// Base class handler implementation
void KUrlCompletion_QBaseClear(KUrlCompletion* self) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_Clear_IsBase(true);
        vkurlcompletion->clear();
    } else {
        self->KUrlCompletion::clear();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnClear(KUrlCompletion* self, intptr_t slot) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_Clear_Callback(reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_Clear_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlCompletion_Event(KUrlCompletion* self, QEvent* event) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        return vkurlcompletion->event(event);
    } else {
        return self->KUrlCompletion::event(event);
    }
}

// Base class handler implementation
bool KUrlCompletion_QBaseEvent(KUrlCompletion* self, QEvent* event) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_Event_IsBase(true);
        return vkurlcompletion->event(event);
    } else {
        return self->KUrlCompletion::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnEvent(KUrlCompletion* self, intptr_t slot) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_Event_Callback(reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlCompletion_EventFilter(KUrlCompletion* self, QObject* watched, QEvent* event) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        return vkurlcompletion->eventFilter(watched, event);
    } else {
        return self->KUrlCompletion::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KUrlCompletion_QBaseEventFilter(KUrlCompletion* self, QObject* watched, QEvent* event) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_EventFilter_IsBase(true);
        return vkurlcompletion->eventFilter(watched, event);
    } else {
        return self->KUrlCompletion::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnEventFilter(KUrlCompletion* self, intptr_t slot) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_EventFilter_Callback(reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlCompletion_TimerEvent(KUrlCompletion* self, QTimerEvent* event) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->timerEvent(event);
    } else {
        ((VirtualKUrlCompletion*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KUrlCompletion_QBaseTimerEvent(KUrlCompletion* self, QTimerEvent* event) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_TimerEvent_IsBase(true);
        vkurlcompletion->timerEvent(event);
    } else {
        ((VirtualKUrlCompletion*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnTimerEvent(KUrlCompletion* self, intptr_t slot) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_TimerEvent_Callback(reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlCompletion_ChildEvent(KUrlCompletion* self, QChildEvent* event) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->childEvent(event);
    } else {
        ((VirtualKUrlCompletion*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KUrlCompletion_QBaseChildEvent(KUrlCompletion* self, QChildEvent* event) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_ChildEvent_IsBase(true);
        vkurlcompletion->childEvent(event);
    } else {
        ((VirtualKUrlCompletion*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnChildEvent(KUrlCompletion* self, intptr_t slot) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_ChildEvent_Callback(reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlCompletion_CustomEvent(KUrlCompletion* self, QEvent* event) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->customEvent(event);
    } else {
        ((VirtualKUrlCompletion*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KUrlCompletion_QBaseCustomEvent(KUrlCompletion* self, QEvent* event) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_CustomEvent_IsBase(true);
        vkurlcompletion->customEvent(event);
    } else {
        ((VirtualKUrlCompletion*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnCustomEvent(KUrlCompletion* self, intptr_t slot) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_CustomEvent_Callback(reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlCompletion_ConnectNotify(KUrlCompletion* self, const QMetaMethod* signal) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->connectNotify(*signal);
    } else {
        ((VirtualKUrlCompletion*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KUrlCompletion_QBaseConnectNotify(KUrlCompletion* self, const QMetaMethod* signal) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_ConnectNotify_IsBase(true);
        vkurlcompletion->connectNotify(*signal);
    } else {
        ((VirtualKUrlCompletion*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnConnectNotify(KUrlCompletion* self, intptr_t slot) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_ConnectNotify_Callback(reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlCompletion_DisconnectNotify(KUrlCompletion* self, const QMetaMethod* signal) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->disconnectNotify(*signal);
    } else {
        ((VirtualKUrlCompletion*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KUrlCompletion_QBaseDisconnectNotify(KUrlCompletion* self, const QMetaMethod* signal) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_DisconnectNotify_IsBase(true);
        vkurlcompletion->disconnectNotify(*signal);
    } else {
        ((VirtualKUrlCompletion*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnDisconnectNotify(KUrlCompletion* self, intptr_t slot) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_DisconnectNotify_Callback(reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlCompletion_SetShouldAutoSuggest(KUrlCompletion* self, bool shouldAutosuggest) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setShouldAutoSuggest(shouldAutosuggest);
    } else {
        ((VirtualKUrlCompletion*)self)->setShouldAutoSuggest(shouldAutosuggest);
    }
}

// Base class handler implementation
void KUrlCompletion_QBaseSetShouldAutoSuggest(KUrlCompletion* self, bool shouldAutosuggest) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_SetShouldAutoSuggest_IsBase(true);
        vkurlcompletion->setShouldAutoSuggest(shouldAutosuggest);
    } else {
        ((VirtualKUrlCompletion*)self)->setShouldAutoSuggest(shouldAutosuggest);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnSetShouldAutoSuggest(KUrlCompletion* self, intptr_t slot) {
    auto* vkurlcompletion = dynamic_cast<VirtualKUrlCompletion*>(self);
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_SetShouldAutoSuggest_Callback(reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_SetShouldAutoSuggest_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KUrlCompletion_Sender(const KUrlCompletion* self) {
    auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self));
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        return vkurlcompletion->sender();
    } else {
        return ((VirtualKUrlCompletion*)self)->sender();
    }
}

// Base class handler implementation
QObject* KUrlCompletion_QBaseSender(const KUrlCompletion* self) {
    auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self));
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_Sender_IsBase(true);
        return vkurlcompletion->sender();
    } else {
        return ((VirtualKUrlCompletion*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnSender(const KUrlCompletion* self, intptr_t slot) {
    auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self));
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_Sender_Callback(reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KUrlCompletion_SenderSignalIndex(const KUrlCompletion* self) {
    auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self));
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        return vkurlcompletion->senderSignalIndex();
    } else {
        return ((VirtualKUrlCompletion*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KUrlCompletion_QBaseSenderSignalIndex(const KUrlCompletion* self) {
    auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self));
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_SenderSignalIndex_IsBase(true);
        return vkurlcompletion->senderSignalIndex();
    } else {
        return ((VirtualKUrlCompletion*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnSenderSignalIndex(const KUrlCompletion* self, intptr_t slot) {
    auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self));
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_SenderSignalIndex_Callback(reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KUrlCompletion_Receivers(const KUrlCompletion* self, const char* signal) {
    auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self));
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        return vkurlcompletion->receivers(signal);
    } else {
        return ((VirtualKUrlCompletion*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KUrlCompletion_QBaseReceivers(const KUrlCompletion* self, const char* signal) {
    auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self));
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_Receivers_IsBase(true);
        return vkurlcompletion->receivers(signal);
    } else {
        return ((VirtualKUrlCompletion*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnReceivers(const KUrlCompletion* self, intptr_t slot) {
    auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self));
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_Receivers_Callback(reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlCompletion_IsSignalConnected(const KUrlCompletion* self, const QMetaMethod* signal) {
    auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self));
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        return vkurlcompletion->isSignalConnected(*signal);
    } else {
        return ((VirtualKUrlCompletion*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KUrlCompletion_QBaseIsSignalConnected(const KUrlCompletion* self, const QMetaMethod* signal) {
    auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self));
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_IsSignalConnected_IsBase(true);
        return vkurlcompletion->isSignalConnected(*signal);
    } else {
        return ((VirtualKUrlCompletion*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlCompletion_OnIsSignalConnected(const KUrlCompletion* self, intptr_t slot) {
    auto* vkurlcompletion = const_cast<VirtualKUrlCompletion*>(dynamic_cast<const VirtualKUrlCompletion*>(self));
    if (vkurlcompletion && vkurlcompletion->isVirtualKUrlCompletion) {
        vkurlcompletion->setKUrlCompletion_IsSignalConnected_Callback(reinterpret_cast<VirtualKUrlCompletion::KUrlCompletion_IsSignalConnected_Callback>(slot));
    }
}

void KUrlCompletion_Delete(KUrlCompletion* self) {
    delete self;
}
