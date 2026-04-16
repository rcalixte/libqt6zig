const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QSqlDatabase = @import("libqt6").QSqlDatabase;
const QSqlDriver = @import("libqt6").QSqlDriver;
const QSqlError = @import("libqt6").QSqlError;
const QSqlRecord = @import("libqt6").QSqlRecord;
const QSqlResult = @import("libqt6").QSqlResult;
const QVariant = @import("libqt6").QVariant;
const qsqlquery_enums = enums;
const qtsqlglobal_enums = @import("libqtsqlglobal.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html)
pub const QSqlQuery = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSqlQuery,

    pub const _is_QSqlQuery = {};

    /// New constructs a new QSqlQuery object.
    ///
    /// ## Parameter(s):
    ///
    /// ` r: QSqlResult `
    ///
    pub fn New(r: anytype) QSqlQuery {
        comptime _ = @TypeOf(r)._is_QSqlResult;
        return .{ .ptr = qtc.QSqlQuery_new(@ptrCast(r.ptr)) };
    }

    /// New2 constructs a new QSqlQuery object.
    ///
    pub fn New2() QSqlQuery {
        return .{ .ptr = qtc.QSqlQuery_new2() };
    }

    /// New3 constructs a new QSqlQuery object.
    ///
    /// ## Parameter(s):
    ///
    /// ` db: QSqlDatabase `
    ///
    pub fn New3(db: anytype) QSqlQuery {
        comptime _ = @TypeOf(db)._is_QSqlDatabase;
        return .{ .ptr = qtc.QSqlQuery_new3(@ptrCast(db.ptr)) };
    }

    /// New4 constructs a new QSqlQuery object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSqlQuery `
    ///
    pub fn New4(other: anytype) QSqlQuery {
        comptime _ = @TypeOf(other)._is_QSqlQuery;
        return .{ .ptr = qtc.QSqlQuery_new4(@ptrCast(other.ptr)) };
    }

    /// New5 constructs a new QSqlQuery object.
    ///
    /// ## Parameter(s):
    ///
    /// ` query: []const u8 `
    ///
    pub fn New5(query: []const u8) QSqlQuery {
        const query_str = qtc.libqt_string{
            .len = query.len,
            .data = query.ptr,
        };
        return .{ .ptr = qtc.QSqlQuery_new5(query_str) };
    }

    /// New6 constructs a new QSqlQuery object.
    ///
    /// ## Parameter(s):
    ///
    /// ` query: []const u8 `
    ///
    /// ` db: QSqlDatabase `
    ///
    pub fn New6(query: []const u8, db: anytype) QSqlQuery {
        const query_str = qtc.libqt_string{
            .len = query.len,
            .data = query.ptr,
        };
        comptime _ = @TypeOf(db)._is_QSqlDatabase;
        return .{ .ptr = qtc.QSqlQuery_new6(query_str, @ptrCast(db.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` other: QSqlQuery `
    ///
    pub fn OperatorAssign(self: QSqlQuery, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSqlQuery;
        qtc.QSqlQuery_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` other: QSqlQuery `
    ///
    pub fn Swap(self: QSqlQuery, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSqlQuery;
        qtc.QSqlQuery_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn IsValid(self: QSqlQuery) bool {
        return qtc.QSqlQuery_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn IsActive(self: QSqlQuery) bool {
        return qtc.QSqlQuery_IsActive(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` field: i32 `
    ///
    pub fn IsNull(self: QSqlQuery, field: i32) bool {
        return qtc.QSqlQuery_IsNull(@ptrCast(self.ptr), @bitCast(field));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` name: []const u8 `
    ///
    pub fn IsNull2(self: QSqlQuery, name: []const u8) bool {
        return qtc.QSqlQuery_IsNull2(@ptrCast(self.ptr), name.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#at)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn At(self: QSqlQuery) i32 {
        return qtc.QSqlQuery_At(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#lastQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LastQuery(self: QSqlQuery, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlQuery_LastQuery(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlquery.LastQuery: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#numRowsAffected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn NumRowsAffected(self: QSqlQuery) i32 {
        return qtc.QSqlQuery_NumRowsAffected(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#lastError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn LastError(self: QSqlQuery) QSqlError {
        return .{ .ptr = qtc.QSqlQuery_LastError(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#isSelect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn IsSelect(self: QSqlQuery) bool {
        return qtc.QSqlQuery_IsSelect(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn Size(self: QSqlQuery) i32 {
        return qtc.QSqlQuery_Size(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#driver)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn Driver(self: QSqlQuery) QSqlDriver {
        return .{ .ptr = qtc.QSqlQuery_Driver(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#result)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn Result(self: QSqlQuery) QSqlResult {
        return .{ .ptr = qtc.QSqlQuery_Result(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#isForwardOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn IsForwardOnly(self: QSqlQuery) bool {
        return qtc.QSqlQuery_IsForwardOnly(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#record)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn Record(self: QSqlQuery) QSqlRecord {
        return .{ .ptr = qtc.QSqlQuery_Record(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#setForwardOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` forward: bool `
    ///
    pub fn SetForwardOnly(self: QSqlQuery, forward: bool) void {
        qtc.QSqlQuery_SetForwardOnly(@ptrCast(self.ptr), forward);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` query: []const u8 `
    ///
    pub fn Exec(self: QSqlQuery, query: []const u8) bool {
        const query_str = qtc.libqt_string{
            .len = query.len,
            .data = query.ptr,
        };
        return qtc.QSqlQuery_Exec(@ptrCast(self.ptr), query_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` i: i32 `
    ///
    pub fn Value(self: QSqlQuery, i: i32) QVariant {
        return .{ .ptr = qtc.QSqlQuery_Value(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Value2(self: QSqlQuery, name: []const u8) QVariant {
        return .{ .ptr = qtc.QSqlQuery_Value2(@ptrCast(self.ptr), name.ptr) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#setNumericalPrecisionPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` precisionPolicy: qtsqlglobal_enums.NumericalPrecisionPolicy `
    ///
    pub fn SetNumericalPrecisionPolicy(self: QSqlQuery, precisionPolicy: i32) void {
        qtc.QSqlQuery_SetNumericalPrecisionPolicy(@ptrCast(self.ptr), @bitCast(precisionPolicy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#numericalPrecisionPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ## Returns:
    ///
    /// ` qtsqlglobal_enums.NumericalPrecisionPolicy `
    ///
    pub fn NumericalPrecisionPolicy(self: QSqlQuery) i32 {
        return qtc.QSqlQuery_NumericalPrecisionPolicy(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#setPositionalBindingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` enable: bool `
    ///
    pub fn SetPositionalBindingEnabled(self: QSqlQuery, enable: bool) void {
        qtc.QSqlQuery_SetPositionalBindingEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#isPositionalBindingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn IsPositionalBindingEnabled(self: QSqlQuery) bool {
        return qtc.QSqlQuery_IsPositionalBindingEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#seek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` i: i32 `
    ///
    pub fn Seek(self: QSqlQuery, i: i32) bool {
        return qtc.QSqlQuery_Seek(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#next)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn Next(self: QSqlQuery) bool {
        return qtc.QSqlQuery_Next(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#previous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn Previous(self: QSqlQuery) bool {
        return qtc.QSqlQuery_Previous(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#first)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn First(self: QSqlQuery) bool {
        return qtc.QSqlQuery_First(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#last)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn Last(self: QSqlQuery) bool {
        return qtc.QSqlQuery_Last(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn Clear(self: QSqlQuery) void {
        qtc.QSqlQuery_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn Exec2(self: QSqlQuery) bool {
        return qtc.QSqlQuery_Exec2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#execBatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn ExecBatch(self: QSqlQuery) bool {
        return qtc.QSqlQuery_ExecBatch(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#prepare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` query: []const u8 `
    ///
    pub fn Prepare(self: QSqlQuery, query: []const u8) bool {
        const query_str = qtc.libqt_string{
            .len = query.len,
            .data = query.ptr,
        };
        return qtc.QSqlQuery_Prepare(@ptrCast(self.ptr), query_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#bindValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` placeholder: []const u8 `
    ///
    /// ` val: QVariant `
    ///
    pub fn BindValue(self: QSqlQuery, placeholder: []const u8, val: anytype) void {
        const placeholder_str = qtc.libqt_string{
            .len = placeholder.len,
            .data = placeholder.ptr,
        };
        comptime _ = @TypeOf(val)._is_QVariant;
        qtc.QSqlQuery_BindValue(@ptrCast(self.ptr), placeholder_str, @ptrCast(val.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#bindValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` pos: i32 `
    ///
    /// ` val: QVariant `
    ///
    pub fn BindValue2(self: QSqlQuery, pos: i32, val: anytype) void {
        comptime _ = @TypeOf(val)._is_QVariant;
        qtc.QSqlQuery_BindValue2(@ptrCast(self.ptr), @bitCast(pos), @ptrCast(val.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#addBindValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` val: QVariant `
    ///
    pub fn AddBindValue(self: QSqlQuery, val: anytype) void {
        comptime _ = @TypeOf(val)._is_QVariant;
        qtc.QSqlQuery_AddBindValue(@ptrCast(self.ptr), @ptrCast(val.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#boundValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` placeholder: []const u8 `
    ///
    pub fn BoundValue(self: QSqlQuery, placeholder: []const u8) QVariant {
        const placeholder_str = qtc.libqt_string{
            .len = placeholder.len,
            .data = placeholder.ptr,
        };
        return .{ .ptr = qtc.QSqlQuery_BoundValue(@ptrCast(self.ptr), placeholder_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#boundValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` pos: i32 `
    ///
    pub fn BoundValue2(self: QSqlQuery, pos: i32) QVariant {
        return .{ .ptr = qtc.QSqlQuery_BoundValue2(@ptrCast(self.ptr), @bitCast(pos)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#boundValues)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BoundValues(self: QSqlQuery, allocator: std.mem.Allocator) []QVariant {
        const _arr: qtc.libqt_list = qtc.QSqlQuery_BoundValues(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVariant, _arr.len) catch @panic("qsqlquery.BoundValues: Memory allocation failed");
        const _data: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#boundValueNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BoundValueNames(self: QSqlQuery, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlQuery_BoundValueNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qsqlquery.BoundValueNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsqlquery.BoundValueNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#boundValueName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pos: i32 `
    ///
    pub fn BoundValueName(self: QSqlQuery, allocator: std.mem.Allocator, pos: i32) []const u8 {
        var _str = qtc.QSqlQuery_BoundValueName(@ptrCast(self.ptr), @bitCast(pos));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlquery.BoundValueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#executedQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExecutedQuery(self: QSqlQuery, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlQuery_ExecutedQuery(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlquery.ExecutedQuery: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#lastInsertId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn LastInsertId(self: QSqlQuery) QVariant {
        return .{ .ptr = qtc.QSqlQuery_LastInsertId(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#finish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn Finish(self: QSqlQuery) void {
        qtc.QSqlQuery_Finish(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#nextResult)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn NextResult(self: QSqlQuery) bool {
        return qtc.QSqlQuery_NextResult(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#seek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` i: i32 `
    ///
    /// ` relative: bool `
    ///
    pub fn Seek2(self: QSqlQuery, i: i32, relative: bool) bool {
        return qtc.QSqlQuery_Seek2(@ptrCast(self.ptr), @bitCast(i), relative);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#execBatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` mode: qsqlquery_enums.BatchExecutionMode `
    ///
    pub fn ExecBatch1(self: QSqlQuery, mode: i32) bool {
        return qtc.QSqlQuery_ExecBatch1(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#bindValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` placeholder: []const u8 `
    ///
    /// ` val: QVariant `
    ///
    /// ` typeVal: flag of qtsqlglobal_enums.ParamTypeFlag `
    ///
    pub fn BindValue3(self: QSqlQuery, placeholder: []const u8, val: anytype, typeVal: i32) void {
        const placeholder_str = qtc.libqt_string{
            .len = placeholder.len,
            .data = placeholder.ptr,
        };
        comptime _ = @TypeOf(val)._is_QVariant;
        qtc.QSqlQuery_BindValue3(@ptrCast(self.ptr), placeholder_str, @ptrCast(val.ptr), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#bindValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` pos: i32 `
    ///
    /// ` val: QVariant `
    ///
    /// ` typeVal: flag of qtsqlglobal_enums.ParamTypeFlag `
    ///
    pub fn BindValue32(self: QSqlQuery, pos: i32, val: anytype, typeVal: i32) void {
        comptime _ = @TypeOf(val)._is_QVariant;
        qtc.QSqlQuery_BindValue32(@ptrCast(self.ptr), @bitCast(pos), @ptrCast(val.ptr), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#addBindValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` val: QVariant `
    ///
    /// ` typeVal: flag of qtsqlglobal_enums.ParamTypeFlag `
    ///
    pub fn AddBindValue2(self: QSqlQuery, val: anytype, typeVal: i32) void {
        comptime _ = @TypeOf(val)._is_QVariant;
        qtc.QSqlQuery_AddBindValue2(@ptrCast(self.ptr), @ptrCast(val.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#dtor.QSqlQuery)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn Delete(self: QSqlQuery) void {
        qtc.QSqlQuery_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#public-types)
pub const enums = struct {
    pub const BatchExecutionMode = enum(i32) {
        pub const ValuesAsRows: i32 = 0;
        pub const ValuesAsColumns: i32 = 1;
    };
};
