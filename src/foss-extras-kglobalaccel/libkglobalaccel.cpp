#include <KGlobalAccel>
#include <KGlobalShortcutInfo>
#include <QAction>
#include <QKeySequence>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <kglobalaccel.h>
#include "libkglobalaccel.h"
#include "libkglobalaccel.hxx"

QMetaObject* KGlobalAccel_MetaObject(const KGlobalAccel* self) {
    return (QMetaObject*)self->metaObject();
}

void* KGlobalAccel_Metacast(KGlobalAccel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KGlobalAccel_Metacall(KGlobalAccel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KGlobalAccel_Tr(const char* s) {
    QString _ret = KGlobalAccel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KGlobalAccel* KGlobalAccel_Self() {
    return KGlobalAccel::self();
}

void KGlobalAccel_StealShortcutSystemwide(const QKeySequence* seq) {
    KGlobalAccel::stealShortcutSystemwide(*seq);
}

bool KGlobalAccel_CleanComponent(const libqt_string componentUnique) {
    QString componentUnique_QString = QString::fromUtf8(componentUnique.data, componentUnique.len);
    return KGlobalAccel::cleanComponent(componentUnique_QString);
}

bool KGlobalAccel_IsComponentActive(const libqt_string componentName) {
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    return KGlobalAccel::isComponentActive(componentName_QString);
}

libqt_list /* of KGlobalShortcutInfo* */ KGlobalAccel_GlobalShortcutsByKey(const QKeySequence* seq) {
    QList<KGlobalShortcutInfo> _ret = KGlobalAccel::globalShortcutsByKey(*seq);
    // Convert QList<> from C++ memory to manually-managed C memory
    KGlobalShortcutInfo** _arr = static_cast<KGlobalShortcutInfo**>(malloc(sizeof(KGlobalShortcutInfo*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KGlobalShortcutInfo(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool KGlobalAccel_IsGlobalShortcutAvailable(const QKeySequence* seq) {
    return KGlobalAccel::isGlobalShortcutAvailable(*seq);
}

bool KGlobalAccel_PromptStealShortcutSystemwide(QWidget* parent, const libqt_list /* of KGlobalShortcutInfo* */ shortcuts, const QKeySequence* seq) {
    QList<KGlobalShortcutInfo> shortcuts_QList;
    shortcuts_QList.reserve(shortcuts.len);
    KGlobalShortcutInfo** shortcuts_arr = static_cast<KGlobalShortcutInfo**>(shortcuts.data);
    for (size_t i = 0; i < shortcuts.len; ++i) {
        shortcuts_QList.push_back(*(shortcuts_arr[i]));
    }
    return KGlobalAccel::promptStealShortcutSystemwide(parent, shortcuts_QList, *seq);
}

bool KGlobalAccel_SetDefaultShortcut(KGlobalAccel* self, QAction* action, const libqt_list /* of QKeySequence* */ shortcut) {
    QList<QKeySequence> shortcut_QList;
    shortcut_QList.reserve(shortcut.len);
    QKeySequence** shortcut_arr = static_cast<QKeySequence**>(shortcut.data);
    for (size_t i = 0; i < shortcut.len; ++i) {
        shortcut_QList.push_back(*(shortcut_arr[i]));
    }
    return self->setDefaultShortcut(action, shortcut_QList);
}

bool KGlobalAccel_SetShortcut(KGlobalAccel* self, QAction* action, const libqt_list /* of QKeySequence* */ shortcut) {
    QList<QKeySequence> shortcut_QList;
    shortcut_QList.reserve(shortcut.len);
    QKeySequence** shortcut_arr = static_cast<QKeySequence**>(shortcut.data);
    for (size_t i = 0; i < shortcut.len; ++i) {
        shortcut_QList.push_back(*(shortcut_arr[i]));
    }
    return self->setShortcut(action, shortcut_QList);
}

bool KGlobalAccel_SetGlobalShortcut(QAction* action, const libqt_list /* of QKeySequence* */ shortcut) {
    QList<QKeySequence> shortcut_QList;
    shortcut_QList.reserve(shortcut.len);
    QKeySequence** shortcut_arr = static_cast<QKeySequence**>(shortcut.data);
    for (size_t i = 0; i < shortcut.len; ++i) {
        shortcut_QList.push_back(*(shortcut_arr[i]));
    }
    return KGlobalAccel::setGlobalShortcut(action, shortcut_QList);
}

bool KGlobalAccel_SetGlobalShortcut2(QAction* action, const QKeySequence* shortcut) {
    return KGlobalAccel::setGlobalShortcut(action, *shortcut);
}

libqt_list /* of QKeySequence* */ KGlobalAccel_DefaultShortcut(const KGlobalAccel* self, const QAction* action) {
    QList<QKeySequence> _ret = self->defaultShortcut(action);
    // Convert QList<> from C++ memory to manually-managed C memory
    QKeySequence** _arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QKeySequence(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QKeySequence* */ KGlobalAccel_Shortcut(const KGlobalAccel* self, const QAction* action) {
    QList<QKeySequence> _ret = self->shortcut(action);
    // Convert QList<> from C++ memory to manually-managed C memory
    QKeySequence** _arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QKeySequence(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QKeySequence* */ KGlobalAccel_GlobalShortcut(const KGlobalAccel* self, const libqt_string componentName, const libqt_string actionId) {
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    QString actionId_QString = QString::fromUtf8(actionId.data, actionId.len);
    QList<QKeySequence> _ret = self->globalShortcut(componentName_QString, actionId_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    QKeySequence** _arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QKeySequence(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KGlobalAccel_RemoveAllShortcuts(KGlobalAccel* self, QAction* action) {
    self->removeAllShortcuts(action);
}

bool KGlobalAccel_HasShortcut(const KGlobalAccel* self, const QAction* action) {
    return self->hasShortcut(action);
}

void KGlobalAccel_GlobalShortcutChanged(KGlobalAccel* self, QAction* action, const QKeySequence* seq) {
    self->globalShortcutChanged(action, *seq);
}

void KGlobalAccel_Connect_GlobalShortcutChanged(KGlobalAccel* self, intptr_t slot) {
    void (*slotFunc)(KGlobalAccel*, QAction*, QKeySequence*) = reinterpret_cast<void (*)(KGlobalAccel*, QAction*, QKeySequence*)>(slot);
    KGlobalAccel::connect(self, &KGlobalAccel::globalShortcutChanged, [self, slotFunc](QAction* action, const QKeySequence& seq) {
        QAction* sigval1 = action;
        const QKeySequence& seq_ret = seq;
        // Cast returned reference into pointer
        QKeySequence* sigval2 = const_cast<QKeySequence*>(&seq_ret);
        slotFunc(self, sigval1, sigval2);
    });
}

void KGlobalAccel_GlobalShortcutActiveChanged(KGlobalAccel* self, QAction* action, bool active) {
    self->globalShortcutActiveChanged(action, active);
}

void KGlobalAccel_Connect_GlobalShortcutActiveChanged(KGlobalAccel* self, intptr_t slot) {
    void (*slotFunc)(KGlobalAccel*, QAction*, bool) = reinterpret_cast<void (*)(KGlobalAccel*, QAction*, bool)>(slot);
    KGlobalAccel::connect(self, &KGlobalAccel::globalShortcutActiveChanged, [self, slotFunc](QAction* action, bool active) {
        QAction* sigval1 = action;
        bool sigval2 = active;
        slotFunc(self, sigval1, sigval2);
    });
}

libqt_string KGlobalAccel_Tr2(const char* s, const char* c) {
    QString _ret = KGlobalAccel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KGlobalAccel_Tr3(const char* s, const char* c, int n) {
    QString _ret = KGlobalAccel::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of KGlobalShortcutInfo* */ KGlobalAccel_GlobalShortcutsByKey2(const QKeySequence* seq, int typeVal) {
    QList<KGlobalShortcutInfo> _ret = KGlobalAccel::globalShortcutsByKey(*seq, static_cast<KGlobalAccel::MatchType>(typeVal));
    // Convert QList<> from C++ memory to manually-managed C memory
    KGlobalShortcutInfo** _arr = static_cast<KGlobalShortcutInfo**>(malloc(sizeof(KGlobalShortcutInfo*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KGlobalShortcutInfo(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool KGlobalAccel_IsGlobalShortcutAvailable2(const QKeySequence* seq, const libqt_string component) {
    QString component_QString = QString::fromUtf8(component.data, component.len);
    return KGlobalAccel::isGlobalShortcutAvailable(*seq, component_QString);
}

bool KGlobalAccel_SetDefaultShortcut3(KGlobalAccel* self, QAction* action, const libqt_list /* of QKeySequence* */ shortcut, int loadFlag) {
    QList<QKeySequence> shortcut_QList;
    shortcut_QList.reserve(shortcut.len);
    QKeySequence** shortcut_arr = static_cast<QKeySequence**>(shortcut.data);
    for (size_t i = 0; i < shortcut.len; ++i) {
        shortcut_QList.push_back(*(shortcut_arr[i]));
    }
    return self->setDefaultShortcut(action, shortcut_QList, static_cast<KGlobalAccel::GlobalShortcutLoading>(loadFlag));
}

bool KGlobalAccel_SetShortcut3(KGlobalAccel* self, QAction* action, const libqt_list /* of QKeySequence* */ shortcut, int loadFlag) {
    QList<QKeySequence> shortcut_QList;
    shortcut_QList.reserve(shortcut.len);
    QKeySequence** shortcut_arr = static_cast<QKeySequence**>(shortcut.data);
    for (size_t i = 0; i < shortcut.len; ++i) {
        shortcut_QList.push_back(*(shortcut_arr[i]));
    }
    return self->setShortcut(action, shortcut_QList, static_cast<KGlobalAccel::GlobalShortcutLoading>(loadFlag));
}
