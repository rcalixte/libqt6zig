const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QSqlError = @import("libqt6").QSqlError;
const QSqlField = @import("libqt6").QSqlField;
const QSqlIndex = @import("libqt6").QSqlIndex;
const QSqlRecord = @import("libqt6").QSqlRecord;
const QSqlResult = @import("libqt6").QSqlResult;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qsqldriver_enums = enums;
const qtsqlglobal_enums = @import("libqtsqlglobal.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html)
pub const QSqlDriver = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSqlDriver,

    pub const _is_QSqlDriver = {};
    pub const _is_QObject = {};

    /// New constructs a new QSqlDriver object.
    ///
    pub fn New() QSqlDriver {
        return .{ .ptr = qtc.QSqlDriver_new() };
    }

    /// New2 constructs a new QSqlDriver object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QSqlDriver {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QSqlDriver_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn MetaObject(self: QSqlDriver) QMetaObject {
        return .{ .ptr = qtc.QSqlDriver_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QSqlDriver, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QSqlDriver_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn SuperMetaObject(self: QSqlDriver) QMetaObject {
        return .{ .ptr = qtc.QSqlDriver_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QSqlDriver, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSqlDriver_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn (self: QSqlDriver, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QSqlDriver, callback: *const fn (QSqlDriver, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QSqlDriver_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QSqlDriver, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSqlDriver_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QSqlDriver, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSqlDriver_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn (self: QSqlDriver, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QSqlDriver, callback: *const fn (QSqlDriver, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QSqlDriver_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QSqlDriver, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSqlDriver_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#isOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn IsOpen(self: QSqlDriver) bool {
        return qtc.QSqlDriver_IsOpen(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#isOpen)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsOpen(self: QSqlDriver, callback: *const fn () callconv(.c) bool) void {
        qtc.QSqlDriver_OnIsOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsOpen` instead
    ///
    pub const QBaseIsOpen = SuperIsOpen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#isOpen)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn SuperIsOpen(self: QSqlDriver) bool {
        return qtc.QSqlDriver_SuperIsOpen(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#isOpenError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn IsOpenError(self: QSqlDriver) bool {
        return qtc.QSqlDriver_IsOpenError(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#beginTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn BeginTransaction(self: QSqlDriver) bool {
        return qtc.QSqlDriver_BeginTransaction(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#beginTransaction)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnBeginTransaction(self: QSqlDriver, callback: *const fn () callconv(.c) bool) void {
        qtc.QSqlDriver_OnBeginTransaction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperBeginTransaction` instead
    ///
    pub const QBaseBeginTransaction = SuperBeginTransaction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#beginTransaction)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn SuperBeginTransaction(self: QSqlDriver) bool {
        return qtc.QSqlDriver_SuperBeginTransaction(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#commitTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn CommitTransaction(self: QSqlDriver) bool {
        return qtc.QSqlDriver_CommitTransaction(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#commitTransaction)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnCommitTransaction(self: QSqlDriver, callback: *const fn () callconv(.c) bool) void {
        qtc.QSqlDriver_OnCommitTransaction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCommitTransaction` instead
    ///
    pub const QBaseCommitTransaction = SuperCommitTransaction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#commitTransaction)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn SuperCommitTransaction(self: QSqlDriver) bool {
        return qtc.QSqlDriver_SuperCommitTransaction(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#rollbackTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn RollbackTransaction(self: QSqlDriver) bool {
        return qtc.QSqlDriver_RollbackTransaction(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#rollbackTransaction)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnRollbackTransaction(self: QSqlDriver, callback: *const fn () callconv(.c) bool) void {
        qtc.QSqlDriver_OnRollbackTransaction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRollbackTransaction` instead
    ///
    pub const QBaseRollbackTransaction = SuperRollbackTransaction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#rollbackTransaction)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn SuperRollbackTransaction(self: QSqlDriver) bool {
        return qtc.QSqlDriver_SuperRollbackTransaction(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#tables)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` tableType: qtsqlglobal_enums.TableType `
    ///
    pub fn Tables(self: QSqlDriver, allocator: std.mem.Allocator, tableType: i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlDriver_Tables(@ptrCast(self.ptr), @bitCast(tableType));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#tables)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn (self: QSqlDriver, tableType: qtsqlglobal_enums.TableType) callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn OnTables(self: QSqlDriver, callback: *const fn (QSqlDriver, i32) callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QSqlDriver_OnTables(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperTables` instead
    ///
    pub const QBaseTables = SuperTables;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#tables)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` tableType: qtsqlglobal_enums.TableType `
    ///
    pub fn SuperTables(self: QSqlDriver, allocator: std.mem.Allocator, tableType: i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlDriver_SuperTables(@ptrCast(self.ptr), @bitCast(tableType));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#primaryIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` tableName: []const u8 `
    ///
    pub fn PrimaryIndex(self: QSqlDriver, tableName: []const u8) QSqlIndex {
        const tableName_str = qtc.libqt_string{
            .len = tableName.len,
            .data = tableName.ptr,
        };
        return .{ .ptr = qtc.QSqlDriver_PrimaryIndex(@ptrCast(self.ptr), tableName_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#primaryIndex)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn (self: QSqlDriver, tableName: [*:0]const u8) callconv(.c) QSqlIndex `
    ///
    pub fn OnPrimaryIndex(self: QSqlDriver, callback: *const fn (QSqlDriver, [*:0]const u8) callconv(.c) QSqlIndex) void {
        qtc.QSqlDriver_OnPrimaryIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPrimaryIndex` instead
    ///
    pub const QBasePrimaryIndex = SuperPrimaryIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#primaryIndex)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` tableName: []const u8 `
    ///
    pub fn SuperPrimaryIndex(self: QSqlDriver, tableName: []const u8) QSqlIndex {
        const tableName_str = qtc.libqt_string{
            .len = tableName.len,
            .data = tableName.ptr,
        };
        return .{ .ptr = qtc.QSqlDriver_SuperPrimaryIndex(@ptrCast(self.ptr), tableName_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#record)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` tableName: []const u8 `
    ///
    pub fn Record(self: QSqlDriver, tableName: []const u8) QSqlRecord {
        const tableName_str = qtc.libqt_string{
            .len = tableName.len,
            .data = tableName.ptr,
        };
        return .{ .ptr = qtc.QSqlDriver_Record(@ptrCast(self.ptr), tableName_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#record)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn (self: QSqlDriver, tableName: [*:0]const u8) callconv(.c) QSqlRecord `
    ///
    pub fn OnRecord(self: QSqlDriver, callback: *const fn (QSqlDriver, [*:0]const u8) callconv(.c) QSqlRecord) void {
        qtc.QSqlDriver_OnRecord(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRecord` instead
    ///
    pub const QBaseRecord = SuperRecord;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#record)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` tableName: []const u8 `
    ///
    pub fn SuperRecord(self: QSqlDriver, tableName: []const u8) QSqlRecord {
        const tableName_str = qtc.libqt_string{
            .len = tableName.len,
            .data = tableName.ptr,
        };
        return .{ .ptr = qtc.QSqlDriver_SuperRecord(@ptrCast(self.ptr), tableName_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#formatValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` field: QSqlField `
    ///
    /// ` trimStrings: bool `
    ///
    pub fn FormatValue(self: QSqlDriver, allocator: std.mem.Allocator, field: anytype, trimStrings: bool) []const u8 {
        comptime _ = @TypeOf(field)._is_QSqlField;
        var _str = qtc.QSqlDriver_FormatValue(@ptrCast(self.ptr), @ptrCast(field.ptr), trimStrings);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.FormatValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#formatValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn (self: QSqlDriver, field: QSqlField, trimStrings: bool) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnFormatValue(self: QSqlDriver, callback: *const fn (QSqlDriver, QSqlField, bool) callconv(.c) [*:0]const u8) void {
        qtc.QSqlDriver_OnFormatValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFormatValue` instead
    ///
    pub const QBaseFormatValue = SuperFormatValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#formatValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` field: QSqlField `
    ///
    /// ` trimStrings: bool `
    ///
    pub fn SuperFormatValue(self: QSqlDriver, allocator: std.mem.Allocator, field: anytype, trimStrings: bool) []const u8 {
        comptime _ = @TypeOf(field)._is_QSqlField;
        var _str = qtc.QSqlDriver_SuperFormatValue(@ptrCast(self.ptr), @ptrCast(field.ptr), trimStrings);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.FormatValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#escapeIdentifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` identifier: []const u8 `
    ///
    /// ` typeVal: qsqldriver_enums.IdentifierType `
    ///
    pub fn EscapeIdentifier(self: QSqlDriver, allocator: std.mem.Allocator, identifier: []const u8, typeVal: i32) []const u8 {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        var _str = qtc.QSqlDriver_EscapeIdentifier(@ptrCast(self.ptr), identifier_str, @bitCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.EscapeIdentifier: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#escapeIdentifier)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn (self: QSqlDriver, identifier: [*:0]const u8, typeVal: qsqldriver_enums.IdentifierType) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnEscapeIdentifier(self: QSqlDriver, callback: *const fn (QSqlDriver, [*:0]const u8, i32) callconv(.c) [*:0]const u8) void {
        qtc.QSqlDriver_OnEscapeIdentifier(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEscapeIdentifier` instead
    ///
    pub const QBaseEscapeIdentifier = SuperEscapeIdentifier;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#escapeIdentifier)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` identifier: []const u8 `
    ///
    /// ` typeVal: qsqldriver_enums.IdentifierType `
    ///
    pub fn SuperEscapeIdentifier(self: QSqlDriver, allocator: std.mem.Allocator, identifier: []const u8, typeVal: i32) []const u8 {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        var _str = qtc.QSqlDriver_SuperEscapeIdentifier(@ptrCast(self.ptr), identifier_str, @bitCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.EscapeIdentifier: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#sqlStatement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` typeVal: qsqldriver_enums.StatementType `
    ///
    /// ` tableName: []const u8 `
    ///
    /// ` rec: QSqlRecord `
    ///
    /// ` preparedStatement: bool `
    ///
    pub fn SqlStatement(self: QSqlDriver, allocator: std.mem.Allocator, typeVal: i32, tableName: []const u8, rec: anytype, preparedStatement: bool) []const u8 {
        const tableName_str = qtc.libqt_string{
            .len = tableName.len,
            .data = tableName.ptr,
        };
        comptime _ = @TypeOf(rec)._is_QSqlRecord;
        var _str = qtc.QSqlDriver_SqlStatement(@ptrCast(self.ptr), @bitCast(typeVal), tableName_str, @ptrCast(rec.ptr), preparedStatement);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.SqlStatement: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#sqlStatement)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn (self: QSqlDriver, typeVal: qsqldriver_enums.StatementType, tableName: [*:0]const u8, rec: QSqlRecord, preparedStatement: bool) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnSqlStatement(self: QSqlDriver, callback: *const fn (QSqlDriver, i32, [*:0]const u8, QSqlRecord, bool) callconv(.c) [*:0]const u8) void {
        qtc.QSqlDriver_OnSqlStatement(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSqlStatement` instead
    ///
    pub const QBaseSqlStatement = SuperSqlStatement;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#sqlStatement)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` typeVal: qsqldriver_enums.StatementType `
    ///
    /// ` tableName: []const u8 `
    ///
    /// ` rec: QSqlRecord `
    ///
    /// ` preparedStatement: bool `
    ///
    pub fn SuperSqlStatement(self: QSqlDriver, allocator: std.mem.Allocator, typeVal: i32, tableName: []const u8, rec: anytype, preparedStatement: bool) []const u8 {
        const tableName_str = qtc.libqt_string{
            .len = tableName.len,
            .data = tableName.ptr,
        };
        comptime _ = @TypeOf(rec)._is_QSqlRecord;
        var _str = qtc.QSqlDriver_SuperSqlStatement(@ptrCast(self.ptr), @bitCast(typeVal), tableName_str, @ptrCast(rec.ptr), preparedStatement);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.SqlStatement: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#lastError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn LastError(self: QSqlDriver) QSqlError {
        return .{ .ptr = qtc.QSqlDriver_LastError(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#handle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn Handle(self: QSqlDriver) QVariant {
        return .{ .ptr = qtc.QSqlDriver_Handle(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#handle)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    pub fn OnHandle(self: QSqlDriver, callback: *const fn () callconv(.c) QVariant) void {
        qtc.QSqlDriver_OnHandle(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHandle` instead
    ///
    pub const QBaseHandle = SuperHandle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#handle)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn SuperHandle(self: QSqlDriver) QVariant {
        return .{ .ptr = qtc.QSqlDriver_SuperHandle(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#hasFeature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` f: qsqldriver_enums.DriverFeature `
    ///
    pub fn HasFeature(self: QSqlDriver, f: i32) bool {
        return qtc.QSqlDriver_HasFeature(@ptrCast(self.ptr), @bitCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#hasFeature)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn (self: QSqlDriver, f: qsqldriver_enums.DriverFeature) callconv(.c) bool `
    ///
    pub fn OnHasFeature(self: QSqlDriver, callback: *const fn (QSqlDriver, i32) callconv(.c) bool) void {
        qtc.QSqlDriver_OnHasFeature(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHasFeature` instead
    ///
    pub const QBaseHasFeature = SuperHasFeature;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#hasFeature)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` f: qsqldriver_enums.DriverFeature `
    ///
    pub fn SuperHasFeature(self: QSqlDriver, f: i32) bool {
        return qtc.QSqlDriver_SuperHasFeature(@ptrCast(self.ptr), @bitCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn Close(self: QSqlDriver) void {
        qtc.QSqlDriver_Close(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#close)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnClose(self: QSqlDriver, callback: *const fn () callconv(.c) void) void {
        qtc.QSqlDriver_OnClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClose` instead
    ///
    pub const QBaseClose = SuperClose;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#close)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn SuperClose(self: QSqlDriver) void {
        qtc.QSqlDriver_SuperClose(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#createResult)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn CreateResult(self: QSqlDriver) QSqlResult {
        return .{ .ptr = qtc.QSqlDriver_CreateResult(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#createResult)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn () callconv(.c) QSqlResult `
    ///
    pub fn OnCreateResult(self: QSqlDriver, callback: *const fn () callconv(.c) QSqlResult) void {
        qtc.QSqlDriver_OnCreateResult(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreateResult` instead
    ///
    pub const QBaseCreateResult = SuperCreateResult;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#createResult)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn SuperCreateResult(self: QSqlDriver) QSqlResult {
        return .{ .ptr = qtc.QSqlDriver_SuperCreateResult(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` db: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` password: []const u8 `
    ///
    /// ` host: []const u8 `
    ///
    /// ` port: i32 `
    ///
    /// ` connOpts: []const u8 `
    ///
    pub fn Open(self: QSqlDriver, db: []const u8, user: []const u8, password: []const u8, host: []const u8, port: i32, connOpts: []const u8) bool {
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
        return qtc.QSqlDriver_Open(@ptrCast(self.ptr), db_str, user_str, password_str, host_str, @bitCast(port), connOpts_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#open)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn (self: QSqlDriver, db: [*:0]const u8, user: [*:0]const u8, password: [*:0]const u8, host: [*:0]const u8, port: i32, connOpts: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnOpen(self: QSqlDriver, callback: *const fn (QSqlDriver, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8, i32, [*:0]const u8) callconv(.c) bool) void {
        qtc.QSqlDriver_OnOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperOpen` instead
    ///
    pub const QBaseOpen = SuperOpen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#open)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` db: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` password: []const u8 `
    ///
    /// ` host: []const u8 `
    ///
    /// ` port: i32 `
    ///
    /// ` connOpts: []const u8 `
    ///
    pub fn SuperOpen(self: QSqlDriver, db: []const u8, user: []const u8, password: []const u8, host: []const u8, port: i32, connOpts: []const u8) bool {
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
        return qtc.QSqlDriver_SuperOpen(@ptrCast(self.ptr), db_str, user_str, password_str, host_str, @bitCast(port), connOpts_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#subscribeToNotification)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SubscribeToNotification(self: QSqlDriver, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlDriver_SubscribeToNotification(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#subscribeToNotification)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn (self: QSqlDriver, name: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnSubscribeToNotification(self: QSqlDriver, callback: *const fn (QSqlDriver, [*:0]const u8) callconv(.c) bool) void {
        qtc.QSqlDriver_OnSubscribeToNotification(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSubscribeToNotification` instead
    ///
    pub const QBaseSubscribeToNotification = SuperSubscribeToNotification;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#subscribeToNotification)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperSubscribeToNotification(self: QSqlDriver, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlDriver_SuperSubscribeToNotification(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#unsubscribeFromNotification)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` name: []const u8 `
    ///
    pub fn UnsubscribeFromNotification(self: QSqlDriver, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlDriver_UnsubscribeFromNotification(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#unsubscribeFromNotification)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn (self: QSqlDriver, name: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnUnsubscribeFromNotification(self: QSqlDriver, callback: *const fn (QSqlDriver, [*:0]const u8) callconv(.c) bool) void {
        qtc.QSqlDriver_OnUnsubscribeFromNotification(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUnsubscribeFromNotification` instead
    ///
    pub const QBaseUnsubscribeFromNotification = SuperUnsubscribeFromNotification;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#unsubscribeFromNotification)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperUnsubscribeFromNotification(self: QSqlDriver, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlDriver_SuperUnsubscribeFromNotification(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#subscribedToNotifications)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SubscribedToNotifications(self: QSqlDriver, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlDriver_SubscribedToNotifications(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#subscribedToNotifications)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn OnSubscribedToNotifications(self: QSqlDriver, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QSqlDriver_OnSubscribedToNotifications(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSubscribedToNotifications` instead
    ///
    pub const QBaseSubscribedToNotifications = SuperSubscribedToNotifications;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#subscribedToNotifications)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperSubscribedToNotifications(self: QSqlDriver, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlDriver_SuperSubscribedToNotifications(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#isIdentifierEscaped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` identifier: []const u8 `
    ///
    /// ` typeVal: qsqldriver_enums.IdentifierType `
    ///
    pub fn IsIdentifierEscaped(self: QSqlDriver, identifier: []const u8, typeVal: i32) bool {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        return qtc.QSqlDriver_IsIdentifierEscaped(@ptrCast(self.ptr), identifier_str, @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#isIdentifierEscaped)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn (self: QSqlDriver, identifier: [*:0]const u8, typeVal: qsqldriver_enums.IdentifierType) callconv(.c) bool `
    ///
    pub fn OnIsIdentifierEscaped(self: QSqlDriver, callback: *const fn (QSqlDriver, [*:0]const u8, i32) callconv(.c) bool) void {
        qtc.QSqlDriver_OnIsIdentifierEscaped(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsIdentifierEscaped` instead
    ///
    pub const QBaseIsIdentifierEscaped = SuperIsIdentifierEscaped;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#isIdentifierEscaped)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` identifier: []const u8 `
    ///
    /// ` typeVal: qsqldriver_enums.IdentifierType `
    ///
    pub fn SuperIsIdentifierEscaped(self: QSqlDriver, identifier: []const u8, typeVal: i32) bool {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        return qtc.QSqlDriver_SuperIsIdentifierEscaped(@ptrCast(self.ptr), identifier_str, @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#stripDelimiters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` identifier: []const u8 `
    ///
    /// ` typeVal: qsqldriver_enums.IdentifierType `
    ///
    pub fn StripDelimiters(self: QSqlDriver, allocator: std.mem.Allocator, identifier: []const u8, typeVal: i32) []const u8 {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        var _str = qtc.QSqlDriver_StripDelimiters(@ptrCast(self.ptr), identifier_str, @bitCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.StripDelimiters: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#stripDelimiters)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn (self: QSqlDriver, identifier: [*:0]const u8, typeVal: qsqldriver_enums.IdentifierType) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnStripDelimiters(self: QSqlDriver, callback: *const fn (QSqlDriver, [*:0]const u8, i32) callconv(.c) [*:0]const u8) void {
        qtc.QSqlDriver_OnStripDelimiters(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperStripDelimiters` instead
    ///
    pub const QBaseStripDelimiters = SuperStripDelimiters;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#stripDelimiters)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` identifier: []const u8 `
    ///
    /// ` typeVal: qsqldriver_enums.IdentifierType `
    ///
    pub fn SuperStripDelimiters(self: QSqlDriver, allocator: std.mem.Allocator, identifier: []const u8, typeVal: i32) []const u8 {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        var _str = qtc.QSqlDriver_SuperStripDelimiters(@ptrCast(self.ptr), identifier_str, @bitCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.StripDelimiters: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#setNumericalPrecisionPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` precisionPolicy: qtsqlglobal_enums.NumericalPrecisionPolicy `
    ///
    pub fn SetNumericalPrecisionPolicy(self: QSqlDriver, precisionPolicy: i32) void {
        qtc.QSqlDriver_SetNumericalPrecisionPolicy(@ptrCast(self.ptr), @bitCast(precisionPolicy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#numericalPrecisionPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ## Returns:
    ///
    /// ` qtsqlglobal_enums.NumericalPrecisionPolicy `
    ///
    pub fn NumericalPrecisionPolicy(self: QSqlDriver) i32 {
        return qtc.QSqlDriver_NumericalPrecisionPolicy(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#dbmsType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ## Returns:
    ///
    /// ` qsqldriver_enums.DbmsType `
    ///
    pub fn DbmsType(self: QSqlDriver) i32 {
        return qtc.QSqlDriver_DbmsType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#maximumIdentifierLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` typeVal: qsqldriver_enums.IdentifierType `
    ///
    pub fn MaximumIdentifierLength(self: QSqlDriver, typeVal: i32) i32 {
        return qtc.QSqlDriver_MaximumIdentifierLength(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#maximumIdentifierLength)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn (self: QSqlDriver, typeVal: qsqldriver_enums.IdentifierType) callconv(.c) i32 `
    ///
    pub fn OnMaximumIdentifierLength(self: QSqlDriver, callback: *const fn (QSqlDriver, i32) callconv(.c) i32) void {
        qtc.QSqlDriver_OnMaximumIdentifierLength(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMaximumIdentifierLength` instead
    ///
    pub const QBaseMaximumIdentifierLength = SuperMaximumIdentifierLength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#maximumIdentifierLength)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` typeVal: qsqldriver_enums.IdentifierType `
    ///
    pub fn SuperMaximumIdentifierLength(self: QSqlDriver, typeVal: i32) i32 {
        return qtc.QSqlDriver_SuperMaximumIdentifierLength(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#cancelQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn CancelQuery(self: QSqlDriver) bool {
        return qtc.QSqlDriver_CancelQuery(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#cancelQuery)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnCancelQuery(self: QSqlDriver, callback: *const fn () callconv(.c) bool) void {
        qtc.QSqlDriver_OnCancelQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCancelQuery` instead
    ///
    pub const QBaseCancelQuery = SuperCancelQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#cancelQuery)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn SuperCancelQuery(self: QSqlDriver) bool {
        return qtc.QSqlDriver_SuperCancelQuery(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#notification)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` name: []const u8 `
    ///
    /// ` source: qsqldriver_enums.NotificationSource `
    ///
    /// ` payload: QVariant `
    ///
    pub fn Notification(self: QSqlDriver, name: []const u8, source: i32, payload: anytype) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(payload)._is_QVariant;
        qtc.QSqlDriver_Notification(@ptrCast(self.ptr), name_str, @bitCast(source), @ptrCast(payload.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#notification)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn (self: QSqlDriver, name: [*:0]const u8, source: qsqldriver_enums.NotificationSource, payload: QVariant) callconv(.c) void `
    ///
    pub fn OnNotification(self: QSqlDriver, callback: *const fn (QSqlDriver, [*:0]const u8, i32, QVariant) callconv(.c) void) void {
        qtc.QSqlDriver_Connect_Notification(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#setOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` o: bool `
    ///
    pub fn SetOpen(self: QSqlDriver, o: bool) void {
        qtc.QSqlDriver_SetOpen(@ptrCast(self.ptr), o);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#setOpen)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn (self: QSqlDriver, o: bool) callconv(.c) void `
    ///
    pub fn OnSetOpen(self: QSqlDriver, callback: *const fn (QSqlDriver, bool) callconv(.c) void) void {
        qtc.QSqlDriver_OnSetOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetOpen` instead
    ///
    pub const QBaseSetOpen = SuperSetOpen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#setOpen)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` o: bool `
    ///
    pub fn SuperSetOpen(self: QSqlDriver, o: bool) void {
        qtc.QSqlDriver_SuperSetOpen(@ptrCast(self.ptr), o);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#setOpenError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` e: bool `
    ///
    pub fn SetOpenError(self: QSqlDriver, e: bool) void {
        qtc.QSqlDriver_SetOpenError(@ptrCast(self.ptr), e);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#setOpenError)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn (self: QSqlDriver, e: bool) callconv(.c) void `
    ///
    pub fn OnSetOpenError(self: QSqlDriver, callback: *const fn (QSqlDriver, bool) callconv(.c) void) void {
        qtc.QSqlDriver_OnSetOpenError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetOpenError` instead
    ///
    pub const QBaseSetOpenError = SuperSetOpenError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#setOpenError)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` e: bool `
    ///
    pub fn SuperSetOpenError(self: QSqlDriver, e: bool) void {
        qtc.QSqlDriver_SuperSetOpenError(@ptrCast(self.ptr), e);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#setLastError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` e: QSqlError `
    ///
    pub fn SetLastError(self: QSqlDriver, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QSqlError;
        qtc.QSqlDriver_SetLastError(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#setLastError)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn (self: QSqlDriver, e: QSqlError) callconv(.c) void `
    ///
    pub fn OnSetLastError(self: QSqlDriver, callback: *const fn (QSqlDriver, QSqlError) callconv(.c) void) void {
        qtc.QSqlDriver_OnSetLastError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetLastError` instead
    ///
    pub const QBaseSetLastError = SuperSetLastError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#setLastError)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` e: QSqlError `
    ///
    pub fn SuperSetLastError(self: QSqlDriver, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QSqlError;
        qtc.QSqlDriver_SuperSetLastError(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QSqlDriver, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QSqlDriver, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn IsWidgetType(self: QSqlDriver) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn IsWindowType(self: QSqlDriver) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn IsQuickItemType(self: QSqlDriver) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn SignalsBlocked(self: QSqlDriver) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QSqlDriver, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn Thread(self: QSqlDriver) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QSqlDriver, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QSqlDriver, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QSqlDriver, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QSqlDriver, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QSqlDriver, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QSqlDriver, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qsqldriver.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QSqlDriver, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QSqlDriver, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QSqlDriver, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QSqlDriver, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn Disconnect3(self: QSqlDriver) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QSqlDriver, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn DumpObjectTree(self: QSqlDriver) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn DumpObjectInfo(self: QSqlDriver) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QSqlDriver, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QSqlDriver, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QSqlDriver, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn BindingStorage(self: QSqlDriver) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn BindingStorage2(self: QSqlDriver) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn Destroyed(self: QSqlDriver) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn (self: QSqlDriver) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QSqlDriver, callback: *const fn (QSqlDriver) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn Parent(self: QSqlDriver) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QSqlDriver, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn DeleteLater(self: QSqlDriver) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QSqlDriver, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QSqlDriver, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QSqlDriver, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QSqlDriver, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QSqlDriver, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QSqlDriver, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QSqlDriver, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QSqlDriver, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn (self: QSqlDriver, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QSqlDriver, callback: *const fn (QSqlDriver, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QSqlDriver, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSqlDriver_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QSqlDriver, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSqlDriver_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver`
    ///
    /// ` callback: *const fn (self: QSqlDriver, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QSqlDriver, callback: *const fn (QSqlDriver, QEvent) callconv(.c) bool) void {
        qtc.QSqlDriver_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QSqlDriver, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSqlDriver_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QSqlDriver, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSqlDriver_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver`
    ///
    /// ` callback: *const fn (self: QSqlDriver, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QSqlDriver, callback: *const fn (QSqlDriver, QObject, QEvent) callconv(.c) bool) void {
        qtc.QSqlDriver_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QSqlDriver, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QSqlDriver_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QSqlDriver, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QSqlDriver_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver`
    ///
    /// ` callback: *const fn (self: QSqlDriver, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QSqlDriver, callback: *const fn (QSqlDriver, QTimerEvent) callconv(.c) void) void {
        qtc.QSqlDriver_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QSqlDriver, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QSqlDriver_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QSqlDriver, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QSqlDriver_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver`
    ///
    /// ` callback: *const fn (self: QSqlDriver, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QSqlDriver, callback: *const fn (QSqlDriver, QChildEvent) callconv(.c) void) void {
        qtc.QSqlDriver_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QSqlDriver, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QSqlDriver_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QSqlDriver, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QSqlDriver_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver`
    ///
    /// ` callback: *const fn (self: QSqlDriver, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QSqlDriver, callback: *const fn (QSqlDriver, QEvent) callconv(.c) void) void {
        qtc.QSqlDriver_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QSqlDriver, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSqlDriver_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QSqlDriver, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSqlDriver_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver`
    ///
    /// ` callback: *const fn (self: QSqlDriver, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QSqlDriver, callback: *const fn (QSqlDriver, QMetaMethod) callconv(.c) void) void {
        qtc.QSqlDriver_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QSqlDriver, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSqlDriver_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QSqlDriver, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSqlDriver_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver`
    ///
    /// ` callback: *const fn (self: QSqlDriver, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QSqlDriver, callback: *const fn (QSqlDriver, QMetaMethod) callconv(.c) void) void {
        qtc.QSqlDriver_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn Sender(self: QSqlDriver) QObject {
        return .{ .ptr = qtc.QSqlDriver_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn SuperSender(self: QSqlDriver) QObject {
        return .{ .ptr = qtc.QSqlDriver_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QSqlDriver, callback: *const fn () callconv(.c) QObject) void {
        qtc.QSqlDriver_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn SenderSignalIndex(self: QSqlDriver) i32 {
        return qtc.QSqlDriver_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn SuperSenderSignalIndex(self: QSqlDriver) i32 {
        return qtc.QSqlDriver_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QSqlDriver, callback: *const fn () callconv(.c) i32) void {
        qtc.QSqlDriver_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QSqlDriver, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSqlDriver_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QSqlDriver, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSqlDriver_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver`
    ///
    /// ` callback: *const fn (self: QSqlDriver, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QSqlDriver, callback: *const fn (QSqlDriver, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSqlDriver_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QSqlDriver, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSqlDriver_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QSqlDriver, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSqlDriver_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver`
    ///
    /// ` callback: *const fn (self: QSqlDriver, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QSqlDriver, callback: *const fn (QSqlDriver, QMetaMethod) callconv(.c) bool) void {
        qtc.QSqlDriver_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn (self: QSqlDriver, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QSqlDriver, callback: *const fn (QSqlDriver, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#dtor.QSqlDriver)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn Delete(self: QSqlDriver) void {
        qtc.QSqlDriver_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#public-types)
pub const enums = struct {
    pub const DriverFeature = enum(i32) {
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

    pub const StatementType = enum(i32) {
        pub const WhereStatement: i32 = 0;
        pub const SelectStatement: i32 = 1;
        pub const UpdateStatement: i32 = 2;
        pub const InsertStatement: i32 = 3;
        pub const DeleteStatement: i32 = 4;
    };

    pub const IdentifierType = enum(i32) {
        pub const FieldName: i32 = 0;
        pub const TableName: i32 = 1;
    };

    pub const NotificationSource = enum(i32) {
        pub const UnknownSource: i32 = 0;
        pub const SelfSource: i32 = 1;
        pub const OtherSource: i32 = 2;
    };

    pub const DbmsType = enum(i32) {
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
