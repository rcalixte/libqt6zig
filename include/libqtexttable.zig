const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qtexttablecell.html
pub const qtexttablecell = struct {
    /// New constructs a new QTextTableCell object.
    ///
    ///
    pub fn New() QtC.QTextTableCell {
        return qtc.QTextTableCell_new();
    }

    /// New2 constructs a new QTextTableCell object.
    ///
    /// ``` o: QtC.QTextTableCell ```
    pub fn New2(o: ?*anyopaque) QtC.QTextTableCell {
        return qtc.QTextTableCell_new2(@ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#operator-eq)
    ///
    /// ``` self: QtC.QTextTableCell, o: QtC.QTextTableCell ```
    pub fn OperatorAssign(self: ?*anyopaque, o: ?*anyopaque) void {
        qtc.QTextTableCell_OperatorAssign(@ptrCast(self), @ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#setFormat)
    ///
    /// ``` self: QtC.QTextTableCell, format: QtC.QTextCharFormat ```
    pub fn SetFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QTextTableCell_SetFormat(@ptrCast(self), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#format)
    ///
    /// ``` self: QtC.QTextTableCell ```
    pub fn Format(self: ?*anyopaque) QtC.QTextCharFormat {
        return qtc.QTextTableCell_Format(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#row)
    ///
    /// ``` self: QtC.QTextTableCell ```
    pub fn Row(self: ?*anyopaque) i32 {
        return qtc.QTextTableCell_Row(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#column)
    ///
    /// ``` self: QtC.QTextTableCell ```
    pub fn Column(self: ?*anyopaque) i32 {
        return qtc.QTextTableCell_Column(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#rowSpan)
    ///
    /// ``` self: QtC.QTextTableCell ```
    pub fn RowSpan(self: ?*anyopaque) i32 {
        return qtc.QTextTableCell_RowSpan(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#columnSpan)
    ///
    /// ``` self: QtC.QTextTableCell ```
    pub fn ColumnSpan(self: ?*anyopaque) i32 {
        return qtc.QTextTableCell_ColumnSpan(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#isValid)
    ///
    /// ``` self: QtC.QTextTableCell ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QTextTableCell_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#firstCursorPosition)
    ///
    /// ``` self: QtC.QTextTableCell ```
    pub fn FirstCursorPosition(self: ?*anyopaque) QtC.QTextCursor {
        return qtc.QTextTableCell_FirstCursorPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#lastCursorPosition)
    ///
    /// ``` self: QtC.QTextTableCell ```
    pub fn LastCursorPosition(self: ?*anyopaque) QtC.QTextCursor {
        return qtc.QTextTableCell_LastCursorPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#firstPosition)
    ///
    /// ``` self: QtC.QTextTableCell ```
    pub fn FirstPosition(self: ?*anyopaque) i32 {
        return qtc.QTextTableCell_FirstPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#lastPosition)
    ///
    /// ``` self: QtC.QTextTableCell ```
    pub fn LastPosition(self: ?*anyopaque) i32 {
        return qtc.QTextTableCell_LastPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QTextTableCell, other: QtC.QTextTableCell ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QTextTableCell_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#operator-not-eq)
    ///
    /// ``` self: QtC.QTextTableCell, other: QtC.QTextTableCell ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QTextTableCell_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#begin)
    ///
    /// ``` self: QtC.QTextTableCell ```
    pub fn Begin(self: ?*anyopaque) QtC.QTextFrame__iterator {
        return qtc.QTextTableCell_Begin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#end)
    ///
    /// ``` self: QtC.QTextTableCell ```
    pub fn End(self: ?*anyopaque) QtC.QTextFrame__iterator {
        return qtc.QTextTableCell_End(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#tableCellFormatIndex)
    ///
    /// ``` self: QtC.QTextTableCell ```
    pub fn TableCellFormatIndex(self: ?*anyopaque) i32 {
        return qtc.QTextTableCell_TableCellFormatIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#dtor.QTextTableCell)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTextTableCell ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextTableCell_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtexttable.html
pub const qtexttable = struct {
    /// New constructs a new QTextTable object.
    ///
    /// ``` doc: QtC.QTextDocument ```
    pub fn New(doc: ?*anyopaque) QtC.QTextTable {
        return qtc.QTextTable_new(@ptrCast(doc));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QTextTable ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QTextTable_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QTextTable, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTextTable_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QTextTable, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QTextTable_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QTextTable, slot: fn (self: QtC.QTextTable, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QTextTable_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QTextTable, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QTextTable_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QTextTable_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtexttable.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#resize)
    ///
    /// ``` self: QtC.QTextTable, rows: i32, cols: i32 ```
    pub fn Resize(self: ?*anyopaque, rows: i32, cols: i32) void {
        qtc.QTextTable_Resize(@ptrCast(self), @intCast(rows), @intCast(cols));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#insertRows)
    ///
    /// ``` self: QtC.QTextTable, pos: i32, num: i32 ```
    pub fn InsertRows(self: ?*anyopaque, pos: i32, num: i32) void {
        qtc.QTextTable_InsertRows(@ptrCast(self), @intCast(pos), @intCast(num));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#insertColumns)
    ///
    /// ``` self: QtC.QTextTable, pos: i32, num: i32 ```
    pub fn InsertColumns(self: ?*anyopaque, pos: i32, num: i32) void {
        qtc.QTextTable_InsertColumns(@ptrCast(self), @intCast(pos), @intCast(num));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#appendRows)
    ///
    /// ``` self: QtC.QTextTable, count: i32 ```
    pub fn AppendRows(self: ?*anyopaque, count: i32) void {
        qtc.QTextTable_AppendRows(@ptrCast(self), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#appendColumns)
    ///
    /// ``` self: QtC.QTextTable, count: i32 ```
    pub fn AppendColumns(self: ?*anyopaque, count: i32) void {
        qtc.QTextTable_AppendColumns(@ptrCast(self), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#removeRows)
    ///
    /// ``` self: QtC.QTextTable, pos: i32, num: i32 ```
    pub fn RemoveRows(self: ?*anyopaque, pos: i32, num: i32) void {
        qtc.QTextTable_RemoveRows(@ptrCast(self), @intCast(pos), @intCast(num));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#removeColumns)
    ///
    /// ``` self: QtC.QTextTable, pos: i32, num: i32 ```
    pub fn RemoveColumns(self: ?*anyopaque, pos: i32, num: i32) void {
        qtc.QTextTable_RemoveColumns(@ptrCast(self), @intCast(pos), @intCast(num));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#mergeCells)
    ///
    /// ``` self: QtC.QTextTable, row: i32, col: i32, numRows: i32, numCols: i32 ```
    pub fn MergeCells(self: ?*anyopaque, row: i32, col: i32, numRows: i32, numCols: i32) void {
        qtc.QTextTable_MergeCells(@ptrCast(self), @intCast(row), @intCast(col), @intCast(numRows), @intCast(numCols));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#mergeCells)
    ///
    /// ``` self: QtC.QTextTable, cursor: QtC.QTextCursor ```
    pub fn MergeCells2(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QTextTable_MergeCells2(@ptrCast(self), @ptrCast(cursor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#splitCell)
    ///
    /// ``` self: QtC.QTextTable, row: i32, col: i32, numRows: i32, numCols: i32 ```
    pub fn SplitCell(self: ?*anyopaque, row: i32, col: i32, numRows: i32, numCols: i32) void {
        qtc.QTextTable_SplitCell(@ptrCast(self), @intCast(row), @intCast(col), @intCast(numRows), @intCast(numCols));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#rows)
    ///
    /// ``` self: QtC.QTextTable ```
    pub fn Rows(self: ?*anyopaque) i32 {
        return qtc.QTextTable_Rows(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#columns)
    ///
    /// ``` self: QtC.QTextTable ```
    pub fn Columns(self: ?*anyopaque) i32 {
        return qtc.QTextTable_Columns(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#cellAt)
    ///
    /// ``` self: QtC.QTextTable, row: i32, col: i32 ```
    pub fn CellAt(self: ?*anyopaque, row: i32, col: i32) QtC.QTextTableCell {
        return qtc.QTextTable_CellAt(@ptrCast(self), @intCast(row), @intCast(col));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#cellAt)
    ///
    /// ``` self: QtC.QTextTable, position: i32 ```
    pub fn CellAt2(self: ?*anyopaque, position: i32) QtC.QTextTableCell {
        return qtc.QTextTable_CellAt2(@ptrCast(self), @intCast(position));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#cellAt)
    ///
    /// ``` self: QtC.QTextTable, c: QtC.QTextCursor ```
    pub fn CellAt3(self: ?*anyopaque, c: ?*anyopaque) QtC.QTextTableCell {
        return qtc.QTextTable_CellAt3(@ptrCast(self), @ptrCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#rowStart)
    ///
    /// ``` self: QtC.QTextTable, c: QtC.QTextCursor ```
    pub fn RowStart(self: ?*anyopaque, c: ?*anyopaque) QtC.QTextCursor {
        return qtc.QTextTable_RowStart(@ptrCast(self), @ptrCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#rowEnd)
    ///
    /// ``` self: QtC.QTextTable, c: QtC.QTextCursor ```
    pub fn RowEnd(self: ?*anyopaque, c: ?*anyopaque) QtC.QTextCursor {
        return qtc.QTextTable_RowEnd(@ptrCast(self), @ptrCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#setFormat)
    ///
    /// ``` self: QtC.QTextTable, format: QtC.QTextTableFormat ```
    pub fn SetFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QTextTable_SetFormat(@ptrCast(self), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#format)
    ///
    /// ``` self: QtC.QTextTable ```
    pub fn Format(self: ?*anyopaque) QtC.QTextTableFormat {
        return qtc.QTextTable_Format(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QTextTable_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtexttable.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QTextTable_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtexttable.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#setFrameFormat)
    ///
    /// ``` self: QtC.QTextTable, format: QtC.QTextFrameFormat ```
    pub fn SetFrameFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QTextFrame_SetFrameFormat(@ptrCast(self), @ptrCast(format));
    }

    /// Inherited from QTextFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#frameFormat)
    ///
    /// ``` self: QtC.QTextTable ```
    pub fn FrameFormat(self: ?*anyopaque) QtC.QTextFrameFormat {
        return qtc.QTextFrame_FrameFormat(@ptrCast(self));
    }

    /// Inherited from QTextFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#firstCursorPosition)
    ///
    /// ``` self: QtC.QTextTable ```
    pub fn FirstCursorPosition(self: ?*anyopaque) QtC.QTextCursor {
        return qtc.QTextFrame_FirstCursorPosition(@ptrCast(self));
    }

    /// Inherited from QTextFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#lastCursorPosition)
    ///
    /// ``` self: QtC.QTextTable ```
    pub fn LastCursorPosition(self: ?*anyopaque) QtC.QTextCursor {
        return qtc.QTextFrame_LastCursorPosition(@ptrCast(self));
    }

    /// Inherited from QTextFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#firstPosition)
    ///
    /// ``` self: QtC.QTextTable ```
    pub fn FirstPosition(self: ?*anyopaque) i32 {
        return qtc.QTextFrame_FirstPosition(@ptrCast(self));
    }

    /// Inherited from QTextFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#lastPosition)
    ///
    /// ``` self: QtC.QTextTable ```
    pub fn LastPosition(self: ?*anyopaque) i32 {
        return qtc.QTextFrame_LastPosition(@ptrCast(self));
    }

    /// Inherited from QTextFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#layoutData)
    ///
    /// ``` self: QtC.QTextTable ```
    pub fn LayoutData(self: ?*anyopaque) QtC.QTextFrameLayoutData {
        return qtc.QTextFrame_LayoutData(@ptrCast(self));
    }

    /// Inherited from QTextFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#setLayoutData)
    ///
    /// ``` self: QtC.QTextTable, data: QtC.QTextFrameLayoutData ```
    pub fn SetLayoutData(self: ?*anyopaque, data: ?*anyopaque) void {
        qtc.QTextFrame_SetLayoutData(@ptrCast(self), @ptrCast(data));
    }

    /// Inherited from QTextFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#childFrames)
    ///
    /// ``` self: QtC.QTextTable, allocator: std.mem.Allocator ```
    pub fn ChildFrames(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QTextFrame {
        const _arr: qtc.libqt_list = qtc.QTextFrame_ChildFrames(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QTextFrame, _arr.len) catch @panic("qtexttable.ChildFrames: Memory allocation failed");
        const _data: [*]QtC.QTextFrame = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QTextFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#parentFrame)
    ///
    /// ``` self: QtC.QTextTable ```
    pub fn ParentFrame(self: ?*anyopaque) QtC.QTextFrame {
        return qtc.QTextFrame_ParentFrame(@ptrCast(self));
    }

    /// Inherited from QTextFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#begin)
    ///
    /// ``` self: QtC.QTextTable ```
    pub fn Begin(self: ?*anyopaque) QtC.QTextFrame__iterator {
        return qtc.QTextFrame_Begin(@ptrCast(self));
    }

    /// Inherited from QTextFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#end)
    ///
    /// ``` self: QtC.QTextTable ```
    pub fn End(self: ?*anyopaque) QtC.QTextFrame__iterator {
        return qtc.QTextFrame_End(@ptrCast(self));
    }

    /// Inherited from QTextObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#formatIndex)
    ///
    /// ``` self: QtC.QTextTable ```
    pub fn FormatIndex(self: ?*anyopaque) i32 {
        return qtc.QTextObject_FormatIndex(@ptrCast(self));
    }

    /// Inherited from QTextObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#document)
    ///
    /// ``` self: QtC.QTextTable ```
    pub fn Document(self: ?*anyopaque) QtC.QTextDocument {
        return qtc.QTextObject_Document(@ptrCast(self));
    }

    /// Inherited from QTextObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#objectIndex)
    ///
    /// ``` self: QtC.QTextTable ```
    pub fn ObjectIndex(self: ?*anyopaque) i32 {
        return qtc.QTextObject_ObjectIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QTextTable, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtexttable.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QTextTable, name: []const u8 ```
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
    /// ``` self: QtC.QTextTable ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QTextTable ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QTextTable ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QTextTable ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QTextTable, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QTextTable ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QTextTable, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QTextTable, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QTextTable, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QTextTable, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QTextTable, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qtexttable.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QTextTable, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QTextTable, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QTextTable, obj: QtC.QObject ```
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
    /// ``` self: QtC.QTextTable, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QTextTable ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QTextTable ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QTextTable, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QTextTable, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QTextTable, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QTextTable ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QTextTable ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QTextTable ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QTextTable, slot: fn (self: QtC.QTextTable) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QTextTable ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QTextTable, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QTextTable ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QTextTable, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QTextTable, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.QTextTable, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QTextTable, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QTextTable, slot: fn (self: QtC.QTextTable, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTextTable, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QTextTable_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTextTable, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QTextTable_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTextTable, slot: fn (self: QtC.QTextTable, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QTextTable_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTextTable, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QTextTable_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTextTable, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QTextTable_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTextTable, slot: fn (self: QtC.QTextTable, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QTextTable_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTextTable, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTextTable_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTextTable, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTextTable_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTextTable, slot: fn (self: QtC.QTextTable, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextTable_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTextTable, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTextTable_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTextTable, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTextTable_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTextTable, slot: fn (self: QtC.QTextTable, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextTable_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTextTable, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTextTable_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTextTable, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QTextTable_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTextTable, slot: fn (self: QtC.QTextTable, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextTable_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTextTable, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QTextTable_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTextTable, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QTextTable_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTextTable, slot: fn (self: QtC.QTextTable, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextTable_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTextTable, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QTextTable_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTextTable, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QTextTable_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTextTable, slot: fn (self: QtC.QTextTable, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextTable_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTextTable ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QTextTable_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTextTable ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QTextTable_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTextTable, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QTextTable_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTextTable ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QTextTable_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTextTable ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QTextTable_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTextTable, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QTextTable_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTextTable, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTextTable_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTextTable, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTextTable_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTextTable, slot: fn (self: QtC.QTextTable, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QTextTable_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTextTable, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QTextTable_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTextTable, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QTextTable_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTextTable, slot: fn (self: QtC.QTextTable, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QTextTable_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QTextTable, slot: fn (self: QtC.QTextTable, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#dtor.QTextTable)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTextTable ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextTable_Delete(@ptrCast(self));
    }
};
