#include <QByteArray>
#include <QPasswordDigestor>
#include <qpassworddigestor.h>
#include "libqpassworddigestor.h"
#include "libqpassworddigestor.hxx"

libqt_string QPasswordDigestor_DeriveKeyPbkdf1(int param1, const libqt_string param2, const libqt_string param3, int param4, unsigned long long param5) {
    QByteArray param2_QByteArray(param2.data, param2.len);
    QByteArray param3_QByteArray(param3.data, param3.len);
    QByteArray _qb = QPasswordDigestor::deriveKeyPbkdf1(static_cast<QCryptographicHash::Algorithm>(param1), param2_QByteArray, param3_QByteArray, static_cast<int>(param4), static_cast<quint64>(param5));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPasswordDigestor_DeriveKeyPbkdf2(int param1, const libqt_string param2, const libqt_string param3, int param4, unsigned long long param5) {
    QByteArray param2_QByteArray(param2.data, param2.len);
    QByteArray param3_QByteArray(param3.data, param3.len);
    QByteArray _qb = QPasswordDigestor::deriveKeyPbkdf2(static_cast<QCryptographicHash::Algorithm>(param1), param2_QByteArray, param3_QByteArray, static_cast<int>(param4), static_cast<quint64>(param5));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}
