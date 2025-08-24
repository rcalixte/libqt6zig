#include <KStandardShortcut>
#define WORKAROUND_INNER_CLASS_DEFINITION_KStandardShortcut__StandardShortcutWatcher
#include <QKeySequence>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kstandardshortcutwatcher.h>
#include "libkstandardshortcutwatcher.h"
#include "libkstandardshortcutwatcher.hxx"

QMetaObject* KStandardShortcut__StandardShortcutWatcher_MetaObject(const KStandardShortcut__StandardShortcutWatcher* self) {
    return (QMetaObject*)self->metaObject();
}

void* KStandardShortcut__StandardShortcutWatcher_Metacast(KStandardShortcut__StandardShortcutWatcher* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KStandardShortcut__StandardShortcutWatcher_Metacall(KStandardShortcut__StandardShortcutWatcher* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KStandardShortcut__StandardShortcutWatcher_Tr(const char* s) {
    QString _ret = KStandardShortcut::StandardShortcutWatcher::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KStandardShortcut__StandardShortcutWatcher_ShortcutChanged(KStandardShortcut__StandardShortcutWatcher* self, int id, const libqt_list /* of QKeySequence* */ shortcut) {
    QList<QKeySequence> shortcut_QList;
    shortcut_QList.reserve(shortcut.len);
    QKeySequence** shortcut_arr = static_cast<QKeySequence**>(shortcut.data);
    for (size_t i = 0; i < shortcut.len; ++i) {
        shortcut_QList.push_back(*(shortcut_arr[i]));
    }
    self->shortcutChanged(static_cast<KStandardShortcut::StandardShortcut>(id), shortcut_QList);
}

void KStandardShortcut__StandardShortcutWatcher_Connect_ShortcutChanged(KStandardShortcut__StandardShortcutWatcher* self, intptr_t slot) {
    void (*slotFunc)(KStandardShortcut__StandardShortcutWatcher*, int, QKeySequence**) = reinterpret_cast<void (*)(KStandardShortcut__StandardShortcutWatcher*, int, QKeySequence**)>(slot);
    KStandardShortcut::StandardShortcutWatcher::connect(self, &KStandardShortcut::StandardShortcutWatcher::shortcutChanged, [self, slotFunc](KStandardShortcut::StandardShortcut id, const QList<QKeySequence>& shortcut) {
        int sigval1 = static_cast<int>(id);
        const QList<QKeySequence>& shortcut_ret = shortcut;
        // Convert QList<> from C++ memory to manually-managed C memory
        QKeySequence** shortcut_arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * (shortcut_ret.size() + 1)));
        for (qsizetype i = 0; i < shortcut_ret.size(); ++i) {
            shortcut_arr[i] = new QKeySequence(shortcut_ret[i]);
        }
        // Append sentinel value to the list
        shortcut_arr[shortcut_ret.size()] = nullptr;
        QKeySequence** sigval2 = shortcut_arr;
        slotFunc(self, sigval1, sigval2);
        free(shortcut_arr);
    });
}

libqt_string KStandardShortcut__StandardShortcutWatcher_Tr2(const char* s, const char* c) {
    QString _ret = KStandardShortcut::StandardShortcutWatcher::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KStandardShortcut__StandardShortcutWatcher_Tr3(const char* s, const char* c, int n) {
    QString _ret = KStandardShortcut::StandardShortcutWatcher::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KStandardShortcut__StandardShortcutWatcher_Delete(KStandardShortcut__StandardShortcutWatcher* self) {
    delete self;
}

KStandardShortcut__StandardShortcutWatcher* KStandardShortcut_ShortcutWatcher() {
    return KStandardShortcut::shortcutWatcher();
}
