#define WORKAROUND_INNER_CLASS_DEFINITION_PackageKit__Bitfield
#include <bitfield.h>
#include "libbitfield.h"
#include "libbitfield.hxx"

PackageKit__Bitfield* PackageKit__Bitfield_new() {
    return new PackageKit::Bitfield();
}

PackageKit__Bitfield* PackageKit__Bitfield_new2(unsigned long long val) {
    return new PackageKit::Bitfield(static_cast<qulonglong>(val));
}

PackageKit__Bitfield* PackageKit__Bitfield_new3(const PackageKit__Bitfield* param1) {
    return new PackageKit::Bitfield(*param1);
}

unsigned long long PackageKit__Bitfield_OperatorBitwiseAnd(const PackageKit__Bitfield* self, unsigned long long mask) {
    return static_cast<unsigned long long>(self->operator&(static_cast<qulonglong>(mask)));
}

void PackageKit__Bitfield_OperatorBitwiseAndAssign(PackageKit__Bitfield* self, unsigned long long mask) {
    self->operator&=(static_cast<qulonglong>(mask));
}

unsigned long long PackageKit__Bitfield_OperatorBitwiseOr(const PackageKit__Bitfield* self, unsigned long long mask) {
    return static_cast<unsigned long long>(self->operator|(static_cast<qulonglong>(mask)));
}

void PackageKit__Bitfield_OperatorBitwiseOrAssign(PackageKit__Bitfield* self, unsigned long long mask) {
    self->operator|=(static_cast<qulonglong>(mask));
}

PackageKit__Bitfield* PackageKit__Bitfield_OperatorBitwiseAnd2(const PackageKit__Bitfield* self, PackageKit__Bitfield* mask) {
    return new PackageKit::Bitfield(self->operator&(*mask));
}

void PackageKit__Bitfield_OperatorBitwiseAndAssign2(PackageKit__Bitfield* self, PackageKit__Bitfield* mask) {
    self->operator&=(*mask);
}

PackageKit__Bitfield* PackageKit__Bitfield_OperatorBitwiseOr2(const PackageKit__Bitfield* self, PackageKit__Bitfield* mask) {
    return new PackageKit::Bitfield(self->operator|(*mask));
}

void PackageKit__Bitfield_OperatorBitwiseOrAssign2(PackageKit__Bitfield* self, PackageKit__Bitfield* mask) {
    self->operator|=(*mask);
}

void PackageKit__Bitfield_OperatorAssign(PackageKit__Bitfield* self, const PackageKit__Bitfield* other) {
    self->operator=(*other);
}

bool PackageKit__Bitfield_OperatorEqual(PackageKit__Bitfield* self, const PackageKit__Bitfield* other) {
    return (*self == *other);
}

void PackageKit__Bitfield_Delete(PackageKit__Bitfield* self) {
    delete self;
}
