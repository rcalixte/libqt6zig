#include <KWaylandExtras>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWindow>
#include <kwaylandextras.h>
#include "libkwaylandextras.h"
#include "libkwaylandextras.hxx"

QMetaObject* KWaylandExtras_MetaObject(const KWaylandExtras* self) {
    return (QMetaObject*)self->metaObject();
}

void* KWaylandExtras_Metacast(KWaylandExtras* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KWaylandExtras_Metacall(KWaylandExtras* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KWaylandExtras_Tr(const char* s) {
    QString _ret = KWaylandExtras::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KWaylandExtras* KWaylandExtras_Self() {
    return KWaylandExtras::self();
}

void KWaylandExtras_RequestXdgActivationToken(QWindow* win, uint32_t serial, const libqt_string app_id) {
    QString app_id_QString = QString::fromUtf8(app_id.data, app_id.len);
    KWaylandExtras::requestXdgActivationToken(win, static_cast<uint32_t>(serial), app_id_QString);
}

unsigned int KWaylandExtras_LastInputSerial(QWindow* window) {
    return static_cast<unsigned int>(KWaylandExtras::lastInputSerial(window));
}

void KWaylandExtras_ExportWindow(QWindow* window) {
    KWaylandExtras::exportWindow(window);
}

void KWaylandExtras_UnexportWindow(QWindow* window) {
    KWaylandExtras::unexportWindow(window);
}

void KWaylandExtras_XdgActivationTokenArrived(KWaylandExtras* self, int serial, const libqt_string token) {
    QString token_QString = QString::fromUtf8(token.data, token.len);
    self->xdgActivationTokenArrived(static_cast<int>(serial), token_QString);
}

void KWaylandExtras_Connect_XdgActivationTokenArrived(KWaylandExtras* self, intptr_t slot) {
    void (*slotFunc)(KWaylandExtras*, int, const char*) = reinterpret_cast<void (*)(KWaylandExtras*, int, const char*)>(slot);
    KWaylandExtras::connect(self, &KWaylandExtras::xdgActivationTokenArrived, [self, slotFunc](int serial, const QString& token) {
        int sigval1 = serial;
        const QString token_ret = token;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray token_b = token_ret.toUtf8();
        const char* token_str = static_cast<const char*>(malloc(token_b.length() + 1));
        memcpy((void*)token_str, token_b.data(), token_b.length());
        ((char*)token_str)[token_b.length()] = '\0';
        const char* sigval2 = token_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(token_str);
    });
}

void KWaylandExtras_WindowExported(KWaylandExtras* self, QWindow* window, const libqt_string handle) {
    QString handle_QString = QString::fromUtf8(handle.data, handle.len);
    self->windowExported(window, handle_QString);
}

void KWaylandExtras_Connect_WindowExported(KWaylandExtras* self, intptr_t slot) {
    void (*slotFunc)(KWaylandExtras*, QWindow*, const char*) = reinterpret_cast<void (*)(KWaylandExtras*, QWindow*, const char*)>(slot);
    KWaylandExtras::connect(self, &KWaylandExtras::windowExported, [self, slotFunc](QWindow* window, const QString& handle) {
        QWindow* sigval1 = window;
        const QString handle_ret = handle;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray handle_b = handle_ret.toUtf8();
        const char* handle_str = static_cast<const char*>(malloc(handle_b.length() + 1));
        memcpy((void*)handle_str, handle_b.data(), handle_b.length());
        ((char*)handle_str)[handle_b.length()] = '\0';
        const char* sigval2 = handle_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(handle_str);
    });
}

libqt_string KWaylandExtras_Tr2(const char* s, const char* c) {
    QString _ret = KWaylandExtras::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KWaylandExtras_Tr3(const char* s, const char* c, int n) {
    QString _ret = KWaylandExtras::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}
