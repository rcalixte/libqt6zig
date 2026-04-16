const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QChar = @import("libqt6").QChar;
const QRegularExpression = @import("libqt6").QRegularExpression;
const QRegularExpressionMatch = @import("libqt6").QRegularExpressionMatch;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html)
pub const QStringView = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStringView,

    pub const _is_QStringView = {};

    /// New constructs a new QStringView object.
    ///
    pub fn New() QStringView {
        return .{ .ptr = qtc.QStringView_new() };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QStringView `
    ///
    /// ` other: QStringView `
    ///
    pub fn CopyAssign(self: QStringView, other: QStringView) void {
        qtc.QStringView_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QStringView `
    ///
    /// ` other: QStringView `
    ///
    pub fn MoveAssign(self: QStringView, other: QStringView) void {
        qtc.QStringView_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: QStringView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStringView_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstringview.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    pub fn Size(self: QStringView) isize {
        return qtc.QStringView_Size(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    pub fn Data(self: QStringView) QChar {
        return .{ .ptr = qtc.QStringView_Data(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#constData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    pub fn ConstData(self: QStringView) QChar {
        return .{ .ptr = qtc.QStringView_ConstData(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` n: isize `
    ///
    pub fn OperatorSubscript(self: QStringView, n: isize) QChar {
        return .{ .ptr = qtc.QStringView_OperatorSubscript(@ptrCast(self.ptr), @bitCast(n)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toLatin1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToLatin1(self: QStringView, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QStringView_ToLatin1(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qstringview.ToLatin1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toUtf8)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToUtf8(self: QStringView, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QStringView_ToUtf8(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qstringview.ToUtf8: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toLocal8Bit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToLocal8Bit(self: QStringView, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QStringView_ToLocal8Bit(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qstringview.ToLocal8Bit: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toUcs4)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToUcs4(self: QStringView, allocator: std.mem.Allocator) []u32 {
        const _arr: qtc.libqt_list = qtc.QStringView_ToUcs4(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u32, _arr.len) catch @panic("qstringview.ToUcs4: Memory allocation failed");
        const _data: [*]u32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#at)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` n: isize `
    ///
    pub fn At(self: QStringView, n: isize) QChar {
        return .{ .ptr = qtc.QStringView_At(@ptrCast(self.ptr), @bitCast(n)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#truncate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` n: isize `
    ///
    pub fn Truncate(self: QStringView, n: isize) void {
        qtc.QStringView_Truncate(@ptrCast(self.ptr), @bitCast(n));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#chop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` n: isize `
    ///
    pub fn Chop(self: QStringView, n: isize) void {
        qtc.QStringView_Chop(@ptrCast(self.ptr), @bitCast(n));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` c: QChar `
    ///
    pub fn Compare4(self: QStringView, c: anytype) i32 {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.QStringView_Compare4(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` c: QChar `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn Compare5(self: QStringView, c: anytype, cs: i32) i32 {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.QStringView_Compare5(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#startsWith)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` c: QChar `
    ///
    pub fn StartsWith3(self: QStringView, c: anytype) bool {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.QStringView_StartsWith3(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#startsWith)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` c: QChar `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn StartsWith4(self: QStringView, c: anytype, cs: i32) bool {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.QStringView_StartsWith4(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#endsWith)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` c: QChar `
    ///
    pub fn EndsWith3(self: QStringView, c: anytype) bool {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.QStringView_EndsWith3(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#endsWith)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` c: QChar `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn EndsWith4(self: QStringView, c: anytype, cs: i32) bool {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.QStringView_EndsWith4(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` c: QChar `
    ///
    pub fn IndexOf(self: QStringView, c: anytype) isize {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.QStringView_IndexOf(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` c: QChar `
    ///
    pub fn Contains(self: QStringView, c: anytype) bool {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.QStringView_Contains(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` c: QChar `
    ///
    pub fn Count(self: QStringView, c: anytype) isize {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.QStringView_Count(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#lastIndexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` c: QChar `
    ///
    pub fn LastIndexOf(self: QStringView, c: anytype) isize {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.QStringView_LastIndexOf(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#lastIndexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` c: QChar `
    ///
    /// ` from: isize `
    ///
    pub fn LastIndexOf2(self: QStringView, c: anytype, from: isize) isize {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.QStringView_LastIndexOf2(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(from));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` re: QRegularExpression `
    ///
    pub fn IndexOf4(self: QStringView, re: anytype) isize {
        comptime _ = @TypeOf(re)._is_QRegularExpression;
        return qtc.QStringView_IndexOf4(@ptrCast(self.ptr), @ptrCast(re.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#lastIndexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` re: QRegularExpression `
    ///
    /// ` from: isize `
    ///
    pub fn LastIndexOf7(self: QStringView, re: anytype, from: isize) isize {
        comptime _ = @TypeOf(re)._is_QRegularExpression;
        return qtc.QStringView_LastIndexOf7(@ptrCast(self.ptr), @ptrCast(re.ptr), @bitCast(from));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` re: QRegularExpression `
    ///
    pub fn Contains4(self: QStringView, re: anytype) bool {
        comptime _ = @TypeOf(re)._is_QRegularExpression;
        return qtc.QStringView_Contains4(@ptrCast(self.ptr), @ptrCast(re.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` re: QRegularExpression `
    ///
    pub fn Count4(self: QStringView, re: anytype) isize {
        comptime _ = @TypeOf(re)._is_QRegularExpression;
        return qtc.QStringView_Count4(@ptrCast(self.ptr), @ptrCast(re.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    pub fn IsRightToLeft(self: QStringView) bool {
        return qtc.QStringView_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#isValidUtf16)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    pub fn IsValidUtf16(self: QStringView) bool {
        return qtc.QStringView_IsValidUtf16(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#isUpper)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    pub fn IsUpper(self: QStringView) bool {
        return qtc.QStringView_IsUpper(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#isLower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    pub fn IsLower(self: QStringView) bool {
        return qtc.QStringView_IsLower(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    pub fn ToShort(self: QStringView) i16 {
        return qtc.QStringView_ToShort(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toUShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    pub fn ToUShort(self: QStringView) u16 {
        return qtc.QStringView_ToUShort(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    pub fn ToInt(self: QStringView) i32 {
        return qtc.QStringView_ToInt(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    pub fn ToUInt(self: QStringView) u32 {
        return qtc.QStringView_ToUInt(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    pub fn ToLong(self: QStringView) isize {
        return qtc.QStringView_ToLong(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toULong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    pub fn ToULong(self: QStringView) usize {
        return qtc.QStringView_ToULong(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    pub fn ToLongLong(self: QStringView) isize {
        return qtc.QStringView_ToLongLong(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    pub fn ToULongLong(self: QStringView) usize {
        return qtc.QStringView_ToULongLong(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toFloat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    pub fn ToFloat(self: QStringView) f32 {
        return qtc.QStringView_ToFloat(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    pub fn ToDouble(self: QStringView) f64 {
        return qtc.QStringView_ToDouble(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    pub fn Begin(self: QStringView) QChar {
        return .{ .ptr = qtc.QStringView_Begin(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    pub fn End(self: QStringView) QChar {
        return .{ .ptr = qtc.QStringView_End(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#cbegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    pub fn Cbegin(self: QStringView) QChar {
        return .{ .ptr = qtc.QStringView_Cbegin(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#cend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    pub fn Cend(self: QStringView) QChar {
        return .{ .ptr = qtc.QStringView_Cend(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#empty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    pub fn Empty(self: QStringView) bool {
        return qtc.QStringView_Empty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#front)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    pub fn Front(self: QStringView) QChar {
        return .{ .ptr = qtc.QStringView_Front(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#back)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    pub fn Back(self: QStringView) QChar {
        return .{ .ptr = qtc.QStringView_Back(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#max_size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    pub fn MaxSize(self: QStringView) isize {
        return qtc.QStringView_MaxSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#constBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    pub fn ConstBegin(self: QStringView) QChar {
        return .{ .ptr = qtc.QStringView_ConstBegin(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#constEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    pub fn ConstEnd(self: QStringView) QChar {
        return .{ .ptr = qtc.QStringView_ConstEnd(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    pub fn IsNull(self: QStringView) bool {
        return qtc.QStringView_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    pub fn IsEmpty(self: QStringView) bool {
        return qtc.QStringView_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    pub fn Length(self: QStringView) isize {
        return qtc.QStringView_Length(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#first)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    pub fn First2(self: QStringView) QChar {
        return .{ .ptr = qtc.QStringView_First2(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#last)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    pub fn Last2(self: QStringView) QChar {
        return .{ .ptr = qtc.QStringView_Last2(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#maxSize)
    ///
    pub fn MaxSize2() isize {
        return qtc.QStringView_MaxSize2();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` c: QChar `
    ///
    /// ` from: isize `
    ///
    pub fn IndexOf22(self: QStringView, c: anytype, from: isize) isize {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.QStringView_IndexOf22(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(from));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` c: QChar `
    ///
    /// ` from: isize `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn IndexOf32(self: QStringView, c: anytype, from: isize, cs: i32) isize {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.QStringView_IndexOf32(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(from), @bitCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` c: QChar `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn Contains22(self: QStringView, c: anytype, cs: i32) bool {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.QStringView_Contains22(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` c: QChar `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn Count22(self: QStringView, c: anytype, cs: i32) isize {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.QStringView_Count22(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#lastIndexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` c: QChar `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn LastIndexOf22(self: QStringView, c: anytype, cs: i32) isize {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.QStringView_LastIndexOf22(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#lastIndexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` c: QChar `
    ///
    /// ` from: isize `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn LastIndexOf32(self: QStringView, c: anytype, from: isize, cs: i32) isize {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.QStringView_LastIndexOf32(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(from), @bitCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` re: QRegularExpression `
    ///
    /// ` from: isize `
    ///
    pub fn IndexOf25(self: QStringView, re: anytype, from: isize) isize {
        comptime _ = @TypeOf(re)._is_QRegularExpression;
        return qtc.QStringView_IndexOf25(@ptrCast(self.ptr), @ptrCast(re.ptr), @bitCast(from));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` re: QRegularExpression `
    ///
    /// ` from: isize `
    ///
    /// ` rmatch: QRegularExpressionMatch `
    ///
    pub fn IndexOf35(self: QStringView, re: anytype, from: isize, rmatch: anytype) isize {
        comptime _ = @TypeOf(re)._is_QRegularExpression;
        comptime _ = @TypeOf(rmatch)._is_QRegularExpressionMatch;
        return qtc.QStringView_IndexOf35(@ptrCast(self.ptr), @ptrCast(re.ptr), @bitCast(from), @ptrCast(rmatch.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#lastIndexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` re: QRegularExpression `
    ///
    /// ` from: isize `
    ///
    /// ` rmatch: QRegularExpressionMatch `
    ///
    pub fn LastIndexOf35(self: QStringView, re: anytype, from: isize, rmatch: anytype) isize {
        comptime _ = @TypeOf(re)._is_QRegularExpression;
        comptime _ = @TypeOf(rmatch)._is_QRegularExpressionMatch;
        return qtc.QStringView_LastIndexOf35(@ptrCast(self.ptr), @ptrCast(re.ptr), @bitCast(from), @ptrCast(rmatch.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` re: QRegularExpression `
    ///
    /// ` rmatch: QRegularExpressionMatch `
    ///
    pub fn Contains25(self: QStringView, re: anytype, rmatch: anytype) bool {
        comptime _ = @TypeOf(re)._is_QRegularExpression;
        comptime _ = @TypeOf(rmatch)._is_QRegularExpressionMatch;
        return qtc.QStringView_Contains25(@ptrCast(self.ptr), @ptrCast(re.ptr), @ptrCast(rmatch.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToShort1(self: QStringView, ok: *bool) i16 {
        return qtc.QStringView_ToShort1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToShort2(self: QStringView, ok: *bool, base: i32) i16 {
        return qtc.QStringView_ToShort2(@ptrCast(self.ptr), @ptrCast(ok), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toUShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToUShort1(self: QStringView, ok: *bool) u16 {
        return qtc.QStringView_ToUShort1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toUShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToUShort2(self: QStringView, ok: *bool, base: i32) u16 {
        return qtc.QStringView_ToUShort2(@ptrCast(self.ptr), @ptrCast(ok), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToInt1(self: QStringView, ok: *bool) i32 {
        return qtc.QStringView_ToInt1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToInt2(self: QStringView, ok: *bool, base: i32) i32 {
        return qtc.QStringView_ToInt2(@ptrCast(self.ptr), @ptrCast(ok), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToUInt1(self: QStringView, ok: *bool) u32 {
        return qtc.QStringView_ToUInt1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToUInt2(self: QStringView, ok: *bool, base: i32) u32 {
        return qtc.QStringView_ToUInt2(@ptrCast(self.ptr), @ptrCast(ok), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToLong1(self: QStringView, ok: *bool) isize {
        return qtc.QStringView_ToLong1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToLong2(self: QStringView, ok: *bool, base: i32) isize {
        return qtc.QStringView_ToLong2(@ptrCast(self.ptr), @ptrCast(ok), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toULong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToULong1(self: QStringView, ok: *bool) usize {
        return qtc.QStringView_ToULong1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toULong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToULong2(self: QStringView, ok: *bool, base: i32) usize {
        return qtc.QStringView_ToULong2(@ptrCast(self.ptr), @ptrCast(ok), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToLongLong1(self: QStringView, ok: *bool) isize {
        return qtc.QStringView_ToLongLong1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToLongLong2(self: QStringView, ok: *bool, base: i32) isize {
        return qtc.QStringView_ToLongLong2(@ptrCast(self.ptr), @ptrCast(ok), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToULongLong1(self: QStringView, ok: *bool) usize {
        return qtc.QStringView_ToULongLong1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToULongLong2(self: QStringView, ok: *bool, base: i32) usize {
        return qtc.QStringView_ToULongLong2(@ptrCast(self.ptr), @ptrCast(ok), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toFloat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToFloat1(self: QStringView, ok: *bool) f32 {
        return qtc.QStringView_ToFloat1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToDouble1(self: QStringView, ok: *bool) f64 {
        return qtc.QStringView_ToDouble1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#dtor.QStringView)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStringView `
    ///
    pub fn Delete(self: QStringView) void {
        qtc.QStringView_Delete(@ptrCast(self.ptr));
    }
};
