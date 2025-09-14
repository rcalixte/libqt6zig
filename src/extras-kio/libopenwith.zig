const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/kio-openwith.html
pub const kio__openwith = struct {
    /// New constructs a new KIO::OpenWith object.
    ///
    /// ``` other: QtC.KIO__OpenWith ```
    pub fn New(other: ?*anyopaque) QtC.KIO__OpenWith {
        return qtc.KIO__OpenWith_new(@ptrCast(other));
    }

    /// New2 constructs a new KIO::OpenWith object and invalidates the source KIO::OpenWith object.
    ///
    /// ``` other: QtC.KIO__OpenWith ```
    pub fn New2(other: ?*anyopaque) QtC.KIO__OpenWith {
        return qtc.KIO__OpenWith_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.KIO__OpenWith, other: QtC.KIO__OpenWith ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KIO__OpenWith_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.KIO__OpenWith, other: QtC.KIO__OpenWith ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KIO__OpenWith_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KIO__OpenWith ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KIO__OpenWith_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kio-openwith-acceptresult.html
pub const kio__openwith__acceptresult = struct {
    /// New constructs a new KIO::OpenWith::AcceptResult object.
    ///
    /// ``` param1: QtC.KIO__OpenWith__AcceptResult ```
    pub fn New(param1: ?*anyopaque) QtC.KIO__OpenWith__AcceptResult {
        return qtc.KIO__OpenWith__AcceptResult_new(@ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kio-openwith-acceptresult.html#accept-var)
    ///
    /// ``` self: QtC.KIO__OpenWith__AcceptResult ```
    pub fn Accept(self: ?*anyopaque) bool {
        return qtc.KIO__OpenWith__AcceptResult_Accept(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-openwith-acceptresult.html#accept-var)
    ///
    /// ``` self: QtC.KIO__OpenWith__AcceptResult, accept: bool ```
    pub fn SetAccept(self: ?*anyopaque, accept: bool) void {
        qtc.KIO__OpenWith__AcceptResult_SetAccept(@ptrCast(self), accept);
    }

    /// [Qt documentation](https://api.kde.org/kio-openwith-acceptresult.html#error-var)
    ///
    /// ``` self: QtC.KIO__OpenWith__AcceptResult, allocator: std.mem.Allocator ```
    pub fn Error(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const error_str = qtc.KIO__OpenWith__AcceptResult_Error(@ptrCast(self));
        defer qtc.libqt_string_free(&error_str);
        const error_ret = allocator.alloc(u8, error_str.len) catch @panic("kio::openwith::acceptresult.Error: Memory allocation failed");
        @memcpy(error_ret, error_str.data[0..error_str.len]);
        return error_ret;
    }

    /// [Qt documentation](https://api.kde.org/kio-openwith-acceptresult.html#error-var)
    ///
    /// ``` self: QtC.KIO__OpenWith__AcceptResult, error: []const u8 ```
    pub fn SetError(self: ?*anyopaque, _error: []const u8) void {
        const error_str = qtc.libqt_string{
            .len = _error.len,
            .data = _error.ptr,
        };
        qtc.KIO__OpenWith__AcceptResult_SetError(@ptrCast(self), error_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-openwith-acceptresult.html#rebuildSycoca-var)
    ///
    /// ``` self: QtC.KIO__OpenWith__AcceptResult ```
    pub fn RebuildSycoca(self: ?*anyopaque) bool {
        return qtc.KIO__OpenWith__AcceptResult_RebuildSycoca(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-openwith-acceptresult.html#rebuildSycoca-var)
    ///
    /// ``` self: QtC.KIO__OpenWith__AcceptResult, rebuildSycoca: bool ```
    pub fn SetRebuildSycoca(self: ?*anyopaque, rebuildSycoca: bool) void {
        qtc.KIO__OpenWith__AcceptResult_SetRebuildSycoca(@ptrCast(self), rebuildSycoca);
    }

    /// [Qt documentation](https://api.kde.org/kio-openwith-acceptresult.html#operator-eq)
    ///
    /// ``` self: QtC.KIO__OpenWith__AcceptResult, param1: QtC.KIO__OpenWith__AcceptResult ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KIO__OpenWith__AcceptResult_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KIO__OpenWith__AcceptResult ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KIO__OpenWith__AcceptResult_Delete(@ptrCast(self));
    }
};
