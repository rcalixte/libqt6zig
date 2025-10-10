#include <KCompletion>
#include <KCompletionMatches>
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
#include <kcompletion.h>
#include "libkcompletion.h"
#include "libkcompletion.hxx"

KCompletion* KCompletion_new() {
    return new VirtualKCompletion();
}

QMetaObject* KCompletion_MetaObject(const KCompletion* self) {
    return (QMetaObject*)self->metaObject();
}

void* KCompletion_Metacast(KCompletion* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KCompletion_Metacall(KCompletion* self, int param1, int param2, void** param3) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKCompletion*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KCompletion_Tr(const char* s) {
    QString _ret = KCompletion::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KCompletion_SubstringCompletion(const KCompletion* self, const libqt_string stringVal) {
    QString stringVal_QString = QString::fromUtf8(stringVal.data, stringVal.len);
    QList<QString> _ret = self->substringCompletion(stringVal_QString);
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

libqt_string KCompletion_LastMatch(const KCompletion* self) {
    auto* vkcompletion = dynamic_cast<const VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        const QString _ret = self->lastMatch();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        const QString _ret = ((VirtualKCompletion*)self)->lastMatch();
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

libqt_list /* of libqt_string */ KCompletion_Items(const KCompletion* self) {
    QList<QString> _ret = self->items();
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

bool KCompletion_IsEmpty(const KCompletion* self) {
    return self->isEmpty();
}

void KCompletion_SetCompletionMode(KCompletion* self, int mode) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        self->setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    } else {
        ((VirtualKCompletion*)self)->setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    }
}

int KCompletion_CompletionMode(const KCompletion* self) {
    return static_cast<int>(self->completionMode());
}

void KCompletion_SetOrder(KCompletion* self, int order) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        self->setOrder(static_cast<KCompletion::CompOrder>(order));
    } else {
        ((VirtualKCompletion*)self)->setOrder(static_cast<KCompletion::CompOrder>(order));
    }
}

int KCompletion_Order(const KCompletion* self) {
    return static_cast<int>(self->order());
}

void KCompletion_SetIgnoreCase(KCompletion* self, bool ignoreCase) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        self->setIgnoreCase(ignoreCase);
    } else {
        ((VirtualKCompletion*)self)->setIgnoreCase(ignoreCase);
    }
}

bool KCompletion_IgnoreCase(const KCompletion* self) {
    return self->ignoreCase();
}

bool KCompletion_ShouldAutoSuggest(const KCompletion* self) {
    return self->shouldAutoSuggest();
}

libqt_list /* of libqt_string */ KCompletion_AllMatches(KCompletion* self) {
    QList<QString> _ret = self->allMatches();
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

libqt_list /* of libqt_string */ KCompletion_AllMatches2(KCompletion* self, const libqt_string stringVal) {
    QString stringVal_QString = QString::fromUtf8(stringVal.data, stringVal.len);
    QList<QString> _ret = self->allMatches(stringVal_QString);
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

KCompletionMatches* KCompletion_AllWeightedMatches(KCompletion* self) {
    return new KCompletionMatches(self->allWeightedMatches());
}

KCompletionMatches* KCompletion_AllWeightedMatches2(KCompletion* self, const libqt_string stringVal) {
    QString stringVal_QString = QString::fromUtf8(stringVal.data, stringVal.len);
    return new KCompletionMatches(self->allWeightedMatches(stringVal_QString));
}

void KCompletion_SetSoundsEnabled(KCompletion* self, bool enable) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        self->setSoundsEnabled(enable);
    } else {
        ((VirtualKCompletion*)self)->setSoundsEnabled(enable);
    }
}

bool KCompletion_SoundsEnabled(const KCompletion* self) {
    return self->soundsEnabled();
}

bool KCompletion_HasMultipleMatches(const KCompletion* self) {
    return self->hasMultipleMatches();
}

libqt_string KCompletion_MakeCompletion(KCompletion* self, const libqt_string stringVal) {
    QString stringVal_QString = QString::fromUtf8(stringVal.data, stringVal.len);
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        QString _ret = self->makeCompletion(stringVal_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKCompletion*)self)->makeCompletion(stringVal_QString);
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

libqt_string KCompletion_PreviousMatch(KCompletion* self) {
    QString _ret = self->previousMatch();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KCompletion_NextMatch(KCompletion* self) {
    QString _ret = self->nextMatch();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KCompletion_InsertItems(KCompletion* self, const libqt_list /* of libqt_string */ items) {
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    self->insertItems(items_QList);
}

void KCompletion_SetItems(KCompletion* self, const libqt_list /* of libqt_string */ itemList) {
    QList<QString> itemList_QList;
    itemList_QList.reserve(itemList.len);
    libqt_string* itemList_arr = static_cast<libqt_string*>(itemList.data);
    for (size_t i = 0; i < itemList.len; ++i) {
        QString itemList_arr_i_QString = QString::fromUtf8(itemList_arr[i].data, itemList_arr[i].len);
        itemList_QList.push_back(itemList_arr_i_QString);
    }
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        self->setItems(itemList_QList);
    } else {
        ((VirtualKCompletion*)self)->setItems(itemList_QList);
    }
}

void KCompletion_AddItem(KCompletion* self, const libqt_string item) {
    QString item_QString = QString::fromUtf8(item.data, item.len);
    self->addItem(item_QString);
}

void KCompletion_AddItem2(KCompletion* self, const libqt_string item, unsigned int weight) {
    QString item_QString = QString::fromUtf8(item.data, item.len);
    self->addItem(item_QString, static_cast<uint>(weight));
}

void KCompletion_RemoveItem(KCompletion* self, const libqt_string item) {
    QString item_QString = QString::fromUtf8(item.data, item.len);
    self->removeItem(item_QString);
}

void KCompletion_Clear(KCompletion* self) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        self->clear();
    } else {
        ((VirtualKCompletion*)self)->clear();
    }
}

void KCompletion_Match(KCompletion* self, const libqt_string item) {
    QString item_QString = QString::fromUtf8(item.data, item.len);
    self->match(item_QString);
}

void KCompletion_Connect_Match(KCompletion* self, intptr_t slot) {
    void (*slotFunc)(KCompletion*, const char*) = reinterpret_cast<void (*)(KCompletion*, const char*)>(slot);
    KCompletion::connect(self, &KCompletion::match, [self, slotFunc](const QString& item) {
        const QString item_ret = item;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray item_b = item_ret.toUtf8();
        const char* item_str = static_cast<const char*>(malloc(item_b.length() + 1));
        memcpy((void*)item_str, item_b.data(), item_b.length());
        ((char*)item_str)[item_b.length()] = '\0';
        const char* sigval1 = item_str;
        slotFunc(self, sigval1);
        libqt_free(item_str);
    });
}

void KCompletion_Matches(KCompletion* self, const libqt_list /* of libqt_string */ matchlist) {
    QList<QString> matchlist_QList;
    matchlist_QList.reserve(matchlist.len);
    libqt_string* matchlist_arr = static_cast<libqt_string*>(matchlist.data);
    for (size_t i = 0; i < matchlist.len; ++i) {
        QString matchlist_arr_i_QString = QString::fromUtf8(matchlist_arr[i].data, matchlist_arr[i].len);
        matchlist_QList.push_back(matchlist_arr_i_QString);
    }
    self->matches(matchlist_QList);
}

void KCompletion_Connect_Matches(KCompletion* self, intptr_t slot) {
    void (*slotFunc)(KCompletion*, const char**) = reinterpret_cast<void (*)(KCompletion*, const char**)>(slot);
    KCompletion::connect(self, &KCompletion::matches, [self, slotFunc](const QList<QString>& matchlist) {
        const QList<QString>& matchlist_ret = matchlist;
        // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
        const char** matchlist_arr = static_cast<const char**>(malloc(sizeof(const char*) * (matchlist_ret.size() + 1)));
        for (qsizetype i = 0; i < matchlist_ret.size(); ++i) {
            QByteArray matchlist_b = matchlist_ret[i].toUtf8();
            char* matchlist_str = static_cast<char*>(malloc(matchlist_b.length() + 1));
            memcpy(matchlist_str, matchlist_b.data(), matchlist_b.length());
            matchlist_str[matchlist_b.length()] = '\0';
            matchlist_arr[i] = matchlist_str;
        }
        // Append sentinel null terminator to the list
        matchlist_arr[matchlist_ret.size()] = nullptr;
        const char** sigval1 = matchlist_arr;
        slotFunc(self, sigval1);
        free(matchlist_arr);
    });
}

void KCompletion_MultipleMatches(KCompletion* self) {
    self->multipleMatches();
}

void KCompletion_Connect_MultipleMatches(KCompletion* self, intptr_t slot) {
    void (*slotFunc)(KCompletion*) = reinterpret_cast<void (*)(KCompletion*)>(slot);
    KCompletion::connect(self, &KCompletion::multipleMatches, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KCompletion_PostProcessMatches(const KCompletion* self, libqt_list /* of libqt_string */ matchList) {
    QList<QString> matchList_QList;
    matchList_QList.reserve(matchList.len);
    libqt_string* matchList_arr = static_cast<libqt_string*>(matchList.data);
    for (size_t i = 0; i < matchList.len; ++i) {
        QString matchList_arr_i_QString = QString::fromUtf8(matchList_arr[i].data, matchList_arr[i].len);
        matchList_QList.push_back(matchList_arr_i_QString);
    }
    auto* vkcompletion = dynamic_cast<const VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->postProcessMatches(&matchList_QList);
    }
}

void KCompletion_PostProcessMatches2(const KCompletion* self, KCompletionMatches* matches) {
    auto* vkcompletion = dynamic_cast<const VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->postProcessMatches(matches);
    }
}

libqt_string KCompletion_Tr2(const char* s, const char* c) {
    QString _ret = KCompletion::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KCompletion_Tr3(const char* s, const char* c, int n) {
    QString _ret = KCompletion::tr(s, c, static_cast<int>(n));
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
int KCompletion_QBaseMetacall(KCompletion* self, int param1, int param2, void** param3) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_Metacall_IsBase(true);
        return vkcompletion->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KCompletion::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnMetacall(KCompletion* self, intptr_t slot) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_Metacall_Callback(reinterpret_cast<VirtualKCompletion::KCompletion_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string KCompletion_QBaseLastMatch(const KCompletion* self) {
    auto* vkcompletion = const_cast<VirtualKCompletion*>(dynamic_cast<const VirtualKCompletion*>(self));
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_LastMatch_IsBase(true);
        const QString _ret = vkcompletion->lastMatch();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        const QString _ret = self->KCompletion::lastMatch();
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
void KCompletion_OnLastMatch(const KCompletion* self, intptr_t slot) {
    auto* vkcompletion = const_cast<VirtualKCompletion*>(dynamic_cast<const VirtualKCompletion*>(self));
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_LastMatch_Callback(reinterpret_cast<VirtualKCompletion::KCompletion_LastMatch_Callback>(slot));
    }
}

// Base class handler implementation
void KCompletion_QBaseSetCompletionMode(KCompletion* self, int mode) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_SetCompletionMode_IsBase(true);
        vkcompletion->setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    } else {
        self->KCompletion::setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnSetCompletionMode(KCompletion* self, intptr_t slot) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_SetCompletionMode_Callback(reinterpret_cast<VirtualKCompletion::KCompletion_SetCompletionMode_Callback>(slot));
    }
}

// Base class handler implementation
void KCompletion_QBaseSetOrder(KCompletion* self, int order) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_SetOrder_IsBase(true);
        vkcompletion->setOrder(static_cast<KCompletion::CompOrder>(order));
    } else {
        self->KCompletion::setOrder(static_cast<KCompletion::CompOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnSetOrder(KCompletion* self, intptr_t slot) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_SetOrder_Callback(reinterpret_cast<VirtualKCompletion::KCompletion_SetOrder_Callback>(slot));
    }
}

// Base class handler implementation
void KCompletion_QBaseSetIgnoreCase(KCompletion* self, bool ignoreCase) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_SetIgnoreCase_IsBase(true);
        vkcompletion->setIgnoreCase(ignoreCase);
    } else {
        self->KCompletion::setIgnoreCase(ignoreCase);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnSetIgnoreCase(KCompletion* self, intptr_t slot) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_SetIgnoreCase_Callback(reinterpret_cast<VirtualKCompletion::KCompletion_SetIgnoreCase_Callback>(slot));
    }
}

// Base class handler implementation
void KCompletion_QBaseSetSoundsEnabled(KCompletion* self, bool enable) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_SetSoundsEnabled_IsBase(true);
        vkcompletion->setSoundsEnabled(enable);
    } else {
        self->KCompletion::setSoundsEnabled(enable);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnSetSoundsEnabled(KCompletion* self, intptr_t slot) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_SetSoundsEnabled_Callback(reinterpret_cast<VirtualKCompletion::KCompletion_SetSoundsEnabled_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string KCompletion_QBaseMakeCompletion(KCompletion* self, const libqt_string stringVal) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    QString stringVal_QString = QString::fromUtf8(stringVal.data, stringVal.len);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_MakeCompletion_IsBase(true);
        QString _ret = vkcompletion->makeCompletion(stringVal_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KCompletion::makeCompletion(stringVal_QString);
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
void KCompletion_OnMakeCompletion(KCompletion* self, intptr_t slot) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_MakeCompletion_Callback(reinterpret_cast<VirtualKCompletion::KCompletion_MakeCompletion_Callback>(slot));
    }
}

// Base class handler implementation
void KCompletion_QBaseSetItems(KCompletion* self, const libqt_list /* of libqt_string */ itemList) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    QList<QString> itemList_QList;
    itemList_QList.reserve(itemList.len);
    libqt_string* itemList_arr = static_cast<libqt_string*>(itemList.data);
    for (size_t i = 0; i < itemList.len; ++i) {
        QString itemList_arr_i_QString = QString::fromUtf8(itemList_arr[i].data, itemList_arr[i].len);
        itemList_QList.push_back(itemList_arr_i_QString);
    }
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_SetItems_IsBase(true);
        vkcompletion->setItems(itemList_QList);
    } else {
        self->KCompletion::setItems(itemList_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnSetItems(KCompletion* self, intptr_t slot) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_SetItems_Callback(reinterpret_cast<VirtualKCompletion::KCompletion_SetItems_Callback>(slot));
    }
}

// Base class handler implementation
void KCompletion_QBaseClear(KCompletion* self) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_Clear_IsBase(true);
        vkcompletion->clear();
    } else {
        self->KCompletion::clear();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnClear(KCompletion* self, intptr_t slot) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_Clear_Callback(reinterpret_cast<VirtualKCompletion::KCompletion_Clear_Callback>(slot));
    }
}

// Base class handler implementation
void KCompletion_QBasePostProcessMatches(const KCompletion* self, libqt_list /* of libqt_string */ matchList) {
    auto* vkcompletion = const_cast<VirtualKCompletion*>(dynamic_cast<const VirtualKCompletion*>(self));
    QList<QString> matchList_QList;
    matchList_QList.reserve(matchList.len);
    libqt_string* matchList_arr = static_cast<libqt_string*>(matchList.data);
    for (size_t i = 0; i < matchList.len; ++i) {
        QString matchList_arr_i_QString = QString::fromUtf8(matchList_arr[i].data, matchList_arr[i].len);
        matchList_QList.push_back(matchList_arr_i_QString);
    }
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_PostProcessMatches_IsBase(true);
        vkcompletion->postProcessMatches(&matchList_QList);
    } else {
        ((VirtualKCompletion*)self)->postProcessMatches(&matchList_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnPostProcessMatches(const KCompletion* self, intptr_t slot) {
    auto* vkcompletion = const_cast<VirtualKCompletion*>(dynamic_cast<const VirtualKCompletion*>(self));
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_PostProcessMatches_Callback(reinterpret_cast<VirtualKCompletion::KCompletion_PostProcessMatches_Callback>(slot));
    }
}

// Base class handler implementation
void KCompletion_QBasePostProcessMatches2(const KCompletion* self, KCompletionMatches* matches) {
    auto* vkcompletion = const_cast<VirtualKCompletion*>(dynamic_cast<const VirtualKCompletion*>(self));
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_PostProcessMatches2_IsBase(true);
        vkcompletion->postProcessMatches(matches);
    } else {
        ((VirtualKCompletion*)self)->postProcessMatches(matches);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnPostProcessMatches2(const KCompletion* self, intptr_t slot) {
    auto* vkcompletion = const_cast<VirtualKCompletion*>(dynamic_cast<const VirtualKCompletion*>(self));
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_PostProcessMatches2_Callback(reinterpret_cast<VirtualKCompletion::KCompletion_PostProcessMatches2_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCompletion_Event(KCompletion* self, QEvent* event) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        return vkcompletion->event(event);
    } else {
        return self->KCompletion::event(event);
    }
}

// Base class handler implementation
bool KCompletion_QBaseEvent(KCompletion* self, QEvent* event) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_Event_IsBase(true);
        return vkcompletion->event(event);
    } else {
        return self->KCompletion::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnEvent(KCompletion* self, intptr_t slot) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_Event_Callback(reinterpret_cast<VirtualKCompletion::KCompletion_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCompletion_EventFilter(KCompletion* self, QObject* watched, QEvent* event) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        return vkcompletion->eventFilter(watched, event);
    } else {
        return self->KCompletion::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KCompletion_QBaseEventFilter(KCompletion* self, QObject* watched, QEvent* event) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_EventFilter_IsBase(true);
        return vkcompletion->eventFilter(watched, event);
    } else {
        return self->KCompletion::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnEventFilter(KCompletion* self, intptr_t slot) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_EventFilter_Callback(reinterpret_cast<VirtualKCompletion::KCompletion_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletion_TimerEvent(KCompletion* self, QTimerEvent* event) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->timerEvent(event);
    } else {
        ((VirtualKCompletion*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KCompletion_QBaseTimerEvent(KCompletion* self, QTimerEvent* event) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_TimerEvent_IsBase(true);
        vkcompletion->timerEvent(event);
    } else {
        ((VirtualKCompletion*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnTimerEvent(KCompletion* self, intptr_t slot) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_TimerEvent_Callback(reinterpret_cast<VirtualKCompletion::KCompletion_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletion_ChildEvent(KCompletion* self, QChildEvent* event) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->childEvent(event);
    } else {
        ((VirtualKCompletion*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KCompletion_QBaseChildEvent(KCompletion* self, QChildEvent* event) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_ChildEvent_IsBase(true);
        vkcompletion->childEvent(event);
    } else {
        ((VirtualKCompletion*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnChildEvent(KCompletion* self, intptr_t slot) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_ChildEvent_Callback(reinterpret_cast<VirtualKCompletion::KCompletion_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletion_CustomEvent(KCompletion* self, QEvent* event) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->customEvent(event);
    } else {
        ((VirtualKCompletion*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KCompletion_QBaseCustomEvent(KCompletion* self, QEvent* event) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_CustomEvent_IsBase(true);
        vkcompletion->customEvent(event);
    } else {
        ((VirtualKCompletion*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnCustomEvent(KCompletion* self, intptr_t slot) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_CustomEvent_Callback(reinterpret_cast<VirtualKCompletion::KCompletion_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletion_ConnectNotify(KCompletion* self, const QMetaMethod* signal) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->connectNotify(*signal);
    } else {
        ((VirtualKCompletion*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KCompletion_QBaseConnectNotify(KCompletion* self, const QMetaMethod* signal) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_ConnectNotify_IsBase(true);
        vkcompletion->connectNotify(*signal);
    } else {
        ((VirtualKCompletion*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnConnectNotify(KCompletion* self, intptr_t slot) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_ConnectNotify_Callback(reinterpret_cast<VirtualKCompletion::KCompletion_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletion_DisconnectNotify(KCompletion* self, const QMetaMethod* signal) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->disconnectNotify(*signal);
    } else {
        ((VirtualKCompletion*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KCompletion_QBaseDisconnectNotify(KCompletion* self, const QMetaMethod* signal) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_DisconnectNotify_IsBase(true);
        vkcompletion->disconnectNotify(*signal);
    } else {
        ((VirtualKCompletion*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnDisconnectNotify(KCompletion* self, intptr_t slot) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_DisconnectNotify_Callback(reinterpret_cast<VirtualKCompletion::KCompletion_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletion_SetShouldAutoSuggest(KCompletion* self, bool shouldAutosuggest) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setShouldAutoSuggest(shouldAutosuggest);
    } else {
        ((VirtualKCompletion*)self)->setShouldAutoSuggest(shouldAutosuggest);
    }
}

// Base class handler implementation
void KCompletion_QBaseSetShouldAutoSuggest(KCompletion* self, bool shouldAutosuggest) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_SetShouldAutoSuggest_IsBase(true);
        vkcompletion->setShouldAutoSuggest(shouldAutosuggest);
    } else {
        ((VirtualKCompletion*)self)->setShouldAutoSuggest(shouldAutosuggest);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnSetShouldAutoSuggest(KCompletion* self, intptr_t slot) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_SetShouldAutoSuggest_Callback(reinterpret_cast<VirtualKCompletion::KCompletion_SetShouldAutoSuggest_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KCompletion_Sender(const KCompletion* self) {
    auto* vkcompletion = const_cast<VirtualKCompletion*>(dynamic_cast<const VirtualKCompletion*>(self));
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        return vkcompletion->sender();
    } else {
        return ((VirtualKCompletion*)self)->sender();
    }
}

// Base class handler implementation
QObject* KCompletion_QBaseSender(const KCompletion* self) {
    auto* vkcompletion = const_cast<VirtualKCompletion*>(dynamic_cast<const VirtualKCompletion*>(self));
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_Sender_IsBase(true);
        return vkcompletion->sender();
    } else {
        return ((VirtualKCompletion*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnSender(const KCompletion* self, intptr_t slot) {
    auto* vkcompletion = const_cast<VirtualKCompletion*>(dynamic_cast<const VirtualKCompletion*>(self));
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_Sender_Callback(reinterpret_cast<VirtualKCompletion::KCompletion_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KCompletion_SenderSignalIndex(const KCompletion* self) {
    auto* vkcompletion = const_cast<VirtualKCompletion*>(dynamic_cast<const VirtualKCompletion*>(self));
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        return vkcompletion->senderSignalIndex();
    } else {
        return ((VirtualKCompletion*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KCompletion_QBaseSenderSignalIndex(const KCompletion* self) {
    auto* vkcompletion = const_cast<VirtualKCompletion*>(dynamic_cast<const VirtualKCompletion*>(self));
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_SenderSignalIndex_IsBase(true);
        return vkcompletion->senderSignalIndex();
    } else {
        return ((VirtualKCompletion*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnSenderSignalIndex(const KCompletion* self, intptr_t slot) {
    auto* vkcompletion = const_cast<VirtualKCompletion*>(dynamic_cast<const VirtualKCompletion*>(self));
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_SenderSignalIndex_Callback(reinterpret_cast<VirtualKCompletion::KCompletion_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KCompletion_Receivers(const KCompletion* self, const char* signal) {
    auto* vkcompletion = const_cast<VirtualKCompletion*>(dynamic_cast<const VirtualKCompletion*>(self));
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        return vkcompletion->receivers(signal);
    } else {
        return ((VirtualKCompletion*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KCompletion_QBaseReceivers(const KCompletion* self, const char* signal) {
    auto* vkcompletion = const_cast<VirtualKCompletion*>(dynamic_cast<const VirtualKCompletion*>(self));
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_Receivers_IsBase(true);
        return vkcompletion->receivers(signal);
    } else {
        return ((VirtualKCompletion*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnReceivers(const KCompletion* self, intptr_t slot) {
    auto* vkcompletion = const_cast<VirtualKCompletion*>(dynamic_cast<const VirtualKCompletion*>(self));
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_Receivers_Callback(reinterpret_cast<VirtualKCompletion::KCompletion_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCompletion_IsSignalConnected(const KCompletion* self, const QMetaMethod* signal) {
    auto* vkcompletion = const_cast<VirtualKCompletion*>(dynamic_cast<const VirtualKCompletion*>(self));
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        return vkcompletion->isSignalConnected(*signal);
    } else {
        return ((VirtualKCompletion*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KCompletion_QBaseIsSignalConnected(const KCompletion* self, const QMetaMethod* signal) {
    auto* vkcompletion = const_cast<VirtualKCompletion*>(dynamic_cast<const VirtualKCompletion*>(self));
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_IsSignalConnected_IsBase(true);
        return vkcompletion->isSignalConnected(*signal);
    } else {
        return ((VirtualKCompletion*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnIsSignalConnected(const KCompletion* self, intptr_t slot) {
    auto* vkcompletion = const_cast<VirtualKCompletion*>(dynamic_cast<const VirtualKCompletion*>(self));
    if (vkcompletion && vkcompletion->isVirtualKCompletion) {
        vkcompletion->setKCompletion_IsSignalConnected_Callback(reinterpret_cast<VirtualKCompletion::KCompletion_IsSignalConnected_Callback>(slot));
    }
}

void KCompletion_Delete(KCompletion* self) {
    delete self;
}
