#include <KJob>
#include <KJobUiDelegate>
#include <KNotificationJobUiDelegate>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <knotificationjobuidelegate.h>
#include "libknotificationjobuidelegate.h"
#include "libknotificationjobuidelegate.hxx"

KNotificationJobUiDelegate* KNotificationJobUiDelegate_new() {
    return new KNotificationJobUiDelegate();
}

KNotificationJobUiDelegate* KNotificationJobUiDelegate_new2(int flags) {
    return new KNotificationJobUiDelegate(static_cast<KJobUiDelegate::Flags>(flags));
}

QMetaObject* KNotificationJobUiDelegate_MetaObject(const KNotificationJobUiDelegate* self) {
    return (QMetaObject*)self->metaObject();
}

void* KNotificationJobUiDelegate_Metacast(KNotificationJobUiDelegate* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KNotificationJobUiDelegate_Metacall(KNotificationJobUiDelegate* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

void KNotificationJobUiDelegate_ShowErrorMessage(KNotificationJobUiDelegate* self) {
    self->showErrorMessage();
}

void KNotificationJobUiDelegate_Delete(KNotificationJobUiDelegate* self) {
    delete self;
}
