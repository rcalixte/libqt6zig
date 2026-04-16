const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QChar = @import("libqt6").QChar;
const QUrl = @import("libqt6").QUrl;
const qurl_enums = @import("libqurl.zig").enums;
const std = @import("std");
const Struct_constu8_constu8 = struct { first: []const u8, second: []const u8 };

/// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html)
pub const QUrlQuery = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QUrlQuery,

    pub const _is_QUrlQuery = {};

    /// New constructs a new QUrlQuery object.
    ///
    pub fn New() QUrlQuery {
        return .{ .ptr = qtc.QUrlQuery_new() };
    }

    /// New2 constructs a new QUrlQuery object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn New2(url: anytype) QUrlQuery {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.QUrlQuery_new2(@ptrCast(url.ptr)) };
    }

    /// New3 constructs a new QUrlQuery object.
    ///
    /// ## Parameter(s):
    ///
    /// ` queryString: []const u8 `
    ///
    pub fn New3(queryString: []const u8) QUrlQuery {
        const queryString_str = qtc.libqt_string{
            .len = queryString.len,
            .data = queryString.ptr,
        };
        return .{ .ptr = qtc.QUrlQuery_new3(queryString_str) };
    }

    /// New4 constructs a new QUrlQuery object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QUrlQuery `
    ///
    pub fn New4(other: anytype) QUrlQuery {
        comptime _ = @TypeOf(other)._is_QUrlQuery;
        return .{ .ptr = qtc.QUrlQuery_new4(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    /// ` other: QUrlQuery `
    ///
    pub fn OperatorAssign(self: QUrlQuery, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QUrlQuery;
        qtc.QUrlQuery_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    /// ` other: QUrlQuery `
    ///
    pub fn Swap(self: QUrlQuery, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QUrlQuery;
        qtc.QUrlQuery_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    pub fn IsEmpty(self: QUrlQuery) bool {
        return qtc.QUrlQuery_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#isDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    pub fn IsDetached(self: QUrlQuery) bool {
        return qtc.QUrlQuery_IsDetached(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    pub fn Clear(self: QUrlQuery) void {
        qtc.QUrlQuery_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#query)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Query(self: QUrlQuery, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUrlQuery_Query(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurlquery.Query: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#setQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    /// ` queryString: []const u8 `
    ///
    pub fn SetQuery(self: QUrlQuery, queryString: []const u8) void {
        const queryString_str = qtc.libqt_string{
            .len = queryString.len,
            .data = queryString.ptr,
        };
        qtc.QUrlQuery_SetQuery(@ptrCast(self.ptr), queryString_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: QUrlQuery, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUrlQuery_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurlquery.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#setQueryDelimiters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    /// ` valueDelimiter: QChar `
    ///
    /// ` pairDelimiter: QChar `
    ///
    pub fn SetQueryDelimiters(self: QUrlQuery, valueDelimiter: anytype, pairDelimiter: anytype) void {
        comptime _ = @TypeOf(valueDelimiter)._is_QChar;
        comptime _ = @TypeOf(pairDelimiter)._is_QChar;
        qtc.QUrlQuery_SetQueryDelimiters(@ptrCast(self.ptr), @ptrCast(valueDelimiter.ptr), @ptrCast(pairDelimiter.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#queryValueDelimiter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    pub fn QueryValueDelimiter(self: QUrlQuery) QChar {
        return .{ .ptr = qtc.QUrlQuery_QueryValueDelimiter(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#queryPairDelimiter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    pub fn QueryPairDelimiter(self: QUrlQuery) QChar {
        return .{ .ptr = qtc.QUrlQuery_QueryPairDelimiter(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#queryItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QueryItems(self: QUrlQuery, allocator: std.mem.Allocator) []Struct_constu8_constu8 {
        const _arr: qtc.libqt_list = qtc.QUrlQuery_QueryItems(@ptrCast(self.ptr));
        const _data: [*]qtc.libqt_pair = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(@alignCast(_data[i].first)));
                qtc.libqt_string_free(@ptrCast(@alignCast(_data[i].second)));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(Struct_constu8_constu8, _arr.len) catch @panic("qurlquery.QueryItems: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _first_str: *qtc.libqt_string = @ptrCast(@alignCast(_data[i].first));
            const _first_slice = allocator.alloc(u8, _first_str.len) catch @panic("qurlquery.QueryItems: Memory allocation failed");
            @memcpy(_first_slice, _first_str.data[0.._first_str.len]);
            const _second_str: *qtc.libqt_string = @ptrCast(@alignCast(_data[i].second));
            const _second_slice = allocator.alloc(u8, _second_str.len) catch @panic("qurlquery.QueryItems: Memory allocation failed");
            @memcpy(_second_slice, _second_str.data[0.._second_str.len]);
            _ret[i] = Struct_constu8_constu8{
                .first = _first_slice,
                .second = _second_slice,
            };
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#hasQueryItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    /// ` key: []const u8 `
    ///
    pub fn HasQueryItem(self: QUrlQuery, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QUrlQuery_HasQueryItem(@ptrCast(self.ptr), key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#addQueryItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn AddQueryItem(self: QUrlQuery, key: []const u8, value: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QUrlQuery_AddQueryItem(@ptrCast(self.ptr), key_str, value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#removeQueryItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    /// ` key: []const u8 `
    ///
    pub fn RemoveQueryItem(self: QUrlQuery, key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QUrlQuery_RemoveQueryItem(@ptrCast(self.ptr), key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#queryItemValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    pub fn QueryItemValue(self: QUrlQuery, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.QUrlQuery_QueryItemValue(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurlquery.QueryItemValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#allQueryItemValues)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    pub fn AllQueryItemValues(self: QUrlQuery, allocator: std.mem.Allocator, key: []const u8) []const []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QUrlQuery_AllQueryItemValues(@ptrCast(self.ptr), key_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qurlquery.AllQueryItemValues: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qurlquery.AllQueryItemValues: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#removeAllQueryItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    /// ` key: []const u8 `
    ///
    pub fn RemoveAllQueryItems(self: QUrlQuery, key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QUrlQuery_RemoveAllQueryItems(@ptrCast(self.ptr), key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#query)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` encoding: flag of qurl_enums.ComponentFormattingOption `
    ///
    pub fn Query1(self: QUrlQuery, allocator: std.mem.Allocator, encoding: u32) []const u8 {
        var _str = qtc.QUrlQuery_Query1(@ptrCast(self.ptr), @bitCast(encoding));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurlquery.Query1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` encoding: flag of qurl_enums.ComponentFormattingOption `
    ///
    pub fn ToString1(self: QUrlQuery, allocator: std.mem.Allocator, encoding: u32) []const u8 {
        var _str = qtc.QUrlQuery_ToString1(@ptrCast(self.ptr), @bitCast(encoding));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurlquery.ToString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#queryItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` encoding: flag of qurl_enums.ComponentFormattingOption `
    ///
    pub fn QueryItems1(self: QUrlQuery, allocator: std.mem.Allocator, encoding: u32) []Struct_constu8_constu8 {
        const _arr: qtc.libqt_list = qtc.QUrlQuery_QueryItems1(@ptrCast(self.ptr), @bitCast(encoding));
        const _data: [*]qtc.libqt_pair = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(@alignCast(_data[i].first)));
                qtc.libqt_string_free(@ptrCast(@alignCast(_data[i].second)));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(Struct_constu8_constu8, _arr.len) catch @panic("qurlquery.QueryItems1: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _first_str: *qtc.libqt_string = @ptrCast(@alignCast(_data[i].first));
            const _first_slice = allocator.alloc(u8, _first_str.len) catch @panic("qurlquery.QueryItems1: Memory allocation failed");
            @memcpy(_first_slice, _first_str.data[0.._first_str.len]);
            const _second_str: *qtc.libqt_string = @ptrCast(@alignCast(_data[i].second));
            const _second_slice = allocator.alloc(u8, _second_str.len) catch @panic("qurlquery.QueryItems1: Memory allocation failed");
            @memcpy(_second_slice, _second_str.data[0.._second_str.len]);
            _ret[i] = Struct_constu8_constu8{
                .first = _first_slice,
                .second = _second_slice,
            };
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#queryItemValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    /// ` encoding: flag of qurl_enums.ComponentFormattingOption `
    ///
    pub fn QueryItemValue2(self: QUrlQuery, allocator: std.mem.Allocator, key: []const u8, encoding: u32) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.QUrlQuery_QueryItemValue2(@ptrCast(self.ptr), key_str, @bitCast(encoding));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurlquery.QueryItemValue2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#allQueryItemValues)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    /// ` encoding: flag of qurl_enums.ComponentFormattingOption `
    ///
    pub fn AllQueryItemValues2(self: QUrlQuery, allocator: std.mem.Allocator, key: []const u8, encoding: u32) []const []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QUrlQuery_AllQueryItemValues2(@ptrCast(self.ptr), key_str, @bitCast(encoding));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qurlquery.AllQueryItemValues2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qurlquery.AllQueryItemValues2: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#dtor.QUrlQuery)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QUrlQuery `
    ///
    pub fn Delete(self: QUrlQuery) void {
        qtc.QUrlQuery_Delete(@ptrCast(self.ptr));
    }
};
