#include <KIconUtils>
#include <QHash>
#include <QIcon>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kiconutils.h>
#include "libkiconutils.h"
#include "libkiconutils.hxx"

QIcon* KIconUtils_AddOverlay(const QIcon* param1, const QIcon* param2, int param3) {
    return new QIcon(KIconUtils::addOverlay(*param1, *param2, static_cast<Qt::Corner>(param3)));
}

QIcon* KIconUtils_AddOverlays(const QIcon* param1, const libqt_map /* of int to QIcon* */ param2) {
    QHash<Qt::Corner, QIcon> param2_QMap;
    param2_QMap.reserve(param2.len);
    int* param2_karr = static_cast<int*>(param2.keys);
    QIcon** param2_varr = static_cast<QIcon**>(param2.values);
    for (size_t i = 0; i < param2.len; ++i) {
        param2_QMap[static_cast<Qt::Corner>(param2_karr[i])] = *(param2_varr[i]);
    }
    return new QIcon(KIconUtils::addOverlays(*param1, param2_QMap));
}

QIcon* KIconUtils_AddOverlays2(const QIcon* param1, const libqt_list /* of libqt_string */ param2) {
    QList<QString> param2_QList;
    param2_QList.reserve(param2.len);
    libqt_string* param2_arr = static_cast<libqt_string*>(param2.data);
    for (size_t i = 0; i < param2.len; ++i) {
        QString param2_arr_i_QString = QString::fromUtf8(param2_arr[i].data, param2_arr[i].len);
        param2_QList.push_back(param2_arr_i_QString);
    }
    return new QIcon(KIconUtils::addOverlays(*param1, param2_QList));
}

QIcon* KIconUtils_AddOverlays3(const libqt_string param1, const libqt_list /* of libqt_string */ param2) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QList<QString> param2_QList;
    param2_QList.reserve(param2.len);
    libqt_string* param2_arr = static_cast<libqt_string*>(param2.data);
    for (size_t i = 0; i < param2.len; ++i) {
        QString param2_arr_i_QString = QString::fromUtf8(param2_arr[i].data, param2_arr[i].len);
        param2_QList.push_back(param2_arr_i_QString);
    }
    return new QIcon(KIconUtils::addOverlays(param1_QString, param2_QList));
}
