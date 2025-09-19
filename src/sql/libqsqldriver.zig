const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qsqldriver_enums = enums;
const qtsqlglobal_enums = @import("libqtsqlglobal.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qsqldriver.html
pub const qsqldriver = struct {
    /// New constructs a new QSqlDriver object.
    ///
    ///
    pub fn New() QtC.QSqlDriver {
        return qtc.QSqlDriver_new();
    }

    /// New2 constructs a new QSqlDriver object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.QSqlDriver {
        return qtc.QSqlDriver_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QSqlDriver_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QSqlDriver, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSqlDriver_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QSqlDriver, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QSqlDriver_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn (self: QtC.QSqlDriver, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QSqlDriver_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlDriver, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QSqlDriver_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QSqlDriver_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#isOpen)
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn IsOpen(self: ?*anyopaque) bool {
        return qtc.QSqlDriver_IsOpen(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#isOpen)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn () callconv(.c) bool ```
    pub fn OnIsOpen(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QSqlDriver_OnIsOpen(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#isOpen)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn QBaseIsOpen(self: ?*anyopaque) bool {
        return qtc.QSqlDriver_QBaseIsOpen(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#isOpenError)
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn IsOpenError(self: ?*anyopaque) bool {
        return qtc.QSqlDriver_IsOpenError(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#beginTransaction)
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn BeginTransaction(self: ?*anyopaque) bool {
        return qtc.QSqlDriver_BeginTransaction(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#beginTransaction)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn () callconv(.c) bool ```
    pub fn OnBeginTransaction(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QSqlDriver_OnBeginTransaction(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#beginTransaction)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn QBaseBeginTransaction(self: ?*anyopaque) bool {
        return qtc.QSqlDriver_QBaseBeginTransaction(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#commitTransaction)
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn CommitTransaction(self: ?*anyopaque) bool {
        return qtc.QSqlDriver_CommitTransaction(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#commitTransaction)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn () callconv(.c) bool ```
    pub fn OnCommitTransaction(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QSqlDriver_OnCommitTransaction(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#commitTransaction)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn QBaseCommitTransaction(self: ?*anyopaque) bool {
        return qtc.QSqlDriver_QBaseCommitTransaction(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#rollbackTransaction)
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn RollbackTransaction(self: ?*anyopaque) bool {
        return qtc.QSqlDriver_RollbackTransaction(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#rollbackTransaction)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn () callconv(.c) bool ```
    pub fn OnRollbackTransaction(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QSqlDriver_OnRollbackTransaction(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#rollbackTransaction)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn QBaseRollbackTransaction(self: ?*anyopaque) bool {
        return qtc.QSqlDriver_QBaseRollbackTransaction(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#tables)
    ///
    /// ``` self: QtC.QSqlDriver, tableType: qtsqlglobal_enums.TableType, allocator: std.mem.Allocator ```
    pub fn Tables(self: ?*anyopaque, tableType: i32, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlDriver_Tables(@ptrCast(self), @intCast(tableType));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qsqldriver.Tables: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsqldriver.Tables: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#tables)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn (self: QtC.QSqlDriver, tableType: qtsqlglobal_enums.TableType) callconv(.c) [*][*:0]const u8 ```
    pub fn OnTables(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) [*][*:0]const u8) void {
        qtc.QSqlDriver_OnTables(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#tables)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlDriver, tableType: qtsqlglobal_enums.TableType, allocator: std.mem.Allocator ```
    pub fn QBaseTables(self: ?*anyopaque, tableType: i32, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlDriver_QBaseTables(@ptrCast(self), @intCast(tableType));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qsqldriver.Tables: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsqldriver.Tables: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#primaryIndex)
    ///
    /// ``` self: QtC.QSqlDriver, tableName: []const u8 ```
    pub fn PrimaryIndex(self: ?*anyopaque, tableName: []const u8) QtC.QSqlIndex {
        const tableName_str = qtc.libqt_string{
            .len = tableName.len,
            .data = tableName.ptr,
        };
        return qtc.QSqlDriver_PrimaryIndex(@ptrCast(self), tableName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#primaryIndex)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn (self: QtC.QSqlDriver, tableName: [*:0]const u8) callconv(.c) QtC.QSqlIndex ```
    pub fn OnPrimaryIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.QSqlIndex) void {
        qtc.QSqlDriver_OnPrimaryIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#primaryIndex)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlDriver, tableName: []const u8 ```
    pub fn QBasePrimaryIndex(self: ?*anyopaque, tableName: []const u8) QtC.QSqlIndex {
        const tableName_str = qtc.libqt_string{
            .len = tableName.len,
            .data = tableName.ptr,
        };
        return qtc.QSqlDriver_QBasePrimaryIndex(@ptrCast(self), tableName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#record)
    ///
    /// ``` self: QtC.QSqlDriver, tableName: []const u8 ```
    pub fn Record(self: ?*anyopaque, tableName: []const u8) QtC.QSqlRecord {
        const tableName_str = qtc.libqt_string{
            .len = tableName.len,
            .data = tableName.ptr,
        };
        return qtc.QSqlDriver_Record(@ptrCast(self), tableName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#record)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn (self: QtC.QSqlDriver, tableName: [*:0]const u8) callconv(.c) QtC.QSqlRecord ```
    pub fn OnRecord(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.QSqlRecord) void {
        qtc.QSqlDriver_OnRecord(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#record)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlDriver, tableName: []const u8 ```
    pub fn QBaseRecord(self: ?*anyopaque, tableName: []const u8) QtC.QSqlRecord {
        const tableName_str = qtc.libqt_string{
            .len = tableName.len,
            .data = tableName.ptr,
        };
        return qtc.QSqlDriver_QBaseRecord(@ptrCast(self), tableName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#formatValue)
    ///
    /// ``` self: QtC.QSqlDriver, field: QtC.QSqlField, trimStrings: bool, allocator: std.mem.Allocator ```
    pub fn FormatValue(self: ?*anyopaque, field: ?*anyopaque, trimStrings: bool, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlDriver_FormatValue(@ptrCast(self), @ptrCast(field), trimStrings);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.FormatValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#formatValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn (self: QtC.QSqlDriver, field: QtC.QSqlField, trimStrings: bool) callconv(.c) [*:0]const u8 ```
    pub fn OnFormatValue(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, bool) callconv(.c) [*:0]const u8) void {
        qtc.QSqlDriver_OnFormatValue(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#formatValue)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlDriver, field: QtC.QSqlField, trimStrings: bool, allocator: std.mem.Allocator ```
    pub fn QBaseFormatValue(self: ?*anyopaque, field: ?*anyopaque, trimStrings: bool, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlDriver_QBaseFormatValue(@ptrCast(self), @ptrCast(field), trimStrings);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.FormatValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#escapeIdentifier)
    ///
    /// ``` self: QtC.QSqlDriver, identifier: []const u8, typeVal: qsqldriver_enums.IdentifierType, allocator: std.mem.Allocator ```
    pub fn EscapeIdentifier(self: ?*anyopaque, identifier: []const u8, typeVal: i32, allocator: std.mem.Allocator) []const u8 {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        const _str = qtc.QSqlDriver_EscapeIdentifier(@ptrCast(self), identifier_str, @intCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.EscapeIdentifier: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#escapeIdentifier)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn (self: QtC.QSqlDriver, identifier: [*:0]const u8, typeVal: qsqldriver_enums.IdentifierType) callconv(.c) [*:0]const u8 ```
    pub fn OnEscapeIdentifier(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) [*:0]const u8) void {
        qtc.QSqlDriver_OnEscapeIdentifier(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#escapeIdentifier)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlDriver, identifier: []const u8, typeVal: qsqldriver_enums.IdentifierType, allocator: std.mem.Allocator ```
    pub fn QBaseEscapeIdentifier(self: ?*anyopaque, identifier: []const u8, typeVal: i32, allocator: std.mem.Allocator) []const u8 {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        const _str = qtc.QSqlDriver_QBaseEscapeIdentifier(@ptrCast(self), identifier_str, @intCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.EscapeIdentifier: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#sqlStatement)
    ///
    /// ``` self: QtC.QSqlDriver, typeVal: qsqldriver_enums.StatementType, tableName: []const u8, rec: QtC.QSqlRecord, preparedStatement: bool, allocator: std.mem.Allocator ```
    pub fn SqlStatement(self: ?*anyopaque, typeVal: i32, tableName: []const u8, rec: ?*anyopaque, preparedStatement: bool, allocator: std.mem.Allocator) []const u8 {
        const tableName_str = qtc.libqt_string{
            .len = tableName.len,
            .data = tableName.ptr,
        };
        const _str = qtc.QSqlDriver_SqlStatement(@ptrCast(self), @intCast(typeVal), tableName_str, @ptrCast(rec), preparedStatement);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.SqlStatement: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#sqlStatement)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn (self: QtC.QSqlDriver, typeVal: qsqldriver_enums.StatementType, tableName: [*:0]const u8, rec: QtC.QSqlRecord, preparedStatement: bool) callconv(.c) [*:0]const u8 ```
    pub fn OnSqlStatement(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8, ?*anyopaque, bool) callconv(.c) [*:0]const u8) void {
        qtc.QSqlDriver_OnSqlStatement(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#sqlStatement)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlDriver, typeVal: qsqldriver_enums.StatementType, tableName: []const u8, rec: QtC.QSqlRecord, preparedStatement: bool, allocator: std.mem.Allocator ```
    pub fn QBaseSqlStatement(self: ?*anyopaque, typeVal: i32, tableName: []const u8, rec: ?*anyopaque, preparedStatement: bool, allocator: std.mem.Allocator) []const u8 {
        const tableName_str = qtc.libqt_string{
            .len = tableName.len,
            .data = tableName.ptr,
        };
        const _str = qtc.QSqlDriver_QBaseSqlStatement(@ptrCast(self), @intCast(typeVal), tableName_str, @ptrCast(rec), preparedStatement);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.SqlStatement: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#lastError)
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn LastError(self: ?*anyopaque) QtC.QSqlError {
        return qtc.QSqlDriver_LastError(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#handle)
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn Handle(self: ?*anyopaque) QtC.QVariant {
        return qtc.QSqlDriver_Handle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#handle)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn () callconv(.c) QtC.QVariant ```
    pub fn OnHandle(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.QSqlDriver_OnHandle(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#handle)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn QBaseHandle(self: ?*anyopaque) QtC.QVariant {
        return qtc.QSqlDriver_QBaseHandle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#hasFeature)
    ///
    /// ``` self: QtC.QSqlDriver, f: qsqldriver_enums.DriverFeature ```
    pub fn HasFeature(self: ?*anyopaque, f: i32) bool {
        return qtc.QSqlDriver_HasFeature(@ptrCast(self), @intCast(f));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#hasFeature)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn (self: QtC.QSqlDriver, f: qsqldriver_enums.DriverFeature) callconv(.c) bool ```
    pub fn OnHasFeature(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSqlDriver_OnHasFeature(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#hasFeature)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlDriver, f: qsqldriver_enums.DriverFeature ```
    pub fn QBaseHasFeature(self: ?*anyopaque, f: i32) bool {
        return qtc.QSqlDriver_QBaseHasFeature(@ptrCast(self), @intCast(f));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#close)
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn Close(self: ?*anyopaque) void {
        qtc.QSqlDriver_Close(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#close)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn () callconv(.c) void ```
    pub fn OnClose(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QSqlDriver_OnClose(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#close)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn QBaseClose(self: ?*anyopaque) void {
        qtc.QSqlDriver_QBaseClose(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#createResult)
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn CreateResult(self: ?*anyopaque) QtC.QSqlResult {
        return qtc.QSqlDriver_CreateResult(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#createResult)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn () callconv(.c) QtC.QSqlResult ```
    pub fn OnCreateResult(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSqlResult) void {
        qtc.QSqlDriver_OnCreateResult(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#createResult)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn QBaseCreateResult(self: ?*anyopaque) QtC.QSqlResult {
        return qtc.QSqlDriver_QBaseCreateResult(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#open)
    ///
    /// ``` self: QtC.QSqlDriver, db: []const u8, user: []const u8, password: []const u8, host: []const u8, port: i32, connOpts: []const u8 ```
    pub fn Open(self: ?*anyopaque, db: []const u8, user: []const u8, password: []const u8, host: []const u8, port: i32, connOpts: []const u8) bool {
        const db_str = qtc.libqt_string{
            .len = db.len,
            .data = db.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        const connOpts_str = qtc.libqt_string{
            .len = connOpts.len,
            .data = connOpts.ptr,
        };
        return qtc.QSqlDriver_Open(@ptrCast(self), db_str, user_str, password_str, host_str, @intCast(port), connOpts_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#open)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn (self: QtC.QSqlDriver, db: [*:0]const u8, user: [*:0]const u8, password: [*:0]const u8, host: [*:0]const u8, port: i32, connOpts: [*:0]const u8) callconv(.c) bool ```
    pub fn OnOpen(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8, i32, [*:0]const u8) callconv(.c) bool) void {
        qtc.QSqlDriver_OnOpen(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#open)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlDriver, db: []const u8, user: []const u8, password: []const u8, host: []const u8, port: i32, connOpts: []const u8 ```
    pub fn QBaseOpen(self: ?*anyopaque, db: []const u8, user: []const u8, password: []const u8, host: []const u8, port: i32, connOpts: []const u8) bool {
        const db_str = qtc.libqt_string{
            .len = db.len,
            .data = db.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        const connOpts_str = qtc.libqt_string{
            .len = connOpts.len,
            .data = connOpts.ptr,
        };
        return qtc.QSqlDriver_QBaseOpen(@ptrCast(self), db_str, user_str, password_str, host_str, @intCast(port), connOpts_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#subscribeToNotification)
    ///
    /// ``` self: QtC.QSqlDriver, name: []const u8 ```
    pub fn SubscribeToNotification(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlDriver_SubscribeToNotification(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#subscribeToNotification)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn (self: QtC.QSqlDriver, name: [*:0]const u8) callconv(.c) bool ```
    pub fn OnSubscribeToNotification(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.QSqlDriver_OnSubscribeToNotification(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#subscribeToNotification)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlDriver, name: []const u8 ```
    pub fn QBaseSubscribeToNotification(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlDriver_QBaseSubscribeToNotification(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#unsubscribeFromNotification)
    ///
    /// ``` self: QtC.QSqlDriver, name: []const u8 ```
    pub fn UnsubscribeFromNotification(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlDriver_UnsubscribeFromNotification(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#unsubscribeFromNotification)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn (self: QtC.QSqlDriver, name: [*:0]const u8) callconv(.c) bool ```
    pub fn OnUnsubscribeFromNotification(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.QSqlDriver_OnUnsubscribeFromNotification(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#unsubscribeFromNotification)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlDriver, name: []const u8 ```
    pub fn QBaseUnsubscribeFromNotification(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlDriver_QBaseUnsubscribeFromNotification(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#subscribedToNotifications)
    ///
    /// ``` self: QtC.QSqlDriver, allocator: std.mem.Allocator ```
    pub fn SubscribedToNotifications(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlDriver_SubscribedToNotifications(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qsqldriver.SubscribedToNotifications: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsqldriver.SubscribedToNotifications: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#subscribedToNotifications)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn () callconv(.c) [*][*:0]const u8 ```
    pub fn OnSubscribedToNotifications(self: ?*anyopaque, callback: *const fn () callconv(.c) [*][*:0]const u8) void {
        qtc.QSqlDriver_OnSubscribedToNotifications(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#subscribedToNotifications)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlDriver, allocator: std.mem.Allocator ```
    pub fn QBaseSubscribedToNotifications(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlDriver_QBaseSubscribedToNotifications(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qsqldriver.SubscribedToNotifications: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsqldriver.SubscribedToNotifications: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#isIdentifierEscaped)
    ///
    /// ``` self: QtC.QSqlDriver, identifier: []const u8, typeVal: qsqldriver_enums.IdentifierType ```
    pub fn IsIdentifierEscaped(self: ?*anyopaque, identifier: []const u8, typeVal: i32) bool {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        return qtc.QSqlDriver_IsIdentifierEscaped(@ptrCast(self), identifier_str, @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#isIdentifierEscaped)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn (self: QtC.QSqlDriver, identifier: [*:0]const u8, typeVal: qsqldriver_enums.IdentifierType) callconv(.c) bool ```
    pub fn OnIsIdentifierEscaped(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) bool) void {
        qtc.QSqlDriver_OnIsIdentifierEscaped(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#isIdentifierEscaped)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlDriver, identifier: []const u8, typeVal: qsqldriver_enums.IdentifierType ```
    pub fn QBaseIsIdentifierEscaped(self: ?*anyopaque, identifier: []const u8, typeVal: i32) bool {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        return qtc.QSqlDriver_QBaseIsIdentifierEscaped(@ptrCast(self), identifier_str, @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#stripDelimiters)
    ///
    /// ``` self: QtC.QSqlDriver, identifier: []const u8, typeVal: qsqldriver_enums.IdentifierType, allocator: std.mem.Allocator ```
    pub fn StripDelimiters(self: ?*anyopaque, identifier: []const u8, typeVal: i32, allocator: std.mem.Allocator) []const u8 {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        const _str = qtc.QSqlDriver_StripDelimiters(@ptrCast(self), identifier_str, @intCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.StripDelimiters: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#stripDelimiters)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn (self: QtC.QSqlDriver, identifier: [*:0]const u8, typeVal: qsqldriver_enums.IdentifierType) callconv(.c) [*:0]const u8 ```
    pub fn OnStripDelimiters(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) [*:0]const u8) void {
        qtc.QSqlDriver_OnStripDelimiters(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#stripDelimiters)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlDriver, identifier: []const u8, typeVal: qsqldriver_enums.IdentifierType, allocator: std.mem.Allocator ```
    pub fn QBaseStripDelimiters(self: ?*anyopaque, identifier: []const u8, typeVal: i32, allocator: std.mem.Allocator) []const u8 {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        const _str = qtc.QSqlDriver_QBaseStripDelimiters(@ptrCast(self), identifier_str, @intCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.StripDelimiters: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#setNumericalPrecisionPolicy)
    ///
    /// ``` self: QtC.QSqlDriver, precisionPolicy: qtsqlglobal_enums.NumericalPrecisionPolicy ```
    pub fn SetNumericalPrecisionPolicy(self: ?*anyopaque, precisionPolicy: i32) void {
        qtc.QSqlDriver_SetNumericalPrecisionPolicy(@ptrCast(self), @intCast(precisionPolicy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#numericalPrecisionPolicy)
    ///
    /// ``` self: QtC.QSqlDriver ```
    ///
    /// Returns: ``` qtsqlglobal_enums.NumericalPrecisionPolicy ```
    pub fn NumericalPrecisionPolicy(self: ?*anyopaque) i32 {
        return qtc.QSqlDriver_NumericalPrecisionPolicy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#dbmsType)
    ///
    /// ``` self: QtC.QSqlDriver ```
    ///
    /// Returns: ``` qsqldriver_enums.DbmsType ```
    pub fn DbmsType(self: ?*anyopaque) i32 {
        return qtc.QSqlDriver_DbmsType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#maximumIdentifierLength)
    ///
    /// ``` self: QtC.QSqlDriver, typeVal: qsqldriver_enums.IdentifierType ```
    pub fn MaximumIdentifierLength(self: ?*anyopaque, typeVal: i32) i32 {
        return qtc.QSqlDriver_MaximumIdentifierLength(@ptrCast(self), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#maximumIdentifierLength)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn (self: QtC.QSqlDriver, typeVal: qsqldriver_enums.IdentifierType) callconv(.c) i32 ```
    pub fn OnMaximumIdentifierLength(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QSqlDriver_OnMaximumIdentifierLength(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#maximumIdentifierLength)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlDriver, typeVal: qsqldriver_enums.IdentifierType ```
    pub fn QBaseMaximumIdentifierLength(self: ?*anyopaque, typeVal: i32) i32 {
        return qtc.QSqlDriver_QBaseMaximumIdentifierLength(@ptrCast(self), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#cancelQuery)
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn CancelQuery(self: ?*anyopaque) bool {
        return qtc.QSqlDriver_CancelQuery(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#cancelQuery)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn () callconv(.c) bool ```
    pub fn OnCancelQuery(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QSqlDriver_OnCancelQuery(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#cancelQuery)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn QBaseCancelQuery(self: ?*anyopaque) bool {
        return qtc.QSqlDriver_QBaseCancelQuery(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#notification)
    ///
    /// ``` self: QtC.QSqlDriver, name: []const u8, source: qsqldriver_enums.NotificationSource, payload: QtC.QVariant ```
    pub fn Notification(self: ?*anyopaque, name: []const u8, source: i32, payload: ?*anyopaque) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QSqlDriver_Notification(@ptrCast(self), name_str, @intCast(source), @ptrCast(payload));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#notification)
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn (self: QtC.QSqlDriver, name: [*:0]const u8, source: qsqldriver_enums.NotificationSource, payload: QtC.QVariant) callconv(.c) void ```
    pub fn OnNotification(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlDriver_Connect_Notification(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#setOpen)
    ///
    /// ``` self: QtC.QSqlDriver, o: bool ```
    pub fn SetOpen(self: ?*anyopaque, o: bool) void {
        qtc.QSqlDriver_SetOpen(@ptrCast(self), o);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#setOpen)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn (self: QtC.QSqlDriver, o: bool) callconv(.c) void ```
    pub fn OnSetOpen(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QSqlDriver_OnSetOpen(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#setOpen)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlDriver, o: bool ```
    pub fn QBaseSetOpen(self: ?*anyopaque, o: bool) void {
        qtc.QSqlDriver_QBaseSetOpen(@ptrCast(self), o);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#setOpenError)
    ///
    /// ``` self: QtC.QSqlDriver, e: bool ```
    pub fn SetOpenError(self: ?*anyopaque, e: bool) void {
        qtc.QSqlDriver_SetOpenError(@ptrCast(self), e);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#setOpenError)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn (self: QtC.QSqlDriver, e: bool) callconv(.c) void ```
    pub fn OnSetOpenError(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QSqlDriver_OnSetOpenError(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#setOpenError)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlDriver, e: bool ```
    pub fn QBaseSetOpenError(self: ?*anyopaque, e: bool) void {
        qtc.QSqlDriver_QBaseSetOpenError(@ptrCast(self), e);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#setLastError)
    ///
    /// ``` self: QtC.QSqlDriver, e: QtC.QSqlError ```
    pub fn SetLastError(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QSqlDriver_SetLastError(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#setLastError)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn (self: QtC.QSqlDriver, e: QtC.QSqlError) callconv(.c) void ```
    pub fn OnSetLastError(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlDriver_OnSetLastError(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#setLastError)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlDriver, e: QtC.QSqlError ```
    pub fn QBaseSetLastError(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QSqlDriver_QBaseSetLastError(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QSqlDriver_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QSqlDriver_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QSqlDriver, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QSqlDriver, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QSqlDriver, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QSqlDriver, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QSqlDriver, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QSqlDriver, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QSqlDriver, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QSqlDriver, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qsqldriver.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QSqlDriver, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QSqlDriver, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QSqlDriver, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QSqlDriver, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QSqlDriver, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QSqlDriver, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QSqlDriver, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qsqldriver.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsqldriver.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn (self: QtC.QSqlDriver) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QSqlDriver, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QSqlDriver, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QSqlDriver, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QSqlDriver, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QSqlDriver, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn (self: QtC.QSqlDriver, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlDriver, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSqlDriver_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlDriver, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSqlDriver_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn (self: QtC.QSqlDriver, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlDriver_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlDriver, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSqlDriver_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlDriver, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSqlDriver_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn (self: QtC.QSqlDriver, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlDriver_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlDriver, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSqlDriver_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlDriver, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSqlDriver_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn (self: QtC.QSqlDriver, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlDriver_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlDriver, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSqlDriver_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlDriver, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSqlDriver_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn (self: QtC.QSqlDriver, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlDriver_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlDriver, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSqlDriver_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlDriver, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSqlDriver_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn (self: QtC.QSqlDriver, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlDriver_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlDriver, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSqlDriver_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlDriver, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSqlDriver_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn (self: QtC.QSqlDriver, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlDriver_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlDriver, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSqlDriver_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlDriver, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSqlDriver_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn (self: QtC.QSqlDriver, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlDriver_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QSqlDriver_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QSqlDriver_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QSqlDriver_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QSqlDriver_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QSqlDriver_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QSqlDriver_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlDriver, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSqlDriver_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlDriver, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSqlDriver_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn (self: QtC.QSqlDriver, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSqlDriver_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlDriver, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QSqlDriver_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlDriver, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QSqlDriver_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn (self: QtC.QSqlDriver, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlDriver_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSqlDriver, callback: *const fn (self: QtC.QSqlDriver, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqldriver.html#dtor.QSqlDriver)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSqlDriver ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSqlDriver_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qsqldriver.html#types
pub const enums = struct {
    pub const DriverFeature = enum {
        pub const Transactions: i32 = 0;
        pub const QuerySize: i32 = 1;
        pub const BLOB: i32 = 2;
        pub const Unicode: i32 = 3;
        pub const PreparedQueries: i32 = 4;
        pub const NamedPlaceholders: i32 = 5;
        pub const PositionalPlaceholders: i32 = 6;
        pub const LastInsertId: i32 = 7;
        pub const BatchOperations: i32 = 8;
        pub const SimpleLocking: i32 = 9;
        pub const LowPrecisionNumbers: i32 = 10;
        pub const EventNotifications: i32 = 11;
        pub const FinishQuery: i32 = 12;
        pub const MultipleResultSets: i32 = 13;
        pub const CancelQuery: i32 = 14;
    };

    pub const StatementType = enum {
        pub const WhereStatement: i32 = 0;
        pub const SelectStatement: i32 = 1;
        pub const UpdateStatement: i32 = 2;
        pub const InsertStatement: i32 = 3;
        pub const DeleteStatement: i32 = 4;
    };

    pub const IdentifierType = enum {
        pub const FieldName: i32 = 0;
        pub const TableName: i32 = 1;
    };

    pub const NotificationSource = enum {
        pub const UnknownSource: i32 = 0;
        pub const SelfSource: i32 = 1;
        pub const OtherSource: i32 = 2;
    };

    pub const DbmsType = enum {
        pub const UnknownDbms: i32 = 0;
        pub const MSSqlServer: i32 = 1;
        pub const MySqlServer: i32 = 2;
        pub const PostgreSQL: i32 = 3;
        pub const Oracle: i32 = 4;
        pub const Sybase: i32 = 5;
        pub const SQLite: i32 = 6;
        pub const Interbase: i32 = 7;
        pub const DB2: i32 = 8;
        pub const MimerSQL: i32 = 9;
    };
};
