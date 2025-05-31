const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qwebenginehttprequest_enums = enums;
const std = @import("std");
pub const map_constu8_constu8 = std.StringHashMapUnmanaged([]const u8);

/// https://doc.qt.io/qt-6/qwebenginehttprequest.html
pub const qwebenginehttprequest = struct {
    /// New constructs a new QWebEngineHttpRequest object.
    ///
    ///
    pub fn New() QtC.QWebEngineHttpRequest {
        return qtc.QWebEngineHttpRequest_new();
    }

    /// New2 constructs a new QWebEngineHttpRequest object.
    ///
    /// ``` other: QtC.QWebEngineHttpRequest ```
    pub fn New2(other: ?*anyopaque) QtC.QWebEngineHttpRequest {
        return qtc.QWebEngineHttpRequest_new2(@ptrCast(other));
    }

    /// New3 constructs a new QWebEngineHttpRequest object.
    ///
    /// ``` url: QtC.QUrl ```
    pub fn New3(url: ?*anyopaque) QtC.QWebEngineHttpRequest {
        return qtc.QWebEngineHttpRequest_new3(@ptrCast(url));
    }

    /// New4 constructs a new QWebEngineHttpRequest object.
    ///
    /// ``` url: QtC.QUrl, method: ?*qwebenginehttprequest_enums.Method ```
    pub fn New4(url: ?*anyopaque, method: ?*anyopaque) QtC.QWebEngineHttpRequest {
        return qtc.QWebEngineHttpRequest_new4(@ptrCast(url), @intCast(method));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#operator=)
    ///
    /// ``` self: QtC.QWebEngineHttpRequest, other: QtC.QWebEngineHttpRequest ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWebEngineHttpRequest_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#postRequest)
    ///
    /// ``` url: QtC.QUrl, postData: map_constu8_constu8, allocator: std.mem.Allocator ```
    pub fn PostRequest(url: ?*anyopaque, postData: map_constu8_constu8, allocator: std.mem.Allocator) QtC.QWebEngineHttpRequest {
        const postData_keys = allocator.alloc(qtc.struct_libqt_string, postData.count()) catch @panic("qwebenginehttprequest.PostRequest: Memory allocation failed");
        defer allocator.free(postData_keys);
        const postData_values = allocator.alloc([]const u8, postData.count()) catch @panic("qwebenginehttprequest.PostRequest: Memory allocation failed");
        defer allocator.free(postData_values);
        var _i: usize = 0;
        var postData_it = postData.iterator();
        while (postData_it.next()) |entry| {
            const key = entry.key_ptr.*;
            postData_keys[_i] = qtc.struct_libqt_string{
                .len = key.len,
                .data = @ptrCast(@constCast(key.ptr)),
            };
            postData_values[_i] = entry.value_ptr.*;
            _i += 1;
        }
        const postData_map = qtc.struct_libqt_map{
            .len = postData.count(),
            .keys = @ptrCast(postData_keys.ptr),
            .values = @ptrCast(postData_values.ptr),
        };
        return qtc.QWebEngineHttpRequest_PostRequest(@ptrCast(url), postData_map);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#swap)
    ///
    /// ``` self: QtC.QWebEngineHttpRequest, other: QtC.QWebEngineHttpRequest ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWebEngineHttpRequest_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#operator==)
    ///
    /// ``` self: QtC.QWebEngineHttpRequest, other: QtC.QWebEngineHttpRequest ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QWebEngineHttpRequest_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#operator!=)
    ///
    /// ``` self: QtC.QWebEngineHttpRequest, other: QtC.QWebEngineHttpRequest ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QWebEngineHttpRequest_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#method)
    ///
    /// ``` self: QtC.QWebEngineHttpRequest ```
    pub fn Method(self: ?*anyopaque) i64 {
        return qtc.QWebEngineHttpRequest_Method(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#setMethod)
    ///
    /// ``` self: QtC.QWebEngineHttpRequest, method: qwebenginehttprequest_enums.Method ```
    pub fn SetMethod(self: ?*anyopaque, method: i64) void {
        qtc.QWebEngineHttpRequest_SetMethod(@ptrCast(self), @intCast(method));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#url)
    ///
    /// ``` self: QtC.QWebEngineHttpRequest ```
    pub fn Url(self: ?*anyopaque) QtC.QUrl {
        return qtc.QWebEngineHttpRequest_Url(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#setUrl)
    ///
    /// ``` self: QtC.QWebEngineHttpRequest, url: QtC.QUrl ```
    pub fn SetUrl(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QWebEngineHttpRequest_SetUrl(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#postData)
    ///
    /// ``` self: QtC.QWebEngineHttpRequest, allocator: std.mem.Allocator ```
    pub fn PostData(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QWebEngineHttpRequest_PostData(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_bytearray));
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qwebenginehttprequest.PostData: Memory allocation failed");
        for (0.._bytearray.len) |_i| {
            _ret[_i] = _bytearray.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#setPostData)
    ///
    /// ``` self: QtC.QWebEngineHttpRequest, postData: []u8 ```
    pub fn SetPostData(self: ?*anyopaque, postData: []u8) void {
        const postData_str = qtc.struct_libqt_string{
            .len = postData.len,
            .data = @constCast(postData.ptr),
        };
        qtc.QWebEngineHttpRequest_SetPostData(@ptrCast(self), postData_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#hasHeader)
    ///
    /// ``` self: QtC.QWebEngineHttpRequest, headerName: []u8 ```
    pub fn HasHeader(self: ?*anyopaque, headerName: []u8) bool {
        const headerName_str = qtc.struct_libqt_string{
            .len = headerName.len,
            .data = @constCast(headerName.ptr),
        };
        return qtc.QWebEngineHttpRequest_HasHeader(@ptrCast(self), headerName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#headers)
    ///
    /// ``` self: QtC.QWebEngineHttpRequest, allocator: std.mem.Allocator ```
    pub fn Headers(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QWebEngineHttpRequest_Headers(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                qtc.libqt_string_free(@ptrCast(&_str[_i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qwebenginehttprequest.Headers: Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qwebenginehttprequest.Headers: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#header)
    ///
    /// ``` self: QtC.QWebEngineHttpRequest, headerName: []u8, allocator: std.mem.Allocator ```
    pub fn Header(self: ?*anyopaque, headerName: []u8, allocator: std.mem.Allocator) []u8 {
        const headerName_str = qtc.struct_libqt_string{
            .len = headerName.len,
            .data = @constCast(headerName.ptr),
        };
        const _bytearray: qtc.struct_libqt_string = qtc.QWebEngineHttpRequest_Header(@ptrCast(self), headerName_str);
        defer qtc.libqt_string_free(@constCast(&_bytearray));
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qwebenginehttprequest.Header: Memory allocation failed");
        for (0.._bytearray.len) |_i| {
            _ret[_i] = _bytearray.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#setHeader)
    ///
    /// ``` self: QtC.QWebEngineHttpRequest, headerName: []u8, value: []u8 ```
    pub fn SetHeader(self: ?*anyopaque, headerName: []u8, value: []u8) void {
        const headerName_str = qtc.struct_libqt_string{
            .len = headerName.len,
            .data = @constCast(headerName.ptr),
        };
        const value_str = qtc.struct_libqt_string{
            .len = value.len,
            .data = @constCast(value.ptr),
        };
        qtc.QWebEngineHttpRequest_SetHeader(@ptrCast(self), headerName_str, value_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#unsetHeader)
    ///
    /// ``` self: QtC.QWebEngineHttpRequest, headerName: []u8 ```
    pub fn UnsetHeader(self: ?*anyopaque, headerName: []u8) void {
        const headerName_str = qtc.struct_libqt_string{
            .len = headerName.len,
            .data = @constCast(headerName.ptr),
        };
        qtc.QWebEngineHttpRequest_UnsetHeader(@ptrCast(self), headerName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#dtor.QWebEngineHttpRequest)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QWebEngineHttpRequest ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWebEngineHttpRequest_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qwebenginehttprequest.html#types
pub const enums = struct {
    pub const Method = enum {
        pub const Get: i32 = 0;
        pub const Post: i32 = 1;
    };
};
