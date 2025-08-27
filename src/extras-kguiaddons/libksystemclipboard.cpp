#include <KSystemClipboard>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <ksystemclipboard.h>
#include "libksystemclipboard.h"
#include "libksystemclipboard.hxx"

QMetaObject* KSystemClipboard_MetaObject(const KSystemClipboard* self) {
    return (QMetaObject*)self->metaObject();
}

void* KSystemClipboard_Metacast(KSystemClipboard* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KSystemClipboard_Metacall(KSystemClipboard* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KSystemClipboard_Tr(const char* s) {
    QString _ret = KSystemClipboard::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KSystemClipboard* KSystemClipboard_Instance() {
    return KSystemClipboard::instance();
}

void KSystemClipboard_SetMimeData(KSystemClipboard* self, QMimeData* mime, int mode) {
    self->setMimeData(mime, static_cast<QClipboard::Mode>(mode));
}

void KSystemClipboard_Clear(KSystemClipboard* self, int mode) {
    self->clear(static_cast<QClipboard::Mode>(mode));
}

QMimeData* KSystemClipboard_MimeData(const KSystemClipboard* self, int mode) {
    return (QMimeData*)self->mimeData(static_cast<QClipboard::Mode>(mode));
}

libqt_string KSystemClipboard_Text(KSystemClipboard* self, int mode) {
    QString _ret = self->text(static_cast<QClipboard::Mode>(mode));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KSystemClipboard_Changed(KSystemClipboard* self, int mode) {
    self->changed(static_cast<QClipboard::Mode>(mode));
}

void KSystemClipboard_Connect_Changed(KSystemClipboard* self, intptr_t slot) {
    void (*slotFunc)(KSystemClipboard*, int) = reinterpret_cast<void (*)(KSystemClipboard*, int)>(slot);
    KSystemClipboard::connect(self, &KSystemClipboard::changed, [self, slotFunc](QClipboard::Mode mode) {
        int sigval1 = static_cast<int>(mode);
        slotFunc(self, sigval1);
    });
}

libqt_string KSystemClipboard_Tr2(const char* s, const char* c) {
    QString _ret = KSystemClipboard::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSystemClipboard_Tr3(const char* s, const char* c, int n) {
    QString _ret = KSystemClipboard::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KSystemClipboard_Delete(KSystemClipboard* self) {
    delete self;
}
