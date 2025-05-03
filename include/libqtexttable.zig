const C = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qtexttablecell.html
pub const qtexttablecell = struct {
    /// New constructs a new QTextTableCell object.
    ///
    ///
    pub fn New() ?*C.QTextTableCell {
        return C.QTextTableCell_new();
    }

    /// New2 constructs a new QTextTableCell object.
    ///
    /// ``` o: ?*C.QTextTableCell ```
    pub fn New2(o: ?*anyopaque) ?*C.QTextTableCell {
        return C.QTextTableCell_new2(@ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#operator=)
    ///
    /// ``` self: ?*C.QTextTableCell, o: ?*C.QTextTableCell ```
    pub fn OperatorAssign(self: ?*anyopaque, o: ?*anyopaque) void {
        C.QTextTableCell_OperatorAssign(@ptrCast(self), @ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#setFormat)
    ///
    /// ``` self: ?*C.QTextTableCell, format: ?*C.QTextCharFormat ```
    pub fn SetFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        C.QTextTableCell_SetFormat(@ptrCast(self), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#format)
    ///
    /// ``` self: ?*C.QTextTableCell ```
    pub fn Format(self: ?*anyopaque) ?*C.QTextCharFormat {
        return C.QTextTableCell_Format(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#row)
    ///
    /// ``` self: ?*C.QTextTableCell ```
    pub fn Row(self: ?*anyopaque) i32 {
        return C.QTextTableCell_Row(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#column)
    ///
    /// ``` self: ?*C.QTextTableCell ```
    pub fn Column(self: ?*anyopaque) i32 {
        return C.QTextTableCell_Column(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#rowSpan)
    ///
    /// ``` self: ?*C.QTextTableCell ```
    pub fn RowSpan(self: ?*anyopaque) i32 {
        return C.QTextTableCell_RowSpan(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#columnSpan)
    ///
    /// ``` self: ?*C.QTextTableCell ```
    pub fn ColumnSpan(self: ?*anyopaque) i32 {
        return C.QTextTableCell_ColumnSpan(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#isValid)
    ///
    /// ``` self: ?*C.QTextTableCell ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return C.QTextTableCell_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#firstCursorPosition)
    ///
    /// ``` self: ?*C.QTextTableCell ```
    pub fn FirstCursorPosition(self: ?*anyopaque) ?*C.QTextCursor {
        return C.QTextTableCell_FirstCursorPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#lastCursorPosition)
    ///
    /// ``` self: ?*C.QTextTableCell ```
    pub fn LastCursorPosition(self: ?*anyopaque) ?*C.QTextCursor {
        return C.QTextTableCell_LastCursorPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#firstPosition)
    ///
    /// ``` self: ?*C.QTextTableCell ```
    pub fn FirstPosition(self: ?*anyopaque) i32 {
        return C.QTextTableCell_FirstPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#lastPosition)
    ///
    /// ``` self: ?*C.QTextTableCell ```
    pub fn LastPosition(self: ?*anyopaque) i32 {
        return C.QTextTableCell_LastPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#operator==)
    ///
    /// ``` self: ?*C.QTextTableCell, other: ?*C.QTextTableCell ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return C.QTextTableCell_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#operator!=)
    ///
    /// ``` self: ?*C.QTextTableCell, other: ?*C.QTextTableCell ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return C.QTextTableCell_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#begin)
    ///
    /// ``` self: ?*C.QTextTableCell ```
    pub fn Begin(self: ?*anyopaque) ?*C.QTextFrame__iterator {
        return C.QTextTableCell_Begin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#end)
    ///
    /// ``` self: ?*C.QTextTableCell ```
    pub fn End(self: ?*anyopaque) ?*C.QTextFrame__iterator {
        return C.QTextTableCell_End(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#tableCellFormatIndex)
    ///
    /// ``` self: ?*C.QTextTableCell ```
    pub fn TableCellFormatIndex(self: ?*anyopaque) i32 {
        return C.QTextTableCell_TableCellFormatIndex(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QTextTableCell ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QTextTableCell_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtexttable.html
pub const qtexttable = struct {
    /// New constructs a new QTextTable object.
    ///
    /// ``` doc: ?*C.QTextDocument ```
    pub fn New(doc: ?*anyopaque) ?*C.QTextTable {
        return C.QTextTable_new(@ptrCast(doc));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QTextTable ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QTextTable_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QTextTable, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QTextTable_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QTextTable, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QTextTable_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTextTable, slot: fn (?*C.QTextTable, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QTextTable_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTextTable, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QTextTable_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QTextTable_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#resize)
    ///
    /// ``` self: ?*C.QTextTable, rows: i32, cols: i32 ```
    pub fn Resize(self: ?*anyopaque, rows: i32, cols: i32) void {
        C.QTextTable_Resize(@ptrCast(self), @intCast(rows), @intCast(cols));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#insertRows)
    ///
    /// ``` self: ?*C.QTextTable, pos: i32, num: i32 ```
    pub fn InsertRows(self: ?*anyopaque, pos: i32, num: i32) void {
        C.QTextTable_InsertRows(@ptrCast(self), @intCast(pos), @intCast(num));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#insertColumns)
    ///
    /// ``` self: ?*C.QTextTable, pos: i32, num: i32 ```
    pub fn InsertColumns(self: ?*anyopaque, pos: i32, num: i32) void {
        C.QTextTable_InsertColumns(@ptrCast(self), @intCast(pos), @intCast(num));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#appendRows)
    ///
    /// ``` self: ?*C.QTextTable, count: i32 ```
    pub fn AppendRows(self: ?*anyopaque, count: i32) void {
        C.QTextTable_AppendRows(@ptrCast(self), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#appendColumns)
    ///
    /// ``` self: ?*C.QTextTable, count: i32 ```
    pub fn AppendColumns(self: ?*anyopaque, count: i32) void {
        C.QTextTable_AppendColumns(@ptrCast(self), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#removeRows)
    ///
    /// ``` self: ?*C.QTextTable, pos: i32, num: i32 ```
    pub fn RemoveRows(self: ?*anyopaque, pos: i32, num: i32) void {
        C.QTextTable_RemoveRows(@ptrCast(self), @intCast(pos), @intCast(num));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#removeColumns)
    ///
    /// ``` self: ?*C.QTextTable, pos: i32, num: i32 ```
    pub fn RemoveColumns(self: ?*anyopaque, pos: i32, num: i32) void {
        C.QTextTable_RemoveColumns(@ptrCast(self), @intCast(pos), @intCast(num));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#mergeCells)
    ///
    /// ``` self: ?*C.QTextTable, row: i32, col: i32, numRows: i32, numCols: i32 ```
    pub fn MergeCells(self: ?*anyopaque, row: i32, col: i32, numRows: i32, numCols: i32) void {
        C.QTextTable_MergeCells(@ptrCast(self), @intCast(row), @intCast(col), @intCast(numRows), @intCast(numCols));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#mergeCells)
    ///
    /// ``` self: ?*C.QTextTable, cursor: ?*C.QTextCursor ```
    pub fn MergeCellsWithCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        C.QTextTable_MergeCellsWithCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#splitCell)
    ///
    /// ``` self: ?*C.QTextTable, row: i32, col: i32, numRows: i32, numCols: i32 ```
    pub fn SplitCell(self: ?*anyopaque, row: i32, col: i32, numRows: i32, numCols: i32) void {
        C.QTextTable_SplitCell(@ptrCast(self), @intCast(row), @intCast(col), @intCast(numRows), @intCast(numCols));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#rows)
    ///
    /// ``` self: ?*C.QTextTable ```
    pub fn Rows(self: ?*anyopaque) i32 {
        return C.QTextTable_Rows(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#columns)
    ///
    /// ``` self: ?*C.QTextTable ```
    pub fn Columns(self: ?*anyopaque) i32 {
        return C.QTextTable_Columns(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#cellAt)
    ///
    /// ``` self: ?*C.QTextTable, row: i32, col: i32 ```
    pub fn CellAt(self: ?*anyopaque, row: i32, col: i32) ?*C.QTextTableCell {
        return C.QTextTable_CellAt(@ptrCast(self), @intCast(row), @intCast(col));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#cellAt)
    ///
    /// ``` self: ?*C.QTextTable, position: i32 ```
    pub fn CellAtWithPosition(self: ?*anyopaque, position: i32) ?*C.QTextTableCell {
        return C.QTextTable_CellAtWithPosition(@ptrCast(self), @intCast(position));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#cellAt)
    ///
    /// ``` self: ?*C.QTextTable, c: ?*C.QTextCursor ```
    pub fn CellAtWithQTextCursor(self: ?*anyopaque, c: ?*anyopaque) ?*C.QTextTableCell {
        return C.QTextTable_CellAtWithQTextCursor(@ptrCast(self), @ptrCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#rowStart)
    ///
    /// ``` self: ?*C.QTextTable, c: ?*C.QTextCursor ```
    pub fn RowStart(self: ?*anyopaque, c: ?*anyopaque) ?*C.QTextCursor {
        return C.QTextTable_RowStart(@ptrCast(self), @ptrCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#rowEnd)
    ///
    /// ``` self: ?*C.QTextTable, c: ?*C.QTextCursor ```
    pub fn RowEnd(self: ?*anyopaque, c: ?*anyopaque) ?*C.QTextCursor {
        return C.QTextTable_RowEnd(@ptrCast(self), @ptrCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#setFormat)
    ///
    /// ``` self: ?*C.QTextTable, format: ?*C.QTextTableFormat ```
    pub fn SetFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        C.QTextTable_SetFormat(@ptrCast(self), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#format)
    ///
    /// ``` self: ?*C.QTextTable ```
    pub fn Format(self: ?*anyopaque) ?*C.QTextTableFormat {
        return C.QTextTable_Format(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QTextTable_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QTextTable_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QTextFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#setFrameFormat)
    ///
    /// ``` self: ?*C.QTextTable, format: ?*C.QTextFrameFormat ```
    pub fn SetFrameFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        C.QTextFrame_SetFrameFormat(@ptrCast(self), @ptrCast(format));
    }

    /// Inherited from QTextFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#frameFormat)
    ///
    /// ``` self: ?*C.QTextTable ```
    pub fn FrameFormat(self: ?*anyopaque) ?*C.QTextFrameFormat {
        return C.QTextFrame_FrameFormat(@ptrCast(self));
    }

    /// Inherited from QTextFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#firstCursorPosition)
    ///
    /// ``` self: ?*C.QTextTable ```
    pub fn FirstCursorPosition(self: ?*anyopaque) ?*C.QTextCursor {
        return C.QTextFrame_FirstCursorPosition(@ptrCast(self));
    }

    /// Inherited from QTextFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#lastCursorPosition)
    ///
    /// ``` self: ?*C.QTextTable ```
    pub fn LastCursorPosition(self: ?*anyopaque) ?*C.QTextCursor {
        return C.QTextFrame_LastCursorPosition(@ptrCast(self));
    }

    /// Inherited from QTextFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#firstPosition)
    ///
    /// ``` self: ?*C.QTextTable ```
    pub fn FirstPosition(self: ?*anyopaque) i32 {
        return C.QTextFrame_FirstPosition(@ptrCast(self));
    }

    /// Inherited from QTextFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#lastPosition)
    ///
    /// ``` self: ?*C.QTextTable ```
    pub fn LastPosition(self: ?*anyopaque) i32 {
        return C.QTextFrame_LastPosition(@ptrCast(self));
    }

    /// Inherited from QTextFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#layoutData)
    ///
    /// ``` self: ?*C.QTextTable ```
    pub fn LayoutData(self: ?*anyopaque) ?*C.QTextFrameLayoutData {
        return C.QTextFrame_LayoutData(@ptrCast(self));
    }

    /// Inherited from QTextFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#setLayoutData)
    ///
    /// ``` self: ?*C.QTextTable, data: ?*C.QTextFrameLayoutData ```
    pub fn SetLayoutData(self: ?*anyopaque, data: ?*anyopaque) void {
        C.QTextFrame_SetLayoutData(@ptrCast(self), @ptrCast(data));
    }

    /// Inherited from QTextFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#childFrames)
    ///
    /// ``` self: ?*C.QTextTable, allocator: std.mem.Allocator ```
    pub fn ChildFrames(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QTextFrame {
        const _arr: C.struct_libqt_list = C.QTextFrame_ChildFrames(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QTextFrame, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QTextFrame = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QTextFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#parentFrame)
    ///
    /// ``` self: ?*C.QTextTable ```
    pub fn ParentFrame(self: ?*anyopaque) ?*C.QTextFrame {
        return C.QTextFrame_ParentFrame(@ptrCast(self));
    }

    /// Inherited from QTextFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#begin)
    ///
    /// ``` self: ?*C.QTextTable ```
    pub fn Begin(self: ?*anyopaque) ?*C.QTextFrame__iterator {
        return C.QTextFrame_Begin(@ptrCast(self));
    }

    /// Inherited from QTextFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#end)
    ///
    /// ``` self: ?*C.QTextTable ```
    pub fn End(self: ?*anyopaque) ?*C.QTextFrame__iterator {
        return C.QTextFrame_End(@ptrCast(self));
    }

    /// Inherited from QTextObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#formatIndex)
    ///
    /// ``` self: ?*C.QTextTable ```
    pub fn FormatIndex(self: ?*anyopaque) i32 {
        return C.QTextObject_FormatIndex(@ptrCast(self));
    }

    /// Inherited from QTextObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#document)
    ///
    /// ``` self: ?*C.QTextTable ```
    pub fn Document(self: ?*anyopaque) ?*C.QTextDocument {
        return C.QTextObject_Document(@ptrCast(self));
    }

    /// Inherited from QTextObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#objectIndex)
    ///
    /// ``` self: ?*C.QTextTable ```
    pub fn ObjectIndex(self: ?*anyopaque) i32 {
        return C.QTextObject_ObjectIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QTextTable, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QTextTable, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QTextTable ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QTextTable ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QTextTable ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QTextTable ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QTextTable, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QTextTable ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QTextTable, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QTextTable, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QTextTable, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QTextTable, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QTextTable, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QTextTable, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QTextTable, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QTextTable, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QTextTable ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QTextTable ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QTextTable, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QTextTable, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QTextTable, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QTextTable ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QTextTable ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QTextTable ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: ?*C.QTextTable ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QTextTable, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QTextTable ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QTextTable, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QTextTable, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QTextTable, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTextTable, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QTextTable_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextTable, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QTextTable_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextTable, slot: fn (?*C.QTextTable, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QTextTable_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTextTable, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QTextTable_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextTable, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QTextTable_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextTable, slot: fn (?*C.QTextTable, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QTextTable_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTextTable, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTextTable_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextTable, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTextTable_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextTable, slot: fn (?*C.QTextTable, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTextTable_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTextTable, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTextTable_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextTable, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTextTable_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextTable, slot: fn (?*C.QTextTable, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTextTable_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTextTable, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTextTable_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextTable, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTextTable_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextTable, slot: fn (?*C.QTextTable, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTextTable_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTextTable, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QTextTable_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextTable, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QTextTable_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextTable, slot: fn (?*C.QTextTable, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTextTable_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTextTable, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QTextTable_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextTable, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QTextTable_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextTable, slot: fn (?*C.QTextTable, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTextTable_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTextTable ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QTextTable_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextTable ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QTextTable_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextTable, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QTextTable_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTextTable ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QTextTable_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextTable ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QTextTable_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextTable, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QTextTable_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTextTable, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QTextTable_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextTable, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QTextTable_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextTable, slot: fn (?*C.QTextTable, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QTextTable_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTextTable, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QTextTable_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextTable, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QTextTable_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextTable, slot: fn (?*C.QTextTable, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QTextTable_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QTextTable ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QTextTable_Delete(@ptrCast(self));
    }
};
