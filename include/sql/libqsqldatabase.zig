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

    /// ### DEPRECATED: Use `createObject` instead
    ///
    pub const CreateObject = createObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldrivercreatorbase.html#createObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriverCreatorBase `
    ///
    pub fn createObject(self: QSqlDriverCreatorBase) QSqlDriver {
        return .{ .ptr = qtc.QSqlDriverCreatorBase_CreateObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldrivercreatorbase.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriverCreatorBase `
    ///
    /// ` param1: QSqlDriverCreatorBase `
    ///
    pub fn operatorAssign(self: QSqlDriverCreatorBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSqlDriverCreatorBase;
        qtc.QSqlDriverCreatorBase_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldrivercreatorbase.html#dtor.QSqlDriverCreatorBase)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSqlDriverCreatorBase `
    ///
    pub fn delete(self: QSqlDriverCreatorBase) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSqlDatabase object in C++ memory
    ///
    pub fn new() QSqlDatabase {
        return .{ .ptr = qtc.QSqlDatabase_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSqlDatabase object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSqlDatabase `
    ///
    pub fn new2(other: anytype) QSqlDatabase {
        comptime _ = @TypeOf(other)._is_QSqlDatabase;
        return .{ .ptr = qtc.QSqlDatabase_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` other: QSqlDatabase `
    ///
    pub fn operatorAssign(self: QSqlDatabase, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSqlDatabase;
        qtc.QSqlDatabase_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `open` instead
    ///
    pub const Open = open;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    pub fn open(self: QSqlDatabase) bool {
        return qtc.QSqlDatabase_Open(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `open2` instead
    ///
    pub const Open2 = open2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` user: []const u8 `
    ///
    /// ` _password: []const u8 `
    ///
    pub fn open2(self: QSqlDatabase, user: []const u8, _password: []const u8) bool {
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const password_str = qtc.libqt_string{
            .len = _password.len,
            .data = _password.ptr,
        };
        return qtc.QSqlDatabase_Open2(@ptrCast(self.ptr), user_str, password_str);
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    pub fn close(self: QSqlDatabase) void {
        qtc.QSqlDatabase_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isOpen` instead
    ///
    pub const IsOpen = isOpen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#isOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    pub fn isOpen(self: QSqlDatabase) bool {
        return qtc.QSqlDatabase_IsOpen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isOpenError` instead
    ///
    pub const IsOpenError = isOpenError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#isOpenError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    pub fn isOpenError(self: QSqlDatabase) bool {
        return qtc.QSqlDatabase_IsOpenError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tables` instead
    ///
    pub const Tables = tables;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#tables)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn tables(self: QSqlDatabase, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlDatabase_Tables(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QSqlDatabase.tables: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSqlDatabase.tables: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `primaryIndex` instead
    ///
    pub const PrimaryIndex = primaryIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#primaryIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` tablename: []const u8 `
    ///
    pub fn primaryIndex(self: QSqlDatabase, tablename: []const u8) QSqlIndex {
        const tablename_str = qtc.libqt_string{
            .len = tablename.len,
            .data = tablename.ptr,
        };
        return .{ .ptr = qtc.QSqlDatabase_PrimaryIndex(@ptrCast(self.ptr), tablename_str) };
    }

    /// ### DEPRECATED: Use `record` instead
    ///
    pub const Record = record;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#record)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` tablename: []const u8 `
    ///
    pub fn record(self: QSqlDatabase, tablename: []const u8) QSqlRecord {
        const tablename_str = qtc.libqt_string{
            .len = tablename.len,
            .data = tablename.ptr,
        };
        return .{ .ptr = qtc.QSqlDatabase_Record(@ptrCast(self.ptr), tablename_str) };
    }

    /// ### DEPRECATED: Use `exec` instead
    ///
    pub const Exec = exec;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    pub fn exec(self: QSqlDatabase) QSqlQuery {
        return .{ .ptr = qtc.QSqlDatabase_Exec(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastError` instead
    ///
    pub const LastError = lastError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#lastError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    pub fn lastError(self: QSqlDatabase) QSqlError {
        return .{ .ptr = qtc.QSqlDatabase_LastError(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    pub fn isValid(self: QSqlDatabase) bool {
        return qtc.QSqlDatabase_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `transaction` instead
    ///
    pub const Transaction = transaction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#transaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    pub fn transaction(self: QSqlDatabase) bool {
        return qtc.QSqlDatabase_Transaction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `commit` instead
    ///
    pub const Commit = commit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#commit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    pub fn commit(self: QSqlDatabase) bool {
        return qtc.QSqlDatabase_Commit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rollback` instead
    ///
    pub const Rollback = rollback;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#rollback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    pub fn rollback(self: QSqlDatabase) bool {
        return qtc.QSqlDatabase_Rollback(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDatabaseName` instead
    ///
    pub const SetDatabaseName = setDatabaseName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#setDatabaseName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setDatabaseName(self: QSqlDatabase, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QSqlDatabase_SetDatabaseName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `setUserName` instead
    ///
    pub const SetUserName = setUserName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#setUserName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setUserName(self: QSqlDatabase, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QSqlDatabase_SetUserName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `setPassword` instead
    ///
    pub const SetPassword = setPassword;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#setPassword)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` _password: []const u8 `
    ///
    pub fn setPassword(self: QSqlDatabase, _password: []const u8) void {
        const password_str = qtc.libqt_string{
            .len = _password.len,
            .data = _password.ptr,
        };
        qtc.QSqlDatabase_SetPassword(@ptrCast(self.ptr), password_str);
    }

    /// ### DEPRECATED: Use `setHostName` instead
    ///
    pub const SetHostName = setHostName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#setHostName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` host: []const u8 `
    ///
    pub fn setHostName(self: QSqlDatabase, host: []const u8) void {
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        qtc.QSqlDatabase_SetHostName(@ptrCast(self.ptr), host_str);
    }

    /// ### DEPRECATED: Use `setPort` instead
    ///
    pub const SetPort = setPort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#setPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` p: i32 `
    ///
    pub fn setPort(self: QSqlDatabase, p: i32) void {
        qtc.QSqlDatabase_SetPort(@ptrCast(self.ptr), @bitCast(p));
    }

    /// ### DEPRECATED: Use `setConnectOptions` instead
    ///
    pub const SetConnectOptions = setConnectOptions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#setConnectOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    pub fn setConnectOptions(self: QSqlDatabase) void {
        qtc.QSqlDatabase_SetConnectOptions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `databaseName` instead
    ///
    pub const DatabaseName = databaseName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#databaseName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn databaseName(self: QSqlDatabase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlDatabase_DatabaseName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSqlDatabase.databaseName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `userName` instead
    ///
    pub const UserName = userName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#userName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn userName(self: QSqlDatabase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlDatabase_UserName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSqlDatabase.userName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `password` instead
    ///
    pub const Password = password;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#password)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn password(self: QSqlDatabase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlDatabase_Password(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSqlDatabase.password: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hostName` instead
    ///
    pub const HostName = hostName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#hostName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn hostName(self: QSqlDatabase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlDatabase_HostName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSqlDatabase.hostName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `driverName` instead
    ///
    pub const DriverName = driverName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#driverName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn driverName(self: QSqlDatabase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlDatabase_DriverName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSqlDatabase.driverName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `port` instead
    ///
    pub const Port = port;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#port)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    pub fn port(self: QSqlDatabase) i32 {
        return qtc.QSqlDatabase_Port(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `connectOptions` instead
    ///
    pub const ConnectOptions = connectOptions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#connectOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn connectOptions(self: QSqlDatabase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlDatabase_ConnectOptions(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSqlDatabase.connectOptions: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `connectionName` instead
    ///
    pub const ConnectionName = connectionName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#connectionName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn connectionName(self: QSqlDatabase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlDatabase_ConnectionName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSqlDatabase.connectionName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setNumericalPrecisionPolicy` instead
    ///
    pub const SetNumericalPrecisionPolicy = setNumericalPrecisionPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#setNumericalPrecisionPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` precisionPolicy: qtsqlglobal_enums.NumericalPrecisionPolicy `
    ///
    pub fn setNumericalPrecisionPolicy(self: QSqlDatabase, precisionPolicy: i32) void {
        qtc.QSqlDatabase_SetNumericalPrecisionPolicy(@ptrCast(self.ptr), @bitCast(precisionPolicy));
    }

    /// ### DEPRECATED: Use `numericalPrecisionPolicy` instead
    ///
    pub const NumericalPrecisionPolicy = numericalPrecisionPolicy;

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
    pub fn numericalPrecisionPolicy(self: QSqlDatabase) i32 {
        return qtc.QSqlDatabase_NumericalPrecisionPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` targetThread: QThread `
    ///
    pub fn moveToThread(self: QSqlDatabase, targetThread: anytype) bool {
        comptime _ = @TypeOf(targetThread)._is_QThread;
        return qtc.QSqlDatabase_MoveToThread(@ptrCast(self.ptr), @ptrCast(targetThread.ptr));
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    pub fn thread(self: QSqlDatabase) QThread {
        return .{ .ptr = qtc.QSqlDatabase_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `driver` instead
    ///
    pub const Driver = driver;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#driver)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    pub fn driver(self: QSqlDatabase) QSqlDriver {
        return .{ .ptr = qtc.QSqlDatabase_Driver(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `addDatabase` instead
    ///
    pub const AddDatabase = addDatabase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#addDatabase)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: []const u8 `
    ///
    pub fn addDatabase(typeVal: []const u8) QSqlDatabase {
        const typeVal_str = qtc.libqt_string{
            .len = typeVal.len,
            .data = typeVal.ptr,
        };
        return .{ .ptr = qtc.QSqlDatabase_AddDatabase(typeVal_str) };
    }

    /// ### DEPRECATED: Use `addDatabase2` instead
    ///
    pub const AddDatabase2 = addDatabase2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#addDatabase)
    ///
    /// ## Parameter(s):
    ///
    /// ` _driver: QSqlDriver `
    ///
    pub fn addDatabase2(_driver: anytype) QSqlDatabase {
        comptime _ = @TypeOf(_driver)._is_QSqlDriver;
        return .{ .ptr = qtc.QSqlDatabase_AddDatabase2(@ptrCast(_driver.ptr)) };
    }

    /// ### DEPRECATED: Use `cloneDatabase` instead
    ///
    pub const CloneDatabase = cloneDatabase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#cloneDatabase)
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSqlDatabase `
    ///
    /// ` _connectionName: []const u8 `
    ///
    pub fn cloneDatabase(other: anytype, _connectionName: []const u8) QSqlDatabase {
        comptime _ = @TypeOf(other)._is_QSqlDatabase;
        const connectionName_str = qtc.libqt_string{
            .len = _connectionName.len,
            .data = _connectionName.ptr,
        };
        return .{ .ptr = qtc.QSqlDatabase_CloneDatabase(@ptrCast(other.ptr), connectionName_str) };
    }

    /// ### DEPRECATED: Use `cloneDatabase2` instead
    ///
    pub const CloneDatabase2 = cloneDatabase2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#cloneDatabase)
    ///
    /// ## Parameter(s):
    ///
    /// ` other: []const u8 `
    ///
    /// ` _connectionName: []const u8 `
    ///
    pub fn cloneDatabase2(other: []const u8, _connectionName: []const u8) QSqlDatabase {
        const other_str = qtc.libqt_string{
            .len = other.len,
            .data = other.ptr,
        };
        const connectionName_str = qtc.libqt_string{
            .len = _connectionName.len,
            .data = _connectionName.ptr,
        };
        return .{ .ptr = qtc.QSqlDatabase_CloneDatabase2(other_str, connectionName_str) };
    }

    /// ### DEPRECATED: Use `database` instead
    ///
    pub const Database = database;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#database)
    ///
    pub fn database() QSqlDatabase {
        return .{ .ptr = qtc.QSqlDatabase_Database() };
    }

    /// ### DEPRECATED: Use `removeDatabase` instead
    ///
    pub const RemoveDatabase = removeDatabase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#removeDatabase)
    ///
    /// ## Parameter(s):
    ///
    /// ` _connectionName: []const u8 `
    ///
    pub fn removeDatabase(_connectionName: []const u8) void {
        const connectionName_str = qtc.libqt_string{
            .len = _connectionName.len,
            .data = _connectionName.ptr,
        };
        qtc.QSqlDatabase_RemoveDatabase(connectionName_str);
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#contains)
    ///
    pub fn contains() bool {
        return qtc.QSqlDatabase_Contains();
    }

    /// ### DEPRECATED: Use `drivers` instead
    ///
    pub const Drivers = drivers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#drivers)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn drivers(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlDatabase_Drivers();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QSqlDatabase.drivers: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSqlDatabase.drivers: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `connectionNames` instead
    ///
    pub const ConnectionNames = connectionNames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#connectionNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn connectionNames(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlDatabase_ConnectionNames();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QSqlDatabase.connectionNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSqlDatabase.connectionNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `registerSqlDriver` instead
    ///
    pub const RegisterSqlDriver = registerSqlDriver;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#registerSqlDriver)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` creator: QSqlDriverCreatorBase `
    ///
    pub fn registerSqlDriver(name: []const u8, creator: anytype) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(creator)._is_QSqlDriverCreatorBase;
        qtc.QSqlDatabase_RegisterSqlDriver(name_str, @ptrCast(creator.ptr));
    }

    /// ### DEPRECATED: Use `isDriverAvailable` instead
    ///
    pub const IsDriverAvailable = isDriverAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#isDriverAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn isDriverAvailable(name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlDatabase_IsDriverAvailable(name_str);
    }

    /// ### DEPRECATED: Use `tables1` instead
    ///
    pub const Tables1 = tables1;

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
    pub fn tables1(self: QSqlDatabase, allocator: std.mem.Allocator, typeVal: i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlDatabase_Tables1(@ptrCast(self.ptr), @bitCast(typeVal));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QSqlDatabase.tables1: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSqlDatabase.tables1: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `exec1` instead
    ///
    pub const Exec1 = exec1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` query: []const u8 `
    ///
    pub fn exec1(self: QSqlDatabase, query: []const u8) QSqlQuery {
        const query_str = qtc.libqt_string{
            .len = query.len,
            .data = query.ptr,
        };
        return .{ .ptr = qtc.QSqlDatabase_Exec1(@ptrCast(self.ptr), query_str) };
    }

    /// ### DEPRECATED: Use `setConnectOptions1` instead
    ///
    pub const SetConnectOptions1 = setConnectOptions1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#setConnectOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDatabase `
    ///
    /// ` options: []const u8 `
    ///
    pub fn setConnectOptions1(self: QSqlDatabase, options: []const u8) void {
        const options_str = qtc.libqt_string{
            .len = options.len,
            .data = options.ptr,
        };
        qtc.QSqlDatabase_SetConnectOptions1(@ptrCast(self.ptr), options_str);
    }

    /// ### DEPRECATED: Use `addDatabase22` instead
    ///
    pub const AddDatabase22 = addDatabase22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#addDatabase)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: []const u8 `
    ///
    /// ` _connectionName: []const u8 `
    ///
    pub fn addDatabase22(typeVal: []const u8, _connectionName: []const u8) QSqlDatabase {
        const typeVal_str = qtc.libqt_string{
            .len = typeVal.len,
            .data = typeVal.ptr,
        };
        const connectionName_str = qtc.libqt_string{
            .len = _connectionName.len,
            .data = _connectionName.ptr,
        };
        return .{ .ptr = qtc.QSqlDatabase_AddDatabase22(typeVal_str, connectionName_str) };
    }

    /// ### DEPRECATED: Use `addDatabase23` instead
    ///
    pub const AddDatabase23 = addDatabase23;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#addDatabase)
    ///
    /// ## Parameter(s):
    ///
    /// ` _driver: QSqlDriver `
    ///
    /// ` _connectionName: []const u8 `
    ///
    pub fn addDatabase23(_driver: anytype, _connectionName: []const u8) QSqlDatabase {
        comptime _ = @TypeOf(_driver)._is_QSqlDriver;
        const connectionName_str = qtc.libqt_string{
            .len = _connectionName.len,
            .data = _connectionName.ptr,
        };
        return .{ .ptr = qtc.QSqlDatabase_AddDatabase23(@ptrCast(_driver.ptr), connectionName_str) };
    }

    /// ### DEPRECATED: Use `database1` instead
    ///
    pub const Database1 = database1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#database)
    ///
    /// ## Parameter(s):
    ///
    /// ` _connectionName: []const u8 `
    ///
    pub fn database1(_connectionName: []const u8) QSqlDatabase {
        const connectionName_str = qtc.libqt_string{
            .len = _connectionName.len,
            .data = _connectionName.ptr,
        };
        return .{ .ptr = qtc.QSqlDatabase_Database1(connectionName_str) };
    }

    /// ### DEPRECATED: Use `database2` instead
    ///
    pub const Database2 = database2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#database)
    ///
    /// ## Parameter(s):
    ///
    /// ` _connectionName: []const u8 `
    ///
    /// ` _open: bool `
    ///
    pub fn database2(_connectionName: []const u8, _open: bool) QSqlDatabase {
        const connectionName_str = qtc.libqt_string{
            .len = _connectionName.len,
            .data = _connectionName.ptr,
        };
        return .{ .ptr = qtc.QSqlDatabase_Database2(connectionName_str, _open) };
    }

    /// ### DEPRECATED: Use `contains1` instead
    ///
    pub const Contains1 = contains1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` _connectionName: []const u8 `
    ///
    pub fn contains1(_connectionName: []const u8) bool {
        const connectionName_str = qtc.libqt_string{
            .len = _connectionName.len,
            .data = _connectionName.ptr,
        };
        return qtc.QSqlDatabase_Contains1(connectionName_str);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#dtor.QSqlDatabase)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSqlDatabase `
    ///
    pub fn delete(self: QSqlDatabase) void {
        qtc.QSqlDatabase_Delete(@ptrCast(self.ptr));
    }
};
