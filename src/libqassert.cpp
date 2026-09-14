#include <qassert.h>
#include "libqassert.h"
#include "libqassert.hxx"

void qassert_h_Assert(const char* assertion, const char* file, int line) {
    qt_assert(assertion, file, static_cast<int>(line));
}

void qassert_h_AssertX(const char* where, const char* what, const char* file, int line) {
    qt_assert_x(where, what, file, static_cast<int>(line));
}

void qassert_h_CheckPointer(const char* param1, int param2) {
    qt_check_pointer(param1, static_cast<int>(param2));
}

bool qassert_h_AssumeIsDeprecated(bool cond) {
    return qt_assume_is_deprecated(cond);
}
