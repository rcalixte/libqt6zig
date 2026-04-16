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

    /// New constructs a new Attica::Utils object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Utils `
    ///
    pub fn New(other: anytype) Attica__Utils {
        comptime _ = @TypeOf(other)._is_Attica__Utils;
        return .{ .ptr = qtc.Attica__Utils_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new Attica::Utils object and invalidates the source Attica::Utils object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Utils `
    ///
    pub fn New2(other: anytype) Attica__Utils {
        comptime _ = @TypeOf(other)._is_Attica__Utils;
        return .{ .ptr = qtc.Attica__Utils_new2(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: Attica__Utils `
    ///
    /// ` other: Attica__Utils `
    ///
    pub fn CopyAssign(self: Attica__Utils, other: Attica__Utils) void {
        qtc.Attica__Utils_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: Attica__Utils `
    ///
    /// ` other: Attica__Utils `
    ///
    pub fn MoveAssign(self: Attica__Utils, other: Attica__Utils) void {
        qtc.Attica__Utils_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-utils.html#parseQtDateTimeIso8601)
    ///
    /// ## Parameter(s):
    ///
    /// ` str: []const u8 `
    ///
    pub fn ParseQtDateTimeIso8601(str: []const u8) QDateTime {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return .{ .ptr = qtc.Attica__Utils_ParseQtDateTimeIso8601(str_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-utils.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` operation: qnetworkaccessmanager_enums.Operation `
    ///
    pub fn ToString(operation: i32) [:0]const u8 {
        const _ret = qtc.Attica__Utils_ToString(@bitCast(operation));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Utils `
    ///
    pub fn Delete(self: Attica__Utils) void {
        qtc.Attica__Utils_Delete(@ptrCast(self.ptr));
    }
};
