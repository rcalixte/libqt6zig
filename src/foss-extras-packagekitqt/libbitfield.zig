const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
pub const packagekit__bitfield = struct {
    /// New constructs a new PackageKit::Bitfield object.
    ///
    pub fn New() QtC.PackageKit__Bitfield {
        return qtc.PackageKit__Bitfield_new();
    }

    /// New2 constructs a new PackageKit::Bitfield object.
    ///
    /// ## Parameter(s):
    ///
    /// ` val: u64 `
    ///
    pub fn New2(val: u64) QtC.PackageKit__Bitfield {
        return qtc.PackageKit__Bitfield_new2(@intCast(val));
    }

    /// New3 constructs a new PackageKit::Bitfield object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.PackageKit__Bitfield `
    ///
    pub fn New3(param1: ?*anyopaque) QtC.PackageKit__Bitfield {
        return qtc.PackageKit__Bitfield_new3(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Bitfield `
    ///
    /// ` mask: u64 `
    ///
    pub fn OperatorBitwiseAnd(self: ?*anyopaque, mask: u64) u64 {
        return qtc.PackageKit__Bitfield_OperatorBitwiseAnd(@ptrCast(self), @intCast(mask));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Bitfield `
    ///
    /// ` mask: u64 `
    ///
    pub fn OperatorBitwiseAndAssign(self: ?*anyopaque, mask: u64) void {
        qtc.PackageKit__Bitfield_OperatorBitwiseAndAssign(@ptrCast(self), @intCast(mask));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Bitfield `
    ///
    /// ` mask: u64 `
    ///
    pub fn OperatorBitwiseOr(self: ?*anyopaque, mask: u64) u64 {
        return qtc.PackageKit__Bitfield_OperatorBitwiseOr(@ptrCast(self), @intCast(mask));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Bitfield `
    ///
    /// ` mask: u64 `
    ///
    pub fn OperatorBitwiseOrAssign(self: ?*anyopaque, mask: u64) void {
        qtc.PackageKit__Bitfield_OperatorBitwiseOrAssign(@ptrCast(self), @intCast(mask));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Bitfield `
    ///
    /// ` mask: QtC.PackageKit__Bitfield `
    ///
    pub fn OperatorBitwiseAnd2(self: ?*anyopaque, mask: QtC.PackageKit__Bitfield) QtC.PackageKit__Bitfield {
        return qtc.PackageKit__Bitfield_OperatorBitwiseAnd2(@ptrCast(self), @ptrCast(mask));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Bitfield `
    ///
    /// ` mask: QtC.PackageKit__Bitfield `
    ///
    pub fn OperatorBitwiseAndAssign2(self: ?*anyopaque, mask: QtC.PackageKit__Bitfield) void {
        qtc.PackageKit__Bitfield_OperatorBitwiseAndAssign2(@ptrCast(self), @ptrCast(mask));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Bitfield `
    ///
    /// ` mask: QtC.PackageKit__Bitfield `
    ///
    pub fn OperatorBitwiseOr2(self: ?*anyopaque, mask: QtC.PackageKit__Bitfield) QtC.PackageKit__Bitfield {
        return qtc.PackageKit__Bitfield_OperatorBitwiseOr2(@ptrCast(self), @ptrCast(mask));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Bitfield `
    ///
    /// ` mask: QtC.PackageKit__Bitfield `
    ///
    pub fn OperatorBitwiseOrAssign2(self: ?*anyopaque, mask: QtC.PackageKit__Bitfield) void {
        qtc.PackageKit__Bitfield_OperatorBitwiseOrAssign2(@ptrCast(self), @ptrCast(mask));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Bitfield `
    ///
    /// ` other: QtC.PackageKit__Bitfield `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.PackageKit__Bitfield_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Bitfield `
    ///
    /// ` other: QtC.PackageKit__Bitfield `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.PackageKit__Bitfield_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.PackageKit__Bitfield `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.PackageKit__Bitfield_Delete(@ptrCast(self));
    }
};
