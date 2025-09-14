#include <KKeyServer>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kkeyserver.h>
#include "libkkeyserver.h"
#include "libkkeyserver.hxx"

libqt_string KKeyServer_ModToStringUser(unsigned int param1) {
    QString _ret = KKeyServer::modToStringUser(static_cast<uint>(param1));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

unsigned int KKeyServer_StringUserToMod(const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    return static_cast<unsigned int>(KKeyServer::stringUserToMod(param1_QString));
}

bool KKeyServer_IsShiftAsModifierAllowed(int param1) {
    return KKeyServer::isShiftAsModifierAllowed(static_cast<int>(param1));
}

bool KKeyServer_InitializeMods() {
    return KKeyServer::initializeMods();
}

bool KKeyServer_KeyboardHasMetaKey() {
    return KKeyServer::keyboardHasMetaKey();
}

unsigned int KKeyServer_ModXShift() {
    return static_cast<unsigned int>(KKeyServer::modXShift());
}

unsigned int KKeyServer_ModXLock() {
    return static_cast<unsigned int>(KKeyServer::modXLock());
}

unsigned int KKeyServer_ModXCtrl() {
    return static_cast<unsigned int>(KKeyServer::modXCtrl());
}

unsigned int KKeyServer_ModXAlt() {
    return static_cast<unsigned int>(KKeyServer::modXAlt());
}

unsigned int KKeyServer_ModXMeta() {
    return static_cast<unsigned int>(KKeyServer::modXMeta());
}

unsigned int KKeyServer_ModXNumLock() {
    return static_cast<unsigned int>(KKeyServer::modXNumLock());
}

unsigned int KKeyServer_ModXScrollLock() {
    return static_cast<unsigned int>(KKeyServer::modXScrollLock());
}

unsigned int KKeyServer_ModXModeSwitch() {
    return static_cast<unsigned int>(KKeyServer::modXModeSwitch());
}

unsigned int KKeyServer_AccelModMaskX() {
    return static_cast<unsigned int>(KKeyServer::accelModMaskX());
}

bool KKeyServer_KeyQtToSymX(int param1, int* param2) {
    return KKeyServer::keyQtToSymX(static_cast<int>(param1), static_cast<int*>(param2));
}

libqt_list /* of int */ KKeyServer_KeyQtToSymXs(int param1) {
    QList<int> _ret = KKeyServer::keyQtToSymXs(static_cast<int>(param1));
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool KKeyServer_KeyQtToCodeX(int param1, int* param2) {
    return KKeyServer::keyQtToCodeX(static_cast<int>(param1), static_cast<int*>(param2));
}

libqt_list /* of int */ KKeyServer_KeyQtToCodeXs(int param1) {
    QList<int> _ret = KKeyServer::keyQtToCodeXs(static_cast<int>(param1));
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool KKeyServer_KeyQtToModX(int param1, unsigned int* param2) {
    return KKeyServer::keyQtToModX(static_cast<int>(param1), static_cast<uint*>(param2));
}

bool KKeyServer_SymXModXToKeyQt(uint32_t param1, uint16_t param2, int* param3) {
    return KKeyServer::symXModXToKeyQt(static_cast<uint32_t>(param1), static_cast<uint16_t>(param2), static_cast<int*>(param3));
}

bool KKeyServer_ModXToQt(unsigned int param1, int* param2) {
    return KKeyServer::modXToQt(static_cast<uint>(param1), static_cast<int*>(param2));
}
