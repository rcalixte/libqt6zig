const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html)
pub const qlatin1string = struct {
    /// New constructs a new QLatin1String object.
    ///
    pub fn New() QtC.QLatin1String {
        return qtc.QLatin1String_new();
    }

    /// New2 constructs a new QLatin1String object.
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn New2(s: [:0]const u8) QtC.QLatin1String {
        const s_Cstring = s.ptr;

        return qtc.QLatin1String_new2(s_Cstring);
    }

    /// New3 constructs a new QLatin1String object.
    ///
    /// ## Parameter(s):
    ///
    /// ` f: [:0]const u8 `
    ///
    /// ` l: [:0]const u8 `
    ///
    pub fn New3(f: [:0]const u8, l: [:0]const u8) QtC.QLatin1String {
        const f_Cstring = f.ptr;
        const l_Cstring = l.ptr;

        return qtc.QLatin1String_new3(f_Cstring, l_Cstring);
    }

    /// New4 constructs a new QLatin1String object.
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` sz: i64 `
    ///
    pub fn New4(s: [:0]const u8, sz: i64) QtC.QLatin1String {
        const s_Cstring = s.ptr;

        return qtc.QLatin1String_new4(s_Cstring, @intCast(sz));
    }

    /// New5 constructs a new QLatin1String object.
    ///
    /// ## Parameter(s):
    ///
    /// ` s: []u8 `
    ///
    pub fn New5(s: []u8) QtC.QLatin1String {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };

        return qtc.QLatin1String_new5(s_str);
    }

    /// New6 constructs a new QLatin1String object.
    ///
    /// ## Parameter(s):
    ///
    /// ` s: []const u8 `
    ///
    pub fn New6(s: []const u8) QtC.QLatin1String {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };

        return qtc.QLatin1String_new6(s_str);
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` other: QtC.QLatin1String `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLatin1String_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` other: QtC.QLatin1String `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLatin1String_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLatin1String_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlatin1string.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#latin1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    pub fn Latin1(self: ?*anyopaque) [:0]const u8 {
        const _ret = qtc.QLatin1String_Latin1(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    pub fn Size(self: ?*anyopaque) i64 {
        return qtc.QLatin1String_Size(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    pub fn Data(self: ?*anyopaque) [:0]const u8 {
        const _ret = qtc.QLatin1String_Data(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#constData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    pub fn ConstData(self: ?*anyopaque) [:0]const u8 {
        const _ret = qtc.QLatin1String_ConstData(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#constBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    pub fn ConstBegin(self: ?*anyopaque) [:0]const u8 {
        const _ret = qtc.QLatin1String_ConstBegin(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#constEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    pub fn ConstEnd(self: ?*anyopaque) [:0]const u8 {
        const _ret = qtc.QLatin1String_ConstEnd(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#first)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    pub fn First(self: ?*anyopaque) QtC.QLatin1Char {
        return qtc.QLatin1String_First(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#last)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    pub fn Last(self: ?*anyopaque) QtC.QLatin1Char {
        return qtc.QLatin1String_Last(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    pub fn Length(self: ?*anyopaque) i64 {
        return qtc.QLatin1String_Length(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QLatin1String_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QLatin1String_IsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#empty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    pub fn Empty(self: ?*anyopaque) bool {
        return qtc.QLatin1String_Empty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#at)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` i: i64 `
    ///
    pub fn At(self: ?*anyopaque, i: i64) QtC.QLatin1Char {
        return qtc.QLatin1String_At(@ptrCast(self), @intCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` i: i64 `
    ///
    pub fn OperatorSubscript(self: ?*anyopaque, i: i64) QtC.QLatin1Char {
        return qtc.QLatin1String_OperatorSubscript(@ptrCast(self), @intCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#front)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    pub fn Front(self: ?*anyopaque) QtC.QLatin1Char {
        return qtc.QLatin1String_Front(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#back)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    pub fn Back(self: ?*anyopaque) QtC.QLatin1Char {
        return qtc.QLatin1String_Back(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` c: QtC.QChar `
    ///
    pub fn Compare4(self: ?*anyopaque, c: QtC.QChar) i32 {
        return qtc.QLatin1String_Compare4(@ptrCast(self), @ptrCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` c: QtC.QChar `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn Compare5(self: ?*anyopaque, c: QtC.QChar, cs: i32) i32 {
        return qtc.QLatin1String_Compare5(@ptrCast(self), @ptrCast(c), @intCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#startsWith)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` c: QtC.QChar `
    ///
    pub fn StartsWith3(self: ?*anyopaque, c: QtC.QChar) bool {
        return qtc.QLatin1String_StartsWith3(@ptrCast(self), @ptrCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#startsWith)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` c: QtC.QChar `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn StartsWith4(self: ?*anyopaque, c: QtC.QChar, cs: i32) bool {
        return qtc.QLatin1String_StartsWith4(@ptrCast(self), @ptrCast(c), @intCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#endsWith)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` c: QtC.QChar `
    ///
    pub fn EndsWith3(self: ?*anyopaque, c: QtC.QChar) bool {
        return qtc.QLatin1String_EndsWith3(@ptrCast(self), @ptrCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#endsWith)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` c: QtC.QChar `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn EndsWith4(self: ?*anyopaque, c: QtC.QChar, cs: i32) bool {
        return qtc.QLatin1String_EndsWith4(@ptrCast(self), @ptrCast(c), @intCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` c: QtC.QChar `
    ///
    pub fn IndexOf3(self: ?*anyopaque, c: QtC.QChar) i64 {
        return qtc.QLatin1String_IndexOf3(@ptrCast(self), @ptrCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` c: QtC.QChar `
    ///
    pub fn Contains3(self: ?*anyopaque, c: QtC.QChar) bool {
        return qtc.QLatin1String_Contains3(@ptrCast(self), @ptrCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#lastIndexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` c: QtC.QChar `
    ///
    pub fn LastIndexOf5(self: ?*anyopaque, c: QtC.QChar) i64 {
        return qtc.QLatin1String_LastIndexOf5(@ptrCast(self), @ptrCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#lastIndexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` c: QtC.QChar `
    ///
    /// ` from: i64 `
    ///
    pub fn LastIndexOf6(self: ?*anyopaque, c: QtC.QChar, from: i64) i64 {
        return qtc.QLatin1String_LastIndexOf6(@ptrCast(self), @ptrCast(c), @intCast(from));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` ch: QtC.QChar `
    ///
    pub fn Count3(self: ?*anyopaque, ch: QtC.QChar) i64 {
        return qtc.QLatin1String_Count3(@ptrCast(self), @ptrCast(ch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    pub fn ToShort(self: ?*anyopaque) i16 {
        return qtc.QLatin1String_ToShort(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toUShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    pub fn ToUShort(self: ?*anyopaque) u16 {
        return qtc.QLatin1String_ToUShort(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    pub fn ToInt(self: ?*anyopaque) i32 {
        return qtc.QLatin1String_ToInt(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    pub fn ToUInt(self: ?*anyopaque) u32 {
        return qtc.QLatin1String_ToUInt(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    pub fn ToLong(self: ?*anyopaque) i64 {
        return qtc.QLatin1String_ToLong(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toULong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    pub fn ToULong(self: ?*anyopaque) u64 {
        return qtc.QLatin1String_ToULong(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    pub fn ToLongLong(self: ?*anyopaque) i64 {
        return qtc.QLatin1String_ToLongLong(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    pub fn ToULongLong(self: ?*anyopaque) u64 {
        return qtc.QLatin1String_ToULongLong(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toFloat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    pub fn ToFloat(self: ?*anyopaque) f32 {
        return qtc.QLatin1String_ToFloat(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    pub fn ToDouble(self: ?*anyopaque) f64 {
        return qtc.QLatin1String_ToDouble(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    pub fn Begin(self: ?*anyopaque) [:0]const u8 {
        const _ret = qtc.QLatin1String_Begin(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#cbegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    pub fn Cbegin(self: ?*anyopaque) [:0]const u8 {
        const _ret = qtc.QLatin1String_Cbegin(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    pub fn End(self: ?*anyopaque) [:0]const u8 {
        const _ret = qtc.QLatin1String_End(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#cend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    pub fn Cend(self: ?*anyopaque) [:0]const u8 {
        const _ret = qtc.QLatin1String_Cend(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#max_size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    pub fn MaxSize(self: ?*anyopaque) i64 {
        return qtc.QLatin1String_MaxSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#maxSize)
    ///
    pub fn MaxSize2() i64 {
        return qtc.QLatin1String_MaxSize2();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#chop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` n: i64 `
    ///
    pub fn Chop(self: ?*anyopaque, n: i64) void {
        qtc.QLatin1String_Chop(@ptrCast(self), @intCast(n));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#truncate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` n: i64 `
    ///
    pub fn Truncate(self: ?*anyopaque, n: i64) void {
        qtc.QLatin1String_Truncate(@ptrCast(self), @intCast(n));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` c: QtC.QChar `
    ///
    /// ` from: i64 `
    ///
    pub fn IndexOf24(self: ?*anyopaque, c: QtC.QChar, from: i64) i64 {
        return qtc.QLatin1String_IndexOf24(@ptrCast(self), @ptrCast(c), @intCast(from));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` c: QtC.QChar `
    ///
    /// ` from: i64 `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn IndexOf34(self: ?*anyopaque, c: QtC.QChar, from: i64, cs: i32) i64 {
        return qtc.QLatin1String_IndexOf34(@ptrCast(self), @ptrCast(c), @intCast(from), @intCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` c: QtC.QChar `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn Contains24(self: ?*anyopaque, c: QtC.QChar, cs: i32) bool {
        return qtc.QLatin1String_Contains24(@ptrCast(self), @ptrCast(c), @intCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#lastIndexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` c: QtC.QChar `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn LastIndexOf24(self: ?*anyopaque, c: QtC.QChar, cs: i32) i64 {
        return qtc.QLatin1String_LastIndexOf24(@ptrCast(self), @ptrCast(c), @intCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#lastIndexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` c: QtC.QChar `
    ///
    /// ` from: i64 `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn LastIndexOf34(self: ?*anyopaque, c: QtC.QChar, from: i64, cs: i32) i64 {
        return qtc.QLatin1String_LastIndexOf34(@ptrCast(self), @ptrCast(c), @intCast(from), @intCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` ch: QtC.QChar `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn Count24(self: ?*anyopaque, ch: QtC.QChar, cs: i32) i64 {
        return qtc.QLatin1String_Count24(@ptrCast(self), @ptrCast(ch), @intCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToShort1(self: ?*anyopaque, ok: *bool) i16 {
        return qtc.QLatin1String_ToShort1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToShort2(self: ?*anyopaque, ok: *bool, base: i32) i16 {
        return qtc.QLatin1String_ToShort2(@ptrCast(self), @ptrCast(ok), @intCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toUShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToUShort1(self: ?*anyopaque, ok: *bool) u16 {
        return qtc.QLatin1String_ToUShort1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toUShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToUShort2(self: ?*anyopaque, ok: *bool, base: i32) u16 {
        return qtc.QLatin1String_ToUShort2(@ptrCast(self), @ptrCast(ok), @intCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToInt1(self: ?*anyopaque, ok: *bool) i32 {
        return qtc.QLatin1String_ToInt1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToInt2(self: ?*anyopaque, ok: *bool, base: i32) i32 {
        return qtc.QLatin1String_ToInt2(@ptrCast(self), @ptrCast(ok), @intCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToUInt1(self: ?*anyopaque, ok: *bool) u32 {
        return qtc.QLatin1String_ToUInt1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToUInt2(self: ?*anyopaque, ok: *bool, base: i32) u32 {
        return qtc.QLatin1String_ToUInt2(@ptrCast(self), @ptrCast(ok), @intCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToLong1(self: ?*anyopaque, ok: *bool) i64 {
        return qtc.QLatin1String_ToLong1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToLong2(self: ?*anyopaque, ok: *bool, base: i32) i64 {
        return qtc.QLatin1String_ToLong2(@ptrCast(self), @ptrCast(ok), @intCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toULong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToULong1(self: ?*anyopaque, ok: *bool) u64 {
        return qtc.QLatin1String_ToULong1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toULong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToULong2(self: ?*anyopaque, ok: *bool, base: i32) u64 {
        return qtc.QLatin1String_ToULong2(@ptrCast(self), @ptrCast(ok), @intCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToLongLong1(self: ?*anyopaque, ok: *bool) i64 {
        return qtc.QLatin1String_ToLongLong1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToLongLong2(self: ?*anyopaque, ok: *bool, base: i32) i64 {
        return qtc.QLatin1String_ToLongLong2(@ptrCast(self), @ptrCast(ok), @intCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToULongLong1(self: ?*anyopaque, ok: *bool) u64 {
        return qtc.QLatin1String_ToULongLong1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToULongLong2(self: ?*anyopaque, ok: *bool, base: i32) u64 {
        return qtc.QLatin1String_ToULongLong2(@ptrCast(self), @ptrCast(ok), @intCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toFloat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToFloat1(self: ?*anyopaque, ok: *bool) f32 {
        return qtc.QLatin1String_ToFloat1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1String `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToDouble1(self: ?*anyopaque, ok: *bool) f64 {
        return qtc.QLatin1String_ToDouble1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#dtor.QLatin1String)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QLatin1String `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QLatin1String_Delete(@ptrCast(self));
    }
};
