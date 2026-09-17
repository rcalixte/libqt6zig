const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtenvironmentvariables.html)
pub const qtenvironmentvariables = extern struct {
    /// ### DEPRECATED: Use `qgetenv` instead
    ///
    pub const Qgetenv = qgetenv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtenvironmentvariables.html#qgetenv)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` varName: [:0]const u8 `
    ///
    pub fn qgetenv(allocator: std.mem.Allocator, varName: [:0]const u8) []u8 {
        const varName_Cstring = varName.ptr;
        var _bytearray: qtc.libqt_string = qtc.qtenvironmentvariables_Qgetenv(varName_Cstring);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtenvironmentvariables.qgetenv: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `qEnvironmentVariable` instead
    ///
    pub const QEnvironmentVariable = qEnvironmentVariable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtenvironmentvariables.html#qEnvironmentVariable)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` varName: [:0]const u8 `
    ///
    pub fn qEnvironmentVariable(allocator: std.mem.Allocator, varName: [:0]const u8) []const u8 {
        const varName_Cstring = varName.ptr;
        var _str = qtc.qtenvironmentvariables_QEnvironmentVariable(varName_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtenvironmentvariables.qEnvironmentVariable: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `qEnvironmentVariable2` instead
    ///
    pub const QEnvironmentVariable2 = qEnvironmentVariable2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtenvironmentvariables.html#qEnvironmentVariable)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` varName: [:0]const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn qEnvironmentVariable2(allocator: std.mem.Allocator, varName: [:0]const u8, defaultValue: []const u8) []const u8 {
        const varName_Cstring = varName.ptr;
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _str = qtc.qtenvironmentvariables_QEnvironmentVariable2(varName_Cstring, defaultValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtenvironmentvariables.qEnvironmentVariable2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `qputenv` instead
    ///
    pub const Qputenv = qputenv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtenvironmentvariables.html#qputenv)
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
        return qtc.qtenvironmentvariables_Qputenv(varName_Cstring, value_str);
    }

    /// ### DEPRECATED: Use `qunsetenv` instead
    ///
    pub const Qunsetenv = qunsetenv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtenvironmentvariables.html#qunsetenv)
    ///
    /// ## Parameter(s):
    ///
    /// ` varName: [:0]const u8 `
    ///
    pub fn qunsetenv(varName: [:0]const u8) bool {
        const varName_Cstring = varName.ptr;
        return qtc.qtenvironmentvariables_Qunsetenv(varName_Cstring);
    }

    /// ### DEPRECATED: Use `qEnvironmentVariableIsEmpty` instead
    ///
    pub const QEnvironmentVariableIsEmpty = qEnvironmentVariableIsEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtenvironmentvariables.html#qEnvironmentVariableIsEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` varName: [:0]const u8 `
    ///
    pub fn qEnvironmentVariableIsEmpty(varName: [:0]const u8) bool {
        const varName_Cstring = varName.ptr;
        return qtc.qtenvironmentvariables_QEnvironmentVariableIsEmpty(varName_Cstring);
    }

    /// ### DEPRECATED: Use `qEnvironmentVariableIsSet` instead
    ///
    pub const QEnvironmentVariableIsSet = qEnvironmentVariableIsSet;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtenvironmentvariables.html#qEnvironmentVariableIsSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` varName: [:0]const u8 `
    ///
    pub fn qEnvironmentVariableIsSet(varName: [:0]const u8) bool {
        const varName_Cstring = varName.ptr;
        return qtc.qtenvironmentvariables_QEnvironmentVariableIsSet(varName_Cstring);
    }

    /// ### DEPRECATED: Use `qEnvironmentVariableIntValue` instead
    ///
    pub const QEnvironmentVariableIntValue = qEnvironmentVariableIntValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtenvironmentvariables.html#qEnvironmentVariableIntValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` varName: [:0]const u8 `
    ///
    /// ` ok: *bool `
    ///
    pub fn qEnvironmentVariableIntValue(varName: [:0]const u8, ok: *bool) i32 {
        const varName_Cstring = varName.ptr;
        return qtc.qtenvironmentvariables_QEnvironmentVariableIntValue(varName_Cstring, @ptrCast(ok));
    }
};
