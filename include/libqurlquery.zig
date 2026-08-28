const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QChar = @import("libqt6").QChar;
const QUrl = @import("libqt6").QUrl;
const qurl_enums = @import("libqurl.zig").enums;
const std = @import("std");
const Struct_constu8_constu8 = @import("libqt6").types.Struct_constu8_constu8; // struct { first: []const u8, second: []const u8 }

/// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html)
pub const QUrlQuery = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QUrlQuery,

    pub const _is_QUrlQuery = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QUrlQuery object in C++ memory
    ///
    pub fn new() QUrlQuery {
        return .{ .ptr = qtc.QUrlQuery_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QUrlQuery object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn new2(url: anytype) QUrlQuery {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.QUrlQuery_new2(@ptrCast(url.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QUrlQuery object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` queryString: []const u8 `
    ///
    pub fn new3(queryString: []const u8) QUrlQuery {
        const queryString_str = qtc.libqt_string{
            .len = queryString.len,
            .data = queryString.ptr,
        };
        return .{ .ptr = qtc.QUrlQuery_new3(queryString_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QUrlQuery object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QUrlQuery `
    ///
    pub fn new4(other: anytype) QUrlQuery {
        comptime _ = @TypeOf(other)._is_QUrlQuery;
        return .{ .ptr = qtc.QUrlQuery_new4(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    /// ` other: QUrlQuery `
    ///
    pub fn operatorAssign(self: QUrlQuery, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QUrlQuery;
        qtc.QUrlQuery_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    /// ` other: QUrlQuery `
    ///
    pub fn swap(self: QUrlQuery, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QUrlQuery;
        qtc.QUrlQuery_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    pub fn isEmpty(self: QUrlQuery) bool {
        return qtc.QUrlQuery_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDetached` instead
    ///
    pub const IsDetached = isDetached;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#isDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    pub fn isDetached(self: QUrlQuery) bool {
        return qtc.QUrlQuery_IsDetached(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    pub fn clear(self: QUrlQuery) void {
        qtc.QUrlQuery_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `query` instead
    ///
    pub const Query = query;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#query)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn query(self: QUrlQuery, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUrlQuery_Query(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUrlQuery.query: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setQuery` instead
    ///
    pub const SetQuery = setQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#setQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    /// ` queryString: []const u8 `
    ///
    pub fn setQuery(self: QUrlQuery, queryString: []const u8) void {
        const queryString_str = qtc.libqt_string{
            .len = queryString.len,
            .data = queryString.ptr,
        };
        qtc.QUrlQuery_SetQuery(@ptrCast(self.ptr), queryString_str);
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: QUrlQuery, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUrlQuery_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUrlQuery.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setQueryDelimiters` instead
    ///
    pub const SetQueryDelimiters = setQueryDelimiters;

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
    pub fn setQueryDelimiters(self: QUrlQuery, valueDelimiter: anytype, pairDelimiter: anytype) void {
        comptime _ = @TypeOf(valueDelimiter)._is_QChar;
        comptime _ = @TypeOf(pairDelimiter)._is_QChar;
        qtc.QUrlQuery_SetQueryDelimiters(@ptrCast(self.ptr), @ptrCast(valueDelimiter.ptr), @ptrCast(pairDelimiter.ptr));
    }

    /// ### DEPRECATED: Use `queryValueDelimiter` instead
    ///
    pub const QueryValueDelimiter = queryValueDelimiter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#queryValueDelimiter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    pub fn queryValueDelimiter(self: QUrlQuery) QChar {
        return .{ .ptr = qtc.QUrlQuery_QueryValueDelimiter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `queryPairDelimiter` instead
    ///
    pub const QueryPairDelimiter = queryPairDelimiter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#queryPairDelimiter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    pub fn queryPairDelimiter(self: QUrlQuery) QChar {
        return .{ .ptr = qtc.QUrlQuery_QueryPairDelimiter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `queryItems` instead
    ///
    pub const QueryItems = queryItems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#queryItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn queryItems(self: QUrlQuery, allocator: std.mem.Allocator) []Struct_constu8_constu8 {
        const _arr: qtc.libqt_list = qtc.QUrlQuery_QueryItems(@ptrCast(self.ptr));
        const _data_val: [*]qtc.libqt_pair = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(@alignCast(_data_val[i].first)));
                qtc.libqt_string_free(@ptrCast(@alignCast(_data_val[i].second)));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(Struct_constu8_constu8, _arr.len) catch @panic("QUrlQuery.queryItems: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _first_str: *qtc.libqt_string = @ptrCast(@alignCast(_data_val[i].first));
            const _first_slice = allocator.alloc(u8, _first_str.len) catch @panic("QUrlQuery.queryItems: Memory allocation failed");
            @memcpy(_first_slice, _first_str.data[0.._first_str.len]);
            const _second_str: *qtc.libqt_string = @ptrCast(@alignCast(_data_val[i].second));
            const _second_slice = allocator.alloc(u8, _second_str.len) catch @panic("QUrlQuery.queryItems: Memory allocation failed");
            @memcpy(_second_slice, _second_str.data[0.._second_str.len]);
            _ret[i] = Struct_constu8_constu8{
                .first = _first_slice,
                .second = _second_slice,
            };
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `hasQueryItem` instead
    ///
    pub const HasQueryItem = hasQueryItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#hasQueryItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    /// ` key: []const u8 `
    ///
    pub fn hasQueryItem(self: QUrlQuery, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QUrlQuery_HasQueryItem(@ptrCast(self.ptr), key_str);
    }

    /// ### DEPRECATED: Use `addQueryItem` instead
    ///
    pub const AddQueryItem = addQueryItem;

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
    pub fn addQueryItem(self: QUrlQuery, key: []const u8, value: []const u8) void {
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

    /// ### DEPRECATED: Use `removeQueryItem` instead
    ///
    pub const RemoveQueryItem = removeQueryItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#removeQueryItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    /// ` key: []const u8 `
    ///
    pub fn removeQueryItem(self: QUrlQuery, key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QUrlQuery_RemoveQueryItem(@ptrCast(self.ptr), key_str);
    }

    /// ### DEPRECATED: Use `queryItemValue` instead
    ///
    pub const QueryItemValue = queryItemValue;

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
    pub fn queryItemValue(self: QUrlQuery, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.QUrlQuery_QueryItemValue(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUrlQuery.queryItemValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `allQueryItemValues` instead
    ///
    pub const AllQueryItemValues = allQueryItemValues;

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
    pub fn allQueryItemValues(self: QUrlQuery, allocator: std.mem.Allocator, key: []const u8) []const []const u8 {
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QUrlQuery.allQueryItemValues: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QUrlQuery.allQueryItemValues: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `removeAllQueryItems` instead
    ///
    pub const RemoveAllQueryItems = removeAllQueryItems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#removeAllQueryItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrlQuery `
    ///
    /// ` key: []const u8 `
    ///
    pub fn removeAllQueryItems(self: QUrlQuery, key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QUrlQuery_RemoveAllQueryItems(@ptrCast(self.ptr), key_str);
    }

    /// ### DEPRECATED: Use `query1` instead
    ///
    pub const Query1 = query1;

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
    pub fn query1(self: QUrlQuery, allocator: std.mem.Allocator, encoding: u32) []const u8 {
        var _str = qtc.QUrlQuery_Query1(@ptrCast(self.ptr), @bitCast(encoding));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUrlQuery.query1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toString1` instead
    ///
    pub const ToString1 = toString1;

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
    pub fn toString1(self: QUrlQuery, allocator: std.mem.Allocator, encoding: u32) []const u8 {
        var _str = qtc.QUrlQuery_ToString1(@ptrCast(self.ptr), @bitCast(encoding));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUrlQuery.toString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `queryItems1` instead
    ///
    pub const QueryItems1 = queryItems1;

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
    pub fn queryItems1(self: QUrlQuery, allocator: std.mem.Allocator, encoding: u32) []Struct_constu8_constu8 {
        const _arr: qtc.libqt_list = qtc.QUrlQuery_QueryItems1(@ptrCast(self.ptr), @bitCast(encoding));
        const _data_val: [*]qtc.libqt_pair = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(@alignCast(_data_val[i].first)));
                qtc.libqt_string_free(@ptrCast(@alignCast(_data_val[i].second)));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(Struct_constu8_constu8, _arr.len) catch @panic("QUrlQuery.queryItems1: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _first_str: *qtc.libqt_string = @ptrCast(@alignCast(_data_val[i].first));
            const _first_slice = allocator.alloc(u8, _first_str.len) catch @panic("QUrlQuery.queryItems1: Memory allocation failed");
            @memcpy(_first_slice, _first_str.data[0.._first_str.len]);
            const _second_str: *qtc.libqt_string = @ptrCast(@alignCast(_data_val[i].second));
            const _second_slice = allocator.alloc(u8, _second_str.len) catch @panic("QUrlQuery.queryItems1: Memory allocation failed");
            @memcpy(_second_slice, _second_str.data[0.._second_str.len]);
            _ret[i] = Struct_constu8_constu8{
                .first = _first_slice,
                .second = _second_slice,
            };
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `queryItemValue2` instead
    ///
    pub const QueryItemValue2 = queryItemValue2;

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
    pub fn queryItemValue2(self: QUrlQuery, allocator: std.mem.Allocator, key: []const u8, encoding: u32) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.QUrlQuery_QueryItemValue2(@ptrCast(self.ptr), key_str, @bitCast(encoding));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUrlQuery.queryItemValue2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `allQueryItemValues2` instead
    ///
    pub const AllQueryItemValues2 = allQueryItemValues2;

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
    pub fn allQueryItemValues2(self: QUrlQuery, allocator: std.mem.Allocator, key: []const u8, encoding: u32) []const []const u8 {
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QUrlQuery.allQueryItemValues2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QUrlQuery.allQueryItemValues2: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#dtor.QUrlQuery)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QUrlQuery `
    ///
    pub fn delete(self: QUrlQuery) void {
        qtc.QUrlQuery_Delete(@ptrCast(self.ptr));
    }
};
