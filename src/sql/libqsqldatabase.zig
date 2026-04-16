const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QSqlDriver = @import("libqt6").QSqlDriver;
const QSqlError = @import("libqt6").QSqlError;
const QSqlIndex = @import("libqt6").QSqlIndex;
const QSqlQuery = @import("libqt6").QSqlQuery;
const QSqlRecord = @import("libqt6").QSqlRecord;
const QThread = @import("libqt6").QThread;
const qtsqlglobal_enums = @import("libqtsqlglobal.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldrivercreatorbase.html)
pub const QSqlDriverCreatorBase = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldrivercreatorbase.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSqlDriverCreatorBase,

    pub const _is_QSqlDriverCreatorBase = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldrivercreatorbase.html#createObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriverCreatorBase `
    ///
    pub fn CreateObject(self: QSqlDriverCreatorBase) QSqlDriver {
        return .{ .ptr = qtc.QSqlDriverCreatorBase_CreateObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldrivercreatorbase.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriverCreatorBase `
    ///
    /// ` param1: QSqlDriverCreatorBase `
    ///
    pub fn OperatorAssign(self: QSqlDriverCreatorBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSqlDriverCreatorBase;
        qtc.QSqlDriverCreatorBase_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldrivercreatorbase.html#dtor.QSqlDriverCreatorBase)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSqlDriverCreatorBase `
    ///
    pub fn Delete(self: QSqlDriverCreatorBase) void {
        qtc.QSqlDriverCreatorBase_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html)
pub const QSqlDatabase = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSqlDatabase,

    pub const _is_QSqlDatabase = {};

    /// New constructs a new QSqlDatabase object.
    ///
    pub fn New() QSqlDatabase {
        return .{ .ptr = qtc.QSqlDatabase_new() };
    }

    /// New2 constructs a new QSqlDatabase object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSqlDatabase `
    ///
    pub fn New2(other: anytype) QSqlDatabase {
        comptime _ = @TypeOf(other)._is_QSqlDatabase;
        return .{ .ptr = qtc.QSqlDatabase_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` other: QSqlDatabase `
    ///
    pub fn OperatorAssign(self: QSqlDatabase, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSqlDatabase;
        qtc.QSqlDatabase_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    pub fn Open(self: QSqlDatabase) bool {
        return qtc.QSqlDatabase_Open(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` user: []const u8 `
    ///
    /// ` password: []const u8 `
    ///
    pub fn Open2(self: QSqlDatabase, user: []const u8, password: []const u8) bool {
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        return qtc.QSqlDatabase_Open2(@ptrCast(self.ptr), user_str, password_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    pub fn Close(self: QSqlDatabase) void {
        qtc.QSqlDatabase_Close(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#isOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    pub fn IsOpen(self: QSqlDatabase) bool {
        return qtc.QSqlDatabase_IsOpen(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#isOpenError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    pub fn IsOpenError(self: QSqlDatabase) bool {
        return qtc.QSqlDatabase_IsOpenError(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#tables)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tables(self: QSqlDatabase, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlDatabase_Tables(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qsqldatabase.Tables: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsqldatabase.Tables: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#primaryIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` tablename: []const u8 `
    ///
    pub fn PrimaryIndex(self: QSqlDatabase, tablename: []const u8) QSqlIndex {
        const tablename_str = qtc.libqt_string{
            .len = tablename.len,
            .data = tablename.ptr,
        };
        return .{ .ptr = qtc.QSqlDatabase_PrimaryIndex(@ptrCast(self.ptr), tablename_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#record)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` tablename: []const u8 `
    ///
    pub fn Record(self: QSqlDatabase, tablename: []const u8) QSqlRecord {
        const tablename_str = qtc.libqt_string{
            .len = tablename.len,
            .data = tablename.ptr,
        };
        return .{ .ptr = qtc.QSqlDatabase_Record(@ptrCast(self.ptr), tablename_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    pub fn Exec(self: QSqlDatabase) QSqlQuery {
        return .{ .ptr = qtc.QSqlDatabase_Exec(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#lastError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    pub fn LastError(self: QSqlDatabase) QSqlError {
        return .{ .ptr = qtc.QSqlDatabase_LastError(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    pub fn IsValid(self: QSqlDatabase) bool {
        return qtc.QSqlDatabase_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#transaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    pub fn Transaction(self: QSqlDatabase) bool {
        return qtc.QSqlDatabase_Transaction(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#commit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    pub fn Commit(self: QSqlDatabase) bool {
        return qtc.QSqlDatabase_Commit(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#rollback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    pub fn Rollback(self: QSqlDatabase) bool {
        return qtc.QSqlDatabase_Rollback(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#setDatabaseName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetDatabaseName(self: QSqlDatabase, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QSqlDatabase_SetDatabaseName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#setUserName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetUserName(self: QSqlDatabase, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QSqlDatabase_SetUserName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#setPassword)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` password: []const u8 `
    ///
    pub fn SetPassword(self: QSqlDatabase, password: []const u8) void {
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        qtc.QSqlDatabase_SetPassword(@ptrCast(self.ptr), password_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#setHostName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` host: []const u8 `
    ///
    pub fn SetHostName(self: QSqlDatabase, host: []const u8) void {
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        qtc.QSqlDatabase_SetHostName(@ptrCast(self.ptr), host_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#setPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` p: i32 `
    ///
    pub fn SetPort(self: QSqlDatabase, p: i32) void {
        qtc.QSqlDatabase_SetPort(@ptrCast(self.ptr), @bitCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#setConnectOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    pub fn SetConnectOptions(self: QSqlDatabase) void {
        qtc.QSqlDatabase_SetConnectOptions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#databaseName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DatabaseName(self: QSqlDatabase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlDatabase_DatabaseName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldatabase.DatabaseName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#userName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UserName(self: QSqlDatabase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlDatabase_UserName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldatabase.UserName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#password)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Password(self: QSqlDatabase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlDatabase_Password(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldatabase.Password: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#hostName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn HostName(self: QSqlDatabase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlDatabase_HostName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldatabase.HostName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#driverName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DriverName(self: QSqlDatabase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlDatabase_DriverName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldatabase.DriverName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#port)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    pub fn Port(self: QSqlDatabase) i32 {
        return qtc.QSqlDatabase_Port(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#connectOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ConnectOptions(self: QSqlDatabase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlDatabase_ConnectOptions(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldatabase.ConnectOptions: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#connectionName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ConnectionName(self: QSqlDatabase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlDatabase_ConnectionName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldatabase.ConnectionName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#setNumericalPrecisionPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` precisionPolicy: qtsqlglobal_enums.NumericalPrecisionPolicy `
    ///
    pub fn SetNumericalPrecisionPolicy(self: QSqlDatabase, precisionPolicy: i32) void {
        qtc.QSqlDatabase_SetNumericalPrecisionPolicy(@ptrCast(self.ptr), @bitCast(precisionPolicy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#numericalPrecisionPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ## Returns:
    ///
    /// ` qtsqlglobal_enums.NumericalPrecisionPolicy `
    ///
    pub fn NumericalPrecisionPolicy(self: QSqlDatabase) i32 {
        return qtc.QSqlDatabase_NumericalPrecisionPolicy(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` targetThread: QThread `
    ///
    pub fn MoveToThread(self: QSqlDatabase, targetThread: anytype) bool {
        comptime _ = @TypeOf(targetThread)._is_QThread;
        return qtc.QSqlDatabase_MoveToThread(@ptrCast(self.ptr), @ptrCast(targetThread.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    pub fn Thread(self: QSqlDatabase) QThread {
        return .{ .ptr = qtc.QSqlDatabase_Thread(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#driver)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    pub fn Driver(self: QSqlDatabase) QSqlDriver {
        return .{ .ptr = qtc.QSqlDatabase_Driver(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#addDatabase)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: []const u8 `
    ///
    pub fn AddDatabase(typeVal: []const u8) QSqlDatabase {
        const typeVal_str = qtc.libqt_string{
            .len = typeVal.len,
            .data = typeVal.ptr,
        };
        return .{ .ptr = qtc.QSqlDatabase_AddDatabase(typeVal_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#addDatabase)
    ///
    /// ## Parameter(s):
    ///
    /// ` driver: QSqlDriver `
    ///
    pub fn AddDatabase2(driver: anytype) QSqlDatabase {
        comptime _ = @TypeOf(driver)._is_QSqlDriver;
        return .{ .ptr = qtc.QSqlDatabase_AddDatabase2(@ptrCast(driver.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#cloneDatabase)
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSqlDatabase `
    ///
    /// ` connectionName: []const u8 `
    ///
    pub fn CloneDatabase(other: anytype, connectionName: []const u8) QSqlDatabase {
        comptime _ = @TypeOf(other)._is_QSqlDatabase;
        const connectionName_str = qtc.libqt_string{
            .len = connectionName.len,
            .data = connectionName.ptr,
        };
        return .{ .ptr = qtc.QSqlDatabase_CloneDatabase(@ptrCast(other.ptr), connectionName_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#cloneDatabase)
    ///
    /// ## Parameter(s):
    ///
    /// ` other: []const u8 `
    ///
    /// ` connectionName: []const u8 `
    ///
    pub fn CloneDatabase2(other: []const u8, connectionName: []const u8) QSqlDatabase {
        const other_str = qtc.libqt_string{
            .len = other.len,
            .data = other.ptr,
        };
        const connectionName_str = qtc.libqt_string{
            .len = connectionName.len,
            .data = connectionName.ptr,
        };
        return .{ .ptr = qtc.QSqlDatabase_CloneDatabase2(other_str, connectionName_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#database)
    ///
    pub fn Database() QSqlDatabase {
        return .{ .ptr = qtc.QSqlDatabase_Database() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#removeDatabase)
    ///
    /// ## Parameter(s):
    ///
    /// ` connectionName: []const u8 `
    ///
    pub fn RemoveDatabase(connectionName: []const u8) void {
        const connectionName_str = qtc.libqt_string{
            .len = connectionName.len,
            .data = connectionName.ptr,
        };
        qtc.QSqlDatabase_RemoveDatabase(connectionName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#contains)
    ///
    pub fn Contains() bool {
        return qtc.QSqlDatabase_Contains();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#drivers)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Drivers(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlDatabase_Drivers();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qsqldatabase.Drivers: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsqldatabase.Drivers: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#connectionNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ConnectionNames(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlDatabase_ConnectionNames();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qsqldatabase.ConnectionNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsqldatabase.ConnectionNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#registerSqlDriver)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` creator: QSqlDriverCreatorBase `
    ///
    pub fn RegisterSqlDriver(name: []const u8, creator: anytype) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(creator)._is_QSqlDriverCreatorBase;
        qtc.QSqlDatabase_RegisterSqlDriver(name_str, @ptrCast(creator.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#isDriverAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn IsDriverAvailable(name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlDatabase_IsDriverAvailable(name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#tables)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` typeVal: qtsqlglobal_enums.TableType `
    ///
    pub fn Tables1(self: QSqlDatabase, allocator: std.mem.Allocator, typeVal: i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlDatabase_Tables1(@ptrCast(self.ptr), @bitCast(typeVal));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qsqldatabase.Tables1: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsqldatabase.Tables1: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` query: []const u8 `
    ///
    pub fn Exec1(self: QSqlDatabase, query: []const u8) QSqlQuery {
        const query_str = qtc.libqt_string{
            .len = query.len,
            .data = query.ptr,
        };
        return .{ .ptr = qtc.QSqlDatabase_Exec1(@ptrCast(self.ptr), query_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#setConnectOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` options: []const u8 `
    ///
    pub fn SetConnectOptions1(self: QSqlDatabase, options: []const u8) void {
        const options_str = qtc.libqt_string{
            .len = options.len,
            .data = options.ptr,
        };
        qtc.QSqlDatabase_SetConnectOptions1(@ptrCast(self.ptr), options_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#addDatabase)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: []const u8 `
    ///
    /// ` connectionName: []const u8 `
    ///
    pub fn AddDatabase22(typeVal: []const u8, connectionName: []const u8) QSqlDatabase {
        const typeVal_str = qtc.libqt_string{
            .len = typeVal.len,
            .data = typeVal.ptr,
        };
        const connectionName_str = qtc.libqt_string{
            .len = connectionName.len,
            .data = connectionName.ptr,
        };
        return .{ .ptr = qtc.QSqlDatabase_AddDatabase22(typeVal_str, connectionName_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#addDatabase)
    ///
    /// ## Parameter(s):
    ///
    /// ` driver: QSqlDriver `
    ///
    /// ` connectionName: []const u8 `
    ///
    pub fn AddDatabase23(driver: anytype, connectionName: []const u8) QSqlDatabase {
        comptime _ = @TypeOf(driver)._is_QSqlDriver;
        const connectionName_str = qtc.libqt_string{
            .len = connectionName.len,
            .data = connectionName.ptr,
        };
        return .{ .ptr = qtc.QSqlDatabase_AddDatabase23(@ptrCast(driver.ptr), connectionName_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#database)
    ///
    /// ## Parameter(s):
    ///
    /// ` connectionName: []const u8 `
    ///
    pub fn Database1(connectionName: []const u8) QSqlDatabase {
        const connectionName_str = qtc.libqt_string{
            .len = connectionName.len,
            .data = connectionName.ptr,
        };
        return .{ .ptr = qtc.QSqlDatabase_Database1(connectionName_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#database)
    ///
    /// ## Parameter(s):
    ///
    /// ` connectionName: []const u8 `
    ///
    /// ` open: bool `
    ///
    pub fn Database2(connectionName: []const u8, open: bool) QSqlDatabase {
        const connectionName_str = qtc.libqt_string{
            .len = connectionName.len,
            .data = connectionName.ptr,
        };
        return .{ .ptr = qtc.QSqlDatabase_Database2(connectionName_str, open) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` connectionName: []const u8 `
    ///
    pub fn Contains1(connectionName: []const u8) bool {
        const connectionName_str = qtc.libqt_string{
            .len = connectionName.len,
            .data = connectionName.ptr,
        };
        return qtc.QSqlDatabase_Contains1(connectionName_str);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#dtor.QSqlDatabase)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSqlDatabase `
    ///
    pub fn Delete(self: QSqlDatabase) void {
        qtc.QSqlDatabase_Delete(@ptrCast(self.ptr));
    }
};
