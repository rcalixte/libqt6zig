#include <KCompletionMatches>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kcompletionmatches.h>
#include "libkcompletionmatches.h"
#include "libkcompletionmatches.hxx"

KCompletionMatches* KCompletionMatches_new(bool sort) {
    return new KCompletionMatches(sort);
}

KCompletionMatches* KCompletionMatches_new2(const KCompletionMatches* param1) {
    return new KCompletionMatches(*param1);
}

void KCompletionMatches_OperatorAssign(KCompletionMatches* self, const KCompletionMatches* param1) {
    self->operator=(*param1);
}

void KCompletionMatches_RemoveDuplicates(KCompletionMatches* self) {
    self->removeDuplicates();
}

libqt_list /* of libqt_string */ KCompletionMatches_List(const KCompletionMatches* self) {
    QList<QString> _ret = self->list();
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

bool KCompletionMatches_Sorting(const KCompletionMatches* self) {
    return self->sorting();
}

libqt_list /* of libqt_string */ KCompletionMatches_List1(const KCompletionMatches* self, bool sort) {
    QList<QString> _ret = self->list(sort);
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

void KCompletionMatches_Delete(KCompletionMatches* self) {
    delete self;
}
