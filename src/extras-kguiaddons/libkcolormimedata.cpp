#include <KColorMimeData>
#include <QColor>
#include <QDrag>
#include <QMimeData>
#include <QObject>
#include <kcolormimedata.h>
#include "libkcolormimedata.h"
#include "libkcolormimedata.hxx"

void KColorMimeData_PopulateMimeData(QMimeData* mimeData, const QColor* color) {
    KColorMimeData::populateMimeData(mimeData, *color);
}

bool KColorMimeData_CanDecode(const QMimeData* mimeData) {
    return KColorMimeData::canDecode(mimeData);
}

QColor* KColorMimeData_FromMimeData(const QMimeData* mimeData) {
    return new QColor(KColorMimeData::fromMimeData(mimeData));
}

QDrag* KColorMimeData_CreateDrag(const QColor* color, QObject* dragsource) {
    return KColorMimeData::createDrag(*color, dragsource);
}
