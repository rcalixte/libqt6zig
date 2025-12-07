const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qhostinfo_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html)
pub const qhostinfo = struct {
    /// New constructs a new QHostInfo object.
    ///
    pub fn New() QtC.QHostInfo {
        return qtc.QHostInfo_new();
    }

    /// New2 constructs a new QHostInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` d: QtC.QHostInfo `
    ///
    pub fn New2(d: ?*anyopaque) QtC.QHostInfo {
        return qtc.QHostInfo_new2(@ptrCast(d));
    }

    /// New3 constructs a new QHostInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` lookupId: i32 `
    ///
    pub fn New3(lookupId: i32) QtC.QHostInfo {
        return qtc.QHostInfo_new3(@intCast(lookupId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHostInfo `
    ///
    /// ` d: QtC.QHostInfo `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, d: ?*anyopaque) void {
        qtc.QHostInfo_OperatorAssign(@ptrCast(self), @ptrCast(d));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHostInfo `
    ///
    /// ` other: QtC.QHostInfo `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QHostInfo_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#hostName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHostInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn HostName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QHostInfo_HostName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhostinfo.HostName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#setHostName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHostInfo `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetHostName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QHostInfo_SetHostName(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#addresses)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHostInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Addresses(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QHostAddress {
        const _arr: qtc.libqt_list = qtc.QHostInfo_Addresses(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QHostAddress, _arr.len) catch @panic("qhostinfo.Addresses: Memory allocation failed");
        const _data: [*]QtC.QHostAddress = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#setAddresses)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHostInfo `
    ///
    /// ` addresses: []QtC.QHostAddress `
    ///
    pub fn SetAddresses(self: ?*anyopaque, addresses: []QtC.QHostAddress) void {
        const addresses_list = qtc.libqt_list{
            .len = addresses.len,
            .data = @ptrCast(addresses.ptr),
        };
        qtc.QHostInfo_SetAddresses(@ptrCast(self), addresses_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHostInfo `
    ///
    /// ## Returns:
    ///
    /// ` qhostinfo_enums.HostInfoError `
    ///
    pub fn Error(self: ?*anyopaque) i32 {
        return qtc.QHostInfo_Error(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#setError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHostInfo `
    ///
    /// ` errorVal: qhostinfo_enums.HostInfoError `
    ///
    pub fn SetError(self: ?*anyopaque, errorVal: i32) void {
        qtc.QHostInfo_SetError(@ptrCast(self), @intCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHostInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QHostInfo_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhostinfo.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#setErrorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHostInfo `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn SetErrorString(self: ?*anyopaque, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QHostInfo_SetErrorString(@ptrCast(self), errorString_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#setLookupId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHostInfo `
    ///
    /// ` id: i32 `
    ///
    pub fn SetLookupId(self: ?*anyopaque, id: i32) void {
        qtc.QHostInfo_SetLookupId(@ptrCast(self), @intCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#lookupId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHostInfo `
    ///
    pub fn LookupId(self: ?*anyopaque) i32 {
        return qtc.QHostInfo_LookupId(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#abortHostLookup)
    ///
    /// ## Parameter(s):
    ///
    /// ` lookupId: i32 `
    ///
    pub fn AbortHostLookup(lookupId: i32) void {
        qtc.QHostInfo_AbortHostLookup(@intCast(lookupId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#fromName)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn FromName(name: []const u8) QtC.QHostInfo {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QHostInfo_FromName(name_str);
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#dtor.QHostInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QHostInfo `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QHostInfo_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qhostinfo.html#public-types)
pub const enums = struct {
    pub const HostInfoError = enum {
        pub const NoError: i32 = 0;
        pub const HostNotFound: i32 = 1;
        pub const UnknownError: i32 = 2;
    };
};
