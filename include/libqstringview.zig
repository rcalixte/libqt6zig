const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html)
pub const qstringview = struct {
    /// New constructs a new QStringView object.
    ///
    pub fn New() QtC.QStringView {
        return qtc.QStringView_new();
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` other: QtC.QStringView `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStringView_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` other: QtC.QStringView `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStringView_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStringView_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstringview.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    pub fn Size(self: ?*anyopaque) i64 {
        return qtc.QStringView_Size(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    pub fn Data(self: ?*anyopaque) QtC.QChar {
        return qtc.QStringView_Data(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#constData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    pub fn ConstData(self: ?*anyopaque) QtC.QChar {
        return qtc.QStringView_ConstData(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` n: i64 `
    ///
    pub fn OperatorSubscript(self: ?*anyopaque, n: i64) QtC.QChar {
        return qtc.QStringView_OperatorSubscript(@ptrCast(self), @bitCast(n));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toLatin1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToLatin1(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QStringView_ToLatin1(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qstringview.ToLatin1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toUtf8)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToUtf8(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QStringView_ToUtf8(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qstringview.ToUtf8: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toLocal8Bit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToLocal8Bit(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QStringView_ToLocal8Bit(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qstringview.ToLocal8Bit: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toUcs4)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToUcs4(self: ?*anyopaque, allocator: std.mem.Allocator) []u32 {
        const _arr: qtc.libqt_list = qtc.QStringView_ToUcs4(@ptrCast(self));
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
    /// ` self: QtC.QStringView `
    ///
    /// ` n: i64 `
    ///
    pub fn At(self: ?*anyopaque, n: i64) QtC.QChar {
        return qtc.QStringView_At(@ptrCast(self), @bitCast(n));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#truncate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` n: i64 `
    ///
    pub fn Truncate(self: ?*anyopaque, n: i64) void {
        qtc.QStringView_Truncate(@ptrCast(self), @bitCast(n));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#chop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` n: i64 `
    ///
    pub fn Chop(self: ?*anyopaque, n: i64) void {
        qtc.QStringView_Chop(@ptrCast(self), @bitCast(n));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` c: QtC.QChar `
    ///
    pub fn Compare4(self: ?*anyopaque, c: QtC.QChar) i32 {
        return qtc.QStringView_Compare4(@ptrCast(self), @ptrCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` c: QtC.QChar `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn Compare5(self: ?*anyopaque, c: QtC.QChar, cs: i32) i32 {
        return qtc.QStringView_Compare5(@ptrCast(self), @ptrCast(c), @bitCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#startsWith)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` c: QtC.QChar `
    ///
    pub fn StartsWith3(self: ?*anyopaque, c: QtC.QChar) bool {
        return qtc.QStringView_StartsWith3(@ptrCast(self), @ptrCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#startsWith)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` c: QtC.QChar `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn StartsWith4(self: ?*anyopaque, c: QtC.QChar, cs: i32) bool {
        return qtc.QStringView_StartsWith4(@ptrCast(self), @ptrCast(c), @bitCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#endsWith)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` c: QtC.QChar `
    ///
    pub fn EndsWith3(self: ?*anyopaque, c: QtC.QChar) bool {
        return qtc.QStringView_EndsWith3(@ptrCast(self), @ptrCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#endsWith)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` c: QtC.QChar `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn EndsWith4(self: ?*anyopaque, c: QtC.QChar, cs: i32) bool {
        return qtc.QStringView_EndsWith4(@ptrCast(self), @ptrCast(c), @bitCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` c: QtC.QChar `
    ///
    pub fn IndexOf(self: ?*anyopaque, c: QtC.QChar) i64 {
        return qtc.QStringView_IndexOf(@ptrCast(self), @ptrCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` c: QtC.QChar `
    ///
    pub fn Contains(self: ?*anyopaque, c: QtC.QChar) bool {
        return qtc.QStringView_Contains(@ptrCast(self), @ptrCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` c: QtC.QChar `
    ///
    pub fn Count(self: ?*anyopaque, c: QtC.QChar) i64 {
        return qtc.QStringView_Count(@ptrCast(self), @ptrCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#lastIndexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` c: QtC.QChar `
    ///
    pub fn LastIndexOf(self: ?*anyopaque, c: QtC.QChar) i64 {
        return qtc.QStringView_LastIndexOf(@ptrCast(self), @ptrCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#lastIndexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` c: QtC.QChar `
    ///
    /// ` from: i64 `
    ///
    pub fn LastIndexOf2(self: ?*anyopaque, c: QtC.QChar, from: i64) i64 {
        return qtc.QStringView_LastIndexOf2(@ptrCast(self), @ptrCast(c), @bitCast(from));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` re: QtC.QRegularExpression `
    ///
    pub fn IndexOf4(self: ?*anyopaque, re: ?*anyopaque) i64 {
        return qtc.QStringView_IndexOf4(@ptrCast(self), @ptrCast(re));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#lastIndexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` re: QtC.QRegularExpression `
    ///
    /// ` from: i64 `
    ///
    pub fn LastIndexOf7(self: ?*anyopaque, re: ?*anyopaque, from: i64) i64 {
        return qtc.QStringView_LastIndexOf7(@ptrCast(self), @ptrCast(re), @bitCast(from));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` re: QtC.QRegularExpression `
    ///
    pub fn Contains4(self: ?*anyopaque, re: ?*anyopaque) bool {
        return qtc.QStringView_Contains4(@ptrCast(self), @ptrCast(re));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` re: QtC.QRegularExpression `
    ///
    pub fn Count4(self: ?*anyopaque, re: ?*anyopaque) i64 {
        return qtc.QStringView_Count4(@ptrCast(self), @ptrCast(re));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    pub fn IsRightToLeft(self: ?*anyopaque) bool {
        return qtc.QStringView_IsRightToLeft(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#isValidUtf16)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    pub fn IsValidUtf16(self: ?*anyopaque) bool {
        return qtc.QStringView_IsValidUtf16(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#isUpper)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    pub fn IsUpper(self: ?*anyopaque) bool {
        return qtc.QStringView_IsUpper(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#isLower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    pub fn IsLower(self: ?*anyopaque) bool {
        return qtc.QStringView_IsLower(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    pub fn ToShort(self: ?*anyopaque) i16 {
        return qtc.QStringView_ToShort(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toUShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    pub fn ToUShort(self: ?*anyopaque) u16 {
        return qtc.QStringView_ToUShort(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    pub fn ToInt(self: ?*anyopaque) i32 {
        return qtc.QStringView_ToInt(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    pub fn ToUInt(self: ?*anyopaque) u32 {
        return qtc.QStringView_ToUInt(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    pub fn ToLong(self: ?*anyopaque) i64 {
        return qtc.QStringView_ToLong(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toULong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    pub fn ToULong(self: ?*anyopaque) u64 {
        return qtc.QStringView_ToULong(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    pub fn ToLongLong(self: ?*anyopaque) i64 {
        return qtc.QStringView_ToLongLong(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    pub fn ToULongLong(self: ?*anyopaque) u64 {
        return qtc.QStringView_ToULongLong(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toFloat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    pub fn ToFloat(self: ?*anyopaque) f32 {
        return qtc.QStringView_ToFloat(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    pub fn ToDouble(self: ?*anyopaque) f64 {
        return qtc.QStringView_ToDouble(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    pub fn Begin(self: ?*anyopaque) QtC.QChar {
        return qtc.QStringView_Begin(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    pub fn End(self: ?*anyopaque) QtC.QChar {
        return qtc.QStringView_End(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#cbegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    pub fn Cbegin(self: ?*anyopaque) QtC.QChar {
        return qtc.QStringView_Cbegin(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#cend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    pub fn Cend(self: ?*anyopaque) QtC.QChar {
        return qtc.QStringView_Cend(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#empty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    pub fn Empty(self: ?*anyopaque) bool {
        return qtc.QStringView_Empty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#front)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    pub fn Front(self: ?*anyopaque) QtC.QChar {
        return qtc.QStringView_Front(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#back)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    pub fn Back(self: ?*anyopaque) QtC.QChar {
        return qtc.QStringView_Back(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#max_size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    pub fn MaxSize(self: ?*anyopaque) i64 {
        return qtc.QStringView_MaxSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#constBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    pub fn ConstBegin(self: ?*anyopaque) QtC.QChar {
        return qtc.QStringView_ConstBegin(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#constEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    pub fn ConstEnd(self: ?*anyopaque) QtC.QChar {
        return qtc.QStringView_ConstEnd(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QStringView_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QStringView_IsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    pub fn Length(self: ?*anyopaque) i64 {
        return qtc.QStringView_Length(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#first)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    pub fn First2(self: ?*anyopaque) QtC.QChar {
        return qtc.QStringView_First2(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#last)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    pub fn Last2(self: ?*anyopaque) QtC.QChar {
        return qtc.QStringView_Last2(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#maxSize)
    ///
    pub fn MaxSize2() i64 {
        return qtc.QStringView_MaxSize2();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` c: QtC.QChar `
    ///
    /// ` from: i64 `
    ///
    pub fn IndexOf22(self: ?*anyopaque, c: QtC.QChar, from: i64) i64 {
        return qtc.QStringView_IndexOf22(@ptrCast(self), @ptrCast(c), @bitCast(from));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` c: QtC.QChar `
    ///
    /// ` from: i64 `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn IndexOf32(self: ?*anyopaque, c: QtC.QChar, from: i64, cs: i32) i64 {
        return qtc.QStringView_IndexOf32(@ptrCast(self), @ptrCast(c), @bitCast(from), @bitCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` c: QtC.QChar `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn Contains22(self: ?*anyopaque, c: QtC.QChar, cs: i32) bool {
        return qtc.QStringView_Contains22(@ptrCast(self), @ptrCast(c), @bitCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` c: QtC.QChar `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn Count22(self: ?*anyopaque, c: QtC.QChar, cs: i32) i64 {
        return qtc.QStringView_Count22(@ptrCast(self), @ptrCast(c), @bitCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#lastIndexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` c: QtC.QChar `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn LastIndexOf22(self: ?*anyopaque, c: QtC.QChar, cs: i32) i64 {
        return qtc.QStringView_LastIndexOf22(@ptrCast(self), @ptrCast(c), @bitCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#lastIndexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` c: QtC.QChar `
    ///
    /// ` from: i64 `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn LastIndexOf32(self: ?*anyopaque, c: QtC.QChar, from: i64, cs: i32) i64 {
        return qtc.QStringView_LastIndexOf32(@ptrCast(self), @ptrCast(c), @bitCast(from), @bitCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` re: QtC.QRegularExpression `
    ///
    /// ` from: i64 `
    ///
    pub fn IndexOf25(self: ?*anyopaque, re: ?*anyopaque, from: i64) i64 {
        return qtc.QStringView_IndexOf25(@ptrCast(self), @ptrCast(re), @bitCast(from));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` re: QtC.QRegularExpression `
    ///
    /// ` from: i64 `
    ///
    /// ` rmatch: QtC.QRegularExpressionMatch `
    ///
    pub fn IndexOf35(self: ?*anyopaque, re: ?*anyopaque, from: i64, rmatch: ?*anyopaque) i64 {
        return qtc.QStringView_IndexOf35(@ptrCast(self), @ptrCast(re), @bitCast(from), @ptrCast(rmatch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#lastIndexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` re: QtC.QRegularExpression `
    ///
    /// ` from: i64 `
    ///
    /// ` rmatch: QtC.QRegularExpressionMatch `
    ///
    pub fn LastIndexOf35(self: ?*anyopaque, re: ?*anyopaque, from: i64, rmatch: ?*anyopaque) i64 {
        return qtc.QStringView_LastIndexOf35(@ptrCast(self), @ptrCast(re), @bitCast(from), @ptrCast(rmatch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` re: QtC.QRegularExpression `
    ///
    /// ` rmatch: QtC.QRegularExpressionMatch `
    ///
    pub fn Contains25(self: ?*anyopaque, re: ?*anyopaque, rmatch: ?*anyopaque) bool {
        return qtc.QStringView_Contains25(@ptrCast(self), @ptrCast(re), @ptrCast(rmatch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToShort1(self: ?*anyopaque, ok: *bool) i16 {
        return qtc.QStringView_ToShort1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToShort2(self: ?*anyopaque, ok: *bool, base: i32) i16 {
        return qtc.QStringView_ToShort2(@ptrCast(self), @ptrCast(ok), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toUShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToUShort1(self: ?*anyopaque, ok: *bool) u16 {
        return qtc.QStringView_ToUShort1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toUShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToUShort2(self: ?*anyopaque, ok: *bool, base: i32) u16 {
        return qtc.QStringView_ToUShort2(@ptrCast(self), @ptrCast(ok), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToInt1(self: ?*anyopaque, ok: *bool) i32 {
        return qtc.QStringView_ToInt1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToInt2(self: ?*anyopaque, ok: *bool, base: i32) i32 {
        return qtc.QStringView_ToInt2(@ptrCast(self), @ptrCast(ok), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToUInt1(self: ?*anyopaque, ok: *bool) u32 {
        return qtc.QStringView_ToUInt1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToUInt2(self: ?*anyopaque, ok: *bool, base: i32) u32 {
        return qtc.QStringView_ToUInt2(@ptrCast(self), @ptrCast(ok), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToLong1(self: ?*anyopaque, ok: *bool) i64 {
        return qtc.QStringView_ToLong1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToLong2(self: ?*anyopaque, ok: *bool, base: i32) i64 {
        return qtc.QStringView_ToLong2(@ptrCast(self), @ptrCast(ok), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toULong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToULong1(self: ?*anyopaque, ok: *bool) u64 {
        return qtc.QStringView_ToULong1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toULong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToULong2(self: ?*anyopaque, ok: *bool, base: i32) u64 {
        return qtc.QStringView_ToULong2(@ptrCast(self), @ptrCast(ok), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToLongLong1(self: ?*anyopaque, ok: *bool) i64 {
        return qtc.QStringView_ToLongLong1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToLongLong2(self: ?*anyopaque, ok: *bool, base: i32) i64 {
        return qtc.QStringView_ToLongLong2(@ptrCast(self), @ptrCast(ok), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToULongLong1(self: ?*anyopaque, ok: *bool) u64 {
        return qtc.QStringView_ToULongLong1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToULongLong2(self: ?*anyopaque, ok: *bool, base: i32) u64 {
        return qtc.QStringView_ToULongLong2(@ptrCast(self), @ptrCast(ok), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toFloat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToFloat1(self: ?*anyopaque, ok: *bool) f32 {
        return qtc.QStringView_ToFloat1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToDouble1(self: ?*anyopaque, ok: *bool) f64 {
        return qtc.QStringView_ToDouble1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#dtor.QStringView)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStringView `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStringView_Delete(@ptrCast(self));
    }
};
