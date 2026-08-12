const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDateTime = @import("libqt6").QDateTime;
const qnetworkaccessmanager_enums = @import("../network/libqnetworkaccessmanager.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-utils.html)
pub const Attica__Utils = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-utils.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__Utils,

    pub const _is_Attica__Utils = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::Utils object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Utils `
    ///
    pub fn new(other: anytype) Attica__Utils {
        comptime _ = @TypeOf(other)._is_Attica__Utils;
        return .{ .ptr = qtc.Attica__Utils_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::Utils object and invalidate the source Attica::Utils object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Utils `
    ///
    pub fn new2(other: anytype) Attica__Utils {
        comptime _ = @TypeOf(other)._is_Attica__Utils;
        return .{ .ptr = qtc.Attica__Utils_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: Attica__Utils `
    ///
    /// ` other: Attica__Utils `
    ///
    pub fn copyAssign(self: Attica__Utils, other: Attica__Utils) void {
        qtc.Attica__Utils_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: Attica__Utils `
    ///
    /// ` other: Attica__Utils `
    ///
    pub fn moveAssign(self: Attica__Utils, other: Attica__Utils) void {
        qtc.Attica__Utils_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `parseQtDateTimeIso8601` instead
    ///
    pub const ParseQtDateTimeIso8601 = parseQtDateTimeIso8601;

    /// ### [Upstream resources](https://api.kde.org/attica-utils.html#parseQtDateTimeIso8601)
    ///
    /// ## Parameter(s):
    ///
    /// ` str: []const u8 `
    ///
    pub fn parseQtDateTimeIso8601(str: []const u8) QDateTime {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return .{ .ptr = qtc.Attica__Utils_ParseQtDateTimeIso8601(str_str) };
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://api.kde.org/attica-utils.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` operation: qnetworkaccessmanager_enums.Operation `
    ///
    pub fn toString(operation: i32) [:0]const u8 {
        const _ret = qtc.Attica__Utils_ToString(@bitCast(operation));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Utils `
    ///
    pub fn delete(self: Attica__Utils) void {
        qtc.Attica__Utils_Delete(@ptrCast(self.ptr));
    }
};
