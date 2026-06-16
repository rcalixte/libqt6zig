#include <KIconUtils>
#include <QHash>
#include <QIcon>
#include <QList>
#include <QString>
#include <kiconutils.h>
#include "libkiconutils.h"
#include "libkiconutils.hxx"

QIcon* KIconUtils_AddOverlay(const QIcon* icon, const QIcon* overlay, int position) {
    return new QIcon(KIconUtils::addOverlay(*icon, *overlay, static_cast<Qt::Corner>(position)));
}

QIcon* KIconUtils_AddOverlays(const QIcon* icon, const libqt_map /* of int to QIcon* */ overlays) {
    QHash<Qt::Corner, QIcon> overlays_QHash;
    overlays_QHash.reserve(overlays.len);
    int* overlays_karr = static_cast<int*>(overlays.keys);
    QIcon** overlays_varr = static_cast<QIcon**>(overlays.values);
    for (size_t i = 0; i < overlays.len; ++i) {
        overlays_QHash[static_cast<Qt::Corner>(overlays_karr[i])] = *(overlays_varr[i]);
    }
    return new QIcon(KIconUtils::addOverlays(*icon, overlays_QHash));
}

QIcon* KIconUtils_AddOverlays2(const QIcon* icon, const libqt_list /* of libqt_string */ overlays) {
    QList<QString> overlays_QList;
    overlays_QList.reserve(overlays.len);
    libqt_string* overlays_arr = static_cast<libqt_string*>(overlays.data);
    for (size_t i = 0; i < overlays.len; ++i) {
        QString overlays_arr_i_QString = QString::fromUtf8(overlays_arr[i].data, overlays_arr[i].len);
        overlays_QList.push_back(overlays_arr_i_QString);
    }
    return new QIcon(KIconUtils::addOverlays(*icon, overlays_QList));
}

QIcon* KIconUtils_AddOverlays3(const libqt_string iconName, const libqt_list /* of libqt_string */ overlays) {
    QString iconName_QString = QString::fromUtf8(iconName.data, iconName.len);
    QList<QString> overlays_QList;
    overlays_QList.reserve(overlays.len);
    libqt_string* overlays_arr = static_cast<libqt_string*>(overlays.data);
    for (size_t i = 0; i < overlays.len; ++i) {
        QString overlays_arr_i_QString = QString::fromUtf8(overlays_arr[i].data, overlays_arr[i].len);
        overlays_QList.push_back(overlays_arr_i_QString);
    }
    return new QIcon(KIconUtils::addOverlays(iconName_QString, overlays_QList));
}
