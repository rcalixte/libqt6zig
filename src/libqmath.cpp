#include <qmath.h>
#include "libqmath.h"
#include "libqmath.hxx"

double qmath_QFastSin(double x) {
    return static_cast<double>(qFastSin(static_cast<qreal>(x)));
}

double qmath_QFastCos(double x) {
    return static_cast<double>(qFastCos(static_cast<qreal>(x)));
}

float qmath_QDegreesToRadians(float degrees) {
    return qDegreesToRadians(static_cast<float>(degrees));
}

double qmath_QDegreesToRadians2(double degrees) {
    return qDegreesToRadians(static_cast<double>(degrees));
}

float qmath_QRadiansToDegrees(float radians) {
    return qRadiansToDegrees(static_cast<float>(radians));
}

double qmath_QRadiansToDegrees2(double radians) {
    return qRadiansToDegrees(static_cast<double>(radians));
}

unsigned int qmath_QNextPowerOfTwo(unsigned int v) {
    return static_cast<unsigned int>(qNextPowerOfTwo(static_cast<quint32>(v)));
}

unsigned long long qmath_QNextPowerOfTwo2(unsigned long long v) {
    return static_cast<unsigned long long>(qNextPowerOfTwo(static_cast<quint64>(v)));
}

unsigned int qmath_QNextPowerOfTwo3(int v) {
    return static_cast<unsigned int>(qNextPowerOfTwo(static_cast<qint32>(v)));
}

unsigned long long qmath_QNextPowerOfTwo4(long long v) {
    return static_cast<unsigned long long>(qNextPowerOfTwo(static_cast<qint64>(v)));
}

unsigned long qmath_QNextPowerOfTwo5(unsigned long v) {
    return qNextPowerOfTwo(static_cast<unsigned long>(v));
}

unsigned long qmath_QNextPowerOfTwo6(long v) {
    return qNextPowerOfTwo(static_cast<long>(v));
}
