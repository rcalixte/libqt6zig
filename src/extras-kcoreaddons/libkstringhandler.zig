const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api-staging.kde.org/kstringhandler.html
pub const kstringhandler = struct {
    /// [Qt documentation](https://api-staging.kde.org/kstringhandler.html#capwords)
    ///
    /// ``` param1: []const u8, allocator: std.mem.Allocator ```
    pub fn Capwords(param1: []const u8, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const _str = qtc.KStringHandler_Capwords(param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstringhandler.Capwords: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstringhandler.html#capwords)
    ///
    /// ``` param1: [][]const u8, allocator: std.mem.Allocator ```
    pub fn Capwords2(param1: [][]const u8, allocator: std.mem.Allocator) [][]const u8 {
        var param1_arr = allocator.alloc(qtc.libqt_string, param1.len) catch @panic("kstringhandler.Capwords2: Memory allocation failed");
        defer allocator.free(param1_arr);
        for (param1, 0..param1.len) |item, i| {
            param1_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const param1_list = qtc.libqt_list{
            .len = param1.len,
            .data = param1_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KStringHandler_Capwords2(param1_list);
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kstringhandler.Capwords2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kstringhandler.Capwords2: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstringhandler.html#lsqueeze)
    ///
    /// ``` param1: []const u8, param2: i32, allocator: std.mem.Allocator ```
    pub fn Lsqueeze(param1: []const u8, param2: i32, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const _str = qtc.KStringHandler_Lsqueeze(param1_str, @intCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstringhandler.Lsqueeze: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstringhandler.html#csqueeze)
    ///
    /// ``` param1: []const u8, param2: i32, allocator: std.mem.Allocator ```
    pub fn Csqueeze(param1: []const u8, param2: i32, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const _str = qtc.KStringHandler_Csqueeze(param1_str, @intCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstringhandler.Csqueeze: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstringhandler.html#rsqueeze)
    ///
    /// ``` param1: []const u8, param2: i32, allocator: std.mem.Allocator ```
    pub fn Rsqueeze(param1: []const u8, param2: i32, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const _str = qtc.KStringHandler_Rsqueeze(param1_str, @intCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstringhandler.Rsqueeze: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstringhandler.html#perlSplit)
    ///
    /// ``` param1: []const u8, param2: []const u8, param3: i32, allocator: std.mem.Allocator ```
    pub fn PerlSplit2(param1: []const u8, param2: []const u8, param3: i32, allocator: std.mem.Allocator) [][]const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KStringHandler_PerlSplit2(param1_str, param2_str, @intCast(param3));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kstringhandler.PerlSplit2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kstringhandler.PerlSplit2: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstringhandler.html#perlSplit)
    ///
    /// ``` param1: QtC.QChar, param2: []const u8, param3: i32, allocator: std.mem.Allocator ```
    pub fn PerlSplit3(param1: ?*anyopaque, param2: []const u8, param3: i32, allocator: std.mem.Allocator) [][]const u8 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KStringHandler_PerlSplit3(@ptrCast(param1), param2_str, @intCast(param3));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kstringhandler.PerlSplit3: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kstringhandler.PerlSplit3: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstringhandler.html#perlSplit)
    ///
    /// ``` param1: QtC.QRegularExpression, param2: []const u8, param3: i32, allocator: std.mem.Allocator ```
    pub fn PerlSplit4(param1: ?*anyopaque, param2: []const u8, param3: i32, allocator: std.mem.Allocator) [][]const u8 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KStringHandler_PerlSplit4(@ptrCast(param1), param2_str, @intCast(param3));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kstringhandler.PerlSplit4: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kstringhandler.PerlSplit4: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstringhandler.html#tagUrls)
    ///
    /// ``` param1: []const u8, allocator: std.mem.Allocator ```
    pub fn TagUrls(param1: []const u8, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const _str = qtc.KStringHandler_TagUrls(param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstringhandler.TagUrls: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstringhandler.html#obscure)
    ///
    /// ``` param1: []const u8, allocator: std.mem.Allocator ```
    pub fn Obscure(param1: []const u8, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const _str = qtc.KStringHandler_Obscure(param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstringhandler.Obscure: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstringhandler.html#preProcessWrap)
    ///
    /// ``` param1: []const u8, allocator: std.mem.Allocator ```
    pub fn PreProcessWrap(param1: []const u8, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const _str = qtc.KStringHandler_PreProcessWrap(param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstringhandler.PreProcessWrap: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstringhandler.html#logicalLength)
    ///
    /// ``` param1: []const u8 ```
    pub fn LogicalLength(param1: []const u8) i32 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.KStringHandler_LogicalLength(param1_str);
    }
};
