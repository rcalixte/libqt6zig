const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
pub const map_constu8_constu8 = std.StringHashMapUnmanaged([]const u8);
pub const map_constu8_sliceconstu8 = std.StringHashMapUnmanaged([][]const u8);
pub const map_qtcqchar_constu8 = std.AutoHashMapUnmanaged(QtC.QChar, []const u8);
pub const map_qtcqchar_sliceconstu8 = std.AutoHashMapUnmanaged(QtC.QChar, [][]const u8);

/// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html)
pub const kmacroexpanderbase = struct {
    /// New constructs a new KMacroExpanderBase object.
    ///
    pub fn New() QtC.KMacroExpanderBase {
        return qtc.KMacroExpanderBase_new();
    }

    /// New2 constructs a new KMacroExpanderBase object.
    ///
    /// ## Parameter(s):
    ///
    /// ` c: QtC.QChar `
    ///
    pub fn New2(c: QtC.QChar) QtC.KMacroExpanderBase {
        return qtc.KMacroExpanderBase_new2(@ptrCast(c));
    }

    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#expandMacros)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMacroExpanderBase `
    ///
    /// ` str: []const u8 `
    ///
    pub fn ExpandMacros(self: ?*anyopaque, str: []const u8) void {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        qtc.KMacroExpanderBase_ExpandMacros(@ptrCast(self), str_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#expandMacrosShellQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMacroExpanderBase `
    ///
    /// ` str: []const u8 `
    ///
    /// ` pos: *i32 `
    ///
    pub fn ExpandMacrosShellQuote(self: ?*anyopaque, str: []const u8, pos: *i32) bool {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.KMacroExpanderBase_ExpandMacrosShellQuote(@ptrCast(self), str_str, @ptrCast(pos));
    }

    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#expandMacrosShellQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMacroExpanderBase `
    ///
    /// ` str: []const u8 `
    ///
    pub fn ExpandMacrosShellQuote2(self: ?*anyopaque, str: []const u8) bool {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.KMacroExpanderBase_ExpandMacrosShellQuote2(@ptrCast(self), str_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#setEscapeChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMacroExpanderBase `
    ///
    /// ` c: QtC.QChar `
    ///
    pub fn SetEscapeChar(self: ?*anyopaque, c: QtC.QChar) void {
        qtc.KMacroExpanderBase_SetEscapeChar(@ptrCast(self), @ptrCast(c));
    }

    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#escapeChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMacroExpanderBase `
    ///
    pub fn EscapeChar(self: ?*anyopaque) QtC.QChar {
        return qtc.KMacroExpanderBase_EscapeChar(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#expandPlainMacro)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMacroExpanderBase `
    ///
    /// ` str: []const u8 `
    ///
    /// ` pos: i32 `
    ///
    /// ` retVal: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExpandPlainMacro(self: ?*anyopaque, str: []const u8, pos: i32, retVal: [][]const u8, allocator: std.mem.Allocator) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        var retVal_arr = allocator.alloc(qtc.libqt_string, retVal.len) catch @panic("kmacroexpanderbase.ExpandPlainMacro: Memory allocation failed");
        defer allocator.free(retVal_arr);
        for (retVal, 0..retVal.len) |item, i| {
            retVal_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const retVal_list = qtc.libqt_list{
            .len = retVal.len,
            .data = retVal_arr.ptr,
        };
        return qtc.KMacroExpanderBase_ExpandPlainMacro(@ptrCast(self), str_str, @intCast(pos), retVal_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#expandPlainMacro)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KMacroExpanderBase `
    ///
    /// ` callback: *const fn (self: QtC.KMacroExpanderBase, str: [*:0]const u8, pos: i32, retVal: [*][*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnExpandPlainMacro(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32, [*][*:0]const u8) callconv(.c) i32) void {
        qtc.KMacroExpanderBase_OnExpandPlainMacro(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#expandPlainMacro)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMacroExpanderBase `
    ///
    /// ` str: []const u8 `
    ///
    /// ` pos: i32 `
    ///
    /// ` retVal: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseExpandPlainMacro(self: ?*anyopaque, str: []const u8, pos: i32, retVal: [][]const u8, allocator: std.mem.Allocator) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        var retVal_arr = allocator.alloc(qtc.libqt_string, retVal.len) catch @panic("kmacroexpanderbase.ExpandPlainMacro: Memory allocation failed");
        defer allocator.free(retVal_arr);
        for (retVal, 0..retVal.len) |item, i| {
            retVal_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const retVal_list = qtc.libqt_list{
            .len = retVal.len,
            .data = retVal_arr.ptr,
        };
        return qtc.KMacroExpanderBase_QBaseExpandPlainMacro(@ptrCast(self), str_str, @intCast(pos), retVal_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#expandEscapedMacro)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMacroExpanderBase `
    ///
    /// ` str: []const u8 `
    ///
    /// ` pos: i32 `
    ///
    /// ` retVal: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExpandEscapedMacro(self: ?*anyopaque, str: []const u8, pos: i32, retVal: [][]const u8, allocator: std.mem.Allocator) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        var retVal_arr = allocator.alloc(qtc.libqt_string, retVal.len) catch @panic("kmacroexpanderbase.ExpandEscapedMacro: Memory allocation failed");
        defer allocator.free(retVal_arr);
        for (retVal, 0..retVal.len) |item, i| {
            retVal_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const retVal_list = qtc.libqt_list{
            .len = retVal.len,
            .data = retVal_arr.ptr,
        };
        return qtc.KMacroExpanderBase_ExpandEscapedMacro(@ptrCast(self), str_str, @intCast(pos), retVal_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#expandEscapedMacro)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KMacroExpanderBase `
    ///
    /// ` callback: *const fn (self: QtC.KMacroExpanderBase, str: [*:0]const u8, pos: i32, retVal: [*][*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnExpandEscapedMacro(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32, [*][*:0]const u8) callconv(.c) i32) void {
        qtc.KMacroExpanderBase_OnExpandEscapedMacro(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#expandEscapedMacro)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMacroExpanderBase `
    ///
    /// ` str: []const u8 `
    ///
    /// ` pos: i32 `
    ///
    /// ` retVal: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseExpandEscapedMacro(self: ?*anyopaque, str: []const u8, pos: i32, retVal: [][]const u8, allocator: std.mem.Allocator) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        var retVal_arr = allocator.alloc(qtc.libqt_string, retVal.len) catch @panic("kmacroexpanderbase.ExpandEscapedMacro: Memory allocation failed");
        defer allocator.free(retVal_arr);
        for (retVal, 0..retVal.len) |item, i| {
            retVal_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const retVal_list = qtc.libqt_list{
            .len = retVal.len,
            .data = retVal_arr.ptr,
        };
        return qtc.KMacroExpanderBase_QBaseExpandEscapedMacro(@ptrCast(self), str_str, @intCast(pos), retVal_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#dtor.KMacroExpanderBase)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KMacroExpanderBase `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KMacroExpanderBase_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kwordmacroexpander.html)
pub const kwordmacroexpander = struct {
    /// New constructs a new KWordMacroExpander object.
    ///
    pub fn New() QtC.KWordMacroExpander {
        return qtc.KWordMacroExpander_new();
    }

    /// New2 constructs a new KWordMacroExpander object.
    ///
    /// ## Parameter(s):
    ///
    /// ` c: QtC.QChar `
    ///
    pub fn New2(c: QtC.QChar) QtC.KWordMacroExpander {
        return qtc.KWordMacroExpander_new2(@ptrCast(c));
    }

    /// ### [Upstream resources](https://api.kde.org/kwordmacroexpander.html#expandPlainMacro)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KWordMacroExpander `
    ///
    /// ` str: []const u8 `
    ///
    /// ` pos: i32 `
    ///
    /// ` retVal: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExpandPlainMacro(self: ?*anyopaque, str: []const u8, pos: i32, retVal: [][]const u8, allocator: std.mem.Allocator) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        var retVal_arr = allocator.alloc(qtc.libqt_string, retVal.len) catch @panic("kwordmacroexpander.ExpandPlainMacro: Memory allocation failed");
        defer allocator.free(retVal_arr);
        for (retVal, 0..retVal.len) |item, i| {
            retVal_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const retVal_list = qtc.libqt_list{
            .len = retVal.len,
            .data = retVal_arr.ptr,
        };
        return qtc.KWordMacroExpander_ExpandPlainMacro(@ptrCast(self), str_str, @intCast(pos), retVal_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kwordmacroexpander.html#expandPlainMacro)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KWordMacroExpander `
    ///
    /// ` callback: *const fn (self: QtC.KWordMacroExpander, str: [*:0]const u8, pos: i32, retVal: [*][*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnExpandPlainMacro(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32, [*][*:0]const u8) callconv(.c) i32) void {
        qtc.KWordMacroExpander_OnExpandPlainMacro(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kwordmacroexpander.html#expandPlainMacro)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KWordMacroExpander `
    ///
    /// ` str: []const u8 `
    ///
    /// ` pos: i32 `
    ///
    /// ` retVal: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseExpandPlainMacro(self: ?*anyopaque, str: []const u8, pos: i32, retVal: [][]const u8, allocator: std.mem.Allocator) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        var retVal_arr = allocator.alloc(qtc.libqt_string, retVal.len) catch @panic("kwordmacroexpander.ExpandPlainMacro: Memory allocation failed");
        defer allocator.free(retVal_arr);
        for (retVal, 0..retVal.len) |item, i| {
            retVal_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const retVal_list = qtc.libqt_list{
            .len = retVal.len,
            .data = retVal_arr.ptr,
        };
        return qtc.KWordMacroExpander_QBaseExpandPlainMacro(@ptrCast(self), str_str, @intCast(pos), retVal_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kwordmacroexpander.html#expandEscapedMacro)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KWordMacroExpander `
    ///
    /// ` str: []const u8 `
    ///
    /// ` pos: i32 `
    ///
    /// ` retVal: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExpandEscapedMacro(self: ?*anyopaque, str: []const u8, pos: i32, retVal: [][]const u8, allocator: std.mem.Allocator) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        var retVal_arr = allocator.alloc(qtc.libqt_string, retVal.len) catch @panic("kwordmacroexpander.ExpandEscapedMacro: Memory allocation failed");
        defer allocator.free(retVal_arr);
        for (retVal, 0..retVal.len) |item, i| {
            retVal_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const retVal_list = qtc.libqt_list{
            .len = retVal.len,
            .data = retVal_arr.ptr,
        };
        return qtc.KWordMacroExpander_ExpandEscapedMacro(@ptrCast(self), str_str, @intCast(pos), retVal_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kwordmacroexpander.html#expandEscapedMacro)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KWordMacroExpander `
    ///
    /// ` callback: *const fn (self: QtC.KWordMacroExpander, str: [*:0]const u8, pos: i32, retVal: [*][*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnExpandEscapedMacro(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32, [*][*:0]const u8) callconv(.c) i32) void {
        qtc.KWordMacroExpander_OnExpandEscapedMacro(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kwordmacroexpander.html#expandEscapedMacro)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KWordMacroExpander `
    ///
    /// ` str: []const u8 `
    ///
    /// ` pos: i32 `
    ///
    /// ` retVal: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseExpandEscapedMacro(self: ?*anyopaque, str: []const u8, pos: i32, retVal: [][]const u8, allocator: std.mem.Allocator) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        var retVal_arr = allocator.alloc(qtc.libqt_string, retVal.len) catch @panic("kwordmacroexpander.ExpandEscapedMacro: Memory allocation failed");
        defer allocator.free(retVal_arr);
        for (retVal, 0..retVal.len) |item, i| {
            retVal_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const retVal_list = qtc.libqt_list{
            .len = retVal.len,
            .data = retVal_arr.ptr,
        };
        return qtc.KWordMacroExpander_QBaseExpandEscapedMacro(@ptrCast(self), str_str, @intCast(pos), retVal_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kwordmacroexpander.html#expandMacro)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KWordMacroExpander `
    ///
    /// ` str: []const u8 `
    ///
    /// ` retVal: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExpandMacro(self: ?*anyopaque, str: []const u8, retVal: [][]const u8, allocator: std.mem.Allocator) bool {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        var retVal_arr = allocator.alloc(qtc.libqt_string, retVal.len) catch @panic("kwordmacroexpander.ExpandMacro: Memory allocation failed");
        defer allocator.free(retVal_arr);
        for (retVal, 0..retVal.len) |item, i| {
            retVal_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const retVal_list = qtc.libqt_list{
            .len = retVal.len,
            .data = retVal_arr.ptr,
        };
        return qtc.KWordMacroExpander_ExpandMacro(@ptrCast(self), str_str, retVal_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kwordmacroexpander.html#expandMacro)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KWordMacroExpander `
    ///
    /// ` callback: *const fn (self: QtC.KWordMacroExpander, str: [*:0]const u8, retVal: [*][*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnExpandMacro(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, [*][*:0]const u8) callconv(.c) bool) void {
        qtc.KWordMacroExpander_OnExpandMacro(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kwordmacroexpander.html#expandMacro)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KWordMacroExpander `
    ///
    /// ` str: []const u8 `
    ///
    /// ` retVal: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseExpandMacro(self: ?*anyopaque, str: []const u8, retVal: [][]const u8, allocator: std.mem.Allocator) bool {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        var retVal_arr = allocator.alloc(qtc.libqt_string, retVal.len) catch @panic("kwordmacroexpander.ExpandMacro: Memory allocation failed");
        defer allocator.free(retVal_arr);
        for (retVal, 0..retVal.len) |item, i| {
            retVal_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const retVal_list = qtc.libqt_list{
            .len = retVal.len,
            .data = retVal_arr.ptr,
        };
        return qtc.KWordMacroExpander_QBaseExpandMacro(@ptrCast(self), str_str, retVal_list);
    }

    /// Inherited from KMacroExpanderBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#expandMacros)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KWordMacroExpander `
    ///
    /// ` str: []const u8 `
    ///
    pub fn ExpandMacros(self: ?*anyopaque, str: []const u8) void {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        qtc.KMacroExpanderBase_ExpandMacros(@ptrCast(self), str_str);
    }

    /// Inherited from KMacroExpanderBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#expandMacrosShellQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KWordMacroExpander `
    ///
    /// ` str: []const u8 `
    ///
    /// ` pos: *i32 `
    ///
    pub fn ExpandMacrosShellQuote(self: ?*anyopaque, str: []const u8, pos: *i32) bool {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.KMacroExpanderBase_ExpandMacrosShellQuote(@ptrCast(self), str_str, @ptrCast(pos));
    }

    /// Inherited from KMacroExpanderBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#expandMacrosShellQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KWordMacroExpander `
    ///
    /// ` str: []const u8 `
    ///
    pub fn ExpandMacrosShellQuote2(self: ?*anyopaque, str: []const u8) bool {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.KMacroExpanderBase_ExpandMacrosShellQuote2(@ptrCast(self), str_str);
    }

    /// Inherited from KMacroExpanderBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#setEscapeChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KWordMacroExpander `
    ///
    /// ` c: QtC.QChar `
    ///
    pub fn SetEscapeChar(self: ?*anyopaque, c: QtC.QChar) void {
        qtc.KMacroExpanderBase_SetEscapeChar(@ptrCast(self), @ptrCast(c));
    }

    /// Inherited from KMacroExpanderBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#escapeChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KWordMacroExpander `
    ///
    pub fn EscapeChar(self: ?*anyopaque) QtC.QChar {
        return qtc.KMacroExpanderBase_EscapeChar(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kwordmacroexpander.html#dtor.KWordMacroExpander)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KWordMacroExpander `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KWordMacroExpander_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcharmacroexpander.html)
pub const kcharmacroexpander = struct {
    /// New constructs a new KCharMacroExpander object.
    ///
    pub fn New() QtC.KCharMacroExpander {
        return qtc.KCharMacroExpander_new();
    }

    /// New2 constructs a new KCharMacroExpander object.
    ///
    /// ## Parameter(s):
    ///
    /// ` c: QtC.QChar `
    ///
    pub fn New2(c: QtC.QChar) QtC.KCharMacroExpander {
        return qtc.KCharMacroExpander_new2(@ptrCast(c));
    }

    /// ### [Upstream resources](https://api.kde.org/kcharmacroexpander.html#expandPlainMacro)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCharMacroExpander `
    ///
    /// ` str: []const u8 `
    ///
    /// ` pos: i32 `
    ///
    /// ` retVal: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExpandPlainMacro(self: ?*anyopaque, str: []const u8, pos: i32, retVal: [][]const u8, allocator: std.mem.Allocator) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        var retVal_arr = allocator.alloc(qtc.libqt_string, retVal.len) catch @panic("kcharmacroexpander.ExpandPlainMacro: Memory allocation failed");
        defer allocator.free(retVal_arr);
        for (retVal, 0..retVal.len) |item, i| {
            retVal_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const retVal_list = qtc.libqt_list{
            .len = retVal.len,
            .data = retVal_arr.ptr,
        };
        return qtc.KCharMacroExpander_ExpandPlainMacro(@ptrCast(self), str_str, @intCast(pos), retVal_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kcharmacroexpander.html#expandPlainMacro)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCharMacroExpander `
    ///
    /// ` callback: *const fn (self: QtC.KCharMacroExpander, str: [*:0]const u8, pos: i32, retVal: [*][*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnExpandPlainMacro(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32, [*][*:0]const u8) callconv(.c) i32) void {
        qtc.KCharMacroExpander_OnExpandPlainMacro(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcharmacroexpander.html#expandPlainMacro)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCharMacroExpander `
    ///
    /// ` str: []const u8 `
    ///
    /// ` pos: i32 `
    ///
    /// ` retVal: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseExpandPlainMacro(self: ?*anyopaque, str: []const u8, pos: i32, retVal: [][]const u8, allocator: std.mem.Allocator) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        var retVal_arr = allocator.alloc(qtc.libqt_string, retVal.len) catch @panic("kcharmacroexpander.ExpandPlainMacro: Memory allocation failed");
        defer allocator.free(retVal_arr);
        for (retVal, 0..retVal.len) |item, i| {
            retVal_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const retVal_list = qtc.libqt_list{
            .len = retVal.len,
            .data = retVal_arr.ptr,
        };
        return qtc.KCharMacroExpander_QBaseExpandPlainMacro(@ptrCast(self), str_str, @intCast(pos), retVal_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kcharmacroexpander.html#expandEscapedMacro)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCharMacroExpander `
    ///
    /// ` str: []const u8 `
    ///
    /// ` pos: i32 `
    ///
    /// ` retVal: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExpandEscapedMacro(self: ?*anyopaque, str: []const u8, pos: i32, retVal: [][]const u8, allocator: std.mem.Allocator) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        var retVal_arr = allocator.alloc(qtc.libqt_string, retVal.len) catch @panic("kcharmacroexpander.ExpandEscapedMacro: Memory allocation failed");
        defer allocator.free(retVal_arr);
        for (retVal, 0..retVal.len) |item, i| {
            retVal_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const retVal_list = qtc.libqt_list{
            .len = retVal.len,
            .data = retVal_arr.ptr,
        };
        return qtc.KCharMacroExpander_ExpandEscapedMacro(@ptrCast(self), str_str, @intCast(pos), retVal_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kcharmacroexpander.html#expandEscapedMacro)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCharMacroExpander `
    ///
    /// ` callback: *const fn (self: QtC.KCharMacroExpander, str: [*:0]const u8, pos: i32, retVal: [*][*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnExpandEscapedMacro(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32, [*][*:0]const u8) callconv(.c) i32) void {
        qtc.KCharMacroExpander_OnExpandEscapedMacro(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcharmacroexpander.html#expandEscapedMacro)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCharMacroExpander `
    ///
    /// ` str: []const u8 `
    ///
    /// ` pos: i32 `
    ///
    /// ` retVal: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseExpandEscapedMacro(self: ?*anyopaque, str: []const u8, pos: i32, retVal: [][]const u8, allocator: std.mem.Allocator) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        var retVal_arr = allocator.alloc(qtc.libqt_string, retVal.len) catch @panic("kcharmacroexpander.ExpandEscapedMacro: Memory allocation failed");
        defer allocator.free(retVal_arr);
        for (retVal, 0..retVal.len) |item, i| {
            retVal_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const retVal_list = qtc.libqt_list{
            .len = retVal.len,
            .data = retVal_arr.ptr,
        };
        return qtc.KCharMacroExpander_QBaseExpandEscapedMacro(@ptrCast(self), str_str, @intCast(pos), retVal_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kcharmacroexpander.html#expandMacro)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCharMacroExpander `
    ///
    /// ` chr: QtC.QChar `
    ///
    /// ` retVal: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExpandMacro(self: ?*anyopaque, chr: QtC.QChar, retVal: [][]const u8, allocator: std.mem.Allocator) bool {
        var retVal_arr = allocator.alloc(qtc.libqt_string, retVal.len) catch @panic("kcharmacroexpander.ExpandMacro: Memory allocation failed");
        defer allocator.free(retVal_arr);
        for (retVal, 0..retVal.len) |item, i| {
            retVal_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const retVal_list = qtc.libqt_list{
            .len = retVal.len,
            .data = retVal_arr.ptr,
        };
        return qtc.KCharMacroExpander_ExpandMacro(@ptrCast(self), @ptrCast(chr), retVal_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kcharmacroexpander.html#expandMacro)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KCharMacroExpander `
    ///
    /// ` callback: *const fn (self: QtC.KCharMacroExpander, chr: QtC.QChar, retVal: [*][*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnExpandMacro(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QChar, [*][*:0]const u8) callconv(.c) bool) void {
        qtc.KCharMacroExpander_OnExpandMacro(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcharmacroexpander.html#expandMacro)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCharMacroExpander `
    ///
    /// ` chr: QtC.QChar `
    ///
    /// ` retVal: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseExpandMacro(self: ?*anyopaque, chr: QtC.QChar, retVal: [][]const u8, allocator: std.mem.Allocator) bool {
        var retVal_arr = allocator.alloc(qtc.libqt_string, retVal.len) catch @panic("kcharmacroexpander.ExpandMacro: Memory allocation failed");
        defer allocator.free(retVal_arr);
        for (retVal, 0..retVal.len) |item, i| {
            retVal_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const retVal_list = qtc.libqt_list{
            .len = retVal.len,
            .data = retVal_arr.ptr,
        };
        return qtc.KCharMacroExpander_QBaseExpandMacro(@ptrCast(self), @ptrCast(chr), retVal_list);
    }

    /// Inherited from KMacroExpanderBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#expandMacros)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCharMacroExpander `
    ///
    /// ` str: []const u8 `
    ///
    pub fn ExpandMacros(self: ?*anyopaque, str: []const u8) void {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        qtc.KMacroExpanderBase_ExpandMacros(@ptrCast(self), str_str);
    }

    /// Inherited from KMacroExpanderBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#expandMacrosShellQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCharMacroExpander `
    ///
    /// ` str: []const u8 `
    ///
    /// ` pos: *i32 `
    ///
    pub fn ExpandMacrosShellQuote(self: ?*anyopaque, str: []const u8, pos: *i32) bool {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.KMacroExpanderBase_ExpandMacrosShellQuote(@ptrCast(self), str_str, @ptrCast(pos));
    }

    /// Inherited from KMacroExpanderBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#expandMacrosShellQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCharMacroExpander `
    ///
    /// ` str: []const u8 `
    ///
    pub fn ExpandMacrosShellQuote2(self: ?*anyopaque, str: []const u8) bool {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.KMacroExpanderBase_ExpandMacrosShellQuote2(@ptrCast(self), str_str);
    }

    /// Inherited from KMacroExpanderBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#setEscapeChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCharMacroExpander `
    ///
    /// ` c: QtC.QChar `
    ///
    pub fn SetEscapeChar(self: ?*anyopaque, c: QtC.QChar) void {
        qtc.KMacroExpanderBase_SetEscapeChar(@ptrCast(self), @ptrCast(c));
    }

    /// Inherited from KMacroExpanderBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kmacroexpanderbase.html#escapeChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCharMacroExpander `
    ///
    pub fn EscapeChar(self: ?*anyopaque) QtC.QChar {
        return qtc.KMacroExpanderBase_EscapeChar(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcharmacroexpander.html#dtor.KCharMacroExpander)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KCharMacroExpander `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCharMacroExpander_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kmacroexpander.html)
pub const kmacroexpander = struct {
    /// ### [Upstream resources](https://api.kde.org/kmacroexpander.html#expandMacros)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: map_qtcqchar_constu8 `
    ///
    /// ` param3: QtC.QChar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExpandMacros(param1: []const u8, param2: map_qtcqchar_constu8, param3: QtC.QChar, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_keys = allocator.alloc(?*anyopaque, param2.count()) catch @panic("kmacroexpander.ExpandMacros: Memory allocation failed");
        defer allocator.free(param2_keys);
        const param2_values = allocator.alloc([]const u8, param2.count()) catch @panic("kmacroexpander.ExpandMacros: Memory allocation failed");
        defer allocator.free(param2_values);
        var i: usize = 0;
        var param2_it = param2.iterator();
        while (param2_it.next()) |entry| : (i += 1) {
            const key = entry.key_ptr.*;
            param2_keys[i] = @ptrCast(key);
            param2_values[i] = @ptrCast(entry.value_ptr.*);
        }
        const param2_map = qtc.libqt_map{
            .len = param2.count(),
            .keys = @ptrCast(param2_keys.ptr),
            .values = @ptrCast(param2_values.ptr),
        };
        var _str = qtc.KMacroExpander_ExpandMacros(param1_str, param2_map, @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmacroexpander.ExpandMacros: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kmacroexpander.html#expandMacrosShellQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: map_qtcqchar_constu8 `
    ///
    /// ` param3: QtC.QChar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExpandMacrosShellQuote(param1: []const u8, param2: map_qtcqchar_constu8, param3: QtC.QChar, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_keys = allocator.alloc(?*anyopaque, param2.count()) catch @panic("kmacroexpander.ExpandMacrosShellQuote: Memory allocation failed");
        defer allocator.free(param2_keys);
        const param2_values = allocator.alloc([]const u8, param2.count()) catch @panic("kmacroexpander.ExpandMacrosShellQuote: Memory allocation failed");
        defer allocator.free(param2_values);
        var i: usize = 0;
        var param2_it = param2.iterator();
        while (param2_it.next()) |entry| : (i += 1) {
            const key = entry.key_ptr.*;
            param2_keys[i] = @ptrCast(key);
            param2_values[i] = @ptrCast(entry.value_ptr.*);
        }
        const param2_map = qtc.libqt_map{
            .len = param2.count(),
            .keys = @ptrCast(param2_keys.ptr),
            .values = @ptrCast(param2_values.ptr),
        };
        var _str = qtc.KMacroExpander_ExpandMacrosShellQuote(param1_str, param2_map, @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmacroexpander.ExpandMacrosShellQuote: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kmacroexpander.html#expandMacros)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: map_constu8_constu8 `
    ///
    /// ` param3: QtC.QChar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExpandMacros2(param1: []const u8, param2: map_constu8_constu8, param3: QtC.QChar, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_keys = allocator.alloc(qtc.libqt_string, param2.count()) catch @panic("kmacroexpander.ExpandMacros2: Memory allocation failed");
        defer allocator.free(param2_keys);
        const param2_values = allocator.alloc([]const u8, param2.count()) catch @panic("kmacroexpander.ExpandMacros2: Memory allocation failed");
        defer allocator.free(param2_values);
        var i: usize = 0;
        var param2_it = param2.iterator();
        while (param2_it.next()) |entry| : (i += 1) {
            const key = entry.key_ptr.*;
            param2_keys[i] = qtc.libqt_string{
                .len = key.len,
                .data = key.ptr,
            };
            param2_values[i] = @ptrCast(entry.value_ptr.*);
        }
        const param2_map = qtc.libqt_map{
            .len = param2.count(),
            .keys = @ptrCast(param2_keys.ptr),
            .values = @ptrCast(param2_values.ptr),
        };
        var _str = qtc.KMacroExpander_ExpandMacros2(param1_str, param2_map, @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmacroexpander.ExpandMacros2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kmacroexpander.html#expandMacrosShellQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: map_constu8_constu8 `
    ///
    /// ` param3: QtC.QChar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExpandMacrosShellQuote2(param1: []const u8, param2: map_constu8_constu8, param3: QtC.QChar, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_keys = allocator.alloc(qtc.libqt_string, param2.count()) catch @panic("kmacroexpander.ExpandMacrosShellQuote2: Memory allocation failed");
        defer allocator.free(param2_keys);
        const param2_values = allocator.alloc([]const u8, param2.count()) catch @panic("kmacroexpander.ExpandMacrosShellQuote2: Memory allocation failed");
        defer allocator.free(param2_values);
        var i: usize = 0;
        var param2_it = param2.iterator();
        while (param2_it.next()) |entry| : (i += 1) {
            const key = entry.key_ptr.*;
            param2_keys[i] = qtc.libqt_string{
                .len = key.len,
                .data = key.ptr,
            };
            param2_values[i] = @ptrCast(entry.value_ptr.*);
        }
        const param2_map = qtc.libqt_map{
            .len = param2.count(),
            .keys = @ptrCast(param2_keys.ptr),
            .values = @ptrCast(param2_values.ptr),
        };
        var _str = qtc.KMacroExpander_ExpandMacrosShellQuote2(param1_str, param2_map, @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmacroexpander.ExpandMacrosShellQuote2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kmacroexpander.html#expandMacros)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: map_qtcqchar_sliceconstu8 `
    ///
    /// ` param3: QtC.QChar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExpandMacros3(param1: []const u8, param2: map_qtcqchar_sliceconstu8, param3: QtC.QChar, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_keys = allocator.alloc(?*anyopaque, param2.count()) catch @panic("kmacroexpander.ExpandMacros3: Memory allocation failed");
        defer allocator.free(param2_keys);
        const param2_values = allocator.alloc([][]const u8, param2.count()) catch @panic("kmacroexpander.ExpandMacros3: Memory allocation failed");
        defer allocator.free(param2_values);
        var i: usize = 0;
        var param2_it = param2.iterator();
        while (param2_it.next()) |entry| : (i += 1) {
            const key = entry.key_ptr.*;
            param2_keys[i] = @ptrCast(key);
            param2_values[i] = @ptrCast(entry.value_ptr.*);
        }
        const param2_map = qtc.libqt_map{
            .len = param2.count(),
            .keys = @ptrCast(param2_keys.ptr),
            .values = @ptrCast(param2_values.ptr),
        };
        var _str = qtc.KMacroExpander_ExpandMacros3(param1_str, param2_map, @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmacroexpander.ExpandMacros3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kmacroexpander.html#expandMacros)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: map_constu8_sliceconstu8 `
    ///
    /// ` param3: QtC.QChar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExpandMacros4(param1: []const u8, param2: map_constu8_sliceconstu8, param3: QtC.QChar, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_keys = allocator.alloc(qtc.libqt_string, param2.count()) catch @panic("kmacroexpander.ExpandMacros4: Memory allocation failed");
        defer allocator.free(param2_keys);
        const param2_values = allocator.alloc([][]const u8, param2.count()) catch @panic("kmacroexpander.ExpandMacros4: Memory allocation failed");
        defer allocator.free(param2_values);
        var i: usize = 0;
        var param2_it = param2.iterator();
        while (param2_it.next()) |entry| : (i += 1) {
            const key = entry.key_ptr.*;
            param2_keys[i] = qtc.libqt_string{
                .len = key.len,
                .data = key.ptr,
            };
            param2_values[i] = @ptrCast(entry.value_ptr.*);
        }
        const param2_map = qtc.libqt_map{
            .len = param2.count(),
            .keys = @ptrCast(param2_keys.ptr),
            .values = @ptrCast(param2_values.ptr),
        };
        var _str = qtc.KMacroExpander_ExpandMacros4(param1_str, param2_map, @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmacroexpander.ExpandMacros4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kmacroexpander.html#expandMacrosShellQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: map_qtcqchar_sliceconstu8 `
    ///
    /// ` param3: QtC.QChar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExpandMacrosShellQuote3(param1: []const u8, param2: map_qtcqchar_sliceconstu8, param3: QtC.QChar, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_keys = allocator.alloc(?*anyopaque, param2.count()) catch @panic("kmacroexpander.ExpandMacrosShellQuote3: Memory allocation failed");
        defer allocator.free(param2_keys);
        const param2_values = allocator.alloc([][]const u8, param2.count()) catch @panic("kmacroexpander.ExpandMacrosShellQuote3: Memory allocation failed");
        defer allocator.free(param2_values);
        var i: usize = 0;
        var param2_it = param2.iterator();
        while (param2_it.next()) |entry| : (i += 1) {
            const key = entry.key_ptr.*;
            param2_keys[i] = @ptrCast(key);
            param2_values[i] = @ptrCast(entry.value_ptr.*);
        }
        const param2_map = qtc.libqt_map{
            .len = param2.count(),
            .keys = @ptrCast(param2_keys.ptr),
            .values = @ptrCast(param2_values.ptr),
        };
        var _str = qtc.KMacroExpander_ExpandMacrosShellQuote3(param1_str, param2_map, @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmacroexpander.ExpandMacrosShellQuote3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kmacroexpander.html#expandMacrosShellQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: map_constu8_sliceconstu8 `
    ///
    /// ` param3: QtC.QChar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExpandMacrosShellQuote4(param1: []const u8, param2: map_constu8_sliceconstu8, param3: QtC.QChar, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_keys = allocator.alloc(qtc.libqt_string, param2.count()) catch @panic("kmacroexpander.ExpandMacrosShellQuote4: Memory allocation failed");
        defer allocator.free(param2_keys);
        const param2_values = allocator.alloc([][]const u8, param2.count()) catch @panic("kmacroexpander.ExpandMacrosShellQuote4: Memory allocation failed");
        defer allocator.free(param2_values);
        var i: usize = 0;
        var param2_it = param2.iterator();
        while (param2_it.next()) |entry| : (i += 1) {
            const key = entry.key_ptr.*;
            param2_keys[i] = qtc.libqt_string{
                .len = key.len,
                .data = key.ptr,
            };
            param2_values[i] = @ptrCast(entry.value_ptr.*);
        }
        const param2_map = qtc.libqt_map{
            .len = param2.count(),
            .keys = @ptrCast(param2_keys.ptr),
            .values = @ptrCast(param2_values.ptr),
        };
        var _str = qtc.KMacroExpander_ExpandMacrosShellQuote4(param1_str, param2_map, @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmacroexpander.ExpandMacrosShellQuote4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }
};
