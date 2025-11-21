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

void KStandardShortcut__StandardShortcutWatcher_Delete(KStandardShortcut__StandardShortcutWatcher* self) {
    delete self;
}

KStandardShortcut__StandardShortcutWatcher* KStandardShortcut_ShortcutWatcher() {
    return KStandardShortcut::shortcutWatcher();
}
