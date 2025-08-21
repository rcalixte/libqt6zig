#include <KEncodingProber>
#include <QByteArray>
#include <QByteArrayView>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kencodingprober.h>
#include "libkencodingprober.h"
#include "libkencodingprober.hxx"

KEncodingProber* KEncodingProber_new() {
    return new KEncodingProber();
}

KEncodingProber* KEncodingProber_new2(int proberType) {
    return new KEncodingProber(static_cast<KEncodingProber::ProberType>(proberType));
}

libqt_string KEncodingProber_Tr(const char* sourceText) {
    QString _ret = KEncodingProber::tr(sourceText);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KEncodingProber_Reset(KEncodingProber* self) {
    self->reset();
}

int KEncodingProber_Feed(KEncodingProber* self, QByteArrayView* data) {
    return static_cast<int>(self->feed(*data));
}

int KEncodingProber_Feed2(KEncodingProber* self, const char* data, ptrdiff_t lenVal) {
    return static_cast<int>(self->feed(data, (qsizetype)(lenVal)));
}

int KEncodingProber_State(const KEncodingProber* self) {
    return static_cast<int>(self->state());
}

libqt_string KEncodingProber_Encoding(const KEncodingProber* self) {
    QByteArray _qb = self->encoding();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

float KEncodingProber_Confidence(const KEncodingProber* self) {
    return self->confidence();
}

int KEncodingProber_ProberType(const KEncodingProber* self) {
    return static_cast<int>(self->proberType());
}

void KEncodingProber_SetProberType(KEncodingProber* self, int proberType) {
    self->setProberType(static_cast<KEncodingProber::ProberType>(proberType));
}

int KEncodingProber_ProberTypeForName(const libqt_string lang) {
    QString lang_QString = QString::fromUtf8(lang.data, lang.len);
    return static_cast<int>(KEncodingProber::proberTypeForName(lang_QString));
}

libqt_string KEncodingProber_NameForProberType(int proberType) {
    QString _ret = KEncodingProber::nameForProberType(static_cast<KEncodingProber::ProberType>(proberType));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KEncodingProber_Tr2(const char* sourceText, const char* disambiguation) {
    QString _ret = KEncodingProber::tr(sourceText, disambiguation);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KEncodingProber_Tr3(const char* sourceText, const char* disambiguation, int n) {
    QString _ret = KEncodingProber::tr(sourceText, disambiguation, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KEncodingProber_Delete(KEncodingProber* self) {
    delete self;
}
