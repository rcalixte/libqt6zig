const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtenvironmentvariables-h.html)
pub const qtenvironmentvariables_h = extern struct {
    /// ### DEPRECATED: Use `qgetenv` instead
    ///
    pub const Qgetenv = qgetenv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtenvironmentvariables-h.html#qgetenv)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` varName: [:0]const u8 `
    ///
    pub fn qgetenv(allocator: std.mem.Allocator, varName: [:0]const u8) []u8 {
        const varName_Cstring = varName.ptr;
        var _bytearray: qtc.libqt_string = qtc.qtenvironmentvariables_h_Qgetenv(varName_Cstring);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtenvironmentvariables_h.qgetenv: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `qputenv` instead
    ///
    pub const Qputenv = qputenv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtenvironmentvariables-h.html#qputenv)
    ///
    /// ## Parameter(s):
    ///
    /// ` varName: [:0]const u8 `
    ///
    /// ` value: []u8 `
    ///
    pub fn qputenv(varName: [:0]const u8, value: []u8) bool {
        const varName_Cstring = varName.ptr;
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        return qtc.qtenvironmentvariables_h_Qputenv(varName_Cstring, value_str);
    }

    /// ### DEPRECATED: Use `qunsetenv` instead
    ///
    pub const Qunsetenv = qunsetenv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtenvironmentvariables-h.html#qunsetenv)
    ///
    /// ## Parameter(s):
    ///
    /// ` varName: [:0]const u8 `
    ///
    pub fn qunsetenv(varName: [:0]const u8) bool {
        const varName_Cstring = varName.ptr;
        return qtc.qtenvironmentvariables_h_Qunsetenv(varName_Cstring);
    }
};
