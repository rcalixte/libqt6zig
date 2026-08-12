const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
pub const PackageKit__Bitfield = extern struct {
    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.PackageKit__Bitfield,

    pub const _is_PackageKit__Bitfield = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new PackageKit::Bitfield object in C++ memory
    ///
    pub fn new() PackageKit__Bitfield {
        return .{ .ptr = qtc.PackageKit__Bitfield_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new PackageKit::Bitfield object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` val: usize `
    ///
    pub fn new2(val: usize) PackageKit__Bitfield {
        return .{ .ptr = qtc.PackageKit__Bitfield_new2(@bitCast(val)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new PackageKit::Bitfield object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: PackageKit__Bitfield `
    ///
    pub fn new3(param1: anytype) PackageKit__Bitfield {
        comptime _ = @TypeOf(param1)._is_PackageKit__Bitfield;
        return .{ .ptr = qtc.PackageKit__Bitfield_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorBitwiseAnd` instead
    ///
    pub const OperatorBitwiseAnd = operatorBitwiseAnd;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Bitfield `
    ///
    /// ` mask: usize `
    ///
    pub fn operatorBitwiseAnd(self: PackageKit__Bitfield, mask: usize) usize {
        return qtc.PackageKit__Bitfield_OperatorBitwiseAnd(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `operatorBitwiseAndAssign` instead
    ///
    pub const OperatorBitwiseAndAssign = operatorBitwiseAndAssign;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Bitfield `
    ///
    /// ` mask: usize `
    ///
    pub fn operatorBitwiseAndAssign(self: PackageKit__Bitfield, mask: usize) void {
        qtc.PackageKit__Bitfield_OperatorBitwiseAndAssign(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `operatorBitwiseOr` instead
    ///
    pub const OperatorBitwiseOr = operatorBitwiseOr;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Bitfield `
    ///
    /// ` mask: usize `
    ///
    pub fn operatorBitwiseOr(self: PackageKit__Bitfield, mask: usize) usize {
        return qtc.PackageKit__Bitfield_OperatorBitwiseOr(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `operatorBitwiseOrAssign` instead
    ///
    pub const OperatorBitwiseOrAssign = operatorBitwiseOrAssign;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Bitfield `
    ///
    /// ` mask: usize `
    ///
    pub fn operatorBitwiseOrAssign(self: PackageKit__Bitfield, mask: usize) void {
        qtc.PackageKit__Bitfield_OperatorBitwiseOrAssign(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `operatorBitwiseAnd2` instead
    ///
    pub const OperatorBitwiseAnd2 = operatorBitwiseAnd2;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Bitfield `
    ///
    /// ` mask: PackageKit__Bitfield `
    ///
    pub fn operatorBitwiseAnd2(self: PackageKit__Bitfield, mask: anytype) PackageKit__Bitfield {
        comptime _ = @TypeOf(mask)._is_PackageKit__Bitfield;
        return .{ .ptr = qtc.PackageKit__Bitfield_OperatorBitwiseAnd2(@ptrCast(self.ptr), @ptrCast(mask.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorBitwiseAndAssign2` instead
    ///
    pub const OperatorBitwiseAndAssign2 = operatorBitwiseAndAssign2;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Bitfield `
    ///
    /// ` mask: PackageKit__Bitfield `
    ///
    pub fn operatorBitwiseAndAssign2(self: PackageKit__Bitfield, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_PackageKit__Bitfield;
        qtc.PackageKit__Bitfield_OperatorBitwiseAndAssign2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// ### DEPRECATED: Use `operatorBitwiseOr2` instead
    ///
    pub const OperatorBitwiseOr2 = operatorBitwiseOr2;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Bitfield `
    ///
    /// ` mask: PackageKit__Bitfield `
    ///
    pub fn operatorBitwiseOr2(self: PackageKit__Bitfield, mask: anytype) PackageKit__Bitfield {
        comptime _ = @TypeOf(mask)._is_PackageKit__Bitfield;
        return .{ .ptr = qtc.PackageKit__Bitfield_OperatorBitwiseOr2(@ptrCast(self.ptr), @ptrCast(mask.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorBitwiseOrAssign2` instead
    ///
    pub const OperatorBitwiseOrAssign2 = operatorBitwiseOrAssign2;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Bitfield `
    ///
    /// ` mask: PackageKit__Bitfield `
    ///
    pub fn operatorBitwiseOrAssign2(self: PackageKit__Bitfield, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_PackageKit__Bitfield;
        qtc.PackageKit__Bitfield_OperatorBitwiseOrAssign2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Bitfield `
    ///
    /// ` other: PackageKit__Bitfield `
    ///
    pub fn operatorAssign(self: PackageKit__Bitfield, other: anytype) void {
        comptime _ = @TypeOf(other)._is_PackageKit__Bitfield;
        qtc.PackageKit__Bitfield_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Bitfield `
    ///
    /// ` other: PackageKit__Bitfield `
    ///
    pub fn operatorEqual(self: PackageKit__Bitfield, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_PackageKit__Bitfield;
        return qtc.PackageKit__Bitfield_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: PackageKit__Bitfield `
    ///
    pub fn delete(self: PackageKit__Bitfield) void {
        qtc.PackageKit__Bitfield_Delete(@ptrCast(self.ptr));
    }
};
