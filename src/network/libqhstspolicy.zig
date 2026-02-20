const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qhstspolicy_enums = enums;
const qurl_enums = @import("../libqurl.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html)
pub const qhstspolicy = struct {
    /// New constructs a new QHstsPolicy object.
    ///
    pub fn New() QtC.QHstsPolicy {
        return qtc.QHstsPolicy_new();
    }

    /// New2 constructs a new QHstsPolicy object.
    ///
    /// ## Parameter(s):
    ///
    /// ` expiry: QtC.QDateTime `
    ///
    /// ` flags: flag of qhstspolicy_enums.PolicyFlag `
    ///
    /// ` host: []const u8 `
    ///
    pub fn New2(expiry: ?*anyopaque, flags: i32, host: []const u8) QtC.QHstsPolicy {
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };

        return qtc.QHstsPolicy_new2(@ptrCast(expiry), @bitCast(flags), host_str);
    }

    /// New3 constructs a new QHstsPolicy object.
    ///
    /// ## Parameter(s):
    ///
    /// ` rhs: QtC.QHstsPolicy `
    ///
    pub fn New3(rhs: ?*anyopaque) QtC.QHstsPolicy {
        return qtc.QHstsPolicy_new3(@ptrCast(rhs));
    }

    /// New4 constructs a new QHstsPolicy object.
    ///
    /// ## Parameter(s):
    ///
    /// ` expiry: QtC.QDateTime `
    ///
    /// ` flags: flag of qhstspolicy_enums.PolicyFlag `
    ///
    /// ` host: []const u8 `
    ///
    /// ` mode: qurl_enums.ParsingMode `
    ///
    pub fn New4(expiry: ?*anyopaque, flags: i32, host: []const u8, mode: i32) QtC.QHstsPolicy {
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };

        return qtc.QHstsPolicy_new4(@ptrCast(expiry), @bitCast(flags), host_str, @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHstsPolicy `
    ///
    /// ` rhs: QtC.QHstsPolicy `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, rhs: ?*anyopaque) void {
        qtc.QHstsPolicy_OperatorAssign(@ptrCast(self), @ptrCast(rhs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHstsPolicy `
    ///
    /// ` other: QtC.QHstsPolicy `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QHstsPolicy_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#setHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHstsPolicy `
    ///
    /// ` host: []const u8 `
    ///
    pub fn SetHost(self: ?*anyopaque, host: []const u8) void {
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        qtc.QHstsPolicy_SetHost(@ptrCast(self), host_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#host)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHstsPolicy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Host(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QHstsPolicy_Host(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhstspolicy.Host: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#setExpiry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHstsPolicy `
    ///
    /// ` expiry: QtC.QDateTime `
    ///
    pub fn SetExpiry(self: ?*anyopaque, expiry: ?*anyopaque) void {
        qtc.QHstsPolicy_SetExpiry(@ptrCast(self), @ptrCast(expiry));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#expiry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHstsPolicy `
    ///
    pub fn Expiry(self: ?*anyopaque) QtC.QDateTime {
        return qtc.QHstsPolicy_Expiry(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#setIncludesSubDomains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHstsPolicy `
    ///
    /// ` include: bool `
    ///
    pub fn SetIncludesSubDomains(self: ?*anyopaque, include: bool) void {
        qtc.QHstsPolicy_SetIncludesSubDomains(@ptrCast(self), include);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#includesSubDomains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHstsPolicy `
    ///
    pub fn IncludesSubDomains(self: ?*anyopaque) bool {
        return qtc.QHstsPolicy_IncludesSubDomains(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#isExpired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHstsPolicy `
    ///
    pub fn IsExpired(self: ?*anyopaque) bool {
        return qtc.QHstsPolicy_IsExpired(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#setHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHstsPolicy `
    ///
    /// ` host: []const u8 `
    ///
    /// ` mode: qurl_enums.ParsingMode `
    ///
    pub fn SetHost2(self: ?*anyopaque, host: []const u8, mode: i32) void {
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        qtc.QHstsPolicy_SetHost2(@ptrCast(self), host_str, @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#host)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHstsPolicy `
    ///
    /// ` options: flag of qurl_enums.ComponentFormattingOption `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Host1(self: ?*anyopaque, options: u32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QHstsPolicy_Host1(@ptrCast(self), @bitCast(options));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhstspolicy.Host1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#dtor.QHstsPolicy)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QHstsPolicy `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QHstsPolicy_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#public-types)
pub const enums = struct {
    pub const PolicyFlag = enum(i32) {
        pub const IncludeSubDomains: i32 = 1;
    };
};
