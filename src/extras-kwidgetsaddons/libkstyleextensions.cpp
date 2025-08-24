#include <KStyleExtensions>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <kstyleextensions.h>
#include "libkstyleextensions.h"
#include "libkstyleextensions.hxx"

int KStyleExtensions_CustomControlElement(const libqt_string param1, const QWidget* param2) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    return static_cast<int>(KStyleExtensions::customControlElement(param1_QString, param2));
}

int KStyleExtensions_CustomStyleHint(const libqt_string param1, const QWidget* param2) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    return static_cast<int>(KStyleExtensions::customStyleHint(param1_QString, param2));
}

int KStyleExtensions_CustomSubElement(const libqt_string param1, const QWidget* param2) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    return static_cast<int>(KStyleExtensions::customSubElement(param1_QString, param2));
}
