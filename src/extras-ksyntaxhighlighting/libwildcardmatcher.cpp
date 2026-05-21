#define WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__WildcardMatcher
#include <QString>
#include <wildcardmatcher.h>
#include "libwildcardmatcher.h"
#include "libwildcardmatcher.hxx"

bool KSyntaxHighlighting__WildcardMatcher_ExactMatch(libqt_string param1, libqt_string param2) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    return KSyntaxHighlighting::WildcardMatcher::exactMatch(param1_QString, param2_QString);
}
