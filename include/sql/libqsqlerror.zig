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

    /// New constructs a new QSqlError object.
    ///
    pub fn New() QSqlError {
        return .{ .ptr = qtc.QSqlError_new() };
    }

    /// New2 constructs a new QSqlError object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSqlError `
    ///
    pub fn New2(other: anytype) QSqlError {
        comptime _ = @TypeOf(other)._is_QSqlError;
        return .{ .ptr = qtc.QSqlError_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QSqlError object.
    ///
    /// ## Parameter(s):
    ///
    /// ` driverText: []const u8 `
    ///
    pub fn New3(driverText: []const u8) QSqlError {
        const driverText_str = qtc.libqt_string{
            .len = driverText.len,
            .data = driverText.ptr,
        };
        return .{ .ptr = qtc.QSqlError_new3(driverText_str) };
    }

    /// New4 constructs a new QSqlError object.
    ///
    /// ## Parameter(s):
    ///
    /// ` driverText: []const u8 `
    ///
    /// ` databaseText: []const u8 `
    ///
    pub fn New4(driverText: []const u8, databaseText: []const u8) QSqlError {
        const driverText_str = qtc.libqt_string{
            .len = driverText.len,
            .data = driverText.ptr,
        };
        const databaseText_str = qtc.libqt_string{
            .len = databaseText.len,
            .data = databaseText.ptr,
        };
        return .{ .ptr = qtc.QSqlError_new4(driverText_str, databaseText_str) };
    }

    /// New5 constructs a new QSqlError object.
    ///
    /// ## Parameter(s):
    ///
    /// ` driverText: []const u8 `
    ///
    /// ` databaseText: []const u8 `
    ///
    /// ` typeVal: qsqlerror_enums.ErrorType `
    ///
    pub fn New5(driverText: []const u8, databaseText: []const u8, typeVal: i32) QSqlError {
        const driverText_str = qtc.libqt_string{
            .len = driverText.len,
            .data = driverText.ptr,
        };
        const databaseText_str = qtc.libqt_string{
            .len = databaseText.len,
            .data = databaseText.ptr,
        };
        return .{ .ptr = qtc.QSqlError_new5(driverText_str, databaseText_str, @bitCast(typeVal)) };
    }

    /// New6 constructs a new QSqlError object.
    ///
    /// ## Parameter(s):
    ///
    /// ` driverText: []const u8 `
    ///
    /// ` databaseText: []const u8 `
    ///
    /// ` typeVal: qsqlerror_enums.ErrorType `
    ///
    /// ` errorCode: []const u8 `
    ///
    pub fn New6(driverText: []const u8, databaseText: []const u8, typeVal: i32, errorCode: []const u8) QSqlError {
        const driverText_str = qtc.libqt_string{
            .len = driverText.len,
            .data = driverText.ptr,
        };
        const databaseText_str = qtc.libqt_string{
            .len = databaseText.len,
            .data = databaseText.ptr,
        };
        const errorCode_str = qtc.libqt_string{
            .len = errorCode.len,
            .data = errorCode.ptr,
        };
        return .{ .ptr = qtc.QSqlError_new6(driverText_str, databaseText_str, @bitCast(typeVal), errorCode_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlerror.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlError `
    ///
    /// ` other: QSqlError `
    ///
    pub fn OperatorAssign(self: QSqlError, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSqlError;
        qtc.QSqlError_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlerror.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlError `
    ///
    /// ` other: QSqlError `
    ///
    pub fn OperatorEqual(self: QSqlError, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QSqlError;
        return qtc.QSqlError_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlerror.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlError `
    ///
    /// ` other: QSqlError `
    ///
    pub fn OperatorNotEqual(self: QSqlError, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QSqlError;
        return qtc.QSqlError_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlerror.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlError `
    ///
    /// ` other: QSqlError `
    ///
    pub fn Swap(self: QSqlError, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSqlError;
        qtc.QSqlError_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlerror.html#driverText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DriverText(self: QSqlError, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlError_DriverText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlerror.DriverText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlerror.html#databaseText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DatabaseText(self: QSqlError, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlError_DatabaseText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlerror.DatabaseText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Type(self: QSqlError) i32 {
        return qtc.QSqlError_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlerror.html#nativeErrorCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NativeErrorCode(self: QSqlError, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlError_NativeErrorCode(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlerror.NativeErrorCode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlerror.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: QSqlError, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlError_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlerror.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlerror.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlError `
    ///
    pub fn IsValid(self: QSqlError) bool {
        return qtc.QSqlError_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlerror.html#dtor.QSqlError)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSqlError `
    ///
    pub fn Delete(self: QSqlError) void {
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
