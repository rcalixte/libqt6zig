#include <KBuildSycocaProgressDialog>
#include <QDialog>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPaintDevice>
#include <QProgressDialog>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <kbuildsycocaprogressdialog.h>
#include "libkbuildsycocaprogressdialog.h"
#include "libkbuildsycocaprogressdialog.hxx"

QMetaObject* KBuildSycocaProgressDialog_MetaObject(const KBuildSycocaProgressDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KBuildSycocaProgressDialog_Metacast(KBuildSycocaProgressDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KBuildSycocaProgressDialog_Metacall(KBuildSycocaProgressDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

void KBuildSycocaProgressDialog_RebuildKSycoca(QWidget* parent) {
    KBuildSycocaProgressDialog::rebuildKSycoca(parent);
}
