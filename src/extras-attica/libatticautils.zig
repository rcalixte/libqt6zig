const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnetworkaccessmanager_enums = @import("../network/libqnetworkaccessmanager.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-utils.html)
pub const attica__utils = struct {
    /// New constructs a new Attica::Utils object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.Attica__Utils `
    ///
    pub fn New(other: ?*anyopaque) QtC.Attica__Utils {
        return qtc.Attica__Utils_new(@ptrCast(other));
    }

    /// New2 constructs a new Attica::Utils object and invalidates the source Attica::Utils object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.Attica__Utils `
    ///
    pub fn New2(other: ?*anyopaque) QtC.Attica__Utils {
        return qtc.Attica__Utils_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Attica__Utils `
    ///
    /// ` other: QtC.Attica__Utils `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__Utils_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Attica__Utils `
    ///
    /// ` other: QtC.Attica__Utils `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__Utils_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-utils.html#parseQtDateTimeIso8601)
    ///
    /// ## Parameter(s):
    ///
    /// ` str: []const u8 `
    ///
    pub fn ParseQtDateTimeIso8601(str: []const u8) QtC.QDateTime {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.Attica__Utils_ParseQtDateTimeIso8601(str_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-utils.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` operation: qnetworkaccessmanager_enums.Operation `
    ///
    pub fn ToString(operation: i32) [:0]const u8 {
        const _ret = qtc.Attica__Utils_ToString(@intCast(operation));
        return std.mem.span(_ret);
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Attica__Utils `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__Utils_Delete(@ptrCast(self));
    }
};
