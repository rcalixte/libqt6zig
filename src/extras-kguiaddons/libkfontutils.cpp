#include <KFontUtils>
#include <QPainter>
#include <QSizeF>
#include <QString>
#include <kfontutils.h>
#include "libkfontutils.h"
#include "libkfontutils.hxx"

double KFontUtils_AdaptFontSize(QPainter* painter, const libqt_string text, double width, double height, double maxFontSize, double minFontSize, int flags) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return static_cast<double>(KFontUtils::adaptFontSize(*painter, text_QString, static_cast<qreal>(width), static_cast<qreal>(height), static_cast<qreal>(maxFontSize), static_cast<qreal>(minFontSize), static_cast<KFontUtils::AdaptFontSizeOptions>(flags)));
}

double KFontUtils_AdaptFontSize2(QPainter* painter, const libqt_string text, const QSizeF* availableSize, double maxFontSize, double minFontSize, int flags) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return static_cast<double>(KFontUtils::adaptFontSize(*painter, text_QString, *availableSize, static_cast<qreal>(maxFontSize), static_cast<qreal>(minFontSize), static_cast<KFontUtils::AdaptFontSizeOptions>(flags)));
}
