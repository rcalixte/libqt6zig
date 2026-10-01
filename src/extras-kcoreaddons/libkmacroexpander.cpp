#include <KMacroExpander>
#include <QChar>
#include <QHash>
#include <QList>
#include <QString>
#include <kmacroexpander.h>
#include "libkmacroexpander.h"
#include "libkmacroexpander.hxx"

KMacroExpanderBase* KMacroExpanderBase_new() {
    return new VirtualKMacroExpanderBase();
}

KMacroExpanderBase* KMacroExpanderBase_new2(QChar* c) {
    return new VirtualKMacroExpanderBase(*c);
}

void KMacroExpanderBase_ExpandMacros(KMacroExpanderBase* self, libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    self->expandMacros(str_QString);
}

bool KMacroExpanderBase_ExpandMacrosShellQuote(KMacroExpanderBase* self, libqt_string str, int* pos) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    return self->expandMacrosShellQuote(str_QString, static_cast<int&>(*pos));
}

bool KMacroExpanderBase_ExpandMacrosShellQuote2(KMacroExpanderBase* self, libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    return self->expandMacrosShellQuote(str_QString);
}

void KMacroExpanderBase_SetEscapeChar(KMacroExpanderBase* self, QChar* c) {
    self->setEscapeChar(*c);
}

QChar* KMacroExpanderBase_EscapeChar(const KMacroExpanderBase* self) {
    return new QChar(self->escapeChar());
}

int KMacroExpanderBase_ExpandPlainMacro(KMacroExpanderBase* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ ret) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QList<QString> ret_QList;
    ret_QList.reserve(ret.len);
    libqt_string* ret_arr = static_cast<libqt_string*>(ret.data);
    for (size_t i = 0; i < ret.len; ++i) {
        QString ret_arr_i_QString = QString::fromUtf8(ret_arr[i].data, ret_arr[i].len);
        ret_QList.push_back(ret_arr_i_QString);
    }
    auto* vkmacroexpanderbase = dynamic_cast<VirtualKMacroExpanderBase*>(self);
    if (vkmacroexpanderbase) {
        return vkmacroexpanderbase->expandPlainMacro(str_QString, static_cast<int>(pos), ret_QList);
    }
    qFatal("Error: Protected method KMacroExpanderBase::expandPlainMacro called without a directly constructed type");
}

int KMacroExpanderBase_ExpandEscapedMacro(KMacroExpanderBase* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ ret) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QList<QString> ret_QList;
    ret_QList.reserve(ret.len);
    libqt_string* ret_arr = static_cast<libqt_string*>(ret.data);
    for (size_t i = 0; i < ret.len; ++i) {
        QString ret_arr_i_QString = QString::fromUtf8(ret_arr[i].data, ret_arr[i].len);
        ret_QList.push_back(ret_arr_i_QString);
    }
    auto* vkmacroexpanderbase = dynamic_cast<VirtualKMacroExpanderBase*>(self);
    if (vkmacroexpanderbase) {
        return vkmacroexpanderbase->expandEscapedMacro(str_QString, static_cast<int>(pos), ret_QList);
    }
    qFatal("Error: Protected method KMacroExpanderBase::expandEscapedMacro called without a directly constructed type");
}

// Base class handler implementation
int KMacroExpanderBase_SuperExpandPlainMacro(KMacroExpanderBase* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ ret) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QList<QString> ret_QList;
    ret_QList.reserve(ret.len);
    libqt_string* ret_arr = static_cast<libqt_string*>(ret.data);
    for (size_t i = 0; i < ret.len; ++i) {
        QString ret_arr_i_QString = QString::fromUtf8(ret_arr[i].data, ret_arr[i].len);
        ret_QList.push_back(ret_arr_i_QString);
    }
    if (auto* vkmacroexpanderbase = dynamic_cast<VirtualKMacroExpanderBase*>(self)) {
        return vkmacroexpanderbase->KMacroExpanderBase::expandPlainMacro(str_QString, static_cast<int>(pos), ret_QList);
    } else
        qFatal("Error: Protected virtual method KMacroExpanderBase::expandPlainMacro called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMacroExpanderBase_OnExpandPlainMacro(KMacroExpanderBase* self, intptr_t slot) {
    if (auto* vkmacroexpanderbase = dynamic_cast<VirtualKMacroExpanderBase*>(self))
        vkmacroexpanderbase->kmacroexpanderbase_expandplainmacro_callback = reinterpret_cast<VirtualKMacroExpanderBase::KMacroExpanderBase_ExpandPlainMacro_Callback>(slot);
}

// Base class handler implementation
int KMacroExpanderBase_SuperExpandEscapedMacro(KMacroExpanderBase* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ ret) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QList<QString> ret_QList;
    ret_QList.reserve(ret.len);
    libqt_string* ret_arr = static_cast<libqt_string*>(ret.data);
    for (size_t i = 0; i < ret.len; ++i) {
        QString ret_arr_i_QString = QString::fromUtf8(ret_arr[i].data, ret_arr[i].len);
        ret_QList.push_back(ret_arr_i_QString);
    }
    if (auto* vkmacroexpanderbase = dynamic_cast<VirtualKMacroExpanderBase*>(self)) {
        return vkmacroexpanderbase->KMacroExpanderBase::expandEscapedMacro(str_QString, static_cast<int>(pos), ret_QList);
    } else
        qFatal("Error: Protected virtual method KMacroExpanderBase::expandEscapedMacro called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMacroExpanderBase_OnExpandEscapedMacro(KMacroExpanderBase* self, intptr_t slot) {
    if (auto* vkmacroexpanderbase = dynamic_cast<VirtualKMacroExpanderBase*>(self))
        vkmacroexpanderbase->kmacroexpanderbase_expandescapedmacro_callback = reinterpret_cast<VirtualKMacroExpanderBase::KMacroExpanderBase_ExpandEscapedMacro_Callback>(slot);
}

void KMacroExpanderBase_Delete(KMacroExpanderBase* self) {
    delete self;
}

KWordMacroExpander* KWordMacroExpander_new() {
    return new VirtualKWordMacroExpander();
}

KWordMacroExpander* KWordMacroExpander_new2(QChar* c) {
    return new VirtualKWordMacroExpander(*c);
}

int KWordMacroExpander_ExpandPlainMacro(KWordMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ ret) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QList<QString> ret_QList;
    ret_QList.reserve(ret.len);
    libqt_string* ret_arr = static_cast<libqt_string*>(ret.data);
    for (size_t i = 0; i < ret.len; ++i) {
        QString ret_arr_i_QString = QString::fromUtf8(ret_arr[i].data, ret_arr[i].len);
        ret_QList.push_back(ret_arr_i_QString);
    }
    auto* vkwordmacroexpander = dynamic_cast<VirtualKWordMacroExpander*>(self);
    if (vkwordmacroexpander) {
        return vkwordmacroexpander->expandPlainMacro(str_QString, static_cast<int>(pos), ret_QList);
    }
    qFatal("Error: Protected method KWordMacroExpander::expandPlainMacro called without a directly constructed type");
}

int KWordMacroExpander_ExpandEscapedMacro(KWordMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ ret) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QList<QString> ret_QList;
    ret_QList.reserve(ret.len);
    libqt_string* ret_arr = static_cast<libqt_string*>(ret.data);
    for (size_t i = 0; i < ret.len; ++i) {
        QString ret_arr_i_QString = QString::fromUtf8(ret_arr[i].data, ret_arr[i].len);
        ret_QList.push_back(ret_arr_i_QString);
    }
    auto* vkwordmacroexpander = dynamic_cast<VirtualKWordMacroExpander*>(self);
    if (vkwordmacroexpander) {
        return vkwordmacroexpander->expandEscapedMacro(str_QString, static_cast<int>(pos), ret_QList);
    }
    qFatal("Error: Protected method KWordMacroExpander::expandEscapedMacro called without a directly constructed type");
}

bool KWordMacroExpander_ExpandMacro(KWordMacroExpander* self, const libqt_string str, libqt_list /* of libqt_string */ ret) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QList<QString> ret_QList;
    ret_QList.reserve(ret.len);
    libqt_string* ret_arr = static_cast<libqt_string*>(ret.data);
    for (size_t i = 0; i < ret.len; ++i) {
        QString ret_arr_i_QString = QString::fromUtf8(ret_arr[i].data, ret_arr[i].len);
        ret_QList.push_back(ret_arr_i_QString);
    }
    auto* vkwordmacroexpander = dynamic_cast<VirtualKWordMacroExpander*>(self);
    if (vkwordmacroexpander) {
        return vkwordmacroexpander->expandMacro(str_QString, ret_QList);
    }
    qFatal("Error: Protected method KWordMacroExpander::expandMacro called without a directly constructed type");
}

// Base class handler implementation
int KWordMacroExpander_SuperExpandPlainMacro(KWordMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ ret) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QList<QString> ret_QList;
    ret_QList.reserve(ret.len);
    libqt_string* ret_arr = static_cast<libqt_string*>(ret.data);
    for (size_t i = 0; i < ret.len; ++i) {
        QString ret_arr_i_QString = QString::fromUtf8(ret_arr[i].data, ret_arr[i].len);
        ret_QList.push_back(ret_arr_i_QString);
    }
    if (auto* vkwordmacroexpander = dynamic_cast<VirtualKWordMacroExpander*>(self)) {
        return vkwordmacroexpander->KWordMacroExpander::expandPlainMacro(str_QString, static_cast<int>(pos), ret_QList);
    } else
        qFatal("Error: Protected virtual method KWordMacroExpander::expandPlainMacro called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KWordMacroExpander_OnExpandPlainMacro(KWordMacroExpander* self, intptr_t slot) {
    if (auto* vkwordmacroexpander = dynamic_cast<VirtualKWordMacroExpander*>(self))
        vkwordmacroexpander->kwordmacroexpander_expandplainmacro_callback = reinterpret_cast<VirtualKWordMacroExpander::KWordMacroExpander_ExpandPlainMacro_Callback>(slot);
}

// Base class handler implementation
int KWordMacroExpander_SuperExpandEscapedMacro(KWordMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ ret) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QList<QString> ret_QList;
    ret_QList.reserve(ret.len);
    libqt_string* ret_arr = static_cast<libqt_string*>(ret.data);
    for (size_t i = 0; i < ret.len; ++i) {
        QString ret_arr_i_QString = QString::fromUtf8(ret_arr[i].data, ret_arr[i].len);
        ret_QList.push_back(ret_arr_i_QString);
    }
    if (auto* vkwordmacroexpander = dynamic_cast<VirtualKWordMacroExpander*>(self)) {
        return vkwordmacroexpander->KWordMacroExpander::expandEscapedMacro(str_QString, static_cast<int>(pos), ret_QList);
    } else
        qFatal("Error: Protected virtual method KWordMacroExpander::expandEscapedMacro called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KWordMacroExpander_OnExpandEscapedMacro(KWordMacroExpander* self, intptr_t slot) {
    if (auto* vkwordmacroexpander = dynamic_cast<VirtualKWordMacroExpander*>(self))
        vkwordmacroexpander->kwordmacroexpander_expandescapedmacro_callback = reinterpret_cast<VirtualKWordMacroExpander::KWordMacroExpander_ExpandEscapedMacro_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KWordMacroExpander_OnExpandMacro(KWordMacroExpander* self, intptr_t slot) {
    if (auto* vkwordmacroexpander = dynamic_cast<VirtualKWordMacroExpander*>(self))
        vkwordmacroexpander->kwordmacroexpander_expandmacro_callback = reinterpret_cast<VirtualKWordMacroExpander::KWordMacroExpander_ExpandMacro_Callback>(slot);
}

void KWordMacroExpander_Delete(KWordMacroExpander* self) {
    delete self;
}

KCharMacroExpander* KCharMacroExpander_new() {
    return new VirtualKCharMacroExpander();
}

KCharMacroExpander* KCharMacroExpander_new2(QChar* c) {
    return new VirtualKCharMacroExpander(*c);
}

int KCharMacroExpander_ExpandPlainMacro(KCharMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ ret) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QList<QString> ret_QList;
    ret_QList.reserve(ret.len);
    libqt_string* ret_arr = static_cast<libqt_string*>(ret.data);
    for (size_t i = 0; i < ret.len; ++i) {
        QString ret_arr_i_QString = QString::fromUtf8(ret_arr[i].data, ret_arr[i].len);
        ret_QList.push_back(ret_arr_i_QString);
    }
    auto* vkcharmacroexpander = dynamic_cast<VirtualKCharMacroExpander*>(self);
    if (vkcharmacroexpander) {
        return vkcharmacroexpander->expandPlainMacro(str_QString, static_cast<int>(pos), ret_QList);
    }
    qFatal("Error: Protected method KCharMacroExpander::expandPlainMacro called without a directly constructed type");
}

int KCharMacroExpander_ExpandEscapedMacro(KCharMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ ret) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QList<QString> ret_QList;
    ret_QList.reserve(ret.len);
    libqt_string* ret_arr = static_cast<libqt_string*>(ret.data);
    for (size_t i = 0; i < ret.len; ++i) {
        QString ret_arr_i_QString = QString::fromUtf8(ret_arr[i].data, ret_arr[i].len);
        ret_QList.push_back(ret_arr_i_QString);
    }
    auto* vkcharmacroexpander = dynamic_cast<VirtualKCharMacroExpander*>(self);
    if (vkcharmacroexpander) {
        return vkcharmacroexpander->expandEscapedMacro(str_QString, static_cast<int>(pos), ret_QList);
    }
    qFatal("Error: Protected method KCharMacroExpander::expandEscapedMacro called without a directly constructed type");
}

bool KCharMacroExpander_ExpandMacro(KCharMacroExpander* self, QChar* chr, libqt_list /* of libqt_string */ ret) {
    QList<QString> ret_QList;
    ret_QList.reserve(ret.len);
    libqt_string* ret_arr = static_cast<libqt_string*>(ret.data);
    for (size_t i = 0; i < ret.len; ++i) {
        QString ret_arr_i_QString = QString::fromUtf8(ret_arr[i].data, ret_arr[i].len);
        ret_QList.push_back(ret_arr_i_QString);
    }
    auto* vkcharmacroexpander = dynamic_cast<VirtualKCharMacroExpander*>(self);
    if (vkcharmacroexpander) {
        return vkcharmacroexpander->expandMacro(*chr, ret_QList);
    }
    qFatal("Error: Protected method KCharMacroExpander::expandMacro called without a directly constructed type");
}

// Base class handler implementation
int KCharMacroExpander_SuperExpandPlainMacro(KCharMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ ret) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QList<QString> ret_QList;
    ret_QList.reserve(ret.len);
    libqt_string* ret_arr = static_cast<libqt_string*>(ret.data);
    for (size_t i = 0; i < ret.len; ++i) {
        QString ret_arr_i_QString = QString::fromUtf8(ret_arr[i].data, ret_arr[i].len);
        ret_QList.push_back(ret_arr_i_QString);
    }
    if (auto* vkcharmacroexpander = dynamic_cast<VirtualKCharMacroExpander*>(self)) {
        return vkcharmacroexpander->KCharMacroExpander::expandPlainMacro(str_QString, static_cast<int>(pos), ret_QList);
    } else
        qFatal("Error: Protected virtual method KCharMacroExpander::expandPlainMacro called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharMacroExpander_OnExpandPlainMacro(KCharMacroExpander* self, intptr_t slot) {
    if (auto* vkcharmacroexpander = dynamic_cast<VirtualKCharMacroExpander*>(self))
        vkcharmacroexpander->kcharmacroexpander_expandplainmacro_callback = reinterpret_cast<VirtualKCharMacroExpander::KCharMacroExpander_ExpandPlainMacro_Callback>(slot);
}

// Base class handler implementation
int KCharMacroExpander_SuperExpandEscapedMacro(KCharMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ ret) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QList<QString> ret_QList;
    ret_QList.reserve(ret.len);
    libqt_string* ret_arr = static_cast<libqt_string*>(ret.data);
    for (size_t i = 0; i < ret.len; ++i) {
        QString ret_arr_i_QString = QString::fromUtf8(ret_arr[i].data, ret_arr[i].len);
        ret_QList.push_back(ret_arr_i_QString);
    }
    if (auto* vkcharmacroexpander = dynamic_cast<VirtualKCharMacroExpander*>(self)) {
        return vkcharmacroexpander->KCharMacroExpander::expandEscapedMacro(str_QString, static_cast<int>(pos), ret_QList);
    } else
        qFatal("Error: Protected virtual method KCharMacroExpander::expandEscapedMacro called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharMacroExpander_OnExpandEscapedMacro(KCharMacroExpander* self, intptr_t slot) {
    if (auto* vkcharmacroexpander = dynamic_cast<VirtualKCharMacroExpander*>(self))
        vkcharmacroexpander->kcharmacroexpander_expandescapedmacro_callback = reinterpret_cast<VirtualKCharMacroExpander::KCharMacroExpander_ExpandEscapedMacro_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KCharMacroExpander_OnExpandMacro(KCharMacroExpander* self, intptr_t slot) {
    if (auto* vkcharmacroexpander = dynamic_cast<VirtualKCharMacroExpander*>(self))
        vkcharmacroexpander->kcharmacroexpander_expandmacro_callback = reinterpret_cast<VirtualKCharMacroExpander::KCharMacroExpander_ExpandMacro_Callback>(slot);
}

void KCharMacroExpander_Delete(KCharMacroExpander* self) {
    delete self;
}

libqt_string KMacroExpander_ExpandMacros(const libqt_string str, const libqt_map /* of QChar* to libqt_string */ map, QChar* c) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QHash<QChar, QString> map_QHash;
    map_QHash.reserve(map.len);
    QChar** map_karr = static_cast<QChar**>(map.keys);
    libqt_string* map_varr = static_cast<libqt_string*>(map.values);
    for (size_t i = 0; i < map.len; ++i) {
        QString map_varr_i_QString = QString::fromUtf8(map_varr[i].data, map_varr[i].len);
        map_QHash.insert(*(map_karr[i]), map_varr_i_QString);
    }
    auto _ret = KMacroExpander::expandMacros(str_QString, map_QHash, *c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KMacroExpander_ExpandMacrosShellQuote(const libqt_string str, const libqt_map /* of QChar* to libqt_string */ map, QChar* c) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QHash<QChar, QString> map_QHash;
    map_QHash.reserve(map.len);
    QChar** map_karr = static_cast<QChar**>(map.keys);
    libqt_string* map_varr = static_cast<libqt_string*>(map.values);
    for (size_t i = 0; i < map.len; ++i) {
        QString map_varr_i_QString = QString::fromUtf8(map_varr[i].data, map_varr[i].len);
        map_QHash.insert(*(map_karr[i]), map_varr_i_QString);
    }
    auto _ret = KMacroExpander::expandMacrosShellQuote(str_QString, map_QHash, *c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KMacroExpander_ExpandMacros2(const libqt_string str, const libqt_map /* of libqt_string to libqt_string */ map, QChar* c) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QHash<QString, QString> map_QHash;
    map_QHash.reserve(map.len);
    libqt_string* map_karr = static_cast<libqt_string*>(map.keys);
    libqt_string* map_varr = static_cast<libqt_string*>(map.values);
    for (size_t i = 0; i < map.len; ++i) {
        QString map_karr_i_QString = QString::fromUtf8(map_karr[i].data, map_karr[i].len);
        QString map_varr_i_QString = QString::fromUtf8(map_varr[i].data, map_varr[i].len);
        map_QHash.insert(map_karr_i_QString, map_varr_i_QString);
    }
    auto _ret = KMacroExpander::expandMacros(str_QString, map_QHash, *c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KMacroExpander_ExpandMacrosShellQuote2(const libqt_string str, const libqt_map /* of libqt_string to libqt_string */ map, QChar* c) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QHash<QString, QString> map_QHash;
    map_QHash.reserve(map.len);
    libqt_string* map_karr = static_cast<libqt_string*>(map.keys);
    libqt_string* map_varr = static_cast<libqt_string*>(map.values);
    for (size_t i = 0; i < map.len; ++i) {
        QString map_karr_i_QString = QString::fromUtf8(map_karr[i].data, map_karr[i].len);
        QString map_varr_i_QString = QString::fromUtf8(map_varr[i].data, map_varr[i].len);
        map_QHash.insert(map_karr_i_QString, map_varr_i_QString);
    }
    auto _ret = KMacroExpander::expandMacrosShellQuote(str_QString, map_QHash, *c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KMacroExpander_ExpandMacros3(const libqt_string str, const libqt_map /* of QChar* to libqt_list of libqt_string */ map, QChar* c) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QHash<QChar, QList<QString>> map_QHash;
    map_QHash.reserve(map.len);
    QChar** map_karr = static_cast<QChar**>(map.keys);
    libqt_list /* of libqt_string */* map_varr = static_cast<libqt_list /* of libqt_string */*>(map.values);
    for (size_t i = 0; i < map.len; ++i) {
        QList<QString> map_varr_i_QList;
        map_varr_i_QList.reserve(map_varr[i].len);
        libqt_string* map_varr_i_arr = static_cast<libqt_string*>(map_varr[i].data);
        for (size_t j = 0; j < map_varr[i].len; ++j) {
            QString map_varr_i_arr_j_QString = QString::fromUtf8(map_varr_i_arr[j].data, map_varr_i_arr[j].len);
            map_varr_i_QList.push_back(map_varr_i_arr_j_QString);
        }
        map_QHash.insert(*(map_karr[i]), map_varr_i_QList);
    }
    auto _ret = KMacroExpander::expandMacros(str_QString, map_QHash, *c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KMacroExpander_ExpandMacros4(const libqt_string str, const libqt_map /* of libqt_string to libqt_list of libqt_string */ map, QChar* c) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QHash<QString, QList<QString>> map_QHash;
    map_QHash.reserve(map.len);
    libqt_string* map_karr = static_cast<libqt_string*>(map.keys);
    libqt_list /* of libqt_string */* map_varr = static_cast<libqt_list /* of libqt_string */*>(map.values);
    for (size_t i = 0; i < map.len; ++i) {
        QString map_karr_i_QString = QString::fromUtf8(map_karr[i].data, map_karr[i].len);
        QList<QString> map_varr_i_QList;
        map_varr_i_QList.reserve(map_varr[i].len);
        libqt_string* map_varr_i_arr = static_cast<libqt_string*>(map_varr[i].data);
        for (size_t j = 0; j < map_varr[i].len; ++j) {
            QString map_varr_i_arr_j_QString = QString::fromUtf8(map_varr_i_arr[j].data, map_varr_i_arr[j].len);
            map_varr_i_QList.push_back(map_varr_i_arr_j_QString);
        }
        map_QHash.insert(map_karr_i_QString, map_varr_i_QList);
    }
    auto _ret = KMacroExpander::expandMacros(str_QString, map_QHash, *c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KMacroExpander_ExpandMacrosShellQuote3(const libqt_string str, const libqt_map /* of QChar* to libqt_list of libqt_string */ map, QChar* c) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QHash<QChar, QList<QString>> map_QHash;
    map_QHash.reserve(map.len);
    QChar** map_karr = static_cast<QChar**>(map.keys);
    libqt_list /* of libqt_string */* map_varr = static_cast<libqt_list /* of libqt_string */*>(map.values);
    for (size_t i = 0; i < map.len; ++i) {
        QList<QString> map_varr_i_QList;
        map_varr_i_QList.reserve(map_varr[i].len);
        libqt_string* map_varr_i_arr = static_cast<libqt_string*>(map_varr[i].data);
        for (size_t j = 0; j < map_varr[i].len; ++j) {
            QString map_varr_i_arr_j_QString = QString::fromUtf8(map_varr_i_arr[j].data, map_varr_i_arr[j].len);
            map_varr_i_QList.push_back(map_varr_i_arr_j_QString);
        }
        map_QHash.insert(*(map_karr[i]), map_varr_i_QList);
    }
    auto _ret = KMacroExpander::expandMacrosShellQuote(str_QString, map_QHash, *c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KMacroExpander_ExpandMacrosShellQuote4(const libqt_string str, const libqt_map /* of libqt_string to libqt_list of libqt_string */ map, QChar* c) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QHash<QString, QList<QString>> map_QHash;
    map_QHash.reserve(map.len);
    libqt_string* map_karr = static_cast<libqt_string*>(map.keys);
    libqt_list /* of libqt_string */* map_varr = static_cast<libqt_list /* of libqt_string */*>(map.values);
    for (size_t i = 0; i < map.len; ++i) {
        QString map_karr_i_QString = QString::fromUtf8(map_karr[i].data, map_karr[i].len);
        QList<QString> map_varr_i_QList;
        map_varr_i_QList.reserve(map_varr[i].len);
        libqt_string* map_varr_i_arr = static_cast<libqt_string*>(map_varr[i].data);
        for (size_t j = 0; j < map_varr[i].len; ++j) {
            QString map_varr_i_arr_j_QString = QString::fromUtf8(map_varr_i_arr[j].data, map_varr_i_arr[j].len);
            map_varr_i_QList.push_back(map_varr_i_arr_j_QString);
        }
        map_QHash.insert(map_karr_i_QString, map_varr_i_QList);
    }
    auto _ret = KMacroExpander::expandMacrosShellQuote(str_QString, map_QHash, *c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}
