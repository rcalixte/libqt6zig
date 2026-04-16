const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDateTime = @import("libqt6").QDateTime;
const qhstspolicy_enums = enums;
const qurl_enums = @import("../libqurl.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html)
pub const QHstsPolicy = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QHstsPolicy,

    pub const _is_QHstsPolicy = {};

    /// New constructs a new QHstsPolicy object.
    ///
    pub fn New() QHstsPolicy {
        return .{ .ptr = qtc.QHstsPolicy_new() };
    }

    /// New2 constructs a new QHstsPolicy object.
    ///
    /// ## Parameter(s):
    ///
    /// ` expiry: QDateTime `
    ///
    /// ` flags: flag of qhstspolicy_enums.PolicyFlag `
    ///
    /// ` host: []const u8 `
    ///
    pub fn New2(expiry: anytype, flags: i32, host: []const u8) QHstsPolicy {
        comptime _ = @TypeOf(expiry)._is_QDateTime;
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        return .{ .ptr = qtc.QHstsPolicy_new2(@ptrCast(expiry.ptr), @bitCast(flags), host_str) };
    }

    /// New3 constructs a new QHstsPolicy object.
    ///
    /// ## Parameter(s):
    ///
    /// ` rhs: QHstsPolicy `
    ///
    pub fn New3(rhs: anytype) QHstsPolicy {
        comptime _ = @TypeOf(rhs)._is_QHstsPolicy;
        return .{ .ptr = qtc.QHstsPolicy_new3(@ptrCast(rhs.ptr)) };
    }

    /// New4 constructs a new QHstsPolicy object.
    ///
    /// ## Parameter(s):
    ///
    /// ` expiry: QDateTime `
    ///
    /// ` flags: flag of qhstspolicy_enums.PolicyFlag `
    ///
    /// ` host: []const u8 `
    ///
    /// ` mode: qurl_enums.ParsingMode `
    ///
    pub fn New4(expiry: anytype, flags: i32, host: []const u8, mode: i32) QHstsPolicy {
        comptime _ = @TypeOf(expiry)._is_QDateTime;
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        return .{ .ptr = qtc.QHstsPolicy_new4(@ptrCast(expiry.ptr), @bitCast(flags), host_str, @bitCast(mode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHstsPolicy `
    ///
    /// ` rhs: QHstsPolicy `
    ///
    pub fn OperatorAssign(self: QHstsPolicy, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_QHstsPolicy;
        qtc.QHstsPolicy_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHstsPolicy `
    ///
    /// ` other: QHstsPolicy `
    ///
    pub fn Swap(self: QHstsPolicy, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QHstsPolicy;
        qtc.QHstsPolicy_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#setHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHstsPolicy `
    ///
    /// ` host: []const u8 `
    ///
    pub fn SetHost(self: QHstsPolicy, host: []const u8) void {
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        qtc.QHstsPolicy_SetHost(@ptrCast(self.ptr), host_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#host)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHstsPolicy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Host(self: QHstsPolicy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QHstsPolicy_Host(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhstspolicy.Host: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#setExpiry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHstsPolicy `
    ///
    /// ` expiry: QDateTime `
    ///
    pub fn SetExpiry(self: QHstsPolicy, expiry: anytype) void {
        comptime _ = @TypeOf(expiry)._is_QDateTime;
        qtc.QHstsPolicy_SetExpiry(@ptrCast(self.ptr), @ptrCast(expiry.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#expiry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHstsPolicy `
    ///
    pub fn Expiry(self: QHstsPolicy) QDateTime {
        return .{ .ptr = qtc.QHstsPolicy_Expiry(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#setIncludesSubDomains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHstsPolicy `
    ///
    /// ` include: bool `
    ///
    pub fn SetIncludesSubDomains(self: QHstsPolicy, include: bool) void {
        qtc.QHstsPolicy_SetIncludesSubDomains(@ptrCast(self.ptr), include);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#includesSubDomains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHstsPolicy `
    ///
    pub fn IncludesSubDomains(self: QHstsPolicy) bool {
        return qtc.QHstsPolicy_IncludesSubDomains(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#isExpired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHstsPolicy `
    ///
    pub fn IsExpired(self: QHstsPolicy) bool {
        return qtc.QHstsPolicy_IsExpired(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#setHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHstsPolicy `
    ///
    /// ` host: []const u8 `
    ///
    /// ` mode: qurl_enums.ParsingMode `
    ///
    pub fn SetHost2(self: QHstsPolicy, host: []const u8, mode: i32) void {
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        qtc.QHstsPolicy_SetHost2(@ptrCast(self.ptr), host_str, @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#host)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHstsPolicy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` options: flag of qurl_enums.ComponentFormattingOption `
    ///
    pub fn Host1(self: QHstsPolicy, allocator: std.mem.Allocator, options: u32) []const u8 {
        var _str = qtc.QHstsPolicy_Host1(@ptrCast(self.ptr), @bitCast(options));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhstspolicy.Host1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#dtor.QHstsPolicy)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QHstsPolicy `
    ///
    pub fn Delete(self: QHstsPolicy) void {
        qtc.QHstsPolicy_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#public-types)
pub const enums = struct {
    pub const PolicyFlag = enum(i32) {
        pub const IncludeSubDomains: i32 = 1;
    };
};
