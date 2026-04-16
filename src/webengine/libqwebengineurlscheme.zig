const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qwebengineurlscheme_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html)
pub const QWebEngineUrlScheme = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWebEngineUrlScheme,

    pub const _is_QWebEngineUrlScheme = {};

    /// New constructs a new QWebEngineUrlScheme object.
    ///
    pub fn New() QWebEngineUrlScheme {
        return .{ .ptr = qtc.QWebEngineUrlScheme_new() };
    }

    /// New2 constructs a new QWebEngineUrlScheme object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []u8 `
    ///
    pub fn New2(name: []u8) QWebEngineUrlScheme {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QWebEngineUrlScheme_new2(name_str) };
    }

    /// New3 constructs a new QWebEngineUrlScheme object.
    ///
    /// ## Parameter(s):
    ///
    /// ` that: QWebEngineUrlScheme `
    ///
    pub fn New3(that: anytype) QWebEngineUrlScheme {
        comptime _ = @TypeOf(that)._is_QWebEngineUrlScheme;
        return .{ .ptr = qtc.QWebEngineUrlScheme_new3(@ptrCast(that.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlScheme `
    ///
    /// ` that: QWebEngineUrlScheme `
    ///
    pub fn OperatorAssign(self: QWebEngineUrlScheme, that: anytype) void {
        comptime _ = @TypeOf(that)._is_QWebEngineUrlScheme;
        qtc.QWebEngineUrlScheme_OperatorAssign(@ptrCast(self.ptr), @ptrCast(that.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlScheme `
    ///
    /// ` that: QWebEngineUrlScheme `
    ///
    pub fn OperatorEqual(self: QWebEngineUrlScheme, that: anytype) bool {
        comptime _ = @TypeOf(that)._is_QWebEngineUrlScheme;
        return qtc.QWebEngineUrlScheme_OperatorEqual(@ptrCast(self.ptr), @ptrCast(that.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlScheme `
    ///
    /// ` that: QWebEngineUrlScheme `
    ///
    pub fn OperatorNotEqual(self: QWebEngineUrlScheme, that: anytype) bool {
        comptime _ = @TypeOf(that)._is_QWebEngineUrlScheme;
        return qtc.QWebEngineUrlScheme_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(that.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlScheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QWebEngineUrlScheme, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWebEngineUrlScheme_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qwebengineurlscheme.Name: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlScheme `
    ///
    /// ` newValue: []u8 `
    ///
    pub fn SetName(self: QWebEngineUrlScheme, newValue: []u8) void {
        const newValue_str = qtc.libqt_string{
            .len = newValue.len,
            .data = newValue.ptr,
        };
        qtc.QWebEngineUrlScheme_SetName(@ptrCast(self.ptr), newValue_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#syntax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlScheme `
    ///
    /// ## Returns:
    ///
    /// ` qwebengineurlscheme_enums.Syntax `
    ///
    pub fn Syntax(self: QWebEngineUrlScheme) i32 {
        return qtc.QWebEngineUrlScheme_Syntax(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#setSyntax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlScheme `
    ///
    /// ` newValue: qwebengineurlscheme_enums.Syntax `
    ///
    pub fn SetSyntax(self: QWebEngineUrlScheme, newValue: i32) void {
        qtc.QWebEngineUrlScheme_SetSyntax(@ptrCast(self.ptr), @bitCast(newValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#defaultPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlScheme `
    ///
    pub fn DefaultPort(self: QWebEngineUrlScheme) i32 {
        return qtc.QWebEngineUrlScheme_DefaultPort(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#setDefaultPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlScheme `
    ///
    /// ` newValue: i32 `
    ///
    pub fn SetDefaultPort(self: QWebEngineUrlScheme, newValue: i32) void {
        qtc.QWebEngineUrlScheme_SetDefaultPort(@ptrCast(self.ptr), @bitCast(newValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlScheme `
    ///
    /// ## Returns:
    ///
    /// ` flag of qwebengineurlscheme_enums.Flag `
    ///
    pub fn Flags(self: QWebEngineUrlScheme) i32 {
        return qtc.QWebEngineUrlScheme_Flags(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlScheme `
    ///
    /// ` newValue: flag of qwebengineurlscheme_enums.Flag `
    ///
    pub fn SetFlags(self: QWebEngineUrlScheme, newValue: i32) void {
        qtc.QWebEngineUrlScheme_SetFlags(@ptrCast(self.ptr), @bitCast(newValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#registerScheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` scheme: QWebEngineUrlScheme `
    ///
    pub fn RegisterScheme(scheme: anytype) void {
        comptime _ = @TypeOf(scheme)._is_QWebEngineUrlScheme;
        qtc.QWebEngineUrlScheme_RegisterScheme(@ptrCast(scheme.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#schemeByName)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []u8 `
    ///
    pub fn SchemeByName(name: []u8) QWebEngineUrlScheme {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QWebEngineUrlScheme_SchemeByName(name_str) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#dtor.QWebEngineUrlScheme)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineUrlScheme `
    ///
    pub fn Delete(self: QWebEngineUrlScheme) void {
        qtc.QWebEngineUrlScheme_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#public-types)
pub const enums = struct {
    pub const Syntax = enum(i32) {
        pub const HostPortAndUserInformation: i32 = 0;
        pub const HostAndPort: i32 = 1;
        pub const Host: i32 = 2;
        pub const Path: i32 = 3;
    };

    pub const SpecialPort = enum(i32) {
        pub const PortUnspecified: i32 = -1;
    };

    pub const Flag = enum(i32) {
        pub const SecureScheme: i32 = 1;
        pub const LocalScheme: i32 = 2;
        pub const LocalAccessAllowed: i32 = 4;
        pub const NoAccessAllowed: i32 = 8;
        pub const ServiceWorkersAllowed: i32 = 16;
        pub const ViewSourceAllowed: i32 = 32;
        pub const ContentSecurityPolicyIgnored: i32 = 64;
        pub const CorsEnabled: i32 = 128;
        pub const FetchApiAllowed: i32 = 256;
    };
};
