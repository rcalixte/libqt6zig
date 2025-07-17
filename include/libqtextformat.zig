const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qfont_enums = @import("libqfont.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qtextformat_enums = enums;
const std = @import("std");
pub const map_i32_qtcqvariant = std.AutoHashMapUnmanaged(i32, QtC.QVariant);

/// https://doc.qt.io/qt-6/qtextlength.html
pub const qtextlength = struct {
    /// New constructs a new QTextLength object.
    ///
    /// ``` other: QtC.QTextLength ```
    pub fn New(other: ?*anyopaque) QtC.QTextLength {
        return qtc.QTextLength_new(@ptrCast(other));
    }

    /// New2 constructs a new QTextLength object and invalidates the source QTextLength object.
    ///
    /// ``` other: QtC.QTextLength ```
    pub fn New2(other: ?*anyopaque) QtC.QTextLength {
        return qtc.QTextLength_new2(@ptrCast(other));
    }

    /// New3 constructs a new QTextLength object.
    ///
    ///
    pub fn New3() QtC.QTextLength {
        return qtc.QTextLength_new3();
    }

    /// New4 constructs a new QTextLength object.
    ///
    /// ``` typeVal: qtextformat_enums.Type, value: f64 ```
    pub fn New4(typeVal: i64, value: f64) QtC.QTextLength {
        return qtc.QTextLength_new4(@intCast(typeVal), @floatCast(value));
    }

    /// New5 constructs a new QTextLength object.
    ///
    /// ``` param1: QtC.QTextLength ```
    pub fn New5(param1: ?*anyopaque) QtC.QTextLength {
        return qtc.QTextLength_new5(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QTextLength, other: QtC.QTextLength ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextLength_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QTextLength, other: QtC.QTextLength ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextLength_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlength.html#type)
    ///
    /// ``` self: QtC.QTextLength ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QTextLength_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlength.html#value)
    ///
    /// ``` self: QtC.QTextLength, maximumLength: f64 ```
    pub fn Value(self: ?*anyopaque, maximumLength: f64) f64 {
        return qtc.QTextLength_Value(@ptrCast(self), @floatCast(maximumLength));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlength.html#rawValue)
    ///
    /// ``` self: QtC.QTextLength ```
    pub fn RawValue(self: ?*anyopaque) f64 {
        return qtc.QTextLength_RawValue(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlength.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QTextLength, other: QtC.QTextLength ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QTextLength_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlength.html#operator-not-eq)
    ///
    /// ``` self: QtC.QTextLength, other: QtC.QTextLength ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QTextLength_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlength.html#operator)
    ///
    /// ``` self: QtC.QTextLength ```
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QTextLength_ToQVariant(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlength.html#dtor.QTextLength)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTextLength ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextLength_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextformat.html
pub const qtextformat = struct {
    /// New constructs a new QTextFormat object.
    ///
    ///
    pub fn New() QtC.QTextFormat {
        return qtc.QTextFormat_new();
    }

    /// New2 constructs a new QTextFormat object.
    ///
    /// ``` typeVal: i32 ```
    pub fn New2(typeVal: i32) QtC.QTextFormat {
        return qtc.QTextFormat_new2(@intCast(typeVal));
    }

    /// New3 constructs a new QTextFormat object.
    ///
    /// ``` rhs: QtC.QTextFormat ```
    pub fn New3(rhs: ?*anyopaque) QtC.QTextFormat {
        return qtc.QTextFormat_new3(@ptrCast(rhs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-eq)
    ///
    /// ``` self: QtC.QTextFormat, rhs: QtC.QTextFormat ```
    pub fn OperatorAssign(self: ?*anyopaque, rhs: ?*anyopaque) void {
        qtc.QTextFormat_OperatorAssign(@ptrCast(self), @ptrCast(rhs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#swap)
    ///
    /// ``` self: QtC.QTextFormat, other: QtC.QTextFormat ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextFormat_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#merge)
    ///
    /// ``` self: QtC.QTextFormat, other: QtC.QTextFormat ```
    pub fn Merge(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextFormat_Merge(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isValid)
    ///
    /// ``` self: QtC.QTextFormat ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
    ///
    /// ``` self: QtC.QTextFormat ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#type)
    ///
    /// ``` self: QtC.QTextFormat ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
    ///
    /// ``` self: QtC.QTextFormat ```
    pub fn ObjectIndex(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_ObjectIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
    ///
    /// ``` self: QtC.QTextFormat, object: i32 ```
    pub fn SetObjectIndex(self: ?*anyopaque, object: i32) void {
        qtc.QTextFormat_SetObjectIndex(@ptrCast(self), @intCast(object));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#property)
    ///
    /// ``` self: QtC.QTextFormat, propertyId: i32 ```
    pub fn Property(self: ?*anyopaque, propertyId: i32) QtC.QVariant {
        return qtc.QTextFormat_Property(@ptrCast(self), @intCast(propertyId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ``` self: QtC.QTextFormat, propertyId: i32, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, propertyId: i32, value: ?*anyopaque) void {
        qtc.QTextFormat_SetProperty(@ptrCast(self), @intCast(propertyId), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
    ///
    /// ``` self: QtC.QTextFormat, propertyId: i32 ```
    pub fn ClearProperty(self: ?*anyopaque, propertyId: i32) void {
        qtc.QTextFormat_ClearProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
    ///
    /// ``` self: QtC.QTextFormat, propertyId: i32 ```
    pub fn HasProperty(self: ?*anyopaque, propertyId: i32) bool {
        return qtc.QTextFormat_HasProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
    ///
    /// ``` self: QtC.QTextFormat, propertyId: i32 ```
    pub fn BoolProperty(self: ?*anyopaque, propertyId: i32) bool {
        return qtc.QTextFormat_BoolProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
    ///
    /// ``` self: QtC.QTextFormat, propertyId: i32 ```
    pub fn IntProperty(self: ?*anyopaque, propertyId: i32) i32 {
        return qtc.QTextFormat_IntProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
    ///
    /// ``` self: QtC.QTextFormat, propertyId: i32 ```
    pub fn DoubleProperty(self: ?*anyopaque, propertyId: i32) f64 {
        return qtc.QTextFormat_DoubleProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
    ///
    /// ``` self: QtC.QTextFormat, propertyId: i32, allocator: std.mem.Allocator ```
    pub fn StringProperty(self: ?*anyopaque, propertyId: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextFormat_StringProperty(@ptrCast(self), @intCast(propertyId));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextformat.StringProperty: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
    ///
    /// ``` self: QtC.QTextFormat, propertyId: i32 ```
    pub fn ColorProperty(self: ?*anyopaque, propertyId: i32) QtC.QColor {
        return qtc.QTextFormat_ColorProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
    ///
    /// ``` self: QtC.QTextFormat, propertyId: i32 ```
    pub fn PenProperty(self: ?*anyopaque, propertyId: i32) QtC.QPen {
        return qtc.QTextFormat_PenProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
    ///
    /// ``` self: QtC.QTextFormat, propertyId: i32 ```
    pub fn BrushProperty(self: ?*anyopaque, propertyId: i32) QtC.QBrush {
        return qtc.QTextFormat_BrushProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
    ///
    /// ``` self: QtC.QTextFormat, propertyId: i32 ```
    pub fn LengthProperty(self: ?*anyopaque, propertyId: i32) QtC.QTextLength {
        return qtc.QTextFormat_LengthProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
    ///
    /// ``` self: QtC.QTextFormat, propertyId: i32, allocator: std.mem.Allocator ```
    pub fn LengthVectorProperty(self: ?*anyopaque, propertyId: i32, allocator: std.mem.Allocator) []QtC.QTextLength {
        const _arr: qtc.struct_libqt_list = qtc.QTextFormat_LengthVectorProperty(@ptrCast(self), @intCast(propertyId));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QTextLength, _arr.len) catch @panic("qtextformat.LengthVectorProperty: Memory allocation failed");
        const _data: [*]QtC.QTextLength = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ``` self: QtC.QTextFormat, propertyId: i32, lengths: []QtC.QTextLength ```
    pub fn SetProperty2(self: ?*anyopaque, propertyId: i32, lengths: []QtC.QTextLength) void {
        const lengths_list = qtc.struct_libqt_list{
            .len = lengths.len,
            .data = @ptrCast(lengths.ptr),
        };
        qtc.QTextFormat_SetProperty2(@ptrCast(self), @intCast(propertyId), lengths_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#properties)
    ///
    /// ``` self: QtC.QTextFormat, allocator: std.mem.Allocator ```
    pub fn Properties(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_qtcqvariant {
        const _map: qtc.struct_libqt_map = qtc.QTextFormat_Properties(@ptrCast(self));
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
            _ret.put(allocator, _key, _value) catch @panic("qtextformat.Properties: Memory allocation failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
    ///
    /// ``` self: QtC.QTextFormat ```
    pub fn PropertyCount(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_PropertyCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
    ///
    /// ``` self: QtC.QTextFormat, typeVal: i32 ```
    pub fn SetObjectType(self: ?*anyopaque, typeVal: i32) void {
        qtc.QTextFormat_SetObjectType(@ptrCast(self), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectType)
    ///
    /// ``` self: QtC.QTextFormat ```
    pub fn ObjectType(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_ObjectType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
    ///
    /// ``` self: QtC.QTextFormat ```
    pub fn IsCharFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsCharFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
    ///
    /// ``` self: QtC.QTextFormat ```
    pub fn IsBlockFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsBlockFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
    ///
    /// ``` self: QtC.QTextFormat ```
    pub fn IsListFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsListFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
    ///
    /// ``` self: QtC.QTextFormat ```
    pub fn IsFrameFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsFrameFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
    ///
    /// ``` self: QtC.QTextFormat ```
    pub fn IsImageFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsImageFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
    ///
    /// ``` self: QtC.QTextFormat ```
    pub fn IsTableFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsTableFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
    ///
    /// ``` self: QtC.QTextFormat ```
    pub fn IsTableCellFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsTableCellFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
    ///
    /// ``` self: QtC.QTextFormat ```
    pub fn ToBlockFormat(self: ?*anyopaque) QtC.QTextBlockFormat {
        return qtc.QTextFormat_ToBlockFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
    ///
    /// ``` self: QtC.QTextFormat ```
    pub fn ToCharFormat(self: ?*anyopaque) QtC.QTextCharFormat {
        return qtc.QTextFormat_ToCharFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
    ///
    /// ``` self: QtC.QTextFormat ```
    pub fn ToListFormat(self: ?*anyopaque) QtC.QTextListFormat {
        return qtc.QTextFormat_ToListFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
    ///
    /// ``` self: QtC.QTextFormat ```
    pub fn ToTableFormat(self: ?*anyopaque) QtC.QTextTableFormat {
        return qtc.QTextFormat_ToTableFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
    ///
    /// ``` self: QtC.QTextFormat ```
    pub fn ToFrameFormat(self: ?*anyopaque) QtC.QTextFrameFormat {
        return qtc.QTextFormat_ToFrameFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
    ///
    /// ``` self: QtC.QTextFormat ```
    pub fn ToImageFormat(self: ?*anyopaque) QtC.QTextImageFormat {
        return qtc.QTextFormat_ToImageFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
    ///
    /// ``` self: QtC.QTextFormat ```
    pub fn ToTableCellFormat(self: ?*anyopaque) QtC.QTextTableCellFormat {
        return qtc.QTextFormat_ToTableCellFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QTextFormat, rhs: QtC.QTextFormat ```
    pub fn OperatorEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextFormat_OperatorEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
    ///
    /// ``` self: QtC.QTextFormat, rhs: QtC.QTextFormat ```
    pub fn OperatorNotEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextFormat_OperatorNotEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator)
    ///
    /// ``` self: QtC.QTextFormat ```
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QTextFormat_ToQVariant(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
    ///
    /// ``` self: QtC.QTextFormat, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i64) void {
        qtc.QTextFormat_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
    ///
    /// ``` self: QtC.QTextFormat ```
    pub fn LayoutDirection(self: ?*anyopaque) i64 {
        return qtc.QTextFormat_LayoutDirection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
    ///
    /// ``` self: QtC.QTextFormat, brush: QtC.QBrush ```
    pub fn SetBackground(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTextFormat_SetBackground(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#background)
    ///
    /// ``` self: QtC.QTextFormat ```
    pub fn Background(self: ?*anyopaque) QtC.QBrush {
        return qtc.QTextFormat_Background(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
    ///
    /// ``` self: QtC.QTextFormat ```
    pub fn ClearBackground(self: ?*anyopaque) void {
        qtc.QTextFormat_ClearBackground(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
    ///
    /// ``` self: QtC.QTextFormat, brush: QtC.QBrush ```
    pub fn SetForeground(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTextFormat_SetForeground(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#foreground)
    ///
    /// ``` self: QtC.QTextFormat ```
    pub fn Foreground(self: ?*anyopaque) QtC.QBrush {
        return qtc.QTextFormat_Foreground(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
    ///
    /// ``` self: QtC.QTextFormat ```
    pub fn ClearForeground(self: ?*anyopaque) void {
        qtc.QTextFormat_ClearForeground(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#dtor.QTextFormat)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTextFormat ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextFormat_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextcharformat.html
pub const qtextcharformat = struct {
    /// New constructs a new QTextCharFormat object.
    ///
    ///
    pub fn New() QtC.QTextCharFormat {
        return qtc.QTextCharFormat_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#isValid)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QTextCharFormat_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
    ///
    /// ``` self: QtC.QTextCharFormat, font: QtC.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QTextCharFormat_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#font)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QTextCharFormat_Font(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamily)
    ///
    /// ``` self: QtC.QTextCharFormat, family: []const u8 ```
    pub fn SetFontFamily(self: ?*anyopaque, family: []const u8) void {
        const family_str = qtc.struct_libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        qtc.QTextCharFormat_SetFontFamily(@ptrCast(self), family_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamily)
    ///
    /// ``` self: QtC.QTextCharFormat, allocator: std.mem.Allocator ```
    pub fn FontFamily(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextCharFormat_FontFamily(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextcharformat.FontFamily: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamilies)
    ///
    /// ``` self: QtC.QTextCharFormat, families: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetFontFamilies(self: ?*anyopaque, families: [][]const u8, allocator: std.mem.Allocator) void {
        var families_arr = allocator.alloc(qtc.struct_libqt_string, families.len) catch @panic("qtextcharformat.SetFontFamilies: Memory allocation failed");
        defer allocator.free(families_arr);
        for (families, 0..families.len) |item, i| {
            families_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const families_list = qtc.struct_libqt_list{
            .len = families.len,
            .data = families_arr.ptr,
        };
        qtc.QTextCharFormat_SetFontFamilies(@ptrCast(self), families_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamilies)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn FontFamilies(self: ?*anyopaque) QtC.QVariant {
        return qtc.QTextCharFormat_FontFamilies(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleName)
    ///
    /// ``` self: QtC.QTextCharFormat, styleName: []const u8 ```
    pub fn SetFontStyleName(self: ?*anyopaque, styleName: []const u8) void {
        const styleName_str = qtc.struct_libqt_string{
            .len = styleName.len,
            .data = styleName.ptr,
        };
        qtc.QTextCharFormat_SetFontStyleName(@ptrCast(self), styleName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleName)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn FontStyleName(self: ?*anyopaque) QtC.QVariant {
        return qtc.QTextCharFormat_FontStyleName(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontPointSize)
    ///
    /// ``` self: QtC.QTextCharFormat, size: f64 ```
    pub fn SetFontPointSize(self: ?*anyopaque, size: f64) void {
        qtc.QTextCharFormat_SetFontPointSize(@ptrCast(self), @floatCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontPointSize)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn FontPointSize(self: ?*anyopaque) f64 {
        return qtc.QTextCharFormat_FontPointSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWeight)
    ///
    /// ``` self: QtC.QTextCharFormat, weight: i32 ```
    pub fn SetFontWeight(self: ?*anyopaque, weight: i32) void {
        qtc.QTextCharFormat_SetFontWeight(@ptrCast(self), @intCast(weight));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontWeight)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn FontWeight(self: ?*anyopaque) i32 {
        return qtc.QTextCharFormat_FontWeight(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontItalic)
    ///
    /// ``` self: QtC.QTextCharFormat, italic: bool ```
    pub fn SetFontItalic(self: ?*anyopaque, italic: bool) void {
        qtc.QTextCharFormat_SetFontItalic(@ptrCast(self), italic);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontItalic)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn FontItalic(self: ?*anyopaque) bool {
        return qtc.QTextCharFormat_FontItalic(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontCapitalization)
    ///
    /// ``` self: QtC.QTextCharFormat, capitalization: qfont_enums.Capitalization ```
    pub fn SetFontCapitalization(self: ?*anyopaque, capitalization: i64) void {
        qtc.QTextCharFormat_SetFontCapitalization(@ptrCast(self), @intCast(capitalization));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontCapitalization)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn FontCapitalization(self: ?*anyopaque) i64 {
        return qtc.QTextCharFormat_FontCapitalization(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacingType)
    ///
    /// ``` self: QtC.QTextCharFormat, letterSpacingType: qfont_enums.SpacingType ```
    pub fn SetFontLetterSpacingType(self: ?*anyopaque, letterSpacingType: i64) void {
        qtc.QTextCharFormat_SetFontLetterSpacingType(@ptrCast(self), @intCast(letterSpacingType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacingType)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn FontLetterSpacingType(self: ?*anyopaque) i64 {
        return qtc.QTextCharFormat_FontLetterSpacingType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacing)
    ///
    /// ``` self: QtC.QTextCharFormat, spacing: f64 ```
    pub fn SetFontLetterSpacing(self: ?*anyopaque, spacing: f64) void {
        qtc.QTextCharFormat_SetFontLetterSpacing(@ptrCast(self), @floatCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacing)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn FontLetterSpacing(self: ?*anyopaque) f64 {
        return qtc.QTextCharFormat_FontLetterSpacing(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWordSpacing)
    ///
    /// ``` self: QtC.QTextCharFormat, spacing: f64 ```
    pub fn SetFontWordSpacing(self: ?*anyopaque, spacing: f64) void {
        qtc.QTextCharFormat_SetFontWordSpacing(@ptrCast(self), @floatCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontWordSpacing)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn FontWordSpacing(self: ?*anyopaque) f64 {
        return qtc.QTextCharFormat_FontWordSpacing(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontUnderline)
    ///
    /// ``` self: QtC.QTextCharFormat, underline: bool ```
    pub fn SetFontUnderline(self: ?*anyopaque, underline: bool) void {
        qtc.QTextCharFormat_SetFontUnderline(@ptrCast(self), underline);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontUnderline)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn FontUnderline(self: ?*anyopaque) bool {
        return qtc.QTextCharFormat_FontUnderline(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontOverline)
    ///
    /// ``` self: QtC.QTextCharFormat, overline: bool ```
    pub fn SetFontOverline(self: ?*anyopaque, overline: bool) void {
        qtc.QTextCharFormat_SetFontOverline(@ptrCast(self), overline);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontOverline)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn FontOverline(self: ?*anyopaque) bool {
        return qtc.QTextCharFormat_FontOverline(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStrikeOut)
    ///
    /// ``` self: QtC.QTextCharFormat, strikeOut: bool ```
    pub fn SetFontStrikeOut(self: ?*anyopaque, strikeOut: bool) void {
        qtc.QTextCharFormat_SetFontStrikeOut(@ptrCast(self), strikeOut);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStrikeOut)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn FontStrikeOut(self: ?*anyopaque) bool {
        return qtc.QTextCharFormat_FontStrikeOut(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineColor)
    ///
    /// ``` self: QtC.QTextCharFormat, color: QtC.QColor ```
    pub fn SetUnderlineColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QTextCharFormat_SetUnderlineColor(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#underlineColor)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn UnderlineColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QTextCharFormat_UnderlineColor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFixedPitch)
    ///
    /// ``` self: QtC.QTextCharFormat, fixedPitch: bool ```
    pub fn SetFontFixedPitch(self: ?*anyopaque, fixedPitch: bool) void {
        qtc.QTextCharFormat_SetFontFixedPitch(@ptrCast(self), fixedPitch);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontFixedPitch)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn FontFixedPitch(self: ?*anyopaque) bool {
        return qtc.QTextCharFormat_FontFixedPitch(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStretch)
    ///
    /// ``` self: QtC.QTextCharFormat, factor: i32 ```
    pub fn SetFontStretch(self: ?*anyopaque, factor: i32) void {
        qtc.QTextCharFormat_SetFontStretch(@ptrCast(self), @intCast(factor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStretch)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn FontStretch(self: ?*anyopaque) i32 {
        return qtc.QTextCharFormat_FontStretch(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
    ///
    /// ``` self: QtC.QTextCharFormat, hint: qfont_enums.StyleHint ```
    pub fn SetFontStyleHint(self: ?*anyopaque, hint: i64) void {
        qtc.QTextCharFormat_SetFontStyleHint(@ptrCast(self), @intCast(hint));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleStrategy)
    ///
    /// ``` self: QtC.QTextCharFormat, strategy: qfont_enums.StyleStrategy ```
    pub fn SetFontStyleStrategy(self: ?*anyopaque, strategy: i64) void {
        qtc.QTextCharFormat_SetFontStyleStrategy(@ptrCast(self), @intCast(strategy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleHint)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn FontStyleHint(self: ?*anyopaque) i64 {
        return qtc.QTextCharFormat_FontStyleHint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleStrategy)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn FontStyleStrategy(self: ?*anyopaque) i64 {
        return qtc.QTextCharFormat_FontStyleStrategy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontHintingPreference)
    ///
    /// ``` self: QtC.QTextCharFormat, hintingPreference: qfont_enums.HintingPreference ```
    pub fn SetFontHintingPreference(self: ?*anyopaque, hintingPreference: i64) void {
        qtc.QTextCharFormat_SetFontHintingPreference(@ptrCast(self), @intCast(hintingPreference));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontHintingPreference)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn FontHintingPreference(self: ?*anyopaque) i64 {
        return qtc.QTextCharFormat_FontHintingPreference(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontKerning)
    ///
    /// ``` self: QtC.QTextCharFormat, enable: bool ```
    pub fn SetFontKerning(self: ?*anyopaque, enable: bool) void {
        qtc.QTextCharFormat_SetFontKerning(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontKerning)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn FontKerning(self: ?*anyopaque) bool {
        return qtc.QTextCharFormat_FontKerning(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineStyle)
    ///
    /// ``` self: QtC.QTextCharFormat, style: qtextformat_enums.UnderlineStyle ```
    pub fn SetUnderlineStyle(self: ?*anyopaque, style: i64) void {
        qtc.QTextCharFormat_SetUnderlineStyle(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#underlineStyle)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn UnderlineStyle(self: ?*anyopaque) i64 {
        return qtc.QTextCharFormat_UnderlineStyle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setVerticalAlignment)
    ///
    /// ``` self: QtC.QTextCharFormat, alignment: qtextformat_enums.VerticalAlignment ```
    pub fn SetVerticalAlignment(self: ?*anyopaque, alignment: i64) void {
        qtc.QTextCharFormat_SetVerticalAlignment(@ptrCast(self), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#verticalAlignment)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn VerticalAlignment(self: ?*anyopaque) i64 {
        return qtc.QTextCharFormat_VerticalAlignment(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setTextOutline)
    ///
    /// ``` self: QtC.QTextCharFormat, pen: QtC.QPen ```
    pub fn SetTextOutline(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QTextCharFormat_SetTextOutline(@ptrCast(self), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#textOutline)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn TextOutline(self: ?*anyopaque) QtC.QPen {
        return qtc.QTextCharFormat_TextOutline(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setToolTip)
    ///
    /// ``` self: QtC.QTextCharFormat, tip: []const u8 ```
    pub fn SetToolTip(self: ?*anyopaque, tip: []const u8) void {
        const tip_str = qtc.struct_libqt_string{
            .len = tip.len,
            .data = tip.ptr,
        };
        qtc.QTextCharFormat_SetToolTip(@ptrCast(self), tip_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#toolTip)
    ///
    /// ``` self: QtC.QTextCharFormat, allocator: std.mem.Allocator ```
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextCharFormat_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextcharformat.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setSuperScriptBaseline)
    ///
    /// ``` self: QtC.QTextCharFormat, baseline: f64 ```
    pub fn SetSuperScriptBaseline(self: ?*anyopaque, baseline: f64) void {
        qtc.QTextCharFormat_SetSuperScriptBaseline(@ptrCast(self), @floatCast(baseline));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#superScriptBaseline)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn SuperScriptBaseline(self: ?*anyopaque) f64 {
        return qtc.QTextCharFormat_SuperScriptBaseline(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setSubScriptBaseline)
    ///
    /// ``` self: QtC.QTextCharFormat, baseline: f64 ```
    pub fn SetSubScriptBaseline(self: ?*anyopaque, baseline: f64) void {
        qtc.QTextCharFormat_SetSubScriptBaseline(@ptrCast(self), @floatCast(baseline));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#subScriptBaseline)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn SubScriptBaseline(self: ?*anyopaque) f64 {
        return qtc.QTextCharFormat_SubScriptBaseline(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setBaselineOffset)
    ///
    /// ``` self: QtC.QTextCharFormat, baseline: f64 ```
    pub fn SetBaselineOffset(self: ?*anyopaque, baseline: f64) void {
        qtc.QTextCharFormat_SetBaselineOffset(@ptrCast(self), @floatCast(baseline));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#baselineOffset)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn BaselineOffset(self: ?*anyopaque) f64 {
        return qtc.QTextCharFormat_BaselineOffset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchor)
    ///
    /// ``` self: QtC.QTextCharFormat, anchor: bool ```
    pub fn SetAnchor(self: ?*anyopaque, anchor: bool) void {
        qtc.QTextCharFormat_SetAnchor(@ptrCast(self), anchor);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#isAnchor)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn IsAnchor(self: ?*anyopaque) bool {
        return qtc.QTextCharFormat_IsAnchor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorHref)
    ///
    /// ``` self: QtC.QTextCharFormat, value: []const u8 ```
    pub fn SetAnchorHref(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.struct_libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QTextCharFormat_SetAnchorHref(@ptrCast(self), value_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#anchorHref)
    ///
    /// ``` self: QtC.QTextCharFormat, allocator: std.mem.Allocator ```
    pub fn AnchorHref(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextCharFormat_AnchorHref(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextcharformat.AnchorHref: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorNames)
    ///
    /// ``` self: QtC.QTextCharFormat, names: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetAnchorNames(self: ?*anyopaque, names: [][]const u8, allocator: std.mem.Allocator) void {
        var names_arr = allocator.alloc(qtc.struct_libqt_string, names.len) catch @panic("qtextcharformat.SetAnchorNames: Memory allocation failed");
        defer allocator.free(names_arr);
        for (names, 0..names.len) |item, i| {
            names_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const names_list = qtc.struct_libqt_list{
            .len = names.len,
            .data = names_arr.ptr,
        };
        qtc.QTextCharFormat_SetAnchorNames(@ptrCast(self), names_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#anchorNames)
    ///
    /// ``` self: QtC.QTextCharFormat, allocator: std.mem.Allocator ```
    pub fn AnchorNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QTextCharFormat_AnchorNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qtextcharformat.AnchorNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtextcharformat.AnchorNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellRowSpan)
    ///
    /// ``` self: QtC.QTextCharFormat, tableCellRowSpan: i32 ```
    pub fn SetTableCellRowSpan(self: ?*anyopaque, tableCellRowSpan: i32) void {
        qtc.QTextCharFormat_SetTableCellRowSpan(@ptrCast(self), @intCast(tableCellRowSpan));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellRowSpan)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn TableCellRowSpan(self: ?*anyopaque) i32 {
        return qtc.QTextCharFormat_TableCellRowSpan(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellColumnSpan)
    ///
    /// ``` self: QtC.QTextCharFormat, tableCellColumnSpan: i32 ```
    pub fn SetTableCellColumnSpan(self: ?*anyopaque, tableCellColumnSpan: i32) void {
        qtc.QTextCharFormat_SetTableCellColumnSpan(@ptrCast(self), @intCast(tableCellColumnSpan));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellColumnSpan)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn TableCellColumnSpan(self: ?*anyopaque) i32 {
        return qtc.QTextCharFormat_TableCellColumnSpan(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
    ///
    /// ``` self: QtC.QTextCharFormat, font: QtC.QFont, behavior: qtextformat_enums.FontPropertiesInheritanceBehavior ```
    pub fn SetFont2(self: ?*anyopaque, font: ?*anyopaque, behavior: i64) void {
        qtc.QTextCharFormat_SetFont2(@ptrCast(self), @ptrCast(font), @intCast(behavior));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
    ///
    /// ``` self: QtC.QTextCharFormat, hint: qfont_enums.StyleHint, strategy: qfont_enums.StyleStrategy ```
    pub fn SetFontStyleHint2(self: ?*anyopaque, hint: i64, strategy: i64) void {
        qtc.QTextCharFormat_SetFontStyleHint2(@ptrCast(self), @intCast(hint), @intCast(strategy));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-eq)
    ///
    /// ``` self: QtC.QTextCharFormat, rhs: QtC.QTextFormat ```
    pub fn OperatorAssign(self: ?*anyopaque, rhs: ?*anyopaque) void {
        qtc.QTextFormat_OperatorAssign(@ptrCast(self), @ptrCast(rhs));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#swap)
    ///
    /// ``` self: QtC.QTextCharFormat, other: QtC.QTextFormat ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextFormat_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#merge)
    ///
    /// ``` self: QtC.QTextCharFormat, other: QtC.QTextFormat ```
    pub fn Merge(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextFormat_Merge(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsEmpty(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#type)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_Type(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn ObjectIndex(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_ObjectIndex(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
    ///
    /// ``` self: QtC.QTextCharFormat, object: i32 ```
    pub fn SetObjectIndex(self: ?*anyopaque, object: i32) void {
        qtc.QTextFormat_SetObjectIndex(@ptrCast(self), @intCast(object));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#property)
    ///
    /// ``` self: QtC.QTextCharFormat, propertyId: i32 ```
    pub fn Property(self: ?*anyopaque, propertyId: i32) QtC.QVariant {
        return qtc.QTextFormat_Property(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ``` self: QtC.QTextCharFormat, propertyId: i32, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, propertyId: i32, value: ?*anyopaque) void {
        qtc.QTextFormat_SetProperty(@ptrCast(self), @intCast(propertyId), @ptrCast(value));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
    ///
    /// ``` self: QtC.QTextCharFormat, propertyId: i32 ```
    pub fn ClearProperty(self: ?*anyopaque, propertyId: i32) void {
        qtc.QTextFormat_ClearProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
    ///
    /// ``` self: QtC.QTextCharFormat, propertyId: i32 ```
    pub fn HasProperty(self: ?*anyopaque, propertyId: i32) bool {
        return qtc.QTextFormat_HasProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
    ///
    /// ``` self: QtC.QTextCharFormat, propertyId: i32 ```
    pub fn BoolProperty(self: ?*anyopaque, propertyId: i32) bool {
        return qtc.QTextFormat_BoolProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
    ///
    /// ``` self: QtC.QTextCharFormat, propertyId: i32 ```
    pub fn IntProperty(self: ?*anyopaque, propertyId: i32) i32 {
        return qtc.QTextFormat_IntProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
    ///
    /// ``` self: QtC.QTextCharFormat, propertyId: i32 ```
    pub fn DoubleProperty(self: ?*anyopaque, propertyId: i32) f64 {
        return qtc.QTextFormat_DoubleProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
    ///
    /// ``` self: QtC.QTextCharFormat, propertyId: i32, allocator: std.mem.Allocator ```
    pub fn StringProperty(self: ?*anyopaque, propertyId: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextFormat_StringProperty(@ptrCast(self), @intCast(propertyId));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextcharformat.StringProperty: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
    ///
    /// ``` self: QtC.QTextCharFormat, propertyId: i32 ```
    pub fn ColorProperty(self: ?*anyopaque, propertyId: i32) QtC.QColor {
        return qtc.QTextFormat_ColorProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
    ///
    /// ``` self: QtC.QTextCharFormat, propertyId: i32 ```
    pub fn PenProperty(self: ?*anyopaque, propertyId: i32) QtC.QPen {
        return qtc.QTextFormat_PenProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
    ///
    /// ``` self: QtC.QTextCharFormat, propertyId: i32 ```
    pub fn BrushProperty(self: ?*anyopaque, propertyId: i32) QtC.QBrush {
        return qtc.QTextFormat_BrushProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
    ///
    /// ``` self: QtC.QTextCharFormat, propertyId: i32 ```
    pub fn LengthProperty(self: ?*anyopaque, propertyId: i32) QtC.QTextLength {
        return qtc.QTextFormat_LengthProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
    ///
    /// ``` self: QtC.QTextCharFormat, propertyId: i32, allocator: std.mem.Allocator ```
    pub fn LengthVectorProperty(self: ?*anyopaque, propertyId: i32, allocator: std.mem.Allocator) []QtC.QTextLength {
        const _arr: qtc.struct_libqt_list = qtc.QTextFormat_LengthVectorProperty(@ptrCast(self), @intCast(propertyId));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QTextLength, _arr.len) catch @panic("qtextcharformat.LengthVectorProperty: Memory allocation failed");
        const _data: [*]QtC.QTextLength = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ``` self: QtC.QTextCharFormat, propertyId: i32, lengths: []QtC.QTextLength ```
    pub fn SetProperty2(self: ?*anyopaque, propertyId: i32, lengths: []QtC.QTextLength) void {
        const lengths_list = qtc.struct_libqt_list{
            .len = lengths.len,
            .data = @ptrCast(lengths.ptr),
        };
        qtc.QTextFormat_SetProperty2(@ptrCast(self), @intCast(propertyId), lengths_list);
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#properties)
    ///
    /// ``` self: QtC.QTextCharFormat, allocator: std.mem.Allocator ```
    pub fn Properties(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_qtcqvariant {
        const _map: qtc.struct_libqt_map = qtc.QTextFormat_Properties(@ptrCast(self));
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
            _ret.put(allocator, _key, _value) catch @panic("qtextcharformat.Properties: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn PropertyCount(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_PropertyCount(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
    ///
    /// ``` self: QtC.QTextCharFormat, typeVal: i32 ```
    pub fn SetObjectType(self: ?*anyopaque, typeVal: i32) void {
        qtc.QTextFormat_SetObjectType(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectType)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn ObjectType(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_ObjectType(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn IsCharFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsCharFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn IsBlockFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsBlockFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn IsListFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsListFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn IsFrameFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsFrameFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn IsImageFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsImageFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn IsTableFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsTableFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn IsTableCellFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsTableCellFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn ToBlockFormat(self: ?*anyopaque) QtC.QTextBlockFormat {
        return qtc.QTextFormat_ToBlockFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn ToCharFormat(self: ?*anyopaque) QtC.QTextCharFormat {
        return qtc.QTextFormat_ToCharFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn ToListFormat(self: ?*anyopaque) QtC.QTextListFormat {
        return qtc.QTextFormat_ToListFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn ToTableFormat(self: ?*anyopaque) QtC.QTextTableFormat {
        return qtc.QTextFormat_ToTableFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn ToFrameFormat(self: ?*anyopaque) QtC.QTextFrameFormat {
        return qtc.QTextFormat_ToFrameFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn ToImageFormat(self: ?*anyopaque) QtC.QTextImageFormat {
        return qtc.QTextFormat_ToImageFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn ToTableCellFormat(self: ?*anyopaque) QtC.QTextTableCellFormat {
        return qtc.QTextFormat_ToTableCellFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QTextCharFormat, rhs: QtC.QTextFormat ```
    pub fn OperatorEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextFormat_OperatorEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
    ///
    /// ``` self: QtC.QTextCharFormat, rhs: QtC.QTextFormat ```
    pub fn OperatorNotEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextFormat_OperatorNotEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QTextFormat_ToQVariant(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
    ///
    /// ``` self: QtC.QTextCharFormat, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i64) void {
        qtc.QTextFormat_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn LayoutDirection(self: ?*anyopaque) i64 {
        return qtc.QTextFormat_LayoutDirection(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
    ///
    /// ``` self: QtC.QTextCharFormat, brush: QtC.QBrush ```
    pub fn SetBackground(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTextFormat_SetBackground(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#background)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn Background(self: ?*anyopaque) QtC.QBrush {
        return qtc.QTextFormat_Background(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn ClearBackground(self: ?*anyopaque) void {
        qtc.QTextFormat_ClearBackground(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
    ///
    /// ``` self: QtC.QTextCharFormat, brush: QtC.QBrush ```
    pub fn SetForeground(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTextFormat_SetForeground(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#foreground)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn Foreground(self: ?*anyopaque) QtC.QBrush {
        return qtc.QTextFormat_Foreground(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn ClearForeground(self: ?*anyopaque) void {
        qtc.QTextFormat_ClearForeground(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#dtor.QTextCharFormat)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTextCharFormat ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextCharFormat_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextblockformat.html
pub const qtextblockformat = struct {
    /// New constructs a new QTextBlockFormat object.
    ///
    ///
    pub fn New() QtC.QTextBlockFormat {
        return qtc.QTextBlockFormat_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#isValid)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QTextBlockFormat_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setAlignment)
    ///
    /// ``` self: QtC.QTextBlockFormat, alignment: i32 ```
    pub fn SetAlignment(self: ?*anyopaque, alignment: i64) void {
        qtc.QTextBlockFormat_SetAlignment(@ptrCast(self), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#alignment)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn Alignment(self: ?*anyopaque) i64 {
        return qtc.QTextBlockFormat_Alignment(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setTopMargin)
    ///
    /// ``` self: QtC.QTextBlockFormat, margin: f64 ```
    pub fn SetTopMargin(self: ?*anyopaque, margin: f64) void {
        qtc.QTextBlockFormat_SetTopMargin(@ptrCast(self), @floatCast(margin));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#topMargin)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn TopMargin(self: ?*anyopaque) f64 {
        return qtc.QTextBlockFormat_TopMargin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setBottomMargin)
    ///
    /// ``` self: QtC.QTextBlockFormat, margin: f64 ```
    pub fn SetBottomMargin(self: ?*anyopaque, margin: f64) void {
        qtc.QTextBlockFormat_SetBottomMargin(@ptrCast(self), @floatCast(margin));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#bottomMargin)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn BottomMargin(self: ?*anyopaque) f64 {
        return qtc.QTextBlockFormat_BottomMargin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setLeftMargin)
    ///
    /// ``` self: QtC.QTextBlockFormat, margin: f64 ```
    pub fn SetLeftMargin(self: ?*anyopaque, margin: f64) void {
        qtc.QTextBlockFormat_SetLeftMargin(@ptrCast(self), @floatCast(margin));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#leftMargin)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn LeftMargin(self: ?*anyopaque) f64 {
        return qtc.QTextBlockFormat_LeftMargin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setRightMargin)
    ///
    /// ``` self: QtC.QTextBlockFormat, margin: f64 ```
    pub fn SetRightMargin(self: ?*anyopaque, margin: f64) void {
        qtc.QTextBlockFormat_SetRightMargin(@ptrCast(self), @floatCast(margin));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#rightMargin)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn RightMargin(self: ?*anyopaque) f64 {
        return qtc.QTextBlockFormat_RightMargin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setTextIndent)
    ///
    /// ``` self: QtC.QTextBlockFormat, aindent: f64 ```
    pub fn SetTextIndent(self: ?*anyopaque, aindent: f64) void {
        qtc.QTextBlockFormat_SetTextIndent(@ptrCast(self), @floatCast(aindent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#textIndent)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn TextIndent(self: ?*anyopaque) f64 {
        return qtc.QTextBlockFormat_TextIndent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setIndent)
    ///
    /// ``` self: QtC.QTextBlockFormat, indent: i32 ```
    pub fn SetIndent(self: ?*anyopaque, indent: i32) void {
        qtc.QTextBlockFormat_SetIndent(@ptrCast(self), @intCast(indent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#indent)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn Indent(self: ?*anyopaque) i32 {
        return qtc.QTextBlockFormat_Indent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setHeadingLevel)
    ///
    /// ``` self: QtC.QTextBlockFormat, alevel: i32 ```
    pub fn SetHeadingLevel(self: ?*anyopaque, alevel: i32) void {
        qtc.QTextBlockFormat_SetHeadingLevel(@ptrCast(self), @intCast(alevel));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#headingLevel)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn HeadingLevel(self: ?*anyopaque) i32 {
        return qtc.QTextBlockFormat_HeadingLevel(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setLineHeight)
    ///
    /// ``` self: QtC.QTextBlockFormat, height: f64, heightType: i32 ```
    pub fn SetLineHeight(self: ?*anyopaque, height: f64, heightType: i32) void {
        qtc.QTextBlockFormat_SetLineHeight(@ptrCast(self), @floatCast(height), @intCast(heightType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#lineHeight)
    ///
    /// ``` self: QtC.QTextBlockFormat, scriptLineHeight: f64, scaling: f64 ```
    pub fn LineHeight(self: ?*anyopaque, scriptLineHeight: f64, scaling: f64) f64 {
        return qtc.QTextBlockFormat_LineHeight(@ptrCast(self), @floatCast(scriptLineHeight), @floatCast(scaling));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#lineHeight)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn LineHeight2(self: ?*anyopaque) f64 {
        return qtc.QTextBlockFormat_LineHeight2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#lineHeightType)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn LineHeightType(self: ?*anyopaque) i32 {
        return qtc.QTextBlockFormat_LineHeightType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setNonBreakableLines)
    ///
    /// ``` self: QtC.QTextBlockFormat, b: bool ```
    pub fn SetNonBreakableLines(self: ?*anyopaque, b: bool) void {
        qtc.QTextBlockFormat_SetNonBreakableLines(@ptrCast(self), b);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#nonBreakableLines)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn NonBreakableLines(self: ?*anyopaque) bool {
        return qtc.QTextBlockFormat_NonBreakableLines(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setPageBreakPolicy)
    ///
    /// ``` self: QtC.QTextBlockFormat, flags: i32 ```
    pub fn SetPageBreakPolicy(self: ?*anyopaque, flags: i64) void {
        qtc.QTextBlockFormat_SetPageBreakPolicy(@ptrCast(self), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#pageBreakPolicy)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn PageBreakPolicy(self: ?*anyopaque) i64 {
        return qtc.QTextBlockFormat_PageBreakPolicy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setTabPositions)
    ///
    /// ``` self: QtC.QTextBlockFormat, tabs: []QtC.QTextOption__Tab ```
    pub fn SetTabPositions(self: ?*anyopaque, tabs: []QtC.QTextOption__Tab) void {
        const tabs_list = qtc.struct_libqt_list{
            .len = tabs.len,
            .data = @ptrCast(tabs.ptr),
        };
        qtc.QTextBlockFormat_SetTabPositions(@ptrCast(self), tabs_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#tabPositions)
    ///
    /// ``` self: QtC.QTextBlockFormat, allocator: std.mem.Allocator ```
    pub fn TabPositions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QTextOption__Tab {
        const _arr: qtc.struct_libqt_list = qtc.QTextBlockFormat_TabPositions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QTextOption__Tab, _arr.len) catch @panic("qtextblockformat.TabPositions: Memory allocation failed");
        const _data: [*]QtC.QTextOption__Tab = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setMarker)
    ///
    /// ``` self: QtC.QTextBlockFormat, marker: qtextformat_enums.MarkerType ```
    pub fn SetMarker(self: ?*anyopaque, marker: i64) void {
        qtc.QTextBlockFormat_SetMarker(@ptrCast(self), @intCast(marker));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#marker)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn Marker(self: ?*anyopaque) i64 {
        return qtc.QTextBlockFormat_Marker(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-eq)
    ///
    /// ``` self: QtC.QTextBlockFormat, rhs: QtC.QTextFormat ```
    pub fn OperatorAssign(self: ?*anyopaque, rhs: ?*anyopaque) void {
        qtc.QTextFormat_OperatorAssign(@ptrCast(self), @ptrCast(rhs));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#swap)
    ///
    /// ``` self: QtC.QTextBlockFormat, other: QtC.QTextFormat ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextFormat_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#merge)
    ///
    /// ``` self: QtC.QTextBlockFormat, other: QtC.QTextFormat ```
    pub fn Merge(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextFormat_Merge(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsEmpty(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#type)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_Type(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn ObjectIndex(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_ObjectIndex(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
    ///
    /// ``` self: QtC.QTextBlockFormat, object: i32 ```
    pub fn SetObjectIndex(self: ?*anyopaque, object: i32) void {
        qtc.QTextFormat_SetObjectIndex(@ptrCast(self), @intCast(object));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#property)
    ///
    /// ``` self: QtC.QTextBlockFormat, propertyId: i32 ```
    pub fn Property(self: ?*anyopaque, propertyId: i32) QtC.QVariant {
        return qtc.QTextFormat_Property(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ``` self: QtC.QTextBlockFormat, propertyId: i32, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, propertyId: i32, value: ?*anyopaque) void {
        qtc.QTextFormat_SetProperty(@ptrCast(self), @intCast(propertyId), @ptrCast(value));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
    ///
    /// ``` self: QtC.QTextBlockFormat, propertyId: i32 ```
    pub fn ClearProperty(self: ?*anyopaque, propertyId: i32) void {
        qtc.QTextFormat_ClearProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
    ///
    /// ``` self: QtC.QTextBlockFormat, propertyId: i32 ```
    pub fn HasProperty(self: ?*anyopaque, propertyId: i32) bool {
        return qtc.QTextFormat_HasProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
    ///
    /// ``` self: QtC.QTextBlockFormat, propertyId: i32 ```
    pub fn BoolProperty(self: ?*anyopaque, propertyId: i32) bool {
        return qtc.QTextFormat_BoolProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
    ///
    /// ``` self: QtC.QTextBlockFormat, propertyId: i32 ```
    pub fn IntProperty(self: ?*anyopaque, propertyId: i32) i32 {
        return qtc.QTextFormat_IntProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
    ///
    /// ``` self: QtC.QTextBlockFormat, propertyId: i32 ```
    pub fn DoubleProperty(self: ?*anyopaque, propertyId: i32) f64 {
        return qtc.QTextFormat_DoubleProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
    ///
    /// ``` self: QtC.QTextBlockFormat, propertyId: i32, allocator: std.mem.Allocator ```
    pub fn StringProperty(self: ?*anyopaque, propertyId: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextFormat_StringProperty(@ptrCast(self), @intCast(propertyId));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextblockformat.StringProperty: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
    ///
    /// ``` self: QtC.QTextBlockFormat, propertyId: i32 ```
    pub fn ColorProperty(self: ?*anyopaque, propertyId: i32) QtC.QColor {
        return qtc.QTextFormat_ColorProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
    ///
    /// ``` self: QtC.QTextBlockFormat, propertyId: i32 ```
    pub fn PenProperty(self: ?*anyopaque, propertyId: i32) QtC.QPen {
        return qtc.QTextFormat_PenProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
    ///
    /// ``` self: QtC.QTextBlockFormat, propertyId: i32 ```
    pub fn BrushProperty(self: ?*anyopaque, propertyId: i32) QtC.QBrush {
        return qtc.QTextFormat_BrushProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
    ///
    /// ``` self: QtC.QTextBlockFormat, propertyId: i32 ```
    pub fn LengthProperty(self: ?*anyopaque, propertyId: i32) QtC.QTextLength {
        return qtc.QTextFormat_LengthProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
    ///
    /// ``` self: QtC.QTextBlockFormat, propertyId: i32, allocator: std.mem.Allocator ```
    pub fn LengthVectorProperty(self: ?*anyopaque, propertyId: i32, allocator: std.mem.Allocator) []QtC.QTextLength {
        const _arr: qtc.struct_libqt_list = qtc.QTextFormat_LengthVectorProperty(@ptrCast(self), @intCast(propertyId));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QTextLength, _arr.len) catch @panic("qtextblockformat.LengthVectorProperty: Memory allocation failed");
        const _data: [*]QtC.QTextLength = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ``` self: QtC.QTextBlockFormat, propertyId: i32, lengths: []QtC.QTextLength ```
    pub fn SetProperty2(self: ?*anyopaque, propertyId: i32, lengths: []QtC.QTextLength) void {
        const lengths_list = qtc.struct_libqt_list{
            .len = lengths.len,
            .data = @ptrCast(lengths.ptr),
        };
        qtc.QTextFormat_SetProperty2(@ptrCast(self), @intCast(propertyId), lengths_list);
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#properties)
    ///
    /// ``` self: QtC.QTextBlockFormat, allocator: std.mem.Allocator ```
    pub fn Properties(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_qtcqvariant {
        const _map: qtc.struct_libqt_map = qtc.QTextFormat_Properties(@ptrCast(self));
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
            _ret.put(allocator, _key, _value) catch @panic("qtextblockformat.Properties: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn PropertyCount(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_PropertyCount(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
    ///
    /// ``` self: QtC.QTextBlockFormat, typeVal: i32 ```
    pub fn SetObjectType(self: ?*anyopaque, typeVal: i32) void {
        qtc.QTextFormat_SetObjectType(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectType)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn ObjectType(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_ObjectType(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn IsCharFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsCharFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn IsBlockFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsBlockFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn IsListFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsListFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn IsFrameFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsFrameFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn IsImageFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsImageFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn IsTableFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsTableFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn IsTableCellFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsTableCellFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn ToBlockFormat(self: ?*anyopaque) QtC.QTextBlockFormat {
        return qtc.QTextFormat_ToBlockFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn ToCharFormat(self: ?*anyopaque) QtC.QTextCharFormat {
        return qtc.QTextFormat_ToCharFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn ToListFormat(self: ?*anyopaque) QtC.QTextListFormat {
        return qtc.QTextFormat_ToListFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn ToTableFormat(self: ?*anyopaque) QtC.QTextTableFormat {
        return qtc.QTextFormat_ToTableFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn ToFrameFormat(self: ?*anyopaque) QtC.QTextFrameFormat {
        return qtc.QTextFormat_ToFrameFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn ToImageFormat(self: ?*anyopaque) QtC.QTextImageFormat {
        return qtc.QTextFormat_ToImageFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn ToTableCellFormat(self: ?*anyopaque) QtC.QTextTableCellFormat {
        return qtc.QTextFormat_ToTableCellFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QTextBlockFormat, rhs: QtC.QTextFormat ```
    pub fn OperatorEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextFormat_OperatorEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
    ///
    /// ``` self: QtC.QTextBlockFormat, rhs: QtC.QTextFormat ```
    pub fn OperatorNotEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextFormat_OperatorNotEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QTextFormat_ToQVariant(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
    ///
    /// ``` self: QtC.QTextBlockFormat, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i64) void {
        qtc.QTextFormat_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn LayoutDirection(self: ?*anyopaque) i64 {
        return qtc.QTextFormat_LayoutDirection(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
    ///
    /// ``` self: QtC.QTextBlockFormat, brush: QtC.QBrush ```
    pub fn SetBackground(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTextFormat_SetBackground(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#background)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn Background(self: ?*anyopaque) QtC.QBrush {
        return qtc.QTextFormat_Background(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn ClearBackground(self: ?*anyopaque) void {
        qtc.QTextFormat_ClearBackground(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
    ///
    /// ``` self: QtC.QTextBlockFormat, brush: QtC.QBrush ```
    pub fn SetForeground(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTextFormat_SetForeground(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#foreground)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn Foreground(self: ?*anyopaque) QtC.QBrush {
        return qtc.QTextFormat_Foreground(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn ClearForeground(self: ?*anyopaque) void {
        qtc.QTextFormat_ClearForeground(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#dtor.QTextBlockFormat)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTextBlockFormat ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextBlockFormat_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextlistformat.html
pub const qtextlistformat = struct {
    /// New constructs a new QTextListFormat object.
    ///
    ///
    pub fn New() QtC.QTextListFormat {
        return qtc.QTextListFormat_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#isValid)
    ///
    /// ``` self: QtC.QTextListFormat ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QTextListFormat_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#setStyle)
    ///
    /// ``` self: QtC.QTextListFormat, style: qtextformat_enums.Style ```
    pub fn SetStyle(self: ?*anyopaque, style: i64) void {
        qtc.QTextListFormat_SetStyle(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#style)
    ///
    /// ``` self: QtC.QTextListFormat ```
    pub fn Style(self: ?*anyopaque) i64 {
        return qtc.QTextListFormat_Style(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#setIndent)
    ///
    /// ``` self: QtC.QTextListFormat, indent: i32 ```
    pub fn SetIndent(self: ?*anyopaque, indent: i32) void {
        qtc.QTextListFormat_SetIndent(@ptrCast(self), @intCast(indent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#indent)
    ///
    /// ``` self: QtC.QTextListFormat ```
    pub fn Indent(self: ?*anyopaque) i32 {
        return qtc.QTextListFormat_Indent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#setNumberPrefix)
    ///
    /// ``` self: QtC.QTextListFormat, numberPrefix: []const u8 ```
    pub fn SetNumberPrefix(self: ?*anyopaque, numberPrefix: []const u8) void {
        const numberPrefix_str = qtc.struct_libqt_string{
            .len = numberPrefix.len,
            .data = numberPrefix.ptr,
        };
        qtc.QTextListFormat_SetNumberPrefix(@ptrCast(self), numberPrefix_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#numberPrefix)
    ///
    /// ``` self: QtC.QTextListFormat, allocator: std.mem.Allocator ```
    pub fn NumberPrefix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextListFormat_NumberPrefix(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextlistformat.NumberPrefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#setNumberSuffix)
    ///
    /// ``` self: QtC.QTextListFormat, numberSuffix: []const u8 ```
    pub fn SetNumberSuffix(self: ?*anyopaque, numberSuffix: []const u8) void {
        const numberSuffix_str = qtc.struct_libqt_string{
            .len = numberSuffix.len,
            .data = numberSuffix.ptr,
        };
        qtc.QTextListFormat_SetNumberSuffix(@ptrCast(self), numberSuffix_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#numberSuffix)
    ///
    /// ``` self: QtC.QTextListFormat, allocator: std.mem.Allocator ```
    pub fn NumberSuffix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextListFormat_NumberSuffix(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextlistformat.NumberSuffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#setStart)
    ///
    /// ``` self: QtC.QTextListFormat, indent: i32 ```
    pub fn SetStart(self: ?*anyopaque, indent: i32) void {
        qtc.QTextListFormat_SetStart(@ptrCast(self), @intCast(indent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#start)
    ///
    /// ``` self: QtC.QTextListFormat ```
    pub fn Start(self: ?*anyopaque) i32 {
        return qtc.QTextListFormat_Start(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-eq)
    ///
    /// ``` self: QtC.QTextListFormat, rhs: QtC.QTextFormat ```
    pub fn OperatorAssign(self: ?*anyopaque, rhs: ?*anyopaque) void {
        qtc.QTextFormat_OperatorAssign(@ptrCast(self), @ptrCast(rhs));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#swap)
    ///
    /// ``` self: QtC.QTextListFormat, other: QtC.QTextFormat ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextFormat_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#merge)
    ///
    /// ``` self: QtC.QTextListFormat, other: QtC.QTextFormat ```
    pub fn Merge(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextFormat_Merge(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
    ///
    /// ``` self: QtC.QTextListFormat ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsEmpty(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#type)
    ///
    /// ``` self: QtC.QTextListFormat ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_Type(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
    ///
    /// ``` self: QtC.QTextListFormat ```
    pub fn ObjectIndex(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_ObjectIndex(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
    ///
    /// ``` self: QtC.QTextListFormat, object: i32 ```
    pub fn SetObjectIndex(self: ?*anyopaque, object: i32) void {
        qtc.QTextFormat_SetObjectIndex(@ptrCast(self), @intCast(object));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#property)
    ///
    /// ``` self: QtC.QTextListFormat, propertyId: i32 ```
    pub fn Property(self: ?*anyopaque, propertyId: i32) QtC.QVariant {
        return qtc.QTextFormat_Property(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ``` self: QtC.QTextListFormat, propertyId: i32, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, propertyId: i32, value: ?*anyopaque) void {
        qtc.QTextFormat_SetProperty(@ptrCast(self), @intCast(propertyId), @ptrCast(value));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
    ///
    /// ``` self: QtC.QTextListFormat, propertyId: i32 ```
    pub fn ClearProperty(self: ?*anyopaque, propertyId: i32) void {
        qtc.QTextFormat_ClearProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
    ///
    /// ``` self: QtC.QTextListFormat, propertyId: i32 ```
    pub fn HasProperty(self: ?*anyopaque, propertyId: i32) bool {
        return qtc.QTextFormat_HasProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
    ///
    /// ``` self: QtC.QTextListFormat, propertyId: i32 ```
    pub fn BoolProperty(self: ?*anyopaque, propertyId: i32) bool {
        return qtc.QTextFormat_BoolProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
    ///
    /// ``` self: QtC.QTextListFormat, propertyId: i32 ```
    pub fn IntProperty(self: ?*anyopaque, propertyId: i32) i32 {
        return qtc.QTextFormat_IntProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
    ///
    /// ``` self: QtC.QTextListFormat, propertyId: i32 ```
    pub fn DoubleProperty(self: ?*anyopaque, propertyId: i32) f64 {
        return qtc.QTextFormat_DoubleProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
    ///
    /// ``` self: QtC.QTextListFormat, propertyId: i32, allocator: std.mem.Allocator ```
    pub fn StringProperty(self: ?*anyopaque, propertyId: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextFormat_StringProperty(@ptrCast(self), @intCast(propertyId));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextlistformat.StringProperty: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
    ///
    /// ``` self: QtC.QTextListFormat, propertyId: i32 ```
    pub fn ColorProperty(self: ?*anyopaque, propertyId: i32) QtC.QColor {
        return qtc.QTextFormat_ColorProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
    ///
    /// ``` self: QtC.QTextListFormat, propertyId: i32 ```
    pub fn PenProperty(self: ?*anyopaque, propertyId: i32) QtC.QPen {
        return qtc.QTextFormat_PenProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
    ///
    /// ``` self: QtC.QTextListFormat, propertyId: i32 ```
    pub fn BrushProperty(self: ?*anyopaque, propertyId: i32) QtC.QBrush {
        return qtc.QTextFormat_BrushProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
    ///
    /// ``` self: QtC.QTextListFormat, propertyId: i32 ```
    pub fn LengthProperty(self: ?*anyopaque, propertyId: i32) QtC.QTextLength {
        return qtc.QTextFormat_LengthProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
    ///
    /// ``` self: QtC.QTextListFormat, propertyId: i32, allocator: std.mem.Allocator ```
    pub fn LengthVectorProperty(self: ?*anyopaque, propertyId: i32, allocator: std.mem.Allocator) []QtC.QTextLength {
        const _arr: qtc.struct_libqt_list = qtc.QTextFormat_LengthVectorProperty(@ptrCast(self), @intCast(propertyId));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QTextLength, _arr.len) catch @panic("qtextlistformat.LengthVectorProperty: Memory allocation failed");
        const _data: [*]QtC.QTextLength = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ``` self: QtC.QTextListFormat, propertyId: i32, lengths: []QtC.QTextLength ```
    pub fn SetProperty2(self: ?*anyopaque, propertyId: i32, lengths: []QtC.QTextLength) void {
        const lengths_list = qtc.struct_libqt_list{
            .len = lengths.len,
            .data = @ptrCast(lengths.ptr),
        };
        qtc.QTextFormat_SetProperty2(@ptrCast(self), @intCast(propertyId), lengths_list);
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#properties)
    ///
    /// ``` self: QtC.QTextListFormat, allocator: std.mem.Allocator ```
    pub fn Properties(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_qtcqvariant {
        const _map: qtc.struct_libqt_map = qtc.QTextFormat_Properties(@ptrCast(self));
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
            _ret.put(allocator, _key, _value) catch @panic("qtextlistformat.Properties: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
    ///
    /// ``` self: QtC.QTextListFormat ```
    pub fn PropertyCount(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_PropertyCount(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
    ///
    /// ``` self: QtC.QTextListFormat, typeVal: i32 ```
    pub fn SetObjectType(self: ?*anyopaque, typeVal: i32) void {
        qtc.QTextFormat_SetObjectType(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectType)
    ///
    /// ``` self: QtC.QTextListFormat ```
    pub fn ObjectType(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_ObjectType(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
    ///
    /// ``` self: QtC.QTextListFormat ```
    pub fn IsCharFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsCharFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
    ///
    /// ``` self: QtC.QTextListFormat ```
    pub fn IsBlockFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsBlockFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
    ///
    /// ``` self: QtC.QTextListFormat ```
    pub fn IsListFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsListFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
    ///
    /// ``` self: QtC.QTextListFormat ```
    pub fn IsFrameFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsFrameFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
    ///
    /// ``` self: QtC.QTextListFormat ```
    pub fn IsImageFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsImageFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
    ///
    /// ``` self: QtC.QTextListFormat ```
    pub fn IsTableFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsTableFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
    ///
    /// ``` self: QtC.QTextListFormat ```
    pub fn IsTableCellFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsTableCellFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
    ///
    /// ``` self: QtC.QTextListFormat ```
    pub fn ToBlockFormat(self: ?*anyopaque) QtC.QTextBlockFormat {
        return qtc.QTextFormat_ToBlockFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
    ///
    /// ``` self: QtC.QTextListFormat ```
    pub fn ToCharFormat(self: ?*anyopaque) QtC.QTextCharFormat {
        return qtc.QTextFormat_ToCharFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
    ///
    /// ``` self: QtC.QTextListFormat ```
    pub fn ToListFormat(self: ?*anyopaque) QtC.QTextListFormat {
        return qtc.QTextFormat_ToListFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
    ///
    /// ``` self: QtC.QTextListFormat ```
    pub fn ToTableFormat(self: ?*anyopaque) QtC.QTextTableFormat {
        return qtc.QTextFormat_ToTableFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
    ///
    /// ``` self: QtC.QTextListFormat ```
    pub fn ToFrameFormat(self: ?*anyopaque) QtC.QTextFrameFormat {
        return qtc.QTextFormat_ToFrameFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
    ///
    /// ``` self: QtC.QTextListFormat ```
    pub fn ToImageFormat(self: ?*anyopaque) QtC.QTextImageFormat {
        return qtc.QTextFormat_ToImageFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
    ///
    /// ``` self: QtC.QTextListFormat ```
    pub fn ToTableCellFormat(self: ?*anyopaque) QtC.QTextTableCellFormat {
        return qtc.QTextFormat_ToTableCellFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QTextListFormat, rhs: QtC.QTextFormat ```
    pub fn OperatorEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextFormat_OperatorEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
    ///
    /// ``` self: QtC.QTextListFormat, rhs: QtC.QTextFormat ```
    pub fn OperatorNotEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextFormat_OperatorNotEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator)
    ///
    /// ``` self: QtC.QTextListFormat ```
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QTextFormat_ToQVariant(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
    ///
    /// ``` self: QtC.QTextListFormat, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i64) void {
        qtc.QTextFormat_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
    ///
    /// ``` self: QtC.QTextListFormat ```
    pub fn LayoutDirection(self: ?*anyopaque) i64 {
        return qtc.QTextFormat_LayoutDirection(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
    ///
    /// ``` self: QtC.QTextListFormat, brush: QtC.QBrush ```
    pub fn SetBackground(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTextFormat_SetBackground(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#background)
    ///
    /// ``` self: QtC.QTextListFormat ```
    pub fn Background(self: ?*anyopaque) QtC.QBrush {
        return qtc.QTextFormat_Background(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
    ///
    /// ``` self: QtC.QTextListFormat ```
    pub fn ClearBackground(self: ?*anyopaque) void {
        qtc.QTextFormat_ClearBackground(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
    ///
    /// ``` self: QtC.QTextListFormat, brush: QtC.QBrush ```
    pub fn SetForeground(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTextFormat_SetForeground(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#foreground)
    ///
    /// ``` self: QtC.QTextListFormat ```
    pub fn Foreground(self: ?*anyopaque) QtC.QBrush {
        return qtc.QTextFormat_Foreground(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
    ///
    /// ``` self: QtC.QTextListFormat ```
    pub fn ClearForeground(self: ?*anyopaque) void {
        qtc.QTextFormat_ClearForeground(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#dtor.QTextListFormat)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTextListFormat ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextListFormat_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextimageformat.html
pub const qtextimageformat = struct {
    /// New constructs a new QTextImageFormat object.
    ///
    ///
    pub fn New() QtC.QTextImageFormat {
        return qtc.QTextImageFormat_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#isValid)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QTextImageFormat_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#setName)
    ///
    /// ``` self: QtC.QTextImageFormat, name: []const u8 ```
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QTextImageFormat_SetName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#name)
    ///
    /// ``` self: QtC.QTextImageFormat, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextImageFormat_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextimageformat.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#setWidth)
    ///
    /// ``` self: QtC.QTextImageFormat, width: f64 ```
    pub fn SetWidth(self: ?*anyopaque, width: f64) void {
        qtc.QTextImageFormat_SetWidth(@ptrCast(self), @floatCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#width)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn Width(self: ?*anyopaque) f64 {
        return qtc.QTextImageFormat_Width(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#setMaximumWidth)
    ///
    /// ``` self: QtC.QTextImageFormat, maxWidth: QtC.QTextLength ```
    pub fn SetMaximumWidth(self: ?*anyopaque, maxWidth: QtC.QTextLength) void {
        qtc.QTextImageFormat_SetMaximumWidth(@ptrCast(self), @ptrCast(maxWidth));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#maximumWidth)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn MaximumWidth(self: ?*anyopaque) QtC.QTextLength {
        return qtc.QTextImageFormat_MaximumWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#setHeight)
    ///
    /// ``` self: QtC.QTextImageFormat, height: f64 ```
    pub fn SetHeight(self: ?*anyopaque, height: f64) void {
        qtc.QTextImageFormat_SetHeight(@ptrCast(self), @floatCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#height)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn Height(self: ?*anyopaque) f64 {
        return qtc.QTextImageFormat_Height(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#setQuality)
    ///
    /// ``` self: QtC.QTextImageFormat, quality: i32 ```
    pub fn SetQuality(self: ?*anyopaque, quality: i32) void {
        qtc.QTextImageFormat_SetQuality(@ptrCast(self), @intCast(quality));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#setQuality)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn SetQuality2(self: ?*anyopaque) void {
        qtc.QTextImageFormat_SetQuality2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#quality)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn Quality(self: ?*anyopaque) i32 {
        return qtc.QTextImageFormat_Quality(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
    ///
    /// ``` self: QtC.QTextImageFormat, font: QtC.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QTextCharFormat_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#font)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QTextCharFormat_Font(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamily)
    ///
    /// ``` self: QtC.QTextImageFormat, family: []const u8 ```
    pub fn SetFontFamily(self: ?*anyopaque, family: []const u8) void {
        const family_str = qtc.struct_libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        qtc.QTextCharFormat_SetFontFamily(@ptrCast(self), family_str);
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamily)
    ///
    /// ``` self: QtC.QTextImageFormat, allocator: std.mem.Allocator ```
    pub fn FontFamily(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextCharFormat_FontFamily(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextimageformat.FontFamily: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamilies)
    ///
    /// ``` self: QtC.QTextImageFormat, families: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetFontFamilies(self: ?*anyopaque, families: [][]const u8, allocator: std.mem.Allocator) void {
        var families_arr = allocator.alloc(qtc.struct_libqt_string, families.len) catch @panic("qtextimageformat.SetFontFamilies: Memory allocation failed");
        defer allocator.free(families_arr);
        for (families, 0..families.len) |item, i| {
            families_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const families_list = qtc.struct_libqt_list{
            .len = families.len,
            .data = families_arr.ptr,
        };
        qtc.QTextCharFormat_SetFontFamilies(@ptrCast(self), families_list);
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamilies)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn FontFamilies(self: ?*anyopaque) QtC.QVariant {
        return qtc.QTextCharFormat_FontFamilies(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleName)
    ///
    /// ``` self: QtC.QTextImageFormat, styleName: []const u8 ```
    pub fn SetFontStyleName(self: ?*anyopaque, styleName: []const u8) void {
        const styleName_str = qtc.struct_libqt_string{
            .len = styleName.len,
            .data = styleName.ptr,
        };
        qtc.QTextCharFormat_SetFontStyleName(@ptrCast(self), styleName_str);
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleName)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn FontStyleName(self: ?*anyopaque) QtC.QVariant {
        return qtc.QTextCharFormat_FontStyleName(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontPointSize)
    ///
    /// ``` self: QtC.QTextImageFormat, size: f64 ```
    pub fn SetFontPointSize(self: ?*anyopaque, size: f64) void {
        qtc.QTextCharFormat_SetFontPointSize(@ptrCast(self), @floatCast(size));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontPointSize)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn FontPointSize(self: ?*anyopaque) f64 {
        return qtc.QTextCharFormat_FontPointSize(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWeight)
    ///
    /// ``` self: QtC.QTextImageFormat, weight: i32 ```
    pub fn SetFontWeight(self: ?*anyopaque, weight: i32) void {
        qtc.QTextCharFormat_SetFontWeight(@ptrCast(self), @intCast(weight));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontWeight)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn FontWeight(self: ?*anyopaque) i32 {
        return qtc.QTextCharFormat_FontWeight(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontItalic)
    ///
    /// ``` self: QtC.QTextImageFormat, italic: bool ```
    pub fn SetFontItalic(self: ?*anyopaque, italic: bool) void {
        qtc.QTextCharFormat_SetFontItalic(@ptrCast(self), italic);
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontItalic)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn FontItalic(self: ?*anyopaque) bool {
        return qtc.QTextCharFormat_FontItalic(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontCapitalization)
    ///
    /// ``` self: QtC.QTextImageFormat, capitalization: qfont_enums.Capitalization ```
    pub fn SetFontCapitalization(self: ?*anyopaque, capitalization: i64) void {
        qtc.QTextCharFormat_SetFontCapitalization(@ptrCast(self), @intCast(capitalization));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontCapitalization)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn FontCapitalization(self: ?*anyopaque) i64 {
        return qtc.QTextCharFormat_FontCapitalization(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacingType)
    ///
    /// ``` self: QtC.QTextImageFormat, letterSpacingType: qfont_enums.SpacingType ```
    pub fn SetFontLetterSpacingType(self: ?*anyopaque, letterSpacingType: i64) void {
        qtc.QTextCharFormat_SetFontLetterSpacingType(@ptrCast(self), @intCast(letterSpacingType));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacingType)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn FontLetterSpacingType(self: ?*anyopaque) i64 {
        return qtc.QTextCharFormat_FontLetterSpacingType(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacing)
    ///
    /// ``` self: QtC.QTextImageFormat, spacing: f64 ```
    pub fn SetFontLetterSpacing(self: ?*anyopaque, spacing: f64) void {
        qtc.QTextCharFormat_SetFontLetterSpacing(@ptrCast(self), @floatCast(spacing));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacing)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn FontLetterSpacing(self: ?*anyopaque) f64 {
        return qtc.QTextCharFormat_FontLetterSpacing(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWordSpacing)
    ///
    /// ``` self: QtC.QTextImageFormat, spacing: f64 ```
    pub fn SetFontWordSpacing(self: ?*anyopaque, spacing: f64) void {
        qtc.QTextCharFormat_SetFontWordSpacing(@ptrCast(self), @floatCast(spacing));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontWordSpacing)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn FontWordSpacing(self: ?*anyopaque) f64 {
        return qtc.QTextCharFormat_FontWordSpacing(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontUnderline)
    ///
    /// ``` self: QtC.QTextImageFormat, underline: bool ```
    pub fn SetFontUnderline(self: ?*anyopaque, underline: bool) void {
        qtc.QTextCharFormat_SetFontUnderline(@ptrCast(self), underline);
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontUnderline)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn FontUnderline(self: ?*anyopaque) bool {
        return qtc.QTextCharFormat_FontUnderline(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontOverline)
    ///
    /// ``` self: QtC.QTextImageFormat, overline: bool ```
    pub fn SetFontOverline(self: ?*anyopaque, overline: bool) void {
        qtc.QTextCharFormat_SetFontOverline(@ptrCast(self), overline);
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontOverline)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn FontOverline(self: ?*anyopaque) bool {
        return qtc.QTextCharFormat_FontOverline(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStrikeOut)
    ///
    /// ``` self: QtC.QTextImageFormat, strikeOut: bool ```
    pub fn SetFontStrikeOut(self: ?*anyopaque, strikeOut: bool) void {
        qtc.QTextCharFormat_SetFontStrikeOut(@ptrCast(self), strikeOut);
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStrikeOut)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn FontStrikeOut(self: ?*anyopaque) bool {
        return qtc.QTextCharFormat_FontStrikeOut(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineColor)
    ///
    /// ``` self: QtC.QTextImageFormat, color: QtC.QColor ```
    pub fn SetUnderlineColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QTextCharFormat_SetUnderlineColor(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#underlineColor)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn UnderlineColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QTextCharFormat_UnderlineColor(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFixedPitch)
    ///
    /// ``` self: QtC.QTextImageFormat, fixedPitch: bool ```
    pub fn SetFontFixedPitch(self: ?*anyopaque, fixedPitch: bool) void {
        qtc.QTextCharFormat_SetFontFixedPitch(@ptrCast(self), fixedPitch);
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontFixedPitch)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn FontFixedPitch(self: ?*anyopaque) bool {
        return qtc.QTextCharFormat_FontFixedPitch(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStretch)
    ///
    /// ``` self: QtC.QTextImageFormat, factor: i32 ```
    pub fn SetFontStretch(self: ?*anyopaque, factor: i32) void {
        qtc.QTextCharFormat_SetFontStretch(@ptrCast(self), @intCast(factor));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStretch)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn FontStretch(self: ?*anyopaque) i32 {
        return qtc.QTextCharFormat_FontStretch(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
    ///
    /// ``` self: QtC.QTextImageFormat, hint: qfont_enums.StyleHint ```
    pub fn SetFontStyleHint(self: ?*anyopaque, hint: i64) void {
        qtc.QTextCharFormat_SetFontStyleHint(@ptrCast(self), @intCast(hint));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleStrategy)
    ///
    /// ``` self: QtC.QTextImageFormat, strategy: qfont_enums.StyleStrategy ```
    pub fn SetFontStyleStrategy(self: ?*anyopaque, strategy: i64) void {
        qtc.QTextCharFormat_SetFontStyleStrategy(@ptrCast(self), @intCast(strategy));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleHint)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn FontStyleHint(self: ?*anyopaque) i64 {
        return qtc.QTextCharFormat_FontStyleHint(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleStrategy)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn FontStyleStrategy(self: ?*anyopaque) i64 {
        return qtc.QTextCharFormat_FontStyleStrategy(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontHintingPreference)
    ///
    /// ``` self: QtC.QTextImageFormat, hintingPreference: qfont_enums.HintingPreference ```
    pub fn SetFontHintingPreference(self: ?*anyopaque, hintingPreference: i64) void {
        qtc.QTextCharFormat_SetFontHintingPreference(@ptrCast(self), @intCast(hintingPreference));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontHintingPreference)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn FontHintingPreference(self: ?*anyopaque) i64 {
        return qtc.QTextCharFormat_FontHintingPreference(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontKerning)
    ///
    /// ``` self: QtC.QTextImageFormat, enable: bool ```
    pub fn SetFontKerning(self: ?*anyopaque, enable: bool) void {
        qtc.QTextCharFormat_SetFontKerning(@ptrCast(self), enable);
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontKerning)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn FontKerning(self: ?*anyopaque) bool {
        return qtc.QTextCharFormat_FontKerning(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineStyle)
    ///
    /// ``` self: QtC.QTextImageFormat, style: qtextformat_enums.UnderlineStyle ```
    pub fn SetUnderlineStyle(self: ?*anyopaque, style: i64) void {
        qtc.QTextCharFormat_SetUnderlineStyle(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#underlineStyle)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn UnderlineStyle(self: ?*anyopaque) i64 {
        return qtc.QTextCharFormat_UnderlineStyle(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setVerticalAlignment)
    ///
    /// ``` self: QtC.QTextImageFormat, alignment: qtextformat_enums.VerticalAlignment ```
    pub fn SetVerticalAlignment(self: ?*anyopaque, alignment: i64) void {
        qtc.QTextCharFormat_SetVerticalAlignment(@ptrCast(self), @intCast(alignment));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#verticalAlignment)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn VerticalAlignment(self: ?*anyopaque) i64 {
        return qtc.QTextCharFormat_VerticalAlignment(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setTextOutline)
    ///
    /// ``` self: QtC.QTextImageFormat, pen: QtC.QPen ```
    pub fn SetTextOutline(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QTextCharFormat_SetTextOutline(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#textOutline)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn TextOutline(self: ?*anyopaque) QtC.QPen {
        return qtc.QTextCharFormat_TextOutline(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setToolTip)
    ///
    /// ``` self: QtC.QTextImageFormat, tip: []const u8 ```
    pub fn SetToolTip(self: ?*anyopaque, tip: []const u8) void {
        const tip_str = qtc.struct_libqt_string{
            .len = tip.len,
            .data = tip.ptr,
        };
        qtc.QTextCharFormat_SetToolTip(@ptrCast(self), tip_str);
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#toolTip)
    ///
    /// ``` self: QtC.QTextImageFormat, allocator: std.mem.Allocator ```
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextCharFormat_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextimageformat.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setSuperScriptBaseline)
    ///
    /// ``` self: QtC.QTextImageFormat, baseline: f64 ```
    pub fn SetSuperScriptBaseline(self: ?*anyopaque, baseline: f64) void {
        qtc.QTextCharFormat_SetSuperScriptBaseline(@ptrCast(self), @floatCast(baseline));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#superScriptBaseline)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn SuperScriptBaseline(self: ?*anyopaque) f64 {
        return qtc.QTextCharFormat_SuperScriptBaseline(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setSubScriptBaseline)
    ///
    /// ``` self: QtC.QTextImageFormat, baseline: f64 ```
    pub fn SetSubScriptBaseline(self: ?*anyopaque, baseline: f64) void {
        qtc.QTextCharFormat_SetSubScriptBaseline(@ptrCast(self), @floatCast(baseline));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#subScriptBaseline)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn SubScriptBaseline(self: ?*anyopaque) f64 {
        return qtc.QTextCharFormat_SubScriptBaseline(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setBaselineOffset)
    ///
    /// ``` self: QtC.QTextImageFormat, baseline: f64 ```
    pub fn SetBaselineOffset(self: ?*anyopaque, baseline: f64) void {
        qtc.QTextCharFormat_SetBaselineOffset(@ptrCast(self), @floatCast(baseline));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#baselineOffset)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn BaselineOffset(self: ?*anyopaque) f64 {
        return qtc.QTextCharFormat_BaselineOffset(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchor)
    ///
    /// ``` self: QtC.QTextImageFormat, anchor: bool ```
    pub fn SetAnchor(self: ?*anyopaque, anchor: bool) void {
        qtc.QTextCharFormat_SetAnchor(@ptrCast(self), anchor);
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#isAnchor)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn IsAnchor(self: ?*anyopaque) bool {
        return qtc.QTextCharFormat_IsAnchor(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorHref)
    ///
    /// ``` self: QtC.QTextImageFormat, value: []const u8 ```
    pub fn SetAnchorHref(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.struct_libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QTextCharFormat_SetAnchorHref(@ptrCast(self), value_str);
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#anchorHref)
    ///
    /// ``` self: QtC.QTextImageFormat, allocator: std.mem.Allocator ```
    pub fn AnchorHref(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextCharFormat_AnchorHref(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextimageformat.AnchorHref: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorNames)
    ///
    /// ``` self: QtC.QTextImageFormat, names: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetAnchorNames(self: ?*anyopaque, names: [][]const u8, allocator: std.mem.Allocator) void {
        var names_arr = allocator.alloc(qtc.struct_libqt_string, names.len) catch @panic("qtextimageformat.SetAnchorNames: Memory allocation failed");
        defer allocator.free(names_arr);
        for (names, 0..names.len) |item, i| {
            names_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const names_list = qtc.struct_libqt_list{
            .len = names.len,
            .data = names_arr.ptr,
        };
        qtc.QTextCharFormat_SetAnchorNames(@ptrCast(self), names_list);
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#anchorNames)
    ///
    /// ``` self: QtC.QTextImageFormat, allocator: std.mem.Allocator ```
    pub fn AnchorNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QTextCharFormat_AnchorNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qtextimageformat.AnchorNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtextimageformat.AnchorNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellRowSpan)
    ///
    /// ``` self: QtC.QTextImageFormat, tableCellRowSpan: i32 ```
    pub fn SetTableCellRowSpan(self: ?*anyopaque, tableCellRowSpan: i32) void {
        qtc.QTextCharFormat_SetTableCellRowSpan(@ptrCast(self), @intCast(tableCellRowSpan));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellRowSpan)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn TableCellRowSpan(self: ?*anyopaque) i32 {
        return qtc.QTextCharFormat_TableCellRowSpan(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellColumnSpan)
    ///
    /// ``` self: QtC.QTextImageFormat, tableCellColumnSpan: i32 ```
    pub fn SetTableCellColumnSpan(self: ?*anyopaque, tableCellColumnSpan: i32) void {
        qtc.QTextCharFormat_SetTableCellColumnSpan(@ptrCast(self), @intCast(tableCellColumnSpan));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellColumnSpan)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn TableCellColumnSpan(self: ?*anyopaque) i32 {
        return qtc.QTextCharFormat_TableCellColumnSpan(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
    ///
    /// ``` self: QtC.QTextImageFormat, font: QtC.QFont, behavior: qtextformat_enums.FontPropertiesInheritanceBehavior ```
    pub fn SetFont2(self: ?*anyopaque, font: ?*anyopaque, behavior: i64) void {
        qtc.QTextCharFormat_SetFont2(@ptrCast(self), @ptrCast(font), @intCast(behavior));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
    ///
    /// ``` self: QtC.QTextImageFormat, hint: qfont_enums.StyleHint, strategy: qfont_enums.StyleStrategy ```
    pub fn SetFontStyleHint2(self: ?*anyopaque, hint: i64, strategy: i64) void {
        qtc.QTextCharFormat_SetFontStyleHint2(@ptrCast(self), @intCast(hint), @intCast(strategy));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-eq)
    ///
    /// ``` self: QtC.QTextImageFormat, rhs: QtC.QTextFormat ```
    pub fn OperatorAssign(self: ?*anyopaque, rhs: ?*anyopaque) void {
        qtc.QTextFormat_OperatorAssign(@ptrCast(self), @ptrCast(rhs));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#swap)
    ///
    /// ``` self: QtC.QTextImageFormat, other: QtC.QTextFormat ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextFormat_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#merge)
    ///
    /// ``` self: QtC.QTextImageFormat, other: QtC.QTextFormat ```
    pub fn Merge(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextFormat_Merge(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsEmpty(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#type)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_Type(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn ObjectIndex(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_ObjectIndex(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
    ///
    /// ``` self: QtC.QTextImageFormat, object: i32 ```
    pub fn SetObjectIndex(self: ?*anyopaque, object: i32) void {
        qtc.QTextFormat_SetObjectIndex(@ptrCast(self), @intCast(object));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#property)
    ///
    /// ``` self: QtC.QTextImageFormat, propertyId: i32 ```
    pub fn Property(self: ?*anyopaque, propertyId: i32) QtC.QVariant {
        return qtc.QTextFormat_Property(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ``` self: QtC.QTextImageFormat, propertyId: i32, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, propertyId: i32, value: ?*anyopaque) void {
        qtc.QTextFormat_SetProperty(@ptrCast(self), @intCast(propertyId), @ptrCast(value));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
    ///
    /// ``` self: QtC.QTextImageFormat, propertyId: i32 ```
    pub fn ClearProperty(self: ?*anyopaque, propertyId: i32) void {
        qtc.QTextFormat_ClearProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
    ///
    /// ``` self: QtC.QTextImageFormat, propertyId: i32 ```
    pub fn HasProperty(self: ?*anyopaque, propertyId: i32) bool {
        return qtc.QTextFormat_HasProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
    ///
    /// ``` self: QtC.QTextImageFormat, propertyId: i32 ```
    pub fn BoolProperty(self: ?*anyopaque, propertyId: i32) bool {
        return qtc.QTextFormat_BoolProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
    ///
    /// ``` self: QtC.QTextImageFormat, propertyId: i32 ```
    pub fn IntProperty(self: ?*anyopaque, propertyId: i32) i32 {
        return qtc.QTextFormat_IntProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
    ///
    /// ``` self: QtC.QTextImageFormat, propertyId: i32 ```
    pub fn DoubleProperty(self: ?*anyopaque, propertyId: i32) f64 {
        return qtc.QTextFormat_DoubleProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
    ///
    /// ``` self: QtC.QTextImageFormat, propertyId: i32, allocator: std.mem.Allocator ```
    pub fn StringProperty(self: ?*anyopaque, propertyId: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextFormat_StringProperty(@ptrCast(self), @intCast(propertyId));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextimageformat.StringProperty: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
    ///
    /// ``` self: QtC.QTextImageFormat, propertyId: i32 ```
    pub fn ColorProperty(self: ?*anyopaque, propertyId: i32) QtC.QColor {
        return qtc.QTextFormat_ColorProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
    ///
    /// ``` self: QtC.QTextImageFormat, propertyId: i32 ```
    pub fn PenProperty(self: ?*anyopaque, propertyId: i32) QtC.QPen {
        return qtc.QTextFormat_PenProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
    ///
    /// ``` self: QtC.QTextImageFormat, propertyId: i32 ```
    pub fn BrushProperty(self: ?*anyopaque, propertyId: i32) QtC.QBrush {
        return qtc.QTextFormat_BrushProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
    ///
    /// ``` self: QtC.QTextImageFormat, propertyId: i32 ```
    pub fn LengthProperty(self: ?*anyopaque, propertyId: i32) QtC.QTextLength {
        return qtc.QTextFormat_LengthProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
    ///
    /// ``` self: QtC.QTextImageFormat, propertyId: i32, allocator: std.mem.Allocator ```
    pub fn LengthVectorProperty(self: ?*anyopaque, propertyId: i32, allocator: std.mem.Allocator) []QtC.QTextLength {
        const _arr: qtc.struct_libqt_list = qtc.QTextFormat_LengthVectorProperty(@ptrCast(self), @intCast(propertyId));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QTextLength, _arr.len) catch @panic("qtextimageformat.LengthVectorProperty: Memory allocation failed");
        const _data: [*]QtC.QTextLength = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ``` self: QtC.QTextImageFormat, propertyId: i32, lengths: []QtC.QTextLength ```
    pub fn SetProperty2(self: ?*anyopaque, propertyId: i32, lengths: []QtC.QTextLength) void {
        const lengths_list = qtc.struct_libqt_list{
            .len = lengths.len,
            .data = @ptrCast(lengths.ptr),
        };
        qtc.QTextFormat_SetProperty2(@ptrCast(self), @intCast(propertyId), lengths_list);
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#properties)
    ///
    /// ``` self: QtC.QTextImageFormat, allocator: std.mem.Allocator ```
    pub fn Properties(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_qtcqvariant {
        const _map: qtc.struct_libqt_map = qtc.QTextFormat_Properties(@ptrCast(self));
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
            _ret.put(allocator, _key, _value) catch @panic("qtextimageformat.Properties: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn PropertyCount(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_PropertyCount(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
    ///
    /// ``` self: QtC.QTextImageFormat, typeVal: i32 ```
    pub fn SetObjectType(self: ?*anyopaque, typeVal: i32) void {
        qtc.QTextFormat_SetObjectType(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectType)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn ObjectType(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_ObjectType(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn IsCharFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsCharFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn IsBlockFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsBlockFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn IsListFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsListFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn IsFrameFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsFrameFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn IsImageFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsImageFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn IsTableFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsTableFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn IsTableCellFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsTableCellFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn ToBlockFormat(self: ?*anyopaque) QtC.QTextBlockFormat {
        return qtc.QTextFormat_ToBlockFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn ToCharFormat(self: ?*anyopaque) QtC.QTextCharFormat {
        return qtc.QTextFormat_ToCharFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn ToListFormat(self: ?*anyopaque) QtC.QTextListFormat {
        return qtc.QTextFormat_ToListFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn ToTableFormat(self: ?*anyopaque) QtC.QTextTableFormat {
        return qtc.QTextFormat_ToTableFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn ToFrameFormat(self: ?*anyopaque) QtC.QTextFrameFormat {
        return qtc.QTextFormat_ToFrameFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn ToImageFormat(self: ?*anyopaque) QtC.QTextImageFormat {
        return qtc.QTextFormat_ToImageFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn ToTableCellFormat(self: ?*anyopaque) QtC.QTextTableCellFormat {
        return qtc.QTextFormat_ToTableCellFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QTextImageFormat, rhs: QtC.QTextFormat ```
    pub fn OperatorEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextFormat_OperatorEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
    ///
    /// ``` self: QtC.QTextImageFormat, rhs: QtC.QTextFormat ```
    pub fn OperatorNotEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextFormat_OperatorNotEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QTextFormat_ToQVariant(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
    ///
    /// ``` self: QtC.QTextImageFormat, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i64) void {
        qtc.QTextFormat_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn LayoutDirection(self: ?*anyopaque) i64 {
        return qtc.QTextFormat_LayoutDirection(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
    ///
    /// ``` self: QtC.QTextImageFormat, brush: QtC.QBrush ```
    pub fn SetBackground(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTextFormat_SetBackground(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#background)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn Background(self: ?*anyopaque) QtC.QBrush {
        return qtc.QTextFormat_Background(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn ClearBackground(self: ?*anyopaque) void {
        qtc.QTextFormat_ClearBackground(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
    ///
    /// ``` self: QtC.QTextImageFormat, brush: QtC.QBrush ```
    pub fn SetForeground(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTextFormat_SetForeground(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#foreground)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn Foreground(self: ?*anyopaque) QtC.QBrush {
        return qtc.QTextFormat_Foreground(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn ClearForeground(self: ?*anyopaque) void {
        qtc.QTextFormat_ClearForeground(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#dtor.QTextImageFormat)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTextImageFormat ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextImageFormat_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextframeformat.html
pub const qtextframeformat = struct {
    /// New constructs a new QTextFrameFormat object.
    ///
    ///
    pub fn New() QtC.QTextFrameFormat {
        return qtc.QTextFrameFormat_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#isValid)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QTextFrameFormat_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setPosition)
    ///
    /// ``` self: QtC.QTextFrameFormat, f: qtextformat_enums.Position ```
    pub fn SetPosition(self: ?*anyopaque, f: i64) void {
        qtc.QTextFrameFormat_SetPosition(@ptrCast(self), @intCast(f));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#position)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn Position(self: ?*anyopaque) i64 {
        return qtc.QTextFrameFormat_Position(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setBorder)
    ///
    /// ``` self: QtC.QTextFrameFormat, border: f64 ```
    pub fn SetBorder(self: ?*anyopaque, border: f64) void {
        qtc.QTextFrameFormat_SetBorder(@ptrCast(self), @floatCast(border));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#border)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn Border(self: ?*anyopaque) f64 {
        return qtc.QTextFrameFormat_Border(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setBorderBrush)
    ///
    /// ``` self: QtC.QTextFrameFormat, brush: QtC.QBrush ```
    pub fn SetBorderBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTextFrameFormat_SetBorderBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#borderBrush)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn BorderBrush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QTextFrameFormat_BorderBrush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setBorderStyle)
    ///
    /// ``` self: QtC.QTextFrameFormat, style: qtextformat_enums.BorderStyle ```
    pub fn SetBorderStyle(self: ?*anyopaque, style: i64) void {
        qtc.QTextFrameFormat_SetBorderStyle(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#borderStyle)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn BorderStyle(self: ?*anyopaque) i64 {
        return qtc.QTextFrameFormat_BorderStyle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setMargin)
    ///
    /// ``` self: QtC.QTextFrameFormat, margin: f64 ```
    pub fn SetMargin(self: ?*anyopaque, margin: f64) void {
        qtc.QTextFrameFormat_SetMargin(@ptrCast(self), @floatCast(margin));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#margin)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn Margin(self: ?*anyopaque) f64 {
        return qtc.QTextFrameFormat_Margin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setTopMargin)
    ///
    /// ``` self: QtC.QTextFrameFormat, margin: f64 ```
    pub fn SetTopMargin(self: ?*anyopaque, margin: f64) void {
        qtc.QTextFrameFormat_SetTopMargin(@ptrCast(self), @floatCast(margin));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#topMargin)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn TopMargin(self: ?*anyopaque) f64 {
        return qtc.QTextFrameFormat_TopMargin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setBottomMargin)
    ///
    /// ``` self: QtC.QTextFrameFormat, margin: f64 ```
    pub fn SetBottomMargin(self: ?*anyopaque, margin: f64) void {
        qtc.QTextFrameFormat_SetBottomMargin(@ptrCast(self), @floatCast(margin));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#bottomMargin)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn BottomMargin(self: ?*anyopaque) f64 {
        return qtc.QTextFrameFormat_BottomMargin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setLeftMargin)
    ///
    /// ``` self: QtC.QTextFrameFormat, margin: f64 ```
    pub fn SetLeftMargin(self: ?*anyopaque, margin: f64) void {
        qtc.QTextFrameFormat_SetLeftMargin(@ptrCast(self), @floatCast(margin));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#leftMargin)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn LeftMargin(self: ?*anyopaque) f64 {
        return qtc.QTextFrameFormat_LeftMargin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setRightMargin)
    ///
    /// ``` self: QtC.QTextFrameFormat, margin: f64 ```
    pub fn SetRightMargin(self: ?*anyopaque, margin: f64) void {
        qtc.QTextFrameFormat_SetRightMargin(@ptrCast(self), @floatCast(margin));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#rightMargin)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn RightMargin(self: ?*anyopaque) f64 {
        return qtc.QTextFrameFormat_RightMargin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setPadding)
    ///
    /// ``` self: QtC.QTextFrameFormat, padding: f64 ```
    pub fn SetPadding(self: ?*anyopaque, padding: f64) void {
        qtc.QTextFrameFormat_SetPadding(@ptrCast(self), @floatCast(padding));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#padding)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn Padding(self: ?*anyopaque) f64 {
        return qtc.QTextFrameFormat_Padding(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setWidth)
    ///
    /// ``` self: QtC.QTextFrameFormat, width: f64 ```
    pub fn SetWidth(self: ?*anyopaque, width: f64) void {
        qtc.QTextFrameFormat_SetWidth(@ptrCast(self), @floatCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setWidth)
    ///
    /// ``` self: QtC.QTextFrameFormat, length: QtC.QTextLength ```
    pub fn SetWidth2(self: ?*anyopaque, length: ?*anyopaque) void {
        qtc.QTextFrameFormat_SetWidth2(@ptrCast(self), @ptrCast(length));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#width)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn Width(self: ?*anyopaque) QtC.QTextLength {
        return qtc.QTextFrameFormat_Width(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setHeight)
    ///
    /// ``` self: QtC.QTextFrameFormat, height: f64 ```
    pub fn SetHeight(self: ?*anyopaque, height: f64) void {
        qtc.QTextFrameFormat_SetHeight(@ptrCast(self), @floatCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setHeight)
    ///
    /// ``` self: QtC.QTextFrameFormat, height: QtC.QTextLength ```
    pub fn SetHeight2(self: ?*anyopaque, height: ?*anyopaque) void {
        qtc.QTextFrameFormat_SetHeight2(@ptrCast(self), @ptrCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#height)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn Height(self: ?*anyopaque) QtC.QTextLength {
        return qtc.QTextFrameFormat_Height(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setPageBreakPolicy)
    ///
    /// ``` self: QtC.QTextFrameFormat, flags: i32 ```
    pub fn SetPageBreakPolicy(self: ?*anyopaque, flags: i64) void {
        qtc.QTextFrameFormat_SetPageBreakPolicy(@ptrCast(self), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#pageBreakPolicy)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn PageBreakPolicy(self: ?*anyopaque) i64 {
        return qtc.QTextFrameFormat_PageBreakPolicy(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-eq)
    ///
    /// ``` self: QtC.QTextFrameFormat, rhs: QtC.QTextFormat ```
    pub fn OperatorAssign(self: ?*anyopaque, rhs: ?*anyopaque) void {
        qtc.QTextFormat_OperatorAssign(@ptrCast(self), @ptrCast(rhs));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#swap)
    ///
    /// ``` self: QtC.QTextFrameFormat, other: QtC.QTextFormat ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextFormat_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#merge)
    ///
    /// ``` self: QtC.QTextFrameFormat, other: QtC.QTextFormat ```
    pub fn Merge(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextFormat_Merge(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsEmpty(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#type)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_Type(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn ObjectIndex(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_ObjectIndex(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
    ///
    /// ``` self: QtC.QTextFrameFormat, object: i32 ```
    pub fn SetObjectIndex(self: ?*anyopaque, object: i32) void {
        qtc.QTextFormat_SetObjectIndex(@ptrCast(self), @intCast(object));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#property)
    ///
    /// ``` self: QtC.QTextFrameFormat, propertyId: i32 ```
    pub fn Property(self: ?*anyopaque, propertyId: i32) QtC.QVariant {
        return qtc.QTextFormat_Property(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ``` self: QtC.QTextFrameFormat, propertyId: i32, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, propertyId: i32, value: ?*anyopaque) void {
        qtc.QTextFormat_SetProperty(@ptrCast(self), @intCast(propertyId), @ptrCast(value));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
    ///
    /// ``` self: QtC.QTextFrameFormat, propertyId: i32 ```
    pub fn ClearProperty(self: ?*anyopaque, propertyId: i32) void {
        qtc.QTextFormat_ClearProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
    ///
    /// ``` self: QtC.QTextFrameFormat, propertyId: i32 ```
    pub fn HasProperty(self: ?*anyopaque, propertyId: i32) bool {
        return qtc.QTextFormat_HasProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
    ///
    /// ``` self: QtC.QTextFrameFormat, propertyId: i32 ```
    pub fn BoolProperty(self: ?*anyopaque, propertyId: i32) bool {
        return qtc.QTextFormat_BoolProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
    ///
    /// ``` self: QtC.QTextFrameFormat, propertyId: i32 ```
    pub fn IntProperty(self: ?*anyopaque, propertyId: i32) i32 {
        return qtc.QTextFormat_IntProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
    ///
    /// ``` self: QtC.QTextFrameFormat, propertyId: i32 ```
    pub fn DoubleProperty(self: ?*anyopaque, propertyId: i32) f64 {
        return qtc.QTextFormat_DoubleProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
    ///
    /// ``` self: QtC.QTextFrameFormat, propertyId: i32, allocator: std.mem.Allocator ```
    pub fn StringProperty(self: ?*anyopaque, propertyId: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextFormat_StringProperty(@ptrCast(self), @intCast(propertyId));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextframeformat.StringProperty: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
    ///
    /// ``` self: QtC.QTextFrameFormat, propertyId: i32 ```
    pub fn ColorProperty(self: ?*anyopaque, propertyId: i32) QtC.QColor {
        return qtc.QTextFormat_ColorProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
    ///
    /// ``` self: QtC.QTextFrameFormat, propertyId: i32 ```
    pub fn PenProperty(self: ?*anyopaque, propertyId: i32) QtC.QPen {
        return qtc.QTextFormat_PenProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
    ///
    /// ``` self: QtC.QTextFrameFormat, propertyId: i32 ```
    pub fn BrushProperty(self: ?*anyopaque, propertyId: i32) QtC.QBrush {
        return qtc.QTextFormat_BrushProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
    ///
    /// ``` self: QtC.QTextFrameFormat, propertyId: i32 ```
    pub fn LengthProperty(self: ?*anyopaque, propertyId: i32) QtC.QTextLength {
        return qtc.QTextFormat_LengthProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
    ///
    /// ``` self: QtC.QTextFrameFormat, propertyId: i32, allocator: std.mem.Allocator ```
    pub fn LengthVectorProperty(self: ?*anyopaque, propertyId: i32, allocator: std.mem.Allocator) []QtC.QTextLength {
        const _arr: qtc.struct_libqt_list = qtc.QTextFormat_LengthVectorProperty(@ptrCast(self), @intCast(propertyId));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QTextLength, _arr.len) catch @panic("qtextframeformat.LengthVectorProperty: Memory allocation failed");
        const _data: [*]QtC.QTextLength = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ``` self: QtC.QTextFrameFormat, propertyId: i32, lengths: []QtC.QTextLength ```
    pub fn SetProperty2(self: ?*anyopaque, propertyId: i32, lengths: []QtC.QTextLength) void {
        const lengths_list = qtc.struct_libqt_list{
            .len = lengths.len,
            .data = @ptrCast(lengths.ptr),
        };
        qtc.QTextFormat_SetProperty2(@ptrCast(self), @intCast(propertyId), lengths_list);
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#properties)
    ///
    /// ``` self: QtC.QTextFrameFormat, allocator: std.mem.Allocator ```
    pub fn Properties(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_qtcqvariant {
        const _map: qtc.struct_libqt_map = qtc.QTextFormat_Properties(@ptrCast(self));
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
            _ret.put(allocator, _key, _value) catch @panic("qtextframeformat.Properties: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn PropertyCount(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_PropertyCount(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
    ///
    /// ``` self: QtC.QTextFrameFormat, typeVal: i32 ```
    pub fn SetObjectType(self: ?*anyopaque, typeVal: i32) void {
        qtc.QTextFormat_SetObjectType(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectType)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn ObjectType(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_ObjectType(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn IsCharFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsCharFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn IsBlockFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsBlockFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn IsListFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsListFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn IsFrameFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsFrameFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn IsImageFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsImageFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn IsTableFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsTableFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn IsTableCellFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsTableCellFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn ToBlockFormat(self: ?*anyopaque) QtC.QTextBlockFormat {
        return qtc.QTextFormat_ToBlockFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn ToCharFormat(self: ?*anyopaque) QtC.QTextCharFormat {
        return qtc.QTextFormat_ToCharFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn ToListFormat(self: ?*anyopaque) QtC.QTextListFormat {
        return qtc.QTextFormat_ToListFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn ToTableFormat(self: ?*anyopaque) QtC.QTextTableFormat {
        return qtc.QTextFormat_ToTableFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn ToFrameFormat(self: ?*anyopaque) QtC.QTextFrameFormat {
        return qtc.QTextFormat_ToFrameFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn ToImageFormat(self: ?*anyopaque) QtC.QTextImageFormat {
        return qtc.QTextFormat_ToImageFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn ToTableCellFormat(self: ?*anyopaque) QtC.QTextTableCellFormat {
        return qtc.QTextFormat_ToTableCellFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QTextFrameFormat, rhs: QtC.QTextFormat ```
    pub fn OperatorEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextFormat_OperatorEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
    ///
    /// ``` self: QtC.QTextFrameFormat, rhs: QtC.QTextFormat ```
    pub fn OperatorNotEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextFormat_OperatorNotEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QTextFormat_ToQVariant(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
    ///
    /// ``` self: QtC.QTextFrameFormat, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i64) void {
        qtc.QTextFormat_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn LayoutDirection(self: ?*anyopaque) i64 {
        return qtc.QTextFormat_LayoutDirection(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
    ///
    /// ``` self: QtC.QTextFrameFormat, brush: QtC.QBrush ```
    pub fn SetBackground(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTextFormat_SetBackground(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#background)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn Background(self: ?*anyopaque) QtC.QBrush {
        return qtc.QTextFormat_Background(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn ClearBackground(self: ?*anyopaque) void {
        qtc.QTextFormat_ClearBackground(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
    ///
    /// ``` self: QtC.QTextFrameFormat, brush: QtC.QBrush ```
    pub fn SetForeground(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTextFormat_SetForeground(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#foreground)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn Foreground(self: ?*anyopaque) QtC.QBrush {
        return qtc.QTextFormat_Foreground(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn ClearForeground(self: ?*anyopaque) void {
        qtc.QTextFormat_ClearForeground(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#dtor.QTextFrameFormat)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTextFrameFormat ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextFrameFormat_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtexttableformat.html
pub const qtexttableformat = struct {
    /// New constructs a new QTextTableFormat object.
    ///
    ///
    pub fn New() QtC.QTextTableFormat {
        return qtc.QTextTableFormat_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#isValid)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QTextTableFormat_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#columns)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn Columns(self: ?*anyopaque) i32 {
        return qtc.QTextTableFormat_Columns(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#setColumns)
    ///
    /// ``` self: QtC.QTextTableFormat, columns: i32 ```
    pub fn SetColumns(self: ?*anyopaque, columns: i32) void {
        qtc.QTextTableFormat_SetColumns(@ptrCast(self), @intCast(columns));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#setColumnWidthConstraints)
    ///
    /// ``` self: QtC.QTextTableFormat, constraints: []QtC.QTextLength ```
    pub fn SetColumnWidthConstraints(self: ?*anyopaque, constraints: []QtC.QTextLength) void {
        const constraints_list = qtc.struct_libqt_list{
            .len = constraints.len,
            .data = @ptrCast(constraints.ptr),
        };
        qtc.QTextTableFormat_SetColumnWidthConstraints(@ptrCast(self), constraints_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#columnWidthConstraints)
    ///
    /// ``` self: QtC.QTextTableFormat, allocator: std.mem.Allocator ```
    pub fn ColumnWidthConstraints(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QTextLength {
        const _arr: qtc.struct_libqt_list = qtc.QTextTableFormat_ColumnWidthConstraints(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QTextLength, _arr.len) catch @panic("qtexttableformat.ColumnWidthConstraints: Memory allocation failed");
        const _data: [*]QtC.QTextLength = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#clearColumnWidthConstraints)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn ClearColumnWidthConstraints(self: ?*anyopaque) void {
        qtc.QTextTableFormat_ClearColumnWidthConstraints(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#cellSpacing)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn CellSpacing(self: ?*anyopaque) f64 {
        return qtc.QTextTableFormat_CellSpacing(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#setCellSpacing)
    ///
    /// ``` self: QtC.QTextTableFormat, spacing: f64 ```
    pub fn SetCellSpacing(self: ?*anyopaque, spacing: f64) void {
        qtc.QTextTableFormat_SetCellSpacing(@ptrCast(self), @floatCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#cellPadding)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn CellPadding(self: ?*anyopaque) f64 {
        return qtc.QTextTableFormat_CellPadding(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#setCellPadding)
    ///
    /// ``` self: QtC.QTextTableFormat, padding: f64 ```
    pub fn SetCellPadding(self: ?*anyopaque, padding: f64) void {
        qtc.QTextTableFormat_SetCellPadding(@ptrCast(self), @floatCast(padding));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#setAlignment)
    ///
    /// ``` self: QtC.QTextTableFormat, alignment: i32 ```
    pub fn SetAlignment(self: ?*anyopaque, alignment: i64) void {
        qtc.QTextTableFormat_SetAlignment(@ptrCast(self), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#alignment)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn Alignment(self: ?*anyopaque) i64 {
        return qtc.QTextTableFormat_Alignment(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#setHeaderRowCount)
    ///
    /// ``` self: QtC.QTextTableFormat, count: i32 ```
    pub fn SetHeaderRowCount(self: ?*anyopaque, count: i32) void {
        qtc.QTextTableFormat_SetHeaderRowCount(@ptrCast(self), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#headerRowCount)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn HeaderRowCount(self: ?*anyopaque) i32 {
        return qtc.QTextTableFormat_HeaderRowCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#setBorderCollapse)
    ///
    /// ``` self: QtC.QTextTableFormat, borderCollapse: bool ```
    pub fn SetBorderCollapse(self: ?*anyopaque, borderCollapse: bool) void {
        qtc.QTextTableFormat_SetBorderCollapse(@ptrCast(self), borderCollapse);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#borderCollapse)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn BorderCollapse(self: ?*anyopaque) bool {
        return qtc.QTextTableFormat_BorderCollapse(@ptrCast(self));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setPosition)
    ///
    /// ``` self: QtC.QTextTableFormat, f: qtextformat_enums.Position ```
    pub fn SetPosition(self: ?*anyopaque, f: i64) void {
        qtc.QTextFrameFormat_SetPosition(@ptrCast(self), @intCast(f));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#position)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn Position(self: ?*anyopaque) i64 {
        return qtc.QTextFrameFormat_Position(@ptrCast(self));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setBorder)
    ///
    /// ``` self: QtC.QTextTableFormat, border: f64 ```
    pub fn SetBorder(self: ?*anyopaque, border: f64) void {
        qtc.QTextFrameFormat_SetBorder(@ptrCast(self), @floatCast(border));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#border)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn Border(self: ?*anyopaque) f64 {
        return qtc.QTextFrameFormat_Border(@ptrCast(self));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setBorderBrush)
    ///
    /// ``` self: QtC.QTextTableFormat, brush: QtC.QBrush ```
    pub fn SetBorderBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTextFrameFormat_SetBorderBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#borderBrush)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn BorderBrush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QTextFrameFormat_BorderBrush(@ptrCast(self));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setBorderStyle)
    ///
    /// ``` self: QtC.QTextTableFormat, style: qtextformat_enums.BorderStyle ```
    pub fn SetBorderStyle(self: ?*anyopaque, style: i64) void {
        qtc.QTextFrameFormat_SetBorderStyle(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#borderStyle)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn BorderStyle(self: ?*anyopaque) i64 {
        return qtc.QTextFrameFormat_BorderStyle(@ptrCast(self));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setMargin)
    ///
    /// ``` self: QtC.QTextTableFormat, margin: f64 ```
    pub fn SetMargin(self: ?*anyopaque, margin: f64) void {
        qtc.QTextFrameFormat_SetMargin(@ptrCast(self), @floatCast(margin));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#margin)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn Margin(self: ?*anyopaque) f64 {
        return qtc.QTextFrameFormat_Margin(@ptrCast(self));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setTopMargin)
    ///
    /// ``` self: QtC.QTextTableFormat, margin: f64 ```
    pub fn SetTopMargin(self: ?*anyopaque, margin: f64) void {
        qtc.QTextFrameFormat_SetTopMargin(@ptrCast(self), @floatCast(margin));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#topMargin)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn TopMargin(self: ?*anyopaque) f64 {
        return qtc.QTextFrameFormat_TopMargin(@ptrCast(self));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setBottomMargin)
    ///
    /// ``` self: QtC.QTextTableFormat, margin: f64 ```
    pub fn SetBottomMargin(self: ?*anyopaque, margin: f64) void {
        qtc.QTextFrameFormat_SetBottomMargin(@ptrCast(self), @floatCast(margin));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#bottomMargin)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn BottomMargin(self: ?*anyopaque) f64 {
        return qtc.QTextFrameFormat_BottomMargin(@ptrCast(self));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setLeftMargin)
    ///
    /// ``` self: QtC.QTextTableFormat, margin: f64 ```
    pub fn SetLeftMargin(self: ?*anyopaque, margin: f64) void {
        qtc.QTextFrameFormat_SetLeftMargin(@ptrCast(self), @floatCast(margin));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#leftMargin)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn LeftMargin(self: ?*anyopaque) f64 {
        return qtc.QTextFrameFormat_LeftMargin(@ptrCast(self));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setRightMargin)
    ///
    /// ``` self: QtC.QTextTableFormat, margin: f64 ```
    pub fn SetRightMargin(self: ?*anyopaque, margin: f64) void {
        qtc.QTextFrameFormat_SetRightMargin(@ptrCast(self), @floatCast(margin));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#rightMargin)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn RightMargin(self: ?*anyopaque) f64 {
        return qtc.QTextFrameFormat_RightMargin(@ptrCast(self));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setPadding)
    ///
    /// ``` self: QtC.QTextTableFormat, padding: f64 ```
    pub fn SetPadding(self: ?*anyopaque, padding: f64) void {
        qtc.QTextFrameFormat_SetPadding(@ptrCast(self), @floatCast(padding));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#padding)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn Padding(self: ?*anyopaque) f64 {
        return qtc.QTextFrameFormat_Padding(@ptrCast(self));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setWidth)
    ///
    /// ``` self: QtC.QTextTableFormat, width: f64 ```
    pub fn SetWidth(self: ?*anyopaque, width: f64) void {
        qtc.QTextFrameFormat_SetWidth(@ptrCast(self), @floatCast(width));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setWidth)
    ///
    /// ``` self: QtC.QTextTableFormat, length: QtC.QTextLength ```
    pub fn SetWidth2(self: ?*anyopaque, length: ?*anyopaque) void {
        qtc.QTextFrameFormat_SetWidth2(@ptrCast(self), @ptrCast(length));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#width)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn Width(self: ?*anyopaque) QtC.QTextLength {
        return qtc.QTextFrameFormat_Width(@ptrCast(self));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setHeight)
    ///
    /// ``` self: QtC.QTextTableFormat, height: f64 ```
    pub fn SetHeight(self: ?*anyopaque, height: f64) void {
        qtc.QTextFrameFormat_SetHeight(@ptrCast(self), @floatCast(height));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setHeight)
    ///
    /// ``` self: QtC.QTextTableFormat, height: QtC.QTextLength ```
    pub fn SetHeight2(self: ?*anyopaque, height: ?*anyopaque) void {
        qtc.QTextFrameFormat_SetHeight2(@ptrCast(self), @ptrCast(height));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#height)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn Height(self: ?*anyopaque) QtC.QTextLength {
        return qtc.QTextFrameFormat_Height(@ptrCast(self));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setPageBreakPolicy)
    ///
    /// ``` self: QtC.QTextTableFormat, flags: i32 ```
    pub fn SetPageBreakPolicy(self: ?*anyopaque, flags: i64) void {
        qtc.QTextFrameFormat_SetPageBreakPolicy(@ptrCast(self), @intCast(flags));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#pageBreakPolicy)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn PageBreakPolicy(self: ?*anyopaque) i64 {
        return qtc.QTextFrameFormat_PageBreakPolicy(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-eq)
    ///
    /// ``` self: QtC.QTextTableFormat, rhs: QtC.QTextFormat ```
    pub fn OperatorAssign(self: ?*anyopaque, rhs: ?*anyopaque) void {
        qtc.QTextFormat_OperatorAssign(@ptrCast(self), @ptrCast(rhs));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#swap)
    ///
    /// ``` self: QtC.QTextTableFormat, other: QtC.QTextFormat ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextFormat_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#merge)
    ///
    /// ``` self: QtC.QTextTableFormat, other: QtC.QTextFormat ```
    pub fn Merge(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextFormat_Merge(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsEmpty(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#type)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_Type(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn ObjectIndex(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_ObjectIndex(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
    ///
    /// ``` self: QtC.QTextTableFormat, object: i32 ```
    pub fn SetObjectIndex(self: ?*anyopaque, object: i32) void {
        qtc.QTextFormat_SetObjectIndex(@ptrCast(self), @intCast(object));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#property)
    ///
    /// ``` self: QtC.QTextTableFormat, propertyId: i32 ```
    pub fn Property(self: ?*anyopaque, propertyId: i32) QtC.QVariant {
        return qtc.QTextFormat_Property(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ``` self: QtC.QTextTableFormat, propertyId: i32, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, propertyId: i32, value: ?*anyopaque) void {
        qtc.QTextFormat_SetProperty(@ptrCast(self), @intCast(propertyId), @ptrCast(value));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
    ///
    /// ``` self: QtC.QTextTableFormat, propertyId: i32 ```
    pub fn ClearProperty(self: ?*anyopaque, propertyId: i32) void {
        qtc.QTextFormat_ClearProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
    ///
    /// ``` self: QtC.QTextTableFormat, propertyId: i32 ```
    pub fn HasProperty(self: ?*anyopaque, propertyId: i32) bool {
        return qtc.QTextFormat_HasProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
    ///
    /// ``` self: QtC.QTextTableFormat, propertyId: i32 ```
    pub fn BoolProperty(self: ?*anyopaque, propertyId: i32) bool {
        return qtc.QTextFormat_BoolProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
    ///
    /// ``` self: QtC.QTextTableFormat, propertyId: i32 ```
    pub fn IntProperty(self: ?*anyopaque, propertyId: i32) i32 {
        return qtc.QTextFormat_IntProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
    ///
    /// ``` self: QtC.QTextTableFormat, propertyId: i32 ```
    pub fn DoubleProperty(self: ?*anyopaque, propertyId: i32) f64 {
        return qtc.QTextFormat_DoubleProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
    ///
    /// ``` self: QtC.QTextTableFormat, propertyId: i32, allocator: std.mem.Allocator ```
    pub fn StringProperty(self: ?*anyopaque, propertyId: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextFormat_StringProperty(@ptrCast(self), @intCast(propertyId));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtexttableformat.StringProperty: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
    ///
    /// ``` self: QtC.QTextTableFormat, propertyId: i32 ```
    pub fn ColorProperty(self: ?*anyopaque, propertyId: i32) QtC.QColor {
        return qtc.QTextFormat_ColorProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
    ///
    /// ``` self: QtC.QTextTableFormat, propertyId: i32 ```
    pub fn PenProperty(self: ?*anyopaque, propertyId: i32) QtC.QPen {
        return qtc.QTextFormat_PenProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
    ///
    /// ``` self: QtC.QTextTableFormat, propertyId: i32 ```
    pub fn BrushProperty(self: ?*anyopaque, propertyId: i32) QtC.QBrush {
        return qtc.QTextFormat_BrushProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
    ///
    /// ``` self: QtC.QTextTableFormat, propertyId: i32 ```
    pub fn LengthProperty(self: ?*anyopaque, propertyId: i32) QtC.QTextLength {
        return qtc.QTextFormat_LengthProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
    ///
    /// ``` self: QtC.QTextTableFormat, propertyId: i32, allocator: std.mem.Allocator ```
    pub fn LengthVectorProperty(self: ?*anyopaque, propertyId: i32, allocator: std.mem.Allocator) []QtC.QTextLength {
        const _arr: qtc.struct_libqt_list = qtc.QTextFormat_LengthVectorProperty(@ptrCast(self), @intCast(propertyId));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QTextLength, _arr.len) catch @panic("qtexttableformat.LengthVectorProperty: Memory allocation failed");
        const _data: [*]QtC.QTextLength = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ``` self: QtC.QTextTableFormat, propertyId: i32, lengths: []QtC.QTextLength ```
    pub fn SetProperty2(self: ?*anyopaque, propertyId: i32, lengths: []QtC.QTextLength) void {
        const lengths_list = qtc.struct_libqt_list{
            .len = lengths.len,
            .data = @ptrCast(lengths.ptr),
        };
        qtc.QTextFormat_SetProperty2(@ptrCast(self), @intCast(propertyId), lengths_list);
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#properties)
    ///
    /// ``` self: QtC.QTextTableFormat, allocator: std.mem.Allocator ```
    pub fn Properties(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_qtcqvariant {
        const _map: qtc.struct_libqt_map = qtc.QTextFormat_Properties(@ptrCast(self));
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
            _ret.put(allocator, _key, _value) catch @panic("qtexttableformat.Properties: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn PropertyCount(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_PropertyCount(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
    ///
    /// ``` self: QtC.QTextTableFormat, typeVal: i32 ```
    pub fn SetObjectType(self: ?*anyopaque, typeVal: i32) void {
        qtc.QTextFormat_SetObjectType(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectType)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn ObjectType(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_ObjectType(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn IsCharFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsCharFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn IsBlockFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsBlockFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn IsListFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsListFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn IsFrameFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsFrameFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn IsImageFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsImageFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn IsTableFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsTableFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn IsTableCellFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsTableCellFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn ToBlockFormat(self: ?*anyopaque) QtC.QTextBlockFormat {
        return qtc.QTextFormat_ToBlockFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn ToCharFormat(self: ?*anyopaque) QtC.QTextCharFormat {
        return qtc.QTextFormat_ToCharFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn ToListFormat(self: ?*anyopaque) QtC.QTextListFormat {
        return qtc.QTextFormat_ToListFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn ToTableFormat(self: ?*anyopaque) QtC.QTextTableFormat {
        return qtc.QTextFormat_ToTableFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn ToFrameFormat(self: ?*anyopaque) QtC.QTextFrameFormat {
        return qtc.QTextFormat_ToFrameFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn ToImageFormat(self: ?*anyopaque) QtC.QTextImageFormat {
        return qtc.QTextFormat_ToImageFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn ToTableCellFormat(self: ?*anyopaque) QtC.QTextTableCellFormat {
        return qtc.QTextFormat_ToTableCellFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QTextTableFormat, rhs: QtC.QTextFormat ```
    pub fn OperatorEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextFormat_OperatorEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
    ///
    /// ``` self: QtC.QTextTableFormat, rhs: QtC.QTextFormat ```
    pub fn OperatorNotEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextFormat_OperatorNotEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QTextFormat_ToQVariant(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
    ///
    /// ``` self: QtC.QTextTableFormat, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i64) void {
        qtc.QTextFormat_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn LayoutDirection(self: ?*anyopaque) i64 {
        return qtc.QTextFormat_LayoutDirection(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
    ///
    /// ``` self: QtC.QTextTableFormat, brush: QtC.QBrush ```
    pub fn SetBackground(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTextFormat_SetBackground(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#background)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn Background(self: ?*anyopaque) QtC.QBrush {
        return qtc.QTextFormat_Background(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn ClearBackground(self: ?*anyopaque) void {
        qtc.QTextFormat_ClearBackground(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
    ///
    /// ``` self: QtC.QTextTableFormat, brush: QtC.QBrush ```
    pub fn SetForeground(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTextFormat_SetForeground(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#foreground)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn Foreground(self: ?*anyopaque) QtC.QBrush {
        return qtc.QTextFormat_Foreground(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn ClearForeground(self: ?*anyopaque) void {
        qtc.QTextFormat_ClearForeground(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#dtor.QTextTableFormat)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTextTableFormat ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextTableFormat_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtexttablecellformat.html
pub const qtexttablecellformat = struct {
    /// New constructs a new QTextTableCellFormat object.
    ///
    ///
    pub fn New() QtC.QTextTableCellFormat {
        return qtc.QTextTableCellFormat_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#isValid)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QTextTableCellFormat_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setTopPadding)
    ///
    /// ``` self: QtC.QTextTableCellFormat, padding: f64 ```
    pub fn SetTopPadding(self: ?*anyopaque, padding: f64) void {
        qtc.QTextTableCellFormat_SetTopPadding(@ptrCast(self), @floatCast(padding));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#topPadding)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn TopPadding(self: ?*anyopaque) f64 {
        return qtc.QTextTableCellFormat_TopPadding(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBottomPadding)
    ///
    /// ``` self: QtC.QTextTableCellFormat, padding: f64 ```
    pub fn SetBottomPadding(self: ?*anyopaque, padding: f64) void {
        qtc.QTextTableCellFormat_SetBottomPadding(@ptrCast(self), @floatCast(padding));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#bottomPadding)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn BottomPadding(self: ?*anyopaque) f64 {
        return qtc.QTextTableCellFormat_BottomPadding(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setLeftPadding)
    ///
    /// ``` self: QtC.QTextTableCellFormat, padding: f64 ```
    pub fn SetLeftPadding(self: ?*anyopaque, padding: f64) void {
        qtc.QTextTableCellFormat_SetLeftPadding(@ptrCast(self), @floatCast(padding));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#leftPadding)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn LeftPadding(self: ?*anyopaque) f64 {
        return qtc.QTextTableCellFormat_LeftPadding(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setRightPadding)
    ///
    /// ``` self: QtC.QTextTableCellFormat, padding: f64 ```
    pub fn SetRightPadding(self: ?*anyopaque, padding: f64) void {
        qtc.QTextTableCellFormat_SetRightPadding(@ptrCast(self), @floatCast(padding));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#rightPadding)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn RightPadding(self: ?*anyopaque) f64 {
        return qtc.QTextTableCellFormat_RightPadding(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setPadding)
    ///
    /// ``` self: QtC.QTextTableCellFormat, padding: f64 ```
    pub fn SetPadding(self: ?*anyopaque, padding: f64) void {
        qtc.QTextTableCellFormat_SetPadding(@ptrCast(self), @floatCast(padding));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setTopBorder)
    ///
    /// ``` self: QtC.QTextTableCellFormat, width: f64 ```
    pub fn SetTopBorder(self: ?*anyopaque, width: f64) void {
        qtc.QTextTableCellFormat_SetTopBorder(@ptrCast(self), @floatCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#topBorder)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn TopBorder(self: ?*anyopaque) f64 {
        return qtc.QTextTableCellFormat_TopBorder(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBottomBorder)
    ///
    /// ``` self: QtC.QTextTableCellFormat, width: f64 ```
    pub fn SetBottomBorder(self: ?*anyopaque, width: f64) void {
        qtc.QTextTableCellFormat_SetBottomBorder(@ptrCast(self), @floatCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#bottomBorder)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn BottomBorder(self: ?*anyopaque) f64 {
        return qtc.QTextTableCellFormat_BottomBorder(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setLeftBorder)
    ///
    /// ``` self: QtC.QTextTableCellFormat, width: f64 ```
    pub fn SetLeftBorder(self: ?*anyopaque, width: f64) void {
        qtc.QTextTableCellFormat_SetLeftBorder(@ptrCast(self), @floatCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#leftBorder)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn LeftBorder(self: ?*anyopaque) f64 {
        return qtc.QTextTableCellFormat_LeftBorder(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setRightBorder)
    ///
    /// ``` self: QtC.QTextTableCellFormat, width: f64 ```
    pub fn SetRightBorder(self: ?*anyopaque, width: f64) void {
        qtc.QTextTableCellFormat_SetRightBorder(@ptrCast(self), @floatCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#rightBorder)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn RightBorder(self: ?*anyopaque) f64 {
        return qtc.QTextTableCellFormat_RightBorder(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBorder)
    ///
    /// ``` self: QtC.QTextTableCellFormat, width: f64 ```
    pub fn SetBorder(self: ?*anyopaque, width: f64) void {
        qtc.QTextTableCellFormat_SetBorder(@ptrCast(self), @floatCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setTopBorderStyle)
    ///
    /// ``` self: QtC.QTextTableCellFormat, style: qtextformat_enums.BorderStyle ```
    pub fn SetTopBorderStyle(self: ?*anyopaque, style: i64) void {
        qtc.QTextTableCellFormat_SetTopBorderStyle(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#topBorderStyle)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn TopBorderStyle(self: ?*anyopaque) i64 {
        return qtc.QTextTableCellFormat_TopBorderStyle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBottomBorderStyle)
    ///
    /// ``` self: QtC.QTextTableCellFormat, style: qtextformat_enums.BorderStyle ```
    pub fn SetBottomBorderStyle(self: ?*anyopaque, style: i64) void {
        qtc.QTextTableCellFormat_SetBottomBorderStyle(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#bottomBorderStyle)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn BottomBorderStyle(self: ?*anyopaque) i64 {
        return qtc.QTextTableCellFormat_BottomBorderStyle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setLeftBorderStyle)
    ///
    /// ``` self: QtC.QTextTableCellFormat, style: qtextformat_enums.BorderStyle ```
    pub fn SetLeftBorderStyle(self: ?*anyopaque, style: i64) void {
        qtc.QTextTableCellFormat_SetLeftBorderStyle(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#leftBorderStyle)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn LeftBorderStyle(self: ?*anyopaque) i64 {
        return qtc.QTextTableCellFormat_LeftBorderStyle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setRightBorderStyle)
    ///
    /// ``` self: QtC.QTextTableCellFormat, style: qtextformat_enums.BorderStyle ```
    pub fn SetRightBorderStyle(self: ?*anyopaque, style: i64) void {
        qtc.QTextTableCellFormat_SetRightBorderStyle(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#rightBorderStyle)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn RightBorderStyle(self: ?*anyopaque) i64 {
        return qtc.QTextTableCellFormat_RightBorderStyle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBorderStyle)
    ///
    /// ``` self: QtC.QTextTableCellFormat, style: qtextformat_enums.BorderStyle ```
    pub fn SetBorderStyle(self: ?*anyopaque, style: i64) void {
        qtc.QTextTableCellFormat_SetBorderStyle(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setTopBorderBrush)
    ///
    /// ``` self: QtC.QTextTableCellFormat, brush: QtC.QBrush ```
    pub fn SetTopBorderBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTextTableCellFormat_SetTopBorderBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#topBorderBrush)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn TopBorderBrush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QTextTableCellFormat_TopBorderBrush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBottomBorderBrush)
    ///
    /// ``` self: QtC.QTextTableCellFormat, brush: QtC.QBrush ```
    pub fn SetBottomBorderBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTextTableCellFormat_SetBottomBorderBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#bottomBorderBrush)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn BottomBorderBrush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QTextTableCellFormat_BottomBorderBrush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setLeftBorderBrush)
    ///
    /// ``` self: QtC.QTextTableCellFormat, brush: QtC.QBrush ```
    pub fn SetLeftBorderBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTextTableCellFormat_SetLeftBorderBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#leftBorderBrush)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn LeftBorderBrush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QTextTableCellFormat_LeftBorderBrush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setRightBorderBrush)
    ///
    /// ``` self: QtC.QTextTableCellFormat, brush: QtC.QBrush ```
    pub fn SetRightBorderBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTextTableCellFormat_SetRightBorderBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#rightBorderBrush)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn RightBorderBrush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QTextTableCellFormat_RightBorderBrush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBorderBrush)
    ///
    /// ``` self: QtC.QTextTableCellFormat, brush: QtC.QBrush ```
    pub fn SetBorderBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTextTableCellFormat_SetBorderBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
    ///
    /// ``` self: QtC.QTextTableCellFormat, font: QtC.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QTextCharFormat_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#font)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QTextCharFormat_Font(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamily)
    ///
    /// ``` self: QtC.QTextTableCellFormat, family: []const u8 ```
    pub fn SetFontFamily(self: ?*anyopaque, family: []const u8) void {
        const family_str = qtc.struct_libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        qtc.QTextCharFormat_SetFontFamily(@ptrCast(self), family_str);
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamily)
    ///
    /// ``` self: QtC.QTextTableCellFormat, allocator: std.mem.Allocator ```
    pub fn FontFamily(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextCharFormat_FontFamily(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtexttablecellformat.FontFamily: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamilies)
    ///
    /// ``` self: QtC.QTextTableCellFormat, families: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetFontFamilies(self: ?*anyopaque, families: [][]const u8, allocator: std.mem.Allocator) void {
        var families_arr = allocator.alloc(qtc.struct_libqt_string, families.len) catch @panic("qtexttablecellformat.SetFontFamilies: Memory allocation failed");
        defer allocator.free(families_arr);
        for (families, 0..families.len) |item, i| {
            families_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const families_list = qtc.struct_libqt_list{
            .len = families.len,
            .data = families_arr.ptr,
        };
        qtc.QTextCharFormat_SetFontFamilies(@ptrCast(self), families_list);
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamilies)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn FontFamilies(self: ?*anyopaque) QtC.QVariant {
        return qtc.QTextCharFormat_FontFamilies(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleName)
    ///
    /// ``` self: QtC.QTextTableCellFormat, styleName: []const u8 ```
    pub fn SetFontStyleName(self: ?*anyopaque, styleName: []const u8) void {
        const styleName_str = qtc.struct_libqt_string{
            .len = styleName.len,
            .data = styleName.ptr,
        };
        qtc.QTextCharFormat_SetFontStyleName(@ptrCast(self), styleName_str);
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleName)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn FontStyleName(self: ?*anyopaque) QtC.QVariant {
        return qtc.QTextCharFormat_FontStyleName(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontPointSize)
    ///
    /// ``` self: QtC.QTextTableCellFormat, size: f64 ```
    pub fn SetFontPointSize(self: ?*anyopaque, size: f64) void {
        qtc.QTextCharFormat_SetFontPointSize(@ptrCast(self), @floatCast(size));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontPointSize)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn FontPointSize(self: ?*anyopaque) f64 {
        return qtc.QTextCharFormat_FontPointSize(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWeight)
    ///
    /// ``` self: QtC.QTextTableCellFormat, weight: i32 ```
    pub fn SetFontWeight(self: ?*anyopaque, weight: i32) void {
        qtc.QTextCharFormat_SetFontWeight(@ptrCast(self), @intCast(weight));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontWeight)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn FontWeight(self: ?*anyopaque) i32 {
        return qtc.QTextCharFormat_FontWeight(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontItalic)
    ///
    /// ``` self: QtC.QTextTableCellFormat, italic: bool ```
    pub fn SetFontItalic(self: ?*anyopaque, italic: bool) void {
        qtc.QTextCharFormat_SetFontItalic(@ptrCast(self), italic);
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontItalic)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn FontItalic(self: ?*anyopaque) bool {
        return qtc.QTextCharFormat_FontItalic(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontCapitalization)
    ///
    /// ``` self: QtC.QTextTableCellFormat, capitalization: qfont_enums.Capitalization ```
    pub fn SetFontCapitalization(self: ?*anyopaque, capitalization: i64) void {
        qtc.QTextCharFormat_SetFontCapitalization(@ptrCast(self), @intCast(capitalization));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontCapitalization)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn FontCapitalization(self: ?*anyopaque) i64 {
        return qtc.QTextCharFormat_FontCapitalization(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacingType)
    ///
    /// ``` self: QtC.QTextTableCellFormat, letterSpacingType: qfont_enums.SpacingType ```
    pub fn SetFontLetterSpacingType(self: ?*anyopaque, letterSpacingType: i64) void {
        qtc.QTextCharFormat_SetFontLetterSpacingType(@ptrCast(self), @intCast(letterSpacingType));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacingType)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn FontLetterSpacingType(self: ?*anyopaque) i64 {
        return qtc.QTextCharFormat_FontLetterSpacingType(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacing)
    ///
    /// ``` self: QtC.QTextTableCellFormat, spacing: f64 ```
    pub fn SetFontLetterSpacing(self: ?*anyopaque, spacing: f64) void {
        qtc.QTextCharFormat_SetFontLetterSpacing(@ptrCast(self), @floatCast(spacing));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacing)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn FontLetterSpacing(self: ?*anyopaque) f64 {
        return qtc.QTextCharFormat_FontLetterSpacing(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWordSpacing)
    ///
    /// ``` self: QtC.QTextTableCellFormat, spacing: f64 ```
    pub fn SetFontWordSpacing(self: ?*anyopaque, spacing: f64) void {
        qtc.QTextCharFormat_SetFontWordSpacing(@ptrCast(self), @floatCast(spacing));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontWordSpacing)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn FontWordSpacing(self: ?*anyopaque) f64 {
        return qtc.QTextCharFormat_FontWordSpacing(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontUnderline)
    ///
    /// ``` self: QtC.QTextTableCellFormat, underline: bool ```
    pub fn SetFontUnderline(self: ?*anyopaque, underline: bool) void {
        qtc.QTextCharFormat_SetFontUnderline(@ptrCast(self), underline);
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontUnderline)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn FontUnderline(self: ?*anyopaque) bool {
        return qtc.QTextCharFormat_FontUnderline(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontOverline)
    ///
    /// ``` self: QtC.QTextTableCellFormat, overline: bool ```
    pub fn SetFontOverline(self: ?*anyopaque, overline: bool) void {
        qtc.QTextCharFormat_SetFontOverline(@ptrCast(self), overline);
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontOverline)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn FontOverline(self: ?*anyopaque) bool {
        return qtc.QTextCharFormat_FontOverline(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStrikeOut)
    ///
    /// ``` self: QtC.QTextTableCellFormat, strikeOut: bool ```
    pub fn SetFontStrikeOut(self: ?*anyopaque, strikeOut: bool) void {
        qtc.QTextCharFormat_SetFontStrikeOut(@ptrCast(self), strikeOut);
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStrikeOut)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn FontStrikeOut(self: ?*anyopaque) bool {
        return qtc.QTextCharFormat_FontStrikeOut(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineColor)
    ///
    /// ``` self: QtC.QTextTableCellFormat, color: QtC.QColor ```
    pub fn SetUnderlineColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QTextCharFormat_SetUnderlineColor(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#underlineColor)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn UnderlineColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QTextCharFormat_UnderlineColor(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFixedPitch)
    ///
    /// ``` self: QtC.QTextTableCellFormat, fixedPitch: bool ```
    pub fn SetFontFixedPitch(self: ?*anyopaque, fixedPitch: bool) void {
        qtc.QTextCharFormat_SetFontFixedPitch(@ptrCast(self), fixedPitch);
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontFixedPitch)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn FontFixedPitch(self: ?*anyopaque) bool {
        return qtc.QTextCharFormat_FontFixedPitch(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStretch)
    ///
    /// ``` self: QtC.QTextTableCellFormat, factor: i32 ```
    pub fn SetFontStretch(self: ?*anyopaque, factor: i32) void {
        qtc.QTextCharFormat_SetFontStretch(@ptrCast(self), @intCast(factor));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStretch)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn FontStretch(self: ?*anyopaque) i32 {
        return qtc.QTextCharFormat_FontStretch(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
    ///
    /// ``` self: QtC.QTextTableCellFormat, hint: qfont_enums.StyleHint ```
    pub fn SetFontStyleHint(self: ?*anyopaque, hint: i64) void {
        qtc.QTextCharFormat_SetFontStyleHint(@ptrCast(self), @intCast(hint));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleStrategy)
    ///
    /// ``` self: QtC.QTextTableCellFormat, strategy: qfont_enums.StyleStrategy ```
    pub fn SetFontStyleStrategy(self: ?*anyopaque, strategy: i64) void {
        qtc.QTextCharFormat_SetFontStyleStrategy(@ptrCast(self), @intCast(strategy));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleHint)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn FontStyleHint(self: ?*anyopaque) i64 {
        return qtc.QTextCharFormat_FontStyleHint(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleStrategy)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn FontStyleStrategy(self: ?*anyopaque) i64 {
        return qtc.QTextCharFormat_FontStyleStrategy(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontHintingPreference)
    ///
    /// ``` self: QtC.QTextTableCellFormat, hintingPreference: qfont_enums.HintingPreference ```
    pub fn SetFontHintingPreference(self: ?*anyopaque, hintingPreference: i64) void {
        qtc.QTextCharFormat_SetFontHintingPreference(@ptrCast(self), @intCast(hintingPreference));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontHintingPreference)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn FontHintingPreference(self: ?*anyopaque) i64 {
        return qtc.QTextCharFormat_FontHintingPreference(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontKerning)
    ///
    /// ``` self: QtC.QTextTableCellFormat, enable: bool ```
    pub fn SetFontKerning(self: ?*anyopaque, enable: bool) void {
        qtc.QTextCharFormat_SetFontKerning(@ptrCast(self), enable);
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontKerning)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn FontKerning(self: ?*anyopaque) bool {
        return qtc.QTextCharFormat_FontKerning(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineStyle)
    ///
    /// ``` self: QtC.QTextTableCellFormat, style: qtextformat_enums.UnderlineStyle ```
    pub fn SetUnderlineStyle(self: ?*anyopaque, style: i64) void {
        qtc.QTextCharFormat_SetUnderlineStyle(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#underlineStyle)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn UnderlineStyle(self: ?*anyopaque) i64 {
        return qtc.QTextCharFormat_UnderlineStyle(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setVerticalAlignment)
    ///
    /// ``` self: QtC.QTextTableCellFormat, alignment: qtextformat_enums.VerticalAlignment ```
    pub fn SetVerticalAlignment(self: ?*anyopaque, alignment: i64) void {
        qtc.QTextCharFormat_SetVerticalAlignment(@ptrCast(self), @intCast(alignment));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#verticalAlignment)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn VerticalAlignment(self: ?*anyopaque) i64 {
        return qtc.QTextCharFormat_VerticalAlignment(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setTextOutline)
    ///
    /// ``` self: QtC.QTextTableCellFormat, pen: QtC.QPen ```
    pub fn SetTextOutline(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QTextCharFormat_SetTextOutline(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#textOutline)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn TextOutline(self: ?*anyopaque) QtC.QPen {
        return qtc.QTextCharFormat_TextOutline(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setToolTip)
    ///
    /// ``` self: QtC.QTextTableCellFormat, tip: []const u8 ```
    pub fn SetToolTip(self: ?*anyopaque, tip: []const u8) void {
        const tip_str = qtc.struct_libqt_string{
            .len = tip.len,
            .data = tip.ptr,
        };
        qtc.QTextCharFormat_SetToolTip(@ptrCast(self), tip_str);
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#toolTip)
    ///
    /// ``` self: QtC.QTextTableCellFormat, allocator: std.mem.Allocator ```
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextCharFormat_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtexttablecellformat.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setSuperScriptBaseline)
    ///
    /// ``` self: QtC.QTextTableCellFormat, baseline: f64 ```
    pub fn SetSuperScriptBaseline(self: ?*anyopaque, baseline: f64) void {
        qtc.QTextCharFormat_SetSuperScriptBaseline(@ptrCast(self), @floatCast(baseline));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#superScriptBaseline)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn SuperScriptBaseline(self: ?*anyopaque) f64 {
        return qtc.QTextCharFormat_SuperScriptBaseline(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setSubScriptBaseline)
    ///
    /// ``` self: QtC.QTextTableCellFormat, baseline: f64 ```
    pub fn SetSubScriptBaseline(self: ?*anyopaque, baseline: f64) void {
        qtc.QTextCharFormat_SetSubScriptBaseline(@ptrCast(self), @floatCast(baseline));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#subScriptBaseline)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn SubScriptBaseline(self: ?*anyopaque) f64 {
        return qtc.QTextCharFormat_SubScriptBaseline(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setBaselineOffset)
    ///
    /// ``` self: QtC.QTextTableCellFormat, baseline: f64 ```
    pub fn SetBaselineOffset(self: ?*anyopaque, baseline: f64) void {
        qtc.QTextCharFormat_SetBaselineOffset(@ptrCast(self), @floatCast(baseline));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#baselineOffset)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn BaselineOffset(self: ?*anyopaque) f64 {
        return qtc.QTextCharFormat_BaselineOffset(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchor)
    ///
    /// ``` self: QtC.QTextTableCellFormat, anchor: bool ```
    pub fn SetAnchor(self: ?*anyopaque, anchor: bool) void {
        qtc.QTextCharFormat_SetAnchor(@ptrCast(self), anchor);
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#isAnchor)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn IsAnchor(self: ?*anyopaque) bool {
        return qtc.QTextCharFormat_IsAnchor(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorHref)
    ///
    /// ``` self: QtC.QTextTableCellFormat, value: []const u8 ```
    pub fn SetAnchorHref(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.struct_libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QTextCharFormat_SetAnchorHref(@ptrCast(self), value_str);
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#anchorHref)
    ///
    /// ``` self: QtC.QTextTableCellFormat, allocator: std.mem.Allocator ```
    pub fn AnchorHref(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextCharFormat_AnchorHref(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtexttablecellformat.AnchorHref: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorNames)
    ///
    /// ``` self: QtC.QTextTableCellFormat, names: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetAnchorNames(self: ?*anyopaque, names: [][]const u8, allocator: std.mem.Allocator) void {
        var names_arr = allocator.alloc(qtc.struct_libqt_string, names.len) catch @panic("qtexttablecellformat.SetAnchorNames: Memory allocation failed");
        defer allocator.free(names_arr);
        for (names, 0..names.len) |item, i| {
            names_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const names_list = qtc.struct_libqt_list{
            .len = names.len,
            .data = names_arr.ptr,
        };
        qtc.QTextCharFormat_SetAnchorNames(@ptrCast(self), names_list);
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#anchorNames)
    ///
    /// ``` self: QtC.QTextTableCellFormat, allocator: std.mem.Allocator ```
    pub fn AnchorNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QTextCharFormat_AnchorNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qtexttablecellformat.AnchorNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtexttablecellformat.AnchorNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellRowSpan)
    ///
    /// ``` self: QtC.QTextTableCellFormat, tableCellRowSpan: i32 ```
    pub fn SetTableCellRowSpan(self: ?*anyopaque, tableCellRowSpan: i32) void {
        qtc.QTextCharFormat_SetTableCellRowSpan(@ptrCast(self), @intCast(tableCellRowSpan));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellRowSpan)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn TableCellRowSpan(self: ?*anyopaque) i32 {
        return qtc.QTextCharFormat_TableCellRowSpan(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellColumnSpan)
    ///
    /// ``` self: QtC.QTextTableCellFormat, tableCellColumnSpan: i32 ```
    pub fn SetTableCellColumnSpan(self: ?*anyopaque, tableCellColumnSpan: i32) void {
        qtc.QTextCharFormat_SetTableCellColumnSpan(@ptrCast(self), @intCast(tableCellColumnSpan));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellColumnSpan)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn TableCellColumnSpan(self: ?*anyopaque) i32 {
        return qtc.QTextCharFormat_TableCellColumnSpan(@ptrCast(self));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
    ///
    /// ``` self: QtC.QTextTableCellFormat, font: QtC.QFont, behavior: qtextformat_enums.FontPropertiesInheritanceBehavior ```
    pub fn SetFont2(self: ?*anyopaque, font: ?*anyopaque, behavior: i64) void {
        qtc.QTextCharFormat_SetFont2(@ptrCast(self), @ptrCast(font), @intCast(behavior));
    }

    /// Inherited from QTextCharFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
    ///
    /// ``` self: QtC.QTextTableCellFormat, hint: qfont_enums.StyleHint, strategy: qfont_enums.StyleStrategy ```
    pub fn SetFontStyleHint2(self: ?*anyopaque, hint: i64, strategy: i64) void {
        qtc.QTextCharFormat_SetFontStyleHint2(@ptrCast(self), @intCast(hint), @intCast(strategy));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-eq)
    ///
    /// ``` self: QtC.QTextTableCellFormat, rhs: QtC.QTextFormat ```
    pub fn OperatorAssign(self: ?*anyopaque, rhs: ?*anyopaque) void {
        qtc.QTextFormat_OperatorAssign(@ptrCast(self), @ptrCast(rhs));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#swap)
    ///
    /// ``` self: QtC.QTextTableCellFormat, other: QtC.QTextFormat ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextFormat_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#merge)
    ///
    /// ``` self: QtC.QTextTableCellFormat, other: QtC.QTextFormat ```
    pub fn Merge(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextFormat_Merge(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsEmpty(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#type)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_Type(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn ObjectIndex(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_ObjectIndex(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
    ///
    /// ``` self: QtC.QTextTableCellFormat, object: i32 ```
    pub fn SetObjectIndex(self: ?*anyopaque, object: i32) void {
        qtc.QTextFormat_SetObjectIndex(@ptrCast(self), @intCast(object));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#property)
    ///
    /// ``` self: QtC.QTextTableCellFormat, propertyId: i32 ```
    pub fn Property(self: ?*anyopaque, propertyId: i32) QtC.QVariant {
        return qtc.QTextFormat_Property(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ``` self: QtC.QTextTableCellFormat, propertyId: i32, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, propertyId: i32, value: ?*anyopaque) void {
        qtc.QTextFormat_SetProperty(@ptrCast(self), @intCast(propertyId), @ptrCast(value));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
    ///
    /// ``` self: QtC.QTextTableCellFormat, propertyId: i32 ```
    pub fn ClearProperty(self: ?*anyopaque, propertyId: i32) void {
        qtc.QTextFormat_ClearProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
    ///
    /// ``` self: QtC.QTextTableCellFormat, propertyId: i32 ```
    pub fn HasProperty(self: ?*anyopaque, propertyId: i32) bool {
        return qtc.QTextFormat_HasProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
    ///
    /// ``` self: QtC.QTextTableCellFormat, propertyId: i32 ```
    pub fn BoolProperty(self: ?*anyopaque, propertyId: i32) bool {
        return qtc.QTextFormat_BoolProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
    ///
    /// ``` self: QtC.QTextTableCellFormat, propertyId: i32 ```
    pub fn IntProperty(self: ?*anyopaque, propertyId: i32) i32 {
        return qtc.QTextFormat_IntProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
    ///
    /// ``` self: QtC.QTextTableCellFormat, propertyId: i32 ```
    pub fn DoubleProperty(self: ?*anyopaque, propertyId: i32) f64 {
        return qtc.QTextFormat_DoubleProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
    ///
    /// ``` self: QtC.QTextTableCellFormat, propertyId: i32, allocator: std.mem.Allocator ```
    pub fn StringProperty(self: ?*anyopaque, propertyId: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextFormat_StringProperty(@ptrCast(self), @intCast(propertyId));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtexttablecellformat.StringProperty: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
    ///
    /// ``` self: QtC.QTextTableCellFormat, propertyId: i32 ```
    pub fn ColorProperty(self: ?*anyopaque, propertyId: i32) QtC.QColor {
        return qtc.QTextFormat_ColorProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
    ///
    /// ``` self: QtC.QTextTableCellFormat, propertyId: i32 ```
    pub fn PenProperty(self: ?*anyopaque, propertyId: i32) QtC.QPen {
        return qtc.QTextFormat_PenProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
    ///
    /// ``` self: QtC.QTextTableCellFormat, propertyId: i32 ```
    pub fn BrushProperty(self: ?*anyopaque, propertyId: i32) QtC.QBrush {
        return qtc.QTextFormat_BrushProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
    ///
    /// ``` self: QtC.QTextTableCellFormat, propertyId: i32 ```
    pub fn LengthProperty(self: ?*anyopaque, propertyId: i32) QtC.QTextLength {
        return qtc.QTextFormat_LengthProperty(@ptrCast(self), @intCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
    ///
    /// ``` self: QtC.QTextTableCellFormat, propertyId: i32, allocator: std.mem.Allocator ```
    pub fn LengthVectorProperty(self: ?*anyopaque, propertyId: i32, allocator: std.mem.Allocator) []QtC.QTextLength {
        const _arr: qtc.struct_libqt_list = qtc.QTextFormat_LengthVectorProperty(@ptrCast(self), @intCast(propertyId));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QTextLength, _arr.len) catch @panic("qtexttablecellformat.LengthVectorProperty: Memory allocation failed");
        const _data: [*]QtC.QTextLength = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ``` self: QtC.QTextTableCellFormat, propertyId: i32, lengths: []QtC.QTextLength ```
    pub fn SetProperty2(self: ?*anyopaque, propertyId: i32, lengths: []QtC.QTextLength) void {
        const lengths_list = qtc.struct_libqt_list{
            .len = lengths.len,
            .data = @ptrCast(lengths.ptr),
        };
        qtc.QTextFormat_SetProperty2(@ptrCast(self), @intCast(propertyId), lengths_list);
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#properties)
    ///
    /// ``` self: QtC.QTextTableCellFormat, allocator: std.mem.Allocator ```
    pub fn Properties(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_qtcqvariant {
        const _map: qtc.struct_libqt_map = qtc.QTextFormat_Properties(@ptrCast(self));
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
            _ret.put(allocator, _key, _value) catch @panic("qtexttablecellformat.Properties: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn PropertyCount(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_PropertyCount(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
    ///
    /// ``` self: QtC.QTextTableCellFormat, typeVal: i32 ```
    pub fn SetObjectType(self: ?*anyopaque, typeVal: i32) void {
        qtc.QTextFormat_SetObjectType(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectType)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn ObjectType(self: ?*anyopaque) i32 {
        return qtc.QTextFormat_ObjectType(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn IsCharFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsCharFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn IsBlockFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsBlockFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn IsListFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsListFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn IsFrameFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsFrameFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn IsImageFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsImageFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn IsTableFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsTableFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn IsTableCellFormat(self: ?*anyopaque) bool {
        return qtc.QTextFormat_IsTableCellFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn ToBlockFormat(self: ?*anyopaque) QtC.QTextBlockFormat {
        return qtc.QTextFormat_ToBlockFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn ToCharFormat(self: ?*anyopaque) QtC.QTextCharFormat {
        return qtc.QTextFormat_ToCharFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn ToListFormat(self: ?*anyopaque) QtC.QTextListFormat {
        return qtc.QTextFormat_ToListFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn ToTableFormat(self: ?*anyopaque) QtC.QTextTableFormat {
        return qtc.QTextFormat_ToTableFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn ToFrameFormat(self: ?*anyopaque) QtC.QTextFrameFormat {
        return qtc.QTextFormat_ToFrameFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn ToImageFormat(self: ?*anyopaque) QtC.QTextImageFormat {
        return qtc.QTextFormat_ToImageFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn ToTableCellFormat(self: ?*anyopaque) QtC.QTextTableCellFormat {
        return qtc.QTextFormat_ToTableCellFormat(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QTextTableCellFormat, rhs: QtC.QTextFormat ```
    pub fn OperatorEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextFormat_OperatorEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
    ///
    /// ``` self: QtC.QTextTableCellFormat, rhs: QtC.QTextFormat ```
    pub fn OperatorNotEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextFormat_OperatorNotEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QTextFormat_ToQVariant(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
    ///
    /// ``` self: QtC.QTextTableCellFormat, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i64) void {
        qtc.QTextFormat_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn LayoutDirection(self: ?*anyopaque) i64 {
        return qtc.QTextFormat_LayoutDirection(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
    ///
    /// ``` self: QtC.QTextTableCellFormat, brush: QtC.QBrush ```
    pub fn SetBackground(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTextFormat_SetBackground(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#background)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn Background(self: ?*anyopaque) QtC.QBrush {
        return qtc.QTextFormat_Background(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn ClearBackground(self: ?*anyopaque) void {
        qtc.QTextFormat_ClearBackground(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
    ///
    /// ``` self: QtC.QTextTableCellFormat, brush: QtC.QBrush ```
    pub fn SetForeground(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QTextFormat_SetForeground(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#foreground)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn Foreground(self: ?*anyopaque) QtC.QBrush {
        return qtc.QTextFormat_Foreground(@ptrCast(self));
    }

    /// Inherited from QTextFormat
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn ClearForeground(self: ?*anyopaque) void {
        qtc.QTextFormat_ClearForeground(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#dtor.QTextTableCellFormat)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTextTableCellFormat ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextTableCellFormat_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextformat.html#types
pub const enums = struct {
    pub const Type = enum {
        pub const VariableLength: i32 = 0;
        pub const FixedLength: i32 = 1;
        pub const PercentageLength: i32 = 2;
    };

    pub const FormatType = enum {
        pub const InvalidFormat: i32 = -1;
        pub const BlockFormat: i32 = 1;
        pub const CharFormat: i32 = 2;
        pub const ListFormat: i32 = 3;
        pub const FrameFormat: i32 = 5;
        pub const UserFormat: i32 = 100;
    };

    pub const Property = enum {
        pub const ObjectIndex: i32 = 0;
        pub const CssFloat: i32 = 2048;
        pub const LayoutDirection: i32 = 2049;
        pub const OutlinePen: i32 = 2064;
        pub const BackgroundBrush: i32 = 2080;
        pub const ForegroundBrush: i32 = 2081;
        pub const BackgroundImageUrl: i32 = 2083;
        pub const BlockAlignment: i32 = 4112;
        pub const BlockTopMargin: i32 = 4144;
        pub const BlockBottomMargin: i32 = 4145;
        pub const BlockLeftMargin: i32 = 4146;
        pub const BlockRightMargin: i32 = 4147;
        pub const TextIndent: i32 = 4148;
        pub const TabPositions: i32 = 4149;
        pub const BlockIndent: i32 = 4160;
        pub const LineHeight: i32 = 4168;
        pub const LineHeightType: i32 = 4169;
        pub const BlockNonBreakableLines: i32 = 4176;
        pub const BlockTrailingHorizontalRulerWidth: i32 = 4192;
        pub const HeadingLevel: i32 = 4208;
        pub const BlockQuoteLevel: i32 = 4224;
        pub const BlockCodeLanguage: i32 = 4240;
        pub const BlockCodeFence: i32 = 4241;
        pub const BlockMarker: i32 = 4256;
        pub const FirstFontProperty: i32 = 8160;
        pub const FontCapitalization: i32 = 8160;
        pub const FontLetterSpacing: i32 = 8161;
        pub const FontWordSpacing: i32 = 8162;
        pub const FontStyleHint: i32 = 8163;
        pub const FontStyleStrategy: i32 = 8164;
        pub const FontKerning: i32 = 8165;
        pub const FontHintingPreference: i32 = 8166;
        pub const FontFamilies: i32 = 8167;
        pub const FontStyleName: i32 = 8168;
        pub const FontLetterSpacingType: i32 = 8169;
        pub const FontStretch: i32 = 8170;
        pub const FontFamily: i32 = 8192;
        pub const FontPointSize: i32 = 8193;
        pub const FontSizeAdjustment: i32 = 8194;
        pub const FontSizeIncrement: i32 = 8194;
        pub const FontWeight: i32 = 8195;
        pub const FontItalic: i32 = 8196;
        pub const FontUnderline: i32 = 8197;
        pub const FontOverline: i32 = 8198;
        pub const FontStrikeOut: i32 = 8199;
        pub const FontFixedPitch: i32 = 8200;
        pub const FontPixelSize: i32 = 8201;
        pub const LastFontProperty: i32 = 8201;
        pub const TextUnderlineColor: i32 = 8224;
        pub const TextVerticalAlignment: i32 = 8225;
        pub const TextOutline: i32 = 8226;
        pub const TextUnderlineStyle: i32 = 8227;
        pub const TextToolTip: i32 = 8228;
        pub const TextSuperScriptBaseline: i32 = 8229;
        pub const TextSubScriptBaseline: i32 = 8230;
        pub const TextBaselineOffset: i32 = 8231;
        pub const IsAnchor: i32 = 8240;
        pub const AnchorHref: i32 = 8241;
        pub const AnchorName: i32 = 8242;
        pub const OldFontLetterSpacingType: i32 = 8243;
        pub const OldFontStretch: i32 = 8244;
        pub const OldTextUnderlineColor: i32 = 8208;
        pub const OldFontFamily: i32 = 8192;
        pub const ObjectType: i32 = 12032;
        pub const ListStyle: i32 = 12288;
        pub const ListIndent: i32 = 12289;
        pub const ListNumberPrefix: i32 = 12290;
        pub const ListNumberSuffix: i32 = 12291;
        pub const ListStart: i32 = 12292;
        pub const FrameBorder: i32 = 16384;
        pub const FrameMargin: i32 = 16385;
        pub const FramePadding: i32 = 16386;
        pub const FrameWidth: i32 = 16387;
        pub const FrameHeight: i32 = 16388;
        pub const FrameTopMargin: i32 = 16389;
        pub const FrameBottomMargin: i32 = 16390;
        pub const FrameLeftMargin: i32 = 16391;
        pub const FrameRightMargin: i32 = 16392;
        pub const FrameBorderBrush: i32 = 16393;
        pub const FrameBorderStyle: i32 = 16400;
        pub const TableColumns: i32 = 16640;
        pub const TableColumnWidthConstraints: i32 = 16641;
        pub const TableCellSpacing: i32 = 16642;
        pub const TableCellPadding: i32 = 16643;
        pub const TableHeaderRowCount: i32 = 16644;
        pub const TableBorderCollapse: i32 = 16645;
        pub const TableCellRowSpan: i32 = 18448;
        pub const TableCellColumnSpan: i32 = 18449;
        pub const TableCellTopPadding: i32 = 18450;
        pub const TableCellBottomPadding: i32 = 18451;
        pub const TableCellLeftPadding: i32 = 18452;
        pub const TableCellRightPadding: i32 = 18453;
        pub const TableCellTopBorder: i32 = 18454;
        pub const TableCellBottomBorder: i32 = 18455;
        pub const TableCellLeftBorder: i32 = 18456;
        pub const TableCellRightBorder: i32 = 18457;
        pub const TableCellTopBorderStyle: i32 = 18458;
        pub const TableCellBottomBorderStyle: i32 = 18459;
        pub const TableCellLeftBorderStyle: i32 = 18460;
        pub const TableCellRightBorderStyle: i32 = 18461;
        pub const TableCellTopBorderBrush: i32 = 18462;
        pub const TableCellBottomBorderBrush: i32 = 18463;
        pub const TableCellLeftBorderBrush: i32 = 18464;
        pub const TableCellRightBorderBrush: i32 = 18465;
        pub const ImageName: i32 = 20480;
        pub const ImageTitle: i32 = 20481;
        pub const ImageAltText: i32 = 20482;
        pub const ImageWidth: i32 = 20496;
        pub const ImageHeight: i32 = 20497;
        pub const ImageQuality: i32 = 20500;
        pub const ImageMaxWidth: i32 = 20501;
        pub const FullWidthSelection: i32 = 24576;
        pub const PageBreakPolicy: i32 = 28672;
        pub const UserProperty: i32 = 1048576;
    };

    pub const ObjectTypes = enum {
        pub const NoObject: i32 = 0;
        pub const ImageObject: i32 = 1;
        pub const TableObject: i32 = 2;
        pub const TableCellObject: i32 = 3;
        pub const UserObject: i32 = 4096;
    };

    pub const PageBreakFlag = enum {
        pub const PageBreak_Auto: i32 = 0;
        pub const PageBreak_AlwaysBefore: i32 = 1;
        pub const PageBreak_AlwaysAfter: i32 = 16;
    };

    pub const VerticalAlignment = enum {
        pub const AlignNormal: i32 = 0;
        pub const AlignSuperScript: i32 = 1;
        pub const AlignSubScript: i32 = 2;
        pub const AlignMiddle: i32 = 3;
        pub const AlignTop: i32 = 4;
        pub const AlignBottom: i32 = 5;
        pub const AlignBaseline: i32 = 6;
    };

    pub const UnderlineStyle = enum {
        pub const NoUnderline: i32 = 0;
        pub const SingleUnderline: i32 = 1;
        pub const DashUnderline: i32 = 2;
        pub const DotLine: i32 = 3;
        pub const DashDotLine: i32 = 4;
        pub const DashDotDotLine: i32 = 5;
        pub const WaveUnderline: i32 = 6;
        pub const SpellCheckUnderline: i32 = 7;
    };

    pub const FontPropertiesInheritanceBehavior = enum {
        pub const FontPropertiesSpecifiedOnly: i32 = 0;
        pub const FontPropertiesAll: i32 = 1;
    };

    pub const LineHeightTypes = enum {
        pub const SingleHeight: i32 = 0;
        pub const ProportionalHeight: i32 = 1;
        pub const FixedHeight: i32 = 2;
        pub const MinimumHeight: i32 = 3;
        pub const LineDistanceHeight: i32 = 4;
    };

    pub const MarkerType = enum {
        pub const NoMarker: i32 = 0;
        pub const Unchecked: i32 = 1;
        pub const Checked: i32 = 2;
    };

    pub const Style = enum {
        pub const ListDisc: i32 = -1;
        pub const ListCircle: i32 = -2;
        pub const ListSquare: i32 = -3;
        pub const ListDecimal: i32 = -4;
        pub const ListLowerAlpha: i32 = -5;
        pub const ListUpperAlpha: i32 = -6;
        pub const ListLowerRoman: i32 = -7;
        pub const ListUpperRoman: i32 = -8;
        pub const ListStyleUndefined: i32 = 0;
    };

    pub const Position = enum {
        pub const InFlow: i32 = 0;
        pub const FloatLeft: i32 = 1;
        pub const FloatRight: i32 = 2;
    };

    pub const BorderStyle = enum {
        pub const BorderStyle_None: i32 = 0;
        pub const BorderStyle_Dotted: i32 = 1;
        pub const BorderStyle_Dashed: i32 = 2;
        pub const BorderStyle_Solid: i32 = 3;
        pub const BorderStyle_Double: i32 = 4;
        pub const BorderStyle_DotDash: i32 = 5;
        pub const BorderStyle_DotDotDash: i32 = 6;
        pub const BorderStyle_Groove: i32 = 7;
        pub const BorderStyle_Ridge: i32 = 8;
        pub const BorderStyle_Inset: i32 = 9;
        pub const BorderStyle_Outset: i32 = 10;
    };
};
