#include <QByteArray>
#include <QPasswordDigestor>
#include <qpassworddigestor.h>
#include "libqpassworddigestor.h"
#include "libqpassworddigestor.hxx"

libqt_string QPasswordDigestor_DeriveKeyPbkdf1(int algorithm, const libqt_string password, const libqt_string salt, int iterations, unsigned long long dkLen) {
    QByteArray password_QByteArray(password.data, password.len);
    QByteArray salt_QByteArray(salt.data, salt.len);
    QByteArray _qb = QPasswordDigestor::deriveKeyPbkdf1(static_cast<QCryptographicHash::Algorithm>(algorithm), password_QByteArray, salt_QByteArray, static_cast<int>(iterations), static_cast<quint64>(dkLen));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string QPasswordDigestor_DeriveKeyPbkdf2(int algorithm, const libqt_string password, const libqt_string salt, int iterations, unsigned long long dkLen) {
    QByteArray password_QByteArray(password.data, password.len);
    QByteArray salt_QByteArray(salt.data, salt.len);
    QByteArray _qb = QPasswordDigestor::deriveKeyPbkdf2(static_cast<QCryptographicHash::Algorithm>(algorithm), password_QByteArray, salt_QByteArray, static_cast<int>(iterations), static_cast<quint64>(dkLen));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}
