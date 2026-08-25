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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QWebEngineUrlScheme object in C++ memory
    ///
    pub fn new() QWebEngineUrlScheme {
        return .{ .ptr = qtc.QWebEngineUrlScheme_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QWebEngineUrlScheme object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []u8 `
    ///
    pub fn new2(_name: []u8) QWebEngineUrlScheme {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QWebEngineUrlScheme_new2(name_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QWebEngineUrlScheme object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` that: QWebEngineUrlScheme `
    ///
    pub fn new3(that: anytype) QWebEngineUrlScheme {
        comptime _ = @TypeOf(that)._is_QWebEngineUrlScheme;
        return .{ .ptr = qtc.QWebEngineUrlScheme_new3(@ptrCast(that.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlScheme `
    ///
    /// ` that: QWebEngineUrlScheme `
    ///
    pub fn operatorAssign(self: QWebEngineUrlScheme, that: anytype) void {
        comptime _ = @TypeOf(that)._is_QWebEngineUrlScheme;
        qtc.QWebEngineUrlScheme_OperatorAssign(@ptrCast(self.ptr), @ptrCast(that.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlScheme `
    ///
    /// ` that: QWebEngineUrlScheme `
    ///
    pub fn operatorEqual(self: QWebEngineUrlScheme, that: anytype) bool {
        comptime _ = @TypeOf(that)._is_QWebEngineUrlScheme;
        return qtc.QWebEngineUrlScheme_OperatorEqual(@ptrCast(self.ptr), @ptrCast(that.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlScheme `
    ///
    /// ` that: QWebEngineUrlScheme `
    ///
    pub fn operatorNotEqual(self: QWebEngineUrlScheme, that: anytype) bool {
        comptime _ = @TypeOf(that)._is_QWebEngineUrlScheme;
        return qtc.QWebEngineUrlScheme_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(that.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlScheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QWebEngineUrlScheme, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWebEngineUrlScheme_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QWebEngineUrlScheme.name: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlScheme `
    ///
    /// ` newValue: []u8 `
    ///
    pub fn setName(self: QWebEngineUrlScheme, newValue: []u8) void {
        const newValue_str = qtc.libqt_string{
            .len = newValue.len,
            .data = newValue.ptr,
        };
        qtc.QWebEngineUrlScheme_SetName(@ptrCast(self.ptr), newValue_str);
    }

    /// ### DEPRECATED: Use `syntax` instead
    ///
    pub const Syntax = syntax;

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
    pub fn syntax(self: QWebEngineUrlScheme) i32 {
        return qtc.QWebEngineUrlScheme_Syntax(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSyntax` instead
    ///
    pub const SetSyntax = setSyntax;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#setSyntax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlScheme `
    ///
    /// ` newValue: qwebengineurlscheme_enums.Syntax `
    ///
    pub fn setSyntax(self: QWebEngineUrlScheme, newValue: i32) void {
        qtc.QWebEngineUrlScheme_SetSyntax(@ptrCast(self.ptr), @bitCast(newValue));
    }

    /// ### DEPRECATED: Use `defaultPort` instead
    ///
    pub const DefaultPort = defaultPort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#defaultPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlScheme `
    ///
    pub fn defaultPort(self: QWebEngineUrlScheme) i32 {
        return qtc.QWebEngineUrlScheme_DefaultPort(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDefaultPort` instead
    ///
    pub const SetDefaultPort = setDefaultPort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#setDefaultPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlScheme `
    ///
    /// ` newValue: i32 `
    ///
    pub fn setDefaultPort(self: QWebEngineUrlScheme, newValue: i32) void {
        qtc.QWebEngineUrlScheme_SetDefaultPort(@ptrCast(self.ptr), @bitCast(newValue));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

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
    pub fn flags(self: QWebEngineUrlScheme) i32 {
        return qtc.QWebEngineUrlScheme_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlScheme `
    ///
    /// ` newValue: flag of qwebengineurlscheme_enums.Flag `
    ///
    pub fn setFlags(self: QWebEngineUrlScheme, newValue: i32) void {
        qtc.QWebEngineUrlScheme_SetFlags(@ptrCast(self.ptr), @bitCast(newValue));
    }

    /// ### DEPRECATED: Use `registerScheme` instead
    ///
    pub const RegisterScheme = registerScheme;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#registerScheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` scheme: QWebEngineUrlScheme `
    ///
    pub fn registerScheme(scheme: anytype) void {
        comptime _ = @TypeOf(scheme)._is_QWebEngineUrlScheme;
        qtc.QWebEngineUrlScheme_RegisterScheme(@ptrCast(scheme.ptr));
    }

    /// ### DEPRECATED: Use `schemeByName` instead
    ///
    pub const SchemeByName = schemeByName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#schemeByName)
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []u8 `
    ///
    pub fn schemeByName(_name: []u8) QWebEngineUrlScheme {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QWebEngineUrlScheme_SchemeByName(name_str) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlscheme.html#dtor.QWebEngineUrlScheme)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineUrlScheme `
    ///
    pub fn delete(self: QWebEngineUrlScheme) void {
        qtc.QWebEngineUrlScheme_Delete(@ptrCast(self.ptr));
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
