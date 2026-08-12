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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QHstsPolicy object in C++ memory
    ///
    pub fn new() QHstsPolicy {
        return .{ .ptr = qtc.QHstsPolicy_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QHstsPolicy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _expiry: QDateTime `
    ///
    /// ` flags: flag of qhstspolicy_enums.PolicyFlag `
    ///
    /// ` _host: []const u8 `
    ///
    pub fn new2(_expiry: anytype, flags: i32, _host: []const u8) QHstsPolicy {
        comptime _ = @TypeOf(_expiry)._is_QDateTime;
        const host_str = qtc.libqt_string{
            .len = _host.len,
            .data = _host.ptr,
        };
        return .{ .ptr = qtc.QHstsPolicy_new2(@ptrCast(_expiry.ptr), @bitCast(flags), host_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QHstsPolicy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` rhs: QHstsPolicy `
    ///
    pub fn new3(rhs: anytype) QHstsPolicy {
        comptime _ = @TypeOf(rhs)._is_QHstsPolicy;
        return .{ .ptr = qtc.QHstsPolicy_new3(@ptrCast(rhs.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QHstsPolicy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _expiry: QDateTime `
    ///
    /// ` flags: flag of qhstspolicy_enums.PolicyFlag `
    ///
    /// ` _host: []const u8 `
    ///
    /// ` mode: qurl_enums.ParsingMode `
    ///
    pub fn new4(_expiry: anytype, flags: i32, _host: []const u8, mode: i32) QHstsPolicy {
        comptime _ = @TypeOf(_expiry)._is_QDateTime;
        const host_str = qtc.libqt_string{
            .len = _host.len,
            .data = _host.ptr,
        };
        return .{ .ptr = qtc.QHstsPolicy_new4(@ptrCast(_expiry.ptr), @bitCast(flags), host_str, @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHstsPolicy `
    ///
    /// ` rhs: QHstsPolicy `
    ///
    pub fn operatorAssign(self: QHstsPolicy, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_QHstsPolicy;
        qtc.QHstsPolicy_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHstsPolicy `
    ///
    /// ` other: QHstsPolicy `
    ///
    pub fn swap(self: QHstsPolicy, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QHstsPolicy;
        qtc.QHstsPolicy_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setHost` instead
    ///
    pub const SetHost = setHost;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#setHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHstsPolicy `
    ///
    /// ` _host: []const u8 `
    ///
    pub fn setHost(self: QHstsPolicy, _host: []const u8) void {
        const host_str = qtc.libqt_string{
            .len = _host.len,
            .data = _host.ptr,
        };
        qtc.QHstsPolicy_SetHost(@ptrCast(self.ptr), host_str);
    }

    /// ### DEPRECATED: Use `host` instead
    ///
    pub const Host = host;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#host)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHstsPolicy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn host(self: QHstsPolicy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QHstsPolicy_Host(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHstsPolicy.host: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setExpiry` instead
    ///
    pub const SetExpiry = setExpiry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#setExpiry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHstsPolicy `
    ///
    /// ` _expiry: QDateTime `
    ///
    pub fn setExpiry(self: QHstsPolicy, _expiry: anytype) void {
        comptime _ = @TypeOf(_expiry)._is_QDateTime;
        qtc.QHstsPolicy_SetExpiry(@ptrCast(self.ptr), @ptrCast(_expiry.ptr));
    }

    /// ### DEPRECATED: Use `expiry` instead
    ///
    pub const Expiry = expiry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#expiry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHstsPolicy `
    ///
    pub fn expiry(self: QHstsPolicy) QDateTime {
        return .{ .ptr = qtc.QHstsPolicy_Expiry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIncludesSubDomains` instead
    ///
    pub const SetIncludesSubDomains = setIncludesSubDomains;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#setIncludesSubDomains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHstsPolicy `
    ///
    /// ` include: bool `
    ///
    pub fn setIncludesSubDomains(self: QHstsPolicy, include: bool) void {
        qtc.QHstsPolicy_SetIncludesSubDomains(@ptrCast(self.ptr), include);
    }

    /// ### DEPRECATED: Use `includesSubDomains` instead
    ///
    pub const IncludesSubDomains = includesSubDomains;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#includesSubDomains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHstsPolicy `
    ///
    pub fn includesSubDomains(self: QHstsPolicy) bool {
        return qtc.QHstsPolicy_IncludesSubDomains(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isExpired` instead
    ///
    pub const IsExpired = isExpired;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#isExpired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHstsPolicy `
    ///
    pub fn isExpired(self: QHstsPolicy) bool {
        return qtc.QHstsPolicy_IsExpired(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHost2` instead
    ///
    pub const SetHost2 = setHost2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#setHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHstsPolicy `
    ///
    /// ` _host: []const u8 `
    ///
    /// ` mode: qurl_enums.ParsingMode `
    ///
    pub fn setHost2(self: QHstsPolicy, _host: []const u8, mode: i32) void {
        const host_str = qtc.libqt_string{
            .len = _host.len,
            .data = _host.ptr,
        };
        qtc.QHstsPolicy_SetHost2(@ptrCast(self.ptr), host_str, @bitCast(mode));
    }

    /// ### DEPRECATED: Use `host1` instead
    ///
    pub const Host1 = host1;

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
    pub fn host1(self: QHstsPolicy, allocator: std.mem.Allocator, options: u32) []const u8 {
        var _str = qtc.QHstsPolicy_Host1(@ptrCast(self.ptr), @bitCast(options));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHstsPolicy.host1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#dtor.QHstsPolicy)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QHstsPolicy `
    ///
    pub fn delete(self: QHstsPolicy) void {
        qtc.QHstsPolicy_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#public-types)
pub const enums = struct {
    pub const PolicyFlag = enum(i32) {
        pub const IncludeSubDomains: i32 = 1;
    };
};
