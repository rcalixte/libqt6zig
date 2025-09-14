const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kcompletion_enums = @import("../extras-kcompletion/libkcompletion.zig").enums;
const kurlcompletion_enums = @import("libkurlcompletion.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://api.kde.org/kshellcompletion.html
pub const kshellcompletion = struct {
    /// New constructs a new KShellCompletion object.
    ///
    ///
    pub fn New() QtC.KShellCompletion {
        return qtc.KShellCompletion_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KShellCompletion_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KShellCompletion, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KShellCompletion_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KShellCompletion, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KShellCompletion_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn (self: QtC.KShellCompletion, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KShellCompletion_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KShellCompletion, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KShellCompletion_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KShellCompletion_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kshellcompletion.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kshellcompletion.html#makeCompletion)
    ///
    /// ``` self: QtC.KShellCompletion, text: []const u8, allocator: std.mem.Allocator ```
    pub fn MakeCompletion(self: ?*anyopaque, text: []const u8, allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const _str = qtc.KShellCompletion_MakeCompletion(@ptrCast(self), text_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kshellcompletion.MakeCompletion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kshellcompletion.html#makeCompletion)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn (self: QtC.KShellCompletion, text: [*:0]const u8) callconv(.c) [*:0]const u8 ```
    pub fn OnMakeCompletion(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) [*:0]const u8) void {
        qtc.KShellCompletion_OnMakeCompletion(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kshellcompletion.html#makeCompletion)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KShellCompletion, text: []const u8, allocator: std.mem.Allocator ```
    pub fn QBaseMakeCompletion(self: ?*anyopaque, text: []const u8, allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const _str = qtc.KShellCompletion_QBaseMakeCompletion(@ptrCast(self), text_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kshellcompletion.MakeCompletion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kshellcompletion.html#postProcessMatches)
    ///
    /// ``` self: QtC.KShellCompletion, matches: [][]const u8, allocator: std.mem.Allocator ```
    pub fn PostProcessMatches(self: ?*anyopaque, matches: [][]const u8, allocator: std.mem.Allocator) void {
        var matches_arr = allocator.alloc(qtc.libqt_string, matches.len) catch @panic("kshellcompletion.PostProcessMatches: Memory allocation failed");
        defer allocator.free(matches_arr);
        for (matches, 0..matches.len) |item, i| {
            matches_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const matches_list = qtc.libqt_list{
            .len = matches.len,
            .data = matches_arr.ptr,
        };
        qtc.KShellCompletion_PostProcessMatches(@ptrCast(self), matches_list);
    }

    /// [Qt documentation](https://api.kde.org/kshellcompletion.html#postProcessMatches)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn (self: QtC.KShellCompletion, matches: [*][*:0]const u8) callconv(.c) void ```
    pub fn OnPostProcessMatches(self: ?*anyopaque, slot: fn (?*anyopaque, [*][*:0]const u8) callconv(.c) void) void {
        qtc.KShellCompletion_OnPostProcessMatches(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kshellcompletion.html#postProcessMatches)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KShellCompletion, matches: [][]const u8, allocator: std.mem.Allocator ```
    pub fn QBasePostProcessMatches(self: ?*anyopaque, matches: [][]const u8, allocator: std.mem.Allocator) void {
        var matches_arr = allocator.alloc(qtc.libqt_string, matches.len) catch @panic("kshellcompletion.PostProcessMatches: Memory allocation failed");
        defer allocator.free(matches_arr);
        for (matches, 0..matches.len) |item, i| {
            matches_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const matches_list = qtc.libqt_list{
            .len = matches.len,
            .data = matches_arr.ptr,
        };
        qtc.KShellCompletion_QBasePostProcessMatches(@ptrCast(self), matches_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KShellCompletion_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kshellcompletion.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KShellCompletion_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kshellcompletion.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#replacedPath)
    ///
    /// ``` self: QtC.KShellCompletion, text: []const u8, allocator: std.mem.Allocator ```
    pub fn ReplacedPath(self: ?*anyopaque, text: []const u8, allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const _str = qtc.KUrlCompletion_ReplacedPath(@ptrCast(self), text_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kshellcompletion.ReplacedPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#replacedPath)
    ///
    /// ``` text: []const u8, replaceHome: bool, allocator: std.mem.Allocator ```
    pub fn ReplacedPath2(text: []const u8, replaceHome: bool, allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const _str = qtc.KUrlCompletion_ReplacedPath2(text_str, replaceHome);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kshellcompletion.ReplacedPath2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#setMimeTypeFilters)
    ///
    /// ``` self: QtC.KShellCompletion, mimeTypes: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetMimeTypeFilters(self: ?*anyopaque, mimeTypes: [][]const u8, allocator: std.mem.Allocator) void {
        var mimeTypes_arr = allocator.alloc(qtc.libqt_string, mimeTypes.len) catch @panic("kshellcompletion.SetMimeTypeFilters: Memory allocation failed");
        defer allocator.free(mimeTypes_arr);
        for (mimeTypes, 0..mimeTypes.len) |item, i| {
            mimeTypes_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const mimeTypes_list = qtc.libqt_list{
            .len = mimeTypes.len,
            .data = mimeTypes_arr.ptr,
        };
        qtc.KUrlCompletion_SetMimeTypeFilters(@ptrCast(self), mimeTypes_list);
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#mimeTypeFilters)
    ///
    /// ``` self: QtC.KShellCompletion, allocator: std.mem.Allocator ```
    pub fn MimeTypeFilters(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KUrlCompletion_MimeTypeFilters(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kshellcompletion.MimeTypeFilters: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kshellcompletion.MimeTypeFilters: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#replacedPath)
    ///
    /// ``` text: []const u8, replaceHome: bool, replaceEnv: bool, allocator: std.mem.Allocator ```
    pub fn ReplacedPath3(text: []const u8, replaceHome: bool, replaceEnv: bool, allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const _str = qtc.KUrlCompletion_ReplacedPath3(text_str, replaceHome, replaceEnv);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kshellcompletion.ReplacedPath3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#substringCompletion)
    ///
    /// ``` self: QtC.KShellCompletion, stringVal: []const u8, allocator: std.mem.Allocator ```
    pub fn SubstringCompletion(self: ?*anyopaque, stringVal: []const u8, allocator: std.mem.Allocator) [][]const u8 {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KCompletion_SubstringCompletion(@ptrCast(self), stringVal_str);
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kshellcompletion.SubstringCompletion: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kshellcompletion.SubstringCompletion: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#items)
    ///
    /// ``` self: QtC.KShellCompletion, allocator: std.mem.Allocator ```
    pub fn Items(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KCompletion_Items(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kshellcompletion.Items: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kshellcompletion.Items: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#isEmpty)
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.KCompletion_IsEmpty(@ptrCast(self));
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#completionMode)
    ///
    /// ``` self: QtC.KShellCompletion ```
    ///
    /// Returns: ``` kcompletion_enums.CompletionMode ```
    pub fn CompletionMode(self: ?*anyopaque) i32 {
        return qtc.KCompletion_CompletionMode(@ptrCast(self));
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#order)
    ///
    /// ``` self: QtC.KShellCompletion ```
    ///
    /// Returns: ``` kcompletion_enums.CompOrder ```
    pub fn Order(self: ?*anyopaque) i32 {
        return qtc.KCompletion_Order(@ptrCast(self));
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#ignoreCase)
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn IgnoreCase(self: ?*anyopaque) bool {
        return qtc.KCompletion_IgnoreCase(@ptrCast(self));
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#shouldAutoSuggest)
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn ShouldAutoSuggest(self: ?*anyopaque) bool {
        return qtc.KCompletion_ShouldAutoSuggest(@ptrCast(self));
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#allMatches)
    ///
    /// ``` self: QtC.KShellCompletion, allocator: std.mem.Allocator ```
    pub fn AllMatches(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KCompletion_AllMatches(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kshellcompletion.AllMatches: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kshellcompletion.AllMatches: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#allMatches)
    ///
    /// ``` self: QtC.KShellCompletion, stringVal: []const u8, allocator: std.mem.Allocator ```
    pub fn AllMatches2(self: ?*anyopaque, stringVal: []const u8, allocator: std.mem.Allocator) [][]const u8 {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KCompletion_AllMatches2(@ptrCast(self), stringVal_str);
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kshellcompletion.AllMatches2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kshellcompletion.AllMatches2: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#soundsEnabled)
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn SoundsEnabled(self: ?*anyopaque) bool {
        return qtc.KCompletion_SoundsEnabled(@ptrCast(self));
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#hasMultipleMatches)
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn HasMultipleMatches(self: ?*anyopaque) bool {
        return qtc.KCompletion_HasMultipleMatches(@ptrCast(self));
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#previousMatch)
    ///
    /// ``` self: QtC.KShellCompletion, allocator: std.mem.Allocator ```
    pub fn PreviousMatch(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KCompletion_PreviousMatch(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kshellcompletion.PreviousMatch: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#nextMatch)
    ///
    /// ``` self: QtC.KShellCompletion, allocator: std.mem.Allocator ```
    pub fn NextMatch(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KCompletion_NextMatch(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kshellcompletion.NextMatch: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#insertItems)
    ///
    /// ``` self: QtC.KShellCompletion, items: [][]const u8, allocator: std.mem.Allocator ```
    pub fn InsertItems(self: ?*anyopaque, items: [][]const u8, allocator: std.mem.Allocator) void {
        var items_arr = allocator.alloc(qtc.libqt_string, items.len) catch @panic("kshellcompletion.InsertItems: Memory allocation failed");
        defer allocator.free(items_arr);
        for (items, 0..items.len) |item, i| {
            items_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = items_arr.ptr,
        };
        qtc.KCompletion_InsertItems(@ptrCast(self), items_list);
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#addItem)
    ///
    /// ``` self: QtC.KShellCompletion, item: []const u8 ```
    pub fn AddItem(self: ?*anyopaque, item: []const u8) void {
        const item_str = qtc.libqt_string{
            .len = item.len,
            .data = item.ptr,
        };
        qtc.KCompletion_AddItem(@ptrCast(self), item_str);
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#addItem)
    ///
    /// ``` self: QtC.KShellCompletion, item: []const u8, weight: u32 ```
    pub fn AddItem2(self: ?*anyopaque, item: []const u8, weight: u32) void {
        const item_str = qtc.libqt_string{
            .len = item.len,
            .data = item.ptr,
        };
        qtc.KCompletion_AddItem2(@ptrCast(self), item_str, @intCast(weight));
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#removeItem)
    ///
    /// ``` self: QtC.KShellCompletion, item: []const u8 ```
    pub fn RemoveItem(self: ?*anyopaque, item: []const u8) void {
        const item_str = qtc.libqt_string{
            .len = item.len,
            .data = item.ptr,
        };
        qtc.KCompletion_RemoveItem(@ptrCast(self), item_str);
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#match)
    ///
    /// ``` self: QtC.KShellCompletion, item: []const u8 ```
    pub fn Match(self: ?*anyopaque, item: []const u8) void {
        const item_str = qtc.libqt_string{
            .len = item.len,
            .data = item.ptr,
        };
        qtc.KCompletion_Match(@ptrCast(self), item_str);
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#match)
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn (self: QtC.KShellCompletion, item: [*:0]const u8) callconv(.c) void ```
    pub fn OnMatch(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KCompletion_Connect_Match(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#matches)
    ///
    /// ``` self: QtC.KShellCompletion, matchlist: [][]const u8, allocator: std.mem.Allocator ```
    pub fn Matches(self: ?*anyopaque, matchlist: [][]const u8, allocator: std.mem.Allocator) void {
        var matchlist_arr = allocator.alloc(qtc.libqt_string, matchlist.len) catch @panic("kshellcompletion.Matches: Memory allocation failed");
        defer allocator.free(matchlist_arr);
        for (matchlist, 0..matchlist.len) |item, i| {
            matchlist_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const matchlist_list = qtc.libqt_list{
            .len = matchlist.len,
            .data = matchlist_arr.ptr,
        };
        qtc.KCompletion_Matches(@ptrCast(self), matchlist_list);
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#matches)
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn (self: QtC.KShellCompletion, matchlist: [*][*:0]const u8) callconv(.c) void ```
    pub fn OnMatches(self: ?*anyopaque, slot: fn (?*anyopaque, [*][*:0]const u8) callconv(.c) void) void {
        qtc.KCompletion_Connect_Matches(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#multipleMatches)
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn MultipleMatches(self: ?*anyopaque) void {
        qtc.KCompletion_MultipleMatches(@ptrCast(self));
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#multipleMatches)
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn (self: QtC.KShellCompletion) callconv(.c) void ```
    pub fn OnMultipleMatches(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.KCompletion_Connect_MultipleMatches(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KShellCompletion, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kshellcompletion.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KShellCompletion, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KShellCompletion, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KShellCompletion, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KShellCompletion, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KShellCompletion, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KShellCompletion, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KShellCompletion, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kshellcompletion.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KShellCompletion, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KShellCompletion, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KShellCompletion, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KShellCompletion, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KShellCompletion, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KShellCompletion, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KShellCompletion, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kshellcompletion.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kshellcompletion.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn (self: QtC.KShellCompletion) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KShellCompletion, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KShellCompletion, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KShellCompletion, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KShellCompletion, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KShellCompletion, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn (self: QtC.KShellCompletion, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#setDir)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, dir: QtC.QUrl ```
    pub fn SetDir(self: ?*anyopaque, dir: ?*anyopaque) void {
        qtc.KShellCompletion_SetDir(@ptrCast(self), @ptrCast(dir));
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#setDir)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, dir: QtC.QUrl ```
    pub fn QBaseSetDir(self: ?*anyopaque, dir: ?*anyopaque) void {
        qtc.KShellCompletion_QBaseSetDir(@ptrCast(self), @ptrCast(dir));
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#setDir)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn (self: QtC.KShellCompletion, dir: QtC.QUrl) callconv(.c) void ```
    pub fn OnSetDir(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KShellCompletion_OnSetDir(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#dir)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn Dir(self: ?*anyopaque) QtC.QUrl {
        return qtc.KShellCompletion_Dir(@ptrCast(self));
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#dir)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn QBaseDir(self: ?*anyopaque) QtC.QUrl {
        return qtc.KShellCompletion_QBaseDir(@ptrCast(self));
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#dir)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn () callconv(.c) QtC.QUrl ```
    pub fn OnDir(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QUrl) void {
        qtc.KShellCompletion_OnDir(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#isRunning)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn IsRunning(self: ?*anyopaque) bool {
        return qtc.KShellCompletion_IsRunning(@ptrCast(self));
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#isRunning)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn QBaseIsRunning(self: ?*anyopaque) bool {
        return qtc.KShellCompletion_QBaseIsRunning(@ptrCast(self));
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#isRunning)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn () callconv(.c) bool ```
    pub fn OnIsRunning(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KShellCompletion_OnIsRunning(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#stop)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn Stop(self: ?*anyopaque) void {
        qtc.KShellCompletion_Stop(@ptrCast(self));
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#stop)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn QBaseStop(self: ?*anyopaque) void {
        qtc.KShellCompletion_QBaseStop(@ptrCast(self));
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#stop)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn () callconv(.c) void ```
    pub fn OnStop(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KShellCompletion_OnStop(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#mode)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion ```
    ///
    /// Returns: ``` kurlcompletion_enums.Mode ```
    pub fn Mode(self: ?*anyopaque) i32 {
        return qtc.KShellCompletion_Mode(@ptrCast(self));
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#mode)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion ```
    ///
    /// Returns: ``` kurlcompletion_enums.Mode ```
    pub fn QBaseMode(self: ?*anyopaque) i32 {
        return qtc.KShellCompletion_QBaseMode(@ptrCast(self));
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#mode)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn () callconv(.c) i32 ```
    pub fn OnMode(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.KShellCompletion_OnMode(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#setMode)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, mode: kurlcompletion_enums.Mode ```
    pub fn SetMode(self: ?*anyopaque, mode: i32) void {
        qtc.KShellCompletion_SetMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#setMode)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, mode: kurlcompletion_enums.Mode ```
    pub fn QBaseSetMode(self: ?*anyopaque, mode: i32) void {
        qtc.KShellCompletion_QBaseSetMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#setMode)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn (self: QtC.KShellCompletion, mode: kurlcompletion_enums.Mode) callconv(.c) void ```
    pub fn OnSetMode(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KShellCompletion_OnSetMode(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#replaceEnv)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn ReplaceEnv(self: ?*anyopaque) bool {
        return qtc.KShellCompletion_ReplaceEnv(@ptrCast(self));
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#replaceEnv)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn QBaseReplaceEnv(self: ?*anyopaque) bool {
        return qtc.KShellCompletion_QBaseReplaceEnv(@ptrCast(self));
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#replaceEnv)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn () callconv(.c) bool ```
    pub fn OnReplaceEnv(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KShellCompletion_OnReplaceEnv(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#setReplaceEnv)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, replace: bool ```
    pub fn SetReplaceEnv(self: ?*anyopaque, replace: bool) void {
        qtc.KShellCompletion_SetReplaceEnv(@ptrCast(self), replace);
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#setReplaceEnv)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, replace: bool ```
    pub fn QBaseSetReplaceEnv(self: ?*anyopaque, replace: bool) void {
        qtc.KShellCompletion_QBaseSetReplaceEnv(@ptrCast(self), replace);
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#setReplaceEnv)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn (self: QtC.KShellCompletion, replace: bool) callconv(.c) void ```
    pub fn OnSetReplaceEnv(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KShellCompletion_OnSetReplaceEnv(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#replaceHome)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn ReplaceHome(self: ?*anyopaque) bool {
        return qtc.KShellCompletion_ReplaceHome(@ptrCast(self));
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#replaceHome)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn QBaseReplaceHome(self: ?*anyopaque) bool {
        return qtc.KShellCompletion_QBaseReplaceHome(@ptrCast(self));
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#replaceHome)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn () callconv(.c) bool ```
    pub fn OnReplaceHome(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KShellCompletion_OnReplaceHome(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#setReplaceHome)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, replace: bool ```
    pub fn SetReplaceHome(self: ?*anyopaque, replace: bool) void {
        qtc.KShellCompletion_SetReplaceHome(@ptrCast(self), replace);
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#setReplaceHome)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, replace: bool ```
    pub fn QBaseSetReplaceHome(self: ?*anyopaque, replace: bool) void {
        qtc.KShellCompletion_QBaseSetReplaceHome(@ptrCast(self), replace);
    }

    /// Inherited from KUrlCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kurlcompletion.html#setReplaceHome)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn (self: QtC.KShellCompletion, replace: bool) callconv(.c) void ```
    pub fn OnSetReplaceHome(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KShellCompletion_OnSetReplaceHome(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#lastMatch)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, allocator: std.mem.Allocator ```
    pub fn LastMatch(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KShellCompletion_LastMatch(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kshellcompletion.LastMatch: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#lastMatch)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, allocator: std.mem.Allocator ```
    pub fn QBaseLastMatch(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KShellCompletion_QBaseLastMatch(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kshellcompletion.LastMatch: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#lastMatch)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn () callconv(.c) [*:0]const u8 ```
    pub fn OnLastMatch(self: ?*anyopaque, slot: fn () callconv(.c) [*:0]const u8) void {
        qtc.KShellCompletion_OnLastMatch(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#setCompletionMode)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, mode: kcompletion_enums.CompletionMode ```
    pub fn SetCompletionMode(self: ?*anyopaque, mode: i32) void {
        qtc.KShellCompletion_SetCompletionMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#setCompletionMode)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, mode: kcompletion_enums.CompletionMode ```
    pub fn QBaseSetCompletionMode(self: ?*anyopaque, mode: i32) void {
        qtc.KShellCompletion_QBaseSetCompletionMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#setCompletionMode)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn (self: QtC.KShellCompletion, mode: kcompletion_enums.CompletionMode) callconv(.c) void ```
    pub fn OnSetCompletionMode(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KShellCompletion_OnSetCompletionMode(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#setOrder)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, order: kcompletion_enums.CompOrder ```
    pub fn SetOrder(self: ?*anyopaque, order: i32) void {
        qtc.KShellCompletion_SetOrder(@ptrCast(self), @intCast(order));
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#setOrder)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, order: kcompletion_enums.CompOrder ```
    pub fn QBaseSetOrder(self: ?*anyopaque, order: i32) void {
        qtc.KShellCompletion_QBaseSetOrder(@ptrCast(self), @intCast(order));
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#setOrder)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn (self: QtC.KShellCompletion, order: kcompletion_enums.CompOrder) callconv(.c) void ```
    pub fn OnSetOrder(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KShellCompletion_OnSetOrder(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#setIgnoreCase)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, ignoreCase: bool ```
    pub fn SetIgnoreCase(self: ?*anyopaque, ignoreCase: bool) void {
        qtc.KShellCompletion_SetIgnoreCase(@ptrCast(self), ignoreCase);
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#setIgnoreCase)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, ignoreCase: bool ```
    pub fn QBaseSetIgnoreCase(self: ?*anyopaque, ignoreCase: bool) void {
        qtc.KShellCompletion_QBaseSetIgnoreCase(@ptrCast(self), ignoreCase);
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#setIgnoreCase)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn (self: QtC.KShellCompletion, ignoreCase: bool) callconv(.c) void ```
    pub fn OnSetIgnoreCase(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KShellCompletion_OnSetIgnoreCase(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#setSoundsEnabled)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, enable: bool ```
    pub fn SetSoundsEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.KShellCompletion_SetSoundsEnabled(@ptrCast(self), enable);
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#setSoundsEnabled)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, enable: bool ```
    pub fn QBaseSetSoundsEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.KShellCompletion_QBaseSetSoundsEnabled(@ptrCast(self), enable);
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#setSoundsEnabled)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn (self: QtC.KShellCompletion, enable: bool) callconv(.c) void ```
    pub fn OnSetSoundsEnabled(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KShellCompletion_OnSetSoundsEnabled(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#setItems)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, itemList: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetItems(self: ?*anyopaque, itemList: [][]const u8, allocator: std.mem.Allocator) void {
        var itemList_arr = allocator.alloc(qtc.libqt_string, itemList.len) catch @panic("kshellcompletion.SetItems: Memory allocation failed");
        defer allocator.free(itemList_arr);
        for (itemList, 0..itemList.len) |item, i| {
            itemList_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const itemList_list = qtc.libqt_list{
            .len = itemList.len,
            .data = itemList_arr.ptr,
        };
        qtc.KShellCompletion_SetItems(@ptrCast(self), itemList_list);
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#setItems)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, itemList: [][]const u8, allocator: std.mem.Allocator ```
    pub fn QBaseSetItems(self: ?*anyopaque, itemList: [][]const u8, allocator: std.mem.Allocator) void {
        var itemList_arr = allocator.alloc(qtc.libqt_string, itemList.len) catch @panic("kshellcompletion.SetItems: Memory allocation failed");
        defer allocator.free(itemList_arr);
        for (itemList, 0..itemList.len) |item, i| {
            itemList_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const itemList_list = qtc.libqt_list{
            .len = itemList.len,
            .data = itemList_arr.ptr,
        };
        qtc.KShellCompletion_QBaseSetItems(@ptrCast(self), itemList_list);
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#setItems)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn (self: QtC.KShellCompletion, itemList: [*][*:0]const u8) callconv(.c) void ```
    pub fn OnSetItems(self: ?*anyopaque, slot: fn (?*anyopaque, [*][*:0]const u8) callconv(.c) void) void {
        qtc.KShellCompletion_OnSetItems(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#clear)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.KShellCompletion_Clear(@ptrCast(self));
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#clear)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn QBaseClear(self: ?*anyopaque) void {
        qtc.KShellCompletion_QBaseClear(@ptrCast(self));
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#clear)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn () callconv(.c) void ```
    pub fn OnClear(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KShellCompletion_OnClear(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KShellCompletion_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KShellCompletion_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn (self: QtC.KShellCompletion, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KShellCompletion_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KShellCompletion_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KShellCompletion_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn (self: QtC.KShellCompletion, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KShellCompletion_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KShellCompletion_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KShellCompletion_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn (self: QtC.KShellCompletion, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KShellCompletion_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KShellCompletion_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KShellCompletion_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn (self: QtC.KShellCompletion, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KShellCompletion_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KShellCompletion_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KShellCompletion_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn (self: QtC.KShellCompletion, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KShellCompletion_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KShellCompletion_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KShellCompletion_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn (self: QtC.KShellCompletion, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KShellCompletion_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KShellCompletion_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KShellCompletion_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn (self: QtC.KShellCompletion, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KShellCompletion_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#setShouldAutoSuggest)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, shouldAutosuggest: bool ```
    pub fn SetShouldAutoSuggest(self: ?*anyopaque, shouldAutosuggest: bool) void {
        qtc.KShellCompletion_SetShouldAutoSuggest(@ptrCast(self), shouldAutosuggest);
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#setShouldAutoSuggest)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, shouldAutosuggest: bool ```
    pub fn QBaseSetShouldAutoSuggest(self: ?*anyopaque, shouldAutosuggest: bool) void {
        qtc.KShellCompletion_QBaseSetShouldAutoSuggest(@ptrCast(self), shouldAutosuggest);
    }

    /// Inherited from KCompletion
    ///
    /// [Qt documentation](https://api.kde.org/kcompletion.html#setShouldAutoSuggest)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn (self: QtC.KShellCompletion, shouldAutosuggest: bool) callconv(.c) void ```
    pub fn OnSetShouldAutoSuggest(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KShellCompletion_OnSetShouldAutoSuggest(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KShellCompletion_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KShellCompletion_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.KShellCompletion_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KShellCompletion_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KShellCompletion_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.KShellCompletion_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KShellCompletion_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KShellCompletion_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn (self: QtC.KShellCompletion, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KShellCompletion_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KShellCompletion_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KShellCompletion_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn (self: QtC.KShellCompletion, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KShellCompletion_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KShellCompletion, slot: fn (self: QtC.KShellCompletion, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kshellcompletion.html#dtor.KShellCompletion)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KShellCompletion ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KShellCompletion_Delete(@ptrCast(self));
    }
};
