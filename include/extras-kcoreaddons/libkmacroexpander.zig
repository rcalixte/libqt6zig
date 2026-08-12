const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QChar = @import("libqt6").QChar;
const std = @import("std");
const Map_QChar_constconstu8 = std.AutoHashMapUnmanaged(QChar, []const []const u8);
const Map_QChar_constu8 = std.AutoHashMapUnmanaged(QChar, []const u8);
const Map_constu8_constconstu8 = std.StringHashMapUnmanaged([]const []const u8);
const Map_constu8_constu8 = std.StringHashMapUnmanaged([]const u8);

/// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html)
pub const KMacroExpanderBase = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KMacroExpanderBase,

    pub const _is_KMacroExpanderBase = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KMacroExpanderBase object in C++ memory
    ///
    pub fn new() KMacroExpanderBase {
        return .{ .ptr = qtc.KMacroExpanderBase_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KMacroExpanderBase object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` c: QChar `
    ///
    pub fn new2(c: anytype) KMacroExpanderBase {
        comptime _ = @TypeOf(c)._is_QChar;
        return .{ .ptr = qtc.KMacroExpanderBase_new2(@ptrCast(c.ptr)) };
    }

    /// ### DEPRECATED: Use `expandMacros` instead
    ///
    pub const ExpandMacros = expandMacros;

    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#expandMacros)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMacroExpanderBase `
    ///
    /// ` str: []const u8 `
    ///
    pub fn expandMacros(self: KMacroExpanderBase, str: []const u8) void {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        qtc.KMacroExpanderBase_ExpandMacros(@ptrCast(self.ptr), str_str);
    }

    /// ### DEPRECATED: Use `expandMacrosShellQuote` instead
    ///
    pub const ExpandMacrosShellQuote = expandMacrosShellQuote;

    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#expandMacrosShellQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMacroExpanderBase `
    ///
    /// ` str: []const u8 `
    ///
    /// ` pos: *i32 `
    ///
    pub fn expandMacrosShellQuote(self: KMacroExpanderBase, str: []const u8, pos: *i32) bool {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.KMacroExpanderBase_ExpandMacrosShellQuote(@ptrCast(self.ptr), str_str, @ptrCast(pos));
    }

    /// ### DEPRECATED: Use `expandMacrosShellQuote2` instead
    ///
    pub const ExpandMacrosShellQuote2 = expandMacrosShellQuote2;

    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#expandMacrosShellQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMacroExpanderBase `
    ///
    /// ` str: []const u8 `
    ///
    pub fn expandMacrosShellQuote2(self: KMacroExpanderBase, str: []const u8) bool {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.KMacroExpanderBase_ExpandMacrosShellQuote2(@ptrCast(self.ptr), str_str);
    }

    /// ### DEPRECATED: Use `setEscapeChar` instead
    ///
    pub const SetEscapeChar = setEscapeChar;

    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#setEscapeChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMacroExpanderBase `
    ///
    /// ` c: QChar `
    ///
    pub fn setEscapeChar(self: KMacroExpanderBase, c: anytype) void {
        comptime _ = @TypeOf(c)._is_QChar;
        qtc.KMacroExpanderBase_SetEscapeChar(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### DEPRECATED: Use `escapeChar` instead
    ///
    pub const EscapeChar = escapeChar;

    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#escapeChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMacroExpanderBase `
    ///
    pub fn escapeChar(self: KMacroExpanderBase) QChar {
        return .{ .ptr = qtc.KMacroExpanderBase_EscapeChar(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `expandPlainMacro` instead
    ///
    pub const ExpandPlainMacro = expandPlainMacro;

    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#expandPlainMacro)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMacroExpanderBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    /// ` pos: i32 `
    ///
    /// ` ret: []const []const u8 `
    ///
    pub fn expandPlainMacro(self: KMacroExpanderBase, allocator: std.mem.Allocator, str: []const u8, pos: i32, ret: []const []const u8) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const ret_arr = allocator.alloc(qtc.libqt_string, ret.len) catch @panic("KMacroExpanderBase.expandPlainMacro: Memory allocation failed");
        defer allocator.free(ret_arr);
        for (ret, 0..ret.len) |str_item, i|
            ret_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const ret_list = qtc.libqt_list{
            .len = ret.len,
            .data = ret_arr.ptr,
        };
        return qtc.KMacroExpanderBase_ExpandPlainMacro(@ptrCast(self.ptr), str_str, @bitCast(pos), ret_list);
    }

    /// ### DEPRECATED: Use `onExpandPlainMacro` instead
    ///
    pub const OnExpandPlainMacro = onExpandPlainMacro;

    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#expandPlainMacro)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KMacroExpanderBase `
    ///
    /// ` callback: *const fn (self: KMacroExpanderBase, str: [*:0]const u8, pos: i32, ret: ?[*:null]?[*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onExpandPlainMacro(self: KMacroExpanderBase, callback: *const fn (KMacroExpanderBase, [*:0]const u8, i32, ?[*:null]?[*:0]const u8) callconv(.c) i32) void {
        qtc.KMacroExpanderBase_OnExpandPlainMacro(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superExpandPlainMacro` instead
    ///
    pub const SuperExpandPlainMacro = superExpandPlainMacro;

    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#expandPlainMacro)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMacroExpanderBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    /// ` pos: i32 `
    ///
    /// ` ret: []const []const u8 `
    ///
    pub fn superExpandPlainMacro(self: KMacroExpanderBase, allocator: std.mem.Allocator, str: []const u8, pos: i32, ret: []const []const u8) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const ret_arr = allocator.alloc(qtc.libqt_string, ret.len) catch @panic("KMacroExpanderBase.expandPlainMacro: Memory allocation failed");
        defer allocator.free(ret_arr);
        for (ret, 0..ret.len) |str_item, i|
            ret_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const ret_list = qtc.libqt_list{
            .len = ret.len,
            .data = ret_arr.ptr,
        };
        return qtc.KMacroExpanderBase_SuperExpandPlainMacro(@ptrCast(self.ptr), str_str, @bitCast(pos), ret_list);
    }

    /// ### DEPRECATED: Use `expandEscapedMacro` instead
    ///
    pub const ExpandEscapedMacro = expandEscapedMacro;

    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#expandEscapedMacro)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMacroExpanderBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    /// ` pos: i32 `
    ///
    /// ` ret: []const []const u8 `
    ///
    pub fn expandEscapedMacro(self: KMacroExpanderBase, allocator: std.mem.Allocator, str: []const u8, pos: i32, ret: []const []const u8) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const ret_arr = allocator.alloc(qtc.libqt_string, ret.len) catch @panic("KMacroExpanderBase.expandEscapedMacro: Memory allocation failed");
        defer allocator.free(ret_arr);
        for (ret, 0..ret.len) |str_item, i|
            ret_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const ret_list = qtc.libqt_list{
            .len = ret.len,
            .data = ret_arr.ptr,
        };
        return qtc.KMacroExpanderBase_ExpandEscapedMacro(@ptrCast(self.ptr), str_str, @bitCast(pos), ret_list);
    }

    /// ### DEPRECATED: Use `onExpandEscapedMacro` instead
    ///
    pub const OnExpandEscapedMacro = onExpandEscapedMacro;

    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#expandEscapedMacro)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KMacroExpanderBase `
    ///
    /// ` callback: *const fn (self: KMacroExpanderBase, str: [*:0]const u8, pos: i32, ret: ?[*:null]?[*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onExpandEscapedMacro(self: KMacroExpanderBase, callback: *const fn (KMacroExpanderBase, [*:0]const u8, i32, ?[*:null]?[*:0]const u8) callconv(.c) i32) void {
        qtc.KMacroExpanderBase_OnExpandEscapedMacro(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superExpandEscapedMacro` instead
    ///
    pub const SuperExpandEscapedMacro = superExpandEscapedMacro;

    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#expandEscapedMacro)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMacroExpanderBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    /// ` pos: i32 `
    ///
    /// ` ret: []const []const u8 `
    ///
    pub fn superExpandEscapedMacro(self: KMacroExpanderBase, allocator: std.mem.Allocator, str: []const u8, pos: i32, ret: []const []const u8) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const ret_arr = allocator.alloc(qtc.libqt_string, ret.len) catch @panic("KMacroExpanderBase.expandEscapedMacro: Memory allocation failed");
        defer allocator.free(ret_arr);
        for (ret, 0..ret.len) |str_item, i|
            ret_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const ret_list = qtc.libqt_list{
            .len = ret.len,
            .data = ret_arr.ptr,
        };
        return qtc.KMacroExpanderBase_SuperExpandEscapedMacro(@ptrCast(self.ptr), str_str, @bitCast(pos), ret_list);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#dtor.KMacroExpanderBase)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KMacroExpanderBase `
    ///
    pub fn delete(self: KMacroExpanderBase) void {
        qtc.KMacroExpanderBase_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kwordmacroexpander.html)
pub const KWordMacroExpander = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kwordmacroexpander.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KWordMacroExpander,

    pub const _is_KWordMacroExpander = {};
    pub const _is_KMacroExpanderBase = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KWordMacroExpander object in C++ memory
    ///
    pub fn new() KWordMacroExpander {
        return .{ .ptr = qtc.KWordMacroExpander_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KWordMacroExpander object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` c: QChar `
    ///
    pub fn new2(c: anytype) KWordMacroExpander {
        comptime _ = @TypeOf(c)._is_QChar;
        return .{ .ptr = qtc.KWordMacroExpander_new2(@ptrCast(c.ptr)) };
    }

    /// ### DEPRECATED: Use `expandPlainMacro` instead
    ///
    pub const ExpandPlainMacro = expandPlainMacro;

    /// ### [Upstream resources](https://api.kde.org/kwordmacroexpander.html#expandPlainMacro)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWordMacroExpander `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    /// ` pos: i32 `
    ///
    /// ` ret: []const []const u8 `
    ///
    pub fn expandPlainMacro(self: KWordMacroExpander, allocator: std.mem.Allocator, str: []const u8, pos: i32, ret: []const []const u8) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const ret_arr = allocator.alloc(qtc.libqt_string, ret.len) catch @panic("KWordMacroExpander.expandPlainMacro: Memory allocation failed");
        defer allocator.free(ret_arr);
        for (ret, 0..ret.len) |str_item, i|
            ret_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const ret_list = qtc.libqt_list{
            .len = ret.len,
            .data = ret_arr.ptr,
        };
        return qtc.KWordMacroExpander_ExpandPlainMacro(@ptrCast(self.ptr), str_str, @bitCast(pos), ret_list);
    }

    /// ### DEPRECATED: Use `onExpandPlainMacro` instead
    ///
    pub const OnExpandPlainMacro = onExpandPlainMacro;

    /// ### [Upstream resources](https://api.kde.org/kwordmacroexpander.html#expandPlainMacro)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KWordMacroExpander `
    ///
    /// ` callback: *const fn (self: KWordMacroExpander, str: [*:0]const u8, pos: i32, ret: ?[*:null]?[*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onExpandPlainMacro(self: KWordMacroExpander, callback: *const fn (KWordMacroExpander, [*:0]const u8, i32, ?[*:null]?[*:0]const u8) callconv(.c) i32) void {
        qtc.KWordMacroExpander_OnExpandPlainMacro(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superExpandPlainMacro` instead
    ///
    pub const SuperExpandPlainMacro = superExpandPlainMacro;

    /// ### [Upstream resources](https://api.kde.org/kwordmacroexpander.html#expandPlainMacro)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWordMacroExpander `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    /// ` pos: i32 `
    ///
    /// ` ret: []const []const u8 `
    ///
    pub fn superExpandPlainMacro(self: KWordMacroExpander, allocator: std.mem.Allocator, str: []const u8, pos: i32, ret: []const []const u8) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const ret_arr = allocator.alloc(qtc.libqt_string, ret.len) catch @panic("KWordMacroExpander.expandPlainMacro: Memory allocation failed");
        defer allocator.free(ret_arr);
        for (ret, 0..ret.len) |str_item, i|
            ret_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const ret_list = qtc.libqt_list{
            .len = ret.len,
            .data = ret_arr.ptr,
        };
        return qtc.KWordMacroExpander_SuperExpandPlainMacro(@ptrCast(self.ptr), str_str, @bitCast(pos), ret_list);
    }

    /// ### DEPRECATED: Use `expandEscapedMacro` instead
    ///
    pub const ExpandEscapedMacro = expandEscapedMacro;

    /// ### [Upstream resources](https://api.kde.org/kwordmacroexpander.html#expandEscapedMacro)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWordMacroExpander `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    /// ` pos: i32 `
    ///
    /// ` ret: []const []const u8 `
    ///
    pub fn expandEscapedMacro(self: KWordMacroExpander, allocator: std.mem.Allocator, str: []const u8, pos: i32, ret: []const []const u8) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const ret_arr = allocator.alloc(qtc.libqt_string, ret.len) catch @panic("KWordMacroExpander.expandEscapedMacro: Memory allocation failed");
        defer allocator.free(ret_arr);
        for (ret, 0..ret.len) |str_item, i|
            ret_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const ret_list = qtc.libqt_list{
            .len = ret.len,
            .data = ret_arr.ptr,
        };
        return qtc.KWordMacroExpander_ExpandEscapedMacro(@ptrCast(self.ptr), str_str, @bitCast(pos), ret_list);
    }

    /// ### DEPRECATED: Use `onExpandEscapedMacro` instead
    ///
    pub const OnExpandEscapedMacro = onExpandEscapedMacro;

    /// ### [Upstream resources](https://api.kde.org/kwordmacroexpander.html#expandEscapedMacro)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KWordMacroExpander `
    ///
    /// ` callback: *const fn (self: KWordMacroExpander, str: [*:0]const u8, pos: i32, ret: ?[*:null]?[*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onExpandEscapedMacro(self: KWordMacroExpander, callback: *const fn (KWordMacroExpander, [*:0]const u8, i32, ?[*:null]?[*:0]const u8) callconv(.c) i32) void {
        qtc.KWordMacroExpander_OnExpandEscapedMacro(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superExpandEscapedMacro` instead
    ///
    pub const SuperExpandEscapedMacro = superExpandEscapedMacro;

    /// ### [Upstream resources](https://api.kde.org/kwordmacroexpander.html#expandEscapedMacro)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWordMacroExpander `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    /// ` pos: i32 `
    ///
    /// ` ret: []const []const u8 `
    ///
    pub fn superExpandEscapedMacro(self: KWordMacroExpander, allocator: std.mem.Allocator, str: []const u8, pos: i32, ret: []const []const u8) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const ret_arr = allocator.alloc(qtc.libqt_string, ret.len) catch @panic("KWordMacroExpander.expandEscapedMacro: Memory allocation failed");
        defer allocator.free(ret_arr);
        for (ret, 0..ret.len) |str_item, i|
            ret_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const ret_list = qtc.libqt_list{
            .len = ret.len,
            .data = ret_arr.ptr,
        };
        return qtc.KWordMacroExpander_SuperExpandEscapedMacro(@ptrCast(self.ptr), str_str, @bitCast(pos), ret_list);
    }

    /// ### DEPRECATED: Use `expandMacro` instead
    ///
    pub const ExpandMacro = expandMacro;

    /// ### [Upstream resources](https://api.kde.org/kwordmacroexpander.html#expandMacro)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWordMacroExpander `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    /// ` ret: []const []const u8 `
    ///
    pub fn expandMacro(self: KWordMacroExpander, allocator: std.mem.Allocator, str: []const u8, ret: []const []const u8) bool {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const ret_arr = allocator.alloc(qtc.libqt_string, ret.len) catch @panic("KWordMacroExpander.expandMacro: Memory allocation failed");
        defer allocator.free(ret_arr);
        for (ret, 0..ret.len) |str_item, i|
            ret_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const ret_list = qtc.libqt_list{
            .len = ret.len,
            .data = ret_arr.ptr,
        };
        return qtc.KWordMacroExpander_ExpandMacro(@ptrCast(self.ptr), str_str, ret_list);
    }

    /// ### DEPRECATED: Use `onExpandMacro` instead
    ///
    pub const OnExpandMacro = onExpandMacro;

    /// ### [Upstream resources](https://api.kde.org/kwordmacroexpander.html#expandMacro)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KWordMacroExpander `
    ///
    /// ` callback: *const fn (self: KWordMacroExpander, str: [*:0]const u8, ret: ?[*:null]?[*:0]const u8) callconv(.c) bool `
    ///
    pub fn onExpandMacro(self: KWordMacroExpander, callback: *const fn (KWordMacroExpander, [*:0]const u8, ?[*:null]?[*:0]const u8) callconv(.c) bool) void {
        qtc.KWordMacroExpander_OnExpandMacro(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superExpandMacro` instead
    ///
    pub const SuperExpandMacro = superExpandMacro;

    /// ### [Upstream resources](https://api.kde.org/kwordmacroexpander.html#expandMacro)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWordMacroExpander `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    /// ` ret: []const []const u8 `
    ///
    pub fn superExpandMacro(self: KWordMacroExpander, allocator: std.mem.Allocator, str: []const u8, ret: []const []const u8) bool {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const ret_arr = allocator.alloc(qtc.libqt_string, ret.len) catch @panic("KWordMacroExpander.expandMacro: Memory allocation failed");
        defer allocator.free(ret_arr);
        for (ret, 0..ret.len) |str_item, i|
            ret_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const ret_list = qtc.libqt_list{
            .len = ret.len,
            .data = ret_arr.ptr,
        };
        return qtc.KWordMacroExpander_SuperExpandMacro(@ptrCast(self.ptr), str_str, ret_list);
    }

    /// ### DEPRECATED: Use `expandMacros` instead
    ///
    pub const ExpandMacros = expandMacros;

    /// Inherited from KMacroExpanderBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#expandMacros)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWordMacroExpander `
    ///
    /// ` str: []const u8 `
    ///
    pub fn expandMacros(self: KWordMacroExpander, str: []const u8) void {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        qtc.KMacroExpanderBase_ExpandMacros(@ptrCast(self.ptr), str_str);
    }

    /// ### DEPRECATED: Use `expandMacrosShellQuote` instead
    ///
    pub const ExpandMacrosShellQuote = expandMacrosShellQuote;

    /// Inherited from KMacroExpanderBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#expandMacrosShellQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWordMacroExpander `
    ///
    /// ` str: []const u8 `
    ///
    /// ` pos: *i32 `
    ///
    pub fn expandMacrosShellQuote(self: KWordMacroExpander, str: []const u8, pos: *i32) bool {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.KMacroExpanderBase_ExpandMacrosShellQuote(@ptrCast(self.ptr), str_str, @ptrCast(pos));
    }

    /// ### DEPRECATED: Use `expandMacrosShellQuote2` instead
    ///
    pub const ExpandMacrosShellQuote2 = expandMacrosShellQuote2;

    /// Inherited from KMacroExpanderBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#expandMacrosShellQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWordMacroExpander `
    ///
    /// ` str: []const u8 `
    ///
    pub fn expandMacrosShellQuote2(self: KWordMacroExpander, str: []const u8) bool {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.KMacroExpanderBase_ExpandMacrosShellQuote2(@ptrCast(self.ptr), str_str);
    }

    /// ### DEPRECATED: Use `setEscapeChar` instead
    ///
    pub const SetEscapeChar = setEscapeChar;

    /// Inherited from KMacroExpanderBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#setEscapeChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWordMacroExpander `
    ///
    /// ` c: QChar `
    ///
    pub fn setEscapeChar(self: KWordMacroExpander, c: anytype) void {
        comptime _ = @TypeOf(c)._is_QChar;
        qtc.KMacroExpanderBase_SetEscapeChar(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### DEPRECATED: Use `escapeChar` instead
    ///
    pub const EscapeChar = escapeChar;

    /// Inherited from KMacroExpanderBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#escapeChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWordMacroExpander `
    ///
    pub fn escapeChar(self: KWordMacroExpander) QChar {
        return .{ .ptr = qtc.KMacroExpanderBase_EscapeChar(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kwordmacroexpander.html#dtor.KWordMacroExpander)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KWordMacroExpander `
    ///
    pub fn delete(self: KWordMacroExpander) void {
        qtc.KWordMacroExpander_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcharmacroexpander.html)
pub const KCharMacroExpander = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcharmacroexpander.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCharMacroExpander,

    pub const _is_KCharMacroExpander = {};
    pub const _is_KMacroExpanderBase = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCharMacroExpander object in C++ memory
    ///
    pub fn new() KCharMacroExpander {
        return .{ .ptr = qtc.KCharMacroExpander_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KCharMacroExpander object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` c: QChar `
    ///
    pub fn new2(c: anytype) KCharMacroExpander {
        comptime _ = @TypeOf(c)._is_QChar;
        return .{ .ptr = qtc.KCharMacroExpander_new2(@ptrCast(c.ptr)) };
    }

    /// ### DEPRECATED: Use `expandPlainMacro` instead
    ///
    pub const ExpandPlainMacro = expandPlainMacro;

    /// ### [Upstream resources](https://api.kde.org/kcharmacroexpander.html#expandPlainMacro)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCharMacroExpander `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    /// ` pos: i32 `
    ///
    /// ` ret: []const []const u8 `
    ///
    pub fn expandPlainMacro(self: KCharMacroExpander, allocator: std.mem.Allocator, str: []const u8, pos: i32, ret: []const []const u8) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const ret_arr = allocator.alloc(qtc.libqt_string, ret.len) catch @panic("KCharMacroExpander.expandPlainMacro: Memory allocation failed");
        defer allocator.free(ret_arr);
        for (ret, 0..ret.len) |str_item, i|
            ret_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const ret_list = qtc.libqt_list{
            .len = ret.len,
            .data = ret_arr.ptr,
        };
        return qtc.KCharMacroExpander_ExpandPlainMacro(@ptrCast(self.ptr), str_str, @bitCast(pos), ret_list);
    }

    /// ### DEPRECATED: Use `onExpandPlainMacro` instead
    ///
    pub const OnExpandPlainMacro = onExpandPlainMacro;

    /// ### [Upstream resources](https://api.kde.org/kcharmacroexpander.html#expandPlainMacro)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCharMacroExpander `
    ///
    /// ` callback: *const fn (self: KCharMacroExpander, str: [*:0]const u8, pos: i32, ret: ?[*:null]?[*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onExpandPlainMacro(self: KCharMacroExpander, callback: *const fn (KCharMacroExpander, [*:0]const u8, i32, ?[*:null]?[*:0]const u8) callconv(.c) i32) void {
        qtc.KCharMacroExpander_OnExpandPlainMacro(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superExpandPlainMacro` instead
    ///
    pub const SuperExpandPlainMacro = superExpandPlainMacro;

    /// ### [Upstream resources](https://api.kde.org/kcharmacroexpander.html#expandPlainMacro)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCharMacroExpander `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    /// ` pos: i32 `
    ///
    /// ` ret: []const []const u8 `
    ///
    pub fn superExpandPlainMacro(self: KCharMacroExpander, allocator: std.mem.Allocator, str: []const u8, pos: i32, ret: []const []const u8) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const ret_arr = allocator.alloc(qtc.libqt_string, ret.len) catch @panic("KCharMacroExpander.expandPlainMacro: Memory allocation failed");
        defer allocator.free(ret_arr);
        for (ret, 0..ret.len) |str_item, i|
            ret_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const ret_list = qtc.libqt_list{
            .len = ret.len,
            .data = ret_arr.ptr,
        };
        return qtc.KCharMacroExpander_SuperExpandPlainMacro(@ptrCast(self.ptr), str_str, @bitCast(pos), ret_list);
    }

    /// ### DEPRECATED: Use `expandEscapedMacro` instead
    ///
    pub const ExpandEscapedMacro = expandEscapedMacro;

    /// ### [Upstream resources](https://api.kde.org/kcharmacroexpander.html#expandEscapedMacro)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCharMacroExpander `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    /// ` pos: i32 `
    ///
    /// ` ret: []const []const u8 `
    ///
    pub fn expandEscapedMacro(self: KCharMacroExpander, allocator: std.mem.Allocator, str: []const u8, pos: i32, ret: []const []const u8) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const ret_arr = allocator.alloc(qtc.libqt_string, ret.len) catch @panic("KCharMacroExpander.expandEscapedMacro: Memory allocation failed");
        defer allocator.free(ret_arr);
        for (ret, 0..ret.len) |str_item, i|
            ret_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const ret_list = qtc.libqt_list{
            .len = ret.len,
            .data = ret_arr.ptr,
        };
        return qtc.KCharMacroExpander_ExpandEscapedMacro(@ptrCast(self.ptr), str_str, @bitCast(pos), ret_list);
    }

    /// ### DEPRECATED: Use `onExpandEscapedMacro` instead
    ///
    pub const OnExpandEscapedMacro = onExpandEscapedMacro;

    /// ### [Upstream resources](https://api.kde.org/kcharmacroexpander.html#expandEscapedMacro)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCharMacroExpander `
    ///
    /// ` callback: *const fn (self: KCharMacroExpander, str: [*:0]const u8, pos: i32, ret: ?[*:null]?[*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onExpandEscapedMacro(self: KCharMacroExpander, callback: *const fn (KCharMacroExpander, [*:0]const u8, i32, ?[*:null]?[*:0]const u8) callconv(.c) i32) void {
        qtc.KCharMacroExpander_OnExpandEscapedMacro(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superExpandEscapedMacro` instead
    ///
    pub const SuperExpandEscapedMacro = superExpandEscapedMacro;

    /// ### [Upstream resources](https://api.kde.org/kcharmacroexpander.html#expandEscapedMacro)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCharMacroExpander `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    /// ` pos: i32 `
    ///
    /// ` ret: []const []const u8 `
    ///
    pub fn superExpandEscapedMacro(self: KCharMacroExpander, allocator: std.mem.Allocator, str: []const u8, pos: i32, ret: []const []const u8) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const ret_arr = allocator.alloc(qtc.libqt_string, ret.len) catch @panic("KCharMacroExpander.expandEscapedMacro: Memory allocation failed");
        defer allocator.free(ret_arr);
        for (ret, 0..ret.len) |str_item, i|
            ret_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const ret_list = qtc.libqt_list{
            .len = ret.len,
            .data = ret_arr.ptr,
        };
        return qtc.KCharMacroExpander_SuperExpandEscapedMacro(@ptrCast(self.ptr), str_str, @bitCast(pos), ret_list);
    }

    /// ### DEPRECATED: Use `expandMacro` instead
    ///
    pub const ExpandMacro = expandMacro;

    /// ### [Upstream resources](https://api.kde.org/kcharmacroexpander.html#expandMacro)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCharMacroExpander `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` chr: QChar `
    ///
    /// ` ret: []const []const u8 `
    ///
    pub fn expandMacro(self: KCharMacroExpander, allocator: std.mem.Allocator, chr: anytype, ret: []const []const u8) bool {
        comptime _ = @TypeOf(chr)._is_QChar;
        const ret_arr = allocator.alloc(qtc.libqt_string, ret.len) catch @panic("KCharMacroExpander.expandMacro: Memory allocation failed");
        defer allocator.free(ret_arr);
        for (ret, 0..ret.len) |str_item, i|
            ret_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const ret_list = qtc.libqt_list{
            .len = ret.len,
            .data = ret_arr.ptr,
        };
        return qtc.KCharMacroExpander_ExpandMacro(@ptrCast(self.ptr), @ptrCast(chr.ptr), ret_list);
    }

    /// ### DEPRECATED: Use `onExpandMacro` instead
    ///
    pub const OnExpandMacro = onExpandMacro;

    /// ### [Upstream resources](https://api.kde.org/kcharmacroexpander.html#expandMacro)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCharMacroExpander `
    ///
    /// ` callback: *const fn (self: KCharMacroExpander, chr: QChar, ret: ?[*:null]?[*:0]const u8) callconv(.c) bool `
    ///
    pub fn onExpandMacro(self: KCharMacroExpander, callback: *const fn (KCharMacroExpander, QChar, ?[*:null]?[*:0]const u8) callconv(.c) bool) void {
        qtc.KCharMacroExpander_OnExpandMacro(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superExpandMacro` instead
    ///
    pub const SuperExpandMacro = superExpandMacro;

    /// ### [Upstream resources](https://api.kde.org/kcharmacroexpander.html#expandMacro)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCharMacroExpander `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` chr: QChar `
    ///
    /// ` ret: []const []const u8 `
    ///
    pub fn superExpandMacro(self: KCharMacroExpander, allocator: std.mem.Allocator, chr: anytype, ret: []const []const u8) bool {
        comptime _ = @TypeOf(chr)._is_QChar;
        const ret_arr = allocator.alloc(qtc.libqt_string, ret.len) catch @panic("KCharMacroExpander.expandMacro: Memory allocation failed");
        defer allocator.free(ret_arr);
        for (ret, 0..ret.len) |str_item, i|
            ret_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const ret_list = qtc.libqt_list{
            .len = ret.len,
            .data = ret_arr.ptr,
        };
        return qtc.KCharMacroExpander_SuperExpandMacro(@ptrCast(self.ptr), @ptrCast(chr.ptr), ret_list);
    }

    /// ### DEPRECATED: Use `expandMacros` instead
    ///
    pub const ExpandMacros = expandMacros;

    /// Inherited from KMacroExpanderBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#expandMacros)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCharMacroExpander `
    ///
    /// ` str: []const u8 `
    ///
    pub fn expandMacros(self: KCharMacroExpander, str: []const u8) void {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        qtc.KMacroExpanderBase_ExpandMacros(@ptrCast(self.ptr), str_str);
    }

    /// ### DEPRECATED: Use `expandMacrosShellQuote` instead
    ///
    pub const ExpandMacrosShellQuote = expandMacrosShellQuote;

    /// Inherited from KMacroExpanderBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#expandMacrosShellQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCharMacroExpander `
    ///
    /// ` str: []const u8 `
    ///
    /// ` pos: *i32 `
    ///
    pub fn expandMacrosShellQuote(self: KCharMacroExpander, str: []const u8, pos: *i32) bool {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.KMacroExpanderBase_ExpandMacrosShellQuote(@ptrCast(self.ptr), str_str, @ptrCast(pos));
    }

    /// ### DEPRECATED: Use `expandMacrosShellQuote2` instead
    ///
    pub const ExpandMacrosShellQuote2 = expandMacrosShellQuote2;

    /// Inherited from KMacroExpanderBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#expandMacrosShellQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCharMacroExpander `
    ///
    /// ` str: []const u8 `
    ///
    pub fn expandMacrosShellQuote2(self: KCharMacroExpander, str: []const u8) bool {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.KMacroExpanderBase_ExpandMacrosShellQuote2(@ptrCast(self.ptr), str_str);
    }

    /// ### DEPRECATED: Use `setEscapeChar` instead
    ///
    pub const SetEscapeChar = setEscapeChar;

    /// Inherited from KMacroExpanderBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#setEscapeChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCharMacroExpander `
    ///
    /// ` c: QChar `
    ///
    pub fn setEscapeChar(self: KCharMacroExpander, c: anytype) void {
        comptime _ = @TypeOf(c)._is_QChar;
        qtc.KMacroExpanderBase_SetEscapeChar(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### DEPRECATED: Use `escapeChar` instead
    ///
    pub const EscapeChar = escapeChar;

    /// Inherited from KMacroExpanderBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#escapeChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCharMacroExpander `
    ///
    pub fn escapeChar(self: KCharMacroExpander) QChar {
        return .{ .ptr = qtc.KMacroExpanderBase_EscapeChar(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kcharmacroexpander.html#dtor.KCharMacroExpander)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCharMacroExpander `
    ///
    pub fn delete(self: KCharMacroExpander) void {
        qtc.KCharMacroExpander_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kmacroexpander.html)
pub const KMacroExpander = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kmacroexpander.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KMacroExpander,

    pub const _is_KMacroExpander = {};

    /// ### DEPRECATED: Use `expandMacros` instead
    ///
    pub const ExpandMacros = expandMacros;

    /// ### [Upstream resources](https://api.kde.org/kmacroexpander.html#expandMacros)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    /// ` map: Map_QChar_constu8 `
    ///
    /// ` c: QChar `
    ///
    pub fn expandMacros(allocator: std.mem.Allocator, str: []const u8, map: Map_QChar_constu8, c: anytype) []const u8 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const map_count = map.count();
        const map_keys = allocator.alloc(QtC.QChar, map_count) catch @panic("KMacroExpander.expandMacros: Memory allocation failed");
        defer allocator.free(map_keys);
        const map_values = allocator.alloc(qtc.libqt_string, map_count) catch @panic("KMacroExpander.expandMacros: Memory allocation failed");
        defer allocator.free(map_values);
        var i: usize = 0;
        var map_it = map.iterator();
        while (map_it.next()) |it_entry| : (i += 1) {
            const map_key = it_entry.key_ptr.*;
            map_keys[i] = @ptrCast(map_key.ptr);
            const value = it_entry.value_ptr.*;
            map_values[i] = qtc.libqt_string{
                .len = value.len,
                .data = value.ptr,
            };
        }
        const map_map = qtc.libqt_map{
            .len = map_count,
            .keys = @ptrCast(map_keys.ptr),
            .values = @ptrCast(map_values.ptr),
        };
        comptime _ = @TypeOf(c)._is_QChar;
        var _str = qtc.KMacroExpander_ExpandMacros(str_str, map_map, @ptrCast(c.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KMacroExpander.expandMacros: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `expandMacrosShellQuote` instead
    ///
    pub const ExpandMacrosShellQuote = expandMacrosShellQuote;

    /// ### [Upstream resources](https://api.kde.org/kmacroexpander.html#expandMacrosShellQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    /// ` map: Map_QChar_constu8 `
    ///
    /// ` c: QChar `
    ///
    pub fn expandMacrosShellQuote(allocator: std.mem.Allocator, str: []const u8, map: Map_QChar_constu8, c: anytype) []const u8 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const map_count = map.count();
        const map_keys = allocator.alloc(QtC.QChar, map_count) catch @panic("KMacroExpander.expandMacrosShellQuote: Memory allocation failed");
        defer allocator.free(map_keys);
        const map_values = allocator.alloc(qtc.libqt_string, map_count) catch @panic("KMacroExpander.expandMacrosShellQuote: Memory allocation failed");
        defer allocator.free(map_values);
        var i: usize = 0;
        var map_it = map.iterator();
        while (map_it.next()) |it_entry| : (i += 1) {
            const map_key = it_entry.key_ptr.*;
            map_keys[i] = @ptrCast(map_key.ptr);
            const value = it_entry.value_ptr.*;
            map_values[i] = qtc.libqt_string{
                .len = value.len,
                .data = value.ptr,
            };
        }
        const map_map = qtc.libqt_map{
            .len = map_count,
            .keys = @ptrCast(map_keys.ptr),
            .values = @ptrCast(map_values.ptr),
        };
        comptime _ = @TypeOf(c)._is_QChar;
        var _str = qtc.KMacroExpander_ExpandMacrosShellQuote(str_str, map_map, @ptrCast(c.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KMacroExpander.expandMacrosShellQuote: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `expandMacros2` instead
    ///
    pub const ExpandMacros2 = expandMacros2;

    /// ### [Upstream resources](https://api.kde.org/kmacroexpander.html#expandMacros)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    /// ` map: Map_constu8_constu8 `
    ///
    /// ` c: QChar `
    ///
    pub fn expandMacros2(allocator: std.mem.Allocator, str: []const u8, map: Map_constu8_constu8, c: anytype) []const u8 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const map_count = map.count();
        const map_keys = allocator.alloc(qtc.libqt_string, map_count) catch @panic("KMacroExpander.expandMacros2: Memory allocation failed");
        defer allocator.free(map_keys);
        const map_values = allocator.alloc(qtc.libqt_string, map_count) catch @panic("KMacroExpander.expandMacros2: Memory allocation failed");
        defer allocator.free(map_values);
        var i: usize = 0;
        var map_it = map.iterator();
        while (map_it.next()) |it_entry| : (i += 1) {
            const map_key = it_entry.key_ptr.*;
            map_keys[i] = qtc.libqt_string{
                .len = map_key.len,
                .data = map_key.ptr,
            };
            const value = it_entry.value_ptr.*;
            map_values[i] = qtc.libqt_string{
                .len = value.len,
                .data = value.ptr,
            };
        }
        const map_map = qtc.libqt_map{
            .len = map_count,
            .keys = @ptrCast(map_keys.ptr),
            .values = @ptrCast(map_values.ptr),
        };
        comptime _ = @TypeOf(c)._is_QChar;
        var _str = qtc.KMacroExpander_ExpandMacros2(str_str, map_map, @ptrCast(c.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KMacroExpander.expandMacros2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `expandMacrosShellQuote2` instead
    ///
    pub const ExpandMacrosShellQuote2 = expandMacrosShellQuote2;

    /// ### [Upstream resources](https://api.kde.org/kmacroexpander.html#expandMacrosShellQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    /// ` map: Map_constu8_constu8 `
    ///
    /// ` c: QChar `
    ///
    pub fn expandMacrosShellQuote2(allocator: std.mem.Allocator, str: []const u8, map: Map_constu8_constu8, c: anytype) []const u8 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const map_count = map.count();
        const map_keys = allocator.alloc(qtc.libqt_string, map_count) catch @panic("KMacroExpander.expandMacrosShellQuote2: Memory allocation failed");
        defer allocator.free(map_keys);
        const map_values = allocator.alloc(qtc.libqt_string, map_count) catch @panic("KMacroExpander.expandMacrosShellQuote2: Memory allocation failed");
        defer allocator.free(map_values);
        var i: usize = 0;
        var map_it = map.iterator();
        while (map_it.next()) |it_entry| : (i += 1) {
            const map_key = it_entry.key_ptr.*;
            map_keys[i] = qtc.libqt_string{
                .len = map_key.len,
                .data = map_key.ptr,
            };
            const value = it_entry.value_ptr.*;
            map_values[i] = qtc.libqt_string{
                .len = value.len,
                .data = value.ptr,
            };
        }
        const map_map = qtc.libqt_map{
            .len = map_count,
            .keys = @ptrCast(map_keys.ptr),
            .values = @ptrCast(map_values.ptr),
        };
        comptime _ = @TypeOf(c)._is_QChar;
        var _str = qtc.KMacroExpander_ExpandMacrosShellQuote2(str_str, map_map, @ptrCast(c.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KMacroExpander.expandMacrosShellQuote2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `expandMacros3` instead
    ///
    pub const ExpandMacros3 = expandMacros3;

    /// ### [Upstream resources](https://api.kde.org/kmacroexpander.html#expandMacros)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    /// ` map: Map_QChar_constconstu8 `
    ///
    /// ` c: QChar `
    ///
    pub fn expandMacros3(allocator: std.mem.Allocator, str: []const u8, map: Map_QChar_constconstu8, c: anytype) []const u8 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const map_count = map.count();
        const map_keys = allocator.alloc(QtC.QChar, map_count) catch @panic("KMacroExpander.expandMacros3: Memory allocation failed");
        defer allocator.free(map_keys);
        const map_values = allocator.alloc(qtc.libqt_list, map_count) catch @panic("KMacroExpander.expandMacros3: Memory allocation failed");
        defer allocator.free(map_values);
        const map_inners = allocator.alloc([]qtc.libqt_string, map_count) catch @panic("KMacroExpander.expandMacros3: Memory allocation failed");
        defer {
            for (map_inners) |map_inner|
                allocator.free(map_inner);
            allocator.free(map_inners);
        }
        var i: usize = 0;
        var map_it = map.iterator();
        while (map_it.next()) |it_entry| : (i += 1) {
            const map_key = it_entry.key_ptr.*;
            map_keys[i] = @ptrCast(map_key.ptr);
            map_values[i].len = it_entry.value_ptr.*.len;
            const map_val = allocator.alloc(qtc.libqt_string, it_entry.value_ptr.len) catch @panic("KMacroExpander.expandMacros3: Memory allocation failed");
            map_inners[i] = map_val;
            for (it_entry.value_ptr.*, 0..) |str_item, j|
                map_val[j] = qtc.libqt_string{
                    .len = str_item.len,
                    .data = str_item.ptr,
                };
            map_values[i].data = @ptrCast(map_val.ptr);
        }
        const map_map = qtc.libqt_map{
            .len = map_count,
            .keys = @ptrCast(map_keys.ptr),
            .values = @ptrCast(map_values.ptr),
        };
        comptime _ = @TypeOf(c)._is_QChar;
        var _str = qtc.KMacroExpander_ExpandMacros3(str_str, map_map, @ptrCast(c.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KMacroExpander.expandMacros3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `expandMacros4` instead
    ///
    pub const ExpandMacros4 = expandMacros4;

    /// ### [Upstream resources](https://api.kde.org/kmacroexpander.html#expandMacros)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    /// ` map: Map_constu8_constconstu8 `
    ///
    /// ` c: QChar `
    ///
    pub fn expandMacros4(allocator: std.mem.Allocator, str: []const u8, map: Map_constu8_constconstu8, c: anytype) []const u8 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const map_count = map.count();
        const map_keys = allocator.alloc(qtc.libqt_string, map_count) catch @panic("KMacroExpander.expandMacros4: Memory allocation failed");
        defer allocator.free(map_keys);
        const map_values = allocator.alloc(qtc.libqt_list, map_count) catch @panic("KMacroExpander.expandMacros4: Memory allocation failed");
        defer allocator.free(map_values);
        const map_inners = allocator.alloc([]qtc.libqt_string, map_count) catch @panic("KMacroExpander.expandMacros4: Memory allocation failed");
        defer {
            for (map_inners) |map_inner|
                allocator.free(map_inner);
            allocator.free(map_inners);
        }
        var i: usize = 0;
        var map_it = map.iterator();
        while (map_it.next()) |it_entry| : (i += 1) {
            const map_key = it_entry.key_ptr.*;
            map_keys[i] = qtc.libqt_string{
                .len = map_key.len,
                .data = map_key.ptr,
            };
            map_values[i].len = it_entry.value_ptr.*.len;
            const map_val = allocator.alloc(qtc.libqt_string, it_entry.value_ptr.len) catch @panic("KMacroExpander.expandMacros4: Memory allocation failed");
            map_inners[i] = map_val;
            for (it_entry.value_ptr.*, 0..) |str_item, j|
                map_val[j] = qtc.libqt_string{
                    .len = str_item.len,
                    .data = str_item.ptr,
                };
            map_values[i].data = @ptrCast(map_val.ptr);
        }
        const map_map = qtc.libqt_map{
            .len = map_count,
            .keys = @ptrCast(map_keys.ptr),
            .values = @ptrCast(map_values.ptr),
        };
        comptime _ = @TypeOf(c)._is_QChar;
        var _str = qtc.KMacroExpander_ExpandMacros4(str_str, map_map, @ptrCast(c.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KMacroExpander.expandMacros4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `expandMacrosShellQuote3` instead
    ///
    pub const ExpandMacrosShellQuote3 = expandMacrosShellQuote3;

    /// ### [Upstream resources](https://api.kde.org/kmacroexpander.html#expandMacrosShellQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    /// ` map: Map_QChar_constconstu8 `
    ///
    /// ` c: QChar `
    ///
    pub fn expandMacrosShellQuote3(allocator: std.mem.Allocator, str: []const u8, map: Map_QChar_constconstu8, c: anytype) []const u8 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const map_count = map.count();
        const map_keys = allocator.alloc(QtC.QChar, map_count) catch @panic("KMacroExpander.expandMacrosShellQuote3: Memory allocation failed");
        defer allocator.free(map_keys);
        const map_values = allocator.alloc(qtc.libqt_list, map_count) catch @panic("KMacroExpander.expandMacrosShellQuote3: Memory allocation failed");
        defer allocator.free(map_values);
        const map_inners = allocator.alloc([]qtc.libqt_string, map_count) catch @panic("KMacroExpander.expandMacrosShellQuote3: Memory allocation failed");
        defer {
            for (map_inners) |map_inner|
                allocator.free(map_inner);
            allocator.free(map_inners);
        }
        var i: usize = 0;
        var map_it = map.iterator();
        while (map_it.next()) |it_entry| : (i += 1) {
            const map_key = it_entry.key_ptr.*;
            map_keys[i] = @ptrCast(map_key.ptr);
            map_values[i].len = it_entry.value_ptr.*.len;
            const map_val = allocator.alloc(qtc.libqt_string, it_entry.value_ptr.len) catch @panic("KMacroExpander.expandMacrosShellQuote3: Memory allocation failed");
            map_inners[i] = map_val;
            for (it_entry.value_ptr.*, 0..) |str_item, j|
                map_val[j] = qtc.libqt_string{
                    .len = str_item.len,
                    .data = str_item.ptr,
                };
            map_values[i].data = @ptrCast(map_val.ptr);
        }
        const map_map = qtc.libqt_map{
            .len = map_count,
            .keys = @ptrCast(map_keys.ptr),
            .values = @ptrCast(map_values.ptr),
        };
        comptime _ = @TypeOf(c)._is_QChar;
        var _str = qtc.KMacroExpander_ExpandMacrosShellQuote3(str_str, map_map, @ptrCast(c.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KMacroExpander.expandMacrosShellQuote3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `expandMacrosShellQuote4` instead
    ///
    pub const ExpandMacrosShellQuote4 = expandMacrosShellQuote4;

    /// ### [Upstream resources](https://api.kde.org/kmacroexpander.html#expandMacrosShellQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    /// ` map: Map_constu8_constconstu8 `
    ///
    /// ` c: QChar `
    ///
    pub fn expandMacrosShellQuote4(allocator: std.mem.Allocator, str: []const u8, map: Map_constu8_constconstu8, c: anytype) []const u8 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const map_count = map.count();
        const map_keys = allocator.alloc(qtc.libqt_string, map_count) catch @panic("KMacroExpander.expandMacrosShellQuote4: Memory allocation failed");
        defer allocator.free(map_keys);
        const map_values = allocator.alloc(qtc.libqt_list, map_count) catch @panic("KMacroExpander.expandMacrosShellQuote4: Memory allocation failed");
        defer allocator.free(map_values);
        const map_inners = allocator.alloc([]qtc.libqt_string, map_count) catch @panic("KMacroExpander.expandMacrosShellQuote4: Memory allocation failed");
        defer {
            for (map_inners) |map_inner|
                allocator.free(map_inner);
            allocator.free(map_inners);
        }
        var i: usize = 0;
        var map_it = map.iterator();
        while (map_it.next()) |it_entry| : (i += 1) {
            const map_key = it_entry.key_ptr.*;
            map_keys[i] = qtc.libqt_string{
                .len = map_key.len,
                .data = map_key.ptr,
            };
            map_values[i].len = it_entry.value_ptr.*.len;
            const map_val = allocator.alloc(qtc.libqt_string, it_entry.value_ptr.len) catch @panic("KMacroExpander.expandMacrosShellQuote4: Memory allocation failed");
            map_inners[i] = map_val;
            for (it_entry.value_ptr.*, 0..) |str_item, j|
                map_val[j] = qtc.libqt_string{
                    .len = str_item.len,
                    .data = str_item.ptr,
                };
            map_values[i].data = @ptrCast(map_val.ptr);
        }
        const map_map = qtc.libqt_map{
            .len = map_count,
            .keys = @ptrCast(map_keys.ptr),
            .values = @ptrCast(map_values.ptr),
        };
        comptime _ = @TypeOf(c)._is_QChar;
        var _str = qtc.KMacroExpander_ExpandMacrosShellQuote4(str_str, map_map, @ptrCast(c.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KMacroExpander.expandMacrosShellQuote4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }
};
