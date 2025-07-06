#include <QLatin1StringMatcher>
#include <qlatin1stringmatcher.h>
#include "libqlatin1stringmatcher.h"
#include "libqlatin1stringmatcher.hxx"

QLatin1StringMatcher* QLatin1StringMatcher_new() {
    return new QLatin1StringMatcher();
}

void QLatin1StringMatcher_SetCaseSensitivity(QLatin1StringMatcher* self, int cs) {
    self->setCaseSensitivity(static_cast<Qt::CaseSensitivity>(cs));
}

int QLatin1StringMatcher_CaseSensitivity(const QLatin1StringMatcher* self) {
    return static_cast<int>(self->caseSensitivity());
}

void QLatin1StringMatcher_Delete(QLatin1StringMatcher* self) {
    delete self;
}
