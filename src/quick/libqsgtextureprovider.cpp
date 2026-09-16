#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSGTexture>
#include <QSGTextureProvider>
#include <QString>
#include <qsgtextureprovider.h>
#include "libqsgtextureprovider.h"
#include "libqsgtextureprovider.hxx"

QMetaObject* QSGTextureProvider_MetaObject(const QSGTextureProvider* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSGTextureProvider_Metacast(QSGTextureProvider* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSGTextureProvider_Metacall(QSGTextureProvider* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QSGTextureProvider_Tr(const char* s) {
    auto _ret = QSGTextureProvider::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSGTexture* QSGTextureProvider_Texture(const QSGTextureProvider* self) {
    return self->texture();
}

void QSGTextureProvider_TextureChanged(QSGTextureProvider* self) {
    self->textureChanged();
}

void QSGTextureProvider_Connect_TextureChanged(QSGTextureProvider* self, intptr_t slot) {
    void (*slotFunc)(QSGTextureProvider*) = reinterpret_cast<void (*)(QSGTextureProvider*)>(slot);
    QSGTextureProvider::connect(self, &QSGTextureProvider::textureChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QSGTextureProvider_Tr2(const char* s, const char* c) {
    auto _ret = QSGTextureProvider::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSGTextureProvider_Tr3(const char* s, const char* c, int n) {
    auto _ret = QSGTextureProvider::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSGTextureProvider_Delete(QSGTextureProvider* self) {
    delete self;
}
