const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QUrl = @import("libqt6").QUrl;
const qwebenginehttprequest_enums = enums;
const std = @import("std");
const ArrayMap_constu8_constu8 = std.array_hash_map.String([]const u8);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html)
pub const QWebEngineHttpRequest = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWebEngineHttpRequest,

    pub const _is_QWebEngineHttpRequest = {};

    /// New constructs a new QWebEngineHttpRequest object.
    ///
    pub fn New() QWebEngineHttpRequest {
        return .{ .ptr = qtc.QWebEngineHttpRequest_new() };
    }

    /// New2 constructs a new QWebEngineHttpRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QWebEngineHttpRequest `
    ///
    pub fn New2(other: anytype) QWebEngineHttpRequest {
        comptime _ = @TypeOf(other)._is_QWebEngineHttpRequest;
        return .{ .ptr = qtc.QWebEngineHttpRequest_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QWebEngineHttpRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn New3(url: anytype) QWebEngineHttpRequest {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.QWebEngineHttpRequest_new3(@ptrCast(url.ptr)) };
    }

    /// New4 constructs a new QWebEngineHttpRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    /// ` method: *const qwebenginehttprequest_enums.Method `
    ///
    pub fn New4(url: anytype, method: *const i32) QWebEngineHttpRequest {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.QWebEngineHttpRequest_new4(@ptrCast(url.ptr), @ptrCast(method)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineHttpRequest `
    ///
    /// ` other: QWebEngineHttpRequest `
    ///
    pub fn OperatorAssign(self: QWebEngineHttpRequest, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QWebEngineHttpRequest;
        qtc.QWebEngineHttpRequest_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#postRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` url: QUrl `
    ///
    /// ` postData: ArrayMap_constu8_constu8 `
    ///
    pub fn PostRequest(allocator: std.mem.Allocator, url: anytype, postData: ArrayMap_constu8_constu8) QWebEngineHttpRequest {
        comptime _ = @TypeOf(url)._is_QUrl;
        const postData_count = postData.count();
        const postData_keys = allocator.alloc(qtc.libqt_string, postData_count) catch @panic("qwebenginehttprequest.PostRequest: Memory allocation failed");
        defer allocator.free(postData_keys);
        const postData_values = allocator.alloc(qtc.libqt_string, postData_count) catch @panic("qwebenginehttprequest.PostRequest: Memory allocation failed");
        defer allocator.free(postData_values);
        var i: usize = 0;
        var postData_it = postData.iterator();
        while (postData_it.next()) |it_entry| : (i += 1) {
            const postData_key = it_entry.key_ptr.*;
            postData_keys[i] = qtc.libqt_string{
                .len = postData_key.len,
                .data = postData_key.ptr,
            };
            const value = it_entry.value_ptr.*;
            postData_values[i] = qtc.libqt_string{
                .len = value.len,
                .data = value.ptr,
            };
        }
        const postData_map = qtc.libqt_map{
            .len = postData_count,
            .keys = @ptrCast(postData_keys.ptr),
            .values = @ptrCast(postData_values.ptr),
        };
        return .{ .ptr = qtc.QWebEngineHttpRequest_PostRequest(@ptrCast(url.ptr), postData_map) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineHttpRequest `
    ///
    /// ` other: QWebEngineHttpRequest `
    ///
    pub fn Swap(self: QWebEngineHttpRequest, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QWebEngineHttpRequest;
        qtc.QWebEngineHttpRequest_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineHttpRequest `
    ///
    /// ` other: QWebEngineHttpRequest `
    ///
    pub fn OperatorEqual(self: QWebEngineHttpRequest, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QWebEngineHttpRequest;
        return qtc.QWebEngineHttpRequest_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineHttpRequest `
    ///
    /// ` other: QWebEngineHttpRequest `
    ///
    pub fn OperatorNotEqual(self: QWebEngineHttpRequest, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QWebEngineHttpRequest;
        return qtc.QWebEngineHttpRequest_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#method)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineHttpRequest `
    ///
    /// ## Returns:
    ///
    /// ` qwebenginehttprequest_enums.Method `
    ///
    pub fn Method(self: QWebEngineHttpRequest) i32 {
        return qtc.QWebEngineHttpRequest_Method(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#setMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineHttpRequest `
    ///
    /// ` method: qwebenginehttprequest_enums.Method `
    ///
    pub fn SetMethod(self: QWebEngineHttpRequest, method: i32) void {
        qtc.QWebEngineHttpRequest_SetMethod(@ptrCast(self.ptr), @bitCast(method));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineHttpRequest `
    ///
    pub fn Url(self: QWebEngineHttpRequest) QUrl {
        return .{ .ptr = qtc.QWebEngineHttpRequest_Url(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineHttpRequest `
    ///
    /// ` url: QUrl `
    ///
    pub fn SetUrl(self: QWebEngineHttpRequest, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QWebEngineHttpRequest_SetUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#postData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineHttpRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PostData(self: QWebEngineHttpRequest, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWebEngineHttpRequest_PostData(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qwebenginehttprequest.PostData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#setPostData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineHttpRequest `
    ///
    /// ` postData: []u8 `
    ///
    pub fn SetPostData(self: QWebEngineHttpRequest, postData: []u8) void {
        const postData_str = qtc.libqt_string{
            .len = postData.len,
            .data = postData.ptr,
        };
        qtc.QWebEngineHttpRequest_SetPostData(@ptrCast(self.ptr), postData_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#hasHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineHttpRequest `
    ///
    /// ` headerName: []u8 `
    ///
    pub fn HasHeader(self: QWebEngineHttpRequest, headerName: []u8) bool {
        const headerName_str = qtc.libqt_string{
            .len = headerName.len,
            .data = headerName.ptr,
        };
        return qtc.QWebEngineHttpRequest_HasHeader(@ptrCast(self.ptr), headerName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#headers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineHttpRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Headers(self: QWebEngineHttpRequest, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QWebEngineHttpRequest_Headers(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qwebenginehttprequest.Headers: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qwebenginehttprequest.Headers: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#header)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineHttpRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` headerName: []u8 `
    ///
    pub fn Header(self: QWebEngineHttpRequest, allocator: std.mem.Allocator, headerName: []u8) []u8 {
        const headerName_str = qtc.libqt_string{
            .len = headerName.len,
            .data = headerName.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QWebEngineHttpRequest_Header(@ptrCast(self.ptr), headerName_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qwebenginehttprequest.Header: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#setHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineHttpRequest `
    ///
    /// ` headerName: []u8 `
    ///
    /// ` value: []u8 `
    ///
    pub fn SetHeader(self: QWebEngineHttpRequest, headerName: []u8, value: []u8) void {
        const headerName_str = qtc.libqt_string{
            .len = headerName.len,
            .data = headerName.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QWebEngineHttpRequest_SetHeader(@ptrCast(self.ptr), headerName_str, value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#unsetHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineHttpRequest `
    ///
    /// ` headerName: []u8 `
    ///
    pub fn UnsetHeader(self: QWebEngineHttpRequest, headerName: []u8) void {
        const headerName_str = qtc.libqt_string{
            .len = headerName.len,
            .data = headerName.ptr,
        };
        qtc.QWebEngineHttpRequest_UnsetHeader(@ptrCast(self.ptr), headerName_str);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#dtor.QWebEngineHttpRequest)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineHttpRequest `
    ///
    pub fn Delete(self: QWebEngineHttpRequest) void {
        qtc.QWebEngineHttpRequest_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#public-types)
pub const enums = struct {
    pub const Method = enum(i32) {
        pub const Get: i32 = 0;
        pub const Post: i32 = 1;
    };
};
