const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qwebenginehttprequest_enums = enums;
const std = @import("std");
const arraymap_constu8_constu8 = std.StringArrayHashMapUnmanaged([]const u8);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html)
pub const qwebenginehttprequest = struct {
    /// New constructs a new QWebEngineHttpRequest object.
    ///
    pub fn New() QtC.QWebEngineHttpRequest {
        return qtc.QWebEngineHttpRequest_new();
    }

    /// New2 constructs a new QWebEngineHttpRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QWebEngineHttpRequest `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QWebEngineHttpRequest {
        return qtc.QWebEngineHttpRequest_new2(@ptrCast(other));
    }

    /// New3 constructs a new QWebEngineHttpRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn New3(url: ?*anyopaque) QtC.QWebEngineHttpRequest {
        return qtc.QWebEngineHttpRequest_new3(@ptrCast(url));
    }

    /// New4 constructs a new QWebEngineHttpRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ` method: *const qwebenginehttprequest_enums.Method `
    ///
    pub fn New4(url: ?*anyopaque, method: *const i32) QtC.QWebEngineHttpRequest {
        return qtc.QWebEngineHttpRequest_new4(@ptrCast(url), @ptrCast(method));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineHttpRequest `
    ///
    /// ` other: QtC.QWebEngineHttpRequest `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWebEngineHttpRequest_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#postRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ` postData: arraymap_constu8_constu8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PostRequest(url: ?*anyopaque, postData: arraymap_constu8_constu8, allocator: std.mem.Allocator) QtC.QWebEngineHttpRequest {
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
        return qtc.QWebEngineHttpRequest_PostRequest(@ptrCast(url), postData_map);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineHttpRequest `
    ///
    /// ` other: QtC.QWebEngineHttpRequest `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWebEngineHttpRequest_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineHttpRequest `
    ///
    /// ` other: QtC.QWebEngineHttpRequest `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QWebEngineHttpRequest_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineHttpRequest `
    ///
    /// ` other: QtC.QWebEngineHttpRequest `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QWebEngineHttpRequest_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#method)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineHttpRequest `
    ///
    /// ## Returns:
    ///
    /// ` qwebenginehttprequest_enums.Method `
    ///
    pub fn Method(self: ?*anyopaque) i32 {
        return qtc.QWebEngineHttpRequest_Method(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#setMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineHttpRequest `
    ///
    /// ` method: qwebenginehttprequest_enums.Method `
    ///
    pub fn SetMethod(self: ?*anyopaque, method: i32) void {
        qtc.QWebEngineHttpRequest_SetMethod(@ptrCast(self), @bitCast(method));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineHttpRequest `
    ///
    pub fn Url(self: ?*anyopaque) QtC.QUrl {
        return qtc.QWebEngineHttpRequest_Url(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineHttpRequest `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn SetUrl(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QWebEngineHttpRequest_SetUrl(@ptrCast(self), @ptrCast(url));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#postData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineHttpRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PostData(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWebEngineHttpRequest_PostData(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qwebenginehttprequest.PostData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#setPostData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineHttpRequest `
    ///
    /// ` postData: []u8 `
    ///
    pub fn SetPostData(self: ?*anyopaque, postData: []u8) void {
        const postData_str = qtc.libqt_string{
            .len = postData.len,
            .data = postData.ptr,
        };
        qtc.QWebEngineHttpRequest_SetPostData(@ptrCast(self), postData_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#hasHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineHttpRequest `
    ///
    /// ` headerName: []u8 `
    ///
    pub fn HasHeader(self: ?*anyopaque, headerName: []u8) bool {
        const headerName_str = qtc.libqt_string{
            .len = headerName.len,
            .data = headerName.ptr,
        };
        return qtc.QWebEngineHttpRequest_HasHeader(@ptrCast(self), headerName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#headers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineHttpRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Headers(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QWebEngineHttpRequest_Headers(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.QWebEngineHttpRequest `
    ///
    /// ` headerName: []u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Header(self: ?*anyopaque, headerName: []u8, allocator: std.mem.Allocator) []u8 {
        const headerName_str = qtc.libqt_string{
            .len = headerName.len,
            .data = headerName.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QWebEngineHttpRequest_Header(@ptrCast(self), headerName_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qwebenginehttprequest.Header: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#setHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineHttpRequest `
    ///
    /// ` headerName: []u8 `
    ///
    /// ` value: []u8 `
    ///
    pub fn SetHeader(self: ?*anyopaque, headerName: []u8, value: []u8) void {
        const headerName_str = qtc.libqt_string{
            .len = headerName.len,
            .data = headerName.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QWebEngineHttpRequest_SetHeader(@ptrCast(self), headerName_str, value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#unsetHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineHttpRequest `
    ///
    /// ` headerName: []u8 `
    ///
    pub fn UnsetHeader(self: ?*anyopaque, headerName: []u8) void {
        const headerName_str = qtc.libqt_string{
            .len = headerName.len,
            .data = headerName.ptr,
        };
        qtc.QWebEngineHttpRequest_UnsetHeader(@ptrCast(self), headerName_str);
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
    /// ` self: QtC.QWebEngineHttpRequest `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QWebEngineHttpRequest_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#public-types)
pub const enums = struct {
    pub const Method = enum(i32) {
        pub const Get: i32 = 0;
        pub const Post: i32 = 1;
    };
};
