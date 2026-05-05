#include <QLatin1StringMatcher>
#include <qlatin1stringmatcher.h>
#include "libqlatin1stringmatcher.h"
#include "libqlatin1stringmatcher.hxx"

QLatin1StringMatcher* QLatin1StringMatcher_new() {
    return new QLatin1StringMatcher();
}

QLatin1StringMatcher* QLatin1StringMatcher_new2(libqt_string pattern) {
    QLatin1StringView pattern_QString = QLatin1StringView(pattern.data, pattern.len);
    return new QLatin1StringMatcher(pattern_QString);
}

QLatin1StringMatcher* QLatin1StringMatcher_new3(libqt_string pattern, int cs) {
    QLatin1StringView pattern_QString = QLatin1StringView(pattern.data, pattern.len);
    return new QLatin1StringMatcher(pattern_QString, static_cast<Qt::CaseSensitivity>(cs));
}

void QLatin1StringMatcher_SetPattern(QLatin1StringMatcher* self, libqt_string pattern) {
    QLatin1StringView pattern_QString = QLatin1StringView(pattern.data, pattern.len);
    self->setPattern(pattern_QString);
}

libqt_string QLatin1StringMatcher_Pattern(const QLatin1StringMatcher* self) {
    QString _ret = self->pattern();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QLatin1StringMatcher_SetCaseSensitivity(QLatin1StringMatcher* self, int cs) {
    self->setCaseSensitivity(static_cast<Qt::CaseSensitivity>(cs));
}

int QLatin1StringMatcher_CaseSensitivity(const QLatin1StringMatcher* self) {
    return static_cast<int>(self->caseSensitivity());
}

ptrdiff_t QLatin1StringMatcher_IndexIn(const QLatin1StringMatcher* self, libqt_string haystack) {
    QLatin1StringView haystack_QString = QLatin1StringView(haystack.data, haystack.len);
    return static_cast<ptrdiff_t>(self->indexIn(haystack_QString));
}

ptrdiff_t QLatin1StringMatcher_IndexIn22(const QLatin1StringMatcher* self, libqt_string haystack, ptrdiff_t from) {
    QLatin1StringView haystack_QString = QLatin1StringView(haystack.data, haystack.len);
    return static_cast<ptrdiff_t>(self->indexIn(haystack_QString, (qsizetype)(from)));
}

void QLatin1StringMatcher_Delete(QLatin1StringMatcher* self) {
    delete self;
}
