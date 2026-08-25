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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QWebEngineHttpRequest object in C++ memory
    ///
    pub fn new() QWebEngineHttpRequest {
        return .{ .ptr = qtc.QWebEngineHttpRequest_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QWebEngineHttpRequest object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QWebEngineHttpRequest `
    ///
    pub fn new2(other: anytype) QWebEngineHttpRequest {
        comptime _ = @TypeOf(other)._is_QWebEngineHttpRequest;
        return .{ .ptr = qtc.QWebEngineHttpRequest_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QWebEngineHttpRequest object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _url: QUrl `
    ///
    pub fn new3(_url: anytype) QWebEngineHttpRequest {
        comptime _ = @TypeOf(_url)._is_QUrl;
        return .{ .ptr = qtc.QWebEngineHttpRequest_new3(@ptrCast(_url.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QWebEngineHttpRequest object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _url: QUrl `
    ///
    /// ` _method: *const qwebenginehttprequest_enums.Method `
    ///
    pub fn new4(_url: anytype, _method: *const i32) QWebEngineHttpRequest {
        comptime _ = @TypeOf(_url)._is_QUrl;
        return .{ .ptr = qtc.QWebEngineHttpRequest_new4(@ptrCast(_url.ptr), @ptrCast(_method)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineHttpRequest `
    ///
    /// ` other: QWebEngineHttpRequest `
    ///
    pub fn operatorAssign(self: QWebEngineHttpRequest, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QWebEngineHttpRequest;
        qtc.QWebEngineHttpRequest_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `postRequest` instead
    ///
    pub const PostRequest = postRequest;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#postRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _url: QUrl `
    ///
    /// ` _postData: ArrayMap_constu8_constu8 `
    ///
    pub fn postRequest(allocator: std.mem.Allocator, _url: anytype, _postData: ArrayMap_constu8_constu8) QWebEngineHttpRequest {
        comptime _ = @TypeOf(_url)._is_QUrl;
        const postData_count = _postData.count();
        const postData_keys = allocator.alloc(qtc.libqt_string, postData_count) catch @panic("QWebEngineHttpRequest.postRequest: Memory allocation failed");
        defer allocator.free(postData_keys);
        const postData_values = allocator.alloc(qtc.libqt_string, postData_count) catch @panic("QWebEngineHttpRequest.postRequest: Memory allocation failed");
        defer allocator.free(postData_values);
        var i: usize = 0;
        var postData_it = _postData.iterator();
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
        return .{ .ptr = qtc.QWebEngineHttpRequest_PostRequest(@ptrCast(_url.ptr), postData_map) };
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineHttpRequest `
    ///
    /// ` other: QWebEngineHttpRequest `
    ///
    pub fn swap(self: QWebEngineHttpRequest, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QWebEngineHttpRequest;
        qtc.QWebEngineHttpRequest_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineHttpRequest `
    ///
    /// ` other: QWebEngineHttpRequest `
    ///
    pub fn operatorEqual(self: QWebEngineHttpRequest, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QWebEngineHttpRequest;
        return qtc.QWebEngineHttpRequest_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineHttpRequest `
    ///
    /// ` other: QWebEngineHttpRequest `
    ///
    pub fn operatorNotEqual(self: QWebEngineHttpRequest, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QWebEngineHttpRequest;
        return qtc.QWebEngineHttpRequest_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `method` instead
    ///
    pub const Method = method;

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
    pub fn method(self: QWebEngineHttpRequest) i32 {
        return qtc.QWebEngineHttpRequest_Method(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMethod` instead
    ///
    pub const SetMethod = setMethod;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#setMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineHttpRequest `
    ///
    /// ` _method: qwebenginehttprequest_enums.Method `
    ///
    pub fn setMethod(self: QWebEngineHttpRequest, _method: i32) void {
        qtc.QWebEngineHttpRequest_SetMethod(@ptrCast(self.ptr), @bitCast(_method));
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineHttpRequest `
    ///
    pub fn url(self: QWebEngineHttpRequest) QUrl {
        return .{ .ptr = qtc.QWebEngineHttpRequest_Url(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setUrl` instead
    ///
    pub const SetUrl = setUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineHttpRequest `
    ///
    /// ` _url: QUrl `
    ///
    pub fn setUrl(self: QWebEngineHttpRequest, _url: anytype) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.QWebEngineHttpRequest_SetUrl(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `postData` instead
    ///
    pub const PostData = postData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#postData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineHttpRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn postData(self: QWebEngineHttpRequest, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWebEngineHttpRequest_PostData(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QWebEngineHttpRequest.postData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPostData` instead
    ///
    pub const SetPostData = setPostData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#setPostData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineHttpRequest `
    ///
    /// ` _postData: []u8 `
    ///
    pub fn setPostData(self: QWebEngineHttpRequest, _postData: []u8) void {
        const postData_str = qtc.libqt_string{
            .len = _postData.len,
            .data = _postData.ptr,
        };
        qtc.QWebEngineHttpRequest_SetPostData(@ptrCast(self.ptr), postData_str);
    }

    /// ### DEPRECATED: Use `hasHeader` instead
    ///
    pub const HasHeader = hasHeader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#hasHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineHttpRequest `
    ///
    /// ` headerName: []u8 `
    ///
    pub fn hasHeader(self: QWebEngineHttpRequest, headerName: []u8) bool {
        const headerName_str = qtc.libqt_string{
            .len = headerName.len,
            .data = headerName.ptr,
        };
        return qtc.QWebEngineHttpRequest_HasHeader(@ptrCast(self.ptr), headerName_str);
    }

    /// ### DEPRECATED: Use `headers` instead
    ///
    pub const Headers = headers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#headers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineHttpRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn headers(self: QWebEngineHttpRequest, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QWebEngineHttpRequest_Headers(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QWebEngineHttpRequest.headers: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QWebEngineHttpRequest.headers: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `header` instead
    ///
    pub const Header = header;

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
    pub fn header(self: QWebEngineHttpRequest, allocator: std.mem.Allocator, headerName: []u8) []u8 {
        const headerName_str = qtc.libqt_string{
            .len = headerName.len,
            .data = headerName.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QWebEngineHttpRequest_Header(@ptrCast(self.ptr), headerName_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QWebEngineHttpRequest.header: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setHeader` instead
    ///
    pub const SetHeader = setHeader;

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
    pub fn setHeader(self: QWebEngineHttpRequest, headerName: []u8, value: []u8) void {
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

    /// ### DEPRECATED: Use `unsetHeader` instead
    ///
    pub const UnsetHeader = unsetHeader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#unsetHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineHttpRequest `
    ///
    /// ` headerName: []u8 `
    ///
    pub fn unsetHeader(self: QWebEngineHttpRequest, headerName: []u8) void {
        const headerName_str = qtc.libqt_string{
            .len = headerName.len,
            .data = headerName.ptr,
        };
        qtc.QWebEngineHttpRequest_UnsetHeader(@ptrCast(self.ptr), headerName_str);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#dtor.QWebEngineHttpRequest)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineHttpRequest `
    ///
    pub fn delete(self: QWebEngineHttpRequest) void {
        qtc.QWebEngineHttpRequest_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#public-types)
pub const enums = struct {
    pub const Method = enum {
        pub const Get: i32 = 0;
        pub const Post: i32 = 1;
    };
};
