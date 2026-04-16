const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QHostAddress = @import("libqt6").QHostAddress;
const QObject = @import("libqt6").QObject;
const qhostinfo_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html)
pub const QHostInfo = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QHostInfo,

    pub const _is_QHostInfo = {};

    /// New constructs a new QHostInfo object.
    ///
    pub fn New() QHostInfo {
        return .{ .ptr = qtc.QHostInfo_new() };
    }

    /// New2 constructs a new QHostInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` d: QHostInfo `
    ///
    pub fn New2(d: anytype) QHostInfo {
        comptime _ = @TypeOf(d)._is_QHostInfo;
        return .{ .ptr = qtc.QHostInfo_new2(@ptrCast(d.ptr)) };
    }

    /// New3 constructs a new QHostInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` lookupId: i32 `
    ///
    pub fn New3(lookupId: i32) QHostInfo {
        return .{ .ptr = qtc.QHostInfo_new3(@bitCast(lookupId)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostInfo `
    ///
    /// ` d: QHostInfo `
    ///
    pub fn OperatorAssign(self: QHostInfo, d: anytype) void {
        comptime _ = @TypeOf(d)._is_QHostInfo;
        qtc.QHostInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(d.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostInfo `
    ///
    /// ` other: QHostInfo `
    ///
    pub fn Swap(self: QHostInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QHostInfo;
        qtc.QHostInfo_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#hostName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn HostName(self: QHostInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QHostInfo_HostName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhostinfo.HostName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#setHostName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostInfo `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetHostName(self: QHostInfo, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QHostInfo_SetHostName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#addresses)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Addresses(self: QHostInfo, allocator: std.mem.Allocator) []QHostAddress {
        const _arr: qtc.libqt_list = qtc.QHostInfo_Addresses(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QHostAddress, _arr.len) catch @panic("qhostinfo.Addresses: Memory allocation failed");
        const _data: [*]QtC.QHostAddress = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#setAddresses)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostInfo `
    ///
    /// ` addresses: []QHostAddress `
    ///
    pub fn SetAddresses(self: QHostInfo, addresses: []QHostAddress) void {
        const addresses_list = qtc.libqt_list{
            .len = addresses.len,
            .data = @ptrCast(addresses.ptr),
        };
        qtc.QHostInfo_SetAddresses(@ptrCast(self.ptr), addresses_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostInfo `
    ///
    /// ## Returns:
    ///
    /// ` qhostinfo_enums.HostInfoError `
    ///
    pub fn Error(self: QHostInfo) i32 {
        return qtc.QHostInfo_Error(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#setError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostInfo `
    ///
    /// ` errorVal: qhostinfo_enums.HostInfoError `
    ///
    pub fn SetError(self: QHostInfo, errorVal: i32) void {
        qtc.QHostInfo_SetError(@ptrCast(self.ptr), @bitCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QHostInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QHostInfo_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhostinfo.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#setErrorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostInfo `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn SetErrorString(self: QHostInfo, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QHostInfo_SetErrorString(@ptrCast(self.ptr), errorString_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#setLookupId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostInfo `
    ///
    /// ` id: i32 `
    ///
    pub fn SetLookupId(self: QHostInfo, id: i32) void {
        qtc.QHostInfo_SetLookupId(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#lookupId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostInfo `
    ///
    pub fn LookupId(self: QHostInfo) i32 {
        return qtc.QHostInfo_LookupId(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#lookupHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn LookupHost(name: []const u8, receiver: anytype, member: [:0]const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QHostInfo_LookupHost(name_str, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#abortHostLookup)
    ///
    /// ## Parameter(s):
    ///
    /// ` lookupId: i32 `
    ///
    pub fn AbortHostLookup(lookupId: i32) void {
        qtc.QHostInfo_AbortHostLookup(@bitCast(lookupId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#fromName)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn FromName(name: []const u8) QHostInfo {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QHostInfo_FromName(name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#localHostName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalHostName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QHostInfo_LocalHostName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhostinfo.LocalHostName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#localDomainName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalDomainName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QHostInfo_LocalDomainName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhostinfo.LocalDomainName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#dtor.QHostInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QHostInfo `
    ///
    pub fn Delete(self: QHostInfo) void {
        qtc.QHostInfo_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#public-types)
pub const enums = struct {
    pub const HostInfoError = enum(i32) {
        pub const NoError: i32 = 0;
        pub const HostNotFound: i32 = 1;
        pub const UnknownError: i32 = 2;
    };
};
