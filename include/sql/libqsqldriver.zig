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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSqlDriver object in C++ memory
    ///
    pub fn new() QSqlDriver {
        return .{ .ptr = qtc.QSqlDriver_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSqlDriver object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QSqlDriver {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QSqlDriver_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn metaObject(self: QSqlDriver) QMetaObject {
        return .{ .ptr = qtc.QSqlDriver_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

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
    pub fn onMetaObject(self: QSqlDriver, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QSqlDriver_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn superMetaObject(self: QSqlDriver) QMetaObject {
        return .{ .ptr = qtc.QSqlDriver_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QSqlDriver, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSqlDriver_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn (self: QSqlDriver, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QSqlDriver, callback: *const fn (QSqlDriver, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QSqlDriver_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QSqlDriver, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSqlDriver_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QSqlDriver, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSqlDriver_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn (self: QSqlDriver, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QSqlDriver, callback: *const fn (QSqlDriver, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QSqlDriver_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QSqlDriver, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSqlDriver_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSqlDriver.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isOpen` instead
    ///
    pub const IsOpen = isOpen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#isOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn isOpen(self: QSqlDriver) bool {
        return qtc.QSqlDriver_IsOpen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsOpen` instead
    ///
    pub const OnIsOpen = onIsOpen;

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
    pub fn onIsOpen(self: QSqlDriver, callback: *const fn () callconv(.c) bool) void {
        qtc.QSqlDriver_OnIsOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsOpen` instead
    ///
    pub const SuperIsOpen = superIsOpen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#isOpen)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn superIsOpen(self: QSqlDriver) bool {
        return qtc.QSqlDriver_SuperIsOpen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isOpenError` instead
    ///
    pub const IsOpenError = isOpenError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#isOpenError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn isOpenError(self: QSqlDriver) bool {
        return qtc.QSqlDriver_IsOpenError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `beginTransaction` instead
    ///
    pub const BeginTransaction = beginTransaction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#beginTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn beginTransaction(self: QSqlDriver) bool {
        return qtc.QSqlDriver_BeginTransaction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBeginTransaction` instead
    ///
    pub const OnBeginTransaction = onBeginTransaction;

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
    pub fn onBeginTransaction(self: QSqlDriver, callback: *const fn () callconv(.c) bool) void {
        qtc.QSqlDriver_OnBeginTransaction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBeginTransaction` instead
    ///
    pub const SuperBeginTransaction = superBeginTransaction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#beginTransaction)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn superBeginTransaction(self: QSqlDriver) bool {
        return qtc.QSqlDriver_SuperBeginTransaction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `commitTransaction` instead
    ///
    pub const CommitTransaction = commitTransaction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#commitTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn commitTransaction(self: QSqlDriver) bool {
        return qtc.QSqlDriver_CommitTransaction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCommitTransaction` instead
    ///
    pub const OnCommitTransaction = onCommitTransaction;

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
    pub fn onCommitTransaction(self: QSqlDriver, callback: *const fn () callconv(.c) bool) void {
        qtc.QSqlDriver_OnCommitTransaction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCommitTransaction` instead
    ///
    pub const SuperCommitTransaction = superCommitTransaction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#commitTransaction)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn superCommitTransaction(self: QSqlDriver) bool {
        return qtc.QSqlDriver_SuperCommitTransaction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rollbackTransaction` instead
    ///
    pub const RollbackTransaction = rollbackTransaction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#rollbackTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn rollbackTransaction(self: QSqlDriver) bool {
        return qtc.QSqlDriver_RollbackTransaction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRollbackTransaction` instead
    ///
    pub const OnRollbackTransaction = onRollbackTransaction;

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
    pub fn onRollbackTransaction(self: QSqlDriver, callback: *const fn () callconv(.c) bool) void {
        qtc.QSqlDriver_OnRollbackTransaction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRollbackTransaction` instead
    ///
    pub const SuperRollbackTransaction = superRollbackTransaction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#rollbackTransaction)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn superRollbackTransaction(self: QSqlDriver) bool {
        return qtc.QSqlDriver_SuperRollbackTransaction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tables` instead
    ///
    pub const Tables = tables;

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
    pub fn tables(self: QSqlDriver, allocator: std.mem.Allocator, tableType: i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlDriver_Tables(@ptrCast(self.ptr), @bitCast(tableType));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QSqlDriver.tables: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSqlDriver.tables: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onTables` instead
    ///
    pub const OnTables = onTables;

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
    pub fn onTables(self: QSqlDriver, callback: *const fn (QSqlDriver, i32) callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QSqlDriver_OnTables(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superTables` instead
    ///
    pub const SuperTables = superTables;

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
    pub fn superTables(self: QSqlDriver, allocator: std.mem.Allocator, tableType: i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlDriver_SuperTables(@ptrCast(self.ptr), @bitCast(tableType));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QSqlDriver.tables: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSqlDriver.tables: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `primaryIndex` instead
    ///
    pub const PrimaryIndex = primaryIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#primaryIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` tableName: []const u8 `
    ///
    pub fn primaryIndex(self: QSqlDriver, tableName: []const u8) QSqlIndex {
        const tableName_str = qtc.libqt_string{
            .len = tableName.len,
            .data = tableName.ptr,
        };
        return .{ .ptr = qtc.QSqlDriver_PrimaryIndex(@ptrCast(self.ptr), tableName_str) };
    }

    /// ### DEPRECATED: Use `onPrimaryIndex` instead
    ///
    pub const OnPrimaryIndex = onPrimaryIndex;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onPrimaryIndex(self: QSqlDriver, callback: *const fn (QSqlDriver, [*:0]const u8) callconv(.c) QSqlIndex) void {
        qtc.QSqlDriver_OnPrimaryIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPrimaryIndex` instead
    ///
    pub const SuperPrimaryIndex = superPrimaryIndex;

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
    pub fn superPrimaryIndex(self: QSqlDriver, tableName: []const u8) QSqlIndex {
        const tableName_str = qtc.libqt_string{
            .len = tableName.len,
            .data = tableName.ptr,
        };
        return .{ .ptr = qtc.QSqlDriver_SuperPrimaryIndex(@ptrCast(self.ptr), tableName_str) };
    }

    /// ### DEPRECATED: Use `record` instead
    ///
    pub const Record = record;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#record)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` tableName: []const u8 `
    ///
    pub fn record(self: QSqlDriver, tableName: []const u8) QSqlRecord {
        const tableName_str = qtc.libqt_string{
            .len = tableName.len,
            .data = tableName.ptr,
        };
        return .{ .ptr = qtc.QSqlDriver_Record(@ptrCast(self.ptr), tableName_str) };
    }

    /// ### DEPRECATED: Use `onRecord` instead
    ///
    pub const OnRecord = onRecord;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onRecord(self: QSqlDriver, callback: *const fn (QSqlDriver, [*:0]const u8) callconv(.c) QSqlRecord) void {
        qtc.QSqlDriver_OnRecord(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRecord` instead
    ///
    pub const SuperRecord = superRecord;

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
    pub fn superRecord(self: QSqlDriver, tableName: []const u8) QSqlRecord {
        const tableName_str = qtc.libqt_string{
            .len = tableName.len,
            .data = tableName.ptr,
        };
        return .{ .ptr = qtc.QSqlDriver_SuperRecord(@ptrCast(self.ptr), tableName_str) };
    }

    /// ### DEPRECATED: Use `formatValue` instead
    ///
    pub const FormatValue = formatValue;

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
    pub fn formatValue(self: QSqlDriver, allocator: std.mem.Allocator, field: anytype, trimStrings: bool) []const u8 {
        comptime _ = @TypeOf(field)._is_QSqlField;
        var _str = qtc.QSqlDriver_FormatValue(@ptrCast(self.ptr), @ptrCast(field.ptr), trimStrings);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSqlDriver.formatValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onFormatValue` instead
    ///
    pub const OnFormatValue = onFormatValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#formatValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn (self: QSqlDriver, field: QSqlField, trimStrings: bool) callconv(.c) [*:0]const u8 `
    ///
    pub fn onFormatValue(self: QSqlDriver, callback: *const fn (QSqlDriver, QSqlField, bool) callconv(.c) [*:0]const u8) void {
        qtc.QSqlDriver_OnFormatValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFormatValue` instead
    ///
    pub const SuperFormatValue = superFormatValue;

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
    pub fn superFormatValue(self: QSqlDriver, allocator: std.mem.Allocator, field: anytype, trimStrings: bool) []const u8 {
        comptime _ = @TypeOf(field)._is_QSqlField;
        var _str = qtc.QSqlDriver_SuperFormatValue(@ptrCast(self.ptr), @ptrCast(field.ptr), trimStrings);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSqlDriver.formatValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `escapeIdentifier` instead
    ///
    pub const EscapeIdentifier = escapeIdentifier;

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
    pub fn escapeIdentifier(self: QSqlDriver, allocator: std.mem.Allocator, identifier: []const u8, typeVal: i32) []const u8 {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        var _str = qtc.QSqlDriver_EscapeIdentifier(@ptrCast(self.ptr), identifier_str, @bitCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSqlDriver.escapeIdentifier: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onEscapeIdentifier` instead
    ///
    pub const OnEscapeIdentifier = onEscapeIdentifier;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#escapeIdentifier)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn (self: QSqlDriver, identifier: [*:0]const u8, typeVal: qsqldriver_enums.IdentifierType) callconv(.c) [*:0]const u8 `
    ///
    pub fn onEscapeIdentifier(self: QSqlDriver, callback: *const fn (QSqlDriver, [*:0]const u8, i32) callconv(.c) [*:0]const u8) void {
        qtc.QSqlDriver_OnEscapeIdentifier(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEscapeIdentifier` instead
    ///
    pub const SuperEscapeIdentifier = superEscapeIdentifier;

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
    pub fn superEscapeIdentifier(self: QSqlDriver, allocator: std.mem.Allocator, identifier: []const u8, typeVal: i32) []const u8 {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        var _str = qtc.QSqlDriver_SuperEscapeIdentifier(@ptrCast(self.ptr), identifier_str, @bitCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSqlDriver.escapeIdentifier: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `sqlStatement` instead
    ///
    pub const SqlStatement = sqlStatement;

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
    pub fn sqlStatement(self: QSqlDriver, allocator: std.mem.Allocator, typeVal: i32, tableName: []const u8, rec: anytype, preparedStatement: bool) []const u8 {
        const tableName_str = qtc.libqt_string{
            .len = tableName.len,
            .data = tableName.ptr,
        };
        comptime _ = @TypeOf(rec)._is_QSqlRecord;
        var _str = qtc.QSqlDriver_SqlStatement(@ptrCast(self.ptr), @bitCast(typeVal), tableName_str, @ptrCast(rec.ptr), preparedStatement);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSqlDriver.sqlStatement: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onSqlStatement` instead
    ///
    pub const OnSqlStatement = onSqlStatement;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#sqlStatement)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn (self: QSqlDriver, typeVal: qsqldriver_enums.StatementType, tableName: [*:0]const u8, rec: QSqlRecord, preparedStatement: bool) callconv(.c) [*:0]const u8 `
    ///
    pub fn onSqlStatement(self: QSqlDriver, callback: *const fn (QSqlDriver, i32, [*:0]const u8, QSqlRecord, bool) callconv(.c) [*:0]const u8) void {
        qtc.QSqlDriver_OnSqlStatement(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSqlStatement` instead
    ///
    pub const SuperSqlStatement = superSqlStatement;

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
    pub fn superSqlStatement(self: QSqlDriver, allocator: std.mem.Allocator, typeVal: i32, tableName: []const u8, rec: anytype, preparedStatement: bool) []const u8 {
        const tableName_str = qtc.libqt_string{
            .len = tableName.len,
            .data = tableName.ptr,
        };
        comptime _ = @TypeOf(rec)._is_QSqlRecord;
        var _str = qtc.QSqlDriver_SuperSqlStatement(@ptrCast(self.ptr), @bitCast(typeVal), tableName_str, @ptrCast(rec.ptr), preparedStatement);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSqlDriver.sqlStatement: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `lastError` instead
    ///
    pub const LastError = lastError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#lastError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn lastError(self: QSqlDriver) QSqlError {
        return .{ .ptr = qtc.QSqlDriver_LastError(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `handle` instead
    ///
    pub const Handle = handle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#handle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn handle(self: QSqlDriver) QVariant {
        return .{ .ptr = qtc.QSqlDriver_Handle(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onHandle` instead
    ///
    pub const OnHandle = onHandle;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onHandle(self: QSqlDriver, callback: *const fn () callconv(.c) QVariant) void {
        qtc.QSqlDriver_OnHandle(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHandle` instead
    ///
    pub const SuperHandle = superHandle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#handle)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn superHandle(self: QSqlDriver) QVariant {
        return .{ .ptr = qtc.QSqlDriver_SuperHandle(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `hasFeature` instead
    ///
    pub const HasFeature = hasFeature;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#hasFeature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` f: qsqldriver_enums.DriverFeature `
    ///
    pub fn hasFeature(self: QSqlDriver, f: i32) bool {
        return qtc.QSqlDriver_HasFeature(@ptrCast(self.ptr), @bitCast(f));
    }

    /// ### DEPRECATED: Use `onHasFeature` instead
    ///
    pub const OnHasFeature = onHasFeature;

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
    pub fn onHasFeature(self: QSqlDriver, callback: *const fn (QSqlDriver, i32) callconv(.c) bool) void {
        qtc.QSqlDriver_OnHasFeature(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHasFeature` instead
    ///
    pub const SuperHasFeature = superHasFeature;

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
    pub fn superHasFeature(self: QSqlDriver, f: i32) bool {
        return qtc.QSqlDriver_SuperHasFeature(@ptrCast(self.ptr), @bitCast(f));
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn close(self: QSqlDriver) void {
        qtc.QSqlDriver_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClose` instead
    ///
    pub const OnClose = onClose;

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
    pub fn onClose(self: QSqlDriver, callback: *const fn () callconv(.c) void) void {
        qtc.QSqlDriver_OnClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClose` instead
    ///
    pub const SuperClose = superClose;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#close)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn superClose(self: QSqlDriver) void {
        qtc.QSqlDriver_SuperClose(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `createResult` instead
    ///
    pub const CreateResult = createResult;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#createResult)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn createResult(self: QSqlDriver) QSqlResult {
        return .{ .ptr = qtc.QSqlDriver_CreateResult(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreateResult` instead
    ///
    pub const OnCreateResult = onCreateResult;

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
    pub fn onCreateResult(self: QSqlDriver, callback: *const fn () callconv(.c) QSqlResult) void {
        qtc.QSqlDriver_OnCreateResult(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateResult` instead
    ///
    pub const SuperCreateResult = superCreateResult;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#createResult)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn superCreateResult(self: QSqlDriver) QSqlResult {
        return .{ .ptr = qtc.QSqlDriver_SuperCreateResult(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `open` instead
    ///
    pub const Open = open;

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
    pub fn open(self: QSqlDriver, db: []const u8, user: []const u8, password: []const u8, host: []const u8, port: i32, connOpts: []const u8) bool {
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

    /// ### DEPRECATED: Use `onOpen` instead
    ///
    pub const OnOpen = onOpen;

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
    pub fn onOpen(self: QSqlDriver, callback: *const fn (QSqlDriver, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8, i32, [*:0]const u8) callconv(.c) bool) void {
        qtc.QSqlDriver_OnOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOpen` instead
    ///
    pub const SuperOpen = superOpen;

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
    pub fn superOpen(self: QSqlDriver, db: []const u8, user: []const u8, password: []const u8, host: []const u8, port: i32, connOpts: []const u8) bool {
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

    /// ### DEPRECATED: Use `subscribeToNotification` instead
    ///
    pub const SubscribeToNotification = subscribeToNotification;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#subscribeToNotification)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` name: []const u8 `
    ///
    pub fn subscribeToNotification(self: QSqlDriver, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlDriver_SubscribeToNotification(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `onSubscribeToNotification` instead
    ///
    pub const OnSubscribeToNotification = onSubscribeToNotification;

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
    pub fn onSubscribeToNotification(self: QSqlDriver, callback: *const fn (QSqlDriver, [*:0]const u8) callconv(.c) bool) void {
        qtc.QSqlDriver_OnSubscribeToNotification(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSubscribeToNotification` instead
    ///
    pub const SuperSubscribeToNotification = superSubscribeToNotification;

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
    pub fn superSubscribeToNotification(self: QSqlDriver, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlDriver_SuperSubscribeToNotification(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `unsubscribeFromNotification` instead
    ///
    pub const UnsubscribeFromNotification = unsubscribeFromNotification;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#unsubscribeFromNotification)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` name: []const u8 `
    ///
    pub fn unsubscribeFromNotification(self: QSqlDriver, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlDriver_UnsubscribeFromNotification(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `onUnsubscribeFromNotification` instead
    ///
    pub const OnUnsubscribeFromNotification = onUnsubscribeFromNotification;

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
    pub fn onUnsubscribeFromNotification(self: QSqlDriver, callback: *const fn (QSqlDriver, [*:0]const u8) callconv(.c) bool) void {
        qtc.QSqlDriver_OnUnsubscribeFromNotification(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUnsubscribeFromNotification` instead
    ///
    pub const SuperUnsubscribeFromNotification = superUnsubscribeFromNotification;

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
    pub fn superUnsubscribeFromNotification(self: QSqlDriver, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlDriver_SuperUnsubscribeFromNotification(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `subscribedToNotifications` instead
    ///
    pub const SubscribedToNotifications = subscribedToNotifications;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#subscribedToNotifications)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn subscribedToNotifications(self: QSqlDriver, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlDriver_SubscribedToNotifications(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QSqlDriver.subscribedToNotifications: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSqlDriver.subscribedToNotifications: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onSubscribedToNotifications` instead
    ///
    pub const OnSubscribedToNotifications = onSubscribedToNotifications;

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
    pub fn onSubscribedToNotifications(self: QSqlDriver, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QSqlDriver_OnSubscribedToNotifications(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSubscribedToNotifications` instead
    ///
    pub const SuperSubscribedToNotifications = superSubscribedToNotifications;

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
    pub fn superSubscribedToNotifications(self: QSqlDriver, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlDriver_SuperSubscribedToNotifications(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QSqlDriver.subscribedToNotifications: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSqlDriver.subscribedToNotifications: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `isIdentifierEscaped` instead
    ///
    pub const IsIdentifierEscaped = isIdentifierEscaped;

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
    pub fn isIdentifierEscaped(self: QSqlDriver, identifier: []const u8, typeVal: i32) bool {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        return qtc.QSqlDriver_IsIdentifierEscaped(@ptrCast(self.ptr), identifier_str, @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `onIsIdentifierEscaped` instead
    ///
    pub const OnIsIdentifierEscaped = onIsIdentifierEscaped;

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
    pub fn onIsIdentifierEscaped(self: QSqlDriver, callback: *const fn (QSqlDriver, [*:0]const u8, i32) callconv(.c) bool) void {
        qtc.QSqlDriver_OnIsIdentifierEscaped(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsIdentifierEscaped` instead
    ///
    pub const SuperIsIdentifierEscaped = superIsIdentifierEscaped;

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
    pub fn superIsIdentifierEscaped(self: QSqlDriver, identifier: []const u8, typeVal: i32) bool {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        return qtc.QSqlDriver_SuperIsIdentifierEscaped(@ptrCast(self.ptr), identifier_str, @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `stripDelimiters` instead
    ///
    pub const StripDelimiters = stripDelimiters;

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
    pub fn stripDelimiters(self: QSqlDriver, allocator: std.mem.Allocator, identifier: []const u8, typeVal: i32) []const u8 {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        var _str = qtc.QSqlDriver_StripDelimiters(@ptrCast(self.ptr), identifier_str, @bitCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSqlDriver.stripDelimiters: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onStripDelimiters` instead
    ///
    pub const OnStripDelimiters = onStripDelimiters;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#stripDelimiters)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn (self: QSqlDriver, identifier: [*:0]const u8, typeVal: qsqldriver_enums.IdentifierType) callconv(.c) [*:0]const u8 `
    ///
    pub fn onStripDelimiters(self: QSqlDriver, callback: *const fn (QSqlDriver, [*:0]const u8, i32) callconv(.c) [*:0]const u8) void {
        qtc.QSqlDriver_OnStripDelimiters(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStripDelimiters` instead
    ///
    pub const SuperStripDelimiters = superStripDelimiters;

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
    pub fn superStripDelimiters(self: QSqlDriver, allocator: std.mem.Allocator, identifier: []const u8, typeVal: i32) []const u8 {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        var _str = qtc.QSqlDriver_SuperStripDelimiters(@ptrCast(self.ptr), identifier_str, @bitCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSqlDriver.stripDelimiters: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setNumericalPrecisionPolicy` instead
    ///
    pub const SetNumericalPrecisionPolicy = setNumericalPrecisionPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#setNumericalPrecisionPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` precisionPolicy: qtsqlglobal_enums.NumericalPrecisionPolicy `
    ///
    pub fn setNumericalPrecisionPolicy(self: QSqlDriver, precisionPolicy: i32) void {
        qtc.QSqlDriver_SetNumericalPrecisionPolicy(@ptrCast(self.ptr), @bitCast(precisionPolicy));
    }

    /// ### DEPRECATED: Use `numericalPrecisionPolicy` instead
    ///
    pub const NumericalPrecisionPolicy = numericalPrecisionPolicy;

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
    pub fn numericalPrecisionPolicy(self: QSqlDriver) i32 {
        return qtc.QSqlDriver_NumericalPrecisionPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dbmsType` instead
    ///
    pub const DbmsType = dbmsType;

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
    pub fn dbmsType(self: QSqlDriver) i32 {
        return qtc.QSqlDriver_DbmsType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maximumIdentifierLength` instead
    ///
    pub const MaximumIdentifierLength = maximumIdentifierLength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#maximumIdentifierLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` typeVal: qsqldriver_enums.IdentifierType `
    ///
    pub fn maximumIdentifierLength(self: QSqlDriver, typeVal: i32) i32 {
        return qtc.QSqlDriver_MaximumIdentifierLength(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `onMaximumIdentifierLength` instead
    ///
    pub const OnMaximumIdentifierLength = onMaximumIdentifierLength;

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
    pub fn onMaximumIdentifierLength(self: QSqlDriver, callback: *const fn (QSqlDriver, i32) callconv(.c) i32) void {
        qtc.QSqlDriver_OnMaximumIdentifierLength(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMaximumIdentifierLength` instead
    ///
    pub const SuperMaximumIdentifierLength = superMaximumIdentifierLength;

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
    pub fn superMaximumIdentifierLength(self: QSqlDriver, typeVal: i32) i32 {
        return qtc.QSqlDriver_SuperMaximumIdentifierLength(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `cancelQuery` instead
    ///
    pub const CancelQuery = cancelQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#cancelQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn cancelQuery(self: QSqlDriver) bool {
        return qtc.QSqlDriver_CancelQuery(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCancelQuery` instead
    ///
    pub const OnCancelQuery = onCancelQuery;

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
    pub fn onCancelQuery(self: QSqlDriver, callback: *const fn () callconv(.c) bool) void {
        qtc.QSqlDriver_OnCancelQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCancelQuery` instead
    ///
    pub const SuperCancelQuery = superCancelQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#cancelQuery)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn superCancelQuery(self: QSqlDriver) bool {
        return qtc.QSqlDriver_SuperCancelQuery(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `notification` instead
    ///
    pub const Notification = notification;

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
    pub fn notification(self: QSqlDriver, name: []const u8, source: i32, payload: anytype) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(payload)._is_QVariant;
        qtc.QSqlDriver_Notification(@ptrCast(self.ptr), name_str, @bitCast(source), @ptrCast(payload.ptr));
    }

    /// ### DEPRECATED: Use `onNotification` instead
    ///
    pub const OnNotification = onNotification;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#notification)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` callback: *const fn (self: QSqlDriver, name: [*:0]const u8, source: qsqldriver_enums.NotificationSource, payload: QVariant) callconv(.c) void `
    ///
    pub fn onNotification(self: QSqlDriver, callback: *const fn (QSqlDriver, [*:0]const u8, i32, QVariant) callconv(.c) void) void {
        qtc.QSqlDriver_Connect_Notification(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setOpen` instead
    ///
    pub const SetOpen = setOpen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#setOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` o: bool `
    ///
    pub fn setOpen(self: QSqlDriver, o: bool) void {
        qtc.QSqlDriver_SetOpen(@ptrCast(self.ptr), o);
    }

    /// ### DEPRECATED: Use `onSetOpen` instead
    ///
    pub const OnSetOpen = onSetOpen;

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
    pub fn onSetOpen(self: QSqlDriver, callback: *const fn (QSqlDriver, bool) callconv(.c) void) void {
        qtc.QSqlDriver_OnSetOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetOpen` instead
    ///
    pub const SuperSetOpen = superSetOpen;

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
    pub fn superSetOpen(self: QSqlDriver, o: bool) void {
        qtc.QSqlDriver_SuperSetOpen(@ptrCast(self.ptr), o);
    }

    /// ### DEPRECATED: Use `setOpenError` instead
    ///
    pub const SetOpenError = setOpenError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#setOpenError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` e: bool `
    ///
    pub fn setOpenError(self: QSqlDriver, e: bool) void {
        qtc.QSqlDriver_SetOpenError(@ptrCast(self.ptr), e);
    }

    /// ### DEPRECATED: Use `onSetOpenError` instead
    ///
    pub const OnSetOpenError = onSetOpenError;

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
    pub fn onSetOpenError(self: QSqlDriver, callback: *const fn (QSqlDriver, bool) callconv(.c) void) void {
        qtc.QSqlDriver_OnSetOpenError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetOpenError` instead
    ///
    pub const SuperSetOpenError = superSetOpenError;

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
    pub fn superSetOpenError(self: QSqlDriver, e: bool) void {
        qtc.QSqlDriver_SuperSetOpenError(@ptrCast(self.ptr), e);
    }

    /// ### DEPRECATED: Use `setLastError` instead
    ///
    pub const SetLastError = setLastError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#setLastError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` e: QSqlError `
    ///
    pub fn setLastError(self: QSqlDriver, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QSqlError;
        qtc.QSqlDriver_SetLastError(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onSetLastError` instead
    ///
    pub const OnSetLastError = onSetLastError;

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
    pub fn onSetLastError(self: QSqlDriver, callback: *const fn (QSqlDriver, QSqlError) callconv(.c) void) void {
        qtc.QSqlDriver_OnSetLastError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetLastError` instead
    ///
    pub const SuperSetLastError = superSetLastError;

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
    pub fn superSetLastError(self: QSqlDriver, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QSqlError;
        qtc.QSqlDriver_SuperSetLastError(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

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
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSqlDriver.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

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
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSqlDriver.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

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
    pub fn objectName(self: QSqlDriver, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSqlDriver.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

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
    pub fn setObjectName(self: QSqlDriver, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn isWidgetType(self: QSqlDriver) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn isWindowType(self: QSqlDriver) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn isQuickItemType(self: QSqlDriver) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn signalsBlocked(self: QSqlDriver) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

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
    pub fn blockSignals(self: QSqlDriver, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn thread(self: QSqlDriver) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QSqlDriver, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

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
    pub fn startTimer(self: QSqlDriver, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

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
    pub fn startTimer2(self: QSqlDriver, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

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
    pub fn killTimer(self: QSqlDriver, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

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
    pub fn killTimer2(self: QSqlDriver, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

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
    pub fn children(self: QSqlDriver, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QSqlDriver.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QSqlDriver, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

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
    pub fn installEventFilter(self: QSqlDriver, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

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
    pub fn removeEventFilter(self: QSqlDriver, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QSqlDriver, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn disconnect3(self: QSqlDriver) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

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
    pub fn disconnect4(self: QSqlDriver, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn dumpObjectTree(self: QSqlDriver) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn dumpObjectInfo(self: QSqlDriver) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

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
    pub fn setProperty(self: QSqlDriver, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

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
    pub fn property(self: QSqlDriver, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

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
    pub fn dynamicPropertyNames(self: QSqlDriver, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QSqlDriver.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSqlDriver.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn bindingStorage(self: QSqlDriver) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn bindingStorage2(self: QSqlDriver) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn destroyed(self: QSqlDriver) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

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
    pub fn onDestroyed(self: QSqlDriver, callback: *const fn (QSqlDriver) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn parent(self: QSqlDriver) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

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
    pub fn inherits(self: QSqlDriver, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn deleteLater(self: QSqlDriver) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

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
    pub fn startTimer22(self: QSqlDriver, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

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
    pub fn startTimer23(self: QSqlDriver, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlDriver `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QSqlDriver, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

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
    pub fn disconnect1(self: QSqlDriver, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

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
    pub fn disconnect22(self: QSqlDriver, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

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
    pub fn disconnect32(self: QSqlDriver, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

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
    pub fn disconnect23(self: QSqlDriver, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

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
    pub fn destroyed1(self: QSqlDriver, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

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
    pub fn onDestroyed1(self: QSqlDriver, callback: *const fn (QSqlDriver, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

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
    /// ` _event: QEvent `
    ///
    pub fn event(self: QSqlDriver, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSqlDriver_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QSqlDriver, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSqlDriver_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: QSqlDriver, callback: *const fn (QSqlDriver, QEvent) callconv(.c) bool) void {
        qtc.QSqlDriver_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QSqlDriver, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSqlDriver_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QSqlDriver, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSqlDriver_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: QSqlDriver, callback: *const fn (QSqlDriver, QObject, QEvent) callconv(.c) bool) void {
        qtc.QSqlDriver_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QSqlDriver, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QSqlDriver_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QSqlDriver, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QSqlDriver_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

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
    pub fn onTimerEvent(self: QSqlDriver, callback: *const fn (QSqlDriver, QTimerEvent) callconv(.c) void) void {
        qtc.QSqlDriver_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QSqlDriver, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QSqlDriver_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QSqlDriver, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QSqlDriver_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

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
    pub fn onChildEvent(self: QSqlDriver, callback: *const fn (QSqlDriver, QChildEvent) callconv(.c) void) void {
        qtc.QSqlDriver_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QSqlDriver, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QSqlDriver_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QSqlDriver, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QSqlDriver_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

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
    pub fn onCustomEvent(self: QSqlDriver, callback: *const fn (QSqlDriver, QEvent) callconv(.c) void) void {
        qtc.QSqlDriver_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

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
    pub fn connectNotify(self: QSqlDriver, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSqlDriver_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

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
    pub fn superConnectNotify(self: QSqlDriver, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSqlDriver_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

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
    pub fn onConnectNotify(self: QSqlDriver, callback: *const fn (QSqlDriver, QMetaMethod) callconv(.c) void) void {
        qtc.QSqlDriver_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

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
    pub fn disconnectNotify(self: QSqlDriver, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSqlDriver_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

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
    pub fn superDisconnectNotify(self: QSqlDriver, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSqlDriver_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

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
    pub fn onDisconnectNotify(self: QSqlDriver, callback: *const fn (QSqlDriver, QMetaMethod) callconv(.c) void) void {
        qtc.QSqlDriver_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

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
    pub fn sender(self: QSqlDriver) QObject {
        return .{ .ptr = qtc.QSqlDriver_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

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
    pub fn superSender(self: QSqlDriver) QObject {
        return .{ .ptr = qtc.QSqlDriver_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

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
    pub fn onSender(self: QSqlDriver, callback: *const fn () callconv(.c) QObject) void {
        qtc.QSqlDriver_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

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
    pub fn senderSignalIndex(self: QSqlDriver) i32 {
        return qtc.QSqlDriver_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

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
    pub fn superSenderSignalIndex(self: QSqlDriver) i32 {
        return qtc.QSqlDriver_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

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
    pub fn onSenderSignalIndex(self: QSqlDriver, callback: *const fn () callconv(.c) i32) void {
        qtc.QSqlDriver_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

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
    pub fn receivers(self: QSqlDriver, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSqlDriver_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

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
    pub fn superReceivers(self: QSqlDriver, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSqlDriver_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

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
    pub fn onReceivers(self: QSqlDriver, callback: *const fn (QSqlDriver, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSqlDriver_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

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
    pub fn isSignalConnected(self: QSqlDriver, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSqlDriver_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

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
    pub fn superIsSignalConnected(self: QSqlDriver, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSqlDriver_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

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
    pub fn onIsSignalConnected(self: QSqlDriver, callback: *const fn (QSqlDriver, QMetaMethod) callconv(.c) bool) void {
        qtc.QSqlDriver_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

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
    pub fn onObjectNameChanged(self: QSqlDriver, callback: *const fn (QSqlDriver, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#dtor.QSqlDriver)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSqlDriver `
    ///
    pub fn delete(self: QSqlDriver) void {
        qtc.QSqlDriver_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#public-types)
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
