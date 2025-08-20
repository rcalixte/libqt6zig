const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qtsqlglobal_enums = @import("libqtsqlglobal.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qsqldrivercreatorbase.html
pub const qsqldrivercreatorbase = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldrivercreatorbase.html#createObject)
    ///
    /// ``` self: QtC.QSqlDriverCreatorBase ```
    pub fn CreateObject(self: ?*anyopaque) QtC.QSqlDriver {
        return qtc.QSqlDriverCreatorBase_CreateObject(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldrivercreatorbase.html#operator-eq)
    ///
    /// ``` self: QtC.QSqlDriverCreatorBase, param1: QtC.QSqlDriverCreatorBase ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QSqlDriverCreatorBase_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldrivercreatorbase.html#dtor.QSqlDriverCreatorBase)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSqlDriverCreatorBase ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSqlDriverCreatorBase_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qsqldatabase.html
pub const qsqldatabase = struct {
    /// New constructs a new QSqlDatabase object.
    ///
    ///
    pub fn New() QtC.QSqlDatabase {
        return qtc.QSqlDatabase_new();
    }

    /// New2 constructs a new QSqlDatabase object.
    ///
    /// ``` other: QtC.QSqlDatabase ```
    pub fn New2(other: ?*anyopaque) QtC.QSqlDatabase {
        return qtc.QSqlDatabase_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#operator-eq)
    ///
    /// ``` self: QtC.QSqlDatabase, other: QtC.QSqlDatabase ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSqlDatabase_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#open)
    ///
    /// ``` self: QtC.QSqlDatabase ```
    pub fn Open(self: ?*anyopaque) bool {
        return qtc.QSqlDatabase_Open(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#open)
    ///
    /// ``` self: QtC.QSqlDatabase, user: []const u8, password: []const u8 ```
    pub fn Open2(self: ?*anyopaque, user: []const u8, password: []const u8) bool {
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        return qtc.QSqlDatabase_Open2(@ptrCast(self), user_str, password_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#close)
    ///
    /// ``` self: QtC.QSqlDatabase ```
    pub fn Close(self: ?*anyopaque) void {
        qtc.QSqlDatabase_Close(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#isOpen)
    ///
    /// ``` self: QtC.QSqlDatabase ```
    pub fn IsOpen(self: ?*anyopaque) bool {
        return qtc.QSqlDatabase_IsOpen(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#isOpenError)
    ///
    /// ``` self: QtC.QSqlDatabase ```
    pub fn IsOpenError(self: ?*anyopaque) bool {
        return qtc.QSqlDatabase_IsOpenError(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#tables)
    ///
    /// ``` self: QtC.QSqlDatabase, allocator: std.mem.Allocator ```
    pub fn Tables(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlDatabase_Tables(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#primaryIndex)
    ///
    /// ``` self: QtC.QSqlDatabase, tablename: []const u8 ```
    pub fn PrimaryIndex(self: ?*anyopaque, tablename: []const u8) QtC.QSqlIndex {
        const tablename_str = qtc.libqt_string{
            .len = tablename.len,
            .data = tablename.ptr,
        };
        return qtc.QSqlDatabase_PrimaryIndex(@ptrCast(self), tablename_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#record)
    ///
    /// ``` self: QtC.QSqlDatabase, tablename: []const u8 ```
    pub fn Record(self: ?*anyopaque, tablename: []const u8) QtC.QSqlRecord {
        const tablename_str = qtc.libqt_string{
            .len = tablename.len,
            .data = tablename.ptr,
        };
        return qtc.QSqlDatabase_Record(@ptrCast(self), tablename_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#exec)
    ///
    /// ``` self: QtC.QSqlDatabase ```
    pub fn Exec(self: ?*anyopaque) QtC.QSqlQuery {
        return qtc.QSqlDatabase_Exec(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#lastError)
    ///
    /// ``` self: QtC.QSqlDatabase ```
    pub fn LastError(self: ?*anyopaque) QtC.QSqlError {
        return qtc.QSqlDatabase_LastError(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#isValid)
    ///
    /// ``` self: QtC.QSqlDatabase ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QSqlDatabase_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#transaction)
    ///
    /// ``` self: QtC.QSqlDatabase ```
    pub fn Transaction(self: ?*anyopaque) bool {
        return qtc.QSqlDatabase_Transaction(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#commit)
    ///
    /// ``` self: QtC.QSqlDatabase ```
    pub fn Commit(self: ?*anyopaque) bool {
        return qtc.QSqlDatabase_Commit(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#rollback)
    ///
    /// ``` self: QtC.QSqlDatabase ```
    pub fn Rollback(self: ?*anyopaque) bool {
        return qtc.QSqlDatabase_Rollback(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#setDatabaseName)
    ///
    /// ``` self: QtC.QSqlDatabase, name: []const u8 ```
    pub fn SetDatabaseName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QSqlDatabase_SetDatabaseName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#setUserName)
    ///
    /// ``` self: QtC.QSqlDatabase, name: []const u8 ```
    pub fn SetUserName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QSqlDatabase_SetUserName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#setPassword)
    ///
    /// ``` self: QtC.QSqlDatabase, password: []const u8 ```
    pub fn SetPassword(self: ?*anyopaque, password: []const u8) void {
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        qtc.QSqlDatabase_SetPassword(@ptrCast(self), password_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#setHostName)
    ///
    /// ``` self: QtC.QSqlDatabase, host: []const u8 ```
    pub fn SetHostName(self: ?*anyopaque, host: []const u8) void {
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        qtc.QSqlDatabase_SetHostName(@ptrCast(self), host_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#setPort)
    ///
    /// ``` self: QtC.QSqlDatabase, p: i32 ```
    pub fn SetPort(self: ?*anyopaque, p: i32) void {
        qtc.QSqlDatabase_SetPort(@ptrCast(self), @intCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#setConnectOptions)
    ///
    /// ``` self: QtC.QSqlDatabase ```
    pub fn SetConnectOptions(self: ?*anyopaque) void {
        qtc.QSqlDatabase_SetConnectOptions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#databaseName)
    ///
    /// ``` self: QtC.QSqlDatabase, allocator: std.mem.Allocator ```
    pub fn DatabaseName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlDatabase_DatabaseName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldatabase.DatabaseName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#userName)
    ///
    /// ``` self: QtC.QSqlDatabase, allocator: std.mem.Allocator ```
    pub fn UserName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlDatabase_UserName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldatabase.UserName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#password)
    ///
    /// ``` self: QtC.QSqlDatabase, allocator: std.mem.Allocator ```
    pub fn Password(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlDatabase_Password(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldatabase.Password: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#hostName)
    ///
    /// ``` self: QtC.QSqlDatabase, allocator: std.mem.Allocator ```
    pub fn HostName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlDatabase_HostName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldatabase.HostName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#driverName)
    ///
    /// ``` self: QtC.QSqlDatabase, allocator: std.mem.Allocator ```
    pub fn DriverName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlDatabase_DriverName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldatabase.DriverName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#port)
    ///
    /// ``` self: QtC.QSqlDatabase ```
    pub fn Port(self: ?*anyopaque) i32 {
        return qtc.QSqlDatabase_Port(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#connectOptions)
    ///
    /// ``` self: QtC.QSqlDatabase, allocator: std.mem.Allocator ```
    pub fn ConnectOptions(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlDatabase_ConnectOptions(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldatabase.ConnectOptions: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#connectionName)
    ///
    /// ``` self: QtC.QSqlDatabase, allocator: std.mem.Allocator ```
    pub fn ConnectionName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlDatabase_ConnectionName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldatabase.ConnectionName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#setNumericalPrecisionPolicy)
    ///
    /// ``` self: QtC.QSqlDatabase, precisionPolicy: qtsqlglobal_enums.NumericalPrecisionPolicy ```
    pub fn SetNumericalPrecisionPolicy(self: ?*anyopaque, precisionPolicy: i32) void {
        qtc.QSqlDatabase_SetNumericalPrecisionPolicy(@ptrCast(self), @intCast(precisionPolicy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#numericalPrecisionPolicy)
    ///
    /// ``` self: QtC.QSqlDatabase ```
    ///
    /// Returns: ``` qtsqlglobal_enums.NumericalPrecisionPolicy ```
    pub fn NumericalPrecisionPolicy(self: ?*anyopaque) i32 {
        return qtc.QSqlDatabase_NumericalPrecisionPolicy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#moveToThread)
    ///
    /// ``` self: QtC.QSqlDatabase, targetThread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, targetThread: ?*anyopaque) bool {
        return qtc.QSqlDatabase_MoveToThread(@ptrCast(self), @ptrCast(targetThread));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#thread)
    ///
    /// ``` self: QtC.QSqlDatabase ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QSqlDatabase_Thread(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#driver)
    ///
    /// ``` self: QtC.QSqlDatabase ```
    pub fn Driver(self: ?*anyopaque) QtC.QSqlDriver {
        return qtc.QSqlDatabase_Driver(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#addDatabase)
    ///
    /// ``` typeVal: []const u8 ```
    pub fn AddDatabase(typeVal: []const u8) QtC.QSqlDatabase {
        const typeVal_str = qtc.libqt_string{
            .len = typeVal.len,
            .data = typeVal.ptr,
        };
        return qtc.QSqlDatabase_AddDatabase(typeVal_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#addDatabase)
    ///
    /// ``` driver: QtC.QSqlDriver ```
    pub fn AddDatabase2(driver: ?*anyopaque) QtC.QSqlDatabase {
        return qtc.QSqlDatabase_AddDatabase2(@ptrCast(driver));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#cloneDatabase)
    ///
    /// ``` other: QtC.QSqlDatabase, connectionName: []const u8 ```
    pub fn CloneDatabase(other: ?*anyopaque, connectionName: []const u8) QtC.QSqlDatabase {
        const connectionName_str = qtc.libqt_string{
            .len = connectionName.len,
            .data = connectionName.ptr,
        };
        return qtc.QSqlDatabase_CloneDatabase(@ptrCast(other), connectionName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#cloneDatabase)
    ///
    /// ``` other: []const u8, connectionName: []const u8 ```
    pub fn CloneDatabase2(other: []const u8, connectionName: []const u8) QtC.QSqlDatabase {
        const other_str = qtc.libqt_string{
            .len = other.len,
            .data = other.ptr,
        };
        const connectionName_str = qtc.libqt_string{
            .len = connectionName.len,
            .data = connectionName.ptr,
        };
        return qtc.QSqlDatabase_CloneDatabase2(other_str, connectionName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#database)
    ///
    ///
    pub fn Database() QtC.QSqlDatabase {
        return qtc.QSqlDatabase_Database();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#removeDatabase)
    ///
    /// ``` connectionName: []const u8 ```
    pub fn RemoveDatabase(connectionName: []const u8) void {
        const connectionName_str = qtc.libqt_string{
            .len = connectionName.len,
            .data = connectionName.ptr,
        };
        qtc.QSqlDatabase_RemoveDatabase(connectionName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#contains)
    ///
    ///
    pub fn Contains() bool {
        return qtc.QSqlDatabase_Contains();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#drivers)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Drivers(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlDatabase_Drivers();
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#connectionNames)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ConnectionNames(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlDatabase_ConnectionNames();
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#registerSqlDriver)
    ///
    /// ``` name: []const u8, creator: QtC.QSqlDriverCreatorBase ```
    pub fn RegisterSqlDriver(name: []const u8, creator: ?*anyopaque) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QSqlDatabase_RegisterSqlDriver(name_str, @ptrCast(creator));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#isDriverAvailable)
    ///
    /// ``` name: []const u8 ```
    pub fn IsDriverAvailable(name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlDatabase_IsDriverAvailable(name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#tables)
    ///
    /// ``` self: QtC.QSqlDatabase, typeVal: qtsqlglobal_enums.TableType, allocator: std.mem.Allocator ```
    pub fn Tables1(self: ?*anyopaque, typeVal: i32, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlDatabase_Tables1(@ptrCast(self), @intCast(typeVal));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#exec)
    ///
    /// ``` self: QtC.QSqlDatabase, query: []const u8 ```
    pub fn Exec1(self: ?*anyopaque, query: []const u8) QtC.QSqlQuery {
        const query_str = qtc.libqt_string{
            .len = query.len,
            .data = query.ptr,
        };
        return qtc.QSqlDatabase_Exec1(@ptrCast(self), query_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#setConnectOptions)
    ///
    /// ``` self: QtC.QSqlDatabase, options: []const u8 ```
    pub fn SetConnectOptions1(self: ?*anyopaque, options: []const u8) void {
        const options_str = qtc.libqt_string{
            .len = options.len,
            .data = options.ptr,
        };
        qtc.QSqlDatabase_SetConnectOptions1(@ptrCast(self), options_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#addDatabase)
    ///
    /// ``` typeVal: []const u8, connectionName: []const u8 ```
    pub fn AddDatabase22(typeVal: []const u8, connectionName: []const u8) QtC.QSqlDatabase {
        const typeVal_str = qtc.libqt_string{
            .len = typeVal.len,
            .data = typeVal.ptr,
        };
        const connectionName_str = qtc.libqt_string{
            .len = connectionName.len,
            .data = connectionName.ptr,
        };
        return qtc.QSqlDatabase_AddDatabase22(typeVal_str, connectionName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#addDatabase)
    ///
    /// ``` driver: QtC.QSqlDriver, connectionName: []const u8 ```
    pub fn AddDatabase23(driver: ?*anyopaque, connectionName: []const u8) QtC.QSqlDatabase {
        const connectionName_str = qtc.libqt_string{
            .len = connectionName.len,
            .data = connectionName.ptr,
        };
        return qtc.QSqlDatabase_AddDatabase23(@ptrCast(driver), connectionName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#database)
    ///
    /// ``` connectionName: []const u8 ```
    pub fn Database1(connectionName: []const u8) QtC.QSqlDatabase {
        const connectionName_str = qtc.libqt_string{
            .len = connectionName.len,
            .data = connectionName.ptr,
        };
        return qtc.QSqlDatabase_Database1(connectionName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#database)
    ///
    /// ``` connectionName: []const u8, open: bool ```
    pub fn Database2(connectionName: []const u8, open: bool) QtC.QSqlDatabase {
        const connectionName_str = qtc.libqt_string{
            .len = connectionName.len,
            .data = connectionName.ptr,
        };
        return qtc.QSqlDatabase_Database2(connectionName_str, open);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#contains)
    ///
    /// ``` connectionName: []const u8 ```
    pub fn Contains1(connectionName: []const u8) bool {
        const connectionName_str = qtc.libqt_string{
            .len = connectionName.len,
            .data = connectionName.ptr,
        };
        return qtc.QSqlDatabase_Contains1(connectionName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldatabase.html#dtor.QSqlDatabase)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSqlDatabase ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSqlDatabase_Delete(@ptrCast(self));
    }
};
