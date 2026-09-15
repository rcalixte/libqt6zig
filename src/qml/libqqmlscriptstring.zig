const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlscriptstring.html)
pub const QQmlScriptString = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlscriptstring.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQmlScriptString,

    pub const _is_QQmlScriptString = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQmlScriptString object in C++ memory
    ///
    pub fn new() QQmlScriptString {
        return .{ .ptr = qtc.QQmlScriptString_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QQmlScriptString object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QQmlScriptString `
    ///
    pub fn new2(param1: anytype) QQmlScriptString {
        comptime _ = @TypeOf(param1)._is_QQmlScriptString;
        return .{ .ptr = qtc.QQmlScriptString_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlscriptstring.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlScriptString `
    ///
    /// ` param1: QQmlScriptString `
    ///
    pub fn operatorAssign(self: QQmlScriptString, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QQmlScriptString;
        qtc.QQmlScriptString_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlscriptstring.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlScriptString `
    ///
    /// ` param1: QQmlScriptString `
    ///
    pub fn operatorEqual(self: QQmlScriptString, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QQmlScriptString;
        return qtc.QQmlScriptString_OperatorEqual(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlscriptstring.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlScriptString `
    ///
    /// ` param1: QQmlScriptString `
    ///
    pub fn operatorNotEqual(self: QQmlScriptString, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QQmlScriptString;
        return qtc.QQmlScriptString_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlscriptstring.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlScriptString `
    ///
    pub fn isEmpty(self: QQmlScriptString) bool {
        return qtc.QQmlScriptString_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUndefinedLiteral` instead
    ///
    pub const IsUndefinedLiteral = isUndefinedLiteral;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlscriptstring.html#isUndefinedLiteral)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlScriptString `
    ///
    pub fn isUndefinedLiteral(self: QQmlScriptString) bool {
        return qtc.QQmlScriptString_IsUndefinedLiteral(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNullLiteral` instead
    ///
    pub const IsNullLiteral = isNullLiteral;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlscriptstring.html#isNullLiteral)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlScriptString `
    ///
    pub fn isNullLiteral(self: QQmlScriptString) bool {
        return qtc.QQmlScriptString_IsNullLiteral(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `stringLiteral` instead
    ///
    pub const StringLiteral = stringLiteral;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlscriptstring.html#stringLiteral)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlScriptString `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn stringLiteral(self: QQmlScriptString, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QQmlScriptString_StringLiteral(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQmlScriptString.stringLiteral: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `numberLiteral` instead
    ///
    pub const NumberLiteral = numberLiteral;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlscriptstring.html#numberLiteral)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlScriptString `
    ///
    /// ` ok: *bool `
    ///
    pub fn numberLiteral(self: QQmlScriptString, ok: *bool) f64 {
        return qtc.QQmlScriptString_NumberLiteral(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### DEPRECATED: Use `booleanLiteral` instead
    ///
    pub const BooleanLiteral = booleanLiteral;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlscriptstring.html#booleanLiteral)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlScriptString `
    ///
    /// ` ok: *bool `
    ///
    pub fn booleanLiteral(self: QQmlScriptString, ok: *bool) bool {
        return qtc.QQmlScriptString_BooleanLiteral(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlscriptstring.html#dtor.QQmlScriptString)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQmlScriptString `
    ///
    pub fn delete(self: QQmlScriptString) void {
        qtc.QQmlScriptString_Delete(@ptrCast(self.ptr));
    }
};
