#include <KMacroExpander>
#include <QChar>
#include <QHash>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
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

// Derived class handler implementation
int KMacroExpanderBase_ExpandPlainMacro(KMacroExpanderBase* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal) {
    auto* vkmacroexpanderbase = dynamic_cast<VirtualKMacroExpanderBase*>(self);
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QList<QString> retVal_QList;
    retVal_QList.reserve(retVal.len);
    libqt_string* retVal_arr = static_cast<libqt_string*>(retVal.data);
    for (size_t i = 0; i < retVal.len; ++i) {
        QString retVal_arr_i_QString = QString::fromUtf8(retVal_arr[i].data, retVal_arr[i].len);
        retVal_QList.push_back(retVal_arr_i_QString);
    }
    if (vkmacroexpanderbase && vkmacroexpanderbase->isVirtualKMacroExpanderBase) {
        return vkmacroexpanderbase->expandPlainMacro(str_QString, static_cast<int>(pos), retVal_QList);
    } else {
        return ((VirtualKMacroExpanderBase*)self)->expandPlainMacro(str_QString, static_cast<int>(pos), retVal_QList);
    }
}

// Base class handler implementation
int KMacroExpanderBase_QBaseExpandPlainMacro(KMacroExpanderBase* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal) {
    auto* vkmacroexpanderbase = dynamic_cast<VirtualKMacroExpanderBase*>(self);
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QList<QString> retVal_QList;
    retVal_QList.reserve(retVal.len);
    libqt_string* retVal_arr = static_cast<libqt_string*>(retVal.data);
    for (size_t i = 0; i < retVal.len; ++i) {
        QString retVal_arr_i_QString = QString::fromUtf8(retVal_arr[i].data, retVal_arr[i].len);
        retVal_QList.push_back(retVal_arr_i_QString);
    }
    if (vkmacroexpanderbase && vkmacroexpanderbase->isVirtualKMacroExpanderBase) {
        vkmacroexpanderbase->setKMacroExpanderBase_ExpandPlainMacro_IsBase(true);
        return vkmacroexpanderbase->expandPlainMacro(str_QString, static_cast<int>(pos), retVal_QList);
    } else {
        return ((VirtualKMacroExpanderBase*)self)->expandPlainMacro(str_QString, static_cast<int>(pos), retVal_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KMacroExpanderBase_OnExpandPlainMacro(KMacroExpanderBase* self, intptr_t slot) {
    auto* vkmacroexpanderbase = dynamic_cast<VirtualKMacroExpanderBase*>(self);
    if (vkmacroexpanderbase && vkmacroexpanderbase->isVirtualKMacroExpanderBase) {
        vkmacroexpanderbase->setKMacroExpanderBase_ExpandPlainMacro_Callback(reinterpret_cast<VirtualKMacroExpanderBase::KMacroExpanderBase_ExpandPlainMacro_Callback>(slot));
    }
}

// Derived class handler implementation
int KMacroExpanderBase_ExpandEscapedMacro(KMacroExpanderBase* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal) {
    auto* vkmacroexpanderbase = dynamic_cast<VirtualKMacroExpanderBase*>(self);
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QList<QString> retVal_QList;
    retVal_QList.reserve(retVal.len);
    libqt_string* retVal_arr = static_cast<libqt_string*>(retVal.data);
    for (size_t i = 0; i < retVal.len; ++i) {
        QString retVal_arr_i_QString = QString::fromUtf8(retVal_arr[i].data, retVal_arr[i].len);
        retVal_QList.push_back(retVal_arr_i_QString);
    }
    if (vkmacroexpanderbase && vkmacroexpanderbase->isVirtualKMacroExpanderBase) {
        return vkmacroexpanderbase->expandEscapedMacro(str_QString, static_cast<int>(pos), retVal_QList);
    } else {
        return ((VirtualKMacroExpanderBase*)self)->expandEscapedMacro(str_QString, static_cast<int>(pos), retVal_QList);
    }
}

// Base class handler implementation
int KMacroExpanderBase_QBaseExpandEscapedMacro(KMacroExpanderBase* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal) {
    auto* vkmacroexpanderbase = dynamic_cast<VirtualKMacroExpanderBase*>(self);
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QList<QString> retVal_QList;
    retVal_QList.reserve(retVal.len);
    libqt_string* retVal_arr = static_cast<libqt_string*>(retVal.data);
    for (size_t i = 0; i < retVal.len; ++i) {
        QString retVal_arr_i_QString = QString::fromUtf8(retVal_arr[i].data, retVal_arr[i].len);
        retVal_QList.push_back(retVal_arr_i_QString);
    }
    if (vkmacroexpanderbase && vkmacroexpanderbase->isVirtualKMacroExpanderBase) {
        vkmacroexpanderbase->setKMacroExpanderBase_ExpandEscapedMacro_IsBase(true);
        return vkmacroexpanderbase->expandEscapedMacro(str_QString, static_cast<int>(pos), retVal_QList);
    } else {
        return ((VirtualKMacroExpanderBase*)self)->expandEscapedMacro(str_QString, static_cast<int>(pos), retVal_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KMacroExpanderBase_OnExpandEscapedMacro(KMacroExpanderBase* self, intptr_t slot) {
    auto* vkmacroexpanderbase = dynamic_cast<VirtualKMacroExpanderBase*>(self);
    if (vkmacroexpanderbase && vkmacroexpanderbase->isVirtualKMacroExpanderBase) {
        vkmacroexpanderbase->setKMacroExpanderBase_ExpandEscapedMacro_Callback(reinterpret_cast<VirtualKMacroExpanderBase::KMacroExpanderBase_ExpandEscapedMacro_Callback>(slot));
    }
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

// Derived class handler implementation
int KWordMacroExpander_ExpandPlainMacro(KWordMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal) {
    auto* vkwordmacroexpander = dynamic_cast<VirtualKWordMacroExpander*>(self);
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QList<QString> retVal_QList;
    retVal_QList.reserve(retVal.len);
    libqt_string* retVal_arr = static_cast<libqt_string*>(retVal.data);
    for (size_t i = 0; i < retVal.len; ++i) {
        QString retVal_arr_i_QString = QString::fromUtf8(retVal_arr[i].data, retVal_arr[i].len);
        retVal_QList.push_back(retVal_arr_i_QString);
    }
    if (vkwordmacroexpander && vkwordmacroexpander->isVirtualKWordMacroExpander) {
        return vkwordmacroexpander->expandPlainMacro(str_QString, static_cast<int>(pos), retVal_QList);
    } else {
        return ((VirtualKWordMacroExpander*)self)->expandPlainMacro(str_QString, static_cast<int>(pos), retVal_QList);
    }
}

// Base class handler implementation
int KWordMacroExpander_QBaseExpandPlainMacro(KWordMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal) {
    auto* vkwordmacroexpander = dynamic_cast<VirtualKWordMacroExpander*>(self);
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QList<QString> retVal_QList;
    retVal_QList.reserve(retVal.len);
    libqt_string* retVal_arr = static_cast<libqt_string*>(retVal.data);
    for (size_t i = 0; i < retVal.len; ++i) {
        QString retVal_arr_i_QString = QString::fromUtf8(retVal_arr[i].data, retVal_arr[i].len);
        retVal_QList.push_back(retVal_arr_i_QString);
    }
    if (vkwordmacroexpander && vkwordmacroexpander->isVirtualKWordMacroExpander) {
        vkwordmacroexpander->setKWordMacroExpander_ExpandPlainMacro_IsBase(true);
        return vkwordmacroexpander->expandPlainMacro(str_QString, static_cast<int>(pos), retVal_QList);
    } else {
        return ((VirtualKWordMacroExpander*)self)->expandPlainMacro(str_QString, static_cast<int>(pos), retVal_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KWordMacroExpander_OnExpandPlainMacro(KWordMacroExpander* self, intptr_t slot) {
    auto* vkwordmacroexpander = dynamic_cast<VirtualKWordMacroExpander*>(self);
    if (vkwordmacroexpander && vkwordmacroexpander->isVirtualKWordMacroExpander) {
        vkwordmacroexpander->setKWordMacroExpander_ExpandPlainMacro_Callback(reinterpret_cast<VirtualKWordMacroExpander::KWordMacroExpander_ExpandPlainMacro_Callback>(slot));
    }
}

// Derived class handler implementation
int KWordMacroExpander_ExpandEscapedMacro(KWordMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal) {
    auto* vkwordmacroexpander = dynamic_cast<VirtualKWordMacroExpander*>(self);
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QList<QString> retVal_QList;
    retVal_QList.reserve(retVal.len);
    libqt_string* retVal_arr = static_cast<libqt_string*>(retVal.data);
    for (size_t i = 0; i < retVal.len; ++i) {
        QString retVal_arr_i_QString = QString::fromUtf8(retVal_arr[i].data, retVal_arr[i].len);
        retVal_QList.push_back(retVal_arr_i_QString);
    }
    if (vkwordmacroexpander && vkwordmacroexpander->isVirtualKWordMacroExpander) {
        return vkwordmacroexpander->expandEscapedMacro(str_QString, static_cast<int>(pos), retVal_QList);
    } else {
        return ((VirtualKWordMacroExpander*)self)->expandEscapedMacro(str_QString, static_cast<int>(pos), retVal_QList);
    }
}

// Base class handler implementation
int KWordMacroExpander_QBaseExpandEscapedMacro(KWordMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal) {
    auto* vkwordmacroexpander = dynamic_cast<VirtualKWordMacroExpander*>(self);
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QList<QString> retVal_QList;
    retVal_QList.reserve(retVal.len);
    libqt_string* retVal_arr = static_cast<libqt_string*>(retVal.data);
    for (size_t i = 0; i < retVal.len; ++i) {
        QString retVal_arr_i_QString = QString::fromUtf8(retVal_arr[i].data, retVal_arr[i].len);
        retVal_QList.push_back(retVal_arr_i_QString);
    }
    if (vkwordmacroexpander && vkwordmacroexpander->isVirtualKWordMacroExpander) {
        vkwordmacroexpander->setKWordMacroExpander_ExpandEscapedMacro_IsBase(true);
        return vkwordmacroexpander->expandEscapedMacro(str_QString, static_cast<int>(pos), retVal_QList);
    } else {
        return ((VirtualKWordMacroExpander*)self)->expandEscapedMacro(str_QString, static_cast<int>(pos), retVal_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KWordMacroExpander_OnExpandEscapedMacro(KWordMacroExpander* self, intptr_t slot) {
    auto* vkwordmacroexpander = dynamic_cast<VirtualKWordMacroExpander*>(self);
    if (vkwordmacroexpander && vkwordmacroexpander->isVirtualKWordMacroExpander) {
        vkwordmacroexpander->setKWordMacroExpander_ExpandEscapedMacro_Callback(reinterpret_cast<VirtualKWordMacroExpander::KWordMacroExpander_ExpandEscapedMacro_Callback>(slot));
    }
}

// Derived class handler implementation
bool KWordMacroExpander_ExpandMacro(KWordMacroExpander* self, const libqt_string str, libqt_list /* of libqt_string */ retVal) {
    auto* vkwordmacroexpander = dynamic_cast<VirtualKWordMacroExpander*>(self);
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QList<QString> retVal_QList;
    retVal_QList.reserve(retVal.len);
    libqt_string* retVal_arr = static_cast<libqt_string*>(retVal.data);
    for (size_t i = 0; i < retVal.len; ++i) {
        QString retVal_arr_i_QString = QString::fromUtf8(retVal_arr[i].data, retVal_arr[i].len);
        retVal_QList.push_back(retVal_arr_i_QString);
    }
    if (vkwordmacroexpander && vkwordmacroexpander->isVirtualKWordMacroExpander) {
        return vkwordmacroexpander->expandMacro(str_QString, retVal_QList);
    } else {
        return ((VirtualKWordMacroExpander*)self)->expandMacro(str_QString, retVal_QList);
    }
}

// Base class handler implementation
bool KWordMacroExpander_QBaseExpandMacro(KWordMacroExpander* self, const libqt_string str, libqt_list /* of libqt_string */ retVal) {
    auto* vkwordmacroexpander = dynamic_cast<VirtualKWordMacroExpander*>(self);
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QList<QString> retVal_QList;
    retVal_QList.reserve(retVal.len);
    libqt_string* retVal_arr = static_cast<libqt_string*>(retVal.data);
    for (size_t i = 0; i < retVal.len; ++i) {
        QString retVal_arr_i_QString = QString::fromUtf8(retVal_arr[i].data, retVal_arr[i].len);
        retVal_QList.push_back(retVal_arr_i_QString);
    }
    if (vkwordmacroexpander && vkwordmacroexpander->isVirtualKWordMacroExpander) {
        vkwordmacroexpander->setKWordMacroExpander_ExpandMacro_IsBase(true);
        return vkwordmacroexpander->expandMacro(str_QString, retVal_QList);
    } else {
        return ((VirtualKWordMacroExpander*)self)->expandMacro(str_QString, retVal_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KWordMacroExpander_OnExpandMacro(KWordMacroExpander* self, intptr_t slot) {
    auto* vkwordmacroexpander = dynamic_cast<VirtualKWordMacroExpander*>(self);
    if (vkwordmacroexpander && vkwordmacroexpander->isVirtualKWordMacroExpander) {
        vkwordmacroexpander->setKWordMacroExpander_ExpandMacro_Callback(reinterpret_cast<VirtualKWordMacroExpander::KWordMacroExpander_ExpandMacro_Callback>(slot));
    }
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

// Derived class handler implementation
int KCharMacroExpander_ExpandPlainMacro(KCharMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal) {
    auto* vkcharmacroexpander = dynamic_cast<VirtualKCharMacroExpander*>(self);
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QList<QString> retVal_QList;
    retVal_QList.reserve(retVal.len);
    libqt_string* retVal_arr = static_cast<libqt_string*>(retVal.data);
    for (size_t i = 0; i < retVal.len; ++i) {
        QString retVal_arr_i_QString = QString::fromUtf8(retVal_arr[i].data, retVal_arr[i].len);
        retVal_QList.push_back(retVal_arr_i_QString);
    }
    if (vkcharmacroexpander && vkcharmacroexpander->isVirtualKCharMacroExpander) {
        return vkcharmacroexpander->expandPlainMacro(str_QString, static_cast<int>(pos), retVal_QList);
    } else {
        return ((VirtualKCharMacroExpander*)self)->expandPlainMacro(str_QString, static_cast<int>(pos), retVal_QList);
    }
}

// Base class handler implementation
int KCharMacroExpander_QBaseExpandPlainMacro(KCharMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal) {
    auto* vkcharmacroexpander = dynamic_cast<VirtualKCharMacroExpander*>(self);
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QList<QString> retVal_QList;
    retVal_QList.reserve(retVal.len);
    libqt_string* retVal_arr = static_cast<libqt_string*>(retVal.data);
    for (size_t i = 0; i < retVal.len; ++i) {
        QString retVal_arr_i_QString = QString::fromUtf8(retVal_arr[i].data, retVal_arr[i].len);
        retVal_QList.push_back(retVal_arr_i_QString);
    }
    if (vkcharmacroexpander && vkcharmacroexpander->isVirtualKCharMacroExpander) {
        vkcharmacroexpander->setKCharMacroExpander_ExpandPlainMacro_IsBase(true);
        return vkcharmacroexpander->expandPlainMacro(str_QString, static_cast<int>(pos), retVal_QList);
    } else {
        return ((VirtualKCharMacroExpander*)self)->expandPlainMacro(str_QString, static_cast<int>(pos), retVal_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharMacroExpander_OnExpandPlainMacro(KCharMacroExpander* self, intptr_t slot) {
    auto* vkcharmacroexpander = dynamic_cast<VirtualKCharMacroExpander*>(self);
    if (vkcharmacroexpander && vkcharmacroexpander->isVirtualKCharMacroExpander) {
        vkcharmacroexpander->setKCharMacroExpander_ExpandPlainMacro_Callback(reinterpret_cast<VirtualKCharMacroExpander::KCharMacroExpander_ExpandPlainMacro_Callback>(slot));
    }
}

// Derived class handler implementation
int KCharMacroExpander_ExpandEscapedMacro(KCharMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal) {
    auto* vkcharmacroexpander = dynamic_cast<VirtualKCharMacroExpander*>(self);
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QList<QString> retVal_QList;
    retVal_QList.reserve(retVal.len);
    libqt_string* retVal_arr = static_cast<libqt_string*>(retVal.data);
    for (size_t i = 0; i < retVal.len; ++i) {
        QString retVal_arr_i_QString = QString::fromUtf8(retVal_arr[i].data, retVal_arr[i].len);
        retVal_QList.push_back(retVal_arr_i_QString);
    }
    if (vkcharmacroexpander && vkcharmacroexpander->isVirtualKCharMacroExpander) {
        return vkcharmacroexpander->expandEscapedMacro(str_QString, static_cast<int>(pos), retVal_QList);
    } else {
        return ((VirtualKCharMacroExpander*)self)->expandEscapedMacro(str_QString, static_cast<int>(pos), retVal_QList);
    }
}

// Base class handler implementation
int KCharMacroExpander_QBaseExpandEscapedMacro(KCharMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal) {
    auto* vkcharmacroexpander = dynamic_cast<VirtualKCharMacroExpander*>(self);
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QList<QString> retVal_QList;
    retVal_QList.reserve(retVal.len);
    libqt_string* retVal_arr = static_cast<libqt_string*>(retVal.data);
    for (size_t i = 0; i < retVal.len; ++i) {
        QString retVal_arr_i_QString = QString::fromUtf8(retVal_arr[i].data, retVal_arr[i].len);
        retVal_QList.push_back(retVal_arr_i_QString);
    }
    if (vkcharmacroexpander && vkcharmacroexpander->isVirtualKCharMacroExpander) {
        vkcharmacroexpander->setKCharMacroExpander_ExpandEscapedMacro_IsBase(true);
        return vkcharmacroexpander->expandEscapedMacro(str_QString, static_cast<int>(pos), retVal_QList);
    } else {
        return ((VirtualKCharMacroExpander*)self)->expandEscapedMacro(str_QString, static_cast<int>(pos), retVal_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharMacroExpander_OnExpandEscapedMacro(KCharMacroExpander* self, intptr_t slot) {
    auto* vkcharmacroexpander = dynamic_cast<VirtualKCharMacroExpander*>(self);
    if (vkcharmacroexpander && vkcharmacroexpander->isVirtualKCharMacroExpander) {
        vkcharmacroexpander->setKCharMacroExpander_ExpandEscapedMacro_Callback(reinterpret_cast<VirtualKCharMacroExpander::KCharMacroExpander_ExpandEscapedMacro_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCharMacroExpander_ExpandMacro(KCharMacroExpander* self, QChar* chr, libqt_list /* of libqt_string */ retVal) {
    auto* vkcharmacroexpander = dynamic_cast<VirtualKCharMacroExpander*>(self);
    QList<QString> retVal_QList;
    retVal_QList.reserve(retVal.len);
    libqt_string* retVal_arr = static_cast<libqt_string*>(retVal.data);
    for (size_t i = 0; i < retVal.len; ++i) {
        QString retVal_arr_i_QString = QString::fromUtf8(retVal_arr[i].data, retVal_arr[i].len);
        retVal_QList.push_back(retVal_arr_i_QString);
    }
    if (vkcharmacroexpander && vkcharmacroexpander->isVirtualKCharMacroExpander) {
        return vkcharmacroexpander->expandMacro(*chr, retVal_QList);
    } else {
        return ((VirtualKCharMacroExpander*)self)->expandMacro(*chr, retVal_QList);
    }
}

// Base class handler implementation
bool KCharMacroExpander_QBaseExpandMacro(KCharMacroExpander* self, QChar* chr, libqt_list /* of libqt_string */ retVal) {
    auto* vkcharmacroexpander = dynamic_cast<VirtualKCharMacroExpander*>(self);
    QList<QString> retVal_QList;
    retVal_QList.reserve(retVal.len);
    libqt_string* retVal_arr = static_cast<libqt_string*>(retVal.data);
    for (size_t i = 0; i < retVal.len; ++i) {
        QString retVal_arr_i_QString = QString::fromUtf8(retVal_arr[i].data, retVal_arr[i].len);
        retVal_QList.push_back(retVal_arr_i_QString);
    }
    if (vkcharmacroexpander && vkcharmacroexpander->isVirtualKCharMacroExpander) {
        vkcharmacroexpander->setKCharMacroExpander_ExpandMacro_IsBase(true);
        return vkcharmacroexpander->expandMacro(*chr, retVal_QList);
    } else {
        return ((VirtualKCharMacroExpander*)self)->expandMacro(*chr, retVal_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharMacroExpander_OnExpandMacro(KCharMacroExpander* self, intptr_t slot) {
    auto* vkcharmacroexpander = dynamic_cast<VirtualKCharMacroExpander*>(self);
    if (vkcharmacroexpander && vkcharmacroexpander->isVirtualKCharMacroExpander) {
        vkcharmacroexpander->setKCharMacroExpander_ExpandMacro_Callback(reinterpret_cast<VirtualKCharMacroExpander::KCharMacroExpander_ExpandMacro_Callback>(slot));
    }
}

void KCharMacroExpander_Delete(KCharMacroExpander* self) {
    delete self;
}

libqt_string KMacroExpander_ExpandMacros(const libqt_string param1, const libqt_map /* of QChar* to libqt_string */ param2, QChar* param3) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QHash<QChar, QString> param2_QMap;
    param2_QMap.reserve(param2.len);
    QChar** param2_karr = static_cast<QChar**>(param2.keys);
    libqt_string* param2_varr = static_cast<libqt_string*>(param2.values);
    for (size_t i = 0; i < param2.len; ++i) {
        QString param2_varr_i_QString = QString::fromUtf8(param2_varr[i].data, param2_varr[i].len);
        param2_QMap[*(param2_karr[i])] = param2_varr_i_QString;
    }
    QString _ret = KMacroExpander::expandMacros(param1_QString, param2_QMap, *param3);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KMacroExpander_ExpandMacrosShellQuote(const libqt_string param1, const libqt_map /* of QChar* to libqt_string */ param2, QChar* param3) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QHash<QChar, QString> param2_QMap;
    param2_QMap.reserve(param2.len);
    QChar** param2_karr = static_cast<QChar**>(param2.keys);
    libqt_string* param2_varr = static_cast<libqt_string*>(param2.values);
    for (size_t i = 0; i < param2.len; ++i) {
        QString param2_varr_i_QString = QString::fromUtf8(param2_varr[i].data, param2_varr[i].len);
        param2_QMap[*(param2_karr[i])] = param2_varr_i_QString;
    }
    QString _ret = KMacroExpander::expandMacrosShellQuote(param1_QString, param2_QMap, *param3);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KMacroExpander_ExpandMacros2(const libqt_string param1, const libqt_map /* of libqt_string to libqt_string */ param2, QChar* param3) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QHash<QString, QString> param2_QMap;
    param2_QMap.reserve(param2.len);
    libqt_string* param2_karr = static_cast<libqt_string*>(param2.keys);
    libqt_string* param2_varr = static_cast<libqt_string*>(param2.values);
    for (size_t i = 0; i < param2.len; ++i) {
        QString param2_karr_i_QString = QString::fromUtf8(param2_karr[i].data, param2_karr[i].len);
        QString param2_varr_i_QString = QString::fromUtf8(param2_varr[i].data, param2_varr[i].len);
        param2_QMap[param2_karr_i_QString] = param2_varr_i_QString;
    }
    QString _ret = KMacroExpander::expandMacros(param1_QString, param2_QMap, *param3);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KMacroExpander_ExpandMacrosShellQuote2(const libqt_string param1, const libqt_map /* of libqt_string to libqt_string */ param2, QChar* param3) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QHash<QString, QString> param2_QMap;
    param2_QMap.reserve(param2.len);
    libqt_string* param2_karr = static_cast<libqt_string*>(param2.keys);
    libqt_string* param2_varr = static_cast<libqt_string*>(param2.values);
    for (size_t i = 0; i < param2.len; ++i) {
        QString param2_karr_i_QString = QString::fromUtf8(param2_karr[i].data, param2_karr[i].len);
        QString param2_varr_i_QString = QString::fromUtf8(param2_varr[i].data, param2_varr[i].len);
        param2_QMap[param2_karr_i_QString] = param2_varr_i_QString;
    }
    QString _ret = KMacroExpander::expandMacrosShellQuote(param1_QString, param2_QMap, *param3);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KMacroExpander_ExpandMacros3(const libqt_string param1, const libqt_map /* of QChar* to libqt_list  of libqt_string  */ param2, QChar* param3) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QHash<QChar, QList<QString>> param2_QMap;
    param2_QMap.reserve(param2.len);
    QChar** param2_karr = static_cast<QChar**>(param2.keys);
    libqt_list /* of libqt_string */* param2_varr = static_cast<libqt_list /* of libqt_string */*>(param2.values);
    for (size_t i = 0; i < param2.len; ++i) {
        QList<QString> param2_varr_i_QList;
        param2_varr_i_QList.reserve(param2_varr[i].len);
        libqt_string* param2_varr_i_arr = static_cast<libqt_string*>(param2_varr[i].data);
        for (size_t i = 0; i < param2_varr[i].len; ++i) {
            QString param2_varr_i_arr_i_QString = QString::fromUtf8(param2_varr_i_arr[i].data, param2_varr_i_arr[i].len);
            param2_varr_i_QList.push_back(param2_varr_i_arr_i_QString);
        }
        param2_QMap[*(param2_karr[i])] = param2_varr_i_QList;
    }
    QString _ret = KMacroExpander::expandMacros(param1_QString, param2_QMap, *param3);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KMacroExpander_ExpandMacros4(const libqt_string param1, const libqt_map /* of libqt_string to libqt_list  of libqt_string  */ param2, QChar* param3) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QHash<QString, QList<QString>> param2_QMap;
    param2_QMap.reserve(param2.len);
    libqt_string* param2_karr = static_cast<libqt_string*>(param2.keys);
    libqt_list /* of libqt_string */* param2_varr = static_cast<libqt_list /* of libqt_string */*>(param2.values);
    for (size_t i = 0; i < param2.len; ++i) {
        QString param2_karr_i_QString = QString::fromUtf8(param2_karr[i].data, param2_karr[i].len);
        QList<QString> param2_varr_i_QList;
        param2_varr_i_QList.reserve(param2_varr[i].len);
        libqt_string* param2_varr_i_arr = static_cast<libqt_string*>(param2_varr[i].data);
        for (size_t i = 0; i < param2_varr[i].len; ++i) {
            QString param2_varr_i_arr_i_QString = QString::fromUtf8(param2_varr_i_arr[i].data, param2_varr_i_arr[i].len);
            param2_varr_i_QList.push_back(param2_varr_i_arr_i_QString);
        }
        param2_QMap[param2_karr_i_QString] = param2_varr_i_QList;
    }
    QString _ret = KMacroExpander::expandMacros(param1_QString, param2_QMap, *param3);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KMacroExpander_ExpandMacrosShellQuote3(const libqt_string param1, const libqt_map /* of QChar* to libqt_list  of libqt_string  */ param2, QChar* param3) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QHash<QChar, QList<QString>> param2_QMap;
    param2_QMap.reserve(param2.len);
    QChar** param2_karr = static_cast<QChar**>(param2.keys);
    libqt_list /* of libqt_string */* param2_varr = static_cast<libqt_list /* of libqt_string */*>(param2.values);
    for (size_t i = 0; i < param2.len; ++i) {
        QList<QString> param2_varr_i_QList;
        param2_varr_i_QList.reserve(param2_varr[i].len);
        libqt_string* param2_varr_i_arr = static_cast<libqt_string*>(param2_varr[i].data);
        for (size_t i = 0; i < param2_varr[i].len; ++i) {
            QString param2_varr_i_arr_i_QString = QString::fromUtf8(param2_varr_i_arr[i].data, param2_varr_i_arr[i].len);
            param2_varr_i_QList.push_back(param2_varr_i_arr_i_QString);
        }
        param2_QMap[*(param2_karr[i])] = param2_varr_i_QList;
    }
    QString _ret = KMacroExpander::expandMacrosShellQuote(param1_QString, param2_QMap, *param3);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KMacroExpander_ExpandMacrosShellQuote4(const libqt_string param1, const libqt_map /* of libqt_string to libqt_list  of libqt_string  */ param2, QChar* param3) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QHash<QString, QList<QString>> param2_QMap;
    param2_QMap.reserve(param2.len);
    libqt_string* param2_karr = static_cast<libqt_string*>(param2.keys);
    libqt_list /* of libqt_string */* param2_varr = static_cast<libqt_list /* of libqt_string */*>(param2.values);
    for (size_t i = 0; i < param2.len; ++i) {
        QString param2_karr_i_QString = QString::fromUtf8(param2_karr[i].data, param2_karr[i].len);
        QList<QString> param2_varr_i_QList;
        param2_varr_i_QList.reserve(param2_varr[i].len);
        libqt_string* param2_varr_i_arr = static_cast<libqt_string*>(param2_varr[i].data);
        for (size_t i = 0; i < param2_varr[i].len; ++i) {
            QString param2_varr_i_arr_i_QString = QString::fromUtf8(param2_varr_i_arr[i].data, param2_varr_i_arr[i].len);
            param2_varr_i_QList.push_back(param2_varr_i_arr_i_QString);
        }
        param2_QMap[param2_karr_i_QString] = param2_varr_i_QList;
    }
    QString _ret = KMacroExpander::expandMacrosShellQuote(param1_QString, param2_QMap, *param3);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}
