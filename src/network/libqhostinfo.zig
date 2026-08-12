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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QHostInfo object in C++ memory
    ///
    pub fn new() QHostInfo {
        return .{ .ptr = qtc.QHostInfo_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QHostInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` d: QHostInfo `
    ///
    pub fn new2(d: anytype) QHostInfo {
        comptime _ = @TypeOf(d)._is_QHostInfo;
        return .{ .ptr = qtc.QHostInfo_new2(@ptrCast(d.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QHostInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _lookupId: i32 `
    ///
    pub fn new3(_lookupId: i32) QHostInfo {
        return .{ .ptr = qtc.QHostInfo_new3(@bitCast(_lookupId)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostInfo `
    ///
    /// ` d: QHostInfo `
    ///
    pub fn operatorAssign(self: QHostInfo, d: anytype) void {
        comptime _ = @TypeOf(d)._is_QHostInfo;
        qtc.QHostInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(d.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostInfo `
    ///
    /// ` other: QHostInfo `
    ///
    pub fn swap(self: QHostInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QHostInfo;
        qtc.QHostInfo_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `hostName` instead
    ///
    pub const HostName = hostName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#hostName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn hostName(self: QHostInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QHostInfo_HostName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHostInfo.hostName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setHostName` instead
    ///
    pub const SetHostName = setHostName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#setHostName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostInfo `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setHostName(self: QHostInfo, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QHostInfo_SetHostName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `addresses` instead
    ///
    pub const Addresses = addresses;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#addresses)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn addresses(self: QHostInfo, allocator: std.mem.Allocator) []QHostAddress {
        const _arr: qtc.libqt_list = qtc.QHostInfo_Addresses(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QHostAddress, _arr.len) catch @panic("QHostInfo.addresses: Memory allocation failed");
        const _data_val: [*]QtC.QHostAddress = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setAddresses` instead
    ///
    pub const SetAddresses = setAddresses;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#setAddresses)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostInfo `
    ///
    /// ` _addresses: []QHostAddress `
    ///
    pub fn setAddresses(self: QHostInfo, _addresses: []QHostAddress) void {
        const addresses_list = qtc.libqt_list{
            .len = _addresses.len,
            .data = @ptrCast(_addresses.ptr),
        };
        qtc.QHostInfo_SetAddresses(@ptrCast(self.ptr), addresses_list);
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

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
    pub fn error0(self: QHostInfo) i32 {
        return qtc.QHostInfo_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setError` instead
    ///
    pub const SetError = setError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#setError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostInfo `
    ///
    /// ` errorVal: qhostinfo_enums.HostInfoError `
    ///
    pub fn setError(self: QHostInfo, errorVal: i32) void {
        qtc.QHostInfo_SetError(@ptrCast(self.ptr), @bitCast(errorVal));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: QHostInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QHostInfo_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHostInfo.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setErrorString` instead
    ///
    pub const SetErrorString = setErrorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#setErrorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostInfo `
    ///
    /// ` _errorString: []const u8 `
    ///
    pub fn setErrorString(self: QHostInfo, _errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = _errorString.len,
            .data = _errorString.ptr,
        };
        qtc.QHostInfo_SetErrorString(@ptrCast(self.ptr), errorString_str);
    }

    /// ### DEPRECATED: Use `setLookupId` instead
    ///
    pub const SetLookupId = setLookupId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#setLookupId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostInfo `
    ///
    /// ` id: i32 `
    ///
    pub fn setLookupId(self: QHostInfo, id: i32) void {
        qtc.QHostInfo_SetLookupId(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `lookupId` instead
    ///
    pub const LookupId = lookupId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#lookupId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostInfo `
    ///
    pub fn lookupId(self: QHostInfo) i32 {
        return qtc.QHostInfo_LookupId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lookupHost` instead
    ///
    pub const LookupHost = lookupHost;

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
    pub fn lookupHost(name: []const u8, receiver: anytype, member: [:0]const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QHostInfo_LookupHost(name_str, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `abortHostLookup` instead
    ///
    pub const AbortHostLookup = abortHostLookup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#abortHostLookup)
    ///
    /// ## Parameter(s):
    ///
    /// ` _lookupId: i32 `
    ///
    pub fn abortHostLookup(_lookupId: i32) void {
        qtc.QHostInfo_AbortHostLookup(@bitCast(_lookupId));
    }

    /// ### DEPRECATED: Use `fromName` instead
    ///
    pub const FromName = fromName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#fromName)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn fromName(name: []const u8) QHostInfo {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QHostInfo_FromName(name_str) };
    }

    /// ### DEPRECATED: Use `localHostName` instead
    ///
    pub const LocalHostName = localHostName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#localHostName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn localHostName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QHostInfo_LocalHostName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHostInfo.localHostName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `localDomainName` instead
    ///
    pub const LocalDomainName = localDomainName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#localDomainName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn localDomainName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QHostInfo_LocalDomainName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHostInfo.localDomainName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#dtor.QHostInfo)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QHostInfo `
    ///
    pub fn delete(self: QHostInfo) void {
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
