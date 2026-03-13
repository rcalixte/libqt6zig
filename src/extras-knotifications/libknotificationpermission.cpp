#include <KNotificationPermission>
#include <QObject>
#include <knotificationpermission.h>
#include "libknotificationpermission.h"
#include "libknotificationpermission.hxx"

int KNotificationPermission_CheckPermission() {
    return static_cast<int>(KNotificationPermission::checkPermission());
}

void KNotificationPermission_RequestPermission(QObject* param1, intptr_t param2) {
    auto param2_func = [param2](Qt::PermissionStatus funcparam1_fp) -> void {
        int funcparam1_fv = static_cast<int>(funcparam1_fp);
        reinterpret_cast<void (*)(int)>(param2)(funcparam1_fv);
    };
    KNotificationPermission::requestPermission(param1, param2_func);
}
