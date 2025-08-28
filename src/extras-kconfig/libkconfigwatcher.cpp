#include <KConfigGroup>
#include <KConfigWatcher>
#include <QByteArray>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kconfigwatcher.h>
#include "libkconfigwatcher.h"
#include "libkconfigwatcher.hxx"

QMetaObject* KConfigWatcher_MetaObject(const KConfigWatcher* self) {
    return (QMetaObject*)self->metaObject();
}

void* KConfigWatcher_Metacast(KConfigWatcher* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KConfigWatcher_Metacall(KConfigWatcher* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KConfigWatcher_Tr(const char* s) {
    QString _ret = KConfigWatcher::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KConfigWatcher_ConfigChanged(KConfigWatcher* self, const KConfigGroup* group, const libqt_list /* of libqt_string */ names) {
    QList<QByteArray> names_QList;
    names_QList.reserve(names.len);
    libqt_string* names_arr = static_cast<libqt_string*>(names.data);
    for (size_t i = 0; i < names.len; ++i) {
        QByteArray names_arr_i_QByteArray(names_arr[i].data, names_arr[i].len);
        names_QList.push_back(names_arr_i_QByteArray);
    }
    self->configChanged(*group, names_QList);
}

void KConfigWatcher_Connect_ConfigChanged(KConfigWatcher* self, intptr_t slot) {
    void (*slotFunc)(KConfigWatcher*, KConfigGroup*, const char**) = reinterpret_cast<void (*)(KConfigWatcher*, KConfigGroup*, const char**)>(slot);
    KConfigWatcher::connect(self, &KConfigWatcher::configChanged, [self, slotFunc](const KConfigGroup& group, const QList<QByteArray>& names) {
        const KConfigGroup& group_ret = group;
        // Cast returned reference into pointer
        KConfigGroup* sigval1 = const_cast<KConfigGroup*>(&group_ret);
        const QList<QByteArray>& names_ret = names;
        // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
        const char** names_arr = static_cast<const char**>(malloc(sizeof(const char*) * (names_ret.size() + 1)));
        for (qsizetype i = 0; i < names_ret.size(); ++i) {
            QByteArray names_b = names_ret[i];
            char* names_str = static_cast<char*>(malloc(names_b.length() + 1));
            memcpy(names_str, names_b.data(), names_b.length());
            names_str[names_b.length()] = '\0';
            names_arr[i] = names_str;
        }
        // Append sentinel null terminator to the list
        names_arr[names_ret.size()] = nullptr;
        const char** sigval2 = names_arr;
        slotFunc(self, sigval1, sigval2);
        free(names_arr);
    });
}

libqt_string KConfigWatcher_Tr2(const char* s, const char* c) {
    QString _ret = KConfigWatcher::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KConfigWatcher_Tr3(const char* s, const char* c, int n) {
    QString _ret = KConfigWatcher::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KConfigWatcher_Delete(KConfigWatcher* self) {
    delete self;
}
