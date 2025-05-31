const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qurl_enums = @import("../libqurl.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qhstspolicy.html
pub const qhstspolicy = struct {
    /// New constructs a new QHstsPolicy object.
    ///
    ///
    pub fn New() QtC.QHstsPolicy {
        return qtc.QHstsPolicy_new();
    }

    /// New2 constructs a new QHstsPolicy object.
    ///
    /// ``` expiry: QtC.QDateTime, flags: i32, host: []const u8 ```
    pub fn New2(expiry: ?*anyopaque, flags: i64, host: []const u8) QtC.QHstsPolicy {
        const host_str = qtc.struct_libqt_string{
            .len = host.len,
            .data = @constCast(host.ptr),
        };

        return qtc.QHstsPolicy_new2(@ptrCast(expiry), @intCast(flags), host_str);
    }

    /// New3 constructs a new QHstsPolicy object.
    ///
    /// ``` rhs: QtC.QHstsPolicy ```
    pub fn New3(rhs: ?*anyopaque) QtC.QHstsPolicy {
        return qtc.QHstsPolicy_new3(@ptrCast(rhs));
    }

    /// New4 constructs a new QHstsPolicy object.
    ///
    /// ``` expiry: QtC.QDateTime, flags: i32, host: []const u8, mode: qurl_enums.ParsingMode ```
    pub fn New4(expiry: ?*anyopaque, flags: i64, host: []const u8, mode: i64) QtC.QHstsPolicy {
        const host_str = qtc.struct_libqt_string{
            .len = host.len,
            .data = @constCast(host.ptr),
        };

        return qtc.QHstsPolicy_new4(@ptrCast(expiry), @intCast(flags), host_str, @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#operator=)
    ///
    /// ``` self: QtC.QHstsPolicy, rhs: QtC.QHstsPolicy ```
    pub fn OperatorAssign(self: ?*anyopaque, rhs: ?*anyopaque) void {
        qtc.QHstsPolicy_OperatorAssign(@ptrCast(self), @ptrCast(rhs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#swap)
    ///
    /// ``` self: QtC.QHstsPolicy, other: QtC.QHstsPolicy ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QHstsPolicy_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#setHost)
    ///
    /// ``` self: QtC.QHstsPolicy, host: []const u8 ```
    pub fn SetHost(self: ?*anyopaque, host: []const u8) void {
        const host_str = qtc.struct_libqt_string{
            .len = host.len,
            .data = @constCast(host.ptr),
        };
        qtc.QHstsPolicy_SetHost(@ptrCast(self), host_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#host)
    ///
    /// ``` self: QtC.QHstsPolicy, allocator: std.mem.Allocator ```
    pub fn Host(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHstsPolicy_Host(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhstspolicy.Host: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#setExpiry)
    ///
    /// ``` self: QtC.QHstsPolicy, expiry: QtC.QDateTime ```
    pub fn SetExpiry(self: ?*anyopaque, expiry: ?*anyopaque) void {
        qtc.QHstsPolicy_SetExpiry(@ptrCast(self), @ptrCast(expiry));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#expiry)
    ///
    /// ``` self: QtC.QHstsPolicy ```
    pub fn Expiry(self: ?*anyopaque) QtC.QDateTime {
        return qtc.QHstsPolicy_Expiry(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#setIncludesSubDomains)
    ///
    /// ``` self: QtC.QHstsPolicy, include: bool ```
    pub fn SetIncludesSubDomains(self: ?*anyopaque, include: bool) void {
        qtc.QHstsPolicy_SetIncludesSubDomains(@ptrCast(self), include);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#includesSubDomains)
    ///
    /// ``` self: QtC.QHstsPolicy ```
    pub fn IncludesSubDomains(self: ?*anyopaque) bool {
        return qtc.QHstsPolicy_IncludesSubDomains(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#isExpired)
    ///
    /// ``` self: QtC.QHstsPolicy ```
    pub fn IsExpired(self: ?*anyopaque) bool {
        return qtc.QHstsPolicy_IsExpired(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#setHost)
    ///
    /// ``` self: QtC.QHstsPolicy, host: []const u8, mode: qurl_enums.ParsingMode ```
    pub fn SetHost2(self: ?*anyopaque, host: []const u8, mode: i64) void {
        const host_str = qtc.struct_libqt_string{
            .len = host.len,
            .data = @constCast(host.ptr),
        };
        qtc.QHstsPolicy_SetHost2(@ptrCast(self), host_str, @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#host)
    ///
    /// ``` self: QtC.QHstsPolicy, options: u32, allocator: std.mem.Allocator ```
    pub fn Host1(self: ?*anyopaque, options: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHstsPolicy_Host1(@ptrCast(self), @intCast(options));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhstspolicy.Host1: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#dtor.QHstsPolicy)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QHstsPolicy ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QHstsPolicy_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qhstspolicy.html#types
pub const enums = struct {
    pub const PolicyFlag = enum {
        pub const IncludeSubDomains: i32 = 1;
    };
};
