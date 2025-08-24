#include <KAcceleratorManager>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <kacceleratormanager.h>
#include "libkacceleratormanager.h"
#include "libkacceleratormanager.hxx"

KAcceleratorManager* KAcceleratorManager_new(const KAcceleratorManager* other) {
    return new KAcceleratorManager(*other);
}

KAcceleratorManager* KAcceleratorManager_new2(KAcceleratorManager* other) {
    return new KAcceleratorManager(std::move(*other));
}

void KAcceleratorManager_CopyAssign(KAcceleratorManager* self, KAcceleratorManager* other) {
    *self = *other;
}

void KAcceleratorManager_MoveAssign(KAcceleratorManager* self, KAcceleratorManager* other) {
    *self = std::move(*other);
}

void KAcceleratorManager_Manage(QWidget* widget) {
    KAcceleratorManager::manage(widget);
}

void KAcceleratorManager_LastManage(libqt_string added, libqt_string changed, libqt_string removed) {
    QString added_QString = QString::fromUtf8(added.data, added.len);
    QString changed_QString = QString::fromUtf8(changed.data, changed.len);
    QString removed_QString = QString::fromUtf8(removed.data, removed.len);
    KAcceleratorManager::last_manage(added_QString, changed_QString, removed_QString);
}

void KAcceleratorManager_SetNoAccel(QWidget* widget) {
    KAcceleratorManager::setNoAccel(widget);
}

void KAcceleratorManager_AddStandardActionNames(const libqt_list /* of libqt_string */ names) {
    QList<QString> names_QList;
    names_QList.reserve(names.len);
    libqt_string* names_arr = static_cast<libqt_string*>(names.data);
    for (size_t i = 0; i < names.len; ++i) {
        QString names_arr_i_QString = QString::fromUtf8(names_arr[i].data, names_arr[i].len);
        names_QList.push_back(names_arr_i_QString);
    }
    KAcceleratorManager::addStandardActionNames(names_QList);
}

void KAcceleratorManager_Manage2(QWidget* widget, bool programmers_mode) {
    KAcceleratorManager::manage(widget, programmers_mode);
}

void KAcceleratorManager_Delete(KAcceleratorManager* self) {
    delete self;
}
