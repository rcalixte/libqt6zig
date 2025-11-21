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

void KDialogJobUiDelegate_Delete(KDialogJobUiDelegate* self) {
    delete self;
}
