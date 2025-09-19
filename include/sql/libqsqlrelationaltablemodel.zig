const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractitemmodel_enums = @import("../libqabstractitemmodel.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qsqlrelationaltablemodel_enums = enums;
const qsqltablemodel_enums = @import("libqsqltablemodel.zig").enums;
const std = @import("std");
pub const map_i32_qtcqvariant = std.AutoHashMapUnmanaged(i32, QtC.QVariant);
pub const map_i32_u8 = std.AutoHashMapUnmanaged(i32, []u8);

/// https://doc.qt.io/qt-6/qsqlrelation.html
pub const qsqlrelation = struct {
    /// New constructs a new QSqlRelation object.
    ///
    ///
    pub fn New() QtC.QSqlRelation {
        return qtc.QSqlRelation_new();
    }

    /// New2 constructs a new QSqlRelation object.
    ///
    /// ``` aTableName: []const u8, indexCol: []const u8, displayCol: []const u8 ```
    pub fn New2(aTableName: []const u8, indexCol: []const u8, displayCol: []const u8) QtC.QSqlRelation {
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

        return qtc.QSqlRelation_new2(aTableName_str, indexCol_str, displayCol_str);
    }

    /// New3 constructs a new QSqlRelation object.
    ///
    /// ``` param1: QtC.QSqlRelation ```
    pub fn New3(param1: ?*anyopaque) QtC.QSqlRelation {
        return qtc.QSqlRelation_new3(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelation.html#swap)
    ///
    /// ``` self: QtC.QSqlRelation, other: QtC.QSqlRelation ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSqlRelation_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelation.html#tableName)
    ///
    /// ``` self: QtC.QSqlRelation, allocator: std.mem.Allocator ```
    pub fn TableName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlRelation_TableName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelation.TableName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelation.html#indexColumn)
    ///
    /// ``` self: QtC.QSqlRelation, allocator: std.mem.Allocator ```
    pub fn IndexColumn(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlRelation_IndexColumn(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelation.IndexColumn: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelation.html#displayColumn)
    ///
    /// ``` self: QtC.QSqlRelation, allocator: std.mem.Allocator ```
    pub fn DisplayColumn(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlRelation_DisplayColumn(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelation.DisplayColumn: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelation.html#isValid)
    ///
    /// ``` self: QtC.QSqlRelation ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QSqlRelation_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelation.html#dtor.QSqlRelation)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSqlRelation ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSqlRelation_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html
pub const qsqlrelationaltablemodel = struct {
    /// New constructs a new QSqlRelationalTableModel object.
    ///
    ///
    pub fn New() QtC.QSqlRelationalTableModel {
        return qtc.QSqlRelationalTableModel_new();
    }

    /// New2 constructs a new QSqlRelationalTableModel object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.QSqlRelationalTableModel {
        return qtc.QSqlRelationalTableModel_new2(@ptrCast(parent));
    }

    /// New3 constructs a new QSqlRelationalTableModel object.
    ///
    /// ``` parent: QtC.QObject, db: QtC.QSqlDatabase ```
    pub fn New3(parent: ?*anyopaque, db: ?*anyopaque) QtC.QSqlRelationalTableModel {
        return qtc.QSqlRelationalTableModel_new3(@ptrCast(parent), @ptrCast(db));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QSqlRelationalTableModel_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QSqlRelationalTableModel, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSqlRelationalTableModel_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QSqlRelationalTableModel, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QSqlRelationalTableModel_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QSqlRelationalTableModel_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QSqlRelationalTableModel_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QSqlRelationalTableModel_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelationaltablemodel.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#data)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, item: QtC.QModelIndex, role: i32 ```
    pub fn Data(self: ?*anyopaque, item: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QSqlRelationalTableModel_Data(@ptrCast(self), @ptrCast(item), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#data)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, item: QtC.QModelIndex, role: i32) callconv(.c) QtC.QVariant ```
    pub fn OnData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.QSqlRelationalTableModel_OnData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#data)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, item: QtC.QModelIndex, role: i32 ```
    pub fn QBaseData(self: ?*anyopaque, item: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QSqlRelationalTableModel_QBaseData(@ptrCast(self), @ptrCast(item), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#setData)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, item: QtC.QModelIndex, value: QtC.QVariant, role: i32 ```
    pub fn SetData(self: ?*anyopaque, item: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return qtc.QSqlRelationalTableModel_SetData(@ptrCast(self), @ptrCast(item), @ptrCast(value), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#setData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, item: QtC.QModelIndex, value: QtC.QVariant, role: i32) callconv(.c) bool ```
    pub fn OnSetData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnSetData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#setData)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, item: QtC.QModelIndex, value: QtC.QVariant, role: i32 ```
    pub fn QBaseSetData(self: ?*anyopaque, item: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return qtc.QSqlRelationalTableModel_QBaseSetData(@ptrCast(self), @ptrCast(item), @ptrCast(value), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#removeColumns)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, column: i32, count: i32, parent: QtC.QModelIndex ```
    pub fn RemoveColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_RemoveColumns(@ptrCast(self), @intCast(column), @intCast(count), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#removeColumns)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, column: i32, count: i32, parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnRemoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnRemoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#removeColumns)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, column: i32, count: i32, parent: QtC.QModelIndex ```
    pub fn QBaseRemoveColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_QBaseRemoveColumns(@ptrCast(self), @intCast(column), @intCast(count), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#clear)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#clear)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn () callconv(.c) void ```
    pub fn OnClear(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnClear(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#clear)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn QBaseClear(self: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_QBaseClear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#select)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn Select(self: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_Select(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#select)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn () callconv(.c) bool ```
    pub fn OnSelect(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnSelect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#select)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn QBaseSelect(self: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_QBaseSelect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#setTable)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, tableName: []const u8 ```
    pub fn SetTable(self: ?*anyopaque, tableName: []const u8) void {
        const tableName_str = qtc.libqt_string{
            .len = tableName.len,
            .data = tableName.ptr,
        };
        qtc.QSqlRelationalTableModel_SetTable(@ptrCast(self), tableName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#setTable)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, tableName: [*:0]const u8) callconv(.c) void ```
    pub fn OnSetTable(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnSetTable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#setTable)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, tableName: []const u8 ```
    pub fn QBaseSetTable(self: ?*anyopaque, tableName: []const u8) void {
        const tableName_str = qtc.libqt_string{
            .len = tableName.len,
            .data = tableName.ptr,
        };
        qtc.QSqlRelationalTableModel_QBaseSetTable(@ptrCast(self), tableName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#setRelation)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, column: i32, relation: QtC.QSqlRelation ```
    pub fn SetRelation(self: ?*anyopaque, column: i32, relation: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_SetRelation(@ptrCast(self), @intCast(column), @ptrCast(relation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#setRelation)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, column: i32, relation: QtC.QSqlRelation) callconv(.c) void ```
    pub fn OnSetRelation(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnSetRelation(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#setRelation)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, column: i32, relation: QtC.QSqlRelation ```
    pub fn QBaseSetRelation(self: ?*anyopaque, column: i32, relation: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_QBaseSetRelation(@ptrCast(self), @intCast(column), @ptrCast(relation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#relation)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, column: i32 ```
    pub fn Relation(self: ?*anyopaque, column: i32) QtC.QSqlRelation {
        return qtc.QSqlRelationalTableModel_Relation(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#relationModel)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, column: i32 ```
    pub fn RelationModel(self: ?*anyopaque, column: i32) QtC.QSqlTableModel {
        return qtc.QSqlRelationalTableModel_RelationModel(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#relationModel)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, column: i32) callconv(.c) QtC.QSqlTableModel ```
    pub fn OnRelationModel(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QSqlTableModel) void {
        qtc.QSqlRelationalTableModel_OnRelationModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#relationModel)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, column: i32 ```
    pub fn QBaseRelationModel(self: ?*anyopaque, column: i32) QtC.QSqlTableModel {
        return qtc.QSqlRelationalTableModel_QBaseRelationModel(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#setJoinMode)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, joinMode: qsqlrelationaltablemodel_enums.JoinMode ```
    pub fn SetJoinMode(self: ?*anyopaque, joinMode: i32) void {
        qtc.QSqlRelationalTableModel_SetJoinMode(@ptrCast(self), @intCast(joinMode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#revertRow)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, row: i32 ```
    pub fn RevertRow(self: ?*anyopaque, row: i32) void {
        qtc.QSqlRelationalTableModel_RevertRow(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#revertRow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, row: i32) callconv(.c) void ```
    pub fn OnRevertRow(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnRevertRow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#revertRow)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, row: i32 ```
    pub fn QBaseRevertRow(self: ?*anyopaque, row: i32) void {
        qtc.QSqlRelationalTableModel_QBaseRevertRow(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#selectStatement)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, allocator: std.mem.Allocator ```
    pub fn SelectStatement(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlRelationalTableModel_SelectStatement(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelationaltablemodel.SelectStatement: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#selectStatement)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn () callconv(.c) [*:0]const u8 ```
    pub fn OnSelectStatement(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QSqlRelationalTableModel_OnSelectStatement(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#selectStatement)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, allocator: std.mem.Allocator ```
    pub fn QBaseSelectStatement(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlRelationalTableModel_QBaseSelectStatement(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelationaltablemodel.SelectStatement: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#updateRowInTable)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, row: i32, values: QtC.QSqlRecord ```
    pub fn UpdateRowInTable(self: ?*anyopaque, row: i32, values: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_UpdateRowInTable(@ptrCast(self), @intCast(row), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#updateRowInTable)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, row: i32, values: QtC.QSqlRecord) callconv(.c) bool ```
    pub fn OnUpdateRowInTable(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnUpdateRowInTable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#updateRowInTable)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, row: i32, values: QtC.QSqlRecord ```
    pub fn QBaseUpdateRowInTable(self: ?*anyopaque, row: i32, values: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_QBaseUpdateRowInTable(@ptrCast(self), @intCast(row), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#insertRowIntoTable)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, values: QtC.QSqlRecord ```
    pub fn InsertRowIntoTable(self: ?*anyopaque, values: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_InsertRowIntoTable(@ptrCast(self), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#insertRowIntoTable)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, values: QtC.QSqlRecord) callconv(.c) bool ```
    pub fn OnInsertRowIntoTable(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnInsertRowIntoTable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#insertRowIntoTable)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, values: QtC.QSqlRecord ```
    pub fn QBaseInsertRowIntoTable(self: ?*anyopaque, values: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_QBaseInsertRowIntoTable(@ptrCast(self), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#orderByClause)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, allocator: std.mem.Allocator ```
    pub fn OrderByClause(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlRelationalTableModel_OrderByClause(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelationaltablemodel.OrderByClause: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#orderByClause)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn () callconv(.c) [*:0]const u8 ```
    pub fn OnOrderByClause(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QSqlRelationalTableModel_OnOrderByClause(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#orderByClause)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, allocator: std.mem.Allocator ```
    pub fn QBaseOrderByClause(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlRelationalTableModel_QBaseOrderByClause(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelationaltablemodel.OrderByClause: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QSqlRelationalTableModel_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelationaltablemodel.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QSqlRelationalTableModel_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelationaltablemodel.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#tableName)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, allocator: std.mem.Allocator ```
    pub fn TableName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlTableModel_TableName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelationaltablemodel.TableName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#record)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn Record(self: ?*anyopaque) QtC.QSqlRecord {
        return qtc.QSqlTableModel_Record(@ptrCast(self));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#record)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, row: i32 ```
    pub fn Record2(self: ?*anyopaque, row: i32) QtC.QSqlRecord {
        return qtc.QSqlTableModel_Record2(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#isDirty)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn IsDirty(self: ?*anyopaque) bool {
        return qtc.QSqlTableModel_IsDirty(@ptrCast(self));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#isDirty)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, index: QtC.QModelIndex ```
    pub fn IsDirty2(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QSqlTableModel_IsDirty2(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#editStrategy)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    ///
    /// Returns: ``` qsqltablemodel_enums.EditStrategy ```
    pub fn EditStrategy(self: ?*anyopaque) i32 {
        return qtc.QSqlTableModel_EditStrategy(@ptrCast(self));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#primaryKey)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn PrimaryKey(self: ?*anyopaque) QtC.QSqlIndex {
        return qtc.QSqlTableModel_PrimaryKey(@ptrCast(self));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#database)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn Database(self: ?*anyopaque) QtC.QSqlDatabase {
        return qtc.QSqlTableModel_Database(@ptrCast(self));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#fieldIndex)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, fieldName: []const u8 ```
    pub fn FieldIndex(self: ?*anyopaque, fieldName: []const u8) i32 {
        const fieldName_str = qtc.libqt_string{
            .len = fieldName.len,
            .data = fieldName.ptr,
        };
        return qtc.QSqlTableModel_FieldIndex(@ptrCast(self), fieldName_str);
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#filter)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, allocator: std.mem.Allocator ```
    pub fn Filter(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlTableModel_Filter(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelationaltablemodel.Filter: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#insertRecord)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, row: i32, record: QtC.QSqlRecord ```
    pub fn InsertRecord(self: ?*anyopaque, row: i32, record: ?*anyopaque) bool {
        return qtc.QSqlTableModel_InsertRecord(@ptrCast(self), @intCast(row), @ptrCast(record));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#setRecord)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, row: i32, record: QtC.QSqlRecord ```
    pub fn SetRecord(self: ?*anyopaque, row: i32, record: ?*anyopaque) bool {
        return qtc.QSqlTableModel_SetRecord(@ptrCast(self), @intCast(row), @ptrCast(record));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#submitAll)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn SubmitAll(self: ?*anyopaque) bool {
        return qtc.QSqlTableModel_SubmitAll(@ptrCast(self));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#revertAll)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn RevertAll(self: ?*anyopaque) void {
        qtc.QSqlTableModel_RevertAll(@ptrCast(self));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#primeInsert)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, row: i32, record: QtC.QSqlRecord ```
    pub fn PrimeInsert(self: ?*anyopaque, row: i32, record: ?*anyopaque) void {
        qtc.QSqlTableModel_PrimeInsert(@ptrCast(self), @intCast(row), @ptrCast(record));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#primeInsert)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, row: i32, record: QtC.QSqlRecord) callconv(.c) void ```
    pub fn OnPrimeInsert(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlTableModel_Connect_PrimeInsert(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#beforeInsert)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, record: QtC.QSqlRecord ```
    pub fn BeforeInsert(self: ?*anyopaque, record: ?*anyopaque) void {
        qtc.QSqlTableModel_BeforeInsert(@ptrCast(self), @ptrCast(record));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#beforeInsert)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, record: QtC.QSqlRecord) callconv(.c) void ```
    pub fn OnBeforeInsert(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlTableModel_Connect_BeforeInsert(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#beforeUpdate)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, row: i32, record: QtC.QSqlRecord ```
    pub fn BeforeUpdate(self: ?*anyopaque, row: i32, record: ?*anyopaque) void {
        qtc.QSqlTableModel_BeforeUpdate(@ptrCast(self), @intCast(row), @ptrCast(record));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#beforeUpdate)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, row: i32, record: QtC.QSqlRecord) callconv(.c) void ```
    pub fn OnBeforeUpdate(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlTableModel_Connect_BeforeUpdate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#beforeDelete)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, row: i32 ```
    pub fn BeforeDelete(self: ?*anyopaque, row: i32) void {
        qtc.QSqlTableModel_BeforeDelete(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#beforeDelete)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, row: i32) callconv(.c) void ```
    pub fn OnBeforeDelete(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSqlTableModel_Connect_BeforeDelete(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#setQuery)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, query: QtC.QSqlQuery ```
    pub fn SetQuery(self: ?*anyopaque, query: ?*anyopaque) void {
        qtc.QSqlQueryModel_SetQuery(@ptrCast(self), @ptrCast(query));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#setQuery)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, query: []const u8 ```
    pub fn SetQuery2(self: ?*anyopaque, query: []const u8) void {
        const query_str = qtc.libqt_string{
            .len = query.len,
            .data = query.ptr,
        };
        qtc.QSqlQueryModel_SetQuery2(@ptrCast(self), query_str);
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#query)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn Query(self: ?*anyopaque) QtC.QSqlQuery {
        return qtc.QSqlQueryModel_Query(@ptrCast(self));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#lastError)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn LastError(self: ?*anyopaque) QtC.QSqlError {
        return qtc.QSqlQueryModel_LastError(@ptrCast(self));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#setQuery)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, query: []const u8, db: QtC.QSqlDatabase ```
    pub fn SetQuery22(self: ?*anyopaque, query: []const u8, db: ?*anyopaque) void {
        const query_str = qtc.libqt_string{
            .len = query.len,
            .data = query.ptr,
        };
        qtc.QSqlQueryModel_SetQuery22(@ptrCast(self), query_str, @ptrCast(db));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#query)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, param1: QtC.Disambiguated_t ```
    pub fn Query1(self: ?*anyopaque, param1: QtC.Disambiguated_t) QtC.QSqlQuery {
        return qtc.QSqlQueryModel_Query1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, row: i32, column: i32 ```
    pub fn HasIndex(self: ?*anyopaque, row: i32, column: i32) bool {
        return qtc.QAbstractItemModel_HasIndex(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, child: QtC.QModelIndex ```
    pub fn Parent(self: ?*anyopaque, child: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractItemModel_Parent(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, child: QtC.QModelIndex) callconv(.c) QtC.QModelIndex ```
    pub fn OnParent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QAbstractItemModel_OnParent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, child: QtC.QModelIndex ```
    pub fn QBaseParent(self: ?*anyopaque, child: ?*anyopaque) QtC.QModelIndex {
        return qtc.QAbstractItemModel_QBaseParent(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex ```
    pub fn HasChildren(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_HasChildren(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnHasChildren(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractItemModel_OnHasChildren(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex ```
    pub fn QBaseHasChildren(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_QBaseHasChildren(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, row: i32 ```
    pub fn InsertRow(self: ?*anyopaque, row: i32) bool {
        return qtc.QAbstractItemModel_InsertRow(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, column: i32 ```
    pub fn InsertColumn(self: ?*anyopaque, column: i32) bool {
        return qtc.QAbstractItemModel_InsertColumn(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, row: i32 ```
    pub fn RemoveRow(self: ?*anyopaque, row: i32) bool {
        return qtc.QAbstractItemModel_RemoveRow(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, column: i32 ```
    pub fn RemoveColumn(self: ?*anyopaque, column: i32) bool {
        return qtc.QAbstractItemModel_RemoveColumn(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, sourceParent: QtC.QModelIndex, sourceRow: i32, destinationParent: QtC.QModelIndex, destinationChild: i32 ```
    pub fn MoveRow(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QAbstractItemModel_MoveRow(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceRow), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, sourceParent: QtC.QModelIndex, sourceColumn: i32, destinationParent: QtC.QModelIndex, destinationChild: i32 ```
    pub fn MoveColumn(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceColumn: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QAbstractItemModel_MoveColumn(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceColumn), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, index: QtC.QModelIndex ```
    pub fn CheckIndex(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_CheckIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, topLeft: QtC.QModelIndex, bottomRight: QtC.QModelIndex ```
    pub fn DataChanged(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque) void {
        qtc.QAbstractItemModel_DataChanged(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, topLeft: QtC.QModelIndex, bottomRight: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_DataChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, orientation: qnamespace_enums.Orientation, first: i32, last: i32 ```
    pub fn HeaderDataChanged(self: ?*anyopaque, orientation: i32, first: i32, last: i32) void {
        qtc.QAbstractItemModel_HeaderDataChanged(@ptrCast(self), @intCast(orientation), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, orientation: qnamespace_enums.Orientation, first: i32, last: i32) callconv(.c) void ```
    pub fn OnHeaderDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_HeaderDataChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn LayoutChanged(self: ?*anyopaque) void {
        qtc.QAbstractItemModel_LayoutChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel) callconv(.c) void ```
    pub fn OnLayoutChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn LayoutAboutToBeChanged(self: ?*anyopaque) void {
        qtc.QAbstractItemModel_LayoutAboutToBeChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel) callconv(.c) void ```
    pub fn OnLayoutAboutToBeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, row: i32, column: i32, parent: QtC.QModelIndex ```
    pub fn HasIndex3(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_HasIndex3(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, row: i32, parent: QtC.QModelIndex ```
    pub fn InsertRow2(self: ?*anyopaque, row: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_InsertRow2(@ptrCast(self), @intCast(row), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, column: i32, parent: QtC.QModelIndex ```
    pub fn InsertColumn2(self: ?*anyopaque, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_InsertColumn2(@ptrCast(self), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, row: i32, parent: QtC.QModelIndex ```
    pub fn RemoveRow2(self: ?*anyopaque, row: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_RemoveRow2(@ptrCast(self), @intCast(row), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, column: i32, parent: QtC.QModelIndex ```
    pub fn RemoveColumn2(self: ?*anyopaque, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_RemoveColumn2(@ptrCast(self), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, index: QtC.QModelIndex, options: flag of qabstractitemmodel_enums.CheckIndexOption ```
    pub fn CheckIndex2(self: ?*anyopaque, index: ?*anyopaque, options: i32) bool {
        return qtc.QAbstractItemModel_CheckIndex2(@ptrCast(self), @ptrCast(index), @intCast(options));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, topLeft: QtC.QModelIndex, bottomRight: QtC.QModelIndex, roles: []i32 ```
    pub fn DataChanged3(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque, roles: []i32) void {
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.QAbstractItemModel_DataChanged3(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight), roles_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, topLeft: QtC.QModelIndex, bottomRight: QtC.QModelIndex, roles: [*:-1]i32) callconv(.c) void ```
    pub fn OnDataChanged3(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, [*:-1]i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_DataChanged3(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, parents: []QtC.QPersistentModelIndex ```
    pub fn LayoutChanged1(self: ?*anyopaque, parents: []QtC.QPersistentModelIndex) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutChanged1(@ptrCast(self), parents_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, parents: [*]QtC.QPersistentModelIndex) callconv(.c) void ```
    pub fn OnLayoutChanged1(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]QtC.QPersistentModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, parents: []QtC.QPersistentModelIndex, hint: qabstractitemmodel_enums.LayoutChangeHint ```
    pub fn LayoutChanged2(self: ?*anyopaque, parents: []QtC.QPersistentModelIndex, hint: i32) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutChanged2(@ptrCast(self), parents_list, @intCast(hint));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, parents: [*]QtC.QPersistentModelIndex, hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void ```
    pub fn OnLayoutChanged2(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]QtC.QPersistentModelIndex, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, parents: []QtC.QPersistentModelIndex ```
    pub fn LayoutAboutToBeChanged1(self: ?*anyopaque, parents: []QtC.QPersistentModelIndex) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutAboutToBeChanged1(@ptrCast(self), parents_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, parents: [*]QtC.QPersistentModelIndex) callconv(.c) void ```
    pub fn OnLayoutAboutToBeChanged1(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]QtC.QPersistentModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, parents: []QtC.QPersistentModelIndex, hint: qabstractitemmodel_enums.LayoutChangeHint ```
    pub fn LayoutAboutToBeChanged2(self: ?*anyopaque, parents: []QtC.QPersistentModelIndex, hint: i32) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutAboutToBeChanged2(@ptrCast(self), parents_list, @intCast(hint));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, parents: [*]QtC.QPersistentModelIndex, hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void ```
    pub fn OnLayoutAboutToBeChanged2(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]QtC.QPersistentModelIndex, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrelationaltablemodel.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, name: []const u8 ```
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
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qsqlrelationaltablemodel.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, obj: QtC.QObject ```
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
    /// ``` self: QtC.QSqlRelationalTableModel, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.QSqlRelationalTableModel, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#flags)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, index: QtC.QModelIndex ```
    ///
    /// Returns: ``` flag of qnamespace_enums.ItemFlag ```
    pub fn Flags(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.QSqlRelationalTableModel_Flags(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#flags)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, index: QtC.QModelIndex ```
    ///
    /// Returns: ``` flag of qnamespace_enums.ItemFlag ```
    pub fn QBaseFlags(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.QSqlRelationalTableModel_QBaseFlags(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#flags)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, index: QtC.QModelIndex) callconv(.c) i32 ```
    pub fn OnFlags(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QSqlRelationalTableModel_OnFlags(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#clearItemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, index: QtC.QModelIndex ```
    pub fn ClearItemData(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_ClearItemData(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#clearItemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, index: QtC.QModelIndex ```
    pub fn QBaseClearItemData(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_QBaseClearItemData(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#clearItemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, index: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnClearItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnClearItemData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#headerData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, section: i32, orientation: qnamespace_enums.Orientation, role: i32 ```
    pub fn HeaderData(self: ?*anyopaque, section: i32, orientation: i32, role: i32) QtC.QVariant {
        return qtc.QSqlRelationalTableModel_HeaderData(@ptrCast(self), @intCast(section), @intCast(orientation), @intCast(role));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#headerData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, section: i32, orientation: qnamespace_enums.Orientation, role: i32 ```
    pub fn QBaseHeaderData(self: ?*anyopaque, section: i32, orientation: i32, role: i32) QtC.QVariant {
        return qtc.QSqlRelationalTableModel_QBaseHeaderData(@ptrCast(self), @intCast(section), @intCast(orientation), @intCast(role));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#headerData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, section: i32, orientation: qnamespace_enums.Orientation, role: i32) callconv(.c) QtC.QVariant ```
    pub fn OnHeaderData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) QtC.QVariant) void {
        qtc.QSqlRelationalTableModel_OnHeaderData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#setEditStrategy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, strategy: qsqltablemodel_enums.EditStrategy ```
    pub fn SetEditStrategy(self: ?*anyopaque, strategy: i32) void {
        qtc.QSqlRelationalTableModel_SetEditStrategy(@ptrCast(self), @intCast(strategy));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#setEditStrategy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, strategy: qsqltablemodel_enums.EditStrategy ```
    pub fn QBaseSetEditStrategy(self: ?*anyopaque, strategy: i32) void {
        qtc.QSqlRelationalTableModel_QBaseSetEditStrategy(@ptrCast(self), @intCast(strategy));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#setEditStrategy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, strategy: qsqltablemodel_enums.EditStrategy) callconv(.c) void ```
    pub fn OnSetEditStrategy(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnSetEditStrategy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#sort)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, column: i32, order: qnamespace_enums.SortOrder ```
    pub fn Sort(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QSqlRelationalTableModel_Sort(@ptrCast(self), @intCast(column), @intCast(order));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#sort)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, column: i32, order: qnamespace_enums.SortOrder ```
    pub fn QBaseSort(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QSqlRelationalTableModel_QBaseSort(@ptrCast(self), @intCast(column), @intCast(order));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#sort)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, column: i32, order: qnamespace_enums.SortOrder) callconv(.c) void ```
    pub fn OnSort(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnSort(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#setSort)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, column: i32, order: qnamespace_enums.SortOrder ```
    pub fn SetSort(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QSqlRelationalTableModel_SetSort(@ptrCast(self), @intCast(column), @intCast(order));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#setSort)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, column: i32, order: qnamespace_enums.SortOrder ```
    pub fn QBaseSetSort(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QSqlRelationalTableModel_QBaseSetSort(@ptrCast(self), @intCast(column), @intCast(order));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#setSort)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, column: i32, order: qnamespace_enums.SortOrder) callconv(.c) void ```
    pub fn OnSetSort(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnSetSort(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#setFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, filter: []const u8 ```
    pub fn SetFilter(self: ?*anyopaque, filter: []const u8) void {
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        qtc.QSqlRelationalTableModel_SetFilter(@ptrCast(self), filter_str);
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#setFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, filter: []const u8 ```
    pub fn QBaseSetFilter(self: ?*anyopaque, filter: []const u8) void {
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        qtc.QSqlRelationalTableModel_QBaseSetFilter(@ptrCast(self), filter_str);
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#setFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, filter: [*:0]const u8) callconv(.c) void ```
    pub fn OnSetFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnSetFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#rowCount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex ```
    pub fn RowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QSqlRelationalTableModel_RowCount(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#rowCount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex ```
    pub fn QBaseRowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QSqlRelationalTableModel_QBaseRowCount(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#rowCount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex) callconv(.c) i32 ```
    pub fn OnRowCount(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QSqlRelationalTableModel_OnRowCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#removeRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, row: i32, count: i32, parent: QtC.QModelIndex ```
    pub fn RemoveRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_RemoveRows(@ptrCast(self), @intCast(row), @intCast(count), @ptrCast(parent));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#removeRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, row: i32, count: i32, parent: QtC.QModelIndex ```
    pub fn QBaseRemoveRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_QBaseRemoveRows(@ptrCast(self), @intCast(row), @intCast(count), @ptrCast(parent));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#removeRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, row: i32, count: i32, parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnRemoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnRemoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#insertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, row: i32, count: i32, parent: QtC.QModelIndex ```
    pub fn InsertRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_InsertRows(@ptrCast(self), @intCast(row), @intCast(count), @ptrCast(parent));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#insertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, row: i32, count: i32, parent: QtC.QModelIndex ```
    pub fn QBaseInsertRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_QBaseInsertRows(@ptrCast(self), @intCast(row), @intCast(count), @ptrCast(parent));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#insertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, row: i32, count: i32, parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnInsertRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnInsertRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#selectRow)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, row: i32 ```
    pub fn SelectRow(self: ?*anyopaque, row: i32) bool {
        return qtc.QSqlRelationalTableModel_SelectRow(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#selectRow)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, row: i32 ```
    pub fn QBaseSelectRow(self: ?*anyopaque, row: i32) bool {
        return qtc.QSqlRelationalTableModel_QBaseSelectRow(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#selectRow)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, row: i32) callconv(.c) bool ```
    pub fn OnSelectRow(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnSelectRow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#submit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn Submit(self: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_Submit(@ptrCast(self));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#submit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn QBaseSubmit(self: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_QBaseSubmit(@ptrCast(self));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#submit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn () callconv(.c) bool ```
    pub fn OnSubmit(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnSubmit(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#revert)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn Revert(self: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_Revert(@ptrCast(self));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#revert)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn QBaseRevert(self: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_QBaseRevert(@ptrCast(self));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#revert)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn () callconv(.c) void ```
    pub fn OnRevert(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnRevert(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#deleteRowFromTable)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, row: i32 ```
    pub fn DeleteRowFromTable(self: ?*anyopaque, row: i32) bool {
        return qtc.QSqlRelationalTableModel_DeleteRowFromTable(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#deleteRowFromTable)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, row: i32 ```
    pub fn QBaseDeleteRowFromTable(self: ?*anyopaque, row: i32) bool {
        return qtc.QSqlRelationalTableModel_QBaseDeleteRowFromTable(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#deleteRowFromTable)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, row: i32) callconv(.c) bool ```
    pub fn OnDeleteRowFromTable(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnDeleteRowFromTable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#indexInQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, item: QtC.QModelIndex ```
    pub fn IndexInQuery(self: ?*anyopaque, item: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSqlRelationalTableModel_IndexInQuery(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#indexInQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, item: QtC.QModelIndex ```
    pub fn QBaseIndexInQuery(self: ?*anyopaque, item: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSqlRelationalTableModel_QBaseIndexInQuery(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#indexInQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, item: QtC.QModelIndex) callconv(.c) QtC.QModelIndex ```
    pub fn OnIndexInQuery(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QSqlRelationalTableModel_OnIndexInQuery(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#columnCount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex ```
    pub fn ColumnCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QSqlRelationalTableModel_ColumnCount(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#columnCount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex ```
    pub fn QBaseColumnCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QSqlRelationalTableModel_QBaseColumnCount(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#columnCount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex) callconv(.c) i32 ```
    pub fn OnColumnCount(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QSqlRelationalTableModel_OnColumnCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#setHeaderData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, section: i32, orientation: qnamespace_enums.Orientation, value: QtC.QVariant, role: i32 ```
    pub fn SetHeaderData(self: ?*anyopaque, section: i32, orientation: i32, value: ?*anyopaque, role: i32) bool {
        return qtc.QSqlRelationalTableModel_SetHeaderData(@ptrCast(self), @intCast(section), @intCast(orientation), @ptrCast(value), @intCast(role));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#setHeaderData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, section: i32, orientation: qnamespace_enums.Orientation, value: QtC.QVariant, role: i32 ```
    pub fn QBaseSetHeaderData(self: ?*anyopaque, section: i32, orientation: i32, value: ?*anyopaque, role: i32) bool {
        return qtc.QSqlRelationalTableModel_QBaseSetHeaderData(@ptrCast(self), @intCast(section), @intCast(orientation), @ptrCast(value), @intCast(role));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#setHeaderData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, section: i32, orientation: qnamespace_enums.Orientation, value: QtC.QVariant, role: i32) callconv(.c) bool ```
    pub fn OnSetHeaderData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnSetHeaderData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#insertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, column: i32, count: i32, parent: QtC.QModelIndex ```
    pub fn InsertColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_InsertColumns(@ptrCast(self), @intCast(column), @intCast(count), @ptrCast(parent));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#insertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, column: i32, count: i32, parent: QtC.QModelIndex ```
    pub fn QBaseInsertColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_QBaseInsertColumns(@ptrCast(self), @intCast(column), @intCast(count), @ptrCast(parent));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#insertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, column: i32, count: i32, parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnInsertColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnInsertColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#fetchMore)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex ```
    pub fn FetchMore(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_FetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#fetchMore)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex ```
    pub fn QBaseFetchMore(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_QBaseFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#fetchMore)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnFetchMore(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnFetchMore(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#canFetchMore)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex ```
    pub fn CanFetchMore(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_CanFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#canFetchMore)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex ```
    pub fn QBaseCanFetchMore(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_QBaseCanFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#canFetchMore)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnCanFetchMore(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnCanFetchMore(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#roleNames)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, allocator: std.mem.Allocator ```
    pub fn RoleNames(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_u8 {
        const _map: qtc.libqt_map = qtc.QSqlRelationalTableModel_RoleNames(@ptrCast(self));
        var _ret: map_i32_u8 = .empty;
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*][]u8 = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.put(allocator, _key, _value) catch @panic("qsqlrelationaltablemodel.RoleNames: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#roleNames)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, allocator: std.mem.Allocator ```
    pub fn QBaseRoleNames(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_u8 {
        const _map: qtc.libqt_map = qtc.QSqlRelationalTableModel_QBaseRoleNames(@ptrCast(self));
        var _ret: map_i32_u8 = .empty;
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*][]u8 = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.put(allocator, _key, _value) catch @panic("qsqlrelationaltablemodel.RoleNames: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#roleNames)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn () callconv(.c) map_i32_u8 ```
    pub fn OnRoleNames(self: ?*anyopaque, callback: *const fn () callconv(.c) map_i32_u8) void {
        qtc.QSqlRelationalTableModel_OnRoleNames(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#queryChange)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn QueryChange(self: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_QueryChange(@ptrCast(self));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#queryChange)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn QBaseQueryChange(self: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_QBaseQueryChange(@ptrCast(self));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#queryChange)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn () callconv(.c) void ```
    pub fn OnQueryChange(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnQueryChange(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttablemodel.html#index)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, row: i32, column: i32, parent: QtC.QModelIndex ```
    pub fn Index(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSqlRelationalTableModel_Index(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttablemodel.html#index)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, row: i32, column: i32, parent: QtC.QModelIndex ```
    pub fn QBaseIndex(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSqlRelationalTableModel_QBaseIndex(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttablemodel.html#index)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, row: i32, column: i32, parent: QtC.QModelIndex) callconv(.c) QtC.QModelIndex ```
    pub fn OnIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QSqlRelationalTableModel_OnIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttablemodel.html#sibling)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, row: i32, column: i32, idx: QtC.QModelIndex ```
    pub fn Sibling(self: ?*anyopaque, row: i32, column: i32, idx: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSqlRelationalTableModel_Sibling(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(idx));
    }

    /// Inherited from QAbstractTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttablemodel.html#sibling)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, row: i32, column: i32, idx: QtC.QModelIndex ```
    pub fn QBaseSibling(self: ?*anyopaque, row: i32, column: i32, idx: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSqlRelationalTableModel_QBaseSibling(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(idx));
    }

    /// Inherited from QAbstractTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttablemodel.html#sibling)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, row: i32, column: i32, idx: QtC.QModelIndex) callconv(.c) QtC.QModelIndex ```
    pub fn OnSibling(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QSqlRelationalTableModel_OnSibling(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttablemodel.html#dropMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, data: QtC.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QtC.QModelIndex ```
    pub fn DropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_DropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttablemodel.html#dropMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, data: QtC.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QtC.QModelIndex ```
    pub fn QBaseDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_QBaseDropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttablemodel.html#dropMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, data: QtC.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnDropMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnDropMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, index: QtC.QModelIndex, allocator: std.mem.Allocator ```
    pub fn ItemData(self: ?*anyopaque, index: ?*anyopaque, allocator: std.mem.Allocator) map_i32_qtcqvariant {
        const _map: qtc.libqt_map = qtc.QSqlRelationalTableModel_ItemData(@ptrCast(self), @ptrCast(index));
        var _ret: map_i32_qtcqvariant = .empty;
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
            _ret.put(allocator, _key, _value) catch @panic("qsqlrelationaltablemodel.ItemData: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, index: QtC.QModelIndex, allocator: std.mem.Allocator ```
    pub fn QBaseItemData(self: ?*anyopaque, index: ?*anyopaque, allocator: std.mem.Allocator) map_i32_qtcqvariant {
        const _map: qtc.libqt_map = qtc.QSqlRelationalTableModel_QBaseItemData(@ptrCast(self), @ptrCast(index));
        var _ret: map_i32_qtcqvariant = .empty;
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
            _ret.put(allocator, _key, _value) catch @panic("qsqlrelationaltablemodel.ItemData: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, index: QtC.QModelIndex) callconv(.c) map_i32_qtcqvariant ```
    pub fn OnItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) map_i32_qtcqvariant) void {
        qtc.QSqlRelationalTableModel_OnItemData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, index: QtC.QModelIndex, roles: map_i32_qtcqvariant, allocator: std.mem.Allocator ```
    pub fn SetItemData(self: ?*anyopaque, index: ?*anyopaque, roles: map_i32_qtcqvariant, allocator: std.mem.Allocator) bool {
        const roles_keys = allocator.alloc(i32, roles.count()) catch @panic("qsqlrelationaltablemodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles.count()) catch @panic("qsqlrelationaltablemodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_values);
        var i: usize = 0;
        var roles_it = roles.iterator();
        while (roles_it.next()) |entry| {
            const key = entry.key_ptr.*;
            roles_keys[i] = @intCast(key);
            roles_values[i] = entry.value_ptr.*;
            i += 1;
        }
        const roles_map = qtc.libqt_map{
            .len = roles.count(),
            .keys = @ptrCast(roles_keys.ptr),
            .values = @ptrCast(roles_values.ptr),
        };
        return qtc.QSqlRelationalTableModel_SetItemData(@ptrCast(self), @ptrCast(index), roles_map);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, index: QtC.QModelIndex, roles: map_i32_qtcqvariant, allocator: std.mem.Allocator ```
    pub fn QBaseSetItemData(self: ?*anyopaque, index: ?*anyopaque, roles: map_i32_qtcqvariant, allocator: std.mem.Allocator) bool {
        const roles_keys = allocator.alloc(i32, roles.count()) catch @panic("qsqlrelationaltablemodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles.count()) catch @panic("qsqlrelationaltablemodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_values);
        var i: usize = 0;
        var roles_it = roles.iterator();
        while (roles_it.next()) |entry| {
            const key = entry.key_ptr.*;
            roles_keys[i] = @intCast(key);
            roles_values[i] = entry.value_ptr.*;
            i += 1;
        }
        const roles_map = qtc.libqt_map{
            .len = roles.count(),
            .keys = @ptrCast(roles_keys.ptr),
            .values = @ptrCast(roles_values.ptr),
        };
        return qtc.QSqlRelationalTableModel_QBaseSetItemData(@ptrCast(self), @ptrCast(index), roles_map);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, index: QtC.QModelIndex, roles: map_i32_qtcqvariant) callconv(.c) bool ```
    pub fn OnSetItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, map_i32_qtcqvariant) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnSetItemData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, allocator: std.mem.Allocator ```
    pub fn MimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlRelationalTableModel_MimeTypes(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, allocator: std.mem.Allocator ```
    pub fn QBaseMimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlRelationalTableModel_QBaseMimeTypes(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn () callconv(.c) [*][*:0]const u8 ```
    pub fn OnMimeTypes(self: ?*anyopaque, callback: *const fn () callconv(.c) [*][*:0]const u8) void {
        qtc.QSqlRelationalTableModel_OnMimeTypes(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, indexes: []QtC.QModelIndex ```
    pub fn MimeData(self: ?*anyopaque, indexes: []QtC.QModelIndex) QtC.QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return qtc.QSqlRelationalTableModel_MimeData(@ptrCast(self), indexes_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, indexes: []QtC.QModelIndex ```
    pub fn QBaseMimeData(self: ?*anyopaque, indexes: []QtC.QModelIndex) QtC.QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return qtc.QSqlRelationalTableModel_QBaseMimeData(@ptrCast(self), indexes_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, indexes: [*]QtC.QModelIndex) callconv(.c) QtC.QMimeData ```
    pub fn OnMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]QtC.QModelIndex) callconv(.c) QtC.QMimeData) void {
        qtc.QSqlRelationalTableModel_OnMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, data: QtC.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QtC.QModelIndex ```
    pub fn CanDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_CanDropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, data: QtC.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QtC.QModelIndex ```
    pub fn QBaseCanDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_QBaseCanDropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, data: QtC.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnCanDropMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnCanDropMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    ///
    /// Returns: ``` flag of qnamespace_enums.DropAction ```
    pub fn SupportedDropActions(self: ?*anyopaque) i32 {
        return qtc.QSqlRelationalTableModel_SupportedDropActions(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    ///
    /// Returns: ``` flag of qnamespace_enums.DropAction ```
    pub fn QBaseSupportedDropActions(self: ?*anyopaque) i32 {
        return qtc.QSqlRelationalTableModel_QBaseSupportedDropActions(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSupportedDropActions(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QSqlRelationalTableModel_OnSupportedDropActions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    ///
    /// Returns: ``` flag of qnamespace_enums.DropAction ```
    pub fn SupportedDragActions(self: ?*anyopaque) i32 {
        return qtc.QSqlRelationalTableModel_SupportedDragActions(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    ///
    /// Returns: ``` flag of qnamespace_enums.DropAction ```
    pub fn QBaseSupportedDragActions(self: ?*anyopaque) i32 {
        return qtc.QSqlRelationalTableModel_QBaseSupportedDragActions(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSupportedDragActions(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QSqlRelationalTableModel_OnSupportedDragActions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, sourceParent: QtC.QModelIndex, sourceRow: i32, count: i32, destinationParent: QtC.QModelIndex, destinationChild: i32 ```
    pub fn MoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QSqlRelationalTableModel_MoveRows(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceRow), @intCast(count), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, sourceParent: QtC.QModelIndex, sourceRow: i32, count: i32, destinationParent: QtC.QModelIndex, destinationChild: i32 ```
    pub fn QBaseMoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QSqlRelationalTableModel_QBaseMoveRows(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceRow), @intCast(count), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, sourceParent: QtC.QModelIndex, sourceRow: i32, count: i32, destinationParent: QtC.QModelIndex, destinationChild: i32) callconv(.c) bool ```
    pub fn OnMoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnMoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, sourceParent: QtC.QModelIndex, sourceColumn: i32, count: i32, destinationParent: QtC.QModelIndex, destinationChild: i32 ```
    pub fn MoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceColumn: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QSqlRelationalTableModel_MoveColumns(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceColumn), @intCast(count), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, sourceParent: QtC.QModelIndex, sourceColumn: i32, count: i32, destinationParent: QtC.QModelIndex, destinationChild: i32 ```
    pub fn QBaseMoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceColumn: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QSqlRelationalTableModel_QBaseMoveColumns(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceColumn), @intCast(count), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, sourceParent: QtC.QModelIndex, sourceColumn: i32, count: i32, destinationParent: QtC.QModelIndex, destinationChild: i32) callconv(.c) bool ```
    pub fn OnMoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnMoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, index: QtC.QModelIndex ```
    pub fn Buddy(self: ?*anyopaque, index: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSqlRelationalTableModel_Buddy(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, index: QtC.QModelIndex ```
    pub fn QBaseBuddy(self: ?*anyopaque, index: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSqlRelationalTableModel_QBaseBuddy(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, index: QtC.QModelIndex) callconv(.c) QtC.QModelIndex ```
    pub fn OnBuddy(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QSqlRelationalTableModel_OnBuddy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, start: QtC.QModelIndex, role: i32, value: QtC.QVariant, hits: i32, flags: flag of qnamespace_enums.MatchFlag, allocator: std.mem.Allocator ```
    pub fn Match(self: ?*anyopaque, start: ?*anyopaque, role: i32, value: ?*anyopaque, hits: i32, flags: i32, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QSqlRelationalTableModel_Match(@ptrCast(self), @ptrCast(start), @intCast(role), @ptrCast(value), @intCast(hits), @intCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("qsqlrelationaltablemodel.Match: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, start: QtC.QModelIndex, role: i32, value: QtC.QVariant, hits: i32, flags: flag of qnamespace_enums.MatchFlag, allocator: std.mem.Allocator ```
    pub fn QBaseMatch(self: ?*anyopaque, start: ?*anyopaque, role: i32, value: ?*anyopaque, hits: i32, flags: i32, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QSqlRelationalTableModel_QBaseMatch(@ptrCast(self), @ptrCast(start), @intCast(role), @ptrCast(value), @intCast(hits), @intCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("qsqlrelationaltablemodel.Match: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, start: QtC.QModelIndex, role: i32, value: QtC.QVariant, hits: i32, flags: flag of qnamespace_enums.MatchFlag) callconv(.c) [*:null]QtC.QModelIndex ```
    pub fn OnMatch(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque, i32, i32) callconv(.c) [*:null]QtC.QModelIndex) void {
        qtc.QSqlRelationalTableModel_OnMatch(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, index: QtC.QModelIndex ```
    pub fn Span(self: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.QSqlRelationalTableModel_Span(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, index: QtC.QModelIndex ```
    pub fn QBaseSpan(self: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.QSqlRelationalTableModel_QBaseSpan(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, index: QtC.QModelIndex) callconv(.c) QtC.QSize ```
    pub fn OnSpan(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QSqlRelationalTableModel_OnSpan(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, index: QtC.QModelIndex, roleDataSpan: QtC.QModelRoleDataSpan ```
    pub fn MultiData(self: ?*anyopaque, index: ?*anyopaque, roleDataSpan: QtC.QModelRoleDataSpan) void {
        qtc.QSqlRelationalTableModel_MultiData(@ptrCast(self), @ptrCast(index), @ptrCast(roleDataSpan));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, index: QtC.QModelIndex, roleDataSpan: QtC.QModelRoleDataSpan ```
    pub fn QBaseMultiData(self: ?*anyopaque, index: ?*anyopaque, roleDataSpan: QtC.QModelRoleDataSpan) void {
        qtc.QSqlRelationalTableModel_QBaseMultiData(@ptrCast(self), @ptrCast(index), @ptrCast(roleDataSpan));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, index: QtC.QModelIndex, roleDataSpan: QtC.QModelRoleDataSpan) callconv(.c) void ```
    pub fn OnMultiData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, QtC.QModelRoleDataSpan) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnMultiData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn ResetInternalData(self: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_ResetInternalData(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn QBaseResetInternalData(self: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_QBaseResetInternalData(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn () callconv(.c) void ```
    pub fn OnResetInternalData(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnResetInternalData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#setPrimaryKey)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, key: QtC.QSqlIndex ```
    pub fn SetPrimaryKey(self: ?*anyopaque, key: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_SetPrimaryKey(@ptrCast(self), @ptrCast(key));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#setPrimaryKey)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, key: QtC.QSqlIndex ```
    pub fn QBaseSetPrimaryKey(self: ?*anyopaque, key: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_QBaseSetPrimaryKey(@ptrCast(self), @ptrCast(key));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#setPrimaryKey)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, key: QtC.QSqlIndex) callconv(.c) void ```
    pub fn OnSetPrimaryKey(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnSetPrimaryKey(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#primaryValues)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, row: i32 ```
    pub fn PrimaryValues(self: ?*anyopaque, row: i32) QtC.QSqlRecord {
        return qtc.QSqlRelationalTableModel_PrimaryValues(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#primaryValues)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, row: i32 ```
    pub fn QBasePrimaryValues(self: ?*anyopaque, row: i32) QtC.QSqlRecord {
        return qtc.QSqlRelationalTableModel_QBasePrimaryValues(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QSqlTableModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqltablemodel.html#primaryValues)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, row: i32) callconv(.c) QtC.QSqlRecord ```
    pub fn OnPrimaryValues(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QSqlRecord) void {
        qtc.QSqlRelationalTableModel_OnPrimaryValues(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginInsertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex, first: i32, last: i32 ```
    pub fn BeginInsertRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QSqlRelationalTableModel_BeginInsertRows(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginInsertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex, first: i32, last: i32 ```
    pub fn QBaseBeginInsertRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QSqlRelationalTableModel_QBaseBeginInsertRows(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginInsertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnBeginInsertRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnBeginInsertRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#endInsertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn EndInsertRows(self: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_EndInsertRows(@ptrCast(self));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#endInsertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn QBaseEndInsertRows(self: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_QBaseEndInsertRows(@ptrCast(self));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#endInsertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn () callconv(.c) void ```
    pub fn OnEndInsertRows(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnEndInsertRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex, first: i32, last: i32 ```
    pub fn BeginRemoveRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QSqlRelationalTableModel_BeginRemoveRows(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex, first: i32, last: i32 ```
    pub fn QBaseBeginRemoveRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QSqlRelationalTableModel_QBaseBeginRemoveRows(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnBeginRemoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnBeginRemoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#endRemoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn EndRemoveRows(self: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_EndRemoveRows(@ptrCast(self));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#endRemoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn QBaseEndRemoveRows(self: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_QBaseEndRemoveRows(@ptrCast(self));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#endRemoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn () callconv(.c) void ```
    pub fn OnEndRemoveRows(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnEndRemoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex, first: i32, last: i32 ```
    pub fn BeginInsertColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QSqlRelationalTableModel_BeginInsertColumns(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex, first: i32, last: i32 ```
    pub fn QBaseBeginInsertColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QSqlRelationalTableModel_QBaseBeginInsertColumns(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnBeginInsertColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnBeginInsertColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#endInsertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn EndInsertColumns(self: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_EndInsertColumns(@ptrCast(self));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#endInsertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn QBaseEndInsertColumns(self: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_QBaseEndInsertColumns(@ptrCast(self));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#endInsertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn () callconv(.c) void ```
    pub fn OnEndInsertColumns(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnEndInsertColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex, first: i32, last: i32 ```
    pub fn BeginRemoveColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QSqlRelationalTableModel_BeginRemoveColumns(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex, first: i32, last: i32 ```
    pub fn QBaseBeginRemoveColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QSqlRelationalTableModel_QBaseBeginRemoveColumns(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnBeginRemoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnBeginRemoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn EndRemoveColumns(self: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_EndRemoveColumns(@ptrCast(self));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn QBaseEndRemoveColumns(self: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_QBaseEndRemoveColumns(@ptrCast(self));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn () callconv(.c) void ```
    pub fn OnEndRemoveColumns(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnEndRemoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginResetModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn BeginResetModel(self: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_BeginResetModel(@ptrCast(self));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginResetModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn QBaseBeginResetModel(self: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_QBaseBeginResetModel(@ptrCast(self));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginResetModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn () callconv(.c) void ```
    pub fn OnBeginResetModel(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnBeginResetModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#endResetModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn EndResetModel(self: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_EndResetModel(@ptrCast(self));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#endResetModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn QBaseEndResetModel(self: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_QBaseEndResetModel(@ptrCast(self));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#endResetModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn () callconv(.c) void ```
    pub fn OnEndResetModel(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnEndResetModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#setLastError)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, errorVal: QtC.QSqlError ```
    pub fn SetLastError(self: ?*anyopaque, errorVal: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_SetLastError(@ptrCast(self), @ptrCast(errorVal));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#setLastError)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, errorVal: QtC.QSqlError ```
    pub fn QBaseSetLastError(self: ?*anyopaque, errorVal: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_QBaseSetLastError(@ptrCast(self), @ptrCast(errorVal));
    }

    /// Inherited from QSqlQueryModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlquerymodel.html#setLastError)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, errorVal: QtC.QSqlError) callconv(.c) void ```
    pub fn OnSetLastError(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnSetLastError(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, row: i32, column: i32 ```
    pub fn CreateIndex(self: ?*anyopaque, row: i32, column: i32) QtC.QModelIndex {
        return qtc.QSqlRelationalTableModel_CreateIndex(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, row: i32, column: i32 ```
    pub fn QBaseCreateIndex(self: ?*anyopaque, row: i32, column: i32) QtC.QModelIndex {
        return qtc.QSqlRelationalTableModel_QBaseCreateIndex(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, row: i32, column: i32) callconv(.c) QtC.QModelIndex ```
    pub fn OnCreateIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) QtC.QModelIndex) void {
        qtc.QSqlRelationalTableModel_OnCreateIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, indexes: []QtC.QModelIndex, stream: QtC.QDataStream ```
    pub fn EncodeData(self: ?*anyopaque, indexes: []QtC.QModelIndex, stream: ?*anyopaque) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        qtc.QSqlRelationalTableModel_EncodeData(@ptrCast(self), indexes_list, @ptrCast(stream));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, indexes: []QtC.QModelIndex, stream: QtC.QDataStream ```
    pub fn QBaseEncodeData(self: ?*anyopaque, indexes: []QtC.QModelIndex, stream: ?*anyopaque) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        qtc.QSqlRelationalTableModel_QBaseEncodeData(@ptrCast(self), indexes_list, @ptrCast(stream));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, indexes: [*]QtC.QModelIndex, stream: QtC.QDataStream) callconv(.c) void ```
    pub fn OnEncodeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]QtC.QModelIndex, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnEncodeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, row: i32, column: i32, parent: QtC.QModelIndex, stream: QtC.QDataStream ```
    pub fn DecodeData(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque, stream: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_DecodeData(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(parent), @ptrCast(stream));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, row: i32, column: i32, parent: QtC.QModelIndex, stream: QtC.QDataStream ```
    pub fn QBaseDecodeData(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque, stream: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_QBaseDecodeData(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(parent), @ptrCast(stream));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, row: i32, column: i32, parent: QtC.QModelIndex, stream: QtC.QDataStream) callconv(.c) bool ```
    pub fn OnDecodeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnDecodeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, sourceParent: QtC.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QtC.QModelIndex, destinationRow: i32 ```
    pub fn BeginMoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationRow: i32) bool {
        return qtc.QSqlRelationalTableModel_BeginMoveRows(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceFirst), @intCast(sourceLast), @ptrCast(destinationParent), @intCast(destinationRow));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, sourceParent: QtC.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QtC.QModelIndex, destinationRow: i32 ```
    pub fn QBaseBeginMoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationRow: i32) bool {
        return qtc.QSqlRelationalTableModel_QBaseBeginMoveRows(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceFirst), @intCast(sourceLast), @ptrCast(destinationParent), @intCast(destinationRow));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, sourceParent: QtC.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QtC.QModelIndex, destinationRow: i32) callconv(.c) bool ```
    pub fn OnBeginMoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnBeginMoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn EndMoveRows(self: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_EndMoveRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn QBaseEndMoveRows(self: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_QBaseEndMoveRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn () callconv(.c) void ```
    pub fn OnEndMoveRows(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnEndMoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, sourceParent: QtC.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QtC.QModelIndex, destinationColumn: i32 ```
    pub fn BeginMoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationColumn: i32) bool {
        return qtc.QSqlRelationalTableModel_BeginMoveColumns(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceFirst), @intCast(sourceLast), @ptrCast(destinationParent), @intCast(destinationColumn));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, sourceParent: QtC.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QtC.QModelIndex, destinationColumn: i32 ```
    pub fn QBaseBeginMoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationColumn: i32) bool {
        return qtc.QSqlRelationalTableModel_QBaseBeginMoveColumns(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceFirst), @intCast(sourceLast), @ptrCast(destinationParent), @intCast(destinationColumn));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, sourceParent: QtC.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QtC.QModelIndex, destinationColumn: i32) callconv(.c) bool ```
    pub fn OnBeginMoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnBeginMoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn EndMoveColumns(self: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_EndMoveColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn QBaseEndMoveColumns(self: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_QBaseEndMoveColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn () callconv(.c) void ```
    pub fn OnEndMoveColumns(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnEndMoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, from: QtC.QModelIndex, to: QtC.QModelIndex ```
    pub fn ChangePersistentIndex(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_ChangePersistentIndex(@ptrCast(self), @ptrCast(from), @ptrCast(to));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, from: QtC.QModelIndex, to: QtC.QModelIndex ```
    pub fn QBaseChangePersistentIndex(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_QBaseChangePersistentIndex(@ptrCast(self), @ptrCast(from), @ptrCast(to));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, from: QtC.QModelIndex, to: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnChangePersistentIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnChangePersistentIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, from: []QtC.QModelIndex, to: []QtC.QModelIndex ```
    pub fn ChangePersistentIndexList(self: ?*anyopaque, from: []QtC.QModelIndex, to: []QtC.QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.QSqlRelationalTableModel_ChangePersistentIndexList(@ptrCast(self), from_list, to_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, from: []QtC.QModelIndex, to: []QtC.QModelIndex ```
    pub fn QBaseChangePersistentIndexList(self: ?*anyopaque, from: []QtC.QModelIndex, to: []QtC.QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.QSqlRelationalTableModel_QBaseChangePersistentIndexList(@ptrCast(self), from_list, to_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, from: [*]QtC.QModelIndex, to: [*]QtC.QModelIndex) callconv(.c) void ```
    pub fn OnChangePersistentIndexList(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]QtC.QModelIndex, [*]QtC.QModelIndex) callconv(.c) void) void {
        qtc.QSqlRelationalTableModel_OnChangePersistentIndexList(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, allocator: std.mem.Allocator ```
    pub fn PersistentIndexList(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QSqlRelationalTableModel_PersistentIndexList(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("qsqlrelationaltablemodel.PersistentIndexList: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, allocator: std.mem.Allocator ```
    pub fn QBasePersistentIndexList(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QSqlRelationalTableModel_QBasePersistentIndexList(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("qsqlrelationaltablemodel.PersistentIndexList: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn () callconv(.c) [*:null]QtC.QModelIndex ```
    pub fn OnPersistentIndexList(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:null]QtC.QModelIndex) void {
        qtc.QSqlRelationalTableModel_OnPersistentIndexList(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QSqlRelationalTableModel_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QSqlRelationalTableModel_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QSqlRelationalTableModel_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QSqlRelationalTableModel_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QSqlRelationalTableModel_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QSqlRelationalTableModel_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSqlRelationalTableModel_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSqlRelationalTableModel_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSqlRelationalTableModel_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QSqlRelationalTableModel_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSqlRelationalTableModel_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnRowsAboutToBeInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeInserted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnRowsInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsInserted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnRowsAboutToBeRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnRowsRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnColumnsAboutToBeInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeInserted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnColumnsInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsInserted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnColumnsAboutToBeRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnColumnsRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel) callconv(.c) void ```
    pub fn OnModelAboutToBeReset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ModelAboutToBeReset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel) callconv(.c) void ```
    pub fn OnModelReset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ModelReset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, sourceParent: QtC.QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QtC.QModelIndex, destinationRow: i32) callconv(.c) void ```
    pub fn OnRowsAboutToBeMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeMoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, sourceParent: QtC.QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QtC.QModelIndex, destinationRow: i32) callconv(.c) void ```
    pub fn OnRowsMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsMoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, sourceParent: QtC.QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QtC.QModelIndex, destinationColumn: i32) callconv(.c) void ```
    pub fn OnColumnsAboutToBeMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeMoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, sourceParent: QtC.QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QtC.QModelIndex, destinationColumn: i32) callconv(.c) void ```
    pub fn OnColumnsMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsMoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSqlRelationalTableModel, callback: *const fn (self: QtC.QSqlRelationalTableModel, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#dtor.QSqlRelationalTableModel)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSqlRelationalTableModel ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSqlRelationalTableModel_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#types
pub const enums = struct {
    pub const JoinMode = enum {
        pub const InnerJoin: i32 = 0;
        pub const LeftJoin: i32 = 1;
    };
};
