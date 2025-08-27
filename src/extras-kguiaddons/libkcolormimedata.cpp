#include <KColorMimeData>
#include <QColor>
#include <QDrag>
#include <QMimeData>
#include <QObject>
#include <kcolormimedata.h>
#include "libkcolormimedata.h"
#include "libkcolormimedata.hxx"

void KColorMimeData_PopulateMimeData(QMimeData* param1, const QColor* param2) {
    KColorMimeData::populateMimeData(param1, *param2);
}

bool KColorMimeData_CanDecode(const QMimeData* param1) {
    return KColorMimeData::canDecode(param1);
}

QColor* KColorMimeData_FromMimeData(const QMimeData* param1) {
    return new QColor(KColorMimeData::fromMimeData(param1));
}

QDrag* KColorMimeData_CreateDrag(const QColor* param1, QObject* param2) {
    return KColorMimeData::createDrag(*param1, param2);
}
