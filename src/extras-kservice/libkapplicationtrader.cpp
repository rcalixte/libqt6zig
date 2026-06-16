#include <KApplicationTrader>
#include <QString>
#include <kapplicationtrader.h>
#include "libkapplicationtrader.h"
#include "libkapplicationtrader.hxx"

bool KApplicationTrader_IsSubsequence(const libqt_string pattern, const libqt_string text, int cs) {
    QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return KApplicationTrader::isSubsequence(pattern_QString, text_QString, static_cast<Qt::CaseSensitivity>(cs));
}
