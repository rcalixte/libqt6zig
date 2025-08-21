#include <q20type_traits.h>
#include "libq20type_traits.h"
#include "libq20type_traits.hxx"

bool q20_IsConstantEvaluated() {
    return q20::is_constant_evaluated();
}
