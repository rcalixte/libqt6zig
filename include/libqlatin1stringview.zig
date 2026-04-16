const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QChar = @import("libqt6").QChar;
const QLatin1Char = @import("libqt6").QLatin1Char;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html)
pub const QLatin1String = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QLatin1String,

    pub const _is_QLatin1String = {};

    /// New constructs a new QLatin1String object.
    ///
    pub fn New() QLatin1String {
        return .{ .ptr = qtc.QLatin1String_new() };
    }

    /// New2 constructs a new QLatin1String object.
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn New2(s: [:0]const u8) QLatin1String {
        const s_Cstring = s.ptr;
        return .{ .ptr = qtc.QLatin1String_new2(s_Cstring) };
    }

    /// New3 constructs a new QLatin1String object.
    ///
    /// ## Parameter(s):
    ///
    /// ` f: [:0]const u8 `
    ///
    /// ` l: [:0]const u8 `
    ///
    pub fn New3(f: [:0]const u8, l: [:0]const u8) QLatin1String {
        const f_Cstring = f.ptr;
        const l_Cstring = l.ptr;
        return .{ .ptr = qtc.QLatin1String_new3(f_Cstring, l_Cstring) };
    }

    /// New4 constructs a new QLatin1String object.
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` sz: isize `
    ///
    pub fn New4(s: [:0]const u8, sz: isize) QLatin1String {
        const s_Cstring = s.ptr;
        return .{ .ptr = qtc.QLatin1String_new4(s_Cstring, @bitCast(sz)) };
    }

    /// New5 constructs a new QLatin1String object.
    ///
    /// ## Parameter(s):
    ///
    /// ` s: []u8 `
    ///
    pub fn New5(s: []u8) QLatin1String {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return .{ .ptr = qtc.QLatin1String_new5(s_str) };
    }

    /// New6 constructs a new QLatin1String object.
    ///
    /// ## Parameter(s):
    ///
    /// ` s: []u8 `
    ///
    pub fn New6(s: []u8) QLatin1String {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return .{ .ptr = qtc.QLatin1String_new6(s_str) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QLatin1String `
    ///
    /// ` other: QLatin1String `
    ///
    pub fn CopyAssign(self: QLatin1String, other: QLatin1String) void {
        qtc.QLatin1String_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QLatin1String `
    ///
    /// ` other: QLatin1String `
    ///
    pub fn MoveAssign(self: QLatin1String, other: QLatin1String) void {
        qtc.QLatin1String_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: QLatin1String, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLatin1String_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlatin1string.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#latin1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    pub fn Latin1(self: QLatin1String) [:0]const u8 {
        const _ret = qtc.QLatin1String_Latin1(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    pub fn Size(self: QLatin1String) isize {
        return qtc.QLatin1String_Size(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    pub fn Data(self: QLatin1String) [:0]const u8 {
        const _ret = qtc.QLatin1String_Data(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#constData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    pub fn ConstData(self: QLatin1String) [:0]const u8 {
        const _ret = qtc.QLatin1String_ConstData(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#constBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    pub fn ConstBegin(self: QLatin1String) [:0]const u8 {
        const _ret = qtc.QLatin1String_ConstBegin(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#constEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    pub fn ConstEnd(self: QLatin1String) [:0]const u8 {
        const _ret = qtc.QLatin1String_ConstEnd(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#first)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    pub fn First(self: QLatin1String) QLatin1Char {
        return .{ .ptr = qtc.QLatin1String_First(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#last)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    pub fn Last(self: QLatin1String) QLatin1Char {
        return .{ .ptr = qtc.QLatin1String_Last(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    pub fn Length(self: QLatin1String) isize {
        return qtc.QLatin1String_Length(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    pub fn IsNull(self: QLatin1String) bool {
        return qtc.QLatin1String_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    pub fn IsEmpty(self: QLatin1String) bool {
        return qtc.QLatin1String_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#empty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    pub fn Empty(self: QLatin1String) bool {
        return qtc.QLatin1String_Empty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#at)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` i: isize `
    ///
    pub fn At(self: QLatin1String, i: isize) QLatin1Char {
        return .{ .ptr = qtc.QLatin1String_At(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` i: isize `
    ///
    pub fn OperatorSubscript(self: QLatin1String, i: isize) QLatin1Char {
        return .{ .ptr = qtc.QLatin1String_OperatorSubscript(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#front)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    pub fn Front(self: QLatin1String) QLatin1Char {
        return .{ .ptr = qtc.QLatin1String_Front(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#back)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    pub fn Back(self: QLatin1String) QLatin1Char {
        return .{ .ptr = qtc.QLatin1String_Back(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` c: QChar `
    ///
    pub fn Compare4(self: QLatin1String, c: anytype) i32 {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.QLatin1String_Compare4(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` c: QChar `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn Compare5(self: QLatin1String, c: anytype, cs: i32) i32 {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.QLatin1String_Compare5(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#startsWith)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` c: QChar `
    ///
    pub fn StartsWith3(self: QLatin1String, c: anytype) bool {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.QLatin1String_StartsWith3(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#startsWith)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` c: QChar `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn StartsWith4(self: QLatin1String, c: anytype, cs: i32) bool {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.QLatin1String_StartsWith4(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#endsWith)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` c: QChar `
    ///
    pub fn EndsWith3(self: QLatin1String, c: anytype) bool {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.QLatin1String_EndsWith3(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#endsWith)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` c: QChar `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn EndsWith4(self: QLatin1String, c: anytype, cs: i32) bool {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.QLatin1String_EndsWith4(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` c: QChar `
    ///
    pub fn IndexOf3(self: QLatin1String, c: anytype) isize {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.QLatin1String_IndexOf3(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` c: QChar `
    ///
    pub fn Contains3(self: QLatin1String, c: anytype) bool {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.QLatin1String_Contains3(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#lastIndexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` c: QChar `
    ///
    pub fn LastIndexOf5(self: QLatin1String, c: anytype) isize {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.QLatin1String_LastIndexOf5(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#lastIndexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` c: QChar `
    ///
    /// ` from: isize `
    ///
    pub fn LastIndexOf6(self: QLatin1String, c: anytype, from: isize) isize {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.QLatin1String_LastIndexOf6(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(from));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` ch: QChar `
    ///
    pub fn Count3(self: QLatin1String, ch: anytype) isize {
        comptime _ = @TypeOf(ch)._is_QChar;
        return qtc.QLatin1String_Count3(@ptrCast(self.ptr), @ptrCast(ch.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    pub fn ToShort(self: QLatin1String) i16 {
        return qtc.QLatin1String_ToShort(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toUShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    pub fn ToUShort(self: QLatin1String) u16 {
        return qtc.QLatin1String_ToUShort(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    pub fn ToInt(self: QLatin1String) i32 {
        return qtc.QLatin1String_ToInt(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    pub fn ToUInt(self: QLatin1String) u32 {
        return qtc.QLatin1String_ToUInt(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    pub fn ToLong(self: QLatin1String) isize {
        return qtc.QLatin1String_ToLong(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toULong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    pub fn ToULong(self: QLatin1String) usize {
        return qtc.QLatin1String_ToULong(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    pub fn ToLongLong(self: QLatin1String) isize {
        return qtc.QLatin1String_ToLongLong(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    pub fn ToULongLong(self: QLatin1String) usize {
        return qtc.QLatin1String_ToULongLong(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toFloat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    pub fn ToFloat(self: QLatin1String) f32 {
        return qtc.QLatin1String_ToFloat(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    pub fn ToDouble(self: QLatin1String) f64 {
        return qtc.QLatin1String_ToDouble(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    pub fn Begin(self: QLatin1String) [:0]const u8 {
        const _ret = qtc.QLatin1String_Begin(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#cbegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    pub fn Cbegin(self: QLatin1String) [:0]const u8 {
        const _ret = qtc.QLatin1String_Cbegin(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    pub fn End(self: QLatin1String) [:0]const u8 {
        const _ret = qtc.QLatin1String_End(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#cend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    pub fn Cend(self: QLatin1String) [:0]const u8 {
        const _ret = qtc.QLatin1String_Cend(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#max_size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    pub fn MaxSize(self: QLatin1String) isize {
        return qtc.QLatin1String_MaxSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#maxSize)
    ///
    pub fn MaxSize2() isize {
        return qtc.QLatin1String_MaxSize2();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#chop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` n: isize `
    ///
    pub fn Chop(self: QLatin1String, n: isize) void {
        qtc.QLatin1String_Chop(@ptrCast(self.ptr), @bitCast(n));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#truncate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` n: isize `
    ///
    pub fn Truncate(self: QLatin1String, n: isize) void {
        qtc.QLatin1String_Truncate(@ptrCast(self.ptr), @bitCast(n));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` c: QChar `
    ///
    /// ` from: isize `
    ///
    pub fn IndexOf24(self: QLatin1String, c: anytype, from: isize) isize {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.QLatin1String_IndexOf24(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(from));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` c: QChar `
    ///
    /// ` from: isize `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn IndexOf34(self: QLatin1String, c: anytype, from: isize, cs: i32) isize {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.QLatin1String_IndexOf34(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(from), @bitCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` c: QChar `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn Contains24(self: QLatin1String, c: anytype, cs: i32) bool {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.QLatin1String_Contains24(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#lastIndexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` c: QChar `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn LastIndexOf24(self: QLatin1String, c: anytype, cs: i32) isize {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.QLatin1String_LastIndexOf24(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#lastIndexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` c: QChar `
    ///
    /// ` from: isize `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn LastIndexOf34(self: QLatin1String, c: anytype, from: isize, cs: i32) isize {
        comptime _ = @TypeOf(c)._is_QChar;
        return qtc.QLatin1String_LastIndexOf34(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(from), @bitCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` ch: QChar `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn Count24(self: QLatin1String, ch: anytype, cs: i32) isize {
        comptime _ = @TypeOf(ch)._is_QChar;
        return qtc.QLatin1String_Count24(@ptrCast(self.ptr), @ptrCast(ch.ptr), @bitCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToShort1(self: QLatin1String, ok: *bool) i16 {
        return qtc.QLatin1String_ToShort1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToShort2(self: QLatin1String, ok: *bool, base: i32) i16 {
        return qtc.QLatin1String_ToShort2(@ptrCast(self.ptr), @ptrCast(ok), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toUShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToUShort1(self: QLatin1String, ok: *bool) u16 {
        return qtc.QLatin1String_ToUShort1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toUShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToUShort2(self: QLatin1String, ok: *bool, base: i32) u16 {
        return qtc.QLatin1String_ToUShort2(@ptrCast(self.ptr), @ptrCast(ok), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToInt1(self: QLatin1String, ok: *bool) i32 {
        return qtc.QLatin1String_ToInt1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToInt2(self: QLatin1String, ok: *bool, base: i32) i32 {
        return qtc.QLatin1String_ToInt2(@ptrCast(self.ptr), @ptrCast(ok), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToUInt1(self: QLatin1String, ok: *bool) u32 {
        return qtc.QLatin1String_ToUInt1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToUInt2(self: QLatin1String, ok: *bool, base: i32) u32 {
        return qtc.QLatin1String_ToUInt2(@ptrCast(self.ptr), @ptrCast(ok), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToLong1(self: QLatin1String, ok: *bool) isize {
        return qtc.QLatin1String_ToLong1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToLong2(self: QLatin1String, ok: *bool, base: i32) isize {
        return qtc.QLatin1String_ToLong2(@ptrCast(self.ptr), @ptrCast(ok), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toULong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToULong1(self: QLatin1String, ok: *bool) usize {
        return qtc.QLatin1String_ToULong1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toULong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToULong2(self: QLatin1String, ok: *bool, base: i32) usize {
        return qtc.QLatin1String_ToULong2(@ptrCast(self.ptr), @ptrCast(ok), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToLongLong1(self: QLatin1String, ok: *bool) isize {
        return qtc.QLatin1String_ToLongLong1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToLongLong2(self: QLatin1String, ok: *bool, base: i32) isize {
        return qtc.QLatin1String_ToLongLong2(@ptrCast(self.ptr), @ptrCast(ok), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToULongLong1(self: QLatin1String, ok: *bool) usize {
        return qtc.QLatin1String_ToULongLong1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToULongLong2(self: QLatin1String, ok: *bool, base: i32) usize {
        return qtc.QLatin1String_ToULongLong2(@ptrCast(self.ptr), @ptrCast(ok), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toFloat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToFloat1(self: QLatin1String, ok: *bool) f32 {
        return qtc.QLatin1String_ToFloat1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToDouble1(self: QLatin1String, ok: *bool) f64 {
        return qtc.QLatin1String_ToDouble1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#dtor.QLatin1String)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QLatin1String `
    ///
    pub fn Delete(self: QLatin1String) void {
        qtc.QLatin1String_Delete(@ptrCast(self.ptr));
    }
};
