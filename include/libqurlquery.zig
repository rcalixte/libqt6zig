const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
pub const struct_constu8_constu8 = struct { first: []const u8, second: []const u8 };

/// https://doc.qt.io/qt-6/qurlquery.html
pub const qurlquery = struct {
    /// New constructs a new QUrlQuery object.
    ///
    ///
    pub fn New() QtC.QUrlQuery {
        return qtc.QUrlQuery_new();
    }

    /// New2 constructs a new QUrlQuery object.
    ///
    /// ``` url: QtC.QUrl ```
    pub fn New2(url: ?*anyopaque) QtC.QUrlQuery {
        return qtc.QUrlQuery_new2(@ptrCast(url));
    }

    /// New3 constructs a new QUrlQuery object.
    ///
    /// ``` queryString: []const u8 ```
    pub fn New3(queryString: []const u8) QtC.QUrlQuery {
        const queryString_str = qtc.libqt_string{
            .len = queryString.len,
            .data = queryString.ptr,
        };

        return qtc.QUrlQuery_new3(queryString_str);
    }

    /// New4 constructs a new QUrlQuery object.
    ///
    /// ``` other: QtC.QUrlQuery ```
    pub fn New4(other: ?*anyopaque) QtC.QUrlQuery {
        return qtc.QUrlQuery_new4(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#operator-eq)
    ///
    /// ``` self: QtC.QUrlQuery, other: QtC.QUrlQuery ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QUrlQuery_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#swap)
    ///
    /// ``` self: QtC.QUrlQuery, other: QtC.QUrlQuery ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QUrlQuery_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#isEmpty)
    ///
    /// ``` self: QtC.QUrlQuery ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QUrlQuery_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#isDetached)
    ///
    /// ``` self: QtC.QUrlQuery ```
    pub fn IsDetached(self: ?*anyopaque) bool {
        return qtc.QUrlQuery_IsDetached(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#clear)
    ///
    /// ``` self: QtC.QUrlQuery ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QUrlQuery_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#query)
    ///
    /// ``` self: QtC.QUrlQuery, allocator: std.mem.Allocator ```
    pub fn Query(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUrlQuery_Query(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurlquery.Query: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#setQuery)
    ///
    /// ``` self: QtC.QUrlQuery, queryString: []const u8 ```
    pub fn SetQuery(self: ?*anyopaque, queryString: []const u8) void {
        const queryString_str = qtc.libqt_string{
            .len = queryString.len,
            .data = queryString.ptr,
        };
        qtc.QUrlQuery_SetQuery(@ptrCast(self), queryString_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#toString)
    ///
    /// ``` self: QtC.QUrlQuery, allocator: std.mem.Allocator ```
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUrlQuery_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurlquery.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#setQueryDelimiters)
    ///
    /// ``` self: QtC.QUrlQuery, valueDelimiter: QtC.QChar, pairDelimiter: QtC.QChar ```
    pub fn SetQueryDelimiters(self: ?*anyopaque, valueDelimiter: QtC.QChar, pairDelimiter: QtC.QChar) void {
        qtc.QUrlQuery_SetQueryDelimiters(@ptrCast(self), @ptrCast(valueDelimiter), @ptrCast(pairDelimiter));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#queryValueDelimiter)
    ///
    /// ``` self: QtC.QUrlQuery ```
    pub fn QueryValueDelimiter(self: ?*anyopaque) QtC.QChar {
        return qtc.QUrlQuery_QueryValueDelimiter(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#queryPairDelimiter)
    ///
    /// ``` self: QtC.QUrlQuery ```
    pub fn QueryPairDelimiter(self: ?*anyopaque) QtC.QChar {
        return qtc.QUrlQuery_QueryPairDelimiter(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#setQueryItems)
    ///
    /// ``` self: QtC.QUrlQuery, query: []struct_constu8_constu8 ```
    pub fn SetQueryItems(self: ?*anyopaque, query: []struct_constu8_constu8) void {
        const query_list = qtc.libqt_list{
            .len = query.len,
            .data = query.ptr,
        };
        qtc.QUrlQuery_SetQueryItems(@ptrCast(self), query_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#queryItems)
    ///
    /// ``` self: QtC.QUrlQuery, allocator: std.mem.Allocator ```
    pub fn QueryItems(self: ?*anyopaque, allocator: std.mem.Allocator) []struct_constu8_constu8 {
        const _arr: qtc.libqt_list = qtc.QUrlQuery_QueryItems(@ptrCast(self));
        defer {
            const _pair: [*]qtc.libqt_pair = @ptrCast(@alignCast(_arr.data));
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_pair[i].first));
                qtc.libqt_free(_pair[i].first);

                qtc.libqt_string_free(@ptrCast(&_pair[i].second));
                qtc.libqt_free(_pair[i].second);
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(struct_constu8_constu8, _arr.len) catch @panic("qurlquery.QueryItems: Memory allocation failed");
        const _data: [*]struct_constu8_constu8 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#hasQueryItem)
    ///
    /// ``` self: QtC.QUrlQuery, key: []const u8 ```
    pub fn HasQueryItem(self: ?*anyopaque, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QUrlQuery_HasQueryItem(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#addQueryItem)
    ///
    /// ``` self: QtC.QUrlQuery, key: []const u8, value: []const u8 ```
    pub fn AddQueryItem(self: ?*anyopaque, key: []const u8, value: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QUrlQuery_AddQueryItem(@ptrCast(self), key_str, value_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#removeQueryItem)
    ///
    /// ``` self: QtC.QUrlQuery, key: []const u8 ```
    pub fn RemoveQueryItem(self: ?*anyopaque, key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QUrlQuery_RemoveQueryItem(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#queryItemValue)
    ///
    /// ``` self: QtC.QUrlQuery, key: []const u8, allocator: std.mem.Allocator ```
    pub fn QueryItemValue(self: ?*anyopaque, key: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const _str = qtc.QUrlQuery_QueryItemValue(@ptrCast(self), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurlquery.QueryItemValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#allQueryItemValues)
    ///
    /// ``` self: QtC.QUrlQuery, key: []const u8, allocator: std.mem.Allocator ```
    pub fn AllQueryItemValues(self: ?*anyopaque, key: []const u8, allocator: std.mem.Allocator) [][]const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QUrlQuery_AllQueryItemValues(@ptrCast(self), key_str);
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#removeAllQueryItems)
    ///
    /// ``` self: QtC.QUrlQuery, key: []const u8 ```
    pub fn RemoveAllQueryItems(self: ?*anyopaque, key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QUrlQuery_RemoveAllQueryItems(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#query)
    ///
    /// ``` self: QtC.QUrlQuery, encoding: flag of qurl_enums.ComponentFormattingOption, allocator: std.mem.Allocator ```
    pub fn Query1(self: ?*anyopaque, encoding: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUrlQuery_Query1(@ptrCast(self), @intCast(encoding));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurlquery.Query1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#toString)
    ///
    /// ``` self: QtC.QUrlQuery, encoding: flag of qurl_enums.ComponentFormattingOption, allocator: std.mem.Allocator ```
    pub fn ToString1(self: ?*anyopaque, encoding: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUrlQuery_ToString1(@ptrCast(self), @intCast(encoding));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurlquery.ToString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#queryItems)
    ///
    /// ``` self: QtC.QUrlQuery, encoding: flag of qurl_enums.ComponentFormattingOption, allocator: std.mem.Allocator ```
    pub fn QueryItems1(self: ?*anyopaque, encoding: i64, allocator: std.mem.Allocator) []struct_constu8_constu8 {
        const _arr: qtc.libqt_list = qtc.QUrlQuery_QueryItems1(@ptrCast(self), @intCast(encoding));
        defer {
            const _pair: [*]qtc.libqt_pair = @ptrCast(@alignCast(_arr.data));
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_pair[i].first));
                qtc.libqt_free(_pair[i].first);

                qtc.libqt_string_free(@ptrCast(&_pair[i].second));
                qtc.libqt_free(_pair[i].second);
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(struct_constu8_constu8, _arr.len) catch @panic("qurlquery.QueryItems1: Memory allocation failed");
        const _data: [*]struct_constu8_constu8 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#queryItemValue)
    ///
    /// ``` self: QtC.QUrlQuery, key: []const u8, encoding: flag of qurl_enums.ComponentFormattingOption, allocator: std.mem.Allocator ```
    pub fn QueryItemValue2(self: ?*anyopaque, key: []const u8, encoding: i64, allocator: std.mem.Allocator) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const _str = qtc.QUrlQuery_QueryItemValue2(@ptrCast(self), key_str, @intCast(encoding));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurlquery.QueryItemValue2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#allQueryItemValues)
    ///
    /// ``` self: QtC.QUrlQuery, key: []const u8, encoding: flag of qurl_enums.ComponentFormattingOption, allocator: std.mem.Allocator ```
    pub fn AllQueryItemValues2(self: ?*anyopaque, key: []const u8, encoding: i64, allocator: std.mem.Allocator) [][]const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QUrlQuery_AllQueryItemValues2(@ptrCast(self), key_str, @intCast(encoding));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#dtor.QUrlQuery)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QUrlQuery ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QUrlQuery_Delete(@ptrCast(self));
    }
};
