const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QObject = @import("libqt6").QObject;
const QUrl = @import("libqt6").QUrl;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlerror.html)
pub const QQmlError = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlerror.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQmlError,

    pub const _is_QQmlError = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQmlError object in C++ memory
    ///
    pub fn new() QQmlError {
        return .{ .ptr = qtc.QQmlError_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QQmlError object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QQmlError `
    ///
    pub fn new2(param1: anytype) QQmlError {
        comptime _ = @TypeOf(param1)._is_QQmlError;
        return .{ .ptr = qtc.QQmlError_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlerror.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlError `
    ///
    /// ` param1: QQmlError `
    ///
    pub fn operatorAssign(self: QQmlError, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QQmlError;
        qtc.QQmlError_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlerror.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlError `
    ///
    /// ` other: QQmlError `
    ///
    pub fn swap(self: QQmlError, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QQmlError;
        qtc.QQmlError_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlerror.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlError `
    ///
    pub fn isValid(self: QQmlError) bool {
        return qtc.QQmlError_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlerror.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlError `
    ///
    pub fn url(self: QQmlError) QUrl {
        return .{ .ptr = qtc.QQmlError_Url(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setUrl` instead
    ///
    pub const SetUrl = setUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlerror.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlError `
    ///
    /// ` _url: QUrl `
    ///
    pub fn setUrl(self: QQmlError, _url: anytype) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.QQmlError_SetUrl(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlerror.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn description(self: QQmlError, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QQmlError_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQmlError.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDescription` instead
    ///
    pub const SetDescription = setDescription;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlerror.html#setDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlError `
    ///
    /// ` _description: []const u8 `
    ///
    pub fn setDescription(self: QQmlError, _description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = _description.len,
            .data = _description.ptr,
        };
        qtc.QQmlError_SetDescription(@ptrCast(self.ptr), description_str);
    }

    /// ### DEPRECATED: Use `line` instead
    ///
    pub const Line = line;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlerror.html#line)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlError `
    ///
    pub fn line(self: QQmlError) i32 {
        return qtc.QQmlError_Line(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLine` instead
    ///
    pub const SetLine = setLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlerror.html#setLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlError `
    ///
    /// ` _line: i32 `
    ///
    pub fn setLine(self: QQmlError, _line: i32) void {
        qtc.QQmlError_SetLine(@ptrCast(self.ptr), @bitCast(_line));
    }

    /// ### DEPRECATED: Use `column` instead
    ///
    pub const Column = column;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlerror.html#column)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlError `
    ///
    pub fn column(self: QQmlError) i32 {
        return qtc.QQmlError_Column(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setColumn` instead
    ///
    pub const SetColumn = setColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlerror.html#setColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlError `
    ///
    /// ` _column: i32 `
    ///
    pub fn setColumn(self: QQmlError, _column: i32) void {
        qtc.QQmlError_SetColumn(@ptrCast(self.ptr), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `object` instead
    ///
    pub const Object = object;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlerror.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlError `
    ///
    pub fn object(self: QQmlError) QObject {
        return .{ .ptr = qtc.QQmlError_Object(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setObject` instead
    ///
    pub const SetObject = setObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlerror.html#setObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlError `
    ///
    /// ` _object: QObject `
    ///
    pub fn setObject(self: QQmlError, _object: anytype) void {
        comptime _ = @TypeOf(_object)._is_QObject;
        qtc.QQmlError_SetObject(@ptrCast(self.ptr), @ptrCast(_object.ptr));
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlerror.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: QQmlError, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QQmlError_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQmlError.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlerror.html#dtor.QQmlError)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQmlError `
    ///
    pub fn delete(self: QQmlError) void {
        qtc.QQmlError_Delete(@ptrCast(self.ptr));
    }
};
