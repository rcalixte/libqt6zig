const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBrush = @import("libqt6").QBrush;
const QColor = @import("libqt6").QColor;
const QFont = @import("libqt6").QFont;
const QPen = @import("libqt6").QPen;
const QTextOption__Tab = @import("libqt6").QTextOption__Tab;
const QVariant = @import("libqt6").QVariant;
const qfont_enums = @import("libqfont.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qtextformat_enums = enums;
const std = @import("std");
const ArrayMap_i32_QVariant = std.array_hash_map.Auto(i32, QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlength.html)
pub const QTextLength = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlength.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextLength,

    pub const _is_QTextLength = {};

    /// New constructs a new QTextLength object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTextLength `
    ///
    pub fn New(other: anytype) QTextLength {
        comptime _ = @TypeOf(other)._is_QTextLength;
        return .{ .ptr = qtc.QTextLength_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QTextLength object and invalidates the source QTextLength object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTextLength `
    ///
    pub fn New2(other: anytype) QTextLength {
        comptime _ = @TypeOf(other)._is_QTextLength;
        return .{ .ptr = qtc.QTextLength_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QTextLength object.
    ///
    pub fn New3() QTextLength {
        return .{ .ptr = qtc.QTextLength_new3() };
    }

    /// New4 constructs a new QTextLength object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qtextformat_enums.Type `
    ///
    /// ` value: f64 `
    ///
    pub fn New4(typeVal: i32, value: f64) QTextLength {
        return .{ .ptr = qtc.QTextLength_new4(@bitCast(typeVal), @bitCast(value)) };
    }

    /// New5 constructs a new QTextLength object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTextLength `
    ///
    pub fn New5(param1: anytype) QTextLength {
        comptime _ = @TypeOf(param1)._is_QTextLength;
        return .{ .ptr = qtc.QTextLength_new5(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextLength `
    ///
    /// ` other: QTextLength `
    ///
    pub fn CopyAssign(self: QTextLength, other: QTextLength) void {
        qtc.QTextLength_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextLength `
    ///
    /// ` other: QTextLength `
    ///
    pub fn MoveAssign(self: QTextLength, other: QTextLength) void {
        qtc.QTextLength_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlength.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLength `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.Type `
    ///
    pub fn Type(self: QTextLength) i32 {
        return qtc.QTextLength_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlength.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLength `
    ///
    /// ` maximumLength: f64 `
    ///
    pub fn Value(self: QTextLength, maximumLength: f64) f64 {
        return qtc.QTextLength_Value(@ptrCast(self.ptr), @bitCast(maximumLength));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlength.html#rawValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLength `
    ///
    pub fn RawValue(self: QTextLength) f64 {
        return qtc.QTextLength_RawValue(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlength.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLength `
    ///
    /// ` other: QTextLength `
    ///
    pub fn OperatorEqual(self: QTextLength, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QTextLength;
        return qtc.QTextLength_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlength.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLength `
    ///
    /// ` other: QTextLength `
    ///
    pub fn OperatorNotEqual(self: QTextLength, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QTextLength;
        return qtc.QTextLength_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlength.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLength `
    ///
    pub fn ToQVariant(self: QTextLength) QVariant {
        return .{ .ptr = qtc.QTextLength_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlength.html#dtor.QTextLength)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextLength `
    ///
    pub fn Delete(self: QTextLength) void {
        qtc.QTextLength_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html)
pub const QTextFormat = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextFormat,

    pub const _is_QTextFormat = {};

    /// New constructs a new QTextFormat object.
    ///
    pub fn New() QTextFormat {
        return .{ .ptr = qtc.QTextFormat_new() };
    }

    /// New2 constructs a new QTextFormat object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: i32 `
    ///
    pub fn New2(typeVal: i32) QTextFormat {
        return .{ .ptr = qtc.QTextFormat_new2(@bitCast(typeVal)) };
    }

    /// New3 constructs a new QTextFormat object.
    ///
    /// ## Parameter(s):
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn New3(rhs: anytype) QTextFormat {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return .{ .ptr = qtc.QTextFormat_new3(@ptrCast(rhs.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn OperatorAssign(self: QTextFormat, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        qtc.QTextFormat_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` other: QTextFormat `
    ///
    pub fn Swap(self: QTextFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#merge)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` other: QTextFormat `
    ///
    pub fn Merge(self: QTextFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Merge(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn IsValid(self: QTextFormat) bool {
        return qtc.QTextFormat_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn IsEmpty(self: QTextFormat) bool {
        return qtc.QTextFormat_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn Type(self: QTextFormat) i32 {
        return qtc.QTextFormat_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn ObjectIndex(self: QTextFormat) i32 {
        return qtc.QTextFormat_ObjectIndex(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` object: i32 `
    ///
    pub fn SetObjectIndex(self: QTextFormat, object: i32) void {
        qtc.QTextFormat_SetObjectIndex(@ptrCast(self.ptr), @bitCast(object));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn Property(self: QTextFormat, propertyId: i32) QVariant {
        return .{ .ptr = qtc.QTextFormat_Property(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QTextFormat, propertyId: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QTextFormat_SetProperty(@ptrCast(self.ptr), @bitCast(propertyId), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn ClearProperty(self: QTextFormat, propertyId: i32) void {
        qtc.QTextFormat_ClearProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn HasProperty(self: QTextFormat, propertyId: i32) bool {
        return qtc.QTextFormat_HasProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn BoolProperty(self: QTextFormat, propertyId: i32) bool {
        return qtc.QTextFormat_BoolProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn IntProperty(self: QTextFormat, propertyId: i32) i32 {
        return qtc.QTextFormat_IntProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn DoubleProperty(self: QTextFormat, propertyId: i32) f64 {
        return qtc.QTextFormat_DoubleProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn StringProperty(self: QTextFormat, allocator: std.mem.Allocator, propertyId: i32) []const u8 {
        var _str = qtc.QTextFormat_StringProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextformat.StringProperty: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn ColorProperty(self: QTextFormat, propertyId: i32) QColor {
        return .{ .ptr = qtc.QTextFormat_ColorProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn PenProperty(self: QTextFormat, propertyId: i32) QPen {
        return .{ .ptr = qtc.QTextFormat_PenProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn BrushProperty(self: QTextFormat, propertyId: i32) QBrush {
        return .{ .ptr = qtc.QTextFormat_BrushProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn LengthProperty(self: QTextFormat, propertyId: i32) QTextLength {
        return .{ .ptr = qtc.QTextFormat_LengthProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn LengthVectorProperty(self: QTextFormat, allocator: std.mem.Allocator, propertyId: i32) []QTextLength {
        const _arr: qtc.libqt_list = qtc.QTextFormat_LengthVectorProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextLength, _arr.len) catch @panic("qtextformat.LengthVectorProperty: Memory allocation failed");
        const _data: [*]QtC.QTextLength = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` lengths: []QTextLength `
    ///
    pub fn SetProperty2(self: QTextFormat, propertyId: i32, lengths: []QTextLength) void {
        const lengths_list = qtc.libqt_list{
            .len = lengths.len,
            .data = @ptrCast(lengths.ptr),
        };
        qtc.QTextFormat_SetProperty2(@ptrCast(self.ptr), @bitCast(propertyId), lengths_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#properties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Properties(self: QTextFormat, allocator: std.mem.Allocator) ArrayMap_i32_QVariant {
        const _map: qtc.libqt_map = qtc.QTextFormat_Properties(@ptrCast(self.ptr));
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
            _ret.put(allocator, _key, .{ .ptr = @ptrCast(_value) }) catch @panic("qtextformat.Properties: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn PropertyCount(self: QTextFormat) i32 {
        return qtc.QTextFormat_PropertyCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn SetObjectType(self: QTextFormat, typeVal: i32) void {
        qtc.QTextFormat_SetObjectType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn ObjectType(self: QTextFormat) i32 {
        return qtc.QTextFormat_ObjectType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn IsCharFormat(self: QTextFormat) bool {
        return qtc.QTextFormat_IsCharFormat(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn IsBlockFormat(self: QTextFormat) bool {
        return qtc.QTextFormat_IsBlockFormat(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn IsListFormat(self: QTextFormat) bool {
        return qtc.QTextFormat_IsListFormat(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn IsFrameFormat(self: QTextFormat) bool {
        return qtc.QTextFormat_IsFrameFormat(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn IsImageFormat(self: QTextFormat) bool {
        return qtc.QTextFormat_IsImageFormat(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn IsTableFormat(self: QTextFormat) bool {
        return qtc.QTextFormat_IsTableFormat(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn IsTableCellFormat(self: QTextFormat) bool {
        return qtc.QTextFormat_IsTableCellFormat(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn ToBlockFormat(self: QTextFormat) QTextBlockFormat {
        return .{ .ptr = qtc.QTextFormat_ToBlockFormat(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn ToCharFormat(self: QTextFormat) QTextCharFormat {
        return .{ .ptr = qtc.QTextFormat_ToCharFormat(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn ToListFormat(self: QTextFormat) QTextListFormat {
        return .{ .ptr = qtc.QTextFormat_ToListFormat(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn ToTableFormat(self: QTextFormat) QTextTableFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableFormat(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn ToFrameFormat(self: QTextFormat) QTextFrameFormat {
        return .{ .ptr = qtc.QTextFormat_ToFrameFormat(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn ToImageFormat(self: QTextFormat) QTextImageFormat {
        return .{ .ptr = qtc.QTextFormat_ToImageFormat(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn ToTableCellFormat(self: QTextFormat) QTextTableCellFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableCellFormat(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn OperatorEqual(self: QTextFormat, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn OperatorNotEqual(self: QTextFormat, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn ToQVariant(self: QTextFormat) QVariant {
        return .{ .ptr = qtc.QTextFormat_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: QTextFormat, direction: i32) void {
        qtc.QTextFormat_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: QTextFormat) i32 {
        return qtc.QTextFormat_LayoutDirection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetBackground(self: QTextFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetBackground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn Background(self: QTextFormat) QBrush {
        return .{ .ptr = qtc.QTextFormat_Background(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn ClearBackground(self: QTextFormat) void {
        qtc.QTextFormat_ClearBackground(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetForeground(self: QTextFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetForeground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#foreground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn Foreground(self: QTextFormat) QBrush {
        return .{ .ptr = qtc.QTextFormat_Foreground(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn ClearForeground(self: QTextFormat) void {
        qtc.QTextFormat_ClearForeground(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#dtor.QTextFormat)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextFormat `
    ///
    pub fn Delete(self: QTextFormat) void {
        qtc.QTextFormat_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html)
pub const QTextCharFormat = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextCharFormat,

    pub const _is_QTextCharFormat = {};
    pub const _is_QTextFormat = {};

    /// New constructs a new QTextCharFormat object.
    ///
    pub fn New() QTextCharFormat {
        return .{ .ptr = qtc.QTextCharFormat_new() };
    }

    /// New2 constructs a new QTextCharFormat object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTextCharFormat `
    ///
    pub fn New2(param1: anytype) QTextCharFormat {
        comptime _ = @TypeOf(param1)._is_QTextCharFormat;
        return .{ .ptr = qtc.QTextCharFormat_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn IsValid(self: QTextCharFormat) bool {
        return qtc.QTextCharFormat_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: QTextCharFormat, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QTextCharFormat_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn Font(self: QTextCharFormat) QFont {
        return .{ .ptr = qtc.QTextCharFormat_Font(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` family: []const u8 `
    ///
    pub fn SetFontFamily(self: QTextCharFormat, family: []const u8) void {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        qtc.QTextCharFormat_SetFontFamily(@ptrCast(self.ptr), family_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FontFamily(self: QTextCharFormat, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextCharFormat_FontFamily(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextcharformat.FontFamily: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamilies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` families: []const []const u8 `
    ///
    pub fn SetFontFamilies(self: QTextCharFormat, allocator: std.mem.Allocator, families: []const []const u8) void {
        const families_arr = allocator.alloc(qtc.libqt_string, families.len) catch @panic("qtextcharformat.SetFontFamilies: Memory allocation failed");
        defer allocator.free(families_arr);
        for (families, 0..families.len) |item, i|
            families_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const families_list = qtc.libqt_list{
            .len = families.len,
            .data = families_arr.ptr,
        };
        qtc.QTextCharFormat_SetFontFamilies(@ptrCast(self.ptr), families_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamilies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn FontFamilies(self: QTextCharFormat) QVariant {
        return .{ .ptr = qtc.QTextCharFormat_FontFamilies(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` styleName: []const u8 `
    ///
    pub fn SetFontStyleName(self: QTextCharFormat, styleName: []const u8) void {
        const styleName_str = qtc.libqt_string{
            .len = styleName.len,
            .data = styleName.ptr,
        };
        qtc.QTextCharFormat_SetFontStyleName(@ptrCast(self.ptr), styleName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn FontStyleName(self: QTextCharFormat) QVariant {
        return .{ .ptr = qtc.QTextCharFormat_FontStyleName(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` size: f64 `
    ///
    pub fn SetFontPointSize(self: QTextCharFormat, size: f64) void {
        qtc.QTextCharFormat_SetFontPointSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn FontPointSize(self: QTextCharFormat) f64 {
        return qtc.QTextCharFormat_FontPointSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` weight: i32 `
    ///
    pub fn SetFontWeight(self: QTextCharFormat, weight: i32) void {
        qtc.QTextCharFormat_SetFontWeight(@ptrCast(self.ptr), @bitCast(weight));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn FontWeight(self: QTextCharFormat) i32 {
        return qtc.QTextCharFormat_FontWeight(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontItalic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` italic: bool `
    ///
    pub fn SetFontItalic(self: QTextCharFormat, italic: bool) void {
        qtc.QTextCharFormat_SetFontItalic(@ptrCast(self.ptr), italic);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontItalic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn FontItalic(self: QTextCharFormat) bool {
        return qtc.QTextCharFormat_FontItalic(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontCapitalization)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` capitalization: qfont_enums.Capitalization `
    ///
    pub fn SetFontCapitalization(self: QTextCharFormat, capitalization: i32) void {
        qtc.QTextCharFormat_SetFontCapitalization(@ptrCast(self.ptr), @bitCast(capitalization));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontCapitalization)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.Capitalization `
    ///
    pub fn FontCapitalization(self: QTextCharFormat) i32 {
        return qtc.QTextCharFormat_FontCapitalization(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacingType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` letterSpacingType: qfont_enums.SpacingType `
    ///
    pub fn SetFontLetterSpacingType(self: QTextCharFormat, letterSpacingType: i32) void {
        qtc.QTextCharFormat_SetFontLetterSpacingType(@ptrCast(self.ptr), @bitCast(letterSpacingType));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacingType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.SpacingType `
    ///
    pub fn FontLetterSpacingType(self: QTextCharFormat) i32 {
        return qtc.QTextCharFormat_FontLetterSpacingType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` spacing: f64 `
    ///
    pub fn SetFontLetterSpacing(self: QTextCharFormat, spacing: f64) void {
        qtc.QTextCharFormat_SetFontLetterSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn FontLetterSpacing(self: QTextCharFormat) f64 {
        return qtc.QTextCharFormat_FontLetterSpacing(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWordSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` spacing: f64 `
    ///
    pub fn SetFontWordSpacing(self: QTextCharFormat, spacing: f64) void {
        qtc.QTextCharFormat_SetFontWordSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontWordSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn FontWordSpacing(self: QTextCharFormat) f64 {
        return qtc.QTextCharFormat_FontWordSpacing(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontUnderline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` underline: bool `
    ///
    pub fn SetFontUnderline(self: QTextCharFormat, underline: bool) void {
        qtc.QTextCharFormat_SetFontUnderline(@ptrCast(self.ptr), underline);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontUnderline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn FontUnderline(self: QTextCharFormat) bool {
        return qtc.QTextCharFormat_FontUnderline(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontOverline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` overline: bool `
    ///
    pub fn SetFontOverline(self: QTextCharFormat, overline: bool) void {
        qtc.QTextCharFormat_SetFontOverline(@ptrCast(self.ptr), overline);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontOverline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn FontOverline(self: QTextCharFormat) bool {
        return qtc.QTextCharFormat_FontOverline(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStrikeOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` strikeOut: bool `
    ///
    pub fn SetFontStrikeOut(self: QTextCharFormat, strikeOut: bool) void {
        qtc.QTextCharFormat_SetFontStrikeOut(@ptrCast(self.ptr), strikeOut);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStrikeOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn FontStrikeOut(self: QTextCharFormat) bool {
        return qtc.QTextCharFormat_FontStrikeOut(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` color: QColor `
    ///
    pub fn SetUnderlineColor(self: QTextCharFormat, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QTextCharFormat_SetUnderlineColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#underlineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn UnderlineColor(self: QTextCharFormat) QColor {
        return .{ .ptr = qtc.QTextCharFormat_UnderlineColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFixedPitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` fixedPitch: bool `
    ///
    pub fn SetFontFixedPitch(self: QTextCharFormat, fixedPitch: bool) void {
        qtc.QTextCharFormat_SetFontFixedPitch(@ptrCast(self.ptr), fixedPitch);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontFixedPitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn FontFixedPitch(self: QTextCharFormat) bool {
        return qtc.QTextCharFormat_FontFixedPitch(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` factor: i32 `
    ///
    pub fn SetFontStretch(self: QTextCharFormat, factor: i32) void {
        qtc.QTextCharFormat_SetFontStretch(@ptrCast(self.ptr), @bitCast(factor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn FontStretch(self: QTextCharFormat) i32 {
        return qtc.QTextCharFormat_FontStretch(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` hint: qfont_enums.StyleHint `
    ///
    pub fn SetFontStyleHint(self: QTextCharFormat, hint: i32) void {
        qtc.QTextCharFormat_SetFontStyleHint(@ptrCast(self.ptr), @bitCast(hint));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleStrategy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` strategy: qfont_enums.StyleStrategy `
    ///
    pub fn SetFontStyleStrategy(self: QTextCharFormat, strategy: i32) void {
        qtc.QTextCharFormat_SetFontStyleStrategy(@ptrCast(self.ptr), @bitCast(strategy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.StyleHint `
    ///
    pub fn FontStyleHint(self: QTextCharFormat) i32 {
        return qtc.QTextCharFormat_FontStyleHint(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleStrategy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.StyleStrategy `
    ///
    pub fn FontStyleStrategy(self: QTextCharFormat) i32 {
        return qtc.QTextCharFormat_FontStyleStrategy(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontHintingPreference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` hintingPreference: qfont_enums.HintingPreference `
    ///
    pub fn SetFontHintingPreference(self: QTextCharFormat, hintingPreference: i32) void {
        qtc.QTextCharFormat_SetFontHintingPreference(@ptrCast(self.ptr), @bitCast(hintingPreference));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontHintingPreference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.HintingPreference `
    ///
    pub fn FontHintingPreference(self: QTextCharFormat) i32 {
        return qtc.QTextCharFormat_FontHintingPreference(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontKerning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` enable: bool `
    ///
    pub fn SetFontKerning(self: QTextCharFormat, enable: bool) void {
        qtc.QTextCharFormat_SetFontKerning(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontKerning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn FontKerning(self: QTextCharFormat) bool {
        return qtc.QTextCharFormat_FontKerning(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` style: qtextformat_enums.UnderlineStyle `
    ///
    pub fn SetUnderlineStyle(self: QTextCharFormat, style: i32) void {
        qtc.QTextCharFormat_SetUnderlineStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#underlineStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.UnderlineStyle `
    ///
    pub fn UnderlineStyle(self: QTextCharFormat) i32 {
        return qtc.QTextCharFormat_UnderlineStyle(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setVerticalAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` alignment: qtextformat_enums.VerticalAlignment `
    ///
    pub fn SetVerticalAlignment(self: QTextCharFormat, alignment: i32) void {
        qtc.QTextCharFormat_SetVerticalAlignment(@ptrCast(self.ptr), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#verticalAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.VerticalAlignment `
    ///
    pub fn VerticalAlignment(self: QTextCharFormat) i32 {
        return qtc.QTextCharFormat_VerticalAlignment(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setTextOutline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` pen: QPen `
    ///
    pub fn SetTextOutline(self: QTextCharFormat, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QTextCharFormat_SetTextOutline(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#textOutline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn TextOutline(self: QTextCharFormat) QPen {
        return .{ .ptr = qtc.QTextCharFormat_TextOutline(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` tip: []const u8 `
    ///
    pub fn SetToolTip(self: QTextCharFormat, tip: []const u8) void {
        const tip_str = qtc.libqt_string{
            .len = tip.len,
            .data = tip.ptr,
        };
        qtc.QTextCharFormat_SetToolTip(@ptrCast(self.ptr), tip_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: QTextCharFormat, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextCharFormat_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextcharformat.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setSuperScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` baseline: f64 `
    ///
    pub fn SetSuperScriptBaseline(self: QTextCharFormat, baseline: f64) void {
        qtc.QTextCharFormat_SetSuperScriptBaseline(@ptrCast(self.ptr), @bitCast(baseline));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#superScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn SuperScriptBaseline(self: QTextCharFormat) f64 {
        return qtc.QTextCharFormat_SuperScriptBaseline(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setSubScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` baseline: f64 `
    ///
    pub fn SetSubScriptBaseline(self: QTextCharFormat, baseline: f64) void {
        qtc.QTextCharFormat_SetSubScriptBaseline(@ptrCast(self.ptr), @bitCast(baseline));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#subScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn SubScriptBaseline(self: QTextCharFormat) f64 {
        return qtc.QTextCharFormat_SubScriptBaseline(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setBaselineOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` baseline: f64 `
    ///
    pub fn SetBaselineOffset(self: QTextCharFormat, baseline: f64) void {
        qtc.QTextCharFormat_SetBaselineOffset(@ptrCast(self.ptr), @bitCast(baseline));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#baselineOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn BaselineOffset(self: QTextCharFormat) f64 {
        return qtc.QTextCharFormat_BaselineOffset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` anchor: bool `
    ///
    pub fn SetAnchor(self: QTextCharFormat, anchor: bool) void {
        qtc.QTextCharFormat_SetAnchor(@ptrCast(self.ptr), anchor);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#isAnchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn IsAnchor(self: QTextCharFormat) bool {
        return qtc.QTextCharFormat_IsAnchor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorHref)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetAnchorHref(self: QTextCharFormat, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QTextCharFormat_SetAnchorHref(@ptrCast(self.ptr), value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#anchorHref)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AnchorHref(self: QTextCharFormat, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextCharFormat_AnchorHref(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextcharformat.AnchorHref: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` names: []const []const u8 `
    ///
    pub fn SetAnchorNames(self: QTextCharFormat, allocator: std.mem.Allocator, names: []const []const u8) void {
        const names_arr = allocator.alloc(qtc.libqt_string, names.len) catch @panic("qtextcharformat.SetAnchorNames: Memory allocation failed");
        defer allocator.free(names_arr);
        for (names, 0..names.len) |item, i|
            names_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const names_list = qtc.libqt_list{
            .len = names.len,
            .data = names_arr.ptr,
        };
        qtc.QTextCharFormat_SetAnchorNames(@ptrCast(self.ptr), names_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#anchorNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AnchorNames(self: QTextCharFormat, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QTextCharFormat_AnchorNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellRowSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` tableCellRowSpan: i32 `
    ///
    pub fn SetTableCellRowSpan(self: QTextCharFormat, tableCellRowSpan: i32) void {
        qtc.QTextCharFormat_SetTableCellRowSpan(@ptrCast(self.ptr), @bitCast(tableCellRowSpan));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellRowSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn TableCellRowSpan(self: QTextCharFormat) i32 {
        return qtc.QTextCharFormat_TableCellRowSpan(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellColumnSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` tableCellColumnSpan: i32 `
    ///
    pub fn SetTableCellColumnSpan(self: QTextCharFormat, tableCellColumnSpan: i32) void {
        qtc.QTextCharFormat_SetTableCellColumnSpan(@ptrCast(self.ptr), @bitCast(tableCellColumnSpan));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellColumnSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn TableCellColumnSpan(self: QTextCharFormat) i32 {
        return qtc.QTextCharFormat_TableCellColumnSpan(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` font: QFont `
    ///
    /// ` behavior: qtextformat_enums.FontPropertiesInheritanceBehavior `
    ///
    pub fn SetFont2(self: QTextCharFormat, font: anytype, behavior: i32) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QTextCharFormat_SetFont2(@ptrCast(self.ptr), @ptrCast(font.ptr), @bitCast(behavior));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` hint: qfont_enums.StyleHint `
    ///
    /// ` strategy: qfont_enums.StyleStrategy `
    ///
    pub fn SetFontStyleHint2(self: QTextCharFormat, hint: i32, strategy: i32) void {
        qtc.QTextCharFormat_SetFontStyleHint2(@ptrCast(self.ptr), @bitCast(hint), @bitCast(strategy));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn OperatorAssign(self: QTextCharFormat, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        qtc.QTextFormat_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` other: QTextFormat `
    ///
    pub fn Swap(self: QTextCharFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#merge)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` other: QTextFormat `
    ///
    pub fn Merge(self: QTextCharFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Merge(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn IsEmpty(self: QTextCharFormat) bool {
        return qtc.QTextFormat_IsEmpty(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn Type(self: QTextCharFormat) i32 {
        return qtc.QTextFormat_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn ObjectIndex(self: QTextCharFormat) i32 {
        return qtc.QTextFormat_ObjectIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` object: i32 `
    ///
    pub fn SetObjectIndex(self: QTextCharFormat, object: i32) void {
        qtc.QTextFormat_SetObjectIndex(@ptrCast(self.ptr), @bitCast(object));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn Property(self: QTextCharFormat, propertyId: i32) QVariant {
        return .{ .ptr = qtc.QTextFormat_Property(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QTextCharFormat, propertyId: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QTextFormat_SetProperty(@ptrCast(self.ptr), @bitCast(propertyId), @ptrCast(value.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn ClearProperty(self: QTextCharFormat, propertyId: i32) void {
        qtc.QTextFormat_ClearProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn HasProperty(self: QTextCharFormat, propertyId: i32) bool {
        return qtc.QTextFormat_HasProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn BoolProperty(self: QTextCharFormat, propertyId: i32) bool {
        return qtc.QTextFormat_BoolProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn IntProperty(self: QTextCharFormat, propertyId: i32) i32 {
        return qtc.QTextFormat_IntProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn DoubleProperty(self: QTextCharFormat, propertyId: i32) f64 {
        return qtc.QTextFormat_DoubleProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn StringProperty(self: QTextCharFormat, allocator: std.mem.Allocator, propertyId: i32) []const u8 {
        var _str = qtc.QTextFormat_StringProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextcharformat.StringProperty: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn ColorProperty(self: QTextCharFormat, propertyId: i32) QColor {
        return .{ .ptr = qtc.QTextFormat_ColorProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn PenProperty(self: QTextCharFormat, propertyId: i32) QPen {
        return .{ .ptr = qtc.QTextFormat_PenProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn BrushProperty(self: QTextCharFormat, propertyId: i32) QBrush {
        return .{ .ptr = qtc.QTextFormat_BrushProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn LengthProperty(self: QTextCharFormat, propertyId: i32) QTextLength {
        return .{ .ptr = qtc.QTextFormat_LengthProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn LengthVectorProperty(self: QTextCharFormat, allocator: std.mem.Allocator, propertyId: i32) []QTextLength {
        const _arr: qtc.libqt_list = qtc.QTextFormat_LengthVectorProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextLength, _arr.len) catch @panic("qtextcharformat.LengthVectorProperty: Memory allocation failed");
        const _data: [*]QtC.QTextLength = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` lengths: []QTextLength `
    ///
    pub fn SetProperty2(self: QTextCharFormat, propertyId: i32, lengths: []QTextLength) void {
        const lengths_list = qtc.libqt_list{
            .len = lengths.len,
            .data = @ptrCast(lengths.ptr),
        };
        qtc.QTextFormat_SetProperty2(@ptrCast(self.ptr), @bitCast(propertyId), lengths_list);
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#properties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Properties(self: QTextCharFormat, allocator: std.mem.Allocator) ArrayMap_i32_QVariant {
        const _map: qtc.libqt_map = qtc.QTextFormat_Properties(@ptrCast(self.ptr));
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
            _ret.put(allocator, _key, .{ .ptr = @ptrCast(_value) }) catch @panic("qtextcharformat.Properties: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn PropertyCount(self: QTextCharFormat) i32 {
        return qtc.QTextFormat_PropertyCount(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn SetObjectType(self: QTextCharFormat, typeVal: i32) void {
        qtc.QTextFormat_SetObjectType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn ObjectType(self: QTextCharFormat) i32 {
        return qtc.QTextFormat_ObjectType(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn IsCharFormat(self: QTextCharFormat) bool {
        return qtc.QTextFormat_IsCharFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn IsBlockFormat(self: QTextCharFormat) bool {
        return qtc.QTextFormat_IsBlockFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn IsListFormat(self: QTextCharFormat) bool {
        return qtc.QTextFormat_IsListFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn IsFrameFormat(self: QTextCharFormat) bool {
        return qtc.QTextFormat_IsFrameFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn IsImageFormat(self: QTextCharFormat) bool {
        return qtc.QTextFormat_IsImageFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn IsTableFormat(self: QTextCharFormat) bool {
        return qtc.QTextFormat_IsTableFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn IsTableCellFormat(self: QTextCharFormat) bool {
        return qtc.QTextFormat_IsTableCellFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn ToBlockFormat(self: QTextCharFormat) QTextBlockFormat {
        return .{ .ptr = qtc.QTextFormat_ToBlockFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn ToCharFormat(self: QTextCharFormat) QTextCharFormat {
        return .{ .ptr = qtc.QTextFormat_ToCharFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn ToListFormat(self: QTextCharFormat) QTextListFormat {
        return .{ .ptr = qtc.QTextFormat_ToListFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn ToTableFormat(self: QTextCharFormat) QTextTableFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn ToFrameFormat(self: QTextCharFormat) QTextFrameFormat {
        return .{ .ptr = qtc.QTextFormat_ToFrameFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn ToImageFormat(self: QTextCharFormat) QTextImageFormat {
        return .{ .ptr = qtc.QTextFormat_ToImageFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn ToTableCellFormat(self: QTextCharFormat) QTextTableCellFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableCellFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn OperatorEqual(self: QTextCharFormat, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn OperatorNotEqual(self: QTextCharFormat, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn ToQVariant(self: QTextCharFormat) QVariant {
        return .{ .ptr = qtc.QTextFormat_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: QTextCharFormat, direction: i32) void {
        qtc.QTextFormat_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: QTextCharFormat) i32 {
        return qtc.QTextFormat_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetBackground(self: QTextCharFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetBackground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn Background(self: QTextCharFormat) QBrush {
        return .{ .ptr = qtc.QTextFormat_Background(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn ClearBackground(self: QTextCharFormat) void {
        qtc.QTextFormat_ClearBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetForeground(self: QTextCharFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetForeground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#foreground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn Foreground(self: QTextCharFormat) QBrush {
        return .{ .ptr = qtc.QTextFormat_Foreground(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn ClearForeground(self: QTextCharFormat) void {
        qtc.QTextFormat_ClearForeground(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#dtor.QTextCharFormat)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn Delete(self: QTextCharFormat) void {
        qtc.QTextCharFormat_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html)
pub const QTextBlockFormat = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextBlockFormat,

    pub const _is_QTextBlockFormat = {};
    pub const _is_QTextFormat = {};

    /// New constructs a new QTextBlockFormat object.
    ///
    pub fn New() QTextBlockFormat {
        return .{ .ptr = qtc.QTextBlockFormat_new() };
    }

    /// New2 constructs a new QTextBlockFormat object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTextBlockFormat `
    ///
    pub fn New2(param1: anytype) QTextBlockFormat {
        comptime _ = @TypeOf(param1)._is_QTextBlockFormat;
        return .{ .ptr = qtc.QTextBlockFormat_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn IsValid(self: QTextBlockFormat) bool {
        return qtc.QTextBlockFormat_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: QTextBlockFormat, alignment: i32) void {
        qtc.QTextBlockFormat_SetAlignment(@ptrCast(self.ptr), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: QTextBlockFormat) i32 {
        return qtc.QTextBlockFormat_Alignment(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#setTopMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` margin: f64 `
    ///
    pub fn SetTopMargin(self: QTextBlockFormat, margin: f64) void {
        qtc.QTextBlockFormat_SetTopMargin(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#topMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn TopMargin(self: QTextBlockFormat) f64 {
        return qtc.QTextBlockFormat_TopMargin(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#setBottomMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` margin: f64 `
    ///
    pub fn SetBottomMargin(self: QTextBlockFormat, margin: f64) void {
        qtc.QTextBlockFormat_SetBottomMargin(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#bottomMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn BottomMargin(self: QTextBlockFormat) f64 {
        return qtc.QTextBlockFormat_BottomMargin(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#setLeftMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` margin: f64 `
    ///
    pub fn SetLeftMargin(self: QTextBlockFormat, margin: f64) void {
        qtc.QTextBlockFormat_SetLeftMargin(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#leftMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn LeftMargin(self: QTextBlockFormat) f64 {
        return qtc.QTextBlockFormat_LeftMargin(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#setRightMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` margin: f64 `
    ///
    pub fn SetRightMargin(self: QTextBlockFormat, margin: f64) void {
        qtc.QTextBlockFormat_SetRightMargin(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#rightMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn RightMargin(self: QTextBlockFormat) f64 {
        return qtc.QTextBlockFormat_RightMargin(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#setTextIndent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` aindent: f64 `
    ///
    pub fn SetTextIndent(self: QTextBlockFormat, aindent: f64) void {
        qtc.QTextBlockFormat_SetTextIndent(@ptrCast(self.ptr), @bitCast(aindent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#textIndent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn TextIndent(self: QTextBlockFormat) f64 {
        return qtc.QTextBlockFormat_TextIndent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#setIndent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` indent: i32 `
    ///
    pub fn SetIndent(self: QTextBlockFormat, indent: i32) void {
        qtc.QTextBlockFormat_SetIndent(@ptrCast(self.ptr), @bitCast(indent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#indent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn Indent(self: QTextBlockFormat) i32 {
        return qtc.QTextBlockFormat_Indent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#setHeadingLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` alevel: i32 `
    ///
    pub fn SetHeadingLevel(self: QTextBlockFormat, alevel: i32) void {
        qtc.QTextBlockFormat_SetHeadingLevel(@ptrCast(self.ptr), @bitCast(alevel));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#headingLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn HeadingLevel(self: QTextBlockFormat) i32 {
        return qtc.QTextBlockFormat_HeadingLevel(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#setLineHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` height: f64 `
    ///
    /// ` heightType: i32 `
    ///
    pub fn SetLineHeight(self: QTextBlockFormat, height: f64, heightType: i32) void {
        qtc.QTextBlockFormat_SetLineHeight(@ptrCast(self.ptr), @bitCast(height), @bitCast(heightType));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#lineHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` scriptLineHeight: f64 `
    ///
    /// ` scaling: f64 `
    ///
    pub fn LineHeight(self: QTextBlockFormat, scriptLineHeight: f64, scaling: f64) f64 {
        return qtc.QTextBlockFormat_LineHeight(@ptrCast(self.ptr), @bitCast(scriptLineHeight), @bitCast(scaling));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#lineHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn LineHeight2(self: QTextBlockFormat) f64 {
        return qtc.QTextBlockFormat_LineHeight2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#lineHeightType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn LineHeightType(self: QTextBlockFormat) i32 {
        return qtc.QTextBlockFormat_LineHeightType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#setNonBreakableLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` b: bool `
    ///
    pub fn SetNonBreakableLines(self: QTextBlockFormat, b: bool) void {
        qtc.QTextBlockFormat_SetNonBreakableLines(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#nonBreakableLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn NonBreakableLines(self: QTextBlockFormat) bool {
        return qtc.QTextBlockFormat_NonBreakableLines(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#setPageBreakPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` flags: flag of qtextformat_enums.PageBreakFlag `
    ///
    pub fn SetPageBreakPolicy(self: QTextBlockFormat, flags: i32) void {
        qtc.QTextBlockFormat_SetPageBreakPolicy(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#pageBreakPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ## Returns:
    ///
    /// ` flag of qtextformat_enums.PageBreakFlag `
    ///
    pub fn PageBreakPolicy(self: QTextBlockFormat) i32 {
        return qtc.QTextBlockFormat_PageBreakPolicy(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#setTabPositions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` tabs: []QTextOption__Tab `
    ///
    pub fn SetTabPositions(self: QTextBlockFormat, tabs: []QTextOption__Tab) void {
        const tabs_list = qtc.libqt_list{
            .len = tabs.len,
            .data = @ptrCast(tabs.ptr),
        };
        qtc.QTextBlockFormat_SetTabPositions(@ptrCast(self.ptr), tabs_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#tabPositions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TabPositions(self: QTextBlockFormat, allocator: std.mem.Allocator) []QTextOption__Tab {
        const _arr: qtc.libqt_list = qtc.QTextBlockFormat_TabPositions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextOption__Tab, _arr.len) catch @panic("qtextblockformat.TabPositions: Memory allocation failed");
        const _data: [*]QtC.QTextOption__Tab = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#setMarker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` marker: qtextformat_enums.MarkerType `
    ///
    pub fn SetMarker(self: QTextBlockFormat, marker: i32) void {
        qtc.QTextBlockFormat_SetMarker(@ptrCast(self.ptr), @bitCast(marker));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#marker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.MarkerType `
    ///
    pub fn Marker(self: QTextBlockFormat) i32 {
        return qtc.QTextBlockFormat_Marker(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn OperatorAssign(self: QTextBlockFormat, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        qtc.QTextFormat_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` other: QTextFormat `
    ///
    pub fn Swap(self: QTextBlockFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#merge)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` other: QTextFormat `
    ///
    pub fn Merge(self: QTextBlockFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Merge(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn IsEmpty(self: QTextBlockFormat) bool {
        return qtc.QTextFormat_IsEmpty(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn Type(self: QTextBlockFormat) i32 {
        return qtc.QTextFormat_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn ObjectIndex(self: QTextBlockFormat) i32 {
        return qtc.QTextFormat_ObjectIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` object: i32 `
    ///
    pub fn SetObjectIndex(self: QTextBlockFormat, object: i32) void {
        qtc.QTextFormat_SetObjectIndex(@ptrCast(self.ptr), @bitCast(object));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn Property(self: QTextBlockFormat, propertyId: i32) QVariant {
        return .{ .ptr = qtc.QTextFormat_Property(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QTextBlockFormat, propertyId: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QTextFormat_SetProperty(@ptrCast(self.ptr), @bitCast(propertyId), @ptrCast(value.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn ClearProperty(self: QTextBlockFormat, propertyId: i32) void {
        qtc.QTextFormat_ClearProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn HasProperty(self: QTextBlockFormat, propertyId: i32) bool {
        return qtc.QTextFormat_HasProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn BoolProperty(self: QTextBlockFormat, propertyId: i32) bool {
        return qtc.QTextFormat_BoolProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn IntProperty(self: QTextBlockFormat, propertyId: i32) i32 {
        return qtc.QTextFormat_IntProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn DoubleProperty(self: QTextBlockFormat, propertyId: i32) f64 {
        return qtc.QTextFormat_DoubleProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn StringProperty(self: QTextBlockFormat, allocator: std.mem.Allocator, propertyId: i32) []const u8 {
        var _str = qtc.QTextFormat_StringProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextblockformat.StringProperty: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn ColorProperty(self: QTextBlockFormat, propertyId: i32) QColor {
        return .{ .ptr = qtc.QTextFormat_ColorProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn PenProperty(self: QTextBlockFormat, propertyId: i32) QPen {
        return .{ .ptr = qtc.QTextFormat_PenProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn BrushProperty(self: QTextBlockFormat, propertyId: i32) QBrush {
        return .{ .ptr = qtc.QTextFormat_BrushProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn LengthProperty(self: QTextBlockFormat, propertyId: i32) QTextLength {
        return .{ .ptr = qtc.QTextFormat_LengthProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn LengthVectorProperty(self: QTextBlockFormat, allocator: std.mem.Allocator, propertyId: i32) []QTextLength {
        const _arr: qtc.libqt_list = qtc.QTextFormat_LengthVectorProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextLength, _arr.len) catch @panic("qtextblockformat.LengthVectorProperty: Memory allocation failed");
        const _data: [*]QtC.QTextLength = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` lengths: []QTextLength `
    ///
    pub fn SetProperty2(self: QTextBlockFormat, propertyId: i32, lengths: []QTextLength) void {
        const lengths_list = qtc.libqt_list{
            .len = lengths.len,
            .data = @ptrCast(lengths.ptr),
        };
        qtc.QTextFormat_SetProperty2(@ptrCast(self.ptr), @bitCast(propertyId), lengths_list);
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#properties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Properties(self: QTextBlockFormat, allocator: std.mem.Allocator) ArrayMap_i32_QVariant {
        const _map: qtc.libqt_map = qtc.QTextFormat_Properties(@ptrCast(self.ptr));
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
            _ret.put(allocator, _key, .{ .ptr = @ptrCast(_value) }) catch @panic("qtextblockformat.Properties: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn PropertyCount(self: QTextBlockFormat) i32 {
        return qtc.QTextFormat_PropertyCount(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn SetObjectType(self: QTextBlockFormat, typeVal: i32) void {
        qtc.QTextFormat_SetObjectType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn ObjectType(self: QTextBlockFormat) i32 {
        return qtc.QTextFormat_ObjectType(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn IsCharFormat(self: QTextBlockFormat) bool {
        return qtc.QTextFormat_IsCharFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn IsBlockFormat(self: QTextBlockFormat) bool {
        return qtc.QTextFormat_IsBlockFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn IsListFormat(self: QTextBlockFormat) bool {
        return qtc.QTextFormat_IsListFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn IsFrameFormat(self: QTextBlockFormat) bool {
        return qtc.QTextFormat_IsFrameFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn IsImageFormat(self: QTextBlockFormat) bool {
        return qtc.QTextFormat_IsImageFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn IsTableFormat(self: QTextBlockFormat) bool {
        return qtc.QTextFormat_IsTableFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn IsTableCellFormat(self: QTextBlockFormat) bool {
        return qtc.QTextFormat_IsTableCellFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn ToBlockFormat(self: QTextBlockFormat) QTextBlockFormat {
        return .{ .ptr = qtc.QTextFormat_ToBlockFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn ToCharFormat(self: QTextBlockFormat) QTextCharFormat {
        return .{ .ptr = qtc.QTextFormat_ToCharFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn ToListFormat(self: QTextBlockFormat) QTextListFormat {
        return .{ .ptr = qtc.QTextFormat_ToListFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn ToTableFormat(self: QTextBlockFormat) QTextTableFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn ToFrameFormat(self: QTextBlockFormat) QTextFrameFormat {
        return .{ .ptr = qtc.QTextFormat_ToFrameFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn ToImageFormat(self: QTextBlockFormat) QTextImageFormat {
        return .{ .ptr = qtc.QTextFormat_ToImageFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn ToTableCellFormat(self: QTextBlockFormat) QTextTableCellFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableCellFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn OperatorEqual(self: QTextBlockFormat, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn OperatorNotEqual(self: QTextBlockFormat, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn ToQVariant(self: QTextBlockFormat) QVariant {
        return .{ .ptr = qtc.QTextFormat_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: QTextBlockFormat, direction: i32) void {
        qtc.QTextFormat_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: QTextBlockFormat) i32 {
        return qtc.QTextFormat_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetBackground(self: QTextBlockFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetBackground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn Background(self: QTextBlockFormat) QBrush {
        return .{ .ptr = qtc.QTextFormat_Background(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn ClearBackground(self: QTextBlockFormat) void {
        qtc.QTextFormat_ClearBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetForeground(self: QTextBlockFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetForeground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#foreground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn Foreground(self: QTextBlockFormat) QBrush {
        return .{ .ptr = qtc.QTextFormat_Foreground(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn ClearForeground(self: QTextBlockFormat) void {
        qtc.QTextFormat_ClearForeground(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#dtor.QTextBlockFormat)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn Delete(self: QTextBlockFormat) void {
        qtc.QTextBlockFormat_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlistformat.html)
pub const QTextListFormat = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlistformat.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextListFormat,

    pub const _is_QTextListFormat = {};
    pub const _is_QTextFormat = {};

    /// New constructs a new QTextListFormat object.
    ///
    pub fn New() QTextListFormat {
        return .{ .ptr = qtc.QTextListFormat_new() };
    }

    /// New2 constructs a new QTextListFormat object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTextListFormat `
    ///
    pub fn New2(param1: anytype) QTextListFormat {
        comptime _ = @TypeOf(param1)._is_QTextListFormat;
        return .{ .ptr = qtc.QTextListFormat_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlistformat.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn IsValid(self: QTextListFormat) bool {
        return qtc.QTextListFormat_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlistformat.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` style: qtextformat_enums.Style `
    ///
    pub fn SetStyle(self: QTextListFormat, style: i32) void {
        qtc.QTextListFormat_SetStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlistformat.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.Style `
    ///
    pub fn Style(self: QTextListFormat) i32 {
        return qtc.QTextListFormat_Style(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlistformat.html#setIndent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` indent: i32 `
    ///
    pub fn SetIndent(self: QTextListFormat, indent: i32) void {
        qtc.QTextListFormat_SetIndent(@ptrCast(self.ptr), @bitCast(indent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlistformat.html#indent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn Indent(self: QTextListFormat) i32 {
        return qtc.QTextListFormat_Indent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlistformat.html#setNumberPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` numberPrefix: []const u8 `
    ///
    pub fn SetNumberPrefix(self: QTextListFormat, numberPrefix: []const u8) void {
        const numberPrefix_str = qtc.libqt_string{
            .len = numberPrefix.len,
            .data = numberPrefix.ptr,
        };
        qtc.QTextListFormat_SetNumberPrefix(@ptrCast(self.ptr), numberPrefix_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlistformat.html#numberPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NumberPrefix(self: QTextListFormat, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextListFormat_NumberPrefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextlistformat.NumberPrefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlistformat.html#setNumberSuffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` numberSuffix: []const u8 `
    ///
    pub fn SetNumberSuffix(self: QTextListFormat, numberSuffix: []const u8) void {
        const numberSuffix_str = qtc.libqt_string{
            .len = numberSuffix.len,
            .data = numberSuffix.ptr,
        };
        qtc.QTextListFormat_SetNumberSuffix(@ptrCast(self.ptr), numberSuffix_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlistformat.html#numberSuffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NumberSuffix(self: QTextListFormat, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextListFormat_NumberSuffix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextlistformat.NumberSuffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlistformat.html#setStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` indent: i32 `
    ///
    pub fn SetStart(self: QTextListFormat, indent: i32) void {
        qtc.QTextListFormat_SetStart(@ptrCast(self.ptr), @bitCast(indent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlistformat.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn Start(self: QTextListFormat) i32 {
        return qtc.QTextListFormat_Start(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn OperatorAssign(self: QTextListFormat, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        qtc.QTextFormat_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` other: QTextFormat `
    ///
    pub fn Swap(self: QTextListFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#merge)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` other: QTextFormat `
    ///
    pub fn Merge(self: QTextListFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Merge(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn IsEmpty(self: QTextListFormat) bool {
        return qtc.QTextFormat_IsEmpty(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn Type(self: QTextListFormat) i32 {
        return qtc.QTextFormat_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn ObjectIndex(self: QTextListFormat) i32 {
        return qtc.QTextFormat_ObjectIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` object: i32 `
    ///
    pub fn SetObjectIndex(self: QTextListFormat, object: i32) void {
        qtc.QTextFormat_SetObjectIndex(@ptrCast(self.ptr), @bitCast(object));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn Property(self: QTextListFormat, propertyId: i32) QVariant {
        return .{ .ptr = qtc.QTextFormat_Property(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QTextListFormat, propertyId: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QTextFormat_SetProperty(@ptrCast(self.ptr), @bitCast(propertyId), @ptrCast(value.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn ClearProperty(self: QTextListFormat, propertyId: i32) void {
        qtc.QTextFormat_ClearProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn HasProperty(self: QTextListFormat, propertyId: i32) bool {
        return qtc.QTextFormat_HasProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn BoolProperty(self: QTextListFormat, propertyId: i32) bool {
        return qtc.QTextFormat_BoolProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn IntProperty(self: QTextListFormat, propertyId: i32) i32 {
        return qtc.QTextFormat_IntProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn DoubleProperty(self: QTextListFormat, propertyId: i32) f64 {
        return qtc.QTextFormat_DoubleProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn StringProperty(self: QTextListFormat, allocator: std.mem.Allocator, propertyId: i32) []const u8 {
        var _str = qtc.QTextFormat_StringProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextlistformat.StringProperty: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn ColorProperty(self: QTextListFormat, propertyId: i32) QColor {
        return .{ .ptr = qtc.QTextFormat_ColorProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn PenProperty(self: QTextListFormat, propertyId: i32) QPen {
        return .{ .ptr = qtc.QTextFormat_PenProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn BrushProperty(self: QTextListFormat, propertyId: i32) QBrush {
        return .{ .ptr = qtc.QTextFormat_BrushProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn LengthProperty(self: QTextListFormat, propertyId: i32) QTextLength {
        return .{ .ptr = qtc.QTextFormat_LengthProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn LengthVectorProperty(self: QTextListFormat, allocator: std.mem.Allocator, propertyId: i32) []QTextLength {
        const _arr: qtc.libqt_list = qtc.QTextFormat_LengthVectorProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextLength, _arr.len) catch @panic("qtextlistformat.LengthVectorProperty: Memory allocation failed");
        const _data: [*]QtC.QTextLength = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` lengths: []QTextLength `
    ///
    pub fn SetProperty2(self: QTextListFormat, propertyId: i32, lengths: []QTextLength) void {
        const lengths_list = qtc.libqt_list{
            .len = lengths.len,
            .data = @ptrCast(lengths.ptr),
        };
        qtc.QTextFormat_SetProperty2(@ptrCast(self.ptr), @bitCast(propertyId), lengths_list);
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#properties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Properties(self: QTextListFormat, allocator: std.mem.Allocator) ArrayMap_i32_QVariant {
        const _map: qtc.libqt_map = qtc.QTextFormat_Properties(@ptrCast(self.ptr));
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
            _ret.put(allocator, _key, .{ .ptr = @ptrCast(_value) }) catch @panic("qtextlistformat.Properties: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn PropertyCount(self: QTextListFormat) i32 {
        return qtc.QTextFormat_PropertyCount(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn SetObjectType(self: QTextListFormat, typeVal: i32) void {
        qtc.QTextFormat_SetObjectType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn ObjectType(self: QTextListFormat) i32 {
        return qtc.QTextFormat_ObjectType(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn IsCharFormat(self: QTextListFormat) bool {
        return qtc.QTextFormat_IsCharFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn IsBlockFormat(self: QTextListFormat) bool {
        return qtc.QTextFormat_IsBlockFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn IsListFormat(self: QTextListFormat) bool {
        return qtc.QTextFormat_IsListFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn IsFrameFormat(self: QTextListFormat) bool {
        return qtc.QTextFormat_IsFrameFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn IsImageFormat(self: QTextListFormat) bool {
        return qtc.QTextFormat_IsImageFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn IsTableFormat(self: QTextListFormat) bool {
        return qtc.QTextFormat_IsTableFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn IsTableCellFormat(self: QTextListFormat) bool {
        return qtc.QTextFormat_IsTableCellFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn ToBlockFormat(self: QTextListFormat) QTextBlockFormat {
        return .{ .ptr = qtc.QTextFormat_ToBlockFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn ToCharFormat(self: QTextListFormat) QTextCharFormat {
        return .{ .ptr = qtc.QTextFormat_ToCharFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn ToListFormat(self: QTextListFormat) QTextListFormat {
        return .{ .ptr = qtc.QTextFormat_ToListFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn ToTableFormat(self: QTextListFormat) QTextTableFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn ToFrameFormat(self: QTextListFormat) QTextFrameFormat {
        return .{ .ptr = qtc.QTextFormat_ToFrameFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn ToImageFormat(self: QTextListFormat) QTextImageFormat {
        return .{ .ptr = qtc.QTextFormat_ToImageFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn ToTableCellFormat(self: QTextListFormat) QTextTableCellFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableCellFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn OperatorEqual(self: QTextListFormat, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn OperatorNotEqual(self: QTextListFormat, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn ToQVariant(self: QTextListFormat) QVariant {
        return .{ .ptr = qtc.QTextFormat_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: QTextListFormat, direction: i32) void {
        qtc.QTextFormat_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: QTextListFormat) i32 {
        return qtc.QTextFormat_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetBackground(self: QTextListFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetBackground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn Background(self: QTextListFormat) QBrush {
        return .{ .ptr = qtc.QTextFormat_Background(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn ClearBackground(self: QTextListFormat) void {
        qtc.QTextFormat_ClearBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetForeground(self: QTextListFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetForeground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#foreground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn Foreground(self: QTextListFormat) QBrush {
        return .{ .ptr = qtc.QTextFormat_Foreground(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn ClearForeground(self: QTextListFormat) void {
        qtc.QTextFormat_ClearForeground(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlistformat.html#dtor.QTextListFormat)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn Delete(self: QTextListFormat) void {
        qtc.QTextListFormat_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextimageformat.html)
pub const QTextImageFormat = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextimageformat.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextImageFormat,

    pub const _is_QTextImageFormat = {};
    pub const _is_QTextCharFormat = {};
    pub const _is_QTextFormat = {};

    /// New constructs a new QTextImageFormat object.
    ///
    pub fn New() QTextImageFormat {
        return .{ .ptr = qtc.QTextImageFormat_new() };
    }

    /// New2 constructs a new QTextImageFormat object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTextImageFormat `
    ///
    pub fn New2(param1: anytype) QTextImageFormat {
        comptime _ = @TypeOf(param1)._is_QTextImageFormat;
        return .{ .ptr = qtc.QTextImageFormat_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextimageformat.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn IsValid(self: QTextImageFormat) bool {
        return qtc.QTextImageFormat_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextimageformat.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: QTextImageFormat, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QTextImageFormat_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextimageformat.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QTextImageFormat, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextImageFormat_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextimageformat.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextimageformat.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` width: f64 `
    ///
    pub fn SetWidth(self: QTextImageFormat, width: f64) void {
        qtc.QTextImageFormat_SetWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextimageformat.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn Width(self: QTextImageFormat) f64 {
        return qtc.QTextImageFormat_Width(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextimageformat.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` maxWidth: QTextLength `
    ///
    pub fn SetMaximumWidth(self: QTextImageFormat, maxWidth: anytype) void {
        comptime _ = @TypeOf(maxWidth)._is_QTextLength;
        qtc.QTextImageFormat_SetMaximumWidth(@ptrCast(self.ptr), @ptrCast(maxWidth.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextimageformat.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn MaximumWidth(self: QTextImageFormat) QTextLength {
        return .{ .ptr = qtc.QTextImageFormat_MaximumWidth(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextimageformat.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` height: f64 `
    ///
    pub fn SetHeight(self: QTextImageFormat, height: f64) void {
        qtc.QTextImageFormat_SetHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextimageformat.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn Height(self: QTextImageFormat) f64 {
        return qtc.QTextImageFormat_Height(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextimageformat.html#setQuality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` quality: i32 `
    ///
    pub fn SetQuality(self: QTextImageFormat, quality: i32) void {
        qtc.QTextImageFormat_SetQuality(@ptrCast(self.ptr), @bitCast(quality));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextimageformat.html#setQuality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn SetQuality2(self: QTextImageFormat) void {
        qtc.QTextImageFormat_SetQuality2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextimageformat.html#quality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn Quality(self: QTextImageFormat) i32 {
        return qtc.QTextImageFormat_Quality(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: QTextImageFormat, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QTextCharFormat_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn Font(self: QTextImageFormat) QFont {
        return .{ .ptr = qtc.QTextCharFormat_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` family: []const u8 `
    ///
    pub fn SetFontFamily(self: QTextImageFormat, family: []const u8) void {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        qtc.QTextCharFormat_SetFontFamily(@ptrCast(self.ptr), family_str);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FontFamily(self: QTextImageFormat, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextCharFormat_FontFamily(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextimageformat.FontFamily: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamilies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` families: []const []const u8 `
    ///
    pub fn SetFontFamilies(self: QTextImageFormat, allocator: std.mem.Allocator, families: []const []const u8) void {
        const families_arr = allocator.alloc(qtc.libqt_string, families.len) catch @panic("qtextimageformat.SetFontFamilies: Memory allocation failed");
        defer allocator.free(families_arr);
        for (families, 0..families.len) |item, i|
            families_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const families_list = qtc.libqt_list{
            .len = families.len,
            .data = families_arr.ptr,
        };
        qtc.QTextCharFormat_SetFontFamilies(@ptrCast(self.ptr), families_list);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamilies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn FontFamilies(self: QTextImageFormat) QVariant {
        return .{ .ptr = qtc.QTextCharFormat_FontFamilies(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` styleName: []const u8 `
    ///
    pub fn SetFontStyleName(self: QTextImageFormat, styleName: []const u8) void {
        const styleName_str = qtc.libqt_string{
            .len = styleName.len,
            .data = styleName.ptr,
        };
        qtc.QTextCharFormat_SetFontStyleName(@ptrCast(self.ptr), styleName_str);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn FontStyleName(self: QTextImageFormat) QVariant {
        return .{ .ptr = qtc.QTextCharFormat_FontStyleName(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` size: f64 `
    ///
    pub fn SetFontPointSize(self: QTextImageFormat, size: f64) void {
        qtc.QTextCharFormat_SetFontPointSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn FontPointSize(self: QTextImageFormat) f64 {
        return qtc.QTextCharFormat_FontPointSize(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` weight: i32 `
    ///
    pub fn SetFontWeight(self: QTextImageFormat, weight: i32) void {
        qtc.QTextCharFormat_SetFontWeight(@ptrCast(self.ptr), @bitCast(weight));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn FontWeight(self: QTextImageFormat) i32 {
        return qtc.QTextCharFormat_FontWeight(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontItalic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` italic: bool `
    ///
    pub fn SetFontItalic(self: QTextImageFormat, italic: bool) void {
        qtc.QTextCharFormat_SetFontItalic(@ptrCast(self.ptr), italic);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontItalic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn FontItalic(self: QTextImageFormat) bool {
        return qtc.QTextCharFormat_FontItalic(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontCapitalization)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` capitalization: qfont_enums.Capitalization `
    ///
    pub fn SetFontCapitalization(self: QTextImageFormat, capitalization: i32) void {
        qtc.QTextCharFormat_SetFontCapitalization(@ptrCast(self.ptr), @bitCast(capitalization));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontCapitalization)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.Capitalization `
    ///
    pub fn FontCapitalization(self: QTextImageFormat) i32 {
        return qtc.QTextCharFormat_FontCapitalization(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacingType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` letterSpacingType: qfont_enums.SpacingType `
    ///
    pub fn SetFontLetterSpacingType(self: QTextImageFormat, letterSpacingType: i32) void {
        qtc.QTextCharFormat_SetFontLetterSpacingType(@ptrCast(self.ptr), @bitCast(letterSpacingType));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacingType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.SpacingType `
    ///
    pub fn FontLetterSpacingType(self: QTextImageFormat) i32 {
        return qtc.QTextCharFormat_FontLetterSpacingType(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` spacing: f64 `
    ///
    pub fn SetFontLetterSpacing(self: QTextImageFormat, spacing: f64) void {
        qtc.QTextCharFormat_SetFontLetterSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn FontLetterSpacing(self: QTextImageFormat) f64 {
        return qtc.QTextCharFormat_FontLetterSpacing(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWordSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` spacing: f64 `
    ///
    pub fn SetFontWordSpacing(self: QTextImageFormat, spacing: f64) void {
        qtc.QTextCharFormat_SetFontWordSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontWordSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn FontWordSpacing(self: QTextImageFormat) f64 {
        return qtc.QTextCharFormat_FontWordSpacing(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontUnderline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` underline: bool `
    ///
    pub fn SetFontUnderline(self: QTextImageFormat, underline: bool) void {
        qtc.QTextCharFormat_SetFontUnderline(@ptrCast(self.ptr), underline);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontUnderline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn FontUnderline(self: QTextImageFormat) bool {
        return qtc.QTextCharFormat_FontUnderline(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontOverline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` overline: bool `
    ///
    pub fn SetFontOverline(self: QTextImageFormat, overline: bool) void {
        qtc.QTextCharFormat_SetFontOverline(@ptrCast(self.ptr), overline);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontOverline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn FontOverline(self: QTextImageFormat) bool {
        return qtc.QTextCharFormat_FontOverline(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStrikeOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` strikeOut: bool `
    ///
    pub fn SetFontStrikeOut(self: QTextImageFormat, strikeOut: bool) void {
        qtc.QTextCharFormat_SetFontStrikeOut(@ptrCast(self.ptr), strikeOut);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStrikeOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn FontStrikeOut(self: QTextImageFormat) bool {
        return qtc.QTextCharFormat_FontStrikeOut(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` color: QColor `
    ///
    pub fn SetUnderlineColor(self: QTextImageFormat, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QTextCharFormat_SetUnderlineColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#underlineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn UnderlineColor(self: QTextImageFormat) QColor {
        return .{ .ptr = qtc.QTextCharFormat_UnderlineColor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFixedPitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` fixedPitch: bool `
    ///
    pub fn SetFontFixedPitch(self: QTextImageFormat, fixedPitch: bool) void {
        qtc.QTextCharFormat_SetFontFixedPitch(@ptrCast(self.ptr), fixedPitch);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontFixedPitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn FontFixedPitch(self: QTextImageFormat) bool {
        return qtc.QTextCharFormat_FontFixedPitch(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` factor: i32 `
    ///
    pub fn SetFontStretch(self: QTextImageFormat, factor: i32) void {
        qtc.QTextCharFormat_SetFontStretch(@ptrCast(self.ptr), @bitCast(factor));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn FontStretch(self: QTextImageFormat) i32 {
        return qtc.QTextCharFormat_FontStretch(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` hint: qfont_enums.StyleHint `
    ///
    pub fn SetFontStyleHint(self: QTextImageFormat, hint: i32) void {
        qtc.QTextCharFormat_SetFontStyleHint(@ptrCast(self.ptr), @bitCast(hint));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleStrategy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` strategy: qfont_enums.StyleStrategy `
    ///
    pub fn SetFontStyleStrategy(self: QTextImageFormat, strategy: i32) void {
        qtc.QTextCharFormat_SetFontStyleStrategy(@ptrCast(self.ptr), @bitCast(strategy));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.StyleHint `
    ///
    pub fn FontStyleHint(self: QTextImageFormat) i32 {
        return qtc.QTextCharFormat_FontStyleHint(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleStrategy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.StyleStrategy `
    ///
    pub fn FontStyleStrategy(self: QTextImageFormat) i32 {
        return qtc.QTextCharFormat_FontStyleStrategy(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontHintingPreference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` hintingPreference: qfont_enums.HintingPreference `
    ///
    pub fn SetFontHintingPreference(self: QTextImageFormat, hintingPreference: i32) void {
        qtc.QTextCharFormat_SetFontHintingPreference(@ptrCast(self.ptr), @bitCast(hintingPreference));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontHintingPreference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.HintingPreference `
    ///
    pub fn FontHintingPreference(self: QTextImageFormat) i32 {
        return qtc.QTextCharFormat_FontHintingPreference(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontKerning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` enable: bool `
    ///
    pub fn SetFontKerning(self: QTextImageFormat, enable: bool) void {
        qtc.QTextCharFormat_SetFontKerning(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontKerning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn FontKerning(self: QTextImageFormat) bool {
        return qtc.QTextCharFormat_FontKerning(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` style: qtextformat_enums.UnderlineStyle `
    ///
    pub fn SetUnderlineStyle(self: QTextImageFormat, style: i32) void {
        qtc.QTextCharFormat_SetUnderlineStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#underlineStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.UnderlineStyle `
    ///
    pub fn UnderlineStyle(self: QTextImageFormat) i32 {
        return qtc.QTextCharFormat_UnderlineStyle(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setVerticalAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` alignment: qtextformat_enums.VerticalAlignment `
    ///
    pub fn SetVerticalAlignment(self: QTextImageFormat, alignment: i32) void {
        qtc.QTextCharFormat_SetVerticalAlignment(@ptrCast(self.ptr), @bitCast(alignment));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#verticalAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.VerticalAlignment `
    ///
    pub fn VerticalAlignment(self: QTextImageFormat) i32 {
        return qtc.QTextCharFormat_VerticalAlignment(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setTextOutline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` pen: QPen `
    ///
    pub fn SetTextOutline(self: QTextImageFormat, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QTextCharFormat_SetTextOutline(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#textOutline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn TextOutline(self: QTextImageFormat) QPen {
        return .{ .ptr = qtc.QTextCharFormat_TextOutline(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` tip: []const u8 `
    ///
    pub fn SetToolTip(self: QTextImageFormat, tip: []const u8) void {
        const tip_str = qtc.libqt_string{
            .len = tip.len,
            .data = tip.ptr,
        };
        qtc.QTextCharFormat_SetToolTip(@ptrCast(self.ptr), tip_str);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: QTextImageFormat, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextCharFormat_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextimageformat.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setSuperScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` baseline: f64 `
    ///
    pub fn SetSuperScriptBaseline(self: QTextImageFormat, baseline: f64) void {
        qtc.QTextCharFormat_SetSuperScriptBaseline(@ptrCast(self.ptr), @bitCast(baseline));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#superScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn SuperScriptBaseline(self: QTextImageFormat) f64 {
        return qtc.QTextCharFormat_SuperScriptBaseline(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setSubScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` baseline: f64 `
    ///
    pub fn SetSubScriptBaseline(self: QTextImageFormat, baseline: f64) void {
        qtc.QTextCharFormat_SetSubScriptBaseline(@ptrCast(self.ptr), @bitCast(baseline));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#subScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn SubScriptBaseline(self: QTextImageFormat) f64 {
        return qtc.QTextCharFormat_SubScriptBaseline(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setBaselineOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` baseline: f64 `
    ///
    pub fn SetBaselineOffset(self: QTextImageFormat, baseline: f64) void {
        qtc.QTextCharFormat_SetBaselineOffset(@ptrCast(self.ptr), @bitCast(baseline));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#baselineOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn BaselineOffset(self: QTextImageFormat) f64 {
        return qtc.QTextCharFormat_BaselineOffset(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` anchor: bool `
    ///
    pub fn SetAnchor(self: QTextImageFormat, anchor: bool) void {
        qtc.QTextCharFormat_SetAnchor(@ptrCast(self.ptr), anchor);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#isAnchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn IsAnchor(self: QTextImageFormat) bool {
        return qtc.QTextCharFormat_IsAnchor(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorHref)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetAnchorHref(self: QTextImageFormat, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QTextCharFormat_SetAnchorHref(@ptrCast(self.ptr), value_str);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#anchorHref)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AnchorHref(self: QTextImageFormat, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextCharFormat_AnchorHref(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextimageformat.AnchorHref: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` names: []const []const u8 `
    ///
    pub fn SetAnchorNames(self: QTextImageFormat, allocator: std.mem.Allocator, names: []const []const u8) void {
        const names_arr = allocator.alloc(qtc.libqt_string, names.len) catch @panic("qtextimageformat.SetAnchorNames: Memory allocation failed");
        defer allocator.free(names_arr);
        for (names, 0..names.len) |item, i|
            names_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const names_list = qtc.libqt_list{
            .len = names.len,
            .data = names_arr.ptr,
        };
        qtc.QTextCharFormat_SetAnchorNames(@ptrCast(self.ptr), names_list);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#anchorNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AnchorNames(self: QTextImageFormat, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QTextCharFormat_AnchorNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellRowSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` tableCellRowSpan: i32 `
    ///
    pub fn SetTableCellRowSpan(self: QTextImageFormat, tableCellRowSpan: i32) void {
        qtc.QTextCharFormat_SetTableCellRowSpan(@ptrCast(self.ptr), @bitCast(tableCellRowSpan));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellRowSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn TableCellRowSpan(self: QTextImageFormat) i32 {
        return qtc.QTextCharFormat_TableCellRowSpan(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellColumnSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` tableCellColumnSpan: i32 `
    ///
    pub fn SetTableCellColumnSpan(self: QTextImageFormat, tableCellColumnSpan: i32) void {
        qtc.QTextCharFormat_SetTableCellColumnSpan(@ptrCast(self.ptr), @bitCast(tableCellColumnSpan));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellColumnSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn TableCellColumnSpan(self: QTextImageFormat) i32 {
        return qtc.QTextCharFormat_TableCellColumnSpan(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` font: QFont `
    ///
    /// ` behavior: qtextformat_enums.FontPropertiesInheritanceBehavior `
    ///
    pub fn SetFont2(self: QTextImageFormat, font: anytype, behavior: i32) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QTextCharFormat_SetFont2(@ptrCast(self.ptr), @ptrCast(font.ptr), @bitCast(behavior));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` hint: qfont_enums.StyleHint `
    ///
    /// ` strategy: qfont_enums.StyleStrategy `
    ///
    pub fn SetFontStyleHint2(self: QTextImageFormat, hint: i32, strategy: i32) void {
        qtc.QTextCharFormat_SetFontStyleHint2(@ptrCast(self.ptr), @bitCast(hint), @bitCast(strategy));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn OperatorAssign(self: QTextImageFormat, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        qtc.QTextFormat_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` other: QTextFormat `
    ///
    pub fn Swap(self: QTextImageFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#merge)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` other: QTextFormat `
    ///
    pub fn Merge(self: QTextImageFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Merge(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn IsEmpty(self: QTextImageFormat) bool {
        return qtc.QTextFormat_IsEmpty(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn Type(self: QTextImageFormat) i32 {
        return qtc.QTextFormat_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn ObjectIndex(self: QTextImageFormat) i32 {
        return qtc.QTextFormat_ObjectIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` object: i32 `
    ///
    pub fn SetObjectIndex(self: QTextImageFormat, object: i32) void {
        qtc.QTextFormat_SetObjectIndex(@ptrCast(self.ptr), @bitCast(object));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn Property(self: QTextImageFormat, propertyId: i32) QVariant {
        return .{ .ptr = qtc.QTextFormat_Property(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QTextImageFormat, propertyId: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QTextFormat_SetProperty(@ptrCast(self.ptr), @bitCast(propertyId), @ptrCast(value.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn ClearProperty(self: QTextImageFormat, propertyId: i32) void {
        qtc.QTextFormat_ClearProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn HasProperty(self: QTextImageFormat, propertyId: i32) bool {
        return qtc.QTextFormat_HasProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn BoolProperty(self: QTextImageFormat, propertyId: i32) bool {
        return qtc.QTextFormat_BoolProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn IntProperty(self: QTextImageFormat, propertyId: i32) i32 {
        return qtc.QTextFormat_IntProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn DoubleProperty(self: QTextImageFormat, propertyId: i32) f64 {
        return qtc.QTextFormat_DoubleProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn StringProperty(self: QTextImageFormat, allocator: std.mem.Allocator, propertyId: i32) []const u8 {
        var _str = qtc.QTextFormat_StringProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextimageformat.StringProperty: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn ColorProperty(self: QTextImageFormat, propertyId: i32) QColor {
        return .{ .ptr = qtc.QTextFormat_ColorProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn PenProperty(self: QTextImageFormat, propertyId: i32) QPen {
        return .{ .ptr = qtc.QTextFormat_PenProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn BrushProperty(self: QTextImageFormat, propertyId: i32) QBrush {
        return .{ .ptr = qtc.QTextFormat_BrushProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn LengthProperty(self: QTextImageFormat, propertyId: i32) QTextLength {
        return .{ .ptr = qtc.QTextFormat_LengthProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn LengthVectorProperty(self: QTextImageFormat, allocator: std.mem.Allocator, propertyId: i32) []QTextLength {
        const _arr: qtc.libqt_list = qtc.QTextFormat_LengthVectorProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextLength, _arr.len) catch @panic("qtextimageformat.LengthVectorProperty: Memory allocation failed");
        const _data: [*]QtC.QTextLength = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` lengths: []QTextLength `
    ///
    pub fn SetProperty2(self: QTextImageFormat, propertyId: i32, lengths: []QTextLength) void {
        const lengths_list = qtc.libqt_list{
            .len = lengths.len,
            .data = @ptrCast(lengths.ptr),
        };
        qtc.QTextFormat_SetProperty2(@ptrCast(self.ptr), @bitCast(propertyId), lengths_list);
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#properties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Properties(self: QTextImageFormat, allocator: std.mem.Allocator) ArrayMap_i32_QVariant {
        const _map: qtc.libqt_map = qtc.QTextFormat_Properties(@ptrCast(self.ptr));
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
            _ret.put(allocator, _key, .{ .ptr = @ptrCast(_value) }) catch @panic("qtextimageformat.Properties: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn PropertyCount(self: QTextImageFormat) i32 {
        return qtc.QTextFormat_PropertyCount(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn SetObjectType(self: QTextImageFormat, typeVal: i32) void {
        qtc.QTextFormat_SetObjectType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn ObjectType(self: QTextImageFormat) i32 {
        return qtc.QTextFormat_ObjectType(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn IsCharFormat(self: QTextImageFormat) bool {
        return qtc.QTextFormat_IsCharFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn IsBlockFormat(self: QTextImageFormat) bool {
        return qtc.QTextFormat_IsBlockFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn IsListFormat(self: QTextImageFormat) bool {
        return qtc.QTextFormat_IsListFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn IsFrameFormat(self: QTextImageFormat) bool {
        return qtc.QTextFormat_IsFrameFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn IsImageFormat(self: QTextImageFormat) bool {
        return qtc.QTextFormat_IsImageFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn IsTableFormat(self: QTextImageFormat) bool {
        return qtc.QTextFormat_IsTableFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn IsTableCellFormat(self: QTextImageFormat) bool {
        return qtc.QTextFormat_IsTableCellFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn ToBlockFormat(self: QTextImageFormat) QTextBlockFormat {
        return .{ .ptr = qtc.QTextFormat_ToBlockFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn ToCharFormat(self: QTextImageFormat) QTextCharFormat {
        return .{ .ptr = qtc.QTextFormat_ToCharFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn ToListFormat(self: QTextImageFormat) QTextListFormat {
        return .{ .ptr = qtc.QTextFormat_ToListFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn ToTableFormat(self: QTextImageFormat) QTextTableFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn ToFrameFormat(self: QTextImageFormat) QTextFrameFormat {
        return .{ .ptr = qtc.QTextFormat_ToFrameFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn ToImageFormat(self: QTextImageFormat) QTextImageFormat {
        return .{ .ptr = qtc.QTextFormat_ToImageFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn ToTableCellFormat(self: QTextImageFormat) QTextTableCellFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableCellFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn OperatorEqual(self: QTextImageFormat, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn OperatorNotEqual(self: QTextImageFormat, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn ToQVariant(self: QTextImageFormat) QVariant {
        return .{ .ptr = qtc.QTextFormat_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: QTextImageFormat, direction: i32) void {
        qtc.QTextFormat_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: QTextImageFormat) i32 {
        return qtc.QTextFormat_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetBackground(self: QTextImageFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetBackground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn Background(self: QTextImageFormat) QBrush {
        return .{ .ptr = qtc.QTextFormat_Background(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn ClearBackground(self: QTextImageFormat) void {
        qtc.QTextFormat_ClearBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetForeground(self: QTextImageFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetForeground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#foreground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn Foreground(self: QTextImageFormat) QBrush {
        return .{ .ptr = qtc.QTextFormat_Foreground(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn ClearForeground(self: QTextImageFormat) void {
        qtc.QTextFormat_ClearForeground(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextimageformat.html#dtor.QTextImageFormat)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn Delete(self: QTextImageFormat) void {
        qtc.QTextImageFormat_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html)
pub const QTextFrameFormat = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextFrameFormat,

    pub const _is_QTextFrameFormat = {};
    pub const _is_QTextFormat = {};

    /// New constructs a new QTextFrameFormat object.
    ///
    pub fn New() QTextFrameFormat {
        return .{ .ptr = qtc.QTextFrameFormat_new() };
    }

    /// New2 constructs a new QTextFrameFormat object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTextFrameFormat `
    ///
    pub fn New2(param1: anytype) QTextFrameFormat {
        comptime _ = @TypeOf(param1)._is_QTextFrameFormat;
        return .{ .ptr = qtc.QTextFrameFormat_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn IsValid(self: QTextFrameFormat) bool {
        return qtc.QTextFrameFormat_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` f: qtextformat_enums.Position `
    ///
    pub fn SetPosition(self: QTextFrameFormat, f: i32) void {
        qtc.QTextFrameFormat_SetPosition(@ptrCast(self.ptr), @bitCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.Position `
    ///
    pub fn Position(self: QTextFrameFormat) i32 {
        return qtc.QTextFrameFormat_Position(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setBorder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` border: f64 `
    ///
    pub fn SetBorder(self: QTextFrameFormat, border: f64) void {
        qtc.QTextFrameFormat_SetBorder(@ptrCast(self.ptr), @bitCast(border));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#border)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn Border(self: QTextFrameFormat) f64 {
        return qtc.QTextFrameFormat_Border(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setBorderBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetBorderBrush(self: QTextFrameFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFrameFormat_SetBorderBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#borderBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn BorderBrush(self: QTextFrameFormat) QBrush {
        return .{ .ptr = qtc.QTextFrameFormat_BorderBrush(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setBorderStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` style: qtextformat_enums.BorderStyle `
    ///
    pub fn SetBorderStyle(self: QTextFrameFormat, style: i32) void {
        qtc.QTextFrameFormat_SetBorderStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#borderStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.BorderStyle `
    ///
    pub fn BorderStyle(self: QTextFrameFormat) i32 {
        return qtc.QTextFrameFormat_BorderStyle(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` margin: f64 `
    ///
    pub fn SetMargin(self: QTextFrameFormat, margin: f64) void {
        qtc.QTextFrameFormat_SetMargin(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#margin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn Margin(self: QTextFrameFormat) f64 {
        return qtc.QTextFrameFormat_Margin(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setTopMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` margin: f64 `
    ///
    pub fn SetTopMargin(self: QTextFrameFormat, margin: f64) void {
        qtc.QTextFrameFormat_SetTopMargin(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#topMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn TopMargin(self: QTextFrameFormat) f64 {
        return qtc.QTextFrameFormat_TopMargin(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setBottomMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` margin: f64 `
    ///
    pub fn SetBottomMargin(self: QTextFrameFormat, margin: f64) void {
        qtc.QTextFrameFormat_SetBottomMargin(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#bottomMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn BottomMargin(self: QTextFrameFormat) f64 {
        return qtc.QTextFrameFormat_BottomMargin(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setLeftMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` margin: f64 `
    ///
    pub fn SetLeftMargin(self: QTextFrameFormat, margin: f64) void {
        qtc.QTextFrameFormat_SetLeftMargin(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#leftMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn LeftMargin(self: QTextFrameFormat) f64 {
        return qtc.QTextFrameFormat_LeftMargin(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setRightMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` margin: f64 `
    ///
    pub fn SetRightMargin(self: QTextFrameFormat, margin: f64) void {
        qtc.QTextFrameFormat_SetRightMargin(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#rightMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn RightMargin(self: QTextFrameFormat) f64 {
        return qtc.QTextFrameFormat_RightMargin(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setPadding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` padding: f64 `
    ///
    pub fn SetPadding(self: QTextFrameFormat, padding: f64) void {
        qtc.QTextFrameFormat_SetPadding(@ptrCast(self.ptr), @bitCast(padding));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#padding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn Padding(self: QTextFrameFormat) f64 {
        return qtc.QTextFrameFormat_Padding(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` width: f64 `
    ///
    pub fn SetWidth(self: QTextFrameFormat, width: f64) void {
        qtc.QTextFrameFormat_SetWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` length: QTextLength `
    ///
    pub fn SetWidth2(self: QTextFrameFormat, length: anytype) void {
        comptime _ = @TypeOf(length)._is_QTextLength;
        qtc.QTextFrameFormat_SetWidth2(@ptrCast(self.ptr), @ptrCast(length.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn Width(self: QTextFrameFormat) QTextLength {
        return .{ .ptr = qtc.QTextFrameFormat_Width(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` height: f64 `
    ///
    pub fn SetHeight(self: QTextFrameFormat, height: f64) void {
        qtc.QTextFrameFormat_SetHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` height: QTextLength `
    ///
    pub fn SetHeight2(self: QTextFrameFormat, height: anytype) void {
        comptime _ = @TypeOf(height)._is_QTextLength;
        qtc.QTextFrameFormat_SetHeight2(@ptrCast(self.ptr), @ptrCast(height.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn Height(self: QTextFrameFormat) QTextLength {
        return .{ .ptr = qtc.QTextFrameFormat_Height(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setPageBreakPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` flags: flag of qtextformat_enums.PageBreakFlag `
    ///
    pub fn SetPageBreakPolicy(self: QTextFrameFormat, flags: i32) void {
        qtc.QTextFrameFormat_SetPageBreakPolicy(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#pageBreakPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ## Returns:
    ///
    /// ` flag of qtextformat_enums.PageBreakFlag `
    ///
    pub fn PageBreakPolicy(self: QTextFrameFormat) i32 {
        return qtc.QTextFrameFormat_PageBreakPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn OperatorAssign(self: QTextFrameFormat, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        qtc.QTextFormat_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` other: QTextFormat `
    ///
    pub fn Swap(self: QTextFrameFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#merge)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` other: QTextFormat `
    ///
    pub fn Merge(self: QTextFrameFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Merge(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn IsEmpty(self: QTextFrameFormat) bool {
        return qtc.QTextFormat_IsEmpty(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn Type(self: QTextFrameFormat) i32 {
        return qtc.QTextFormat_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn ObjectIndex(self: QTextFrameFormat) i32 {
        return qtc.QTextFormat_ObjectIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` object: i32 `
    ///
    pub fn SetObjectIndex(self: QTextFrameFormat, object: i32) void {
        qtc.QTextFormat_SetObjectIndex(@ptrCast(self.ptr), @bitCast(object));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn Property(self: QTextFrameFormat, propertyId: i32) QVariant {
        return .{ .ptr = qtc.QTextFormat_Property(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QTextFrameFormat, propertyId: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QTextFormat_SetProperty(@ptrCast(self.ptr), @bitCast(propertyId), @ptrCast(value.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn ClearProperty(self: QTextFrameFormat, propertyId: i32) void {
        qtc.QTextFormat_ClearProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn HasProperty(self: QTextFrameFormat, propertyId: i32) bool {
        return qtc.QTextFormat_HasProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn BoolProperty(self: QTextFrameFormat, propertyId: i32) bool {
        return qtc.QTextFormat_BoolProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn IntProperty(self: QTextFrameFormat, propertyId: i32) i32 {
        return qtc.QTextFormat_IntProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn DoubleProperty(self: QTextFrameFormat, propertyId: i32) f64 {
        return qtc.QTextFormat_DoubleProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn StringProperty(self: QTextFrameFormat, allocator: std.mem.Allocator, propertyId: i32) []const u8 {
        var _str = qtc.QTextFormat_StringProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextframeformat.StringProperty: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn ColorProperty(self: QTextFrameFormat, propertyId: i32) QColor {
        return .{ .ptr = qtc.QTextFormat_ColorProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn PenProperty(self: QTextFrameFormat, propertyId: i32) QPen {
        return .{ .ptr = qtc.QTextFormat_PenProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn BrushProperty(self: QTextFrameFormat, propertyId: i32) QBrush {
        return .{ .ptr = qtc.QTextFormat_BrushProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn LengthProperty(self: QTextFrameFormat, propertyId: i32) QTextLength {
        return .{ .ptr = qtc.QTextFormat_LengthProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn LengthVectorProperty(self: QTextFrameFormat, allocator: std.mem.Allocator, propertyId: i32) []QTextLength {
        const _arr: qtc.libqt_list = qtc.QTextFormat_LengthVectorProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextLength, _arr.len) catch @panic("qtextframeformat.LengthVectorProperty: Memory allocation failed");
        const _data: [*]QtC.QTextLength = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` lengths: []QTextLength `
    ///
    pub fn SetProperty2(self: QTextFrameFormat, propertyId: i32, lengths: []QTextLength) void {
        const lengths_list = qtc.libqt_list{
            .len = lengths.len,
            .data = @ptrCast(lengths.ptr),
        };
        qtc.QTextFormat_SetProperty2(@ptrCast(self.ptr), @bitCast(propertyId), lengths_list);
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#properties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Properties(self: QTextFrameFormat, allocator: std.mem.Allocator) ArrayMap_i32_QVariant {
        const _map: qtc.libqt_map = qtc.QTextFormat_Properties(@ptrCast(self.ptr));
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
            _ret.put(allocator, _key, .{ .ptr = @ptrCast(_value) }) catch @panic("qtextframeformat.Properties: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn PropertyCount(self: QTextFrameFormat) i32 {
        return qtc.QTextFormat_PropertyCount(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn SetObjectType(self: QTextFrameFormat, typeVal: i32) void {
        qtc.QTextFormat_SetObjectType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn ObjectType(self: QTextFrameFormat) i32 {
        return qtc.QTextFormat_ObjectType(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn IsCharFormat(self: QTextFrameFormat) bool {
        return qtc.QTextFormat_IsCharFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn IsBlockFormat(self: QTextFrameFormat) bool {
        return qtc.QTextFormat_IsBlockFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn IsListFormat(self: QTextFrameFormat) bool {
        return qtc.QTextFormat_IsListFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn IsFrameFormat(self: QTextFrameFormat) bool {
        return qtc.QTextFormat_IsFrameFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn IsImageFormat(self: QTextFrameFormat) bool {
        return qtc.QTextFormat_IsImageFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn IsTableFormat(self: QTextFrameFormat) bool {
        return qtc.QTextFormat_IsTableFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn IsTableCellFormat(self: QTextFrameFormat) bool {
        return qtc.QTextFormat_IsTableCellFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn ToBlockFormat(self: QTextFrameFormat) QTextBlockFormat {
        return .{ .ptr = qtc.QTextFormat_ToBlockFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn ToCharFormat(self: QTextFrameFormat) QTextCharFormat {
        return .{ .ptr = qtc.QTextFormat_ToCharFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn ToListFormat(self: QTextFrameFormat) QTextListFormat {
        return .{ .ptr = qtc.QTextFormat_ToListFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn ToTableFormat(self: QTextFrameFormat) QTextTableFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn ToFrameFormat(self: QTextFrameFormat) QTextFrameFormat {
        return .{ .ptr = qtc.QTextFormat_ToFrameFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn ToImageFormat(self: QTextFrameFormat) QTextImageFormat {
        return .{ .ptr = qtc.QTextFormat_ToImageFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn ToTableCellFormat(self: QTextFrameFormat) QTextTableCellFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableCellFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn OperatorEqual(self: QTextFrameFormat, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn OperatorNotEqual(self: QTextFrameFormat, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn ToQVariant(self: QTextFrameFormat) QVariant {
        return .{ .ptr = qtc.QTextFormat_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: QTextFrameFormat, direction: i32) void {
        qtc.QTextFormat_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: QTextFrameFormat) i32 {
        return qtc.QTextFormat_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetBackground(self: QTextFrameFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetBackground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn Background(self: QTextFrameFormat) QBrush {
        return .{ .ptr = qtc.QTextFormat_Background(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn ClearBackground(self: QTextFrameFormat) void {
        qtc.QTextFormat_ClearBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetForeground(self: QTextFrameFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetForeground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#foreground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn Foreground(self: QTextFrameFormat) QBrush {
        return .{ .ptr = qtc.QTextFormat_Foreground(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn ClearForeground(self: QTextFrameFormat) void {
        qtc.QTextFormat_ClearForeground(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#dtor.QTextFrameFormat)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn Delete(self: QTextFrameFormat) void {
        qtc.QTextFrameFormat_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html)
pub const QTextTableFormat = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextTableFormat,

    pub const _is_QTextTableFormat = {};
    pub const _is_QTextFrameFormat = {};
    pub const _is_QTextFormat = {};

    /// New constructs a new QTextTableFormat object.
    ///
    pub fn New() QTextTableFormat {
        return .{ .ptr = qtc.QTextTableFormat_new() };
    }

    /// New2 constructs a new QTextTableFormat object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTextTableFormat `
    ///
    pub fn New2(param1: anytype) QTextTableFormat {
        comptime _ = @TypeOf(param1)._is_QTextTableFormat;
        return .{ .ptr = qtc.QTextTableFormat_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn IsValid(self: QTextTableFormat) bool {
        return qtc.QTextTableFormat_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html#columns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn Columns(self: QTextTableFormat) i32 {
        return qtc.QTextTableFormat_Columns(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html#setColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` columns: i32 `
    ///
    pub fn SetColumns(self: QTextTableFormat, columns: i32) void {
        qtc.QTextTableFormat_SetColumns(@ptrCast(self.ptr), @bitCast(columns));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html#setColumnWidthConstraints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` constraints: []QTextLength `
    ///
    pub fn SetColumnWidthConstraints(self: QTextTableFormat, constraints: []QTextLength) void {
        const constraints_list = qtc.libqt_list{
            .len = constraints.len,
            .data = @ptrCast(constraints.ptr),
        };
        qtc.QTextTableFormat_SetColumnWidthConstraints(@ptrCast(self.ptr), constraints_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html#columnWidthConstraints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ColumnWidthConstraints(self: QTextTableFormat, allocator: std.mem.Allocator) []QTextLength {
        const _arr: qtc.libqt_list = qtc.QTextTableFormat_ColumnWidthConstraints(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextLength, _arr.len) catch @panic("qtexttableformat.ColumnWidthConstraints: Memory allocation failed");
        const _data: [*]QtC.QTextLength = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html#clearColumnWidthConstraints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn ClearColumnWidthConstraints(self: QTextTableFormat) void {
        qtc.QTextTableFormat_ClearColumnWidthConstraints(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html#cellSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn CellSpacing(self: QTextTableFormat) f64 {
        return qtc.QTextTableFormat_CellSpacing(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html#setCellSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` spacing: f64 `
    ///
    pub fn SetCellSpacing(self: QTextTableFormat, spacing: f64) void {
        qtc.QTextTableFormat_SetCellSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html#cellPadding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn CellPadding(self: QTextTableFormat) f64 {
        return qtc.QTextTableFormat_CellPadding(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html#setCellPadding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` padding: f64 `
    ///
    pub fn SetCellPadding(self: QTextTableFormat, padding: f64) void {
        qtc.QTextTableFormat_SetCellPadding(@ptrCast(self.ptr), @bitCast(padding));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: QTextTableFormat, alignment: i32) void {
        qtc.QTextTableFormat_SetAlignment(@ptrCast(self.ptr), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: QTextTableFormat) i32 {
        return qtc.QTextTableFormat_Alignment(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html#setHeaderRowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` count: i32 `
    ///
    pub fn SetHeaderRowCount(self: QTextTableFormat, count: i32) void {
        qtc.QTextTableFormat_SetHeaderRowCount(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html#headerRowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn HeaderRowCount(self: QTextTableFormat) i32 {
        return qtc.QTextTableFormat_HeaderRowCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html#setBorderCollapse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` borderCollapse: bool `
    ///
    pub fn SetBorderCollapse(self: QTextTableFormat, borderCollapse: bool) void {
        qtc.QTextTableFormat_SetBorderCollapse(@ptrCast(self.ptr), borderCollapse);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html#borderCollapse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn BorderCollapse(self: QTextTableFormat) bool {
        return qtc.QTextTableFormat_BorderCollapse(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` f: qtextformat_enums.Position `
    ///
    pub fn SetPosition(self: QTextTableFormat, f: i32) void {
        qtc.QTextFrameFormat_SetPosition(@ptrCast(self.ptr), @bitCast(f));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.Position `
    ///
    pub fn Position(self: QTextTableFormat) i32 {
        return qtc.QTextFrameFormat_Position(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setBorder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` border: f64 `
    ///
    pub fn SetBorder(self: QTextTableFormat, border: f64) void {
        qtc.QTextFrameFormat_SetBorder(@ptrCast(self.ptr), @bitCast(border));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#border)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn Border(self: QTextTableFormat) f64 {
        return qtc.QTextFrameFormat_Border(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setBorderBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetBorderBrush(self: QTextTableFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFrameFormat_SetBorderBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#borderBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn BorderBrush(self: QTextTableFormat) QBrush {
        return .{ .ptr = qtc.QTextFrameFormat_BorderBrush(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setBorderStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` style: qtextformat_enums.BorderStyle `
    ///
    pub fn SetBorderStyle(self: QTextTableFormat, style: i32) void {
        qtc.QTextFrameFormat_SetBorderStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#borderStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.BorderStyle `
    ///
    pub fn BorderStyle(self: QTextTableFormat) i32 {
        return qtc.QTextFrameFormat_BorderStyle(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` margin: f64 `
    ///
    pub fn SetMargin(self: QTextTableFormat, margin: f64) void {
        qtc.QTextFrameFormat_SetMargin(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#margin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn Margin(self: QTextTableFormat) f64 {
        return qtc.QTextFrameFormat_Margin(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setTopMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` margin: f64 `
    ///
    pub fn SetTopMargin(self: QTextTableFormat, margin: f64) void {
        qtc.QTextFrameFormat_SetTopMargin(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#topMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn TopMargin(self: QTextTableFormat) f64 {
        return qtc.QTextFrameFormat_TopMargin(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setBottomMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` margin: f64 `
    ///
    pub fn SetBottomMargin(self: QTextTableFormat, margin: f64) void {
        qtc.QTextFrameFormat_SetBottomMargin(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#bottomMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn BottomMargin(self: QTextTableFormat) f64 {
        return qtc.QTextFrameFormat_BottomMargin(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setLeftMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` margin: f64 `
    ///
    pub fn SetLeftMargin(self: QTextTableFormat, margin: f64) void {
        qtc.QTextFrameFormat_SetLeftMargin(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#leftMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn LeftMargin(self: QTextTableFormat) f64 {
        return qtc.QTextFrameFormat_LeftMargin(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setRightMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` margin: f64 `
    ///
    pub fn SetRightMargin(self: QTextTableFormat, margin: f64) void {
        qtc.QTextFrameFormat_SetRightMargin(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#rightMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn RightMargin(self: QTextTableFormat) f64 {
        return qtc.QTextFrameFormat_RightMargin(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setPadding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` padding: f64 `
    ///
    pub fn SetPadding(self: QTextTableFormat, padding: f64) void {
        qtc.QTextFrameFormat_SetPadding(@ptrCast(self.ptr), @bitCast(padding));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#padding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn Padding(self: QTextTableFormat) f64 {
        return qtc.QTextFrameFormat_Padding(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` width: f64 `
    ///
    pub fn SetWidth(self: QTextTableFormat, width: f64) void {
        qtc.QTextFrameFormat_SetWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` length: QTextLength `
    ///
    pub fn SetWidth2(self: QTextTableFormat, length: anytype) void {
        comptime _ = @TypeOf(length)._is_QTextLength;
        qtc.QTextFrameFormat_SetWidth2(@ptrCast(self.ptr), @ptrCast(length.ptr));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn Width(self: QTextTableFormat) QTextLength {
        return .{ .ptr = qtc.QTextFrameFormat_Width(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` height: f64 `
    ///
    pub fn SetHeight(self: QTextTableFormat, height: f64) void {
        qtc.QTextFrameFormat_SetHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` height: QTextLength `
    ///
    pub fn SetHeight2(self: QTextTableFormat, height: anytype) void {
        comptime _ = @TypeOf(height)._is_QTextLength;
        qtc.QTextFrameFormat_SetHeight2(@ptrCast(self.ptr), @ptrCast(height.ptr));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn Height(self: QTextTableFormat) QTextLength {
        return .{ .ptr = qtc.QTextFrameFormat_Height(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setPageBreakPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` flags: flag of qtextformat_enums.PageBreakFlag `
    ///
    pub fn SetPageBreakPolicy(self: QTextTableFormat, flags: i32) void {
        qtc.QTextFrameFormat_SetPageBreakPolicy(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#pageBreakPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ## Returns:
    ///
    /// ` flag of qtextformat_enums.PageBreakFlag `
    ///
    pub fn PageBreakPolicy(self: QTextTableFormat) i32 {
        return qtc.QTextFrameFormat_PageBreakPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn OperatorAssign(self: QTextTableFormat, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        qtc.QTextFormat_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` other: QTextFormat `
    ///
    pub fn Swap(self: QTextTableFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#merge)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` other: QTextFormat `
    ///
    pub fn Merge(self: QTextTableFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Merge(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn IsEmpty(self: QTextTableFormat) bool {
        return qtc.QTextFormat_IsEmpty(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn Type(self: QTextTableFormat) i32 {
        return qtc.QTextFormat_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn ObjectIndex(self: QTextTableFormat) i32 {
        return qtc.QTextFormat_ObjectIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` object: i32 `
    ///
    pub fn SetObjectIndex(self: QTextTableFormat, object: i32) void {
        qtc.QTextFormat_SetObjectIndex(@ptrCast(self.ptr), @bitCast(object));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn Property(self: QTextTableFormat, propertyId: i32) QVariant {
        return .{ .ptr = qtc.QTextFormat_Property(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QTextTableFormat, propertyId: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QTextFormat_SetProperty(@ptrCast(self.ptr), @bitCast(propertyId), @ptrCast(value.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn ClearProperty(self: QTextTableFormat, propertyId: i32) void {
        qtc.QTextFormat_ClearProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn HasProperty(self: QTextTableFormat, propertyId: i32) bool {
        return qtc.QTextFormat_HasProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn BoolProperty(self: QTextTableFormat, propertyId: i32) bool {
        return qtc.QTextFormat_BoolProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn IntProperty(self: QTextTableFormat, propertyId: i32) i32 {
        return qtc.QTextFormat_IntProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn DoubleProperty(self: QTextTableFormat, propertyId: i32) f64 {
        return qtc.QTextFormat_DoubleProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn StringProperty(self: QTextTableFormat, allocator: std.mem.Allocator, propertyId: i32) []const u8 {
        var _str = qtc.QTextFormat_StringProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtexttableformat.StringProperty: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn ColorProperty(self: QTextTableFormat, propertyId: i32) QColor {
        return .{ .ptr = qtc.QTextFormat_ColorProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn PenProperty(self: QTextTableFormat, propertyId: i32) QPen {
        return .{ .ptr = qtc.QTextFormat_PenProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn BrushProperty(self: QTextTableFormat, propertyId: i32) QBrush {
        return .{ .ptr = qtc.QTextFormat_BrushProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn LengthProperty(self: QTextTableFormat, propertyId: i32) QTextLength {
        return .{ .ptr = qtc.QTextFormat_LengthProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn LengthVectorProperty(self: QTextTableFormat, allocator: std.mem.Allocator, propertyId: i32) []QTextLength {
        const _arr: qtc.libqt_list = qtc.QTextFormat_LengthVectorProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextLength, _arr.len) catch @panic("qtexttableformat.LengthVectorProperty: Memory allocation failed");
        const _data: [*]QtC.QTextLength = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` lengths: []QTextLength `
    ///
    pub fn SetProperty2(self: QTextTableFormat, propertyId: i32, lengths: []QTextLength) void {
        const lengths_list = qtc.libqt_list{
            .len = lengths.len,
            .data = @ptrCast(lengths.ptr),
        };
        qtc.QTextFormat_SetProperty2(@ptrCast(self.ptr), @bitCast(propertyId), lengths_list);
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#properties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Properties(self: QTextTableFormat, allocator: std.mem.Allocator) ArrayMap_i32_QVariant {
        const _map: qtc.libqt_map = qtc.QTextFormat_Properties(@ptrCast(self.ptr));
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
            _ret.put(allocator, _key, .{ .ptr = @ptrCast(_value) }) catch @panic("qtexttableformat.Properties: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn PropertyCount(self: QTextTableFormat) i32 {
        return qtc.QTextFormat_PropertyCount(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn SetObjectType(self: QTextTableFormat, typeVal: i32) void {
        qtc.QTextFormat_SetObjectType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn ObjectType(self: QTextTableFormat) i32 {
        return qtc.QTextFormat_ObjectType(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn IsCharFormat(self: QTextTableFormat) bool {
        return qtc.QTextFormat_IsCharFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn IsBlockFormat(self: QTextTableFormat) bool {
        return qtc.QTextFormat_IsBlockFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn IsListFormat(self: QTextTableFormat) bool {
        return qtc.QTextFormat_IsListFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn IsFrameFormat(self: QTextTableFormat) bool {
        return qtc.QTextFormat_IsFrameFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn IsImageFormat(self: QTextTableFormat) bool {
        return qtc.QTextFormat_IsImageFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn IsTableFormat(self: QTextTableFormat) bool {
        return qtc.QTextFormat_IsTableFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn IsTableCellFormat(self: QTextTableFormat) bool {
        return qtc.QTextFormat_IsTableCellFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn ToBlockFormat(self: QTextTableFormat) QTextBlockFormat {
        return .{ .ptr = qtc.QTextFormat_ToBlockFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn ToCharFormat(self: QTextTableFormat) QTextCharFormat {
        return .{ .ptr = qtc.QTextFormat_ToCharFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn ToListFormat(self: QTextTableFormat) QTextListFormat {
        return .{ .ptr = qtc.QTextFormat_ToListFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn ToTableFormat(self: QTextTableFormat) QTextTableFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn ToFrameFormat(self: QTextTableFormat) QTextFrameFormat {
        return .{ .ptr = qtc.QTextFormat_ToFrameFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn ToImageFormat(self: QTextTableFormat) QTextImageFormat {
        return .{ .ptr = qtc.QTextFormat_ToImageFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn ToTableCellFormat(self: QTextTableFormat) QTextTableCellFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableCellFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn OperatorEqual(self: QTextTableFormat, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn OperatorNotEqual(self: QTextTableFormat, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn ToQVariant(self: QTextTableFormat) QVariant {
        return .{ .ptr = qtc.QTextFormat_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: QTextTableFormat, direction: i32) void {
        qtc.QTextFormat_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: QTextTableFormat) i32 {
        return qtc.QTextFormat_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetBackground(self: QTextTableFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetBackground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn Background(self: QTextTableFormat) QBrush {
        return .{ .ptr = qtc.QTextFormat_Background(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn ClearBackground(self: QTextTableFormat) void {
        qtc.QTextFormat_ClearBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetForeground(self: QTextTableFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetForeground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#foreground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn Foreground(self: QTextTableFormat) QBrush {
        return .{ .ptr = qtc.QTextFormat_Foreground(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn ClearForeground(self: QTextTableFormat) void {
        qtc.QTextFormat_ClearForeground(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html#dtor.QTextTableFormat)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn Delete(self: QTextTableFormat) void {
        qtc.QTextTableFormat_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html)
pub const QTextTableCellFormat = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextTableCellFormat,

    pub const _is_QTextTableCellFormat = {};
    pub const _is_QTextCharFormat = {};
    pub const _is_QTextFormat = {};

    /// New constructs a new QTextTableCellFormat object.
    ///
    pub fn New() QTextTableCellFormat {
        return .{ .ptr = qtc.QTextTableCellFormat_new() };
    }

    /// New2 constructs a new QTextTableCellFormat object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTextTableCellFormat `
    ///
    pub fn New2(param1: anytype) QTextTableCellFormat {
        comptime _ = @TypeOf(param1)._is_QTextTableCellFormat;
        return .{ .ptr = qtc.QTextTableCellFormat_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn IsValid(self: QTextTableCellFormat) bool {
        return qtc.QTextTableCellFormat_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setTopPadding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` padding: f64 `
    ///
    pub fn SetTopPadding(self: QTextTableCellFormat, padding: f64) void {
        qtc.QTextTableCellFormat_SetTopPadding(@ptrCast(self.ptr), @bitCast(padding));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#topPadding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn TopPadding(self: QTextTableCellFormat) f64 {
        return qtc.QTextTableCellFormat_TopPadding(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBottomPadding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` padding: f64 `
    ///
    pub fn SetBottomPadding(self: QTextTableCellFormat, padding: f64) void {
        qtc.QTextTableCellFormat_SetBottomPadding(@ptrCast(self.ptr), @bitCast(padding));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#bottomPadding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn BottomPadding(self: QTextTableCellFormat) f64 {
        return qtc.QTextTableCellFormat_BottomPadding(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setLeftPadding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` padding: f64 `
    ///
    pub fn SetLeftPadding(self: QTextTableCellFormat, padding: f64) void {
        qtc.QTextTableCellFormat_SetLeftPadding(@ptrCast(self.ptr), @bitCast(padding));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#leftPadding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn LeftPadding(self: QTextTableCellFormat) f64 {
        return qtc.QTextTableCellFormat_LeftPadding(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setRightPadding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` padding: f64 `
    ///
    pub fn SetRightPadding(self: QTextTableCellFormat, padding: f64) void {
        qtc.QTextTableCellFormat_SetRightPadding(@ptrCast(self.ptr), @bitCast(padding));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#rightPadding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn RightPadding(self: QTextTableCellFormat) f64 {
        return qtc.QTextTableCellFormat_RightPadding(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setPadding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` padding: f64 `
    ///
    pub fn SetPadding(self: QTextTableCellFormat, padding: f64) void {
        qtc.QTextTableCellFormat_SetPadding(@ptrCast(self.ptr), @bitCast(padding));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setTopBorder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` width: f64 `
    ///
    pub fn SetTopBorder(self: QTextTableCellFormat, width: f64) void {
        qtc.QTextTableCellFormat_SetTopBorder(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#topBorder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn TopBorder(self: QTextTableCellFormat) f64 {
        return qtc.QTextTableCellFormat_TopBorder(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBottomBorder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` width: f64 `
    ///
    pub fn SetBottomBorder(self: QTextTableCellFormat, width: f64) void {
        qtc.QTextTableCellFormat_SetBottomBorder(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#bottomBorder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn BottomBorder(self: QTextTableCellFormat) f64 {
        return qtc.QTextTableCellFormat_BottomBorder(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setLeftBorder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` width: f64 `
    ///
    pub fn SetLeftBorder(self: QTextTableCellFormat, width: f64) void {
        qtc.QTextTableCellFormat_SetLeftBorder(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#leftBorder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn LeftBorder(self: QTextTableCellFormat) f64 {
        return qtc.QTextTableCellFormat_LeftBorder(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setRightBorder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` width: f64 `
    ///
    pub fn SetRightBorder(self: QTextTableCellFormat, width: f64) void {
        qtc.QTextTableCellFormat_SetRightBorder(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#rightBorder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn RightBorder(self: QTextTableCellFormat) f64 {
        return qtc.QTextTableCellFormat_RightBorder(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBorder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` width: f64 `
    ///
    pub fn SetBorder(self: QTextTableCellFormat, width: f64) void {
        qtc.QTextTableCellFormat_SetBorder(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setTopBorderStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` style: qtextformat_enums.BorderStyle `
    ///
    pub fn SetTopBorderStyle(self: QTextTableCellFormat, style: i32) void {
        qtc.QTextTableCellFormat_SetTopBorderStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#topBorderStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.BorderStyle `
    ///
    pub fn TopBorderStyle(self: QTextTableCellFormat) i32 {
        return qtc.QTextTableCellFormat_TopBorderStyle(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBottomBorderStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` style: qtextformat_enums.BorderStyle `
    ///
    pub fn SetBottomBorderStyle(self: QTextTableCellFormat, style: i32) void {
        qtc.QTextTableCellFormat_SetBottomBorderStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#bottomBorderStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.BorderStyle `
    ///
    pub fn BottomBorderStyle(self: QTextTableCellFormat) i32 {
        return qtc.QTextTableCellFormat_BottomBorderStyle(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setLeftBorderStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` style: qtextformat_enums.BorderStyle `
    ///
    pub fn SetLeftBorderStyle(self: QTextTableCellFormat, style: i32) void {
        qtc.QTextTableCellFormat_SetLeftBorderStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#leftBorderStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.BorderStyle `
    ///
    pub fn LeftBorderStyle(self: QTextTableCellFormat) i32 {
        return qtc.QTextTableCellFormat_LeftBorderStyle(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setRightBorderStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` style: qtextformat_enums.BorderStyle `
    ///
    pub fn SetRightBorderStyle(self: QTextTableCellFormat, style: i32) void {
        qtc.QTextTableCellFormat_SetRightBorderStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#rightBorderStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.BorderStyle `
    ///
    pub fn RightBorderStyle(self: QTextTableCellFormat) i32 {
        return qtc.QTextTableCellFormat_RightBorderStyle(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBorderStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` style: qtextformat_enums.BorderStyle `
    ///
    pub fn SetBorderStyle(self: QTextTableCellFormat, style: i32) void {
        qtc.QTextTableCellFormat_SetBorderStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setTopBorderBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetTopBorderBrush(self: QTextTableCellFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextTableCellFormat_SetTopBorderBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#topBorderBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn TopBorderBrush(self: QTextTableCellFormat) QBrush {
        return .{ .ptr = qtc.QTextTableCellFormat_TopBorderBrush(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBottomBorderBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetBottomBorderBrush(self: QTextTableCellFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextTableCellFormat_SetBottomBorderBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#bottomBorderBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn BottomBorderBrush(self: QTextTableCellFormat) QBrush {
        return .{ .ptr = qtc.QTextTableCellFormat_BottomBorderBrush(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setLeftBorderBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetLeftBorderBrush(self: QTextTableCellFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextTableCellFormat_SetLeftBorderBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#leftBorderBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn LeftBorderBrush(self: QTextTableCellFormat) QBrush {
        return .{ .ptr = qtc.QTextTableCellFormat_LeftBorderBrush(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setRightBorderBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetRightBorderBrush(self: QTextTableCellFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextTableCellFormat_SetRightBorderBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#rightBorderBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn RightBorderBrush(self: QTextTableCellFormat) QBrush {
        return .{ .ptr = qtc.QTextTableCellFormat_RightBorderBrush(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBorderBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetBorderBrush(self: QTextTableCellFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextTableCellFormat_SetBorderBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: QTextTableCellFormat, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QTextCharFormat_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn Font(self: QTextTableCellFormat) QFont {
        return .{ .ptr = qtc.QTextCharFormat_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` family: []const u8 `
    ///
    pub fn SetFontFamily(self: QTextTableCellFormat, family: []const u8) void {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        qtc.QTextCharFormat_SetFontFamily(@ptrCast(self.ptr), family_str);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FontFamily(self: QTextTableCellFormat, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextCharFormat_FontFamily(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtexttablecellformat.FontFamily: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamilies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` families: []const []const u8 `
    ///
    pub fn SetFontFamilies(self: QTextTableCellFormat, allocator: std.mem.Allocator, families: []const []const u8) void {
        const families_arr = allocator.alloc(qtc.libqt_string, families.len) catch @panic("qtexttablecellformat.SetFontFamilies: Memory allocation failed");
        defer allocator.free(families_arr);
        for (families, 0..families.len) |item, i|
            families_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const families_list = qtc.libqt_list{
            .len = families.len,
            .data = families_arr.ptr,
        };
        qtc.QTextCharFormat_SetFontFamilies(@ptrCast(self.ptr), families_list);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamilies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn FontFamilies(self: QTextTableCellFormat) QVariant {
        return .{ .ptr = qtc.QTextCharFormat_FontFamilies(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` styleName: []const u8 `
    ///
    pub fn SetFontStyleName(self: QTextTableCellFormat, styleName: []const u8) void {
        const styleName_str = qtc.libqt_string{
            .len = styleName.len,
            .data = styleName.ptr,
        };
        qtc.QTextCharFormat_SetFontStyleName(@ptrCast(self.ptr), styleName_str);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn FontStyleName(self: QTextTableCellFormat) QVariant {
        return .{ .ptr = qtc.QTextCharFormat_FontStyleName(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` size: f64 `
    ///
    pub fn SetFontPointSize(self: QTextTableCellFormat, size: f64) void {
        qtc.QTextCharFormat_SetFontPointSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn FontPointSize(self: QTextTableCellFormat) f64 {
        return qtc.QTextCharFormat_FontPointSize(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` weight: i32 `
    ///
    pub fn SetFontWeight(self: QTextTableCellFormat, weight: i32) void {
        qtc.QTextCharFormat_SetFontWeight(@ptrCast(self.ptr), @bitCast(weight));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn FontWeight(self: QTextTableCellFormat) i32 {
        return qtc.QTextCharFormat_FontWeight(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontItalic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` italic: bool `
    ///
    pub fn SetFontItalic(self: QTextTableCellFormat, italic: bool) void {
        qtc.QTextCharFormat_SetFontItalic(@ptrCast(self.ptr), italic);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontItalic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn FontItalic(self: QTextTableCellFormat) bool {
        return qtc.QTextCharFormat_FontItalic(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontCapitalization)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` capitalization: qfont_enums.Capitalization `
    ///
    pub fn SetFontCapitalization(self: QTextTableCellFormat, capitalization: i32) void {
        qtc.QTextCharFormat_SetFontCapitalization(@ptrCast(self.ptr), @bitCast(capitalization));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontCapitalization)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.Capitalization `
    ///
    pub fn FontCapitalization(self: QTextTableCellFormat) i32 {
        return qtc.QTextCharFormat_FontCapitalization(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacingType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` letterSpacingType: qfont_enums.SpacingType `
    ///
    pub fn SetFontLetterSpacingType(self: QTextTableCellFormat, letterSpacingType: i32) void {
        qtc.QTextCharFormat_SetFontLetterSpacingType(@ptrCast(self.ptr), @bitCast(letterSpacingType));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacingType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.SpacingType `
    ///
    pub fn FontLetterSpacingType(self: QTextTableCellFormat) i32 {
        return qtc.QTextCharFormat_FontLetterSpacingType(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` spacing: f64 `
    ///
    pub fn SetFontLetterSpacing(self: QTextTableCellFormat, spacing: f64) void {
        qtc.QTextCharFormat_SetFontLetterSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn FontLetterSpacing(self: QTextTableCellFormat) f64 {
        return qtc.QTextCharFormat_FontLetterSpacing(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWordSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` spacing: f64 `
    ///
    pub fn SetFontWordSpacing(self: QTextTableCellFormat, spacing: f64) void {
        qtc.QTextCharFormat_SetFontWordSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontWordSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn FontWordSpacing(self: QTextTableCellFormat) f64 {
        return qtc.QTextCharFormat_FontWordSpacing(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontUnderline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` underline: bool `
    ///
    pub fn SetFontUnderline(self: QTextTableCellFormat, underline: bool) void {
        qtc.QTextCharFormat_SetFontUnderline(@ptrCast(self.ptr), underline);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontUnderline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn FontUnderline(self: QTextTableCellFormat) bool {
        return qtc.QTextCharFormat_FontUnderline(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontOverline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` overline: bool `
    ///
    pub fn SetFontOverline(self: QTextTableCellFormat, overline: bool) void {
        qtc.QTextCharFormat_SetFontOverline(@ptrCast(self.ptr), overline);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontOverline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn FontOverline(self: QTextTableCellFormat) bool {
        return qtc.QTextCharFormat_FontOverline(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStrikeOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` strikeOut: bool `
    ///
    pub fn SetFontStrikeOut(self: QTextTableCellFormat, strikeOut: bool) void {
        qtc.QTextCharFormat_SetFontStrikeOut(@ptrCast(self.ptr), strikeOut);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStrikeOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn FontStrikeOut(self: QTextTableCellFormat) bool {
        return qtc.QTextCharFormat_FontStrikeOut(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` color: QColor `
    ///
    pub fn SetUnderlineColor(self: QTextTableCellFormat, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QTextCharFormat_SetUnderlineColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#underlineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn UnderlineColor(self: QTextTableCellFormat) QColor {
        return .{ .ptr = qtc.QTextCharFormat_UnderlineColor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFixedPitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` fixedPitch: bool `
    ///
    pub fn SetFontFixedPitch(self: QTextTableCellFormat, fixedPitch: bool) void {
        qtc.QTextCharFormat_SetFontFixedPitch(@ptrCast(self.ptr), fixedPitch);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontFixedPitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn FontFixedPitch(self: QTextTableCellFormat) bool {
        return qtc.QTextCharFormat_FontFixedPitch(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` factor: i32 `
    ///
    pub fn SetFontStretch(self: QTextTableCellFormat, factor: i32) void {
        qtc.QTextCharFormat_SetFontStretch(@ptrCast(self.ptr), @bitCast(factor));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn FontStretch(self: QTextTableCellFormat) i32 {
        return qtc.QTextCharFormat_FontStretch(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` hint: qfont_enums.StyleHint `
    ///
    pub fn SetFontStyleHint(self: QTextTableCellFormat, hint: i32) void {
        qtc.QTextCharFormat_SetFontStyleHint(@ptrCast(self.ptr), @bitCast(hint));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleStrategy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` strategy: qfont_enums.StyleStrategy `
    ///
    pub fn SetFontStyleStrategy(self: QTextTableCellFormat, strategy: i32) void {
        qtc.QTextCharFormat_SetFontStyleStrategy(@ptrCast(self.ptr), @bitCast(strategy));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.StyleHint `
    ///
    pub fn FontStyleHint(self: QTextTableCellFormat) i32 {
        return qtc.QTextCharFormat_FontStyleHint(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleStrategy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.StyleStrategy `
    ///
    pub fn FontStyleStrategy(self: QTextTableCellFormat) i32 {
        return qtc.QTextCharFormat_FontStyleStrategy(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontHintingPreference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` hintingPreference: qfont_enums.HintingPreference `
    ///
    pub fn SetFontHintingPreference(self: QTextTableCellFormat, hintingPreference: i32) void {
        qtc.QTextCharFormat_SetFontHintingPreference(@ptrCast(self.ptr), @bitCast(hintingPreference));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontHintingPreference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.HintingPreference `
    ///
    pub fn FontHintingPreference(self: QTextTableCellFormat) i32 {
        return qtc.QTextCharFormat_FontHintingPreference(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontKerning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` enable: bool `
    ///
    pub fn SetFontKerning(self: QTextTableCellFormat, enable: bool) void {
        qtc.QTextCharFormat_SetFontKerning(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontKerning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn FontKerning(self: QTextTableCellFormat) bool {
        return qtc.QTextCharFormat_FontKerning(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` style: qtextformat_enums.UnderlineStyle `
    ///
    pub fn SetUnderlineStyle(self: QTextTableCellFormat, style: i32) void {
        qtc.QTextCharFormat_SetUnderlineStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#underlineStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.UnderlineStyle `
    ///
    pub fn UnderlineStyle(self: QTextTableCellFormat) i32 {
        return qtc.QTextCharFormat_UnderlineStyle(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setVerticalAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` alignment: qtextformat_enums.VerticalAlignment `
    ///
    pub fn SetVerticalAlignment(self: QTextTableCellFormat, alignment: i32) void {
        qtc.QTextCharFormat_SetVerticalAlignment(@ptrCast(self.ptr), @bitCast(alignment));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#verticalAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.VerticalAlignment `
    ///
    pub fn VerticalAlignment(self: QTextTableCellFormat) i32 {
        return qtc.QTextCharFormat_VerticalAlignment(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setTextOutline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` pen: QPen `
    ///
    pub fn SetTextOutline(self: QTextTableCellFormat, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QTextCharFormat_SetTextOutline(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#textOutline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn TextOutline(self: QTextTableCellFormat) QPen {
        return .{ .ptr = qtc.QTextCharFormat_TextOutline(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` tip: []const u8 `
    ///
    pub fn SetToolTip(self: QTextTableCellFormat, tip: []const u8) void {
        const tip_str = qtc.libqt_string{
            .len = tip.len,
            .data = tip.ptr,
        };
        qtc.QTextCharFormat_SetToolTip(@ptrCast(self.ptr), tip_str);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: QTextTableCellFormat, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextCharFormat_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtexttablecellformat.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setSuperScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` baseline: f64 `
    ///
    pub fn SetSuperScriptBaseline(self: QTextTableCellFormat, baseline: f64) void {
        qtc.QTextCharFormat_SetSuperScriptBaseline(@ptrCast(self.ptr), @bitCast(baseline));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#superScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn SuperScriptBaseline(self: QTextTableCellFormat) f64 {
        return qtc.QTextCharFormat_SuperScriptBaseline(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setSubScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` baseline: f64 `
    ///
    pub fn SetSubScriptBaseline(self: QTextTableCellFormat, baseline: f64) void {
        qtc.QTextCharFormat_SetSubScriptBaseline(@ptrCast(self.ptr), @bitCast(baseline));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#subScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn SubScriptBaseline(self: QTextTableCellFormat) f64 {
        return qtc.QTextCharFormat_SubScriptBaseline(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setBaselineOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` baseline: f64 `
    ///
    pub fn SetBaselineOffset(self: QTextTableCellFormat, baseline: f64) void {
        qtc.QTextCharFormat_SetBaselineOffset(@ptrCast(self.ptr), @bitCast(baseline));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#baselineOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn BaselineOffset(self: QTextTableCellFormat) f64 {
        return qtc.QTextCharFormat_BaselineOffset(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` anchor: bool `
    ///
    pub fn SetAnchor(self: QTextTableCellFormat, anchor: bool) void {
        qtc.QTextCharFormat_SetAnchor(@ptrCast(self.ptr), anchor);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#isAnchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn IsAnchor(self: QTextTableCellFormat) bool {
        return qtc.QTextCharFormat_IsAnchor(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorHref)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetAnchorHref(self: QTextTableCellFormat, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QTextCharFormat_SetAnchorHref(@ptrCast(self.ptr), value_str);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#anchorHref)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AnchorHref(self: QTextTableCellFormat, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextCharFormat_AnchorHref(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtexttablecellformat.AnchorHref: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` names: []const []const u8 `
    ///
    pub fn SetAnchorNames(self: QTextTableCellFormat, allocator: std.mem.Allocator, names: []const []const u8) void {
        const names_arr = allocator.alloc(qtc.libqt_string, names.len) catch @panic("qtexttablecellformat.SetAnchorNames: Memory allocation failed");
        defer allocator.free(names_arr);
        for (names, 0..names.len) |item, i|
            names_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const names_list = qtc.libqt_list{
            .len = names.len,
            .data = names_arr.ptr,
        };
        qtc.QTextCharFormat_SetAnchorNames(@ptrCast(self.ptr), names_list);
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#anchorNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AnchorNames(self: QTextTableCellFormat, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QTextCharFormat_AnchorNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellRowSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` tableCellRowSpan: i32 `
    ///
    pub fn SetTableCellRowSpan(self: QTextTableCellFormat, tableCellRowSpan: i32) void {
        qtc.QTextCharFormat_SetTableCellRowSpan(@ptrCast(self.ptr), @bitCast(tableCellRowSpan));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellRowSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn TableCellRowSpan(self: QTextTableCellFormat) i32 {
        return qtc.QTextCharFormat_TableCellRowSpan(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellColumnSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` tableCellColumnSpan: i32 `
    ///
    pub fn SetTableCellColumnSpan(self: QTextTableCellFormat, tableCellColumnSpan: i32) void {
        qtc.QTextCharFormat_SetTableCellColumnSpan(@ptrCast(self.ptr), @bitCast(tableCellColumnSpan));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellColumnSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn TableCellColumnSpan(self: QTextTableCellFormat) i32 {
        return qtc.QTextCharFormat_TableCellColumnSpan(@ptrCast(self.ptr));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` font: QFont `
    ///
    /// ` behavior: qtextformat_enums.FontPropertiesInheritanceBehavior `
    ///
    pub fn SetFont2(self: QTextTableCellFormat, font: anytype, behavior: i32) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QTextCharFormat_SetFont2(@ptrCast(self.ptr), @ptrCast(font.ptr), @bitCast(behavior));
    }

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` hint: qfont_enums.StyleHint `
    ///
    /// ` strategy: qfont_enums.StyleStrategy `
    ///
    pub fn SetFontStyleHint2(self: QTextTableCellFormat, hint: i32, strategy: i32) void {
        qtc.QTextCharFormat_SetFontStyleHint2(@ptrCast(self.ptr), @bitCast(hint), @bitCast(strategy));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn OperatorAssign(self: QTextTableCellFormat, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        qtc.QTextFormat_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` other: QTextFormat `
    ///
    pub fn Swap(self: QTextTableCellFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#merge)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` other: QTextFormat `
    ///
    pub fn Merge(self: QTextTableCellFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Merge(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn IsEmpty(self: QTextTableCellFormat) bool {
        return qtc.QTextFormat_IsEmpty(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn Type(self: QTextTableCellFormat) i32 {
        return qtc.QTextFormat_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn ObjectIndex(self: QTextTableCellFormat) i32 {
        return qtc.QTextFormat_ObjectIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` object: i32 `
    ///
    pub fn SetObjectIndex(self: QTextTableCellFormat, object: i32) void {
        qtc.QTextFormat_SetObjectIndex(@ptrCast(self.ptr), @bitCast(object));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn Property(self: QTextTableCellFormat, propertyId: i32) QVariant {
        return .{ .ptr = qtc.QTextFormat_Property(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QTextTableCellFormat, propertyId: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QTextFormat_SetProperty(@ptrCast(self.ptr), @bitCast(propertyId), @ptrCast(value.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn ClearProperty(self: QTextTableCellFormat, propertyId: i32) void {
        qtc.QTextFormat_ClearProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn HasProperty(self: QTextTableCellFormat, propertyId: i32) bool {
        return qtc.QTextFormat_HasProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn BoolProperty(self: QTextTableCellFormat, propertyId: i32) bool {
        return qtc.QTextFormat_BoolProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn IntProperty(self: QTextTableCellFormat, propertyId: i32) i32 {
        return qtc.QTextFormat_IntProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn DoubleProperty(self: QTextTableCellFormat, propertyId: i32) f64 {
        return qtc.QTextFormat_DoubleProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn StringProperty(self: QTextTableCellFormat, allocator: std.mem.Allocator, propertyId: i32) []const u8 {
        var _str = qtc.QTextFormat_StringProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtexttablecellformat.StringProperty: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn ColorProperty(self: QTextTableCellFormat, propertyId: i32) QColor {
        return .{ .ptr = qtc.QTextFormat_ColorProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn PenProperty(self: QTextTableCellFormat, propertyId: i32) QPen {
        return .{ .ptr = qtc.QTextFormat_PenProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn BrushProperty(self: QTextTableCellFormat, propertyId: i32) QBrush {
        return .{ .ptr = qtc.QTextFormat_BrushProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn LengthProperty(self: QTextTableCellFormat, propertyId: i32) QTextLength {
        return .{ .ptr = qtc.QTextFormat_LengthProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn LengthVectorProperty(self: QTextTableCellFormat, allocator: std.mem.Allocator, propertyId: i32) []QTextLength {
        const _arr: qtc.libqt_list = qtc.QTextFormat_LengthVectorProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextLength, _arr.len) catch @panic("qtexttablecellformat.LengthVectorProperty: Memory allocation failed");
        const _data: [*]QtC.QTextLength = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` lengths: []QTextLength `
    ///
    pub fn SetProperty2(self: QTextTableCellFormat, propertyId: i32, lengths: []QTextLength) void {
        const lengths_list = qtc.libqt_list{
            .len = lengths.len,
            .data = @ptrCast(lengths.ptr),
        };
        qtc.QTextFormat_SetProperty2(@ptrCast(self.ptr), @bitCast(propertyId), lengths_list);
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#properties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Properties(self: QTextTableCellFormat, allocator: std.mem.Allocator) ArrayMap_i32_QVariant {
        const _map: qtc.libqt_map = qtc.QTextFormat_Properties(@ptrCast(self.ptr));
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
            _ret.put(allocator, _key, .{ .ptr = @ptrCast(_value) }) catch @panic("qtexttablecellformat.Properties: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn PropertyCount(self: QTextTableCellFormat) i32 {
        return qtc.QTextFormat_PropertyCount(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn SetObjectType(self: QTextTableCellFormat, typeVal: i32) void {
        qtc.QTextFormat_SetObjectType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn ObjectType(self: QTextTableCellFormat) i32 {
        return qtc.QTextFormat_ObjectType(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn IsCharFormat(self: QTextTableCellFormat) bool {
        return qtc.QTextFormat_IsCharFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn IsBlockFormat(self: QTextTableCellFormat) bool {
        return qtc.QTextFormat_IsBlockFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn IsListFormat(self: QTextTableCellFormat) bool {
        return qtc.QTextFormat_IsListFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn IsFrameFormat(self: QTextTableCellFormat) bool {
        return qtc.QTextFormat_IsFrameFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn IsImageFormat(self: QTextTableCellFormat) bool {
        return qtc.QTextFormat_IsImageFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn IsTableFormat(self: QTextTableCellFormat) bool {
        return qtc.QTextFormat_IsTableFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn IsTableCellFormat(self: QTextTableCellFormat) bool {
        return qtc.QTextFormat_IsTableCellFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn ToBlockFormat(self: QTextTableCellFormat) QTextBlockFormat {
        return .{ .ptr = qtc.QTextFormat_ToBlockFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn ToCharFormat(self: QTextTableCellFormat) QTextCharFormat {
        return .{ .ptr = qtc.QTextFormat_ToCharFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn ToListFormat(self: QTextTableCellFormat) QTextListFormat {
        return .{ .ptr = qtc.QTextFormat_ToListFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn ToTableFormat(self: QTextTableCellFormat) QTextTableFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn ToFrameFormat(self: QTextTableCellFormat) QTextFrameFormat {
        return .{ .ptr = qtc.QTextFormat_ToFrameFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn ToImageFormat(self: QTextTableCellFormat) QTextImageFormat {
        return .{ .ptr = qtc.QTextFormat_ToImageFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn ToTableCellFormat(self: QTextTableCellFormat) QTextTableCellFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableCellFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn OperatorEqual(self: QTextTableCellFormat, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn OperatorNotEqual(self: QTextTableCellFormat, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn ToQVariant(self: QTextTableCellFormat) QVariant {
        return .{ .ptr = qtc.QTextFormat_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: QTextTableCellFormat, direction: i32) void {
        qtc.QTextFormat_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: QTextTableCellFormat) i32 {
        return qtc.QTextFormat_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetBackground(self: QTextTableCellFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetBackground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn Background(self: QTextTableCellFormat) QBrush {
        return .{ .ptr = qtc.QTextFormat_Background(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn ClearBackground(self: QTextTableCellFormat) void {
        qtc.QTextFormat_ClearBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetForeground(self: QTextTableCellFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetForeground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#foreground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn Foreground(self: QTextTableCellFormat) QBrush {
        return .{ .ptr = qtc.QTextFormat_Foreground(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn ClearForeground(self: QTextTableCellFormat) void {
        qtc.QTextFormat_ClearForeground(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#dtor.QTextTableCellFormat)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn Delete(self: QTextTableCellFormat) void {
        qtc.QTextTableCellFormat_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#public-types)
pub const enums = struct {
    pub const Type = enum(i32) {
        pub const VariableLength: i32 = 0;
        pub const FixedLength: i32 = 1;
        pub const PercentageLength: i32 = 2;
    };

    pub const FormatType = enum(i32) {
        pub const InvalidFormat: i32 = -1;
        pub const BlockFormat: i32 = 1;
        pub const CharFormat: i32 = 2;
        pub const ListFormat: i32 = 3;
        pub const FrameFormat: i32 = 5;
        pub const UserFormat: i32 = 100;
    };

    pub const Property = enum(i32) {
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

    pub const ObjectTypes = enum(i32) {
        pub const NoObject: i32 = 0;
        pub const ImageObject: i32 = 1;
        pub const TableObject: i32 = 2;
        pub const TableCellObject: i32 = 3;
        pub const UserObject: i32 = 4096;
    };

    pub const PageBreakFlag = enum(i32) {
        pub const PageBreak_Auto: i32 = 0;
        pub const PageBreak_AlwaysBefore: i32 = 1;
        pub const PageBreak_AlwaysAfter: i32 = 16;
    };

    pub const VerticalAlignment = enum(i32) {
        pub const AlignNormal: i32 = 0;
        pub const AlignSuperScript: i32 = 1;
        pub const AlignSubScript: i32 = 2;
        pub const AlignMiddle: i32 = 3;
        pub const AlignTop: i32 = 4;
        pub const AlignBottom: i32 = 5;
        pub const AlignBaseline: i32 = 6;
    };

    pub const UnderlineStyle = enum(i32) {
        pub const NoUnderline: i32 = 0;
        pub const SingleUnderline: i32 = 1;
        pub const DashUnderline: i32 = 2;
        pub const DotLine: i32 = 3;
        pub const DashDotLine: i32 = 4;
        pub const DashDotDotLine: i32 = 5;
        pub const WaveUnderline: i32 = 6;
        pub const SpellCheckUnderline: i32 = 7;
    };

    pub const FontPropertiesInheritanceBehavior = enum(i32) {
        pub const FontPropertiesSpecifiedOnly: i32 = 0;
        pub const FontPropertiesAll: i32 = 1;
    };

    pub const LineHeightTypes = enum(i32) {
        pub const SingleHeight: i32 = 0;
        pub const ProportionalHeight: i32 = 1;
        pub const FixedHeight: i32 = 2;
        pub const MinimumHeight: i32 = 3;
        pub const LineDistanceHeight: i32 = 4;
    };

    pub const MarkerType = enum(i32) {
        pub const NoMarker: i32 = 0;
        pub const Unchecked: i32 = 1;
        pub const Checked: i32 = 2;
    };

    pub const Style = enum(i32) {
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

    pub const Position = enum(i32) {
        pub const InFlow: i32 = 0;
        pub const FloatLeft: i32 = 1;
        pub const FloatRight: i32 = 2;
    };

    pub const BorderStyle = enum(i32) {
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
