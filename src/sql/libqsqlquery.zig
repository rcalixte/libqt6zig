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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSqlQuery object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` r: QSqlResult `
    ///
    pub fn new(r: anytype) QSqlQuery {
        comptime _ = @TypeOf(r)._is_QSqlResult;
        return .{ .ptr = qtc.QSqlQuery_new(@ptrCast(r.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSqlQuery object in C++ memory
    ///
    pub fn new2() QSqlQuery {
        return .{ .ptr = qtc.QSqlQuery_new2() };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QSqlQuery object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` db: QSqlDatabase `
    ///
    pub fn new3(db: anytype) QSqlQuery {
        comptime _ = @TypeOf(db)._is_QSqlDatabase;
        return .{ .ptr = qtc.QSqlQuery_new3(@ptrCast(db.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QSqlQuery object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSqlQuery `
    ///
    pub fn new4(other: anytype) QSqlQuery {
        comptime _ = @TypeOf(other)._is_QSqlQuery;
        return .{ .ptr = qtc.QSqlQuery_new4(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QSqlQuery object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` query: []const u8 `
    ///
    pub fn new5(query: []const u8) QSqlQuery {
        const query_str = qtc.libqt_string{
            .len = query.len,
            .data = query.ptr,
        };
        return .{ .ptr = qtc.QSqlQuery_new5(query_str) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QSqlQuery object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` query: []const u8 `
    ///
    /// ` db: QSqlDatabase `
    ///
    pub fn new6(query: []const u8, db: anytype) QSqlQuery {
        const query_str = qtc.libqt_string{
            .len = query.len,
            .data = query.ptr,
        };
        comptime _ = @TypeOf(db)._is_QSqlDatabase;
        return .{ .ptr = qtc.QSqlQuery_new6(query_str, @ptrCast(db.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` other: QSqlQuery `
    ///
    pub fn operatorAssign(self: QSqlQuery, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSqlQuery;
        qtc.QSqlQuery_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` other: QSqlQuery `
    ///
    pub fn swap(self: QSqlQuery, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSqlQuery;
        qtc.QSqlQuery_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn isValid(self: QSqlQuery) bool {
        return qtc.QSqlQuery_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isActive` instead
    ///
    pub const IsActive = isActive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn isActive(self: QSqlQuery) bool {
        return qtc.QSqlQuery_IsActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` field: i32 `
    ///
    pub fn isNull(self: QSqlQuery, field: i32) bool {
        return qtc.QSqlQuery_IsNull(@ptrCast(self.ptr), @bitCast(field));
    }

    /// ### DEPRECATED: Use `isNull2` instead
    ///
    pub const IsNull2 = isNull2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` name: []const u8 `
    ///
    pub fn isNull2(self: QSqlQuery, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlQuery_IsNull2(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `at` instead
    ///
    pub const At = at;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#at)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn at(self: QSqlQuery) i32 {
        return qtc.QSqlQuery_At(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lastQuery` instead
    ///
    pub const LastQuery = lastQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#lastQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn lastQuery(self: QSqlQuery, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlQuery_LastQuery(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSqlQuery.lastQuery: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `numRowsAffected` instead
    ///
    pub const NumRowsAffected = numRowsAffected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#numRowsAffected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn numRowsAffected(self: QSqlQuery) i32 {
        return qtc.QSqlQuery_NumRowsAffected(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lastError` instead
    ///
    pub const LastError = lastError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#lastError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn lastError(self: QSqlQuery) QSqlError {
        return .{ .ptr = qtc.QSqlQuery_LastError(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isSelect` instead
    ///
    pub const IsSelect = isSelect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#isSelect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn isSelect(self: QSqlQuery) bool {
        return qtc.QSqlQuery_IsSelect(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn size(self: QSqlQuery) i32 {
        return qtc.QSqlQuery_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `driver` instead
    ///
    pub const Driver = driver;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#driver)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn driver(self: QSqlQuery) QSqlDriver {
        return .{ .ptr = qtc.QSqlQuery_Driver(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `result` instead
    ///
    pub const Result = result;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#result)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn result(self: QSqlQuery) QSqlResult {
        return .{ .ptr = qtc.QSqlQuery_Result(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isForwardOnly` instead
    ///
    pub const IsForwardOnly = isForwardOnly;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#isForwardOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn isForwardOnly(self: QSqlQuery) bool {
        return qtc.QSqlQuery_IsForwardOnly(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `record` instead
    ///
    pub const Record = record;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#record)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn record(self: QSqlQuery) QSqlRecord {
        return .{ .ptr = qtc.QSqlQuery_Record(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setForwardOnly` instead
    ///
    pub const SetForwardOnly = setForwardOnly;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#setForwardOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` forward: bool `
    ///
    pub fn setForwardOnly(self: QSqlQuery, forward: bool) void {
        qtc.QSqlQuery_SetForwardOnly(@ptrCast(self.ptr), forward);
    }

    /// ### DEPRECATED: Use `exec` instead
    ///
    pub const Exec = exec;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` query: []const u8 `
    ///
    pub fn exec(self: QSqlQuery, query: []const u8) bool {
        const query_str = qtc.libqt_string{
            .len = query.len,
            .data = query.ptr,
        };
        return qtc.QSqlQuery_Exec(@ptrCast(self.ptr), query_str);
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` i: i32 `
    ///
    pub fn value(self: QSqlQuery, i: i32) QVariant {
        return .{ .ptr = qtc.QSqlQuery_Value(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `value2` instead
    ///
    pub const Value2 = value2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` name: []const u8 `
    ///
    pub fn value2(self: QSqlQuery, name: []const u8) QVariant {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QSqlQuery_Value2(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `setNumericalPrecisionPolicy` instead
    ///
    pub const SetNumericalPrecisionPolicy = setNumericalPrecisionPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#setNumericalPrecisionPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` precisionPolicy: qtsqlglobal_enums.NumericalPrecisionPolicy `
    ///
    pub fn setNumericalPrecisionPolicy(self: QSqlQuery, precisionPolicy: i32) void {
        qtc.QSqlQuery_SetNumericalPrecisionPolicy(@ptrCast(self.ptr), @bitCast(precisionPolicy));
    }

    /// ### DEPRECATED: Use `numericalPrecisionPolicy` instead
    ///
    pub const NumericalPrecisionPolicy = numericalPrecisionPolicy;

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
    pub fn numericalPrecisionPolicy(self: QSqlQuery) i32 {
        return qtc.QSqlQuery_NumericalPrecisionPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPositionalBindingEnabled` instead
    ///
    pub const SetPositionalBindingEnabled = setPositionalBindingEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#setPositionalBindingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` enable: bool `
    ///
    pub fn setPositionalBindingEnabled(self: QSqlQuery, enable: bool) void {
        qtc.QSqlQuery_SetPositionalBindingEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `isPositionalBindingEnabled` instead
    ///
    pub const IsPositionalBindingEnabled = isPositionalBindingEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#isPositionalBindingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn isPositionalBindingEnabled(self: QSqlQuery) bool {
        return qtc.QSqlQuery_IsPositionalBindingEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `seek` instead
    ///
    pub const Seek = seek;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#seek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` i: i32 `
    ///
    pub fn seek(self: QSqlQuery, i: i32) bool {
        return qtc.QSqlQuery_Seek(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `next` instead
    ///
    pub const Next = next;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#next)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn next(self: QSqlQuery) bool {
        return qtc.QSqlQuery_Next(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `previous` instead
    ///
    pub const Previous = previous;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#previous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn previous(self: QSqlQuery) bool {
        return qtc.QSqlQuery_Previous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `first` instead
    ///
    pub const First = first;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#first)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn first(self: QSqlQuery) bool {
        return qtc.QSqlQuery_First(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `last` instead
    ///
    pub const Last = last;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#last)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn last(self: QSqlQuery) bool {
        return qtc.QSqlQuery_Last(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn clear(self: QSqlQuery) void {
        qtc.QSqlQuery_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `exec2` instead
    ///
    pub const Exec2 = exec2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn exec2(self: QSqlQuery) bool {
        return qtc.QSqlQuery_Exec2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `execBatch` instead
    ///
    pub const ExecBatch = execBatch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#execBatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn execBatch(self: QSqlQuery) bool {
        return qtc.QSqlQuery_ExecBatch(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `prepare` instead
    ///
    pub const Prepare = prepare;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#prepare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` query: []const u8 `
    ///
    pub fn prepare(self: QSqlQuery, query: []const u8) bool {
        const query_str = qtc.libqt_string{
            .len = query.len,
            .data = query.ptr,
        };
        return qtc.QSqlQuery_Prepare(@ptrCast(self.ptr), query_str);
    }

    /// ### DEPRECATED: Use `bindValue` instead
    ///
    pub const BindValue = bindValue;

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
    pub fn bindValue(self: QSqlQuery, placeholder: []const u8, val: anytype) void {
        const placeholder_str = qtc.libqt_string{
            .len = placeholder.len,
            .data = placeholder.ptr,
        };
        comptime _ = @TypeOf(val)._is_QVariant;
        qtc.QSqlQuery_BindValue(@ptrCast(self.ptr), placeholder_str, @ptrCast(val.ptr));
    }

    /// ### DEPRECATED: Use `bindValue2` instead
    ///
    pub const BindValue2 = bindValue2;

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
    pub fn bindValue2(self: QSqlQuery, pos: i32, val: anytype) void {
        comptime _ = @TypeOf(val)._is_QVariant;
        qtc.QSqlQuery_BindValue2(@ptrCast(self.ptr), @bitCast(pos), @ptrCast(val.ptr));
    }

    /// ### DEPRECATED: Use `addBindValue` instead
    ///
    pub const AddBindValue = addBindValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#addBindValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` val: QVariant `
    ///
    pub fn addBindValue(self: QSqlQuery, val: anytype) void {
        comptime _ = @TypeOf(val)._is_QVariant;
        qtc.QSqlQuery_AddBindValue(@ptrCast(self.ptr), @ptrCast(val.ptr));
    }

    /// ### DEPRECATED: Use `boundValue` instead
    ///
    pub const BoundValue = boundValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#boundValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` placeholder: []const u8 `
    ///
    pub fn boundValue(self: QSqlQuery, placeholder: []const u8) QVariant {
        const placeholder_str = qtc.libqt_string{
            .len = placeholder.len,
            .data = placeholder.ptr,
        };
        return .{ .ptr = qtc.QSqlQuery_BoundValue(@ptrCast(self.ptr), placeholder_str) };
    }

    /// ### DEPRECATED: Use `boundValue2` instead
    ///
    pub const BoundValue2 = boundValue2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#boundValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` pos: i32 `
    ///
    pub fn boundValue2(self: QSqlQuery, pos: i32) QVariant {
        return .{ .ptr = qtc.QSqlQuery_BoundValue2(@ptrCast(self.ptr), @bitCast(pos)) };
    }

    /// ### DEPRECATED: Use `boundValues` instead
    ///
    pub const BoundValues = boundValues;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#boundValues)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn boundValues(self: QSqlQuery, allocator: std.mem.Allocator) []QVariant {
        const _arr: qtc.libqt_list = qtc.QSqlQuery_BoundValues(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVariant, _arr.len) catch @panic("QSqlQuery.boundValues: Memory allocation failed");
        const _data_val: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `boundValueNames` instead
    ///
    pub const BoundValueNames = boundValueNames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#boundValueNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn boundValueNames(self: QSqlQuery, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlQuery_BoundValueNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QSqlQuery.boundValueNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSqlQuery.boundValueNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `boundValueName` instead
    ///
    pub const BoundValueName = boundValueName;

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
    pub fn boundValueName(self: QSqlQuery, allocator: std.mem.Allocator, pos: i32) []const u8 {
        var _str = qtc.QSqlQuery_BoundValueName(@ptrCast(self.ptr), @bitCast(pos));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSqlQuery.boundValueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `executedQuery` instead
    ///
    pub const ExecutedQuery = executedQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#executedQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn executedQuery(self: QSqlQuery, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlQuery_ExecutedQuery(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSqlQuery.executedQuery: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `lastInsertId` instead
    ///
    pub const LastInsertId = lastInsertId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#lastInsertId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn lastInsertId(self: QSqlQuery) QVariant {
        return .{ .ptr = qtc.QSqlQuery_LastInsertId(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `finish` instead
    ///
    pub const Finish = finish;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#finish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn finish(self: QSqlQuery) void {
        qtc.QSqlQuery_Finish(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nextResult` instead
    ///
    pub const NextResult = nextResult;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#nextResult)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn nextResult(self: QSqlQuery) bool {
        return qtc.QSqlQuery_NextResult(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `seek2` instead
    ///
    pub const Seek2 = seek2;

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
    pub fn seek2(self: QSqlQuery, i: i32, relative: bool) bool {
        return qtc.QSqlQuery_Seek2(@ptrCast(self.ptr), @bitCast(i), relative);
    }

    /// ### DEPRECATED: Use `execBatch1` instead
    ///
    pub const ExecBatch1 = execBatch1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#execBatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlQuery `
    ///
    /// ` mode: qsqlquery_enums.BatchExecutionMode `
    ///
    pub fn execBatch1(self: QSqlQuery, mode: i32) bool {
        return qtc.QSqlQuery_ExecBatch1(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `bindValue3` instead
    ///
    pub const BindValue3 = bindValue3;

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
    pub fn bindValue3(self: QSqlQuery, placeholder: []const u8, val: anytype, typeVal: i32) void {
        const placeholder_str = qtc.libqt_string{
            .len = placeholder.len,
            .data = placeholder.ptr,
        };
        comptime _ = @TypeOf(val)._is_QVariant;
        qtc.QSqlQuery_BindValue3(@ptrCast(self.ptr), placeholder_str, @ptrCast(val.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `bindValue32` instead
    ///
    pub const BindValue32 = bindValue32;

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
    pub fn bindValue32(self: QSqlQuery, pos: i32, val: anytype, typeVal: i32) void {
        comptime _ = @TypeOf(val)._is_QVariant;
        qtc.QSqlQuery_BindValue32(@ptrCast(self.ptr), @bitCast(pos), @ptrCast(val.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `addBindValue2` instead
    ///
    pub const AddBindValue2 = addBindValue2;

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
    pub fn addBindValue2(self: QSqlQuery, val: anytype, typeVal: i32) void {
        comptime _ = @TypeOf(val)._is_QVariant;
        qtc.QSqlQuery_AddBindValue2(@ptrCast(self.ptr), @ptrCast(val.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#dtor.QSqlQuery)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSqlQuery `
    ///
    pub fn delete(self: QSqlQuery) void {
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
