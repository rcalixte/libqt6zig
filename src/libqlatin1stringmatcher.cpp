#include <QLatin1StringMatcher>
#include <qlatin1stringmatcher.h>
#include "libqlatin1stringmatcher.h"
#include "libqlatin1stringmatcher.hxx"

QLatin1StringMatcher* QLatin1StringMatcher_new() {
    return new QLatin1StringMatcher();
}

QLatin1StringMatcher* QLatin1StringMatcher_new2(libqt_string pattern) {
    QLatin1StringView pattern_QLatin1StringView(pattern.data, pattern.len);
    return new QLatin1StringMatcher(pattern_QLatin1StringView);
}

QLatin1StringMatcher* QLatin1StringMatcher_new3(libqt_string pattern, int cs) {
    QLatin1StringView pattern_QLatin1StringView(pattern.data, pattern.len);
    return new QLatin1StringMatcher(pattern_QLatin1StringView, static_cast<Qt::CaseSensitivity>(cs));
}

void QLatin1StringMatcher_SetPattern(QLatin1StringMatcher* self, libqt_string pattern) {
    QLatin1StringView pattern_QLatin1StringView(pattern.data, pattern.len);
    self->setPattern(pattern_QLatin1StringView);
}

libqt_string QLatin1StringMatcher_Pattern(const QLatin1StringMatcher* self) {
    QLatin1StringView _qb = self->pattern();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void QLatin1StringMatcher_SetCaseSensitivity(QLatin1StringMatcher* self, int cs) {
    self->setCaseSensitivity(static_cast<Qt::CaseSensitivity>(cs));
}

int QLatin1StringMatcher_CaseSensitivity(const QLatin1StringMatcher* self) {
    return static_cast<int>(self->caseSensitivity());
}

ptrdiff_t QLatin1StringMatcher_IndexIn(const QLatin1StringMatcher* self, libqt_string haystack) {
    QLatin1StringView haystack_QLatin1StringView(haystack.data, haystack.len);
    return static_cast<ptrdiff_t>(self->indexIn(haystack_QLatin1StringView));
}

ptrdiff_t QLatin1StringMatcher_IndexIn2(const QLatin1StringMatcher* self, libqt_string haystack) {
    QString haystack_QString = QString::fromUtf8(haystack.data, haystack.len);
    return static_cast<ptrdiff_t>(self->indexIn(haystack_QString));
}

ptrdiff_t QLatin1StringMatcher_IndexIn22(const QLatin1StringMatcher* self, libqt_string haystack, ptrdiff_t from) {
    QLatin1StringView haystack_QLatin1StringView(haystack.data, haystack.len);
    return static_cast<ptrdiff_t>(self->indexIn(haystack_QLatin1StringView, (qsizetype)(from)));
}

ptrdiff_t QLatin1StringMatcher_IndexIn23(const QLatin1StringMatcher* self, libqt_string haystack, ptrdiff_t from) {
    QString haystack_QString = QString::fromUtf8(haystack.data, haystack.len);
    return static_cast<ptrdiff_t>(self->indexIn(haystack_QString, (qsizetype)(from)));
}

void QLatin1StringMatcher_Delete(QLatin1StringMatcher* self) {
    delete self;
}
