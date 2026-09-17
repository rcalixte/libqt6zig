#include <qrgb.h>
#include "libqrgb.h"
#include "libqrgb.hxx"

int qrgb_h_QRed(unsigned int rgb) {
    return qRed(static_cast<QRgb>(rgb));
}

int qrgb_h_QGreen(unsigned int rgb) {
    return qGreen(static_cast<QRgb>(rgb));
}

int qrgb_h_QBlue(unsigned int rgb) {
    return qBlue(static_cast<QRgb>(rgb));
}

int qrgb_h_QAlpha(unsigned int rgb) {
    return qAlpha(static_cast<QRgb>(rgb));
}

unsigned int qrgb_h_QRgb(int r, int g, int b) {
    return static_cast<unsigned int>(qRgb(static_cast<int>(r), static_cast<int>(g), static_cast<int>(b)));
}

unsigned int qrgb_h_QRgba(int r, int g, int b, int a) {
    return static_cast<unsigned int>(qRgba(static_cast<int>(r), static_cast<int>(g), static_cast<int>(b), static_cast<int>(a)));
}

int qrgb_h_QGray(int r, int g, int b) {
    return qGray(static_cast<int>(r), static_cast<int>(g), static_cast<int>(b));
}

int qrgb_h_QGray2(unsigned int rgb) {
    return qGray(static_cast<QRgb>(rgb));
}

bool qrgb_h_QIsGray(unsigned int rgb) {
    return qIsGray(static_cast<QRgb>(rgb));
}

unsigned int qrgb_h_QPremultiply(unsigned int x) {
    return static_cast<unsigned int>(qPremultiply(static_cast<QRgb>(x)));
}

unsigned int qrgb_h_QUnpremultiply(unsigned int p) {
    return static_cast<unsigned int>(qUnpremultiply(static_cast<QRgb>(p)));
}
