const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QDataStream = @import("libqt6").QDataStream;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QMimeData = @import("libqt6").QMimeData;
const QModelIndex = @import("libqt6").QModelIndex;
const QModelRoleDataSpan = @import("libqt6").QModelRoleDataSpan;
const QObject = @import("libqt6").QObject;
const QPersistentModelIndex = @import("libqt6").QPersistentModelIndex;
const QSize = @import("libqt6").QSize;
const QSqlDatabase = @import("libqt6").QSqlDatabase;
const QSqlError = @import("libqt6").QSqlError;
const QSqlIndex = @import("libqt6").QSqlIndex;
const QSqlQuery = @import("libqt6").QSqlQuery;
const QSqlRecord = @import("libqt6").QSqlRecord;
const QSqlTableModel = @import("libqt6").QSqlTableModel;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qabstractitemmodel_enums = @import("../libqabstractitemmodel.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qsqlrelationaltablemodel_enums = enums;
const qsqltablemodel_enums = @import("libqsqltablemodel.zig").enums;
const std = @import("std");
const ArrayMap_i32_QVariant = std.array_hash_map.Auto(i32, QVariant);
const Map_i32_u8 = std.AutoHashMapUnmanaged(i32, []u8);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelation.html)
pub const QSqlRelation = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelation.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSqlRelation,

    pub const _is_QSqlRelation = {};

    /// New constructs a new QSqlRelation object.
    ///
    pub fn New() QSqlRelation {
        return .{ .ptr = qtc.QSqlRelation_new() };
    }

    /// New2 constructs a new QSqlRelation object.
    ///
    /// ## Parameter(s):
    ///
    /// ` aTableName: []const u8 `
    ///
    /// ` indexCol: []const u8 `
    ///
    /// ` displayCol: []const u8 `
    ///
    pub fn New2(aTableName: []const u8, indexCol: []const u8, displayCol: []const u8) QSqlRelation {
        const aTableName_str = qtc.libqt_string{
            .len = aTableName.len,
            .data = aTableName.ptr,
        };
        const indexCol_str = qtc.libqt_string{
            .len = indexCol.len,
            .data = indexCol.ptr,
        };
        const displayCol_str = qtc.libqt_string{
            .len = displayCol.len,
            .data = displayCol.ptr,
        };
        return .{ .ptr = qtc.QSqlRelation_new2(aTableName_str, indexCol_str, displayCol_str) };
    }

    /// New3 constructs a new QSqlRelation object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QSqlRelation `
    ///
    pub fn New3(param1: anytype) QSqlRelation {
        comptime _ = @TypeOf(param1)._is_QSqlRelation;
        return .{ .ptr = qtc.QSqlRelation_new3(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelation.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelation `
    ///
    /// ` other: QSqlRelation `
    ///
    pub fn Swap(self: QSqlRelation, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSqlRelation;
        qtc.QSqlRelation_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelation.html#tableName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TableName(self: QSqlRelation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlRelation_TableName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelation.TableName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelation.html#indexColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IndexColumn(self: QSqlRelation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlRelation_IndexColumn(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelation.IndexColumn: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelation.html#displayColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DisplayColumn(self: QSqlRelation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlRelation_DisplayColumn(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelation.DisplayColumn: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelation.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelation `
    ///
    pub fn IsValid(self: QSqlRelation) bool {
        return qtc.QSqlRelation_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelation.html#dtor.QSqlRelation)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSqlRelation `
    ///
    pub fn Delete(self: QSqlRelation) void {
        qtc.QSqlRelation_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html)
pub const QSqlRelationalTableModel = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSqlRelationalTableModel,

    pub const _is_QSqlRelationalTableModel = {};
    pub const _is_QSqlTableModel = {};
    pub const _is_QSqlQueryModel = {};
    pub const _is_QAbstractTableModel = {};
    pub const _is_QAbstractItemModel = {};
    pub const _is_QObject = {};

    /// New constructs a new QSqlRelationalTableModel object.
    ///
    pub fn New() QSqlRelationalTableModel {
        return .{ .ptr = qtc.QSqlRelationalTableModel_new() };
    }

    /// New2 constructs a new QSqlRelationalTableModel object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QSqlRelationalTableModel {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QSqlRelationalTableModel_new2(@ptrCast(parent.ptr)) };
    }

    /// New3 constructs a new QSqlRelationalTableModel object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    /// ` db: QSqlDatabase `
    ///
    pub fn New3(parent: anytype, db: anytype) QSqlRelationalTableModel {
        comptime _ = @TypeOf(parent)._is_QObject;
        comptime _ = @TypeOf(db)._is_QSqlDatabase;
        return .{ .ptr = qtc.QSqlRelationalTableModel_new3(@ptrCast(parent.ptr), @ptrCast(db.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn MetaObject(self: QSqlRelationalTableModel) QMetaObject {
        return .{ .ptr = qtc.QSqlRelationalTableModel_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QSqlRelationalTableModel, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QSqlRelationalTableModel_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn SuperMetaObject(self: QSqlRelationalTableModel) QMetaObject {
        return .{ .ptr = qtc.QSqlRelationalTableModel_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QSqlRelationalTableModel, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSqlRelationalTableModel_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QSqlRelationalTableModel, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSqlRelationalTableModel_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QSqlRelationalTableModel, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSqlRelationalTableModel_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QSqlRelationalTableModel_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QSqlRelationalTableModel, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSqlRelationalTableModel_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelationaltablemodel.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` item: QModelIndex `
    ///
    /// ` role: i32 `
    ///
    pub fn Data(self: QSqlRelationalTableModel, item: anytype, role: i32) QVariant {
        comptime _ = @TypeOf(item)._is_QModelIndex;
        return .{ .ptr = qtc.QSqlRelationalTableModel_Data(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(role)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#data)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, item: QModelIndex, role: i32) callconv(.c) QVariant `
    ///
    pub fn OnData(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex, i32) callconv(.c) QVariant) void {
        qtc.QSqlRelationalTableModel_OnData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperData` instead
    ///
    pub const QBaseData = SuperData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#data)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` item: QModelIndex `
    ///
    /// ` role: i32 `
    ///
    pub fn SuperData(self: QSqlRelationalTableModel, item: anytype, role: i32) QVariant {
        comptime _ = @TypeOf(item)._is_QModelIndex;
        return .{ .ptr = qtc.QSqlRelationalTableModel_SuperData(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(role)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` item: QModelIndex `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn SetData(self: QSqlRelationalTableModel, item: anytype, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(item)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QSqlRelationalTableModel_SetData(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#setData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, item: QModelIndex, value: QVariant, role: i32) callconv(.c) bool `
    ///
    pub fn OnSetData(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex, QVariant, i32) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnSetData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetData` instead
    ///
    pub const QBaseSetData = SuperSetData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#setData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` item: QModelIndex `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn SuperSetData(self: QSqlRelationalTableModel, item: anytype, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(item)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QSqlRelationalTableModel_SuperSetData(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#removeColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn RemoveColumns(self: QSqlRelationalTableModel, column: i32, count: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QSqlRelationalTableModel_RemoveColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(parent.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#removeColumns)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, column: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnRemoveColumns(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnRemoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRemoveColumns` instead
    ///
    pub const QBaseRemoveColumns = SuperRemoveColumns;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#removeColumns)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperRemoveColumns(self: QSqlRelationalTableModel, column: i32, count: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QSqlRelationalTableModel_SuperRemoveColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(parent.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn Clear(self: QSqlRelationalTableModel) void {
        qtc.QSqlRelationalTableModel_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#clear)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnClear(self: QSqlRelationalTableModel, callback: *const fn () callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnClear(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClear` instead
    ///
    pub const QBaseClear = SuperClear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#clear)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn SuperClear(self: QSqlRelationalTableModel) void {
        qtc.QSqlRelationalTableModel_SuperClear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#select)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn Select(self: QSqlRelationalTableModel) bool {
        return qtc.QSqlRelationalTableModel_Select(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#select)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnSelect(self: QSqlRelationalTableModel, callback: *const fn () callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnSelect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSelect` instead
    ///
    pub const QBaseSelect = SuperSelect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#select)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn SuperSelect(self: QSqlRelationalTableModel) bool {
        return qtc.QSqlRelationalTableModel_SuperSelect(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#setTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` tableName: []const u8 `
    ///
    pub fn SetTable(self: QSqlRelationalTableModel, tableName: []const u8) void {
        const tableName_str = qtc.libqt_string{
            .len = tableName.len,
            .data = tableName.ptr,
        };
        qtc.QSqlRelationalTableModel_SetTable(@ptrCast(self.ptr), tableName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#setTable)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, tableName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetTable(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, [*:0]const u8) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnSetTable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetTable` instead
    ///
    pub const QBaseSetTable = SuperSetTable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#setTable)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` tableName: []const u8 `
    ///
    pub fn SuperSetTable(self: QSqlRelationalTableModel, tableName: []const u8) void {
        const tableName_str = qtc.libqt_string{
            .len = tableName.len,
            .data = tableName.ptr,
        };
        qtc.QSqlRelationalTableModel_SuperSetTable(@ptrCast(self.ptr), tableName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#setRelation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` column: i32 `
    ///
    /// ` relation: QSqlRelation `
    ///
    pub fn SetRelation(self: QSqlRelationalTableModel, column: i32, relation: anytype) void {
        comptime _ = @TypeOf(relation)._is_QSqlRelation;
        qtc.QSqlRelationalTableModel_SetRelation(@ptrCast(self.ptr), @bitCast(column), @ptrCast(relation.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#setRelation)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, column: i32, relation: QSqlRelation) callconv(.c) void `
    ///
    pub fn OnSetRelation(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, i32, QSqlRelation) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnSetRelation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetRelation` instead
    ///
    pub const QBaseSetRelation = SuperSetRelation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#setRelation)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` column: i32 `
    ///
    /// ` relation: QSqlRelation `
    ///
    pub fn SuperSetRelation(self: QSqlRelationalTableModel, column: i32, relation: anytype) void {
        comptime _ = @TypeOf(relation)._is_QSqlRelation;
        qtc.QSqlRelationalTableModel_SuperSetRelation(@ptrCast(self.ptr), @bitCast(column), @ptrCast(relation.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#relation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` column: i32 `
    ///
    pub fn Relation(self: QSqlRelationalTableModel, column: i32) QSqlRelation {
        return .{ .ptr = qtc.QSqlRelationalTableModel_Relation(@ptrCast(self.ptr), @bitCast(column)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#relationModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` column: i32 `
    ///
    pub fn RelationModel(self: QSqlRelationalTableModel, column: i32) QSqlTableModel {
        return .{ .ptr = qtc.QSqlRelationalTableModel_RelationModel(@ptrCast(self.ptr), @bitCast(column)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#relationModel)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, column: i32) callconv(.c) QSqlTableModel `
    ///
    pub fn OnRelationModel(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, i32) callconv(.c) QSqlTableModel) void {
        qtc.QSqlRelationalTableModel_OnRelationModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRelationModel` instead
    ///
    pub const QBaseRelationModel = SuperRelationModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#relationModel)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` column: i32 `
    ///
    pub fn SuperRelationModel(self: QSqlRelationalTableModel, column: i32) QSqlTableModel {
        return .{ .ptr = qtc.QSqlRelationalTableModel_SuperRelationModel(@ptrCast(self.ptr), @bitCast(column)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#setJoinMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` joinMode: qsqlrelationaltablemodel_enums.JoinMode `
    ///
    pub fn SetJoinMode(self: QSqlRelationalTableModel, joinMode: i32) void {
        qtc.QSqlRelationalTableModel_SetJoinMode(@ptrCast(self.ptr), @bitCast(joinMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#revertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` row: i32 `
    ///
    pub fn RevertRow(self: QSqlRelationalTableModel, row: i32) void {
        qtc.QSqlRelationalTableModel_RevertRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#revertRow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, row: i32) callconv(.c) void `
    ///
    pub fn OnRevertRow(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, i32) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnRevertRow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRevertRow` instead
    ///
    pub const QBaseRevertRow = SuperRevertRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#revertRow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` row: i32 `
    ///
    pub fn SuperRevertRow(self: QSqlRelationalTableModel, row: i32) void {
        qtc.QSqlRelationalTableModel_SuperRevertRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#selectStatement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectStatement(self: QSqlRelationalTableModel, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlRelationalTableModel_SelectStatement(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelationaltablemodel.SelectStatement: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#selectStatement)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnSelectStatement(self: QSqlRelationalTableModel, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QSqlRelationalTableModel_OnSelectStatement(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSelectStatement` instead
    ///
    pub const QBaseSelectStatement = SuperSelectStatement;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#selectStatement)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperSelectStatement(self: QSqlRelationalTableModel, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlRelationalTableModel_SuperSelectStatement(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelationaltablemodel.SelectStatement: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#updateRowInTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` row: i32 `
    ///
    /// ` values: QSqlRecord `
    ///
    pub fn UpdateRowInTable(self: QSqlRelationalTableModel, row: i32, values: anytype) bool {
        comptime _ = @TypeOf(values)._is_QSqlRecord;
        return qtc.QSqlRelationalTableModel_UpdateRowInTable(@ptrCast(self.ptr), @bitCast(row), @ptrCast(values.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#updateRowInTable)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, row: i32, values: QSqlRecord) callconv(.c) bool `
    ///
    pub fn OnUpdateRowInTable(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, i32, QSqlRecord) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnUpdateRowInTable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateRowInTable` instead
    ///
    pub const QBaseUpdateRowInTable = SuperUpdateRowInTable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#updateRowInTable)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` row: i32 `
    ///
    /// ` values: QSqlRecord `
    ///
    pub fn SuperUpdateRowInTable(self: QSqlRelationalTableModel, row: i32, values: anytype) bool {
        comptime _ = @TypeOf(values)._is_QSqlRecord;
        return qtc.QSqlRelationalTableModel_SuperUpdateRowInTable(@ptrCast(self.ptr), @bitCast(row), @ptrCast(values.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#insertRowIntoTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` values: QSqlRecord `
    ///
    pub fn InsertRowIntoTable(self: QSqlRelationalTableModel, values: anytype) bool {
        comptime _ = @TypeOf(values)._is_QSqlRecord;
        return qtc.QSqlRelationalTableModel_InsertRowIntoTable(@ptrCast(self.ptr), @ptrCast(values.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#insertRowIntoTable)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, values: QSqlRecord) callconv(.c) bool `
    ///
    pub fn OnInsertRowIntoTable(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QSqlRecord) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnInsertRowIntoTable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInsertRowIntoTable` instead
    ///
    pub const QBaseInsertRowIntoTable = SuperInsertRowIntoTable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#insertRowIntoTable)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` values: QSqlRecord `
    ///
    pub fn SuperInsertRowIntoTable(self: QSqlRelationalTableModel, values: anytype) bool {
        comptime _ = @TypeOf(values)._is_QSqlRecord;
        return qtc.QSqlRelationalTableModel_SuperInsertRowIntoTable(@ptrCast(self.ptr), @ptrCast(values.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#orderByClause)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OrderByClause(self: QSqlRelationalTableModel, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlRelationalTableModel_OrderByClause(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelationaltablemodel.OrderByClause: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#orderByClause)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnOrderByClause(self: QSqlRelationalTableModel, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QSqlRelationalTableModel_OnOrderByClause(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperOrderByClause` instead
    ///
    pub const QBaseOrderByClause = SuperOrderByClause;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#orderByClause)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperOrderByClause(self: QSqlRelationalTableModel, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlRelationalTableModel_SuperOrderByClause(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelationaltablemodel.OrderByClause: Memory allocation failed");
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
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelationaltablemodel.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelationaltablemodel.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#tableName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TableName(self: QSqlRelationalTableModel, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlTableModel_TableName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelationaltablemodel.TableName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#record)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn Record(self: QSqlRelationalTableModel) QSqlRecord {
        return .{ .ptr = qtc.QSqlTableModel_Record(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#record)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` row: i32 `
    ///
    pub fn Record2(self: QSqlRelationalTableModel, row: i32) QSqlRecord {
        return .{ .ptr = qtc.QSqlTableModel_Record2(@ptrCast(self.ptr), @bitCast(row)) };
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#isDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn IsDirty(self: QSqlRelationalTableModel) bool {
        return qtc.QSqlTableModel_IsDirty(@ptrCast(self.ptr));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#isDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn IsDirty2(self: QSqlRelationalTableModel, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QSqlTableModel_IsDirty2(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#editStrategy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ## Returns:
    ///
    /// ` qsqltablemodel_enums.EditStrategy `
    ///
    pub fn EditStrategy(self: QSqlRelationalTableModel) i32 {
        return qtc.QSqlTableModel_EditStrategy(@ptrCast(self.ptr));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#primaryKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn PrimaryKey(self: QSqlRelationalTableModel) QSqlIndex {
        return .{ .ptr = qtc.QSqlTableModel_PrimaryKey(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#database)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn Database(self: QSqlRelationalTableModel) QSqlDatabase {
        return .{ .ptr = qtc.QSqlTableModel_Database(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#fieldIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` fieldName: []const u8 `
    ///
    pub fn FieldIndex(self: QSqlRelationalTableModel, fieldName: []const u8) i32 {
        const fieldName_str = qtc.libqt_string{
            .len = fieldName.len,
            .data = fieldName.ptr,
        };
        return qtc.QSqlTableModel_FieldIndex(@ptrCast(self.ptr), fieldName_str);
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#filter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Filter(self: QSqlRelationalTableModel, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlTableModel_Filter(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelationaltablemodel.Filter: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#insertRecord)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` row: i32 `
    ///
    /// ` record: QSqlRecord `
    ///
    pub fn InsertRecord(self: QSqlRelationalTableModel, row: i32, record: anytype) bool {
        comptime _ = @TypeOf(record)._is_QSqlRecord;
        return qtc.QSqlTableModel_InsertRecord(@ptrCast(self.ptr), @bitCast(row), @ptrCast(record.ptr));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setRecord)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` row: i32 `
    ///
    /// ` record: QSqlRecord `
    ///
    pub fn SetRecord(self: QSqlRelationalTableModel, row: i32, record: anytype) bool {
        comptime _ = @TypeOf(record)._is_QSqlRecord;
        return qtc.QSqlTableModel_SetRecord(@ptrCast(self.ptr), @bitCast(row), @ptrCast(record.ptr));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#submitAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn SubmitAll(self: QSqlRelationalTableModel) bool {
        return qtc.QSqlTableModel_SubmitAll(@ptrCast(self.ptr));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#revertAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn RevertAll(self: QSqlRelationalTableModel) void {
        qtc.QSqlTableModel_RevertAll(@ptrCast(self.ptr));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#primeInsert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` row: i32 `
    ///
    /// ` record: QSqlRecord `
    ///
    pub fn PrimeInsert(self: QSqlRelationalTableModel, row: i32, record: anytype) void {
        comptime _ = @TypeOf(record)._is_QSqlRecord;
        qtc.QSqlTableModel_PrimeInsert(@ptrCast(self.ptr), @bitCast(row), @ptrCast(record.ptr));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#primeInsert)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, row: i32, record: QSqlRecord) callconv(.c) void `
    ///
    pub fn OnPrimeInsert(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, i32, QSqlRecord) callconv(.c) void) void {
        qtc.QSqlTableModel_Connect_PrimeInsert(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#beforeInsert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` record: QSqlRecord `
    ///
    pub fn BeforeInsert(self: QSqlRelationalTableModel, record: anytype) void {
        comptime _ = @TypeOf(record)._is_QSqlRecord;
        qtc.QSqlTableModel_BeforeInsert(@ptrCast(self.ptr), @ptrCast(record.ptr));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#beforeInsert)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, record: QSqlRecord) callconv(.c) void `
    ///
    pub fn OnBeforeInsert(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QSqlRecord) callconv(.c) void) void {
        qtc.QSqlTableModel_Connect_BeforeInsert(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#beforeUpdate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` row: i32 `
    ///
    /// ` record: QSqlRecord `
    ///
    pub fn BeforeUpdate(self: QSqlRelationalTableModel, row: i32, record: anytype) void {
        comptime _ = @TypeOf(record)._is_QSqlRecord;
        qtc.QSqlTableModel_BeforeUpdate(@ptrCast(self.ptr), @bitCast(row), @ptrCast(record.ptr));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#beforeUpdate)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, row: i32, record: QSqlRecord) callconv(.c) void `
    ///
    pub fn OnBeforeUpdate(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, i32, QSqlRecord) callconv(.c) void) void {
        qtc.QSqlTableModel_Connect_BeforeUpdate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#beforeDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` row: i32 `
    ///
    pub fn BeforeDelete(self: QSqlRelationalTableModel, row: i32) void {
        qtc.QSqlTableModel_BeforeDelete(@ptrCast(self.ptr), @bitCast(row));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#beforeDelete)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, row: i32) callconv(.c) void `
    ///
    pub fn OnBeforeDelete(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, i32) callconv(.c) void) void {
        qtc.QSqlTableModel_Connect_BeforeDelete(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` query: QSqlQuery `
    ///
    pub fn SetQuery(self: QSqlRelationalTableModel, query: anytype) void {
        comptime _ = @TypeOf(query)._is_QSqlQuery;
        qtc.QSqlQueryModel_SetQuery(@ptrCast(self.ptr), @ptrCast(query.ptr));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` query: []const u8 `
    ///
    pub fn SetQuery2(self: QSqlRelationalTableModel, query: []const u8) void {
        const query_str = qtc.libqt_string{
            .len = query.len,
            .data = query.ptr,
        };
        qtc.QSqlQueryModel_SetQuery2(@ptrCast(self.ptr), query_str);
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#query)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn Query(self: QSqlRelationalTableModel) QSqlQuery {
        return .{ .ptr = qtc.QSqlQueryModel_Query(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#lastError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn LastError(self: QSqlRelationalTableModel) QSqlError {
        return .{ .ptr = qtc.QSqlQueryModel_LastError(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` query: []const u8 `
    ///
    /// ` db: QSqlDatabase `
    ///
    pub fn SetQuery22(self: QSqlRelationalTableModel, query: []const u8, db: anytype) void {
        const query_str = qtc.libqt_string{
            .len = query.len,
            .data = query.ptr,
        };
        comptime _ = @TypeOf(db)._is_QSqlDatabase;
        qtc.QSqlQueryModel_SetQuery22(@ptrCast(self.ptr), query_str, @ptrCast(db.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn HasIndex(self: QSqlRelationalTableModel, row: i32, column: i32) bool {
        return qtc.QAbstractItemModel_HasIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` child: QModelIndex `
    ///
    pub fn Parent(self: QSqlRelationalTableModel, child: anytype) QModelIndex {
        comptime _ = @TypeOf(child)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractItemModel_Parent(@ptrCast(self.ptr), @ptrCast(child.ptr)) };
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, child: QModelIndex) callconv(.c) QModelIndex `
    ///
    pub fn OnParent(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.QAbstractItemModel_OnParent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperParent` instead
    ///
    pub const QBaseParent = SuperParent;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` child: QModelIndex `
    ///
    pub fn SuperParent(self: QSqlRelationalTableModel, child: anytype) QModelIndex {
        comptime _ = @TypeOf(child)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractItemModel_SuperParent(@ptrCast(self.ptr), @ptrCast(child.ptr)) };
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn HasChildren(self: QSqlRelationalTableModel, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_HasChildren(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnHasChildren(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex) callconv(.c) bool) void {
        qtc.QAbstractItemModel_OnHasChildren(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHasChildren` instead
    ///
    pub const QBaseHasChildren = SuperHasChildren;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperHasChildren(self: QSqlRelationalTableModel, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_SuperHasChildren(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` row: i32 `
    ///
    pub fn InsertRow(self: QSqlRelationalTableModel, row: i32) bool {
        return qtc.QAbstractItemModel_InsertRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` column: i32 `
    ///
    pub fn InsertColumn(self: QSqlRelationalTableModel, column: i32) bool {
        return qtc.QAbstractItemModel_InsertColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` row: i32 `
    ///
    pub fn RemoveRow(self: QSqlRelationalTableModel, row: i32) bool {
        return qtc.QAbstractItemModel_RemoveRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` column: i32 `
    ///
    pub fn RemoveColumn(self: QSqlRelationalTableModel, column: i32) bool {
        return qtc.QAbstractItemModel_RemoveColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceRow: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn MoveRow(self: QSqlRelationalTableModel, sourceParent: anytype, sourceRow: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QAbstractItemModel_MoveRow(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceRow), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceColumn: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn MoveColumn(self: QSqlRelationalTableModel, sourceParent: anytype, sourceColumn: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QAbstractItemModel_MoveColumn(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceColumn), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn CheckIndex(self: QSqlRelationalTableModel, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QAbstractItemModel_CheckIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    pub fn DataChanged(self: QSqlRelationalTableModel, topLeft: anytype, bottomRight: anytype) void {
        comptime _ = @TypeOf(topLeft)._is_QModelIndex;
        comptime _ = @TypeOf(bottomRight)._is_QModelIndex;
        qtc.QAbstractItemModel_DataChanged(@ptrCast(self.ptr), @ptrCast(topLeft.ptr), @ptrCast(bottomRight.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, topLeft: QModelIndex, bottomRight: QModelIndex) callconv(.c) void `
    ///
    pub fn OnDataChanged(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_DataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn HeaderDataChanged(self: QSqlRelationalTableModel, orientation: i32, first: i32, last: i32) void {
        qtc.QAbstractItemModel_HeaderDataChanged(@ptrCast(self.ptr), @bitCast(orientation), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, orientation: qnamespace_enums.Orientation, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnHeaderDataChanged(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, i32, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_HeaderDataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn LayoutChanged(self: QSqlRelationalTableModel) void {
        qtc.QAbstractItemModel_LayoutChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel) callconv(.c) void `
    ///
    pub fn OnLayoutChanged(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn LayoutAboutToBeChanged(self: QSqlRelationalTableModel) void {
        qtc.QAbstractItemModel_LayoutAboutToBeChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel) callconv(.c) void `
    ///
    pub fn OnLayoutAboutToBeChanged(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn HasIndex3(self: QSqlRelationalTableModel, row: i32, column: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_HasIndex3(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` row: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn InsertRow2(self: QSqlRelationalTableModel, row: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_InsertRow2(@ptrCast(self.ptr), @bitCast(row), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn InsertColumn2(self: QSqlRelationalTableModel, column: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_InsertColumn2(@ptrCast(self.ptr), @bitCast(column), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` row: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn RemoveRow2(self: QSqlRelationalTableModel, row: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_RemoveRow2(@ptrCast(self.ptr), @bitCast(row), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn RemoveColumn2(self: QSqlRelationalTableModel, column: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_RemoveColumn2(@ptrCast(self.ptr), @bitCast(column), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` options: flag of qabstractitemmodel_enums.CheckIndexOption `
    ///
    pub fn CheckIndex2(self: QSqlRelationalTableModel, index: anytype, options: i32) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QAbstractItemModel_CheckIndex2(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(options));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    /// ` roles: []i32 `
    ///
    pub fn DataChanged3(self: QSqlRelationalTableModel, topLeft: anytype, bottomRight: anytype, roles: []i32) void {
        comptime _ = @TypeOf(topLeft)._is_QModelIndex;
        comptime _ = @TypeOf(bottomRight)._is_QModelIndex;
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.QAbstractItemModel_DataChanged3(@ptrCast(self.ptr), @ptrCast(topLeft.ptr), @ptrCast(bottomRight.ptr), roles_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, topLeft: QModelIndex, bottomRight: QModelIndex, roles: qtc.libqt_list ([]i32)) callconv(.c) void `
    ///
    pub fn OnDataChanged3(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex, QModelIndex, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_DataChanged3(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    pub fn LayoutChanged1(self: QSqlRelationalTableModel, parents: []QPersistentModelIndex) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutChanged1(@ptrCast(self.ptr), parents_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, parents: qtc.libqt_list ([]QPersistentModelIndex)) callconv(.c) void `
    ///
    pub fn OnLayoutChanged1(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    /// ` hint: qabstractitemmodel_enums.LayoutChangeHint `
    ///
    pub fn LayoutChanged2(self: QSqlRelationalTableModel, parents: []QPersistentModelIndex, hint: i32) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutChanged2(@ptrCast(self.ptr), parents_list, @bitCast(hint));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, parents: qtc.libqt_list ([]QPersistentModelIndex), hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void `
    ///
    pub fn OnLayoutChanged2(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, qtc.libqt_list, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    pub fn LayoutAboutToBeChanged1(self: QSqlRelationalTableModel, parents: []QPersistentModelIndex) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutAboutToBeChanged1(@ptrCast(self.ptr), parents_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, parents: qtc.libqt_list ([]QPersistentModelIndex)) callconv(.c) void `
    ///
    pub fn OnLayoutAboutToBeChanged1(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    /// ` hint: qabstractitemmodel_enums.LayoutChangeHint `
    ///
    pub fn LayoutAboutToBeChanged2(self: QSqlRelationalTableModel, parents: []QPersistentModelIndex, hint: i32) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutAboutToBeChanged2(@ptrCast(self.ptr), parents_list, @bitCast(hint));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, parents: qtc.libqt_list ([]QPersistentModelIndex), hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void `
    ///
    pub fn OnLayoutAboutToBeChanged2(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, qtc.libqt_list, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QSqlRelationalTableModel, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelationaltablemodel.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QSqlRelationalTableModel, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn IsWidgetType(self: QSqlRelationalTableModel) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn IsWindowType(self: QSqlRelationalTableModel) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn IsQuickItemType(self: QSqlRelationalTableModel) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn SignalsBlocked(self: QSqlRelationalTableModel) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QSqlRelationalTableModel, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn Thread(self: QSqlRelationalTableModel) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QSqlRelationalTableModel, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QSqlRelationalTableModel, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QSqlRelationalTableModel, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QSqlRelationalTableModel, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QSqlRelationalTableModel, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QSqlRelationalTableModel, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qsqlrelationaltablemodel.Children: Memory allocation failed");
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
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QSqlRelationalTableModel, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QSqlRelationalTableModel, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QSqlRelationalTableModel, obj: anytype) void {
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
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QSqlRelationalTableModel, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn Disconnect3(self: QSqlRelationalTableModel) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QSqlRelationalTableModel, receiver: anytype) bool {
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
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn DumpObjectTree(self: QSqlRelationalTableModel) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn DumpObjectInfo(self: QSqlRelationalTableModel) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QSqlRelationalTableModel, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QSqlRelationalTableModel, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QSqlRelationalTableModel, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qsqlrelationaltablemodel.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsqlrelationaltablemodel.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn BindingStorage(self: QSqlRelationalTableModel) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn BindingStorage2(self: QSqlRelationalTableModel) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn Destroyed(self: QSqlRelationalTableModel) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QSqlRelationalTableModel, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn DeleteLater(self: QSqlRelationalTableModel) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QSqlRelationalTableModel, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QSqlRelationalTableModel, time: i64, timerType: i32) i32 {
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
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QSqlRelationalTableModel, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QSqlRelationalTableModel, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QSqlRelationalTableModel, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QSqlRelationalTableModel, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QSqlRelationalTableModel, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QSqlRelationalTableModel, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#flags)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.ItemFlag `
    ///
    pub fn Flags(self: QSqlRelationalTableModel, index: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QSqlRelationalTableModel_Flags(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperFlags` instead
    ///
    pub const QBaseFlags = SuperFlags;

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#flags)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.ItemFlag `
    ///
    pub fn SuperFlags(self: QSqlRelationalTableModel, index: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QSqlRelationalTableModel_SuperFlags(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#flags)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, index: QModelIndex) callconv(.c) i32 `
    ///
    pub fn OnFlags(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex) callconv(.c) i32) void {
        qtc.QSqlRelationalTableModel_OnFlags(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#clearItemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn ClearItemData(self: QSqlRelationalTableModel, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QSqlRelationalTableModel_ClearItemData(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperClearItemData` instead
    ///
    pub const QBaseClearItemData = SuperClearItemData;

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#clearItemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperClearItemData(self: QSqlRelationalTableModel, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QSqlRelationalTableModel_SuperClearItemData(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#clearItemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, index: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnClearItemData(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnClearItemData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#headerData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` role: i32 `
    ///
    pub fn HeaderData(self: QSqlRelationalTableModel, section: i32, orientation: i32, role: i32) QVariant {
        return .{ .ptr = qtc.QSqlRelationalTableModel_HeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `SuperHeaderData` instead
    ///
    pub const QBaseHeaderData = SuperHeaderData;

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#headerData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` role: i32 `
    ///
    pub fn SuperHeaderData(self: QSqlRelationalTableModel, section: i32, orientation: i32, role: i32) QVariant {
        return .{ .ptr = qtc.QSqlRelationalTableModel_SuperHeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @bitCast(role)) };
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#headerData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, section: i32, orientation: qnamespace_enums.Orientation, role: i32) callconv(.c) QVariant `
    ///
    pub fn OnHeaderData(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, i32, i32, i32) callconv(.c) QVariant) void {
        qtc.QSqlRelationalTableModel_OnHeaderData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setEditStrategy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` strategy: qsqltablemodel_enums.EditStrategy `
    ///
    pub fn SetEditStrategy(self: QSqlRelationalTableModel, strategy: i32) void {
        qtc.QSqlRelationalTableModel_SetEditStrategy(@ptrCast(self.ptr), @bitCast(strategy));
    }

    /// ### DEPRECATED: Use `SuperSetEditStrategy` instead
    ///
    pub const QBaseSetEditStrategy = SuperSetEditStrategy;

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setEditStrategy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` strategy: qsqltablemodel_enums.EditStrategy `
    ///
    pub fn SuperSetEditStrategy(self: QSqlRelationalTableModel, strategy: i32) void {
        qtc.QSqlRelationalTableModel_SuperSetEditStrategy(@ptrCast(self.ptr), @bitCast(strategy));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setEditStrategy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, strategy: qsqltablemodel_enums.EditStrategy) callconv(.c) void `
    ///
    pub fn OnSetEditStrategy(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, i32) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnSetEditStrategy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#sort)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn Sort(self: QSqlRelationalTableModel, column: i32, order: i32) void {
        qtc.QSqlRelationalTableModel_Sort(@ptrCast(self.ptr), @bitCast(column), @bitCast(order));
    }

    /// ### DEPRECATED: Use `SuperSort` instead
    ///
    pub const QBaseSort = SuperSort;

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#sort)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn SuperSort(self: QSqlRelationalTableModel, column: i32, order: i32) void {
        qtc.QSqlRelationalTableModel_SuperSort(@ptrCast(self.ptr), @bitCast(column), @bitCast(order));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#sort)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, column: i32, order: qnamespace_enums.SortOrder) callconv(.c) void `
    ///
    pub fn OnSort(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, i32, i32) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnSort(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setSort)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn SetSort(self: QSqlRelationalTableModel, column: i32, order: i32) void {
        qtc.QSqlRelationalTableModel_SetSort(@ptrCast(self.ptr), @bitCast(column), @bitCast(order));
    }

    /// ### DEPRECATED: Use `SuperSetSort` instead
    ///
    pub const QBaseSetSort = SuperSetSort;

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setSort)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn SuperSetSort(self: QSqlRelationalTableModel, column: i32, order: i32) void {
        qtc.QSqlRelationalTableModel_SuperSetSort(@ptrCast(self.ptr), @bitCast(column), @bitCast(order));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setSort)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, column: i32, order: qnamespace_enums.SortOrder) callconv(.c) void `
    ///
    pub fn OnSetSort(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, i32, i32) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnSetSort(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` filter: []const u8 `
    ///
    pub fn SetFilter(self: QSqlRelationalTableModel, filter: []const u8) void {
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        qtc.QSqlRelationalTableModel_SetFilter(@ptrCast(self.ptr), filter_str);
    }

    /// ### DEPRECATED: Use `SuperSetFilter` instead
    ///
    pub const QBaseSetFilter = SuperSetFilter;

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` filter: []const u8 `
    ///
    pub fn SuperSetFilter(self: QSqlRelationalTableModel, filter: []const u8) void {
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        qtc.QSqlRelationalTableModel_SuperSetFilter(@ptrCast(self.ptr), filter_str);
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, filter: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetFilter(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, [*:0]const u8) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnSetFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#rowCount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn RowCount(self: QSqlRelationalTableModel, parent: anytype) i32 {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QSqlRelationalTableModel_RowCount(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperRowCount` instead
    ///
    pub const QBaseRowCount = SuperRowCount;

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#rowCount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperRowCount(self: QSqlRelationalTableModel, parent: anytype) i32 {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QSqlRelationalTableModel_SuperRowCount(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#rowCount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, parent: QModelIndex) callconv(.c) i32 `
    ///
    pub fn OnRowCount(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex) callconv(.c) i32) void {
        qtc.QSqlRelationalTableModel_OnRowCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#removeRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn RemoveRows(self: QSqlRelationalTableModel, row: i32, count: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QSqlRelationalTableModel_RemoveRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperRemoveRows` instead
    ///
    pub const QBaseRemoveRows = SuperRemoveRows;

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#removeRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperRemoveRows(self: QSqlRelationalTableModel, row: i32, count: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QSqlRelationalTableModel_SuperRemoveRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(parent.ptr));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#removeRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, row: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnRemoveRows(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnRemoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#insertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn InsertRows(self: QSqlRelationalTableModel, row: i32, count: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QSqlRelationalTableModel_InsertRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperInsertRows` instead
    ///
    pub const QBaseInsertRows = SuperInsertRows;

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#insertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperInsertRows(self: QSqlRelationalTableModel, row: i32, count: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QSqlRelationalTableModel_SuperInsertRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(parent.ptr));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#insertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, row: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnInsertRows(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnInsertRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#selectRow)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` row: i32 `
    ///
    pub fn SelectRow(self: QSqlRelationalTableModel, row: i32) bool {
        return qtc.QSqlRelationalTableModel_SelectRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### DEPRECATED: Use `SuperSelectRow` instead
    ///
    pub const QBaseSelectRow = SuperSelectRow;

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#selectRow)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` row: i32 `
    ///
    pub fn SuperSelectRow(self: QSqlRelationalTableModel, row: i32) bool {
        return qtc.QSqlRelationalTableModel_SuperSelectRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#selectRow)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, row: i32) callconv(.c) bool `
    ///
    pub fn OnSelectRow(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, i32) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnSelectRow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#submit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn Submit(self: QSqlRelationalTableModel) bool {
        return qtc.QSqlRelationalTableModel_Submit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSubmit` instead
    ///
    pub const QBaseSubmit = SuperSubmit;

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#submit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn SuperSubmit(self: QSqlRelationalTableModel) bool {
        return qtc.QSqlRelationalTableModel_SuperSubmit(@ptrCast(self.ptr));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#submit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnSubmit(self: QSqlRelationalTableModel, callback: *const fn () callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnSubmit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#revert)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn Revert(self: QSqlRelationalTableModel) void {
        qtc.QSqlRelationalTableModel_Revert(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperRevert` instead
    ///
    pub const QBaseRevert = SuperRevert;

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#revert)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn SuperRevert(self: QSqlRelationalTableModel) void {
        qtc.QSqlRelationalTableModel_SuperRevert(@ptrCast(self.ptr));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#revert)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnRevert(self: QSqlRelationalTableModel, callback: *const fn () callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnRevert(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#deleteRowFromTable)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` row: i32 `
    ///
    pub fn DeleteRowFromTable(self: QSqlRelationalTableModel, row: i32) bool {
        return qtc.QSqlRelationalTableModel_DeleteRowFromTable(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### DEPRECATED: Use `SuperDeleteRowFromTable` instead
    ///
    pub const QBaseDeleteRowFromTable = SuperDeleteRowFromTable;

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#deleteRowFromTable)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` row: i32 `
    ///
    pub fn SuperDeleteRowFromTable(self: QSqlRelationalTableModel, row: i32) bool {
        return qtc.QSqlRelationalTableModel_SuperDeleteRowFromTable(@ptrCast(self.ptr), @bitCast(row));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#deleteRowFromTable)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, row: i32) callconv(.c) bool `
    ///
    pub fn OnDeleteRowFromTable(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, i32) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnDeleteRowFromTable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#indexInQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` item: QModelIndex `
    ///
    pub fn IndexInQuery(self: QSqlRelationalTableModel, item: anytype) QModelIndex {
        comptime _ = @TypeOf(item)._is_QModelIndex;
        return .{ .ptr = qtc.QSqlRelationalTableModel_IndexInQuery(@ptrCast(self.ptr), @ptrCast(item.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperIndexInQuery` instead
    ///
    pub const QBaseIndexInQuery = SuperIndexInQuery;

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#indexInQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` item: QModelIndex `
    ///
    pub fn SuperIndexInQuery(self: QSqlRelationalTableModel, item: anytype) QModelIndex {
        comptime _ = @TypeOf(item)._is_QModelIndex;
        return .{ .ptr = qtc.QSqlRelationalTableModel_SuperIndexInQuery(@ptrCast(self.ptr), @ptrCast(item.ptr)) };
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#indexInQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, item: QModelIndex) callconv(.c) QModelIndex `
    ///
    pub fn OnIndexInQuery(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.QSqlRelationalTableModel_OnIndexInQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#columnCount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn ColumnCount(self: QSqlRelationalTableModel, parent: anytype) i32 {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QSqlRelationalTableModel_ColumnCount(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperColumnCount` instead
    ///
    pub const QBaseColumnCount = SuperColumnCount;

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#columnCount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperColumnCount(self: QSqlRelationalTableModel, parent: anytype) i32 {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QSqlRelationalTableModel_SuperColumnCount(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#columnCount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, parent: QModelIndex) callconv(.c) i32 `
    ///
    pub fn OnColumnCount(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex) callconv(.c) i32) void {
        qtc.QSqlRelationalTableModel_OnColumnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setHeaderData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn SetHeaderData(self: QSqlRelationalTableModel, section: i32, orientation: i32, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QSqlRelationalTableModel_SetHeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `SuperSetHeaderData` instead
    ///
    pub const QBaseSetHeaderData = SuperSetHeaderData;

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setHeaderData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn SuperSetHeaderData(self: QSqlRelationalTableModel, section: i32, orientation: i32, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QSqlRelationalTableModel_SuperSetHeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @ptrCast(value.ptr), @bitCast(role));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setHeaderData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, section: i32, orientation: qnamespace_enums.Orientation, value: QVariant, role: i32) callconv(.c) bool `
    ///
    pub fn OnSetHeaderData(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, i32, i32, QVariant, i32) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnSetHeaderData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#insertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn InsertColumns(self: QSqlRelationalTableModel, column: i32, count: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QSqlRelationalTableModel_InsertColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperInsertColumns` instead
    ///
    pub const QBaseInsertColumns = SuperInsertColumns;

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#insertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperInsertColumns(self: QSqlRelationalTableModel, column: i32, count: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QSqlRelationalTableModel_SuperInsertColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(parent.ptr));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#insertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, column: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnInsertColumns(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnInsertColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#fetchMore)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn FetchMore(self: QSqlRelationalTableModel, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.QSqlRelationalTableModel_FetchMore(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperFetchMore` instead
    ///
    pub const QBaseFetchMore = SuperFetchMore;

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#fetchMore)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperFetchMore(self: QSqlRelationalTableModel, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.QSqlRelationalTableModel_SuperFetchMore(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#fetchMore)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, parent: QModelIndex) callconv(.c) void `
    ///
    pub fn OnFetchMore(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnFetchMore(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#canFetchMore)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn CanFetchMore(self: QSqlRelationalTableModel, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QSqlRelationalTableModel_CanFetchMore(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperCanFetchMore` instead
    ///
    pub const QBaseCanFetchMore = SuperCanFetchMore;

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#canFetchMore)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperCanFetchMore(self: QSqlRelationalTableModel, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QSqlRelationalTableModel_SuperCanFetchMore(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#canFetchMore)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnCanFetchMore(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnCanFetchMore(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#roleNames)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RoleNames(self: QSqlRelationalTableModel, allocator: std.mem.Allocator) Map_i32_u8 {
        const _map: qtc.libqt_map = qtc.QSqlRelationalTableModel_RoleNames(@ptrCast(self.ptr));
        var _ret: Map_i32_u8 = .empty;
        defer {
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("qsqlrelationaltablemodel.RoleNames: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _key, _value_slice) catch @panic("qsqlrelationaltablemodel.RoleNames: Memory allocation failed");
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperRoleNames` instead
    ///
    pub const QBaseRoleNames = SuperRoleNames;

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#roleNames)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperRoleNames(self: QSqlRelationalTableModel, allocator: std.mem.Allocator) Map_i32_u8 {
        const _map: qtc.libqt_map = qtc.QSqlRelationalTableModel_SuperRoleNames(@ptrCast(self.ptr));
        var _ret: Map_i32_u8 = .empty;
        defer {
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("qsqlrelationaltablemodel.RoleNames: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _key, _value_slice) catch @panic("qsqlrelationaltablemodel.RoleNames: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#roleNames)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_map `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of Map_i32_u8 `
    ///
    pub fn OnRoleNames(self: QSqlRelationalTableModel, callback: *const fn () callconv(.c) qtc.libqt_map) void {
        qtc.QSqlRelationalTableModel_OnRoleNames(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#queryChange)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn QueryChange(self: QSqlRelationalTableModel) void {
        qtc.QSqlRelationalTableModel_QueryChange(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperQueryChange` instead
    ///
    pub const QBaseQueryChange = SuperQueryChange;

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#queryChange)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn SuperQueryChange(self: QSqlRelationalTableModel) void {
        qtc.QSqlRelationalTableModel_SuperQueryChange(@ptrCast(self.ptr));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#queryChange)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnQueryChange(self: QSqlRelationalTableModel, callback: *const fn () callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnQueryChange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#index)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn Index(self: QSqlRelationalTableModel, row: i32, column: i32, parent: anytype) QModelIndex {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return .{ .ptr = qtc.QSqlRelationalTableModel_Index(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperIndex` instead
    ///
    pub const QBaseIndex = SuperIndex;

    /// Inherited from QAbstractTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#index)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperIndex(self: QSqlRelationalTableModel, row: i32, column: i32, parent: anytype) QModelIndex {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return .{ .ptr = qtc.QSqlRelationalTableModel_SuperIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr)) };
    }

    /// Inherited from QAbstractTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#index)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, row: i32, column: i32, parent: QModelIndex) callconv(.c) QModelIndex `
    ///
    pub fn OnIndex(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, i32, i32, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.QSqlRelationalTableModel_OnIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#sibling)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` idx: QModelIndex `
    ///
    pub fn Sibling(self: QSqlRelationalTableModel, row: i32, column: i32, idx: anytype) QModelIndex {
        comptime _ = @TypeOf(idx)._is_QModelIndex;
        return .{ .ptr = qtc.QSqlRelationalTableModel_Sibling(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(idx.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSibling` instead
    ///
    pub const QBaseSibling = SuperSibling;

    /// Inherited from QAbstractTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#sibling)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` idx: QModelIndex `
    ///
    pub fn SuperSibling(self: QSqlRelationalTableModel, row: i32, column: i32, idx: anytype) QModelIndex {
        comptime _ = @TypeOf(idx)._is_QModelIndex;
        return .{ .ptr = qtc.QSqlRelationalTableModel_SuperSibling(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(idx.ptr)) };
    }

    /// Inherited from QAbstractTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#sibling)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, row: i32, column: i32, idx: QModelIndex) callconv(.c) QModelIndex `
    ///
    pub fn OnSibling(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, i32, i32, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.QSqlRelationalTableModel_OnSibling(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#dropMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` data: QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn DropMimeData(self: QSqlRelationalTableModel, data: anytype, action: i32, row: i32, column: i32, parent: anytype) bool {
        comptime _ = @TypeOf(data)._is_QMimeData;
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QSqlRelationalTableModel_DropMimeData(@ptrCast(self.ptr), @ptrCast(data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperDropMimeData` instead
    ///
    pub const QBaseDropMimeData = SuperDropMimeData;

    /// Inherited from QAbstractTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#dropMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` data: QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperDropMimeData(self: QSqlRelationalTableModel, data: anytype, action: i32, row: i32, column: i32, parent: anytype) bool {
        comptime _ = @TypeOf(data)._is_QMimeData;
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QSqlRelationalTableModel_SuperDropMimeData(@ptrCast(self.ptr), @ptrCast(data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#dropMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, data: QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnDropMimeData(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QMimeData, i32, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnDropMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn ItemData(self: QSqlRelationalTableModel, allocator: std.mem.Allocator, index: anytype) ArrayMap_i32_QVariant {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        const _map: qtc.libqt_map = qtc.QSqlRelationalTableModel_ItemData(@ptrCast(self.ptr), @ptrCast(index.ptr));
        var _ret: ArrayMap_i32_QVariant = .empty;
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.put(allocator, _key, .{ .ptr = @ptrCast(_value) }) catch @panic("qsqlrelationaltablemodel.ItemData: Memory allocation failed");
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperItemData` instead
    ///
    pub const QBaseItemData = SuperItemData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperItemData(self: QSqlRelationalTableModel, allocator: std.mem.Allocator, index: anytype) ArrayMap_i32_QVariant {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        const _map: qtc.libqt_map = qtc.QSqlRelationalTableModel_SuperItemData(@ptrCast(self.ptr), @ptrCast(index.ptr));
        var _ret: ArrayMap_i32_QVariant = .empty;
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.put(allocator, _key, .{ .ptr = @ptrCast(_value) }) catch @panic("qsqlrelationaltablemodel.ItemData: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, index: QModelIndex) callconv(.c) qtc.libqt_map `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of ArrayMap_i32_QVariant `
    ///
    pub fn OnItemData(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex) callconv(.c) qtc.libqt_map) void {
        qtc.QSqlRelationalTableModel_OnItemData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` roles: ArrayMap_i32_QVariant `
    ///
    pub fn SetItemData(self: QSqlRelationalTableModel, allocator: std.mem.Allocator, index: anytype, roles: ArrayMap_i32_QVariant) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        const roles_count = roles.count();
        const roles_keys = allocator.alloc(i32, roles_count) catch @panic("qsqlrelationaltablemodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles_count) catch @panic("qsqlrelationaltablemodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_values);
        var i: usize = 0;
        var roles_it = roles.iterator();
        while (roles_it.next()) |it_entry| : (i += 1) {
            const roles_key = it_entry.key_ptr.*;
            roles_keys[i] = @bitCast(roles_key);
            roles_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const roles_map = qtc.libqt_map{
            .len = roles_count,
            .keys = @ptrCast(roles_keys.ptr),
            .values = @ptrCast(roles_values.ptr),
        };
        return qtc.QSqlRelationalTableModel_SetItemData(@ptrCast(self.ptr), @ptrCast(index.ptr), roles_map);
    }

    /// ### DEPRECATED: Use `SuperSetItemData` instead
    ///
    pub const QBaseSetItemData = SuperSetItemData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` roles: ArrayMap_i32_QVariant `
    ///
    pub fn SuperSetItemData(self: QSqlRelationalTableModel, allocator: std.mem.Allocator, index: anytype, roles: ArrayMap_i32_QVariant) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        const roles_count = roles.count();
        const roles_keys = allocator.alloc(i32, roles_count) catch @panic("qsqlrelationaltablemodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles_count) catch @panic("qsqlrelationaltablemodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_values);
        var i: usize = 0;
        var roles_it = roles.iterator();
        while (roles_it.next()) |it_entry| : (i += 1) {
            const roles_key = it_entry.key_ptr.*;
            roles_keys[i] = @bitCast(roles_key);
            roles_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const roles_map = qtc.libqt_map{
            .len = roles_count,
            .keys = @ptrCast(roles_keys.ptr),
            .values = @ptrCast(roles_values.ptr),
        };
        return qtc.QSqlRelationalTableModel_SuperSetItemData(@ptrCast(self.ptr), @ptrCast(index.ptr), roles_map);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, index: QModelIndex, roles: qtc.libqt_map (ArrayMap_i32_QVariant)) callconv(.c) bool `
    ///
    pub fn OnSetItemData(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex, qtc.libqt_map) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnSetItemData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeTypes(self: QSqlRelationalTableModel, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlRelationalTableModel_MimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qsqlrelationaltablemodel.MimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsqlrelationaltablemodel.MimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperMimeTypes` instead
    ///
    pub const QBaseMimeTypes = SuperMimeTypes;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperMimeTypes(self: QSqlRelationalTableModel, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlRelationalTableModel_SuperMimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qsqlrelationaltablemodel.MimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsqlrelationaltablemodel.MimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn OnMimeTypes(self: QSqlRelationalTableModel, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QSqlRelationalTableModel_OnMimeTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    pub fn MimeData(self: QSqlRelationalTableModel, indexes: []QModelIndex) QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return .{ .ptr = qtc.QSqlRelationalTableModel_MimeData(@ptrCast(self.ptr), indexes_list) };
    }

    /// ### DEPRECATED: Use `SuperMimeData` instead
    ///
    pub const QBaseMimeData = SuperMimeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    pub fn SuperMimeData(self: QSqlRelationalTableModel, indexes: []QModelIndex) QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return .{ .ptr = qtc.QSqlRelationalTableModel_SuperMimeData(@ptrCast(self.ptr), indexes_list) };
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, indexes: qtc.libqt_list ([]QModelIndex)) callconv(.c) QMimeData `
    ///
    pub fn OnMimeData(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, qtc.libqt_list) callconv(.c) QMimeData) void {
        qtc.QSqlRelationalTableModel_OnMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` data: QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn CanDropMimeData(self: QSqlRelationalTableModel, data: anytype, action: i32, row: i32, column: i32, parent: anytype) bool {
        comptime _ = @TypeOf(data)._is_QMimeData;
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QSqlRelationalTableModel_CanDropMimeData(@ptrCast(self.ptr), @ptrCast(data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperCanDropMimeData` instead
    ///
    pub const QBaseCanDropMimeData = SuperCanDropMimeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` data: QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperCanDropMimeData(self: QSqlRelationalTableModel, data: anytype, action: i32, row: i32, column: i32, parent: anytype) bool {
        comptime _ = @TypeOf(data)._is_QMimeData;
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QSqlRelationalTableModel_SuperCanDropMimeData(@ptrCast(self.ptr), @ptrCast(data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, data: QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnCanDropMimeData(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QMimeData, i32, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnCanDropMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn SupportedDropActions(self: QSqlRelationalTableModel) i32 {
        return qtc.QSqlRelationalTableModel_SupportedDropActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSupportedDropActions` instead
    ///
    pub const QBaseSupportedDropActions = SuperSupportedDropActions;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn SuperSupportedDropActions(self: QSqlRelationalTableModel) i32 {
        return qtc.QSqlRelationalTableModel_SuperSupportedDropActions(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSupportedDropActions(self: QSqlRelationalTableModel, callback: *const fn () callconv(.c) i32) void {
        qtc.QSqlRelationalTableModel_OnSupportedDropActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn SupportedDragActions(self: QSqlRelationalTableModel) i32 {
        return qtc.QSqlRelationalTableModel_SupportedDragActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSupportedDragActions` instead
    ///
    pub const QBaseSupportedDragActions = SuperSupportedDragActions;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn SuperSupportedDragActions(self: QSqlRelationalTableModel) i32 {
        return qtc.QSqlRelationalTableModel_SuperSupportedDragActions(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSupportedDragActions(self: QSqlRelationalTableModel, callback: *const fn () callconv(.c) i32) void {
        qtc.QSqlRelationalTableModel_OnSupportedDragActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceRow: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn MoveRows(self: QSqlRelationalTableModel, sourceParent: anytype, sourceRow: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QSqlRelationalTableModel_MoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceRow), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// ### DEPRECATED: Use `SuperMoveRows` instead
    ///
    pub const QBaseMoveRows = SuperMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceRow: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn SuperMoveRows(self: QSqlRelationalTableModel, sourceParent: anytype, sourceRow: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QSqlRelationalTableModel_SuperMoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceRow), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, sourceParent: QModelIndex, sourceRow: i32, count: i32, destinationParent: QModelIndex, destinationChild: i32) callconv(.c) bool `
    ///
    pub fn OnMoveRows(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnMoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceColumn: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn MoveColumns(self: QSqlRelationalTableModel, sourceParent: anytype, sourceColumn: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QSqlRelationalTableModel_MoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceColumn), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// ### DEPRECATED: Use `SuperMoveColumns` instead
    ///
    pub const QBaseMoveColumns = SuperMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceColumn: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn SuperMoveColumns(self: QSqlRelationalTableModel, sourceParent: anytype, sourceColumn: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QSqlRelationalTableModel_SuperMoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceColumn), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, sourceParent: QModelIndex, sourceColumn: i32, count: i32, destinationParent: QModelIndex, destinationChild: i32) callconv(.c) bool `
    ///
    pub fn OnMoveColumns(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnMoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Buddy(self: QSqlRelationalTableModel, index: anytype) QModelIndex {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QSqlRelationalTableModel_Buddy(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperBuddy` instead
    ///
    pub const QBaseBuddy = SuperBuddy;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperBuddy(self: QSqlRelationalTableModel, index: anytype) QModelIndex {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QSqlRelationalTableModel_SuperBuddy(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, index: QModelIndex) callconv(.c) QModelIndex `
    ///
    pub fn OnBuddy(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.QSqlRelationalTableModel_OnBuddy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` start: QModelIndex `
    ///
    /// ` role: i32 `
    ///
    /// ` value: QVariant `
    ///
    /// ` hits: i32 `
    ///
    /// ` flags: flag of qnamespace_enums.MatchFlag `
    ///
    pub fn Match(self: QSqlRelationalTableModel, allocator: std.mem.Allocator, start: anytype, role: i32, value: anytype, hits: i32, flags: i32) []QModelIndex {
        comptime _ = @TypeOf(start)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        const _arr: qtc.libqt_list = qtc.QSqlRelationalTableModel_Match(@ptrCast(self.ptr), @ptrCast(start.ptr), @bitCast(role), @ptrCast(value.ptr), @bitCast(hits), @bitCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("qsqlrelationaltablemodel.Match: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperMatch` instead
    ///
    pub const QBaseMatch = SuperMatch;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` start: QModelIndex `
    ///
    /// ` role: i32 `
    ///
    /// ` value: QVariant `
    ///
    /// ` hits: i32 `
    ///
    /// ` flags: flag of qnamespace_enums.MatchFlag `
    ///
    pub fn SuperMatch(self: QSqlRelationalTableModel, allocator: std.mem.Allocator, start: anytype, role: i32, value: anytype, hits: i32, flags: i32) []QModelIndex {
        comptime _ = @TypeOf(start)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        const _arr: qtc.libqt_list = qtc.QSqlRelationalTableModel_SuperMatch(@ptrCast(self.ptr), @ptrCast(start.ptr), @bitCast(role), @ptrCast(value.ptr), @bitCast(hits), @bitCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("qsqlrelationaltablemodel.Match: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, start: QModelIndex, role: i32, value: QVariant, hits: i32, flags: flag of qnamespace_enums.MatchFlag) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QModelIndex `
    ///
    pub fn OnMatch(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex, i32, QVariant, i32, i32) callconv(.c) qtc.libqt_list) void {
        qtc.QSqlRelationalTableModel_OnMatch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Span(self: QSqlRelationalTableModel, index: anytype) QSize {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QSqlRelationalTableModel_Span(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSpan` instead
    ///
    pub const QBaseSpan = SuperSpan;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperSpan(self: QSqlRelationalTableModel, index: anytype) QSize {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QSqlRelationalTableModel_SuperSpan(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, index: QModelIndex) callconv(.c) QSize `
    ///
    pub fn OnSpan(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex) callconv(.c) QSize) void {
        qtc.QSqlRelationalTableModel_OnSpan(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` roleDataSpan: QModelRoleDataSpan `
    ///
    pub fn MultiData(self: QSqlRelationalTableModel, index: anytype, roleDataSpan: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(roleDataSpan)._is_QModelRoleDataSpan;
        qtc.QSqlRelationalTableModel_MultiData(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(roleDataSpan.ptr));
    }

    /// ### DEPRECATED: Use `SuperMultiData` instead
    ///
    pub const QBaseMultiData = SuperMultiData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` roleDataSpan: QModelRoleDataSpan `
    ///
    pub fn SuperMultiData(self: QSqlRelationalTableModel, index: anytype, roleDataSpan: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(roleDataSpan)._is_QModelRoleDataSpan;
        qtc.QSqlRelationalTableModel_SuperMultiData(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(roleDataSpan.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, index: QModelIndex, roleDataSpan: QModelRoleDataSpan) callconv(.c) void `
    ///
    pub fn OnMultiData(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex, QModelRoleDataSpan) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnMultiData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn ResetInternalData(self: QSqlRelationalTableModel) void {
        qtc.QSqlRelationalTableModel_ResetInternalData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperResetInternalData` instead
    ///
    pub const QBaseResetInternalData = SuperResetInternalData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn SuperResetInternalData(self: QSqlRelationalTableModel) void {
        qtc.QSqlRelationalTableModel_SuperResetInternalData(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnResetInternalData(self: QSqlRelationalTableModel, callback: *const fn () callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnResetInternalData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QSqlRelationalTableModel, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSqlRelationalTableModel_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QSqlRelationalTableModel, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSqlRelationalTableModel_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QEvent) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QSqlRelationalTableModel, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSqlRelationalTableModel_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QSqlRelationalTableModel, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSqlRelationalTableModel_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QObject, QEvent) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QSqlRelationalTableModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QSqlRelationalTableModel_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QSqlRelationalTableModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QSqlRelationalTableModel_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QTimerEvent) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QSqlRelationalTableModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QSqlRelationalTableModel_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QSqlRelationalTableModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QSqlRelationalTableModel_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QChildEvent) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QSqlRelationalTableModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QSqlRelationalTableModel_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QSqlRelationalTableModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QSqlRelationalTableModel_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QEvent) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QSqlRelationalTableModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSqlRelationalTableModel_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QSqlRelationalTableModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSqlRelationalTableModel_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QMetaMethod) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QSqlRelationalTableModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSqlRelationalTableModel_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QSqlRelationalTableModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSqlRelationalTableModel_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QMetaMethod) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setPrimaryKey)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` key: QSqlIndex `
    ///
    pub fn SetPrimaryKey(self: QSqlRelationalTableModel, key: anytype) void {
        comptime _ = @TypeOf(key)._is_QSqlIndex;
        qtc.QSqlRelationalTableModel_SetPrimaryKey(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetPrimaryKey` instead
    ///
    pub const QBaseSetPrimaryKey = SuperSetPrimaryKey;

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setPrimaryKey)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` key: QSqlIndex `
    ///
    pub fn SuperSetPrimaryKey(self: QSqlRelationalTableModel, key: anytype) void {
        comptime _ = @TypeOf(key)._is_QSqlIndex;
        qtc.QSqlRelationalTableModel_SuperSetPrimaryKey(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setPrimaryKey)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, key: QSqlIndex) callconv(.c) void `
    ///
    pub fn OnSetPrimaryKey(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QSqlIndex) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnSetPrimaryKey(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#primaryValues)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` row: i32 `
    ///
    pub fn PrimaryValues(self: QSqlRelationalTableModel, row: i32) QSqlRecord {
        return .{ .ptr = qtc.QSqlRelationalTableModel_PrimaryValues(@ptrCast(self.ptr), @bitCast(row)) };
    }

    /// ### DEPRECATED: Use `SuperPrimaryValues` instead
    ///
    pub const QBasePrimaryValues = SuperPrimaryValues;

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#primaryValues)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` row: i32 `
    ///
    pub fn SuperPrimaryValues(self: QSqlRelationalTableModel, row: i32) QSqlRecord {
        return .{ .ptr = qtc.QSqlRelationalTableModel_SuperPrimaryValues(@ptrCast(self.ptr), @bitCast(row)) };
    }

    /// Inherited from QSqlTableModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#primaryValues)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, row: i32) callconv(.c) QSqlRecord `
    ///
    pub fn OnPrimaryValues(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, i32) callconv(.c) QSqlRecord) void {
        qtc.QSqlRelationalTableModel_OnPrimaryValues(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginInsertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn BeginInsertRows(self: QSqlRelationalTableModel, parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.QSqlRelationalTableModel_BeginInsertRows(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `SuperBeginInsertRows` instead
    ///
    pub const QBaseBeginInsertRows = SuperBeginInsertRows;

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginInsertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn SuperBeginInsertRows(self: QSqlRelationalTableModel, parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.QSqlRelationalTableModel_SuperBeginInsertRows(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginInsertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnBeginInsertRows(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnBeginInsertRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endInsertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn EndInsertRows(self: QSqlRelationalTableModel) void {
        qtc.QSqlRelationalTableModel_EndInsertRows(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperEndInsertRows` instead
    ///
    pub const QBaseEndInsertRows = SuperEndInsertRows;

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endInsertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn SuperEndInsertRows(self: QSqlRelationalTableModel) void {
        qtc.QSqlRelationalTableModel_SuperEndInsertRows(@ptrCast(self.ptr));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endInsertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndInsertRows(self: QSqlRelationalTableModel, callback: *const fn () callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnEndInsertRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn BeginRemoveRows(self: QSqlRelationalTableModel, parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.QSqlRelationalTableModel_BeginRemoveRows(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `SuperBeginRemoveRows` instead
    ///
    pub const QBaseBeginRemoveRows = SuperBeginRemoveRows;

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn SuperBeginRemoveRows(self: QSqlRelationalTableModel, parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.QSqlRelationalTableModel_SuperBeginRemoveRows(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnBeginRemoveRows(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnBeginRemoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endRemoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn EndRemoveRows(self: QSqlRelationalTableModel) void {
        qtc.QSqlRelationalTableModel_EndRemoveRows(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperEndRemoveRows` instead
    ///
    pub const QBaseEndRemoveRows = SuperEndRemoveRows;

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endRemoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn SuperEndRemoveRows(self: QSqlRelationalTableModel) void {
        qtc.QSqlRelationalTableModel_SuperEndRemoveRows(@ptrCast(self.ptr));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endRemoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndRemoveRows(self: QSqlRelationalTableModel, callback: *const fn () callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnEndRemoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn BeginInsertColumns(self: QSqlRelationalTableModel, parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.QSqlRelationalTableModel_BeginInsertColumns(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `SuperBeginInsertColumns` instead
    ///
    pub const QBaseBeginInsertColumns = SuperBeginInsertColumns;

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn SuperBeginInsertColumns(self: QSqlRelationalTableModel, parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.QSqlRelationalTableModel_SuperBeginInsertColumns(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnBeginInsertColumns(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnBeginInsertColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endInsertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn EndInsertColumns(self: QSqlRelationalTableModel) void {
        qtc.QSqlRelationalTableModel_EndInsertColumns(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperEndInsertColumns` instead
    ///
    pub const QBaseEndInsertColumns = SuperEndInsertColumns;

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endInsertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn SuperEndInsertColumns(self: QSqlRelationalTableModel) void {
        qtc.QSqlRelationalTableModel_SuperEndInsertColumns(@ptrCast(self.ptr));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endInsertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndInsertColumns(self: QSqlRelationalTableModel, callback: *const fn () callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnEndInsertColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn BeginRemoveColumns(self: QSqlRelationalTableModel, parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.QSqlRelationalTableModel_BeginRemoveColumns(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `SuperBeginRemoveColumns` instead
    ///
    pub const QBaseBeginRemoveColumns = SuperBeginRemoveColumns;

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn SuperBeginRemoveColumns(self: QSqlRelationalTableModel, parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.QSqlRelationalTableModel_SuperBeginRemoveColumns(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnBeginRemoveColumns(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnBeginRemoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn EndRemoveColumns(self: QSqlRelationalTableModel) void {
        qtc.QSqlRelationalTableModel_EndRemoveColumns(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperEndRemoveColumns` instead
    ///
    pub const QBaseEndRemoveColumns = SuperEndRemoveColumns;

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn SuperEndRemoveColumns(self: QSqlRelationalTableModel) void {
        qtc.QSqlRelationalTableModel_SuperEndRemoveColumns(@ptrCast(self.ptr));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndRemoveColumns(self: QSqlRelationalTableModel, callback: *const fn () callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnEndRemoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginResetModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn BeginResetModel(self: QSqlRelationalTableModel) void {
        qtc.QSqlRelationalTableModel_BeginResetModel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperBeginResetModel` instead
    ///
    pub const QBaseBeginResetModel = SuperBeginResetModel;

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginResetModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn SuperBeginResetModel(self: QSqlRelationalTableModel) void {
        qtc.QSqlRelationalTableModel_SuperBeginResetModel(@ptrCast(self.ptr));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginResetModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnBeginResetModel(self: QSqlRelationalTableModel, callback: *const fn () callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnBeginResetModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endResetModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn EndResetModel(self: QSqlRelationalTableModel) void {
        qtc.QSqlRelationalTableModel_EndResetModel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperEndResetModel` instead
    ///
    pub const QBaseEndResetModel = SuperEndResetModel;

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endResetModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn SuperEndResetModel(self: QSqlRelationalTableModel) void {
        qtc.QSqlRelationalTableModel_SuperEndResetModel(@ptrCast(self.ptr));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endResetModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndResetModel(self: QSqlRelationalTableModel, callback: *const fn () callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnEndResetModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setLastError)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` errorVal: QSqlError `
    ///
    pub fn SetLastError(self: QSqlRelationalTableModel, errorVal: anytype) void {
        comptime _ = @TypeOf(errorVal)._is_QSqlError;
        qtc.QSqlRelationalTableModel_SetLastError(@ptrCast(self.ptr), @ptrCast(errorVal.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetLastError` instead
    ///
    pub const QBaseSetLastError = SuperSetLastError;

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setLastError)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` errorVal: QSqlError `
    ///
    pub fn SuperSetLastError(self: QSqlRelationalTableModel, errorVal: anytype) void {
        comptime _ = @TypeOf(errorVal)._is_QSqlError;
        qtc.QSqlRelationalTableModel_SuperSetLastError(@ptrCast(self.ptr), @ptrCast(errorVal.ptr));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setLastError)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, errorVal: QSqlError) callconv(.c) void `
    ///
    pub fn OnSetLastError(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QSqlError) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnSetLastError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn CreateIndex(self: QSqlRelationalTableModel, row: i32, column: i32) QModelIndex {
        return .{ .ptr = qtc.QSqlRelationalTableModel_CreateIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column)) };
    }

    /// ### DEPRECATED: Use `SuperCreateIndex` instead
    ///
    pub const QBaseCreateIndex = SuperCreateIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn SuperCreateIndex(self: QSqlRelationalTableModel, row: i32, column: i32) QModelIndex {
        return .{ .ptr = qtc.QSqlRelationalTableModel_SuperCreateIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column)) };
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, row: i32, column: i32) callconv(.c) QModelIndex `
    ///
    pub fn OnCreateIndex(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, i32, i32) callconv(.c) QModelIndex) void {
        qtc.QSqlRelationalTableModel_OnCreateIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn EncodeData(self: QSqlRelationalTableModel, indexes: []QModelIndex, stream: anytype) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        comptime _ = @TypeOf(stream)._is_QDataStream;
        qtc.QSqlRelationalTableModel_EncodeData(@ptrCast(self.ptr), indexes_list, @ptrCast(stream.ptr));
    }

    /// ### DEPRECATED: Use `SuperEncodeData` instead
    ///
    pub const QBaseEncodeData = SuperEncodeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn SuperEncodeData(self: QSqlRelationalTableModel, indexes: []QModelIndex, stream: anytype) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        comptime _ = @TypeOf(stream)._is_QDataStream;
        qtc.QSqlRelationalTableModel_SuperEncodeData(@ptrCast(self.ptr), indexes_list, @ptrCast(stream.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, indexes: qtc.libqt_list ([]QModelIndex), stream: QDataStream) callconv(.c) void `
    ///
    pub fn OnEncodeData(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, qtc.libqt_list, QDataStream) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnEncodeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn DecodeData(self: QSqlRelationalTableModel, row: i32, column: i32, parent: anytype, stream: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        comptime _ = @TypeOf(stream)._is_QDataStream;
        return qtc.QSqlRelationalTableModel_DecodeData(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr), @ptrCast(stream.ptr));
    }

    /// ### DEPRECATED: Use `SuperDecodeData` instead
    ///
    pub const QBaseDecodeData = SuperDecodeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn SuperDecodeData(self: QSqlRelationalTableModel, row: i32, column: i32, parent: anytype, stream: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        comptime _ = @TypeOf(stream)._is_QDataStream;
        return qtc.QSqlRelationalTableModel_SuperDecodeData(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr), @ptrCast(stream.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, row: i32, column: i32, parent: QModelIndex, stream: QDataStream) callconv(.c) bool `
    ///
    pub fn OnDecodeData(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, i32, i32, QModelIndex, QDataStream) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnDecodeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceFirst: i32 `
    ///
    /// ` sourceLast: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationRow: i32 `
    ///
    pub fn BeginMoveRows(self: QSqlRelationalTableModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationRow: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QSqlRelationalTableModel_BeginMoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationRow));
    }

    /// ### DEPRECATED: Use `SuperBeginMoveRows` instead
    ///
    pub const QBaseBeginMoveRows = SuperBeginMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceFirst: i32 `
    ///
    /// ` sourceLast: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationRow: i32 `
    ///
    pub fn SuperBeginMoveRows(self: QSqlRelationalTableModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationRow: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QSqlRelationalTableModel_SuperBeginMoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationRow));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, sourceParent: QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QModelIndex, destinationRow: i32) callconv(.c) bool `
    ///
    pub fn OnBeginMoveRows(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnBeginMoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn EndMoveRows(self: QSqlRelationalTableModel) void {
        qtc.QSqlRelationalTableModel_EndMoveRows(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperEndMoveRows` instead
    ///
    pub const QBaseEndMoveRows = SuperEndMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn SuperEndMoveRows(self: QSqlRelationalTableModel) void {
        qtc.QSqlRelationalTableModel_SuperEndMoveRows(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndMoveRows(self: QSqlRelationalTableModel, callback: *const fn () callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnEndMoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceFirst: i32 `
    ///
    /// ` sourceLast: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationColumn: i32 `
    ///
    pub fn BeginMoveColumns(self: QSqlRelationalTableModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationColumn: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QSqlRelationalTableModel_BeginMoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationColumn));
    }

    /// ### DEPRECATED: Use `SuperBeginMoveColumns` instead
    ///
    pub const QBaseBeginMoveColumns = SuperBeginMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceFirst: i32 `
    ///
    /// ` sourceLast: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationColumn: i32 `
    ///
    pub fn SuperBeginMoveColumns(self: QSqlRelationalTableModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationColumn: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QSqlRelationalTableModel_SuperBeginMoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationColumn));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, sourceParent: QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QModelIndex, destinationColumn: i32) callconv(.c) bool `
    ///
    pub fn OnBeginMoveColumns(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnBeginMoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn EndMoveColumns(self: QSqlRelationalTableModel) void {
        qtc.QSqlRelationalTableModel_EndMoveColumns(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperEndMoveColumns` instead
    ///
    pub const QBaseEndMoveColumns = SuperEndMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn SuperEndMoveColumns(self: QSqlRelationalTableModel) void {
        qtc.QSqlRelationalTableModel_SuperEndMoveColumns(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndMoveColumns(self: QSqlRelationalTableModel, callback: *const fn () callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnEndMoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` from: QModelIndex `
    ///
    /// ` to: QModelIndex `
    ///
    pub fn ChangePersistentIndex(self: QSqlRelationalTableModel, from: anytype, to: anytype) void {
        comptime _ = @TypeOf(from)._is_QModelIndex;
        comptime _ = @TypeOf(to)._is_QModelIndex;
        qtc.QSqlRelationalTableModel_ChangePersistentIndex(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr));
    }

    /// ### DEPRECATED: Use `SuperChangePersistentIndex` instead
    ///
    pub const QBaseChangePersistentIndex = SuperChangePersistentIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` from: QModelIndex `
    ///
    /// ` to: QModelIndex `
    ///
    pub fn SuperChangePersistentIndex(self: QSqlRelationalTableModel, from: anytype, to: anytype) void {
        comptime _ = @TypeOf(from)._is_QModelIndex;
        comptime _ = @TypeOf(to)._is_QModelIndex;
        qtc.QSqlRelationalTableModel_SuperChangePersistentIndex(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, from: QModelIndex, to: QModelIndex) callconv(.c) void `
    ///
    pub fn OnChangePersistentIndex(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnChangePersistentIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` from: []QModelIndex `
    ///
    /// ` to: []QModelIndex `
    ///
    pub fn ChangePersistentIndexList(self: QSqlRelationalTableModel, from: []QModelIndex, to: []QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.QSqlRelationalTableModel_ChangePersistentIndexList(@ptrCast(self.ptr), from_list, to_list);
    }

    /// ### DEPRECATED: Use `SuperChangePersistentIndexList` instead
    ///
    pub const QBaseChangePersistentIndexList = SuperChangePersistentIndexList;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` from: []QModelIndex `
    ///
    /// ` to: []QModelIndex `
    ///
    pub fn SuperChangePersistentIndexList(self: QSqlRelationalTableModel, from: []QModelIndex, to: []QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.QSqlRelationalTableModel_SuperChangePersistentIndexList(@ptrCast(self.ptr), from_list, to_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, from: qtc.libqt_list ([]QModelIndex), to: qtc.libqt_list ([]QModelIndex)) callconv(.c) void `
    ///
    pub fn OnChangePersistentIndexList(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, qtc.libqt_list, qtc.libqt_list) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnChangePersistentIndexList(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PersistentIndexList(self: QSqlRelationalTableModel, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QSqlRelationalTableModel_PersistentIndexList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("qsqlrelationaltablemodel.PersistentIndexList: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperPersistentIndexList` instead
    ///
    pub const QBasePersistentIndexList = SuperPersistentIndexList;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperPersistentIndexList(self: QSqlRelationalTableModel, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QSqlRelationalTableModel_SuperPersistentIndexList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("qsqlrelationaltablemodel.PersistentIndexList: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QModelIndex `
    ///
    pub fn OnPersistentIndexList(self: QSqlRelationalTableModel, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QSqlRelationalTableModel_OnPersistentIndexList(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn Sender(self: QSqlRelationalTableModel) QObject {
        return .{ .ptr = qtc.QSqlRelationalTableModel_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn SuperSender(self: QSqlRelationalTableModel) QObject {
        return .{ .ptr = qtc.QSqlRelationalTableModel_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QSqlRelationalTableModel, callback: *const fn () callconv(.c) QObject) void {
        qtc.QSqlRelationalTableModel_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn SenderSignalIndex(self: QSqlRelationalTableModel) i32 {
        return qtc.QSqlRelationalTableModel_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn SuperSenderSignalIndex(self: QSqlRelationalTableModel) i32 {
        return qtc.QSqlRelationalTableModel_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QSqlRelationalTableModel, callback: *const fn () callconv(.c) i32) void {
        qtc.QSqlRelationalTableModel_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QSqlRelationalTableModel, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSqlRelationalTableModel_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QSqlRelationalTableModel, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSqlRelationalTableModel_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSqlRelationalTableModel_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QSqlRelationalTableModel, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSqlRelationalTableModel_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QSqlRelationalTableModel, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSqlRelationalTableModel_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel`
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QMetaMethod) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnRowsAboutToBeInserted(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnRowsInserted(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnRowsAboutToBeRemoved(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnRowsRemoved(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnColumnsAboutToBeInserted(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnColumnsInserted(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnColumnsAboutToBeRemoved(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnColumnsRemoved(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel) callconv(.c) void `
    ///
    pub fn OnModelAboutToBeReset(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ModelAboutToBeReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel) callconv(.c) void `
    ///
    pub fn OnModelReset(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ModelReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationRow: i32) callconv(.c) void `
    ///
    pub fn OnRowsAboutToBeMoved(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationRow: i32) callconv(.c) void `
    ///
    pub fn OnRowsMoved(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationColumn: i32) callconv(.c) void `
    ///
    pub fn OnColumnsAboutToBeMoved(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationColumn: i32) callconv(.c) void `
    ///
    pub fn OnColumnsMoved(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    /// ` callback: *const fn (self: QSqlRelationalTableModel, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QSqlRelationalTableModel, callback: *const fn (QSqlRelationalTableModel, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#dtor.QSqlRelationalTableModel)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSqlRelationalTableModel `
    ///
    pub fn Delete(self: QSqlRelationalTableModel) void {
        qtc.QSqlRelationalTableModel_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#public-types)
pub const enums = struct {
    pub const JoinMode = enum(i32) {
        pub const InnerJoin: i32 = 0;
        pub const LeftJoin: i32 = 1;
    };
};
