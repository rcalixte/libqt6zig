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

    /// New constructs a new PackageKit::Bitfield object.
    ///
    pub fn New() PackageKit__Bitfield {
        return .{ .ptr = qtc.PackageKit__Bitfield_new() };
    }

    /// New2 constructs a new PackageKit::Bitfield object.
    ///
    /// ## Parameter(s):
    ///
    /// ` val: usize `
    ///
    pub fn New2(val: usize) PackageKit__Bitfield {
        return .{ .ptr = qtc.PackageKit__Bitfield_new2(@bitCast(val)) };
    }

    /// New3 constructs a new PackageKit::Bitfield object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: PackageKit__Bitfield `
    ///
    pub fn New3(param1: anytype) PackageKit__Bitfield {
        comptime _ = @TypeOf(param1)._is_PackageKit__Bitfield;
        return .{ .ptr = qtc.PackageKit__Bitfield_new3(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Bitfield `
    ///
    /// ` mask: usize `
    ///
    pub fn OperatorBitwiseAnd(self: PackageKit__Bitfield, mask: usize) usize {
        return qtc.PackageKit__Bitfield_OperatorBitwiseAnd(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Bitfield `
    ///
    /// ` mask: usize `
    ///
    pub fn OperatorBitwiseAndAssign(self: PackageKit__Bitfield, mask: usize) void {
        qtc.PackageKit__Bitfield_OperatorBitwiseAndAssign(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Bitfield `
    ///
    /// ` mask: usize `
    ///
    pub fn OperatorBitwiseOr(self: PackageKit__Bitfield, mask: usize) usize {
        return qtc.PackageKit__Bitfield_OperatorBitwiseOr(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Bitfield `
    ///
    /// ` mask: usize `
    ///
    pub fn OperatorBitwiseOrAssign(self: PackageKit__Bitfield, mask: usize) void {
        qtc.PackageKit__Bitfield_OperatorBitwiseOrAssign(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Bitfield `
    ///
    /// ` mask: PackageKit__Bitfield `
    ///
    pub fn OperatorBitwiseAnd2(self: PackageKit__Bitfield, mask: anytype) PackageKit__Bitfield {
        comptime _ = @TypeOf(mask)._is_PackageKit__Bitfield;
        return .{ .ptr = qtc.PackageKit__Bitfield_OperatorBitwiseAnd2(@ptrCast(self.ptr), @ptrCast(mask.ptr)) };
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Bitfield `
    ///
    /// ` mask: PackageKit__Bitfield `
    ///
    pub fn OperatorBitwiseAndAssign2(self: PackageKit__Bitfield, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_PackageKit__Bitfield;
        qtc.PackageKit__Bitfield_OperatorBitwiseAndAssign2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Bitfield `
    ///
    /// ` mask: PackageKit__Bitfield `
    ///
    pub fn OperatorBitwiseOr2(self: PackageKit__Bitfield, mask: anytype) PackageKit__Bitfield {
        comptime _ = @TypeOf(mask)._is_PackageKit__Bitfield;
        return .{ .ptr = qtc.PackageKit__Bitfield_OperatorBitwiseOr2(@ptrCast(self.ptr), @ptrCast(mask.ptr)) };
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Bitfield `
    ///
    /// ` mask: PackageKit__Bitfield `
    ///
    pub fn OperatorBitwiseOrAssign2(self: PackageKit__Bitfield, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_PackageKit__Bitfield;
        qtc.PackageKit__Bitfield_OperatorBitwiseOrAssign2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Bitfield `
    ///
    /// ` other: PackageKit__Bitfield `
    ///
    pub fn OperatorAssign(self: PackageKit__Bitfield, other: anytype) void {
        comptime _ = @TypeOf(other)._is_PackageKit__Bitfield;
        qtc.PackageKit__Bitfield_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Bitfield `
    ///
    /// ` other: PackageKit__Bitfield `
    ///
    pub fn OperatorEqual(self: PackageKit__Bitfield, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_PackageKit__Bitfield;
        return qtc.PackageKit__Bitfield_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: PackageKit__Bitfield `
    ///
    pub fn Delete(self: PackageKit__Bitfield) void {
        qtc.PackageKit__Bitfield_Delete(@ptrCast(self.ptr));
    }
};
