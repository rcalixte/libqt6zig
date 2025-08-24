#define WORKAROUND_INNER_CLASS_DEFINITION_KConfigConversionCheck__supported
#define WORKAROUND_INNER_CLASS_DEFINITION_KConfigConversionCheck__unsupported
#include <kconfigconversioncheck_p.h>
#include "libkconfigconversioncheck_p.h"
#include "libkconfigconversioncheck_p.hxx"

KConfigConversionCheck__supported* KConfigConversionCheck__supported_new(const KConfigConversionCheck__supported* other) {
    return new KConfigConversionCheck::supported(*other);
}

KConfigConversionCheck__supported* KConfigConversionCheck__supported_new2(KConfigConversionCheck__supported* other) {
    return new KConfigConversionCheck::supported(std::move(*other));
}

void KConfigConversionCheck__supported_CopyAssign(KConfigConversionCheck__supported* self, KConfigConversionCheck__supported* other) {
    *self = *other;
}

void KConfigConversionCheck__supported_MoveAssign(KConfigConversionCheck__supported* self, KConfigConversionCheck__supported* other) {
    *self = std::move(*other);
}

void KConfigConversionCheck__supported_Delete(KConfigConversionCheck__supported* self) {
    delete self;
}

KConfigConversionCheck__unsupported* KConfigConversionCheck__unsupported_new(const KConfigConversionCheck__unsupported* other) {
    return new KConfigConversionCheck::unsupported(*other);
}

KConfigConversionCheck__unsupported* KConfigConversionCheck__unsupported_new2(KConfigConversionCheck__unsupported* other) {
    return new KConfigConversionCheck::unsupported(std::move(*other));
}

void KConfigConversionCheck__unsupported_CopyAssign(KConfigConversionCheck__unsupported* self, KConfigConversionCheck__unsupported* other) {
    *self = *other;
}

void KConfigConversionCheck__unsupported_MoveAssign(KConfigConversionCheck__unsupported* self, KConfigConversionCheck__unsupported* other) {
    *self = std::move(*other);
}

void KConfigConversionCheck__unsupported_Delete(KConfigConversionCheck__unsupported* self) {
    delete self;
}
