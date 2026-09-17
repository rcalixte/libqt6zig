#include <qnumeric.h>
#include "libqnumeric.h"
#include "libqnumeric.hxx"

bool qnumeric_QIsInf(double d) {
    return qIsInf(static_cast<double>(d));
}

bool qnumeric_QIsNaN(double d) {
    return qIsNaN(static_cast<double>(d));
}

bool qnumeric_QIsFinite(double d) {
    return qIsFinite(static_cast<double>(d));
}

int qnumeric_QFpClassify(double val) {
    return qFpClassify(static_cast<double>(val));
}

bool qnumeric_QIsInf2(float f) {
    return qIsInf(static_cast<float>(f));
}

bool qnumeric_QIsNaN2(float f) {
    return qIsNaN(static_cast<float>(f));
}

bool qnumeric_QIsFinite2(float f) {
    return qIsFinite(static_cast<float>(f));
}

int qnumeric_QFpClassify2(float val) {
    return qFpClassify(static_cast<float>(val));
}

double qnumeric_QSNaN() {
    return qSNaN();
}

double qnumeric_QQNaN() {
    return qQNaN();
}

double qnumeric_QInf() {
    return qInf();
}

unsigned int qnumeric_QFloatDistance(float a, float b) {
    return static_cast<unsigned int>(qFloatDistance(static_cast<float>(a), static_cast<float>(b)));
}

unsigned long long qnumeric_QFloatDistance2(double a, double b) {
    return static_cast<unsigned long long>(qFloatDistance(static_cast<double>(a), static_cast<double>(b)));
}

int qnumeric_QRound(double d) {
    return qRound(static_cast<double>(d));
}

int qnumeric_QRound2(float f) {
    return qRound(static_cast<float>(f));
}

long long qnumeric_QRound64(double d) {
    return static_cast<long long>(qRound64(static_cast<double>(d)));
}

long long qnumeric_QRound642(float f) {
    return static_cast<long long>(qRound64(static_cast<float>(f)));
}

bool qnumeric_QFuzzyCompare(double p1, double p2) {
    return qFuzzyCompare(static_cast<double>(p1), static_cast<double>(p2));
}

bool qnumeric_QFuzzyCompare2(float p1, float p2) {
    return qFuzzyCompare(static_cast<float>(p1), static_cast<float>(p2));
}

bool qnumeric_QFuzzyIsNull(double d) {
    return qFuzzyIsNull(static_cast<double>(d));
}

bool qnumeric_QFuzzyIsNull2(float f) {
    return qFuzzyIsNull(static_cast<float>(f));
}

bool qnumeric_QIsNull(double d) {
    return qIsNull(static_cast<double>(d));
}

bool qnumeric_QIsNull2(float f) {
    return qIsNull(static_cast<float>(f));
}

int qnumeric_QIntCast(double f) {
    return qIntCast(static_cast<double>(f));
}

int qnumeric_QIntCast2(float f) {
    return qIntCast(static_cast<float>(f));
}
