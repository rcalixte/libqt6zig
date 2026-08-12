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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KIO::OpenWith object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KIO__OpenWith `
    ///
    pub fn new(other: anytype) KIO__OpenWith {
        comptime _ = @TypeOf(other)._is_KIO__OpenWith;
        return .{ .ptr = qtc.KIO__OpenWith_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KIO::OpenWith object and invalidate the source KIO::OpenWith object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KIO__OpenWith `
    ///
    pub fn new2(other: anytype) KIO__OpenWith {
        comptime _ = @TypeOf(other)._is_KIO__OpenWith;
        return .{ .ptr = qtc.KIO__OpenWith_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__OpenWith `
    ///
    /// ` other: KIO__OpenWith `
    ///
    pub fn copyAssign(self: KIO__OpenWith, other: KIO__OpenWith) void {
        qtc.KIO__OpenWith_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__OpenWith `
    ///
    /// ` other: KIO__OpenWith `
    ///
    pub fn moveAssign(self: KIO__OpenWith, other: KIO__OpenWith) void {
        qtc.KIO__OpenWith_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KIO__OpenWith `
    ///
    pub fn delete(self: KIO__OpenWith) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KIO::OpenWith::AcceptResult object in C++ memory
    ///
    pub fn new() KIO__OpenWith__AcceptResult {
        return .{ .ptr = qtc.KIO__OpenWith__AcceptResult_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KIO::OpenWith::AcceptResult object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KIO__OpenWith__AcceptResult `
    ///
    pub fn new2(param1: anytype) KIO__OpenWith__AcceptResult {
        comptime _ = @TypeOf(param1)._is_KIO__OpenWith__AcceptResult;
        return .{ .ptr = qtc.KIO__OpenWith__AcceptResult_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// ### [Upstream resources](https://api.kde.org/kio-openwith-acceptresult.html#accept-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__OpenWith__AcceptResult `
    ///
    pub fn accept(self: KIO__OpenWith__AcceptResult) bool {
        return qtc.KIO__OpenWith__AcceptResult_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAccept` instead
    ///
    pub const SetAccept = setAccept;

    /// ### [Upstream resources](https://api.kde.org/kio-openwith-acceptresult.html#accept-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__OpenWith__AcceptResult `
    ///
    /// ` _accept: bool `
    ///
    pub fn setAccept(self: KIO__OpenWith__AcceptResult, _accept: bool) void {
        qtc.KIO__OpenWith__AcceptResult_SetAccept(@ptrCast(self.ptr), _accept);
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

    /// ### [Upstream resources](https://api.kde.org/kio-openwith-acceptresult.html#error-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__OpenWith__AcceptResult `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn error0(self: KIO__OpenWith__AcceptResult, allocator: std.mem.Allocator) []const u8 {
        var error_str = qtc.KIO__OpenWith__AcceptResult_Error(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&error_str);
        const error_ret = allocator.alloc(u8, error_str.len) catch @panic("KIO__OpenWith__AcceptResult.error0: Memory allocation failed");
        @memcpy(error_ret, error_str.data[0..error_str.len]);
        return error_ret;
    }

    /// ### DEPRECATED: Use `setError` instead
    ///
    pub const SetError = setError;

    /// ### [Upstream resources](https://api.kde.org/kio-openwith-acceptresult.html#error-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__OpenWith__AcceptResult `
    ///
    /// ` _error: []const u8 `
    ///
    pub fn setError(self: KIO__OpenWith__AcceptResult, _error: []const u8) void {
        const error_str = qtc.libqt_string{
            .len = _error.len,
            .data = _error.ptr,
        };
        qtc.KIO__OpenWith__AcceptResult_SetError(@ptrCast(self.ptr), error_str);
    }

    /// ### DEPRECATED: Use `rebuildSycoca` instead
    ///
    pub const RebuildSycoca = rebuildSycoca;

    /// ### [Upstream resources](https://api.kde.org/kio-openwith-acceptresult.html#rebuildSycoca-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__OpenWith__AcceptResult `
    ///
    pub fn rebuildSycoca(self: KIO__OpenWith__AcceptResult) bool {
        return qtc.KIO__OpenWith__AcceptResult_RebuildSycoca(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRebuildSycoca` instead
    ///
    pub const SetRebuildSycoca = setRebuildSycoca;

    /// ### [Upstream resources](https://api.kde.org/kio-openwith-acceptresult.html#rebuildSycoca-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__OpenWith__AcceptResult `
    ///
    /// ` _rebuildSycoca: bool `
    ///
    pub fn setRebuildSycoca(self: KIO__OpenWith__AcceptResult, _rebuildSycoca: bool) void {
        qtc.KIO__OpenWith__AcceptResult_SetRebuildSycoca(@ptrCast(self.ptr), _rebuildSycoca);
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kio-openwith-acceptresult.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__OpenWith__AcceptResult `
    ///
    /// ` param1: KIO__OpenWith__AcceptResult `
    ///
    pub fn operatorAssign(self: KIO__OpenWith__AcceptResult, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KIO__OpenWith__AcceptResult;
        qtc.KIO__OpenWith__AcceptResult_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KIO__OpenWith__AcceptResult `
    ///
    pub fn delete(self: KIO__OpenWith__AcceptResult) void {
        qtc.KIO__OpenWith__AcceptResult_Delete(@ptrCast(self.ptr));
    }
};
