const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QTextCharFormat = @import("libqt6").QTextCharFormat;
const QTextCursor = @import("libqt6").QTextCursor;
const QTextDocument = @import("libqt6").QTextDocument;
const QTextFrame = @import("libqt6").QTextFrame;
const QTextFrameFormat = @import("libqt6").QTextFrameFormat;
const QTextFrame__iterator = @import("libqt6").QTextFrame__iterator;
const QTextTableFormat = @import("libqt6").QTextTableFormat;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html)
pub const QTextTableCell = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextTableCell,

    pub const _is_QTextTableCell = {};

    /// New constructs a new QTextTableCell object.
    ///
    pub fn New() QTextTableCell {
        return .{ .ptr = qtc.QTextTableCell_new() };
    }

    /// New2 constructs a new QTextTableCell object.
    ///
    /// ## Parameter(s):
    ///
    /// ` o: QTextTableCell `
    ///
    pub fn New2(o: anytype) QTextTableCell {
        comptime _ = @TypeOf(o)._is_QTextTableCell;
        return .{ .ptr = qtc.QTextTableCell_new2(@ptrCast(o.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCell `
    ///
    /// ` o: QTextTableCell `
    ///
    pub fn OperatorAssign(self: QTextTableCell, o: anytype) void {
        comptime _ = @TypeOf(o)._is_QTextTableCell;
        qtc.QTextTableCell_OperatorAssign(@ptrCast(self.ptr), @ptrCast(o.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#setFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCell `
    ///
    /// ` format: QTextCharFormat `
    ///
    pub fn SetFormat(self: QTextTableCell, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextCharFormat;
        qtc.QTextTableCell_SetFormat(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCell `
    ///
    pub fn Format(self: QTextTableCell) QTextCharFormat {
        return .{ .ptr = qtc.QTextTableCell_Format(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#row)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCell `
    ///
    pub fn Row(self: QTextTableCell) i32 {
        return qtc.QTextTableCell_Row(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#column)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCell `
    ///
    pub fn Column(self: QTextTableCell) i32 {
        return qtc.QTextTableCell_Column(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#rowSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCell `
    ///
    pub fn RowSpan(self: QTextTableCell) i32 {
        return qtc.QTextTableCell_RowSpan(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#columnSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCell `
    ///
    pub fn ColumnSpan(self: QTextTableCell) i32 {
        return qtc.QTextTableCell_ColumnSpan(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCell `
    ///
    pub fn IsValid(self: QTextTableCell) bool {
        return qtc.QTextTableCell_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#firstCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCell `
    ///
    pub fn FirstCursorPosition(self: QTextTableCell) QTextCursor {
        return .{ .ptr = qtc.QTextTableCell_FirstCursorPosition(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#lastCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCell `
    ///
    pub fn LastCursorPosition(self: QTextTableCell) QTextCursor {
        return .{ .ptr = qtc.QTextTableCell_LastCursorPosition(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#firstPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCell `
    ///
    pub fn FirstPosition(self: QTextTableCell) i32 {
        return qtc.QTextTableCell_FirstPosition(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#lastPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCell `
    ///
    pub fn LastPosition(self: QTextTableCell) i32 {
        return qtc.QTextTableCell_LastPosition(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCell `
    ///
    /// ` other: QTextTableCell `
    ///
    pub fn OperatorEqual(self: QTextTableCell, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QTextTableCell;
        return qtc.QTextTableCell_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCell `
    ///
    /// ` other: QTextTableCell `
    ///
    pub fn OperatorNotEqual(self: QTextTableCell, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QTextTableCell;
        return qtc.QTextTableCell_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCell `
    ///
    pub fn Begin(self: QTextTableCell) QTextFrame__iterator {
        return .{ .ptr = qtc.QTextTableCell_Begin(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCell `
    ///
    pub fn End(self: QTextTableCell) QTextFrame__iterator {
        return .{ .ptr = qtc.QTextTableCell_End(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#tableCellFormatIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCell `
    ///
    pub fn TableCellFormatIndex(self: QTextTableCell) i32 {
        return qtc.QTextTableCell_TableCellFormatIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#dtor.QTextTableCell)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextTableCell `
    ///
    pub fn Delete(self: QTextTableCell) void {
        qtc.QTextTableCell_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html)
pub const QTextTable = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextTable,

    pub const _is_QTextTable = {};
    pub const _is_QTextFrame = {};
    pub const _is_QTextObject = {};
    pub const _is_QObject = {};

    /// New constructs a new QTextTable object.
    ///
    /// ## Parameter(s):
    ///
    /// ` doc: QTextDocument `
    ///
    pub fn New(doc: anytype) QTextTable {
        comptime _ = @TypeOf(doc)._is_QTextDocument;
        return .{ .ptr = qtc.QTextTable_new(@ptrCast(doc.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn MetaObject(self: QTextTable) QMetaObject {
        return .{ .ptr = qtc.QTextTable_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextTable `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QTextTable, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QTextTable_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextTable `
    ///
    pub fn SuperMetaObject(self: QTextTable) QMetaObject {
        return .{ .ptr = qtc.QTextTable_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QTextTable, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTextTable_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextTable `
    ///
    /// ` callback: *const fn (self: QTextTable, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QTextTable, callback: *const fn (QTextTable, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QTextTable_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QTextTable, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTextTable_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QTextTable, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTextTable_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextTable `
    ///
    /// ` callback: *const fn (self: QTextTable, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QTextTable, callback: *const fn (QTextTable, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QTextTable_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QTextTable, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTextTable_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtexttable.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` rows: i32 `
    ///
    /// ` cols: i32 `
    ///
    pub fn Resize(self: QTextTable, rows: i32, cols: i32) void {
        qtc.QTextTable_Resize(@ptrCast(self.ptr), @bitCast(rows), @bitCast(cols));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#insertRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` pos: i32 `
    ///
    /// ` num: i32 `
    ///
    pub fn InsertRows(self: QTextTable, pos: i32, num: i32) void {
        qtc.QTextTable_InsertRows(@ptrCast(self.ptr), @bitCast(pos), @bitCast(num));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#insertColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` pos: i32 `
    ///
    /// ` num: i32 `
    ///
    pub fn InsertColumns(self: QTextTable, pos: i32, num: i32) void {
        qtc.QTextTable_InsertColumns(@ptrCast(self.ptr), @bitCast(pos), @bitCast(num));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#appendRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` count: i32 `
    ///
    pub fn AppendRows(self: QTextTable, count: i32) void {
        qtc.QTextTable_AppendRows(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#appendColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` count: i32 `
    ///
    pub fn AppendColumns(self: QTextTable, count: i32) void {
        qtc.QTextTable_AppendColumns(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#removeRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` pos: i32 `
    ///
    /// ` num: i32 `
    ///
    pub fn RemoveRows(self: QTextTable, pos: i32, num: i32) void {
        qtc.QTextTable_RemoveRows(@ptrCast(self.ptr), @bitCast(pos), @bitCast(num));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#removeColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` pos: i32 `
    ///
    /// ` num: i32 `
    ///
    pub fn RemoveColumns(self: QTextTable, pos: i32, num: i32) void {
        qtc.QTextTable_RemoveColumns(@ptrCast(self.ptr), @bitCast(pos), @bitCast(num));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#mergeCells)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` row: i32 `
    ///
    /// ` col: i32 `
    ///
    /// ` numRows: i32 `
    ///
    /// ` numCols: i32 `
    ///
    pub fn MergeCells(self: QTextTable, row: i32, col: i32, numRows: i32, numCols: i32) void {
        qtc.QTextTable_MergeCells(@ptrCast(self.ptr), @bitCast(row), @bitCast(col), @bitCast(numRows), @bitCast(numCols));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#mergeCells)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` cursor: QTextCursor `
    ///
    pub fn MergeCells2(self: QTextTable, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        qtc.QTextTable_MergeCells2(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#splitCell)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` row: i32 `
    ///
    /// ` col: i32 `
    ///
    /// ` numRows: i32 `
    ///
    /// ` numCols: i32 `
    ///
    pub fn SplitCell(self: QTextTable, row: i32, col: i32, numRows: i32, numCols: i32) void {
        qtc.QTextTable_SplitCell(@ptrCast(self.ptr), @bitCast(row), @bitCast(col), @bitCast(numRows), @bitCast(numCols));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#rows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn Rows(self: QTextTable) i32 {
        return qtc.QTextTable_Rows(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#columns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn Columns(self: QTextTable) i32 {
        return qtc.QTextTable_Columns(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#cellAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` row: i32 `
    ///
    /// ` col: i32 `
    ///
    pub fn CellAt(self: QTextTable, row: i32, col: i32) QTextTableCell {
        return .{ .ptr = qtc.QTextTable_CellAt(@ptrCast(self.ptr), @bitCast(row), @bitCast(col)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#cellAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` position: i32 `
    ///
    pub fn CellAt2(self: QTextTable, position: i32) QTextTableCell {
        return .{ .ptr = qtc.QTextTable_CellAt2(@ptrCast(self.ptr), @bitCast(position)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#cellAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` c: QTextCursor `
    ///
    pub fn CellAt3(self: QTextTable, c: anytype) QTextTableCell {
        comptime _ = @TypeOf(c)._is_QTextCursor;
        return .{ .ptr = qtc.QTextTable_CellAt3(@ptrCast(self.ptr), @ptrCast(c.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#rowStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` c: QTextCursor `
    ///
    pub fn RowStart(self: QTextTable, c: anytype) QTextCursor {
        comptime _ = @TypeOf(c)._is_QTextCursor;
        return .{ .ptr = qtc.QTextTable_RowStart(@ptrCast(self.ptr), @ptrCast(c.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#rowEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` c: QTextCursor `
    ///
    pub fn RowEnd(self: QTextTable, c: anytype) QTextCursor {
        comptime _ = @TypeOf(c)._is_QTextCursor;
        return .{ .ptr = qtc.QTextTable_RowEnd(@ptrCast(self.ptr), @ptrCast(c.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#setFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` format: QTextTableFormat `
    ///
    pub fn SetFormat(self: QTextTable, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextTableFormat;
        qtc.QTextTable_SetFormat(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn Format(self: QTextTable) QTextTableFormat {
        return .{ .ptr = qtc.QTextTable_Format(@ptrCast(self.ptr)) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtexttable.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtexttable.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#setFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` format: QTextFrameFormat `
    ///
    pub fn SetFrameFormat(self: QTextTable, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextFrameFormat;
        qtc.QTextFrame_SetFrameFormat(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// Inherited from QTextFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#frameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn FrameFormat(self: QTextTable) QTextFrameFormat {
        return .{ .ptr = qtc.QTextFrame_FrameFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#firstCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn FirstCursorPosition(self: QTextTable) QTextCursor {
        return .{ .ptr = qtc.QTextFrame_FirstCursorPosition(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#lastCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn LastCursorPosition(self: QTextTable) QTextCursor {
        return .{ .ptr = qtc.QTextFrame_LastCursorPosition(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#firstPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn FirstPosition(self: QTextTable) i32 {
        return qtc.QTextFrame_FirstPosition(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#lastPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn LastPosition(self: QTextTable) i32 {
        return qtc.QTextFrame_LastPosition(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#childFrames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ChildFrames(self: QTextTable, allocator: std.mem.Allocator) []QTextFrame {
        const _arr: qtc.libqt_list = qtc.QTextFrame_ChildFrames(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextFrame, _arr.len) catch @panic("qtexttable.ChildFrames: Memory allocation failed");
        const _data: [*]QtC.QTextFrame = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QTextFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#parentFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn ParentFrame(self: QTextTable) QTextFrame {
        return .{ .ptr = qtc.QTextFrame_ParentFrame(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn Begin(self: QTextTable) QTextFrame__iterator {
        return .{ .ptr = qtc.QTextFrame_Begin(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn End(self: QTextTable) QTextFrame__iterator {
        return .{ .ptr = qtc.QTextFrame_End(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#formatIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn FormatIndex(self: QTextTable) i32 {
        return qtc.QTextObject_FormatIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QTextObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn Document(self: QTextTable) QTextDocument {
        return .{ .ptr = qtc.QTextObject_Document(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#objectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn ObjectIndex(self: QTextTable) i32 {
        return qtc.QTextObject_ObjectIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QTextTable, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtexttable.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QTextTable, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn IsWidgetType(self: QTextTable) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn IsWindowType(self: QTextTable) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn IsQuickItemType(self: QTextTable) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn SignalsBlocked(self: QTextTable) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QTextTable, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn Thread(self: QTextTable) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QTextTable, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QTextTable, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QTextTable, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QTextTable, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QTextTable, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QTextTable, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qtexttable.Children: Memory allocation failed");
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
    /// ` self: QTextTable `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QTextTable, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QTextTable, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QTextTable, obj: anytype) void {
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
    /// ` self: QTextTable `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QTextTable, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QTextTable `
    ///
    pub fn Disconnect3(self: QTextTable) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QTextTable, receiver: anytype) bool {
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
    /// ` self: QTextTable `
    ///
    pub fn DumpObjectTree(self: QTextTable) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn DumpObjectInfo(self: QTextTable) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QTextTable, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QTextTable `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QTextTable, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QTextTable, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qtexttable.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtexttable.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QTextTable `
    ///
    pub fn BindingStorage(self: QTextTable) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn BindingStorage2(self: QTextTable) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn Destroyed(self: QTextTable) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextTable `
    ///
    /// ` callback: *const fn (self: QTextTable) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QTextTable, callback: *const fn (QTextTable) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn Parent(self: QTextTable) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QTextTable, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn DeleteLater(self: QTextTable) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QTextTable, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QTextTable, time: i64, timerType: i32) i32 {
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
    /// ` self: QTextTable `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QTextTable, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QTextTable `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QTextTable, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QTextTable, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QTextTable `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QTextTable, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTextTable `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QTextTable, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTextTable `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QTextTable, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextTable `
    ///
    /// ` callback: *const fn (self: QTextTable, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QTextTable, callback: *const fn (QTextTable, QObject) callconv(.c) void) void {
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
    /// ` self: QTextTable `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QTextTable, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTextTable_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTextTable `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QTextTable, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTextTable_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextTable`
    ///
    /// ` callback: *const fn (self: QTextTable, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QTextTable, callback: *const fn (QTextTable, QEvent) callconv(.c) bool) void {
        qtc.QTextTable_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QTextTable, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTextTable_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTextTable `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QTextTable, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTextTable_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextTable`
    ///
    /// ` callback: *const fn (self: QTextTable, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QTextTable, callback: *const fn (QTextTable, QObject, QEvent) callconv(.c) bool) void {
        qtc.QTextTable_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QTextTable, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QTextTable_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTextTable `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QTextTable, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QTextTable_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextTable`
    ///
    /// ` callback: *const fn (self: QTextTable, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QTextTable, callback: *const fn (QTextTable, QTimerEvent) callconv(.c) void) void {
        qtc.QTextTable_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QTextTable, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QTextTable_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTextTable `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QTextTable, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QTextTable_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextTable`
    ///
    /// ` callback: *const fn (self: QTextTable, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QTextTable, callback: *const fn (QTextTable, QChildEvent) callconv(.c) void) void {
        qtc.QTextTable_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QTextTable, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QTextTable_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTextTable `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QTextTable, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QTextTable_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextTable`
    ///
    /// ` callback: *const fn (self: QTextTable, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QTextTable, callback: *const fn (QTextTable, QEvent) callconv(.c) void) void {
        qtc.QTextTable_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QTextTable, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextTable_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTextTable `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QTextTable, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextTable_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextTable`
    ///
    /// ` callback: *const fn (self: QTextTable, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QTextTable, callback: *const fn (QTextTable, QMetaMethod) callconv(.c) void) void {
        qtc.QTextTable_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QTextTable, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextTable_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTextTable `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QTextTable, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextTable_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextTable`
    ///
    /// ` callback: *const fn (self: QTextTable, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QTextTable, callback: *const fn (QTextTable, QMetaMethod) callconv(.c) void) void {
        qtc.QTextTable_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn Sender(self: QTextTable) QObject {
        return .{ .ptr = qtc.QTextTable_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QTextTable `
    ///
    pub fn SuperSender(self: QTextTable) QObject {
        return .{ .ptr = qtc.QTextTable_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextTable`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QTextTable, callback: *const fn () callconv(.c) QObject) void {
        qtc.QTextTable_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    pub fn SenderSignalIndex(self: QTextTable) i32 {
        return qtc.QTextTable_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QTextTable `
    ///
    pub fn SuperSenderSignalIndex(self: QTextTable) i32 {
        return qtc.QTextTable_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextTable`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QTextTable, callback: *const fn () callconv(.c) i32) void {
        qtc.QTextTable_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QTextTable, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTextTable_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QTextTable `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QTextTable, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTextTable_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextTable`
    ///
    /// ` callback: *const fn (self: QTextTable, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QTextTable, callback: *const fn (QTextTable, [*:0]const u8) callconv(.c) i32) void {
        qtc.QTextTable_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTable `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QTextTable, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTextTable_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTextTable `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QTextTable, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTextTable_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextTable`
    ///
    /// ` callback: *const fn (self: QTextTable, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QTextTable, callback: *const fn (QTextTable, QMetaMethod) callconv(.c) bool) void {
        qtc.QTextTable_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextTable `
    ///
    /// ` callback: *const fn (self: QTextTable, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QTextTable, callback: *const fn (QTextTable, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#dtor.QTextTable)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextTable `
    ///
    pub fn Delete(self: QTextTable) void {
        qtc.QTextTable_Delete(@ptrCast(self.ptr));
    }
};
