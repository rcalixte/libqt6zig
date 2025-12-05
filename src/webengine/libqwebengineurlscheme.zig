const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qwebengineurlscheme_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html)
pub const qwebengineurlscheme = struct {
    /// New constructs a new QWebEngineUrlScheme object.
    ///
    pub fn New() QtC.QWebEngineUrlScheme {
        return qtc.QWebEngineUrlScheme_new();
    }

    /// New2 constructs a new QWebEngineUrlScheme object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []u8 `
    ///
    pub fn New2(name: []u8) QtC.QWebEngineUrlScheme {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QWebEngineUrlScheme_new2(name_str);
    }

    /// New3 constructs a new QWebEngineUrlScheme object.
    ///
    /// ## Parameter(s):
    ///
    /// ` that: QtC.QWebEngineUrlScheme `
    ///
    pub fn New3(that: ?*anyopaque) QtC.QWebEngineUrlScheme {
        return qtc.QWebEngineUrlScheme_new3(@ptrCast(that));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineUrlScheme `
    ///
    /// ` that: QtC.QWebEngineUrlScheme `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, that: ?*anyopaque) void {
        qtc.QWebEngineUrlScheme_OperatorAssign(@ptrCast(self), @ptrCast(that));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineUrlScheme `
    ///
    /// ` that: QtC.QWebEngineUrlScheme `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, that: ?*anyopaque) bool {
        return qtc.QWebEngineUrlScheme_OperatorEqual(@ptrCast(self), @ptrCast(that));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineUrlScheme `
    ///
    /// ` that: QtC.QWebEngineUrlScheme `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, that: ?*anyopaque) bool {
        return qtc.QWebEngineUrlScheme_OperatorNotEqual(@ptrCast(self), @ptrCast(that));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineUrlScheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QWebEngineUrlScheme_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qwebengineurlscheme.Name: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineUrlScheme `
    ///
    /// ` newValue: []u8 `
    ///
    pub fn SetName(self: ?*anyopaque, newValue: []u8) void {
        const newValue_str = qtc.libqt_string{
            .len = newValue.len,
            .data = newValue.ptr,
        };
        qtc.QWebEngineUrlScheme_SetName(@ptrCast(self), newValue_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#syntax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineUrlScheme `
    ///
    /// ## Returns:
    ///
    /// ` qwebengineurlscheme_enums.Syntax `
    ///
    pub fn Syntax(self: ?*anyopaque) i32 {
        return qtc.QWebEngineUrlScheme_Syntax(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#setSyntax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineUrlScheme `
    ///
    /// ` newValue: qwebengineurlscheme_enums.Syntax `
    ///
    pub fn SetSyntax(self: ?*anyopaque, newValue: i32) void {
        qtc.QWebEngineUrlScheme_SetSyntax(@ptrCast(self), @intCast(newValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#defaultPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineUrlScheme `
    ///
    pub fn DefaultPort(self: ?*anyopaque) i32 {
        return qtc.QWebEngineUrlScheme_DefaultPort(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#setDefaultPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineUrlScheme `
    ///
    /// ` newValue: i32 `
    ///
    pub fn SetDefaultPort(self: ?*anyopaque, newValue: i32) void {
        qtc.QWebEngineUrlScheme_SetDefaultPort(@ptrCast(self), @intCast(newValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineUrlScheme `
    ///
    /// ## Returns:
    ///
    /// ` flag of qwebengineurlscheme_enums.Flag `
    ///
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.QWebEngineUrlScheme_Flags(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineUrlScheme `
    ///
    /// ` newValue: flag of qwebengineurlscheme_enums.Flag `
    ///
    pub fn SetFlags(self: ?*anyopaque, newValue: i32) void {
        qtc.QWebEngineUrlScheme_SetFlags(@ptrCast(self), @intCast(newValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#registerScheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` scheme: QtC.QWebEngineUrlScheme `
    ///
    pub fn RegisterScheme(scheme: ?*anyopaque) void {
        qtc.QWebEngineUrlScheme_RegisterScheme(@ptrCast(scheme));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#schemeByName)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []u8 `
    ///
    pub fn SchemeByName(name: []u8) QtC.QWebEngineUrlScheme {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QWebEngineUrlScheme_SchemeByName(name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#dtor.QWebEngineUrlScheme)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QWebEngineUrlScheme `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWebEngineUrlScheme_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#public-types)
pub const enums = struct {
    pub const Syntax = enum {
        pub const HostPortAndUserInformation: i32 = 0;
        pub const HostAndPort: i32 = 1;
        pub const Host: i32 = 2;
        pub const Path: i32 = 3;
    };

    pub const SpecialPort = enum {
        pub const PortUnspecified: i32 = -1;
    };

    pub const Flag = enum {
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
