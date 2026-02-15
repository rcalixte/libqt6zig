const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qsqlquery_enums = enums;
const qtsqlglobal_enums = @import("libqtsqlglobal.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html)
pub const qsqlquery = struct {
    /// New constructs a new QSqlQuery object.
    ///
    /// ## Parameter(s):
    ///
    /// ` r: QtC.QSqlResult `
    ///
    pub fn New(r: ?*anyopaque) QtC.QSqlQuery {
        return qtc.QSqlQuery_new(@ptrCast(r));
    }

    /// New2 constructs a new QSqlQuery object.
    ///
    pub fn New2() QtC.QSqlQuery {
        return qtc.QSqlQuery_new2();
    }

    /// New3 constructs a new QSqlQuery object.
    ///
    /// ## Parameter(s):
    ///
    /// ` db: QtC.QSqlDatabase `
    ///
    pub fn New3(db: ?*anyopaque) QtC.QSqlQuery {
        return qtc.QSqlQuery_new3(@ptrCast(db));
    }

    /// New4 constructs a new QSqlQuery object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QSqlQuery `
    ///
    pub fn New4(other: ?*anyopaque) QtC.QSqlQuery {
        return qtc.QSqlQuery_new4(@ptrCast(other));
    }

    /// New5 constructs a new QSqlQuery object.
    ///
    /// ## Parameter(s):
    ///
    /// ` query: []const u8 `
    ///
    pub fn New5(query: []const u8) QtC.QSqlQuery {
        const query_str = qtc.libqt_string{
            .len = query.len,
            .data = query.ptr,
        };

        return qtc.QSqlQuery_new5(query_str);
    }

    /// New6 constructs a new QSqlQuery object.
    ///
    /// ## Parameter(s):
    ///
    /// ` query: []const u8 `
    ///
    /// ` db: QtC.QSqlDatabase `
    ///
    pub fn New6(query: []const u8, db: ?*anyopaque) QtC.QSqlQuery {
        const query_str = qtc.libqt_string{
            .len = query.len,
            .data = query.ptr,
        };

        return qtc.QSqlQuery_new6(query_str, @ptrCast(db));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    /// ` other: QtC.QSqlQuery `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSqlQuery_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    /// ` other: QtC.QSqlQuery `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSqlQuery_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QSqlQuery_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    pub fn IsActive(self: ?*anyopaque) bool {
        return qtc.QSqlQuery_IsActive(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    /// ` field: i32 `
    ///
    pub fn IsNull(self: ?*anyopaque, field: i32) bool {
        return qtc.QSqlQuery_IsNull(@ptrCast(self), @intCast(field));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    /// ` name: []const u8 `
    ///
    pub fn IsNull2(self: ?*anyopaque, name: []const u8) bool {
        return qtc.QSqlQuery_IsNull2(@ptrCast(self), name.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#at)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    pub fn At(self: ?*anyopaque) i32 {
        return qtc.QSqlQuery_At(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#lastQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LastQuery(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlQuery_LastQuery(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlquery.LastQuery: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#numRowsAffected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    pub fn NumRowsAffected(self: ?*anyopaque) i32 {
        return qtc.QSqlQuery_NumRowsAffected(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#lastError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    pub fn LastError(self: ?*anyopaque) QtC.QSqlError {
        return qtc.QSqlQuery_LastError(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#isSelect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    pub fn IsSelect(self: ?*anyopaque) bool {
        return qtc.QSqlQuery_IsSelect(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    pub fn Size(self: ?*anyopaque) i32 {
        return qtc.QSqlQuery_Size(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#driver)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    pub fn Driver(self: ?*anyopaque) QtC.QSqlDriver {
        return qtc.QSqlQuery_Driver(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#result)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    pub fn Result(self: ?*anyopaque) QtC.QSqlResult {
        return qtc.QSqlQuery_Result(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#isForwardOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    pub fn IsForwardOnly(self: ?*anyopaque) bool {
        return qtc.QSqlQuery_IsForwardOnly(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#record)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    pub fn Record(self: ?*anyopaque) QtC.QSqlRecord {
        return qtc.QSqlQuery_Record(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#setForwardOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    /// ` forward: bool `
    ///
    pub fn SetForwardOnly(self: ?*anyopaque, forward: bool) void {
        qtc.QSqlQuery_SetForwardOnly(@ptrCast(self), forward);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    /// ` query: []const u8 `
    ///
    pub fn Exec(self: ?*anyopaque, query: []const u8) bool {
        const query_str = qtc.libqt_string{
            .len = query.len,
            .data = query.ptr,
        };
        return qtc.QSqlQuery_Exec(@ptrCast(self), query_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    /// ` i: i32 `
    ///
    pub fn Value(self: ?*anyopaque, i: i32) QtC.QVariant {
        return qtc.QSqlQuery_Value(@ptrCast(self), @intCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Value2(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        return qtc.QSqlQuery_Value2(@ptrCast(self), name.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#setNumericalPrecisionPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    /// ` precisionPolicy: qtsqlglobal_enums.NumericalPrecisionPolicy `
    ///
    pub fn SetNumericalPrecisionPolicy(self: ?*anyopaque, precisionPolicy: i32) void {
        qtc.QSqlQuery_SetNumericalPrecisionPolicy(@ptrCast(self), @intCast(precisionPolicy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#numericalPrecisionPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    /// ## Returns:
    ///
    /// ` qtsqlglobal_enums.NumericalPrecisionPolicy `
    ///
    pub fn NumericalPrecisionPolicy(self: ?*anyopaque) i32 {
        return qtc.QSqlQuery_NumericalPrecisionPolicy(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#setPositionalBindingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    /// ` enable: bool `
    ///
    pub fn SetPositionalBindingEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QSqlQuery_SetPositionalBindingEnabled(@ptrCast(self), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#isPositionalBindingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    pub fn IsPositionalBindingEnabled(self: ?*anyopaque) bool {
        return qtc.QSqlQuery_IsPositionalBindingEnabled(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#seek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    /// ` i: i32 `
    ///
    pub fn Seek(self: ?*anyopaque, i: i32) bool {
        return qtc.QSqlQuery_Seek(@ptrCast(self), @intCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#next)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    pub fn Next(self: ?*anyopaque) bool {
        return qtc.QSqlQuery_Next(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#previous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    pub fn Previous(self: ?*anyopaque) bool {
        return qtc.QSqlQuery_Previous(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#first)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    pub fn First(self: ?*anyopaque) bool {
        return qtc.QSqlQuery_First(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#last)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    pub fn Last(self: ?*anyopaque) bool {
        return qtc.QSqlQuery_Last(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QSqlQuery_Clear(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    pub fn Exec2(self: ?*anyopaque) bool {
        return qtc.QSqlQuery_Exec2(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#execBatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    pub fn ExecBatch(self: ?*anyopaque) bool {
        return qtc.QSqlQuery_ExecBatch(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#prepare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    /// ` query: []const u8 `
    ///
    pub fn Prepare(self: ?*anyopaque, query: []const u8) bool {
        const query_str = qtc.libqt_string{
            .len = query.len,
            .data = query.ptr,
        };
        return qtc.QSqlQuery_Prepare(@ptrCast(self), query_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#bindValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    /// ` placeholder: []const u8 `
    ///
    /// ` val: QtC.QVariant `
    ///
    pub fn BindValue(self: ?*anyopaque, placeholder: []const u8, val: ?*anyopaque) void {
        const placeholder_str = qtc.libqt_string{
            .len = placeholder.len,
            .data = placeholder.ptr,
        };
        qtc.QSqlQuery_BindValue(@ptrCast(self), placeholder_str, @ptrCast(val));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#bindValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    /// ` pos: i32 `
    ///
    /// ` val: QtC.QVariant `
    ///
    pub fn BindValue2(self: ?*anyopaque, pos: i32, val: ?*anyopaque) void {
        qtc.QSqlQuery_BindValue2(@ptrCast(self), @intCast(pos), @ptrCast(val));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#addBindValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    /// ` val: QtC.QVariant `
    ///
    pub fn AddBindValue(self: ?*anyopaque, val: ?*anyopaque) void {
        qtc.QSqlQuery_AddBindValue(@ptrCast(self), @ptrCast(val));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#boundValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    /// ` placeholder: []const u8 `
    ///
    pub fn BoundValue(self: ?*anyopaque, placeholder: []const u8) QtC.QVariant {
        const placeholder_str = qtc.libqt_string{
            .len = placeholder.len,
            .data = placeholder.ptr,
        };
        return qtc.QSqlQuery_BoundValue(@ptrCast(self), placeholder_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#boundValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    /// ` pos: i32 `
    ///
    pub fn BoundValue2(self: ?*anyopaque, pos: i32) QtC.QVariant {
        return qtc.QSqlQuery_BoundValue2(@ptrCast(self), @intCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#boundValues)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BoundValues(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QVariant {
        const _arr: qtc.libqt_list = qtc.QSqlQuery_BoundValues(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QVariant, _arr.len) catch @panic("qsqlquery.BoundValues: Memory allocation failed");
        const _data: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#boundValueNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BoundValueNames(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSqlQuery_BoundValueNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.QSqlQuery `
    ///
    /// ` pos: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BoundValueName(self: ?*anyopaque, pos: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlQuery_BoundValueName(@ptrCast(self), @intCast(pos));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlquery.BoundValueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#executedQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExecutedQuery(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlQuery_ExecutedQuery(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlquery.ExecutedQuery: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#lastInsertId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    pub fn LastInsertId(self: ?*anyopaque) QtC.QVariant {
        return qtc.QSqlQuery_LastInsertId(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#finish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    pub fn Finish(self: ?*anyopaque) void {
        qtc.QSqlQuery_Finish(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#nextResult)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    pub fn NextResult(self: ?*anyopaque) bool {
        return qtc.QSqlQuery_NextResult(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#seek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    /// ` i: i32 `
    ///
    /// ` relative: bool `
    ///
    pub fn Seek2(self: ?*anyopaque, i: i32, relative: bool) bool {
        return qtc.QSqlQuery_Seek2(@ptrCast(self), @intCast(i), relative);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#execBatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    /// ` mode: qsqlquery_enums.BatchExecutionMode `
    ///
    pub fn ExecBatch1(self: ?*anyopaque, mode: i32) bool {
        return qtc.QSqlQuery_ExecBatch1(@ptrCast(self), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#bindValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    /// ` placeholder: []const u8 `
    ///
    /// ` val: QtC.QVariant `
    ///
    /// ` typeVal: flag of qtsqlglobal_enums.ParamTypeFlag `
    ///
    pub fn BindValue3(self: ?*anyopaque, placeholder: []const u8, val: ?*anyopaque, typeVal: i32) void {
        const placeholder_str = qtc.libqt_string{
            .len = placeholder.len,
            .data = placeholder.ptr,
        };
        qtc.QSqlQuery_BindValue3(@ptrCast(self), placeholder_str, @ptrCast(val), @intCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#bindValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    /// ` pos: i32 `
    ///
    /// ` val: QtC.QVariant `
    ///
    /// ` typeVal: flag of qtsqlglobal_enums.ParamTypeFlag `
    ///
    pub fn BindValue32(self: ?*anyopaque, pos: i32, val: ?*anyopaque, typeVal: i32) void {
        qtc.QSqlQuery_BindValue32(@ptrCast(self), @intCast(pos), @ptrCast(val), @intCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#addBindValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    /// ` val: QtC.QVariant `
    ///
    /// ` typeVal: flag of qtsqlglobal_enums.ParamTypeFlag `
    ///
    pub fn AddBindValue2(self: ?*anyopaque, val: ?*anyopaque, typeVal: i32) void {
        qtc.QSqlQuery_AddBindValue2(@ptrCast(self), @ptrCast(val), @intCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#dtor.QSqlQuery)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QSqlQuery `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSqlQuery_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlquery.html#public-types)
pub const enums = struct {
    pub const BatchExecutionMode = enum(i32) {
        pub const ValuesAsRows: i32 = 0;
        pub const ValuesAsColumns: i32 = 1;
    };
};
