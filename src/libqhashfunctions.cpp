#include <QBitArray>
#include <QChar>
#include <QHashSeed>
#include <QKeyCombination>
#include <QString>
#include <qhashfunctions.h>
#include "libqhashfunctions.h"
#include "libqhashfunctions.hxx"

int qhashfunctions_QGlobalQHashSeed() {
    return qGlobalQHashSeed();
}

void qhashfunctions_QSetGlobalQHashSeed(int newSeed) {
    qSetGlobalQHashSeed(static_cast<int>(newSeed));
}

size_t qhashfunctions_QHashBits(const void* p, size_t size, size_t seed) {
    return qHashBits(p, static_cast<size_t>(size), static_cast<size_t>(seed));
}

size_t qhashfunctions_QHash(char key, size_t seed) {
    return qHash(static_cast<char>(key), static_cast<size_t>(seed));
}

size_t qhashfunctions_QHash2(unsigned char key, size_t seed) {
    return qHash(static_cast<uchar>(key), static_cast<size_t>(seed));
}

size_t qhashfunctions_QHash3(signed char key, size_t seed) {
    return qHash(static_cast<signed char>(key), static_cast<size_t>(seed));
}

size_t qhashfunctions_QHash4(uint16_t key, size_t seed) {
    return qHash(static_cast<ushort>(key), static_cast<size_t>(seed));
}

size_t qhashfunctions_QHash5(int16_t key, size_t seed) {
    return qHash(static_cast<short>(key), static_cast<size_t>(seed));
}

size_t qhashfunctions_QHash6(unsigned int key, size_t seed) {
    return qHash(static_cast<uint>(key), static_cast<size_t>(seed));
}

size_t qhashfunctions_QHash7(int key, size_t seed) {
    return qHash(static_cast<int>(key), static_cast<size_t>(seed));
}

size_t qhashfunctions_QHash8(unsigned long key, size_t seed) {
    return qHash(static_cast<ulong>(key), static_cast<size_t>(seed));
}

size_t qhashfunctions_QHash9(long key, size_t seed) {
    return qHash(static_cast<long>(key), static_cast<size_t>(seed));
}

size_t qhashfunctions_QHash10(unsigned long long key, size_t seed) {
    return qHash(static_cast<quint64>(key), static_cast<size_t>(seed));
}

size_t qhashfunctions_QHash11(long long key, size_t seed) {
    return qHash(static_cast<qint64>(key), static_cast<size_t>(seed));
}

size_t qhashfunctions_QHash12(float key, size_t seed) {
    return qHash(static_cast<float>(key), static_cast<size_t>(seed));
}

size_t qhashfunctions_QHash13(double key, size_t seed) {
    return qHash(static_cast<double>(key), static_cast<size_t>(seed));
}

size_t qhashfunctions_QHash19(const QChar* key, size_t seed) {
    return qHash(*key, static_cast<size_t>(seed));
}

size_t qhashfunctions_QHash20(libqt_string key, size_t seed) {
    QByteArrayView key_QByteArrayView(key.data, key.len);
    return qHash(key_QByteArrayView, static_cast<size_t>(seed));
}

size_t qhashfunctions_QHash22(libqt_string key, size_t seed) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return qHash(key_QString, static_cast<size_t>(seed));
}

size_t qhashfunctions_QHash23(const libqt_string key, size_t seed) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return qHash(key_QString, static_cast<size_t>(seed));
}

size_t qhashfunctions_QHash24(const QBitArray* key, size_t seed) {
    return qHash(*key, static_cast<size_t>(seed));
}

size_t qhashfunctions_QHash25(libqt_string key, size_t seed) {
    QLatin1StringView key_QLatin1StringView(key.data, key.len);
    return qHash(key_QLatin1StringView, static_cast<size_t>(seed));
}

size_t qhashfunctions_QHash26(QKeyCombination* key, size_t seed) {
    return qHash(*key, static_cast<size_t>(seed));
}

unsigned int qhashfunctions_Hash(libqt_string key, unsigned int chained) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return static_cast<unsigned int>(qt_hash(key_QString, static_cast<uint>(chained)));
}

QHashSeed* QHashSeed_new(const QHashSeed* other) {
    return new QHashSeed(*other);
}

QHashSeed* QHashSeed_new2(QHashSeed* other) {
    return new QHashSeed(std::move(*other));
}

QHashSeed* QHashSeed_new3() {
    return new QHashSeed();
}

QHashSeed* QHashSeed_new4(size_t d) {
    return new QHashSeed(static_cast<size_t>(d));
}

void QHashSeed_CopyAssign(QHashSeed* self, QHashSeed* other) {
    *self = *other;
}

void QHashSeed_MoveAssign(QHashSeed* self, QHashSeed* other) {
    *self = std::move(*other);
}

size_t QHashSeed_ToUnsignedLong(const QHashSeed* self) {
    return self->operator unsigned long();
}

QHashSeed* QHashSeed_GlobalSeed() {
    return new QHashSeed(QHashSeed::globalSeed());
}

void QHashSeed_SetDeterministicGlobalSeed() {
    QHashSeed::setDeterministicGlobalSeed();
}

void QHashSeed_ResetRandomGlobalSeed() {
    QHashSeed::resetRandomGlobalSeed();
}

void QHashSeed_Delete(QHashSeed* self) {
    delete self;
}
