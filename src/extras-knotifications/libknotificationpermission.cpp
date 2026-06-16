#include <KNotificationPermission>
#include <QObject>
#include <knotificationpermission.h>
#include "libknotificationpermission.h"
#include "libknotificationpermission.hxx"

int KNotificationPermission_CheckPermission() {
    return static_cast<int>(KNotificationPermission::checkPermission());
}

void KNotificationPermission_RequestPermission(QObject* context, intptr_t callback) {
    auto callback_func = [callback](Qt::PermissionStatus funcparam1_fp) -> void {
        int funcparam1_fv = static_cast<int>(funcparam1_fp);
        reinterpret_cast<void (*)(int)>(callback)(funcparam1_fv);
    };
    KNotificationPermission::requestPermission(context, callback_func);
}
