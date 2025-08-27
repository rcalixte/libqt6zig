#include <KFontUtils>
#include <QPainter>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kfontutils.h>
#include "libkfontutils.h"
#include "libkfontutils.hxx"

double KFontUtils_AdaptFontSize(QPainter* param1, const libqt_string param2, double param3, double param4, double param5, double param6, int param7) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    return static_cast<double>(KFontUtils::adaptFontSize(*param1, param2_QString, static_cast<qreal>(param3), static_cast<qreal>(param4), static_cast<qreal>(param5), static_cast<qreal>(param6), static_cast<KFontUtils::AdaptFontSizeOptions>(param7)));
}

double KFontUtils_AdaptFontSize2(QPainter* param1, const libqt_string param2, const QSizeF* param3, double param4, double param5, int param6) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    return static_cast<double>(KFontUtils::adaptFontSize(*param1, param2_QString, *param3, static_cast<qreal>(param4), static_cast<qreal>(param5), static_cast<KFontUtils::AdaptFontSizeOptions>(param6)));
}
