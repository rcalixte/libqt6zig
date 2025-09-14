#include <KApplicationTrader>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kapplicationtrader.h>
#include "libkapplicationtrader.h"
#include "libkapplicationtrader.hxx"

bool KApplicationTrader_IsSubsequence(const libqt_string param1, const libqt_string param2, int param3) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    return KApplicationTrader::isSubsequence(param1_QString, param2_QString, static_cast<Qt::CaseSensitivity>(param3));
}
