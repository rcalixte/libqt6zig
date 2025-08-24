#include <KStandardActions>
#include <QAction>
#include <QList>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kstandardactions.h>
#include "libkstandardactions.h"
#include "libkstandardactions.hxx"

QAction* KStandardActions_KguiCreateInternal(int param1, QObject* param2) {
    return KStandardActions::_kgui_createInternal(static_cast<KStandardActions::StandardAction>(param1), param2);
}

libqt_string KStandardActions_Name(int param1) {
    QString _ret = KStandardActions::name(static_cast<KStandardActions::StandardAction>(param1));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of int */ KStandardActions_ActionIds() {
    QList<KStandardActions::StandardAction> _ret = KStandardActions::actionIds();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = static_cast<int>(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int KStandardActions_ShortcutForActionId(int param1) {
    return static_cast<int>(KStandardActions::shortcutForActionId(static_cast<KStandardActions::StandardAction>(param1)));
}
