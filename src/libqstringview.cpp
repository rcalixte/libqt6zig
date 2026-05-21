#include <QByteArray>
#include <QChar>
#include <QList>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QString>
#include <QStringView>
#include <qstringview.h>
#include "libqstringview.h"
#include "libqstringview.hxx"

ptrdiff_t QStringView_MaxSize2() {
    return static_cast<ptrdiff_t>(QStringView::maxSize());
}
