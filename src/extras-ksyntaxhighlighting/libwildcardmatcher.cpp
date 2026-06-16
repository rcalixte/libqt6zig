#define WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__WildcardMatcher
#include <QString>
#include <wildcardmatcher.h>
#include "libwildcardmatcher.h"
#include "libwildcardmatcher.hxx"

bool KSyntaxHighlighting__WildcardMatcher_ExactMatch(libqt_string candidate, libqt_string wildcard) {
    QString candidate_QString = QString::fromUtf8(candidate.data, candidate.len);
    QString wildcard_QString = QString::fromUtf8(wildcard.data, wildcard.len);
    return KSyntaxHighlighting::WildcardMatcher::exactMatch(candidate_QString, wildcard_QString);
}
