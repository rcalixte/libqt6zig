#include <KStyleExtensions>
#include <QString>
#include <QWidget>
#include <kstyleextensions.h>
#include "libkstyleextensions.h"
#include "libkstyleextensions.hxx"

int KStyleExtensions_CustomControlElement(const libqt_string element, const QWidget* widget) {
    QString element_QString = QString::fromUtf8(element.data, element.len);
    return static_cast<int>(KStyleExtensions::customControlElement(element_QString, widget));
}

int KStyleExtensions_CustomStyleHint(const libqt_string element, const QWidget* widget) {
    QString element_QString = QString::fromUtf8(element.data, element.len);
    return static_cast<int>(KStyleExtensions::customStyleHint(element_QString, widget));
}

int KStyleExtensions_CustomSubElement(const libqt_string element, const QWidget* widget) {
    QString element_QString = QString::fromUtf8(element.data, element.len);
    return static_cast<int>(KStyleExtensions::customSubElement(element_QString, widget));
}
