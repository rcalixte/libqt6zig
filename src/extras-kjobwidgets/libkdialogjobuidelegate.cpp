#include <KDialogJobUiDelegate>
#include <KJob>
#include <KJobUiDelegate>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <kdialogjobuidelegate.h>
#include "libkdialogjobuidelegate.h"
#include "libkdialogjobuidelegate.hxx"

KDialogJobUiDelegate* KDialogJobUiDelegate_new() {
    return new KDialogJobUiDelegate();
}

KDialogJobUiDelegate* KDialogJobUiDelegate_new2(int flags, QWidget* window) {
    return new KDialogJobUiDelegate(static_cast<KJobUiDelegate::Flags>(flags), window);
}

QMetaObject* KDialogJobUiDelegate_MetaObject(const KDialogJobUiDelegate* self) {
    return (QMetaObject*)self->metaObject();
}

void* KDialogJobUiDelegate_Metacast(KDialogJobUiDelegate* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KDialogJobUiDelegate_Metacall(KDialogJobUiDelegate* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KDialogJobUiDelegate_Tr(const char* s) {
    QString _ret = KDialogJobUiDelegate::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KDialogJobUiDelegate_SetJob(KDialogJobUiDelegate* self, KJob* job) {
    return self->setJob(job);
}

void KDialogJobUiDelegate_SetWindow(KDialogJobUiDelegate* self, QWidget* window) {
    self->setWindow(window);
}

QWidget* KDialogJobUiDelegate_Window(const KDialogJobUiDelegate* self) {
    return self->window();
}

void KDialogJobUiDelegate_UpdateUserTimestamp(KDialogJobUiDelegate* self, unsigned long time) {
    self->updateUserTimestamp(static_cast<unsigned long>(time));
}

unsigned long KDialogJobUiDelegate_UserTimestamp(const KDialogJobUiDelegate* self) {
    return self->userTimestamp();
}

void KDialogJobUiDelegate_ShowErrorMessage(KDialogJobUiDelegate* self) {
    self->showErrorMessage();
}

libqt_string KDialogJobUiDelegate_Tr2(const char* s, const char* c) {
    QString _ret = KDialogJobUiDelegate::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KDialogJobUiDelegate_Tr3(const char* s, const char* c, int n) {
    QString _ret = KDialogJobUiDelegate::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KDialogJobUiDelegate_Delete(KDialogJobUiDelegate* self) {
    delete self;
}
