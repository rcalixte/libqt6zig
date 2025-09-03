#include <KIconEffect>
#include <QColor>
#include <QImage>
#include <QPixmap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kiconeffect.h>
#include "libkiconeffect.h"
#include "libkiconeffect.hxx"

KIconEffect* KIconEffect_new() {
    return new KIconEffect();
}

void KIconEffect_Init(KIconEffect* self) {
    self->init();
}

bool KIconEffect_HasEffect(const KIconEffect* self, int group, int state) {
    return self->hasEffect(static_cast<int>(group), static_cast<int>(state));
}

libqt_string KIconEffect_Fingerprint(const KIconEffect* self, int group, int state) {
    QString _ret = self->fingerprint(static_cast<int>(group), static_cast<int>(state));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QImage* KIconEffect_Apply(const KIconEffect* self, const QImage* src, int group, int state) {
    return new QImage(self->apply(*src, static_cast<int>(group), static_cast<int>(state)));
}

QImage* KIconEffect_Apply2(const KIconEffect* self, const QImage* src, int effect, float value, const QColor* rgb, bool trans) {
    return new QImage(self->apply(*src, static_cast<int>(effect), static_cast<float>(value), *rgb, trans));
}

QImage* KIconEffect_Apply3(const KIconEffect* self, const QImage* src, int effect, float value, const QColor* rgb, const QColor* rgb2, bool trans) {
    return new QImage(self->apply(*src, static_cast<int>(effect), static_cast<float>(value), *rgb, *rgb2, trans));
}

QPixmap* KIconEffect_Apply4(const KIconEffect* self, const QPixmap* src, int group, int state) {
    return new QPixmap(self->apply(*src, static_cast<int>(group), static_cast<int>(state)));
}

QPixmap* KIconEffect_Apply5(const KIconEffect* self, const QPixmap* src, int effect, float value, const QColor* rgb, bool trans) {
    return new QPixmap(self->apply(*src, static_cast<int>(effect), static_cast<float>(value), *rgb, trans));
}

QPixmap* KIconEffect_Apply6(const KIconEffect* self, const QPixmap* src, int effect, float value, const QColor* rgb, const QColor* rgb2, bool trans) {
    return new QPixmap(self->apply(*src, static_cast<int>(effect), static_cast<float>(value), *rgb, *rgb2, trans));
}

QImage* KIconEffect_DoublePixels(const KIconEffect* self, const QImage* src) {
    return new QImage(self->doublePixels(*src));
}

void KIconEffect_ToGray(QImage* image, float value) {
    KIconEffect::toGray(*image, static_cast<float>(value));
}

void KIconEffect_Colorize(QImage* image, const QColor* col, float value) {
    KIconEffect::colorize(*image, *col, static_cast<float>(value));
}

void KIconEffect_ToMonochrome(QImage* image, const QColor* black, const QColor* white, float value) {
    KIconEffect::toMonochrome(*image, *black, *white, static_cast<float>(value));
}

void KIconEffect_DeSaturate(QImage* image, float value) {
    KIconEffect::deSaturate(*image, static_cast<float>(value));
}

void KIconEffect_ToGamma(QImage* image, float value) {
    KIconEffect::toGamma(*image, static_cast<float>(value));
}

void KIconEffect_SemiTransparent(QImage* image) {
    KIconEffect::semiTransparent(*image);
}

void KIconEffect_SemiTransparent2(QPixmap* pixmap) {
    KIconEffect::semiTransparent(*pixmap);
}

void KIconEffect_Overlay(QImage* src, QImage* overlay) {
    KIconEffect::overlay(*src, *overlay);
}

void KIconEffect_ToDisabled(QImage* image) {
    KIconEffect::toDisabled(*image);
}

void KIconEffect_ToDisabled2(QPixmap* pixmap) {
    KIconEffect::toDisabled(*pixmap);
}

void KIconEffect_ToActive(QImage* image) {
    KIconEffect::toActive(*image);
}

void KIconEffect_ToActive2(QPixmap* pixmap) {
    KIconEffect::toActive(*pixmap);
}

void KIconEffect_Delete(KIconEffect* self) {
    delete self;
}
