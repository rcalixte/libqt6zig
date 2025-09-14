#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__OpenWithHandlerInterface
#include <KJob>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <openwithhandlerinterface.h>
#include "libopenwithhandlerinterface.h"
#include "libopenwithhandlerinterface.hxx"

QMetaObject* KIO__OpenWithHandlerInterface_MetaObject(const KIO__OpenWithHandlerInterface* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__OpenWithHandlerInterface_Metacast(KIO__OpenWithHandlerInterface* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__OpenWithHandlerInterface_Metacall(KIO__OpenWithHandlerInterface* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KIO__OpenWithHandlerInterface_Tr(const char* s) {
    QString _ret = KIO::OpenWithHandlerInterface::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__OpenWithHandlerInterface_PromptUserForApplication(KIO__OpenWithHandlerInterface* self, KJob* job, const libqt_list /* of QUrl* */ urls, const libqt_string mimeType) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    self->promptUserForApplication(job, urls_QList, mimeType_QString);
}

void KIO__OpenWithHandlerInterface_Canceled(KIO__OpenWithHandlerInterface* self) {
    self->canceled();
}

void KIO__OpenWithHandlerInterface_Connect_Canceled(KIO__OpenWithHandlerInterface* self, intptr_t slot) {
    void (*slotFunc)(KIO__OpenWithHandlerInterface*) = reinterpret_cast<void (*)(KIO__OpenWithHandlerInterface*)>(slot);
    KIO::OpenWithHandlerInterface::connect(self, &KIO::OpenWithHandlerInterface::canceled, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KIO__OpenWithHandlerInterface_Handled(KIO__OpenWithHandlerInterface* self) {
    self->handled();
}

void KIO__OpenWithHandlerInterface_Connect_Handled(KIO__OpenWithHandlerInterface* self, intptr_t slot) {
    void (*slotFunc)(KIO__OpenWithHandlerInterface*) = reinterpret_cast<void (*)(KIO__OpenWithHandlerInterface*)>(slot);
    KIO::OpenWithHandlerInterface::connect(self, &KIO::OpenWithHandlerInterface::handled, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string KIO__OpenWithHandlerInterface_Tr2(const char* s, const char* c) {
    QString _ret = KIO::OpenWithHandlerInterface::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__OpenWithHandlerInterface_Tr3(const char* s, const char* c, int n) {
    QString _ret = KIO::OpenWithHandlerInterface::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}
