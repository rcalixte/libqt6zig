const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qsqlerror_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qsqlerror.html
pub const qsqlerror = struct {
    /// New constructs a new QSqlError object.
    ///
    ///
    pub fn New() QtC.QSqlError {
        return qtc.QSqlError_new();
    }

    /// New2 constructs a new QSqlError object.
    ///
    /// ``` other: QtC.QSqlError ```
    pub fn New2(other: ?*anyopaque) QtC.QSqlError {
        return qtc.QSqlError_new2(@ptrCast(other));
    }

    /// New3 constructs a new QSqlError object.
    ///
    /// ``` driverText: []const u8 ```
    pub fn New3(driverText: []const u8) QtC.QSqlError {
        const driverText_str = qtc.libqt_string{
            .len = driverText.len,
            .data = driverText.ptr,
        };

        return qtc.QSqlError_new3(driverText_str);
    }

    /// New4 constructs a new QSqlError object.
    ///
    /// ``` driverText: []const u8, databaseText: []const u8 ```
    pub fn New4(driverText: []const u8, databaseText: []const u8) QtC.QSqlError {
        const driverText_str = qtc.libqt_string{
            .len = driverText.len,
            .data = driverText.ptr,
        };
        const databaseText_str = qtc.libqt_string{
            .len = databaseText.len,
            .data = databaseText.ptr,
        };

        return qtc.QSqlError_new4(driverText_str, databaseText_str);
    }

    /// New5 constructs a new QSqlError object.
    ///
    /// ``` driverText: []const u8, databaseText: []const u8, typeVal: qsqlerror_enums.ErrorType ```
    pub fn New5(driverText: []const u8, databaseText: []const u8, typeVal: i32) QtC.QSqlError {
        const driverText_str = qtc.libqt_string{
            .len = driverText.len,
            .data = driverText.ptr,
        };
        const databaseText_str = qtc.libqt_string{
            .len = databaseText.len,
            .data = databaseText.ptr,
        };

        return qtc.QSqlError_new5(driverText_str, databaseText_str, @intCast(typeVal));
    }

    /// New6 constructs a new QSqlError object.
    ///
    /// ``` driverText: []const u8, databaseText: []const u8, typeVal: qsqlerror_enums.ErrorType, errorCode: []const u8 ```
    pub fn New6(driverText: []const u8, databaseText: []const u8, typeVal: i32, errorCode: []const u8) QtC.QSqlError {
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

        return qtc.QSqlError_new6(driverText_str, databaseText_str, @intCast(typeVal), errorCode_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlerror.html#operator-eq)
    ///
    /// ``` self: QtC.QSqlError, other: QtC.QSqlError ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSqlError_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlerror.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QSqlError, other: QtC.QSqlError ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QSqlError_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlerror.html#operator-not-eq)
    ///
    /// ``` self: QtC.QSqlError, other: QtC.QSqlError ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QSqlError_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlerror.html#swap)
    ///
    /// ``` self: QtC.QSqlError, other: QtC.QSqlError ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSqlError_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlerror.html#driverText)
    ///
    /// ``` self: QtC.QSqlError, allocator: std.mem.Allocator ```
    pub fn DriverText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlError_DriverText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlerror.DriverText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlerror.html#databaseText)
    ///
    /// ``` self: QtC.QSqlError, allocator: std.mem.Allocator ```
    pub fn DatabaseText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlError_DatabaseText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlerror.DatabaseText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlerror.html#type)
    ///
    /// ``` self: QtC.QSqlError ```
    ///
    /// Returns: ``` qsqlerror_enums.ErrorType ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QSqlError_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlerror.html#nativeErrorCode)
    ///
    /// ``` self: QtC.QSqlError, allocator: std.mem.Allocator ```
    pub fn NativeErrorCode(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlError_NativeErrorCode(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlerror.NativeErrorCode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlerror.html#text)
    ///
    /// ``` self: QtC.QSqlError, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlError_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlerror.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlerror.html#isValid)
    ///
    /// ``` self: QtC.QSqlError ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QSqlError_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlerror.html#dtor.QSqlError)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSqlError ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSqlError_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qsqlerror.html#types
pub const enums = struct {
    pub const ErrorType = enum {
        pub const NoError: i32 = 0;
        pub const ConnectionError: i32 = 1;
        pub const StatementError: i32 = 2;
        pub const TransactionError: i32 = 3;
        pub const UnknownError: i32 = 4;
    };
};
