const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qsqlerror_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlerror.html)
pub const QSqlError = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlerror.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSqlError,

    pub const _is_QSqlError = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSqlError object in C++ memory
    ///
    pub fn new() QSqlError {
        return .{ .ptr = qtc.QSqlError_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSqlError object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSqlError `
    ///
    pub fn new2(other: anytype) QSqlError {
        comptime _ = @TypeOf(other)._is_QSqlError;
        return .{ .ptr = qtc.QSqlError_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QSqlError object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _driverText: []const u8 `
    ///
    pub fn new3(_driverText: []const u8) QSqlError {
        const driverText_str = qtc.libqt_string{
            .len = _driverText.len,
            .data = _driverText.ptr,
        };
        return .{ .ptr = qtc.QSqlError_new3(driverText_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QSqlError object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _driverText: []const u8 `
    ///
    /// ` _databaseText: []const u8 `
    ///
    pub fn new4(_driverText: []const u8, _databaseText: []const u8) QSqlError {
        const driverText_str = qtc.libqt_string{
            .len = _driverText.len,
            .data = _driverText.ptr,
        };
        const databaseText_str = qtc.libqt_string{
            .len = _databaseText.len,
            .data = _databaseText.ptr,
        };
        return .{ .ptr = qtc.QSqlError_new4(driverText_str, databaseText_str) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QSqlError object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _driverText: []const u8 `
    ///
    /// ` _databaseText: []const u8 `
    ///
    /// ` typeVal: qsqlerror_enums.ErrorType `
    ///
    pub fn new5(_driverText: []const u8, _databaseText: []const u8, typeVal: i32) QSqlError {
        const driverText_str = qtc.libqt_string{
            .len = _driverText.len,
            .data = _driverText.ptr,
        };
        const databaseText_str = qtc.libqt_string{
            .len = _databaseText.len,
            .data = _databaseText.ptr,
        };
        return .{ .ptr = qtc.QSqlError_new5(driverText_str, databaseText_str, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QSqlError object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _driverText: []const u8 `
    ///
    /// ` _databaseText: []const u8 `
    ///
    /// ` typeVal: qsqlerror_enums.ErrorType `
    ///
    /// ` errorCode: []const u8 `
    ///
    pub fn new6(_driverText: []const u8, _databaseText: []const u8, typeVal: i32, errorCode: []const u8) QSqlError {
        const driverText_str = qtc.libqt_string{
            .len = _driverText.len,
            .data = _driverText.ptr,
        };
        const databaseText_str = qtc.libqt_string{
            .len = _databaseText.len,
            .data = _databaseText.ptr,
        };
        const errorCode_str = qtc.libqt_string{
            .len = errorCode.len,
            .data = errorCode.ptr,
        };
        return .{ .ptr = qtc.QSqlError_new6(driverText_str, databaseText_str, @bitCast(typeVal), errorCode_str) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlerror.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlError `
    ///
    /// ` other: QSqlError `
    ///
    pub fn operatorAssign(self: QSqlError, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSqlError;
        qtc.QSqlError_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlerror.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlError `
    ///
    /// ` other: QSqlError `
    ///
    pub fn operatorEqual(self: QSqlError, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QSqlError;
        return qtc.QSqlError_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlerror.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlError `
    ///
    /// ` other: QSqlError `
    ///
    pub fn operatorNotEqual(self: QSqlError, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QSqlError;
        return qtc.QSqlError_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlerror.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlError `
    ///
    /// ` other: QSqlError `
    ///
    pub fn swap(self: QSqlError, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSqlError;
        qtc.QSqlError_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `driverText` instead
    ///
    pub const DriverText = driverText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlerror.html#driverText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn driverText(self: QSqlError, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlError_DriverText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSqlError.driverText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `databaseText` instead
    ///
    pub const DatabaseText = databaseText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlerror.html#databaseText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn databaseText(self: QSqlError, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlError_DatabaseText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSqlError.databaseText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlerror.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlError `
    ///
    /// ## Returns:
    ///
    /// ` qsqlerror_enums.ErrorType `
    ///
    pub fn type0(self: QSqlError) i32 {
        return qtc.QSqlError_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nativeErrorCode` instead
    ///
    pub const NativeErrorCode = nativeErrorCode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlerror.html#nativeErrorCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn nativeErrorCode(self: QSqlError, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlError_NativeErrorCode(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSqlError.nativeErrorCode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlerror.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: QSqlError, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlError_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSqlError.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlerror.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlError `
    ///
    pub fn isValid(self: QSqlError) bool {
        return qtc.QSqlError_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlerror.html#dtor.QSqlError)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSqlError `
    ///
    pub fn delete(self: QSqlError) void {
        qtc.QSqlError_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlerror.html#public-types)
pub const enums = struct {
    pub const ErrorType = enum(i32) {
        pub const NoError: i32 = 0;
        pub const ConnectionError: i32 = 1;
        pub const StatementError: i32 = 2;
        pub const TransactionError: i32 = 3;
        pub const UnknownError: i32 = 4;
    };
};
