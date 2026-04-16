const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kio-openwith.html)
pub const KIO__OpenWith = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kio-openwith.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIO__OpenWith,

    pub const _is_KIO__OpenWith = {};

    /// New constructs a new KIO::OpenWith object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KIO__OpenWith `
    ///
    pub fn New(other: anytype) KIO__OpenWith {
        comptime _ = @TypeOf(other)._is_KIO__OpenWith;
        return .{ .ptr = qtc.KIO__OpenWith_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new KIO::OpenWith object and invalidates the source KIO::OpenWith object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KIO__OpenWith `
    ///
    pub fn New2(other: anytype) KIO__OpenWith {
        comptime _ = @TypeOf(other)._is_KIO__OpenWith;
        return .{ .ptr = qtc.KIO__OpenWith_new2(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__OpenWith `
    ///
    /// ` other: KIO__OpenWith `
    ///
    pub fn CopyAssign(self: KIO__OpenWith, other: KIO__OpenWith) void {
        qtc.KIO__OpenWith_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__OpenWith `
    ///
    /// ` other: KIO__OpenWith `
    ///
    pub fn MoveAssign(self: KIO__OpenWith, other: KIO__OpenWith) void {
        qtc.KIO__OpenWith_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KIO__OpenWith `
    ///
    pub fn Delete(self: KIO__OpenWith) void {
        qtc.KIO__OpenWith_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kio-openwith-acceptresult.html)
pub const KIO__OpenWith__AcceptResult = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kio-openwith-acceptresult.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIO__OpenWith__AcceptResult,

    pub const _is_KIO__OpenWith__AcceptResult = {};

    /// New constructs a new KIO::OpenWith::AcceptResult object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KIO__OpenWith__AcceptResult `
    ///
    pub fn New(param1: anytype) KIO__OpenWith__AcceptResult {
        comptime _ = @TypeOf(param1)._is_KIO__OpenWith__AcceptResult;
        return .{ .ptr = qtc.KIO__OpenWith__AcceptResult_new(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-openwith-acceptresult.html#accept-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__OpenWith__AcceptResult `
    ///
    pub fn Accept(self: KIO__OpenWith__AcceptResult) bool {
        return qtc.KIO__OpenWith__AcceptResult_Accept(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-openwith-acceptresult.html#accept-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__OpenWith__AcceptResult `
    ///
    /// ` accept: bool `
    ///
    pub fn SetAccept(self: KIO__OpenWith__AcceptResult, accept: bool) void {
        qtc.KIO__OpenWith__AcceptResult_SetAccept(@ptrCast(self.ptr), accept);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-openwith-acceptresult.html#error-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__OpenWith__AcceptResult `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Error(self: KIO__OpenWith__AcceptResult, allocator: std.mem.Allocator) []const u8 {
        var error_str = qtc.KIO__OpenWith__AcceptResult_Error(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&error_str);
        const error_ret = allocator.alloc(u8, error_str.len) catch @panic("kio__openwith__acceptresult.Error: Memory allocation failed");
        @memcpy(error_ret, error_str.data[0..error_str.len]);
        return error_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-openwith-acceptresult.html#error-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__OpenWith__AcceptResult `
    ///
    /// ` error: []const u8 `
    ///
    pub fn SetError(self: KIO__OpenWith__AcceptResult, _error: []const u8) void {
        const error_str = qtc.libqt_string{
            .len = _error.len,
            .data = _error.ptr,
        };
        qtc.KIO__OpenWith__AcceptResult_SetError(@ptrCast(self.ptr), error_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-openwith-acceptresult.html#rebuildSycoca-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__OpenWith__AcceptResult `
    ///
    pub fn RebuildSycoca(self: KIO__OpenWith__AcceptResult) bool {
        return qtc.KIO__OpenWith__AcceptResult_RebuildSycoca(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-openwith-acceptresult.html#rebuildSycoca-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__OpenWith__AcceptResult `
    ///
    /// ` rebuildSycoca: bool `
    ///
    pub fn SetRebuildSycoca(self: KIO__OpenWith__AcceptResult, rebuildSycoca: bool) void {
        qtc.KIO__OpenWith__AcceptResult_SetRebuildSycoca(@ptrCast(self.ptr), rebuildSycoca);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-openwith-acceptresult.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__OpenWith__AcceptResult `
    ///
    /// ` param1: KIO__OpenWith__AcceptResult `
    ///
    pub fn OperatorAssign(self: KIO__OpenWith__AcceptResult, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KIO__OpenWith__AcceptResult;
        qtc.KIO__OpenWith__AcceptResult_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KIO__OpenWith__AcceptResult `
    ///
    pub fn Delete(self: KIO__OpenWith__AcceptResult) void {
        qtc.KIO__OpenWith__AcceptResult_Delete(@ptrCast(self.ptr));
    }
};
