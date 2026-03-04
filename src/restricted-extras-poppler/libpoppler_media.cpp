#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__MediaRendition
#include <QByteArray>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <poppler-media.h>
#include "libpoppler_media.h"
#include "libpoppler_media.hxx"

bool Poppler__MediaRendition_IsValid(const Poppler__MediaRendition* self) {
    return self->isValid();
}

libqt_string Poppler__MediaRendition_ContentType(const Poppler__MediaRendition* self) {
    QString _ret = self->contentType();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Poppler__MediaRendition_FileName(const Poppler__MediaRendition* self) {
    QString _ret = self->fileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Poppler__MediaRendition_IsEmbedded(const Poppler__MediaRendition* self) {
    return self->isEmbedded();
}

libqt_string Poppler__MediaRendition_Data(const Poppler__MediaRendition* self) {
    QByteArray _qb = self->data();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

bool Poppler__MediaRendition_AutoPlay(const Poppler__MediaRendition* self) {
    return self->autoPlay();
}

bool Poppler__MediaRendition_ShowControls(const Poppler__MediaRendition* self) {
    return self->showControls();
}

float Poppler__MediaRendition_RepeatCount(const Poppler__MediaRendition* self) {
    return self->repeatCount();
}

QSize* Poppler__MediaRendition_Size(const Poppler__MediaRendition* self) {
    return new QSize(self->size());
}

void Poppler__MediaRendition_Delete(Poppler__MediaRendition* self) {
    delete self;
}
