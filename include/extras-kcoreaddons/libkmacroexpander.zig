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

    /// New constructs a new KMacroExpanderBase object.
    ///
    pub fn New() KMacroExpanderBase {
        return .{ .ptr = qtc.KMacroExpanderBase_new() };
    }

    /// New2 constructs a new KMacroExpanderBase object.
    ///
    /// ## Parameter(s):
    ///
    /// ` c: QChar `
    ///
    pub fn New2(c: anytype) KMacroExpanderBase {
        comptime _ = @TypeOf(c)._is_QChar;
        return .{ .ptr = qtc.KMacroExpanderBase_new2(@ptrCast(c.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#expandMacros)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMacroExpanderBase `
    ///
    /// ` str: []const u8 `
    ///
    pub fn ExpandMacros(self: KMacroExpanderBase, str: []const u8) void {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        qtc.KMacroExpanderBase_ExpandMacros(@ptrCast(self.ptr), str_str);
    }

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
    pub fn ExpandMacrosShellQuote(self: KMacroExpanderBase, str: []const u8, pos: *i32) bool {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.KMacroExpanderBase_ExpandMacrosShellQuote(@ptrCast(self.ptr), str_str, @ptrCast(pos));
    }

    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#expandMacrosShellQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMacroExpanderBase `
    ///
    /// ` str: []const u8 `
    ///
    pub fn ExpandMacrosShellQuote2(self: KMacroExpanderBase, str: []const u8) bool {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.KMacroExpanderBase_ExpandMacrosShellQuote2(@ptrCast(self.ptr), str_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#setEscapeChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMacroExpanderBase `
    ///
    /// ` c: QChar `
    ///
    pub fn SetEscapeChar(self: KMacroExpanderBase, c: anytype) void {
        comptime _ = @TypeOf(c)._is_QChar;
        qtc.KMacroExpanderBase_SetEscapeChar(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#escapeChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMacroExpanderBase `
    ///
    pub fn EscapeChar(self: KMacroExpanderBase) QChar {
        return .{ .ptr = qtc.KMacroExpanderBase_EscapeChar(@ptrCast(self.ptr)) };
    }

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
    /// ` retVal: []const []const u8 `
    ///
    pub fn ExpandPlainMacro(self: KMacroExpanderBase, allocator: std.mem.Allocator, str: []const u8, pos: i32, retVal: []const []const u8) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const retVal_arr = allocator.alloc(qtc.libqt_string, retVal.len) catch @panic("kmacroexpanderbase.ExpandPlainMacro: Memory allocation failed");
        defer allocator.free(retVal_arr);
        for (retVal, 0..retVal.len) |item, i|
            retVal_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const retVal_list = qtc.libqt_list{
            .len = retVal.len,
            .data = retVal_arr.ptr,
        };
        return qtc.KMacroExpanderBase_ExpandPlainMacro(@ptrCast(self.ptr), str_str, @bitCast(pos), retVal_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#expandPlainMacro)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KMacroExpanderBase `
    ///
    /// ` callback: *const fn (self: KMacroExpanderBase, str: [*:0]const u8, pos: i32, retVal: ?[*:null]?[*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnExpandPlainMacro(self: KMacroExpanderBase, callback: *const fn (KMacroExpanderBase, [*:0]const u8, i32, ?[*:null]?[*:0]const u8) callconv(.c) i32) void {
        qtc.KMacroExpanderBase_OnExpandPlainMacro(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperExpandPlainMacro` instead
    ///
    pub const QBaseExpandPlainMacro = SuperExpandPlainMacro;

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
    /// ` retVal: []const []const u8 `
    ///
    pub fn SuperExpandPlainMacro(self: KMacroExpanderBase, allocator: std.mem.Allocator, str: []const u8, pos: i32, retVal: []const []const u8) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const retVal_arr = allocator.alloc(qtc.libqt_string, retVal.len) catch @panic("kmacroexpanderbase.ExpandPlainMacro: Memory allocation failed");
        defer allocator.free(retVal_arr);
        for (retVal, 0..retVal.len) |item, i|
            retVal_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const retVal_list = qtc.libqt_list{
            .len = retVal.len,
            .data = retVal_arr.ptr,
        };
        return qtc.KMacroExpanderBase_SuperExpandPlainMacro(@ptrCast(self.ptr), str_str, @bitCast(pos), retVal_list);
    }

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
    /// ` retVal: []const []const u8 `
    ///
    pub fn ExpandEscapedMacro(self: KMacroExpanderBase, allocator: std.mem.Allocator, str: []const u8, pos: i32, retVal: []const []const u8) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const retVal_arr = allocator.alloc(qtc.libqt_string, retVal.len) catch @panic("kmacroexpanderbase.ExpandEscapedMacro: Memory allocation failed");
        defer allocator.free(retVal_arr);
        for (retVal, 0..retVal.len) |item, i|
            retVal_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const retVal_list = qtc.libqt_list{
            .len = retVal.len,
            .data = retVal_arr.ptr,
        };
        return qtc.KMacroExpanderBase_ExpandEscapedMacro(@ptrCast(self.ptr), str_str, @bitCast(pos), retVal_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#expandEscapedMacro)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KMacroExpanderBase `
    ///
    /// ` callback: *const fn (self: KMacroExpanderBase, str: [*:0]const u8, pos: i32, retVal: ?[*:null]?[*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnExpandEscapedMacro(self: KMacroExpanderBase, callback: *const fn (KMacroExpanderBase, [*:0]const u8, i32, ?[*:null]?[*:0]const u8) callconv(.c) i32) void {
        qtc.KMacroExpanderBase_OnExpandEscapedMacro(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperExpandEscapedMacro` instead
    ///
    pub const QBaseExpandEscapedMacro = SuperExpandEscapedMacro;

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
    /// ` retVal: []const []const u8 `
    ///
    pub fn SuperExpandEscapedMacro(self: KMacroExpanderBase, allocator: std.mem.Allocator, str: []const u8, pos: i32, retVal: []const []const u8) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const retVal_arr = allocator.alloc(qtc.libqt_string, retVal.len) catch @panic("kmacroexpanderbase.ExpandEscapedMacro: Memory allocation failed");
        defer allocator.free(retVal_arr);
        for (retVal, 0..retVal.len) |item, i|
            retVal_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const retVal_list = qtc.libqt_list{
            .len = retVal.len,
            .data = retVal_arr.ptr,
        };
        return qtc.KMacroExpanderBase_SuperExpandEscapedMacro(@ptrCast(self.ptr), str_str, @bitCast(pos), retVal_list);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#dtor.KMacroExpanderBase)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KMacroExpanderBase `
    ///
    pub fn Delete(self: KMacroExpanderBase) void {
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

    /// New constructs a new KWordMacroExpander object.
    ///
    pub fn New() KWordMacroExpander {
        return .{ .ptr = qtc.KWordMacroExpander_new() };
    }

    /// New2 constructs a new KWordMacroExpander object.
    ///
    /// ## Parameter(s):
    ///
    /// ` c: QChar `
    ///
    pub fn New2(c: anytype) KWordMacroExpander {
        comptime _ = @TypeOf(c)._is_QChar;
        return .{ .ptr = qtc.KWordMacroExpander_new2(@ptrCast(c.ptr)) };
    }

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
    /// ` retVal: []const []const u8 `
    ///
    pub fn ExpandPlainMacro(self: KWordMacroExpander, allocator: std.mem.Allocator, str: []const u8, pos: i32, retVal: []const []const u8) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const retVal_arr = allocator.alloc(qtc.libqt_string, retVal.len) catch @panic("kwordmacroexpander.ExpandPlainMacro: Memory allocation failed");
        defer allocator.free(retVal_arr);
        for (retVal, 0..retVal.len) |item, i|
            retVal_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const retVal_list = qtc.libqt_list{
            .len = retVal.len,
            .data = retVal_arr.ptr,
        };
        return qtc.KWordMacroExpander_ExpandPlainMacro(@ptrCast(self.ptr), str_str, @bitCast(pos), retVal_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kwordmacroexpander.html#expandPlainMacro)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KWordMacroExpander `
    ///
    /// ` callback: *const fn (self: KWordMacroExpander, str: [*:0]const u8, pos: i32, retVal: ?[*:null]?[*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnExpandPlainMacro(self: KWordMacroExpander, callback: *const fn (KWordMacroExpander, [*:0]const u8, i32, ?[*:null]?[*:0]const u8) callconv(.c) i32) void {
        qtc.KWordMacroExpander_OnExpandPlainMacro(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperExpandPlainMacro` instead
    ///
    pub const QBaseExpandPlainMacro = SuperExpandPlainMacro;

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
    /// ` retVal: []const []const u8 `
    ///
    pub fn SuperExpandPlainMacro(self: KWordMacroExpander, allocator: std.mem.Allocator, str: []const u8, pos: i32, retVal: []const []const u8) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const retVal_arr = allocator.alloc(qtc.libqt_string, retVal.len) catch @panic("kwordmacroexpander.ExpandPlainMacro: Memory allocation failed");
        defer allocator.free(retVal_arr);
        for (retVal, 0..retVal.len) |item, i|
            retVal_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const retVal_list = qtc.libqt_list{
            .len = retVal.len,
            .data = retVal_arr.ptr,
        };
        return qtc.KWordMacroExpander_SuperExpandPlainMacro(@ptrCast(self.ptr), str_str, @bitCast(pos), retVal_list);
    }

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
    /// ` retVal: []const []const u8 `
    ///
    pub fn ExpandEscapedMacro(self: KWordMacroExpander, allocator: std.mem.Allocator, str: []const u8, pos: i32, retVal: []const []const u8) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const retVal_arr = allocator.alloc(qtc.libqt_string, retVal.len) catch @panic("kwordmacroexpander.ExpandEscapedMacro: Memory allocation failed");
        defer allocator.free(retVal_arr);
        for (retVal, 0..retVal.len) |item, i|
            retVal_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const retVal_list = qtc.libqt_list{
            .len = retVal.len,
            .data = retVal_arr.ptr,
        };
        return qtc.KWordMacroExpander_ExpandEscapedMacro(@ptrCast(self.ptr), str_str, @bitCast(pos), retVal_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kwordmacroexpander.html#expandEscapedMacro)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KWordMacroExpander `
    ///
    /// ` callback: *const fn (self: KWordMacroExpander, str: [*:0]const u8, pos: i32, retVal: ?[*:null]?[*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnExpandEscapedMacro(self: KWordMacroExpander, callback: *const fn (KWordMacroExpander, [*:0]const u8, i32, ?[*:null]?[*:0]const u8) callconv(.c) i32) void {
        qtc.KWordMacroExpander_OnExpandEscapedMacro(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperExpandEscapedMacro` instead
    ///
    pub const QBaseExpandEscapedMacro = SuperExpandEscapedMacro;

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
    /// ` retVal: []const []const u8 `
    ///
    pub fn SuperExpandEscapedMacro(self: KWordMacroExpander, allocator: std.mem.Allocator, str: []const u8, pos: i32, retVal: []const []const u8) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const retVal_arr = allocator.alloc(qtc.libqt_string, retVal.len) catch @panic("kwordmacroexpander.ExpandEscapedMacro: Memory allocation failed");
        defer allocator.free(retVal_arr);
        for (retVal, 0..retVal.len) |item, i|
            retVal_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const retVal_list = qtc.libqt_list{
            .len = retVal.len,
            .data = retVal_arr.ptr,
        };
        return qtc.KWordMacroExpander_SuperExpandEscapedMacro(@ptrCast(self.ptr), str_str, @bitCast(pos), retVal_list);
    }

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
    /// ` retVal: []const []const u8 `
    ///
    pub fn ExpandMacro(self: KWordMacroExpander, allocator: std.mem.Allocator, str: []const u8, retVal: []const []const u8) bool {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const retVal_arr = allocator.alloc(qtc.libqt_string, retVal.len) catch @panic("kwordmacroexpander.ExpandMacro: Memory allocation failed");
        defer allocator.free(retVal_arr);
        for (retVal, 0..retVal.len) |item, i|
            retVal_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const retVal_list = qtc.libqt_list{
            .len = retVal.len,
            .data = retVal_arr.ptr,
        };
        return qtc.KWordMacroExpander_ExpandMacro(@ptrCast(self.ptr), str_str, retVal_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kwordmacroexpander.html#expandMacro)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KWordMacroExpander `
    ///
    /// ` callback: *const fn (self: KWordMacroExpander, str: [*:0]const u8, retVal: ?[*:null]?[*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnExpandMacro(self: KWordMacroExpander, callback: *const fn (KWordMacroExpander, [*:0]const u8, ?[*:null]?[*:0]const u8) callconv(.c) bool) void {
        qtc.KWordMacroExpander_OnExpandMacro(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperExpandMacro` instead
    ///
    pub const QBaseExpandMacro = SuperExpandMacro;

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
    /// ` retVal: []const []const u8 `
    ///
    pub fn SuperExpandMacro(self: KWordMacroExpander, allocator: std.mem.Allocator, str: []const u8, retVal: []const []const u8) bool {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const retVal_arr = allocator.alloc(qtc.libqt_string, retVal.len) catch @panic("kwordmacroexpander.ExpandMacro: Memory allocation failed");
        defer allocator.free(retVal_arr);
        for (retVal, 0..retVal.len) |item, i|
            retVal_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const retVal_list = qtc.libqt_list{
            .len = retVal.len,
            .data = retVal_arr.ptr,
        };
        return qtc.KWordMacroExpander_SuperExpandMacro(@ptrCast(self.ptr), str_str, retVal_list);
    }

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
    pub fn ExpandMacros(self: KWordMacroExpander, str: []const u8) void {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        qtc.KMacroExpanderBase_ExpandMacros(@ptrCast(self.ptr), str_str);
    }

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
    pub fn ExpandMacrosShellQuote(self: KWordMacroExpander, str: []const u8, pos: *i32) bool {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.KMacroExpanderBase_ExpandMacrosShellQuote(@ptrCast(self.ptr), str_str, @ptrCast(pos));
    }

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
    pub fn ExpandMacrosShellQuote2(self: KWordMacroExpander, str: []const u8) bool {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.KMacroExpanderBase_ExpandMacrosShellQuote2(@ptrCast(self.ptr), str_str);
    }

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
    pub fn SetEscapeChar(self: KWordMacroExpander, c: anytype) void {
        comptime _ = @TypeOf(c)._is_QChar;
        qtc.KMacroExpanderBase_SetEscapeChar(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// Inherited from KMacroExpanderBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#escapeChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWordMacroExpander `
    ///
    pub fn EscapeChar(self: KWordMacroExpander) QChar {
        return .{ .ptr = qtc.KMacroExpanderBase_EscapeChar(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kwordmacroexpander.html#dtor.KWordMacroExpander)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KWordMacroExpander `
    ///
    pub fn Delete(self: KWordMacroExpander) void {
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

    /// New constructs a new KCharMacroExpander object.
    ///
    pub fn New() KCharMacroExpander {
        return .{ .ptr = qtc.KCharMacroExpander_new() };
    }

    /// New2 constructs a new KCharMacroExpander object.
    ///
    /// ## Parameter(s):
    ///
    /// ` c: QChar `
    ///
    pub fn New2(c: anytype) KCharMacroExpander {
        comptime _ = @TypeOf(c)._is_QChar;
        return .{ .ptr = qtc.KCharMacroExpander_new2(@ptrCast(c.ptr)) };
    }

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
    /// ` retVal: []const []const u8 `
    ///
    pub fn ExpandPlainMacro(self: KCharMacroExpander, allocator: std.mem.Allocator, str: []const u8, pos: i32, retVal: []const []const u8) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const retVal_arr = allocator.alloc(qtc.libqt_string, retVal.len) catch @panic("kcharmacroexpander.ExpandPlainMacro: Memory allocation failed");
        defer allocator.free(retVal_arr);
        for (retVal, 0..retVal.len) |item, i|
            retVal_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const retVal_list = qtc.libqt_list{
            .len = retVal.len,
            .data = retVal_arr.ptr,
        };
        return qtc.KCharMacroExpander_ExpandPlainMacro(@ptrCast(self.ptr), str_str, @bitCast(pos), retVal_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kcharmacroexpander.html#expandPlainMacro)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCharMacroExpander `
    ///
    /// ` callback: *const fn (self: KCharMacroExpander, str: [*:0]const u8, pos: i32, retVal: ?[*:null]?[*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnExpandPlainMacro(self: KCharMacroExpander, callback: *const fn (KCharMacroExpander, [*:0]const u8, i32, ?[*:null]?[*:0]const u8) callconv(.c) i32) void {
        qtc.KCharMacroExpander_OnExpandPlainMacro(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperExpandPlainMacro` instead
    ///
    pub const QBaseExpandPlainMacro = SuperExpandPlainMacro;

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
    /// ` retVal: []const []const u8 `
    ///
    pub fn SuperExpandPlainMacro(self: KCharMacroExpander, allocator: std.mem.Allocator, str: []const u8, pos: i32, retVal: []const []const u8) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const retVal_arr = allocator.alloc(qtc.libqt_string, retVal.len) catch @panic("kcharmacroexpander.ExpandPlainMacro: Memory allocation failed");
        defer allocator.free(retVal_arr);
        for (retVal, 0..retVal.len) |item, i|
            retVal_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const retVal_list = qtc.libqt_list{
            .len = retVal.len,
            .data = retVal_arr.ptr,
        };
        return qtc.KCharMacroExpander_SuperExpandPlainMacro(@ptrCast(self.ptr), str_str, @bitCast(pos), retVal_list);
    }

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
    /// ` retVal: []const []const u8 `
    ///
    pub fn ExpandEscapedMacro(self: KCharMacroExpander, allocator: std.mem.Allocator, str: []const u8, pos: i32, retVal: []const []const u8) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const retVal_arr = allocator.alloc(qtc.libqt_string, retVal.len) catch @panic("kcharmacroexpander.ExpandEscapedMacro: Memory allocation failed");
        defer allocator.free(retVal_arr);
        for (retVal, 0..retVal.len) |item, i|
            retVal_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const retVal_list = qtc.libqt_list{
            .len = retVal.len,
            .data = retVal_arr.ptr,
        };
        return qtc.KCharMacroExpander_ExpandEscapedMacro(@ptrCast(self.ptr), str_str, @bitCast(pos), retVal_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kcharmacroexpander.html#expandEscapedMacro)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCharMacroExpander `
    ///
    /// ` callback: *const fn (self: KCharMacroExpander, str: [*:0]const u8, pos: i32, retVal: ?[*:null]?[*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnExpandEscapedMacro(self: KCharMacroExpander, callback: *const fn (KCharMacroExpander, [*:0]const u8, i32, ?[*:null]?[*:0]const u8) callconv(.c) i32) void {
        qtc.KCharMacroExpander_OnExpandEscapedMacro(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperExpandEscapedMacro` instead
    ///
    pub const QBaseExpandEscapedMacro = SuperExpandEscapedMacro;

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
    /// ` retVal: []const []const u8 `
    ///
    pub fn SuperExpandEscapedMacro(self: KCharMacroExpander, allocator: std.mem.Allocator, str: []const u8, pos: i32, retVal: []const []const u8) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const retVal_arr = allocator.alloc(qtc.libqt_string, retVal.len) catch @panic("kcharmacroexpander.ExpandEscapedMacro: Memory allocation failed");
        defer allocator.free(retVal_arr);
        for (retVal, 0..retVal.len) |item, i|
            retVal_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const retVal_list = qtc.libqt_list{
            .len = retVal.len,
            .data = retVal_arr.ptr,
        };
        return qtc.KCharMacroExpander_SuperExpandEscapedMacro(@ptrCast(self.ptr), str_str, @bitCast(pos), retVal_list);
    }

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
    /// ` retVal: []const []const u8 `
    ///
    pub fn ExpandMacro(self: KCharMacroExpander, allocator: std.mem.Allocator, chr: anytype, retVal: []const []const u8) bool {
        comptime _ = @TypeOf(chr)._is_QChar;
        const retVal_arr = allocator.alloc(qtc.libqt_string, retVal.len) catch @panic("kcharmacroexpander.ExpandMacro: Memory allocation failed");
        defer allocator.free(retVal_arr);
        for (retVal, 0..retVal.len) |item, i|
            retVal_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const retVal_list = qtc.libqt_list{
            .len = retVal.len,
            .data = retVal_arr.ptr,
        };
        return qtc.KCharMacroExpander_ExpandMacro(@ptrCast(self.ptr), @ptrCast(chr.ptr), retVal_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kcharmacroexpander.html#expandMacro)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCharMacroExpander `
    ///
    /// ` callback: *const fn (self: KCharMacroExpander, chr: QChar, retVal: ?[*:null]?[*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnExpandMacro(self: KCharMacroExpander, callback: *const fn (KCharMacroExpander, QChar, ?[*:null]?[*:0]const u8) callconv(.c) bool) void {
        qtc.KCharMacroExpander_OnExpandMacro(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperExpandMacro` instead
    ///
    pub const QBaseExpandMacro = SuperExpandMacro;

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
    /// ` retVal: []const []const u8 `
    ///
    pub fn SuperExpandMacro(self: KCharMacroExpander, allocator: std.mem.Allocator, chr: anytype, retVal: []const []const u8) bool {
        comptime _ = @TypeOf(chr)._is_QChar;
        const retVal_arr = allocator.alloc(qtc.libqt_string, retVal.len) catch @panic("kcharmacroexpander.ExpandMacro: Memory allocation failed");
        defer allocator.free(retVal_arr);
        for (retVal, 0..retVal.len) |item, i|
            retVal_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const retVal_list = qtc.libqt_list{
            .len = retVal.len,
            .data = retVal_arr.ptr,
        };
        return qtc.KCharMacroExpander_SuperExpandMacro(@ptrCast(self.ptr), @ptrCast(chr.ptr), retVal_list);
    }

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
    pub fn ExpandMacros(self: KCharMacroExpander, str: []const u8) void {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        qtc.KMacroExpanderBase_ExpandMacros(@ptrCast(self.ptr), str_str);
    }

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
    pub fn ExpandMacrosShellQuote(self: KCharMacroExpander, str: []const u8, pos: *i32) bool {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.KMacroExpanderBase_ExpandMacrosShellQuote(@ptrCast(self.ptr), str_str, @ptrCast(pos));
    }

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
    pub fn ExpandMacrosShellQuote2(self: KCharMacroExpander, str: []const u8) bool {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.KMacroExpanderBase_ExpandMacrosShellQuote2(@ptrCast(self.ptr), str_str);
    }

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
    pub fn SetEscapeChar(self: KCharMacroExpander, c: anytype) void {
        comptime _ = @TypeOf(c)._is_QChar;
        qtc.KMacroExpanderBase_SetEscapeChar(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// Inherited from KMacroExpanderBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#escapeChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCharMacroExpander `
    ///
    pub fn EscapeChar(self: KCharMacroExpander) QChar {
        return .{ .ptr = qtc.KMacroExpanderBase_EscapeChar(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kcharmacroexpander.html#dtor.KCharMacroExpander)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCharMacroExpander `
    ///
    pub fn Delete(self: KCharMacroExpander) void {
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

    /// ### [Upstream resources](https://api.kde.org/kmacroexpander.html#expandMacros)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: Map_QChar_constu8 `
    ///
    /// ` param3: QChar `
    ///
    pub fn ExpandMacros(allocator: std.mem.Allocator, param1: []const u8, param2: Map_QChar_constu8, param3: anytype) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_count = param2.count();
        const param2_keys = allocator.alloc(QtC.QChar, param2_count) catch @panic("kmacroexpander.ExpandMacros: Memory allocation failed");
        defer allocator.free(param2_keys);
        const param2_values = allocator.alloc(qtc.libqt_string, param2_count) catch @panic("kmacroexpander.ExpandMacros: Memory allocation failed");
        defer allocator.free(param2_values);
        var i: usize = 0;
        var param2_it = param2.iterator();
        while (param2_it.next()) |it_entry| : (i += 1) {
            const param2_key = it_entry.key_ptr.*;
            param2_keys[i] = @ptrCast(param2_key.ptr);
            const value = it_entry.value_ptr.*;
            param2_values[i] = qtc.libqt_string{
                .len = value.len,
                .data = value.ptr,
            };
        }
        const param2_map = qtc.libqt_map{
            .len = param2_count,
            .keys = @ptrCast(param2_keys.ptr),
            .values = @ptrCast(param2_values.ptr),
        };
        comptime _ = @TypeOf(param3)._is_QChar;
        var _str = qtc.KMacroExpander_ExpandMacros(param1_str, param2_map, @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmacroexpander.ExpandMacros: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kmacroexpander.html#expandMacrosShellQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: Map_QChar_constu8 `
    ///
    /// ` param3: QChar `
    ///
    pub fn ExpandMacrosShellQuote(allocator: std.mem.Allocator, param1: []const u8, param2: Map_QChar_constu8, param3: anytype) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_count = param2.count();
        const param2_keys = allocator.alloc(QtC.QChar, param2_count) catch @panic("kmacroexpander.ExpandMacrosShellQuote: Memory allocation failed");
        defer allocator.free(param2_keys);
        const param2_values = allocator.alloc(qtc.libqt_string, param2_count) catch @panic("kmacroexpander.ExpandMacrosShellQuote: Memory allocation failed");
        defer allocator.free(param2_values);
        var i: usize = 0;
        var param2_it = param2.iterator();
        while (param2_it.next()) |it_entry| : (i += 1) {
            const param2_key = it_entry.key_ptr.*;
            param2_keys[i] = @ptrCast(param2_key.ptr);
            const value = it_entry.value_ptr.*;
            param2_values[i] = qtc.libqt_string{
                .len = value.len,
                .data = value.ptr,
            };
        }
        const param2_map = qtc.libqt_map{
            .len = param2_count,
            .keys = @ptrCast(param2_keys.ptr),
            .values = @ptrCast(param2_values.ptr),
        };
        comptime _ = @TypeOf(param3)._is_QChar;
        var _str = qtc.KMacroExpander_ExpandMacrosShellQuote(param1_str, param2_map, @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmacroexpander.ExpandMacrosShellQuote: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kmacroexpander.html#expandMacros)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: Map_constu8_constu8 `
    ///
    /// ` param3: QChar `
    ///
    pub fn ExpandMacros2(allocator: std.mem.Allocator, param1: []const u8, param2: Map_constu8_constu8, param3: anytype) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_count = param2.count();
        const param2_keys = allocator.alloc(qtc.libqt_string, param2_count) catch @panic("kmacroexpander.ExpandMacros2: Memory allocation failed");
        defer allocator.free(param2_keys);
        const param2_values = allocator.alloc(qtc.libqt_string, param2_count) catch @panic("kmacroexpander.ExpandMacros2: Memory allocation failed");
        defer allocator.free(param2_values);
        var i: usize = 0;
        var param2_it = param2.iterator();
        while (param2_it.next()) |it_entry| : (i += 1) {
            const param2_key = it_entry.key_ptr.*;
            param2_keys[i] = qtc.libqt_string{
                .len = param2_key.len,
                .data = param2_key.ptr,
            };
            const value = it_entry.value_ptr.*;
            param2_values[i] = qtc.libqt_string{
                .len = value.len,
                .data = value.ptr,
            };
        }
        const param2_map = qtc.libqt_map{
            .len = param2_count,
            .keys = @ptrCast(param2_keys.ptr),
            .values = @ptrCast(param2_values.ptr),
        };
        comptime _ = @TypeOf(param3)._is_QChar;
        var _str = qtc.KMacroExpander_ExpandMacros2(param1_str, param2_map, @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmacroexpander.ExpandMacros2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kmacroexpander.html#expandMacrosShellQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: Map_constu8_constu8 `
    ///
    /// ` param3: QChar `
    ///
    pub fn ExpandMacrosShellQuote2(allocator: std.mem.Allocator, param1: []const u8, param2: Map_constu8_constu8, param3: anytype) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_count = param2.count();
        const param2_keys = allocator.alloc(qtc.libqt_string, param2_count) catch @panic("kmacroexpander.ExpandMacrosShellQuote2: Memory allocation failed");
        defer allocator.free(param2_keys);
        const param2_values = allocator.alloc(qtc.libqt_string, param2_count) catch @panic("kmacroexpander.ExpandMacrosShellQuote2: Memory allocation failed");
        defer allocator.free(param2_values);
        var i: usize = 0;
        var param2_it = param2.iterator();
        while (param2_it.next()) |it_entry| : (i += 1) {
            const param2_key = it_entry.key_ptr.*;
            param2_keys[i] = qtc.libqt_string{
                .len = param2_key.len,
                .data = param2_key.ptr,
            };
            const value = it_entry.value_ptr.*;
            param2_values[i] = qtc.libqt_string{
                .len = value.len,
                .data = value.ptr,
            };
        }
        const param2_map = qtc.libqt_map{
            .len = param2_count,
            .keys = @ptrCast(param2_keys.ptr),
            .values = @ptrCast(param2_values.ptr),
        };
        comptime _ = @TypeOf(param3)._is_QChar;
        var _str = qtc.KMacroExpander_ExpandMacrosShellQuote2(param1_str, param2_map, @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmacroexpander.ExpandMacrosShellQuote2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kmacroexpander.html#expandMacros)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: Map_QChar_constconstu8 `
    ///
    /// ` param3: QChar `
    ///
    pub fn ExpandMacros3(allocator: std.mem.Allocator, param1: []const u8, param2: Map_QChar_constconstu8, param3: anytype) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_count = param2.count();
        const param2_keys = allocator.alloc(QtC.QChar, param2_count) catch @panic("kmacroexpander.ExpandMacros3: Memory allocation failed");
        defer allocator.free(param2_keys);
        const param2_values = allocator.alloc(qtc.libqt_list, param2_count) catch @panic("kmacroexpander.ExpandMacros3: Memory allocation failed");
        defer allocator.free(param2_values);
        const param2_inners = allocator.alloc([]qtc.libqt_string, param2_count) catch @panic("kmacroexpander.ExpandMacros3: Memory allocation failed");
        defer {
            for (param2_inners) |param2_inner|
                allocator.free(param2_inner);
            allocator.free(param2_inners);
        }
        var i: usize = 0;
        var param2_it = param2.iterator();
        while (param2_it.next()) |it_entry| : (i += 1) {
            const param2_key = it_entry.key_ptr.*;
            param2_keys[i] = @ptrCast(param2_key.ptr);
            param2_values[i].len = it_entry.value_ptr.*.len;
            const param2_val = allocator.alloc(qtc.libqt_string, it_entry.value_ptr.len) catch @panic("kmacroexpander.ExpandMacros3: Memory allocation failed");
            param2_inners[i] = param2_val;
            for (it_entry.value_ptr.*, 0..) |value, j|
                param2_val[j] = qtc.libqt_string{
                    .len = value.len,
                    .data = value.ptr,
                };
            param2_values[i].data = @ptrCast(param2_val.ptr);
        }
        const param2_map = qtc.libqt_map{
            .len = param2_count,
            .keys = @ptrCast(param2_keys.ptr),
            .values = @ptrCast(param2_values.ptr),
        };
        comptime _ = @TypeOf(param3)._is_QChar;
        var _str = qtc.KMacroExpander_ExpandMacros3(param1_str, param2_map, @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmacroexpander.ExpandMacros3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kmacroexpander.html#expandMacros)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: Map_constu8_constconstu8 `
    ///
    /// ` param3: QChar `
    ///
    pub fn ExpandMacros4(allocator: std.mem.Allocator, param1: []const u8, param2: Map_constu8_constconstu8, param3: anytype) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_count = param2.count();
        const param2_keys = allocator.alloc(qtc.libqt_string, param2_count) catch @panic("kmacroexpander.ExpandMacros4: Memory allocation failed");
        defer allocator.free(param2_keys);
        const param2_values = allocator.alloc(qtc.libqt_list, param2_count) catch @panic("kmacroexpander.ExpandMacros4: Memory allocation failed");
        defer allocator.free(param2_values);
        const param2_inners = allocator.alloc([]qtc.libqt_string, param2_count) catch @panic("kmacroexpander.ExpandMacros4: Memory allocation failed");
        defer {
            for (param2_inners) |param2_inner|
                allocator.free(param2_inner);
            allocator.free(param2_inners);
        }
        var i: usize = 0;
        var param2_it = param2.iterator();
        while (param2_it.next()) |it_entry| : (i += 1) {
            const param2_key = it_entry.key_ptr.*;
            param2_keys[i] = qtc.libqt_string{
                .len = param2_key.len,
                .data = param2_key.ptr,
            };
            param2_values[i].len = it_entry.value_ptr.*.len;
            const param2_val = allocator.alloc(qtc.libqt_string, it_entry.value_ptr.len) catch @panic("kmacroexpander.ExpandMacros4: Memory allocation failed");
            param2_inners[i] = param2_val;
            for (it_entry.value_ptr.*, 0..) |value, j|
                param2_val[j] = qtc.libqt_string{
                    .len = value.len,
                    .data = value.ptr,
                };
            param2_values[i].data = @ptrCast(param2_val.ptr);
        }
        const param2_map = qtc.libqt_map{
            .len = param2_count,
            .keys = @ptrCast(param2_keys.ptr),
            .values = @ptrCast(param2_values.ptr),
        };
        comptime _ = @TypeOf(param3)._is_QChar;
        var _str = qtc.KMacroExpander_ExpandMacros4(param1_str, param2_map, @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmacroexpander.ExpandMacros4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kmacroexpander.html#expandMacrosShellQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: Map_QChar_constconstu8 `
    ///
    /// ` param3: QChar `
    ///
    pub fn ExpandMacrosShellQuote3(allocator: std.mem.Allocator, param1: []const u8, param2: Map_QChar_constconstu8, param3: anytype) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_count = param2.count();
        const param2_keys = allocator.alloc(QtC.QChar, param2_count) catch @panic("kmacroexpander.ExpandMacrosShellQuote3: Memory allocation failed");
        defer allocator.free(param2_keys);
        const param2_values = allocator.alloc(qtc.libqt_list, param2_count) catch @panic("kmacroexpander.ExpandMacrosShellQuote3: Memory allocation failed");
        defer allocator.free(param2_values);
        const param2_inners = allocator.alloc([]qtc.libqt_string, param2_count) catch @panic("kmacroexpander.ExpandMacrosShellQuote3: Memory allocation failed");
        defer {
            for (param2_inners) |param2_inner|
                allocator.free(param2_inner);
            allocator.free(param2_inners);
        }
        var i: usize = 0;
        var param2_it = param2.iterator();
        while (param2_it.next()) |it_entry| : (i += 1) {
            const param2_key = it_entry.key_ptr.*;
            param2_keys[i] = @ptrCast(param2_key.ptr);
            param2_values[i].len = it_entry.value_ptr.*.len;
            const param2_val = allocator.alloc(qtc.libqt_string, it_entry.value_ptr.len) catch @panic("kmacroexpander.ExpandMacrosShellQuote3: Memory allocation failed");
            param2_inners[i] = param2_val;
            for (it_entry.value_ptr.*, 0..) |value, j|
                param2_val[j] = qtc.libqt_string{
                    .len = value.len,
                    .data = value.ptr,
                };
            param2_values[i].data = @ptrCast(param2_val.ptr);
        }
        const param2_map = qtc.libqt_map{
            .len = param2_count,
            .keys = @ptrCast(param2_keys.ptr),
            .values = @ptrCast(param2_values.ptr),
        };
        comptime _ = @TypeOf(param3)._is_QChar;
        var _str = qtc.KMacroExpander_ExpandMacrosShellQuote3(param1_str, param2_map, @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmacroexpander.ExpandMacrosShellQuote3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kmacroexpander.html#expandMacrosShellQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: Map_constu8_constconstu8 `
    ///
    /// ` param3: QChar `
    ///
    pub fn ExpandMacrosShellQuote4(allocator: std.mem.Allocator, param1: []const u8, param2: Map_constu8_constconstu8, param3: anytype) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_count = param2.count();
        const param2_keys = allocator.alloc(qtc.libqt_string, param2_count) catch @panic("kmacroexpander.ExpandMacrosShellQuote4: Memory allocation failed");
        defer allocator.free(param2_keys);
        const param2_values = allocator.alloc(qtc.libqt_list, param2_count) catch @panic("kmacroexpander.ExpandMacrosShellQuote4: Memory allocation failed");
        defer allocator.free(param2_values);
        const param2_inners = allocator.alloc([]qtc.libqt_string, param2_count) catch @panic("kmacroexpander.ExpandMacrosShellQuote4: Memory allocation failed");
        defer {
            for (param2_inners) |param2_inner|
                allocator.free(param2_inner);
            allocator.free(param2_inners);
        }
        var i: usize = 0;
        var param2_it = param2.iterator();
        while (param2_it.next()) |it_entry| : (i += 1) {
            const param2_key = it_entry.key_ptr.*;
            param2_keys[i] = qtc.libqt_string{
                .len = param2_key.len,
                .data = param2_key.ptr,
            };
            param2_values[i].len = it_entry.value_ptr.*.len;
            const param2_val = allocator.alloc(qtc.libqt_string, it_entry.value_ptr.len) catch @panic("kmacroexpander.ExpandMacrosShellQuote4: Memory allocation failed");
            param2_inners[i] = param2_val;
            for (it_entry.value_ptr.*, 0..) |value, j|
                param2_val[j] = qtc.libqt_string{
                    .len = value.len,
                    .data = value.ptr,
                };
            param2_values[i].data = @ptrCast(param2_val.ptr);
        }
        const param2_map = qtc.libqt_map{
            .len = param2_count,
            .keys = @ptrCast(param2_keys.ptr),
            .values = @ptrCast(param2_values.ptr),
        };
        comptime _ = @TypeOf(param3)._is_QChar;
        var _str = qtc.KMacroExpander_ExpandMacrosShellQuote4(param1_str, param2_map, @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmacroexpander.ExpandMacrosShellQuote4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }
};
