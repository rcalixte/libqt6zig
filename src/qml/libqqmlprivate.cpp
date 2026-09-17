#include <qqmlprivate.h>
#include "libqqmlprivate.h"
#include "libqqmlprivate.hxx"

size_t qqmlprivate_h_QHash(intptr_t func, size_t seed) {
    auto func_func = reinterpret_cast<QQmlAttachedPropertiesFunc>(func);
    return qHash(func_func, static_cast<size_t>(seed));
}
