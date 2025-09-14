#define WORKAROUND_INNER_CLASS_DEFINITION_KServiceConversionCheck__supported
#define WORKAROUND_INNER_CLASS_DEFINITION_KServiceConversionCheck__unsupported
#include <kserviceconversioncheck_p.h>
#include "libkserviceconversioncheck_p.h"
#include "libkserviceconversioncheck_p.hxx"

KServiceConversionCheck__supported* KServiceConversionCheck__supported_new(const KServiceConversionCheck__supported* other) {
    return new KServiceConversionCheck::supported(*other);
}

KServiceConversionCheck__supported* KServiceConversionCheck__supported_new2(KServiceConversionCheck__supported* other) {
    return new KServiceConversionCheck::supported(std::move(*other));
}

void KServiceConversionCheck__supported_CopyAssign(KServiceConversionCheck__supported* self, KServiceConversionCheck__supported* other) {
    *self = *other;
}

void KServiceConversionCheck__supported_MoveAssign(KServiceConversionCheck__supported* self, KServiceConversionCheck__supported* other) {
    *self = std::move(*other);
}

void KServiceConversionCheck__supported_Delete(KServiceConversionCheck__supported* self) {
    delete self;
}

KServiceConversionCheck__unsupported* KServiceConversionCheck__unsupported_new(const KServiceConversionCheck__unsupported* other) {
    return new KServiceConversionCheck::unsupported(*other);
}

KServiceConversionCheck__unsupported* KServiceConversionCheck__unsupported_new2(KServiceConversionCheck__unsupported* other) {
    return new KServiceConversionCheck::unsupported(std::move(*other));
}

void KServiceConversionCheck__unsupported_CopyAssign(KServiceConversionCheck__unsupported* self, KServiceConversionCheck__unsupported* other) {
    *self = *other;
}

void KServiceConversionCheck__unsupported_MoveAssign(KServiceConversionCheck__unsupported* self, KServiceConversionCheck__unsupported* other) {
    *self = std::move(*other);
}

void KServiceConversionCheck__unsupported_Delete(KServiceConversionCheck__unsupported* self) {
    delete self;
}
