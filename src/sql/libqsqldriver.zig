const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qsqldriver_enums = enums;
const qtsqlglobal_enums = @import("libqtsqlglobal.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html)
pub const qsqldriver = struct {
    /// New constructs a new QSqlDriver object.
    ///
    pub fn New() QtC.QSqlDriver {
        return qtc.QSqlDriver_new();
    }

    /// New2 constructs a new QSqlDriver object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New2(parent: ?*anyopaque) QtC.QSqlDriver {
        return qtc.QSqlDriver_new2(@ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QSqlDriver_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QSqlDriver_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QSqlDriver_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSqlDriver_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` callback: *const fn (self: QtC.QSqlDriver, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QSqlDriver_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSqlDriver_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSqlDriver_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` callback: *const fn (self: QtC.QSqlDriver, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QSqlDriver_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSqlDriver_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn IsOpen(self: ?*anyopaque) bool {
        return qtc.QSqlDriver_IsOpen(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#isOpen)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsOpen(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QSqlDriver_OnIsOpen(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn SuperIsOpen(self: ?*anyopaque) bool {
        return qtc.QSqlDriver_SuperIsOpen(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#isOpenError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn IsOpenError(self: ?*anyopaque) bool {
        return qtc.QSqlDriver_IsOpenError(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#beginTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn BeginTransaction(self: ?*anyopaque) bool {
        return qtc.QSqlDriver_BeginTransaction(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#beginTransaction)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnBeginTransaction(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QSqlDriver_OnBeginTransaction(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn SuperBeginTransaction(self: ?*anyopaque) bool {
        return qtc.QSqlDriver_SuperBeginTransaction(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#commitTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn CommitTransaction(self: ?*anyopaque) bool {
        return qtc.QSqlDriver_CommitTransaction(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#commitTransaction)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnCommitTransaction(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QSqlDriver_OnCommitTransaction(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn SuperCommitTransaction(self: ?*anyopaque) bool {
        return qtc.QSqlDriver_SuperCommitTransaction(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#rollbackTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn RollbackTransaction(self: ?*anyopaque) bool {
        return qtc.QSqlDriver_RollbackTransaction(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#rollbackTransaction)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnRollbackTransaction(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QSqlDriver_OnRollbackTransaction(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn SuperRollbackTransaction(self: ?*anyopaque) bool {
        return qtc.QSqlDriver_SuperRollbackTransaction(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#tables)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` tableType: qtsqlglobal_enums.TableType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tables(self: ?*anyopaque, tableType: i32, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlDriver_Tables(@ptrCast(self), @bitCast(tableType));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#tables)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` callback: *const fn (self: QtC.QSqlDriver, tableType: qtsqlglobal_enums.TableType) callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn OnTables(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QSqlDriver_OnTables(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` tableType: qtsqlglobal_enums.TableType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperTables(self: ?*anyopaque, tableType: i32, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlDriver_SuperTables(@ptrCast(self), @bitCast(tableType));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#primaryIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` tableName: []const u8 `
    ///
    pub fn PrimaryIndex(self: ?*anyopaque, tableName: []const u8) QtC.QSqlIndex {
        const tableName_str = qtc.libqt_string{
            .len = tableName.len,
            .data = tableName.ptr,
        };
        return qtc.QSqlDriver_PrimaryIndex(@ptrCast(self), tableName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#primaryIndex)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` callback: *const fn (self: QtC.QSqlDriver, tableName: [*:0]const u8) callconv(.c) QtC.QSqlIndex `
    ///
    pub fn OnPrimaryIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.QSqlIndex) void {
        qtc.QSqlDriver_OnPrimaryIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` tableName: []const u8 `
    ///
    pub fn SuperPrimaryIndex(self: ?*anyopaque, tableName: []const u8) QtC.QSqlIndex {
        const tableName_str = qtc.libqt_string{
            .len = tableName.len,
            .data = tableName.ptr,
        };
        return qtc.QSqlDriver_SuperPrimaryIndex(@ptrCast(self), tableName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#record)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` tableName: []const u8 `
    ///
    pub fn Record(self: ?*anyopaque, tableName: []const u8) QtC.QSqlRecord {
        const tableName_str = qtc.libqt_string{
            .len = tableName.len,
            .data = tableName.ptr,
        };
        return qtc.QSqlDriver_Record(@ptrCast(self), tableName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#record)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` callback: *const fn (self: QtC.QSqlDriver, tableName: [*:0]const u8) callconv(.c) QtC.QSqlRecord `
    ///
    pub fn OnRecord(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.QSqlRecord) void {
        qtc.QSqlDriver_OnRecord(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` tableName: []const u8 `
    ///
    pub fn SuperRecord(self: ?*anyopaque, tableName: []const u8) QtC.QSqlRecord {
        const tableName_str = qtc.libqt_string{
            .len = tableName.len,
            .data = tableName.ptr,
        };
        return qtc.QSqlDriver_SuperRecord(@ptrCast(self), tableName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#formatValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` field: QtC.QSqlField `
    ///
    /// ` trimStrings: bool `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FormatValue(self: ?*anyopaque, field: ?*anyopaque, trimStrings: bool, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlDriver_FormatValue(@ptrCast(self), @ptrCast(field), trimStrings);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.FormatValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#formatValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` callback: *const fn (self: QtC.QSqlDriver, field: QtC.QSqlField, trimStrings: bool) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnFormatValue(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, bool) callconv(.c) [*:0]const u8) void {
        qtc.QSqlDriver_OnFormatValue(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` field: QtC.QSqlField `
    ///
    /// ` trimStrings: bool `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperFormatValue(self: ?*anyopaque, field: ?*anyopaque, trimStrings: bool, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlDriver_SuperFormatValue(@ptrCast(self), @ptrCast(field), trimStrings);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.FormatValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#escapeIdentifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` identifier: []const u8 `
    ///
    /// ` typeVal: qsqldriver_enums.IdentifierType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EscapeIdentifier(self: ?*anyopaque, identifier: []const u8, typeVal: i32, allocator: std.mem.Allocator) []const u8 {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        var _str = qtc.QSqlDriver_EscapeIdentifier(@ptrCast(self), identifier_str, @bitCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.EscapeIdentifier: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#escapeIdentifier)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` callback: *const fn (self: QtC.QSqlDriver, identifier: [*:0]const u8, typeVal: qsqldriver_enums.IdentifierType) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnEscapeIdentifier(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) [*:0]const u8) void {
        qtc.QSqlDriver_OnEscapeIdentifier(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` identifier: []const u8 `
    ///
    /// ` typeVal: qsqldriver_enums.IdentifierType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperEscapeIdentifier(self: ?*anyopaque, identifier: []const u8, typeVal: i32, allocator: std.mem.Allocator) []const u8 {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        var _str = qtc.QSqlDriver_SuperEscapeIdentifier(@ptrCast(self), identifier_str, @bitCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.EscapeIdentifier: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#sqlStatement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` typeVal: qsqldriver_enums.StatementType `
    ///
    /// ` tableName: []const u8 `
    ///
    /// ` rec: QtC.QSqlRecord `
    ///
    /// ` preparedStatement: bool `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SqlStatement(self: ?*anyopaque, typeVal: i32, tableName: []const u8, rec: ?*anyopaque, preparedStatement: bool, allocator: std.mem.Allocator) []const u8 {
        const tableName_str = qtc.libqt_string{
            .len = tableName.len,
            .data = tableName.ptr,
        };
        var _str = qtc.QSqlDriver_SqlStatement(@ptrCast(self), @bitCast(typeVal), tableName_str, @ptrCast(rec), preparedStatement);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.SqlStatement: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#sqlStatement)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` callback: *const fn (self: QtC.QSqlDriver, typeVal: qsqldriver_enums.StatementType, tableName: [*:0]const u8, rec: QtC.QSqlRecord, preparedStatement: bool) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnSqlStatement(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8, ?*anyopaque, bool) callconv(.c) [*:0]const u8) void {
        qtc.QSqlDriver_OnSqlStatement(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` typeVal: qsqldriver_enums.StatementType `
    ///
    /// ` tableName: []const u8 `
    ///
    /// ` rec: QtC.QSqlRecord `
    ///
    /// ` preparedStatement: bool `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperSqlStatement(self: ?*anyopaque, typeVal: i32, tableName: []const u8, rec: ?*anyopaque, preparedStatement: bool, allocator: std.mem.Allocator) []const u8 {
        const tableName_str = qtc.libqt_string{
            .len = tableName.len,
            .data = tableName.ptr,
        };
        var _str = qtc.QSqlDriver_SuperSqlStatement(@ptrCast(self), @bitCast(typeVal), tableName_str, @ptrCast(rec), preparedStatement);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.SqlStatement: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#lastError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn LastError(self: ?*anyopaque) QtC.QSqlError {
        return qtc.QSqlDriver_LastError(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#handle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn Handle(self: ?*anyopaque) QtC.QVariant {
        return qtc.QSqlDriver_Handle(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#handle)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QVariant `
    ///
    pub fn OnHandle(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.QSqlDriver_OnHandle(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn SuperHandle(self: ?*anyopaque) QtC.QVariant {
        return qtc.QSqlDriver_SuperHandle(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#hasFeature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` f: qsqldriver_enums.DriverFeature `
    ///
    pub fn HasFeature(self: ?*anyopaque, f: i32) bool {
        return qtc.QSqlDriver_HasFeature(@ptrCast(self), @bitCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#hasFeature)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` callback: *const fn (self: QtC.QSqlDriver, f: qsqldriver_enums.DriverFeature) callconv(.c) bool `
    ///
    pub fn OnHasFeature(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSqlDriver_OnHasFeature(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` f: qsqldriver_enums.DriverFeature `
    ///
    pub fn SuperHasFeature(self: ?*anyopaque, f: i32) bool {
        return qtc.QSqlDriver_SuperHasFeature(@ptrCast(self), @bitCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn Close(self: ?*anyopaque) void {
        qtc.QSqlDriver_Close(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#close)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnClose(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QSqlDriver_OnClose(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn SuperClose(self: ?*anyopaque) void {
        qtc.QSqlDriver_SuperClose(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#createResult)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn CreateResult(self: ?*anyopaque) QtC.QSqlResult {
        return qtc.QSqlDriver_CreateResult(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#createResult)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QSqlResult `
    ///
    pub fn OnCreateResult(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSqlResult) void {
        qtc.QSqlDriver_OnCreateResult(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn SuperCreateResult(self: ?*anyopaque) QtC.QSqlResult {
        return qtc.QSqlDriver_SuperCreateResult(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
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
        return qtc.QSqlDriver_Open(@ptrCast(self), db_str, user_str, password_str, host_str, @bitCast(port), connOpts_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#open)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` callback: *const fn (self: QtC.QSqlDriver, db: [*:0]const u8, user: [*:0]const u8, password: [*:0]const u8, host: [*:0]const u8, port: i32, connOpts: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnOpen(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8, i32, [*:0]const u8) callconv(.c) bool) void {
        qtc.QSqlDriver_OnOpen(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSqlDriver `
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
    pub fn SuperOpen(self: ?*anyopaque, db: []const u8, user: []const u8, password: []const u8, host: []const u8, port: i32, connOpts: []const u8) bool {
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
        return qtc.QSqlDriver_SuperOpen(@ptrCast(self), db_str, user_str, password_str, host_str, @bitCast(port), connOpts_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#subscribeToNotification)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SubscribeToNotification(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlDriver_SubscribeToNotification(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#subscribeToNotification)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` callback: *const fn (self: QtC.QSqlDriver, name: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnSubscribeToNotification(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.QSqlDriver_OnSubscribeToNotification(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperSubscribeToNotification(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlDriver_SuperSubscribeToNotification(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#unsubscribeFromNotification)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` name: []const u8 `
    ///
    pub fn UnsubscribeFromNotification(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlDriver_UnsubscribeFromNotification(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#unsubscribeFromNotification)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` callback: *const fn (self: QtC.QSqlDriver, name: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnUnsubscribeFromNotification(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.QSqlDriver_OnUnsubscribeFromNotification(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperUnsubscribeFromNotification(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlDriver_SuperUnsubscribeFromNotification(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#subscribedToNotifications)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SubscribedToNotifications(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlDriver_SubscribedToNotifications(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#subscribedToNotifications)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn OnSubscribedToNotifications(self: ?*anyopaque, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QSqlDriver_OnSubscribedToNotifications(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperSubscribedToNotifications(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlDriver_SuperSubscribedToNotifications(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#isIdentifierEscaped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` identifier: []const u8 `
    ///
    /// ` typeVal: qsqldriver_enums.IdentifierType `
    ///
    pub fn IsIdentifierEscaped(self: ?*anyopaque, identifier: []const u8, typeVal: i32) bool {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        return qtc.QSqlDriver_IsIdentifierEscaped(@ptrCast(self), identifier_str, @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#isIdentifierEscaped)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` callback: *const fn (self: QtC.QSqlDriver, identifier: [*:0]const u8, typeVal: qsqldriver_enums.IdentifierType) callconv(.c) bool `
    ///
    pub fn OnIsIdentifierEscaped(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) bool) void {
        qtc.QSqlDriver_OnIsIdentifierEscaped(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` identifier: []const u8 `
    ///
    /// ` typeVal: qsqldriver_enums.IdentifierType `
    ///
    pub fn SuperIsIdentifierEscaped(self: ?*anyopaque, identifier: []const u8, typeVal: i32) bool {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        return qtc.QSqlDriver_SuperIsIdentifierEscaped(@ptrCast(self), identifier_str, @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#stripDelimiters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` identifier: []const u8 `
    ///
    /// ` typeVal: qsqldriver_enums.IdentifierType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StripDelimiters(self: ?*anyopaque, identifier: []const u8, typeVal: i32, allocator: std.mem.Allocator) []const u8 {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        var _str = qtc.QSqlDriver_StripDelimiters(@ptrCast(self), identifier_str, @bitCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.StripDelimiters: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#stripDelimiters)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` callback: *const fn (self: QtC.QSqlDriver, identifier: [*:0]const u8, typeVal: qsqldriver_enums.IdentifierType) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnStripDelimiters(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) [*:0]const u8) void {
        qtc.QSqlDriver_OnStripDelimiters(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` identifier: []const u8 `
    ///
    /// ` typeVal: qsqldriver_enums.IdentifierType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperStripDelimiters(self: ?*anyopaque, identifier: []const u8, typeVal: i32, allocator: std.mem.Allocator) []const u8 {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        var _str = qtc.QSqlDriver_SuperStripDelimiters(@ptrCast(self), identifier_str, @bitCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqldriver.StripDelimiters: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#setNumericalPrecisionPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` precisionPolicy: qtsqlglobal_enums.NumericalPrecisionPolicy `
    ///
    pub fn SetNumericalPrecisionPolicy(self: ?*anyopaque, precisionPolicy: i32) void {
        qtc.QSqlDriver_SetNumericalPrecisionPolicy(@ptrCast(self), @bitCast(precisionPolicy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#numericalPrecisionPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ## Returns:
    ///
    /// ` qtsqlglobal_enums.NumericalPrecisionPolicy `
    ///
    pub fn NumericalPrecisionPolicy(self: ?*anyopaque) i32 {
        return qtc.QSqlDriver_NumericalPrecisionPolicy(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#dbmsType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ## Returns:
    ///
    /// ` qsqldriver_enums.DbmsType `
    ///
    pub fn DbmsType(self: ?*anyopaque) i32 {
        return qtc.QSqlDriver_DbmsType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#maximumIdentifierLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` typeVal: qsqldriver_enums.IdentifierType `
    ///
    pub fn MaximumIdentifierLength(self: ?*anyopaque, typeVal: i32) i32 {
        return qtc.QSqlDriver_MaximumIdentifierLength(@ptrCast(self), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#maximumIdentifierLength)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` callback: *const fn (self: QtC.QSqlDriver, typeVal: qsqldriver_enums.IdentifierType) callconv(.c) i32 `
    ///
    pub fn OnMaximumIdentifierLength(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QSqlDriver_OnMaximumIdentifierLength(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` typeVal: qsqldriver_enums.IdentifierType `
    ///
    pub fn SuperMaximumIdentifierLength(self: ?*anyopaque, typeVal: i32) i32 {
        return qtc.QSqlDriver_SuperMaximumIdentifierLength(@ptrCast(self), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#cancelQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn CancelQuery(self: ?*anyopaque) bool {
        return qtc.QSqlDriver_CancelQuery(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#cancelQuery)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnCancelQuery(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QSqlDriver_OnCancelQuery(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn SuperCancelQuery(self: ?*anyopaque) bool {
        return qtc.QSqlDriver_SuperCancelQuery(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#notification)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` name: []const u8 `
    ///
    /// ` source: qsqldriver_enums.NotificationSource `
    ///
    /// ` payload: QtC.QVariant `
    ///
    pub fn Notification(self: ?*anyopaque, name: []const u8, source: i32, payload: ?*anyopaque) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QSqlDriver_Notification(@ptrCast(self), name_str, @bitCast(source), @ptrCast(payload));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#notification)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` callback: *const fn (self: QtC.QSqlDriver, name: [*:0]const u8, source: qsqldriver_enums.NotificationSource, payload: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnNotification(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlDriver_Connect_Notification(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#setOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` o: bool `
    ///
    pub fn SetOpen(self: ?*anyopaque, o: bool) void {
        qtc.QSqlDriver_SetOpen(@ptrCast(self), o);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#setOpen)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` callback: *const fn (self: QtC.QSqlDriver, o: bool) callconv(.c) void `
    ///
    pub fn OnSetOpen(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QSqlDriver_OnSetOpen(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` o: bool `
    ///
    pub fn SuperSetOpen(self: ?*anyopaque, o: bool) void {
        qtc.QSqlDriver_SuperSetOpen(@ptrCast(self), o);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#setOpenError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` e: bool `
    ///
    pub fn SetOpenError(self: ?*anyopaque, e: bool) void {
        qtc.QSqlDriver_SetOpenError(@ptrCast(self), e);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#setOpenError)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` callback: *const fn (self: QtC.QSqlDriver, e: bool) callconv(.c) void `
    ///
    pub fn OnSetOpenError(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QSqlDriver_OnSetOpenError(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` e: bool `
    ///
    pub fn SuperSetOpenError(self: ?*anyopaque, e: bool) void {
        qtc.QSqlDriver_SuperSetOpenError(@ptrCast(self), e);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#setLastError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` e: QtC.QSqlError `
    ///
    pub fn SetLastError(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QSqlDriver_SetLastError(@ptrCast(self), @ptrCast(e));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#setLastError)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` callback: *const fn (self: QtC.QSqlDriver, e: QtC.QSqlError) callconv(.c) void `
    ///
    pub fn OnSetLastError(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlDriver_OnSetLastError(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` e: QtC.QSqlError `
    ///
    pub fn SuperSetLastError(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QSqlDriver_SuperSetLastError(@ptrCast(self), @ptrCast(e));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
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
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect3(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn Disconnect3(self: ?*anyopaque) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect4(self: ?*anyopaque, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect4(@ptrCast(self), @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect5(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` callback: *const fn (self: QtC.QSqlDriver) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8, param5: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @bitCast(param5));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: ?*anyopaque, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect22(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect22(@ptrCast(self), signal_Cstring, @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: ?*anyopaque, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self), @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` callback: *const fn (self: QtC.QSqlDriver, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSqlDriver_Event(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSqlDriver_SuperEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver`
    ///
    /// ` callback: *const fn (self: QtC.QSqlDriver, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlDriver_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSqlDriver_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
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
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSqlDriver_SuperEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver`
    ///
    /// ` callback: *const fn (self: QtC.QSqlDriver, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlDriver_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSqlDriver_TimerEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSqlDriver_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver`
    ///
    /// ` callback: *const fn (self: QtC.QSqlDriver, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlDriver_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSqlDriver_ChildEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSqlDriver_SuperChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver`
    ///
    /// ` callback: *const fn (self: QtC.QSqlDriver, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlDriver_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSqlDriver_CustomEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSqlDriver_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver`
    ///
    /// ` callback: *const fn (self: QtC.QSqlDriver, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlDriver_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSqlDriver_ConnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSqlDriver_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver`
    ///
    /// ` callback: *const fn (self: QtC.QSqlDriver, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlDriver_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSqlDriver_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSqlDriver_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver`
    ///
    /// ` callback: *const fn (self: QtC.QSqlDriver, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlDriver_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QSqlDriver_Sender(@ptrCast(self));
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
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QSqlDriver_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QSqlDriver_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QSqlDriver_SenderSignalIndex(@ptrCast(self));
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
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QSqlDriver_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QSqlDriver_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSqlDriver_Receivers(@ptrCast(self), signal_Cstring);
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
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSqlDriver_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver`
    ///
    /// ` callback: *const fn (self: QtC.QSqlDriver, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSqlDriver_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QSqlDriver_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QSqlDriver_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver`
    ///
    /// ` callback: *const fn (self: QtC.QSqlDriver, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlDriver_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSqlDriver `
    ///
    /// ` callback: *const fn (self: QtC.QSqlDriver, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSqlDriver `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QSqlDriver_Delete(@ptrCast(self));
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
