#include <KCompletion>
#include <KCompletionMatches>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KCompletion_Tr(const char* s) {
    auto _ret = KCompletion::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KCompletion_SubstringCompletion(const KCompletion* self, const libqt_string string) {
    QString string_QString = QString::fromUtf8(string.data, string.len);
    QList<QString> _ret = self->substringCompletion(string_QString);
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

libqt_string KCompletion_LastMatch(const KCompletion* self) {
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

libqt_list /* of libqt_string */ KCompletion_Items(const KCompletion* self) {
    QList<QString> _ret = self->items();
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

bool KCompletion_IsEmpty(const KCompletion* self) {
    return self->isEmpty();
}

void KCompletion_SetCompletionMode(KCompletion* self, int mode) {
    self->setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
}

int KCompletion_CompletionMode(const KCompletion* self) {
    return static_cast<int>(self->completionMode());
}

void KCompletion_SetOrder(KCompletion* self, int order) {
    self->setOrder(static_cast<KCompletion::CompOrder>(order));
}

int KCompletion_Order(const KCompletion* self) {
    return static_cast<int>(self->order());
}

void KCompletion_SetIgnoreCase(KCompletion* self, bool ignoreCase) {
    self->setIgnoreCase(ignoreCase);
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

libqt_list /* of libqt_string */ KCompletion_AllMatches2(KCompletion* self, const libqt_string string) {
    QString string_QString = QString::fromUtf8(string.data, string.len);
    QList<QString> _ret = self->allMatches(string_QString);
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

KCompletionMatches* KCompletion_AllWeightedMatches(KCompletion* self) {
    return new KCompletionMatches(self->allWeightedMatches());
}

KCompletionMatches* KCompletion_AllWeightedMatches2(KCompletion* self, const libqt_string string) {
    QString string_QString = QString::fromUtf8(string.data, string.len);
    return new KCompletionMatches(self->allWeightedMatches(string_QString));
}

void KCompletion_SetSoundsEnabled(KCompletion* self, bool enable) {
    self->setSoundsEnabled(enable);
}

bool KCompletion_SoundsEnabled(const KCompletion* self) {
    return self->soundsEnabled();
}

bool KCompletion_HasMultipleMatches(const KCompletion* self) {
    return self->hasMultipleMatches();
}

libqt_string KCompletion_MakeCompletion(KCompletion* self, const libqt_string string) {
    QString string_QString = QString::fromUtf8(string.data, string.len);
    auto _ret = self->makeCompletion(string_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KCompletion_PreviousMatch(KCompletion* self) {
    auto _ret = self->previousMatch();
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
    auto _ret = self->nextMatch();
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
    self->setItems(itemList_QList);
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
    self->clear();
}

void KCompletion_Match(KCompletion* self, const libqt_string item) {
    QString item_QString = QString::fromUtf8(item.data, item.len);
    self->match(item_QString);
}

void KCompletion_Connect_Match(KCompletion* self, intptr_t slot) {
    void (*slotFunc)(KCompletion*, const char*) = reinterpret_cast<void (*)(KCompletion*, const char*)>(slot);
    KCompletion::connect(self,
                         static_cast<void (KCompletion::*)(const QString&)>(&KCompletion::match),
                         [self, slotFunc](const QString& item) {
                             const auto item_ret = item;
                             // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                             QByteArray item_b = item_ret.toUtf8();
                             auto item_str_len = item_b.length();
                             const char* item_str = static_cast<const char*>(malloc(item_str_len + 1));
                             memcpy((void*)item_str, item_b.data(), item_str_len);
                             ((char*)item_str)[item_str_len] = '\0';
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
    KCompletion::connect(self,
                         static_cast<void (KCompletion::*)(const QList<QString>&)>(&KCompletion::matches),
                         [self, slotFunc](const QList<QString>& matchlist) {
                             const QList<QString>& matchlist_ret = matchlist;
                             // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
                             const char** matchlist_arr = static_cast<const char**>(malloc(sizeof(const char*) * (matchlist_ret.size() + 1)));
                             for (qsizetype i = 0; i < matchlist_ret.size(); ++i) {
                                 QByteArray matchlist_b = matchlist_ret[i].toUtf8();
                                 auto matchlist_str_len = matchlist_b.length();
                                 char* matchlist_str = static_cast<char*>(malloc(matchlist_str_len + 1));
                                 memcpy(matchlist_str, matchlist_b.data(), matchlist_str_len);
                                 matchlist_str[matchlist_str_len] = '\0';
                                 matchlist_arr[i] = matchlist_str;
                             }
                             // Append sentinel null terminator to the list
                             matchlist_arr[matchlist_ret.size()] = nullptr;
                             const char** sigval1 = matchlist_arr;
                             slotFunc(self, sigval1);
                             libqt_free(matchlist_arr);
                         });
}

void KCompletion_MultipleMatches(KCompletion* self) {
    self->multipleMatches();
}

void KCompletion_Connect_MultipleMatches(KCompletion* self, intptr_t slot) {
    void (*slotFunc)(KCompletion*) = reinterpret_cast<void (*)(KCompletion*)>(slot);
    KCompletion::connect(self,
                         static_cast<void (KCompletion::*)()>(&KCompletion::multipleMatches),
                         [self, slotFunc]() {
                             slotFunc(self);
                         });
}

void KCompletion_PostProcessMatches(const KCompletion* self, libqt_list /* of libqt_string */ matchList) {
    QList<QString>* matchList_QList = new QList<QString>();
    matchList_QList->reserve(matchList.len);
    libqt_string* matchList_arr = static_cast<libqt_string*>(matchList.data);
    for (size_t i = 0; i < matchList.len; ++i) {
        QString matchList_arr_i_QString = QString::fromUtf8(matchList_arr[i].data, matchList_arr[i].len);
        matchList_QList->push_back(matchList_arr_i_QString);
    }
    auto* vkcompletion = dynamic_cast<const VirtualKCompletion*>(self);
    if (vkcompletion) {
        vkcompletion->postProcessMatches(matchList_QList);
    }
}

void KCompletion_PostProcessMatches2(const KCompletion* self, KCompletionMatches* matches) {
    auto* vkcompletion = dynamic_cast<const VirtualKCompletion*>(self);
    if (vkcompletion) {
        vkcompletion->postProcessMatches(matches);
    }
}

libqt_string KCompletion_Tr2(const char* s, const char* c) {
    auto _ret = KCompletion::tr(s, c);
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
    auto _ret = KCompletion::tr(s, c, static_cast<int>(n));
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
QMetaObject* KCompletion_SuperMetaObject(const KCompletion* self) {
    return (QMetaObject*)self->KCompletion::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnMetaObject(KCompletion* self, intptr_t slot) {
    if (auto* vkcompletion = const_cast<VirtualKCompletion*>(dynamic_cast<const VirtualKCompletion*>(self)))
        vkcompletion->kcompletion_metaobject_callback = reinterpret_cast<VirtualKCompletion::KCompletion_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KCompletion_SuperMetacast(KCompletion* self, const char* param1) {
    return self->KCompletion::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnMetacast(KCompletion* self, intptr_t slot) {
    if (auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self))
        vkcompletion->kcompletion_metacast_callback = reinterpret_cast<VirtualKCompletion::KCompletion_Metacast_Callback>(slot);
}

// Base class handler implementation
int KCompletion_SuperMetacall(KCompletion* self, int param1, int param2, void** param3) {
    return self->KCompletion::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnMetacall(KCompletion* self, intptr_t slot) {
    if (auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self))
        vkcompletion->kcompletion_metacall_callback = reinterpret_cast<VirtualKCompletion::KCompletion_Metacall_Callback>(slot);
}

// Base class handler implementation
libqt_string KCompletion_SuperLastMatch(const KCompletion* self) {
    const auto _ret = self->KCompletion::lastMatch();
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
void KCompletion_OnLastMatch(KCompletion* self, intptr_t slot) {
    if (auto* vkcompletion = const_cast<VirtualKCompletion*>(dynamic_cast<const VirtualKCompletion*>(self)))
        vkcompletion->kcompletion_lastmatch_callback = reinterpret_cast<VirtualKCompletion::KCompletion_LastMatch_Callback>(slot);
}

// Base class handler implementation
void KCompletion_SuperSetCompletionMode(KCompletion* self, int mode) {
    self->KCompletion::setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnSetCompletionMode(KCompletion* self, intptr_t slot) {
    if (auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self))
        vkcompletion->kcompletion_setcompletionmode_callback = reinterpret_cast<VirtualKCompletion::KCompletion_SetCompletionMode_Callback>(slot);
}

// Base class handler implementation
void KCompletion_SuperSetOrder(KCompletion* self, int order) {
    self->KCompletion::setOrder(static_cast<KCompletion::CompOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnSetOrder(KCompletion* self, intptr_t slot) {
    if (auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self))
        vkcompletion->kcompletion_setorder_callback = reinterpret_cast<VirtualKCompletion::KCompletion_SetOrder_Callback>(slot);
}

// Base class handler implementation
void KCompletion_SuperSetIgnoreCase(KCompletion* self, bool ignoreCase) {
    self->KCompletion::setIgnoreCase(ignoreCase);
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnSetIgnoreCase(KCompletion* self, intptr_t slot) {
    if (auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self))
        vkcompletion->kcompletion_setignorecase_callback = reinterpret_cast<VirtualKCompletion::KCompletion_SetIgnoreCase_Callback>(slot);
}

// Base class handler implementation
void KCompletion_SuperSetSoundsEnabled(KCompletion* self, bool enable) {
    self->KCompletion::setSoundsEnabled(enable);
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnSetSoundsEnabled(KCompletion* self, intptr_t slot) {
    if (auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self))
        vkcompletion->kcompletion_setsoundsenabled_callback = reinterpret_cast<VirtualKCompletion::KCompletion_SetSoundsEnabled_Callback>(slot);
}

// Base class handler implementation
libqt_string KCompletion_SuperMakeCompletion(KCompletion* self, const libqt_string string) {
    QString string_QString = QString::fromUtf8(string.data, string.len);
    auto _ret = self->KCompletion::makeCompletion(string_QString);
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
void KCompletion_OnMakeCompletion(KCompletion* self, intptr_t slot) {
    if (auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self))
        vkcompletion->kcompletion_makecompletion_callback = reinterpret_cast<VirtualKCompletion::KCompletion_MakeCompletion_Callback>(slot);
}

// Base class handler implementation
void KCompletion_SuperSetItems(KCompletion* self, const libqt_list /* of libqt_string */ itemList) {
    QList<QString> itemList_QList;
    itemList_QList.reserve(itemList.len);
    libqt_string* itemList_arr = static_cast<libqt_string*>(itemList.data);
    for (size_t i = 0; i < itemList.len; ++i) {
        QString itemList_arr_i_QString = QString::fromUtf8(itemList_arr[i].data, itemList_arr[i].len);
        itemList_QList.push_back(itemList_arr_i_QString);
    }
    self->KCompletion::setItems(itemList_QList);
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnSetItems(KCompletion* self, intptr_t slot) {
    if (auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self))
        vkcompletion->kcompletion_setitems_callback = reinterpret_cast<VirtualKCompletion::KCompletion_SetItems_Callback>(slot);
}

// Base class handler implementation
void KCompletion_SuperClear(KCompletion* self) {
    self->KCompletion::clear();
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnClear(KCompletion* self, intptr_t slot) {
    if (auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self))
        vkcompletion->kcompletion_clear_callback = reinterpret_cast<VirtualKCompletion::KCompletion_Clear_Callback>(slot);
}

// Base class handler implementation
void KCompletion_SuperPostProcessMatches(const KCompletion* self, libqt_list /* of libqt_string */ matchList) {
    QList<QString>* matchList_QList = new QList<QString>();
    matchList_QList->reserve(matchList.len);
    libqt_string* matchList_arr = static_cast<libqt_string*>(matchList.data);
    for (size_t i = 0; i < matchList.len; ++i) {
        QString matchList_arr_i_QString = QString::fromUtf8(matchList_arr[i].data, matchList_arr[i].len);
        matchList_QList->push_back(matchList_arr_i_QString);
    }
    if (auto* vkcompletion = const_cast<VirtualKCompletion*>(dynamic_cast<const VirtualKCompletion*>(self))) {
        vkcompletion->KCompletion::postProcessMatches(matchList_QList);
    } else
        qFatal("Error: Protected virtual method KCompletion::postProcessMatches called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnPostProcessMatches(KCompletion* self, intptr_t slot) {
    if (auto* vkcompletion = const_cast<VirtualKCompletion*>(dynamic_cast<const VirtualKCompletion*>(self)))
        vkcompletion->kcompletion_postprocessmatches_callback = reinterpret_cast<VirtualKCompletion::KCompletion_PostProcessMatches_Callback>(slot);
}

// Base class handler implementation
void KCompletion_SuperPostProcessMatches2(const KCompletion* self, KCompletionMatches* matches) {
    if (auto* vkcompletion = const_cast<VirtualKCompletion*>(dynamic_cast<const VirtualKCompletion*>(self))) {
        vkcompletion->KCompletion::postProcessMatches(matches);
    } else
        qFatal("Error: Protected virtual method KCompletion::postProcessMatches2 called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnPostProcessMatches2(KCompletion* self, intptr_t slot) {
    if (auto* vkcompletion = const_cast<VirtualKCompletion*>(dynamic_cast<const VirtualKCompletion*>(self)))
        vkcompletion->kcompletion_postprocessmatches2_callback = reinterpret_cast<VirtualKCompletion::KCompletion_PostProcessMatches2_Callback>(slot);
}

// Derived class handler implementation
bool KCompletion_Event(KCompletion* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KCompletion_SuperEvent(KCompletion* self, QEvent* event) {
    return self->KCompletion::event(event);
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnEvent(KCompletion* self, intptr_t slot) {
    if (auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self))
        vkcompletion->kcompletion_event_callback = reinterpret_cast<VirtualKCompletion::KCompletion_Event_Callback>(slot);
}

// Derived class handler implementation
bool KCompletion_EventFilter(KCompletion* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KCompletion_SuperEventFilter(KCompletion* self, QObject* watched, QEvent* event) {
    return self->KCompletion::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnEventFilter(KCompletion* self, intptr_t slot) {
    if (auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self))
        vkcompletion->kcompletion_eventfilter_callback = reinterpret_cast<VirtualKCompletion::KCompletion_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KCompletion_TimerEvent(KCompletion* self, QTimerEvent* event) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion) {
        vkcompletion->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCompletion::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletion_SuperTimerEvent(KCompletion* self, QTimerEvent* event) {
    if (auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self)) {
        vkcompletion->KCompletion::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KCompletion::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnTimerEvent(KCompletion* self, intptr_t slot) {
    if (auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self))
        vkcompletion->kcompletion_timerevent_callback = reinterpret_cast<VirtualKCompletion::KCompletion_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompletion_ChildEvent(KCompletion* self, QChildEvent* event) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion) {
        vkcompletion->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCompletion::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletion_SuperChildEvent(KCompletion* self, QChildEvent* event) {
    if (auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self)) {
        vkcompletion->KCompletion::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KCompletion::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnChildEvent(KCompletion* self, intptr_t slot) {
    if (auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self))
        vkcompletion->kcompletion_childevent_callback = reinterpret_cast<VirtualKCompletion::KCompletion_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompletion_CustomEvent(KCompletion* self, QEvent* event) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion) {
        vkcompletion->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCompletion::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletion_SuperCustomEvent(KCompletion* self, QEvent* event) {
    if (auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self)) {
        vkcompletion->KCompletion::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KCompletion::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnCustomEvent(KCompletion* self, intptr_t slot) {
    if (auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self))
        vkcompletion->kcompletion_customevent_callback = reinterpret_cast<VirtualKCompletion::KCompletion_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompletion_ConnectNotify(KCompletion* self, const QMetaMethod* signal) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion) {
        vkcompletion->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KCompletion::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletion_SuperConnectNotify(KCompletion* self, const QMetaMethod* signal) {
    if (auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self)) {
        vkcompletion->KCompletion::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KCompletion::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnConnectNotify(KCompletion* self, intptr_t slot) {
    if (auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self))
        vkcompletion->kcompletion_connectnotify_callback = reinterpret_cast<VirtualKCompletion::KCompletion_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KCompletion_DisconnectNotify(KCompletion* self, const QMetaMethod* signal) {
    auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self);
    if (vkcompletion) {
        vkcompletion->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KCompletion::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletion_SuperDisconnectNotify(KCompletion* self, const QMetaMethod* signal) {
    if (auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self)) {
        vkcompletion->KCompletion::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KCompletion::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletion_OnDisconnectNotify(KCompletion* self, intptr_t slot) {
    if (auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self))
        vkcompletion->kcompletion_disconnectnotify_callback = reinterpret_cast<VirtualKCompletion::KCompletion_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KCompletion_SetShouldAutoSuggest(KCompletion* self, bool shouldAutosuggest) {
    if (auto* vkcompletion = dynamic_cast<VirtualKCompletion*>(self)) {
        vkcompletion->VirtualKCompletion::setShouldAutoSuggest(shouldAutosuggest);
    } else
        qFatal("Error: Protected method KCompletion::setShouldAutoSuggest called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KCompletion_Sender(const KCompletion* self) {
    if (auto* vkcompletion = const_cast<VirtualKCompletion*>(dynamic_cast<const VirtualKCompletion*>(self))) {
        return vkcompletion->VirtualKCompletion::sender();
    } else
        qFatal("Error: Protected method KCompletion::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KCompletion_SenderSignalIndex(const KCompletion* self) {
    if (auto* vkcompletion = const_cast<VirtualKCompletion*>(dynamic_cast<const VirtualKCompletion*>(self))) {
        return vkcompletion->VirtualKCompletion::senderSignalIndex();
    } else
        qFatal("Error: Protected method KCompletion::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KCompletion_Receivers(const KCompletion* self, const char* signal) {
    if (auto* vkcompletion = const_cast<VirtualKCompletion*>(dynamic_cast<const VirtualKCompletion*>(self))) {
        return vkcompletion->VirtualKCompletion::receivers(signal);
    } else
        qFatal("Error: Protected method KCompletion::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KCompletion_IsSignalConnected(const KCompletion* self, const QMetaMethod* signal) {
    if (auto* vkcompletion = const_cast<VirtualKCompletion*>(dynamic_cast<const VirtualKCompletion*>(self))) {
        return vkcompletion->VirtualKCompletion::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KCompletion::isSignalConnected called without a directly constructed type");
}

void KCompletion_Delete(KCompletion* self) {
    delete self;
}
