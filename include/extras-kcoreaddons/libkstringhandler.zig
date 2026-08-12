const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QChar = @import("libqt6").QChar;
const QRegularExpression = @import("libqt6").QRegularExpression;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kstringhandler.html)
pub const KStringHandler = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kstringhandler.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KStringHandler,

    pub const _is_KStringHandler = {};

    /// ### DEPRECATED: Use `capwords` instead
    ///
    pub const Capwords = capwords;

    /// ### [Upstream resources](https://api.kde.org/kstringhandler.html#capwords)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    pub fn capwords(allocator: std.mem.Allocator, text: []const u8) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _str = qtc.KStringHandler_Capwords(text_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStringHandler.capwords: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `capwords2` instead
    ///
    pub const Capwords2 = capwords2;

    /// ### [Upstream resources](https://api.kde.org/kstringhandler.html#capwords)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` list: []const []const u8 `
    ///
    pub fn capwords2(allocator: std.mem.Allocator, list: []const []const u8) []const []const u8 {
        const list_arr = allocator.alloc(qtc.libqt_string, list.len) catch @panic("KStringHandler.capwords2: Memory allocation failed");
        defer allocator.free(list_arr);
        for (list, 0..list.len) |str_item, i|
            list_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const list_list = qtc.libqt_list{
            .len = list.len,
            .data = list_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KStringHandler_Capwords2(list_list);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KStringHandler.capwords2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KStringHandler.capwords2: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `lsqueeze` instead
    ///
    pub const Lsqueeze = lsqueeze;

    /// ### [Upstream resources](https://api.kde.org/kstringhandler.html#lsqueeze)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    /// ` maxlen: i32 `
    ///
    pub fn lsqueeze(allocator: std.mem.Allocator, str: []const u8, maxlen: i32) []const u8 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        var _str = qtc.KStringHandler_Lsqueeze(str_str, @bitCast(maxlen));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStringHandler.lsqueeze: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `csqueeze` instead
    ///
    pub const Csqueeze = csqueeze;

    /// ### [Upstream resources](https://api.kde.org/kstringhandler.html#csqueeze)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    /// ` maxlen: i32 `
    ///
    pub fn csqueeze(allocator: std.mem.Allocator, str: []const u8, maxlen: i32) []const u8 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        var _str = qtc.KStringHandler_Csqueeze(str_str, @bitCast(maxlen));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStringHandler.csqueeze: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `rsqueeze` instead
    ///
    pub const Rsqueeze = rsqueeze;

    /// ### [Upstream resources](https://api.kde.org/kstringhandler.html#rsqueeze)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    /// ` maxlen: i32 `
    ///
    pub fn rsqueeze(allocator: std.mem.Allocator, str: []const u8, maxlen: i32) []const u8 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        var _str = qtc.KStringHandler_Rsqueeze(str_str, @bitCast(maxlen));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStringHandler.rsqueeze: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `perlSplit` instead
    ///
    pub const PerlSplit = perlSplit;

    /// ### [Upstream resources](https://api.kde.org/kstringhandler.html#perlSplit)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sep: []const u8 `
    ///
    /// ` str: []const u8 `
    ///
    /// ` max: i32 `
    ///
    pub fn perlSplit(allocator: std.mem.Allocator, sep: []const u8, str: []const u8, max: i32) []const []const u8 {
        const sep_str = qtc.libqt_string{
            .len = sep.len,
            .data = sep.ptr,
        };
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KStringHandler_PerlSplit(sep_str, str_str, @bitCast(max));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KStringHandler.perlSplit: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KStringHandler.perlSplit: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `perlSplit2` instead
    ///
    pub const PerlSplit2 = perlSplit2;

    /// ### [Upstream resources](https://api.kde.org/kstringhandler.html#perlSplit)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sep: []const u8 `
    ///
    /// ` s: []const u8 `
    ///
    /// ` max: i32 `
    ///
    pub fn perlSplit2(allocator: std.mem.Allocator, sep: []const u8, s: []const u8, max: i32) []const []const u8 {
        const sep_str = qtc.libqt_string{
            .len = sep.len,
            .data = sep.ptr,
        };
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KStringHandler_PerlSplit2(sep_str, s_str, @bitCast(max));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KStringHandler.perlSplit2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KStringHandler.perlSplit2: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `perlSplit3` instead
    ///
    pub const PerlSplit3 = perlSplit3;

    /// ### [Upstream resources](https://api.kde.org/kstringhandler.html#perlSplit)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sep: QChar `
    ///
    /// ` s: []const u8 `
    ///
    /// ` max: i32 `
    ///
    pub fn perlSplit3(allocator: std.mem.Allocator, sep: anytype, s: []const u8, max: i32) []const []const u8 {
        comptime _ = @TypeOf(sep)._is_QChar;
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KStringHandler_PerlSplit3(@ptrCast(sep.ptr), s_str, @bitCast(max));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KStringHandler.perlSplit3: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KStringHandler.perlSplit3: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `perlSplit4` instead
    ///
    pub const PerlSplit4 = perlSplit4;

    /// ### [Upstream resources](https://api.kde.org/kstringhandler.html#perlSplit)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sep: QRegularExpression `
    ///
    /// ` s: []const u8 `
    ///
    /// ` max: i32 `
    ///
    pub fn perlSplit4(allocator: std.mem.Allocator, sep: anytype, s: []const u8, max: i32) []const []const u8 {
        comptime _ = @TypeOf(sep)._is_QRegularExpression;
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KStringHandler_PerlSplit4(@ptrCast(sep.ptr), s_str, @bitCast(max));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KStringHandler.perlSplit4: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KStringHandler.perlSplit4: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `tagUrls` instead
    ///
    pub const TagUrls = tagUrls;

    /// ### [Upstream resources](https://api.kde.org/kstringhandler.html#tagUrls)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    pub fn tagUrls(allocator: std.mem.Allocator, text: []const u8) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _str = qtc.KStringHandler_TagUrls(text_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStringHandler.tagUrls: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `obscure` instead
    ///
    pub const Obscure = obscure;

    /// ### [Upstream resources](https://api.kde.org/kstringhandler.html#obscure)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    pub fn obscure(allocator: std.mem.Allocator, str: []const u8) []const u8 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        var _str = qtc.KStringHandler_Obscure(str_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStringHandler.obscure: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `preProcessWrap` instead
    ///
    pub const PreProcessWrap = preProcessWrap;

    /// ### [Upstream resources](https://api.kde.org/kstringhandler.html#preProcessWrap)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    pub fn preProcessWrap(allocator: std.mem.Allocator, text: []const u8) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _str = qtc.KStringHandler_PreProcessWrap(text_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStringHandler.preProcessWrap: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `logicalLength` instead
    ///
    pub const LogicalLength = logicalLength;

    /// ### [Upstream resources](https://api.kde.org/kstringhandler.html#logicalLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    pub fn logicalLength(text: []const u8) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KStringHandler_LogicalLength(text_str);
    }
};
