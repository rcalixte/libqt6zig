const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qbytearrayview.html
pub const qbytearrayview = struct {
    /// New constructs a new QByteArrayView object.
    ///
    /// ``` other: []const u8 ```
    pub fn New(other: []const u8) QtC.QByteArrayView {
        return qtc.QByteArrayView_new(@ptrCast(@constCast(&other)));
    }

    /// New2 constructs a new QByteArrayView object and invalidates the source QByteArrayView object.
    ///
    /// ``` other: []const u8 ```
    pub fn New2(other: []const u8) QtC.QByteArrayView {
        return qtc.QByteArrayView_new2(@ptrCast(@constCast(&other)));
    }

    /// New3 constructs a new QByteArrayView object.
    ///
    ///
    pub fn New3() QtC.QByteArrayView {
        return qtc.QByteArrayView_new3();
    }

    /// New4 constructs a new QByteArrayView object.
    ///
    /// ``` param1: []const u8 ```
    pub fn New4(param1: []const u8) QtC.QByteArrayView {
        return qtc.QByteArrayView_new4(@ptrCast(@constCast(&param1)));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QByteArrayView, other: QtC.QByteArrayView ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QByteArrayView_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QByteArrayView, other: QtC.QByteArrayView ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QByteArrayView_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toByteArray)
    ///
    /// ``` self: QtC.QByteArrayView, allocator: std.mem.Allocator ```
    pub fn ToByteArray(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QByteArrayView_ToByteArray(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_bytearray));
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearrayview.ToByteArray: Memory allocation failed");
        for (0.._bytearray.len) |_i| {
            _ret[_i] = _bytearray.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#size)
    ///
    /// ``` self: QtC.QByteArrayView ```
    pub fn Size(self: ?*anyopaque) i64 {
        return qtc.QByteArrayView_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#data)
    ///
    /// ``` self: QtC.QByteArrayView ```
    pub fn Data(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QByteArrayView_Data(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#constData)
    ///
    /// ``` self: QtC.QByteArrayView ```
    pub fn ConstData(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QByteArrayView_ConstData(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#operator[])
    ///
    /// ``` self: QtC.QByteArrayView, n: i64 ```
    pub fn OperatorSubscript(self: ?*anyopaque, n: i64) i8 {
        return qtc.QByteArrayView_OperatorSubscript(@ptrCast(self), @intCast(n));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#at)
    ///
    /// ``` self: QtC.QByteArrayView, n: i64 ```
    pub fn At(self: ?*anyopaque, n: i64) i8 {
        return qtc.QByteArrayView_At(@ptrCast(self), @intCast(n));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#first)
    ///
    /// ``` self: QtC.QByteArrayView, n: i64, allocator: std.mem.Allocator ```
    pub fn First(self: ?*anyopaque, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QByteArrayView_First(@ptrCast(self), @intCast(n));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbytearrayview.First: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#last)
    ///
    /// ``` self: QtC.QByteArrayView, n: i64, allocator: std.mem.Allocator ```
    pub fn Last(self: ?*anyopaque, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QByteArrayView_Last(@ptrCast(self), @intCast(n));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbytearrayview.Last: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#sliced)
    ///
    /// ``` self: QtC.QByteArrayView, pos: i64, allocator: std.mem.Allocator ```
    pub fn Sliced(self: ?*anyopaque, pos: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QByteArrayView_Sliced(@ptrCast(self), @intCast(pos));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbytearrayview.Sliced: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#sliced)
    ///
    /// ``` self: QtC.QByteArrayView, pos: i64, n: i64, allocator: std.mem.Allocator ```
    pub fn Sliced2(self: ?*anyopaque, pos: i64, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QByteArrayView_Sliced2(@ptrCast(self), @intCast(pos), @intCast(n));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbytearrayview.Sliced2: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#chopped)
    ///
    /// ``` self: QtC.QByteArrayView, lenVal: i64, allocator: std.mem.Allocator ```
    pub fn Chopped(self: ?*anyopaque, lenVal: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QByteArrayView_Chopped(@ptrCast(self), @intCast(lenVal));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbytearrayview.Chopped: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#truncate)
    ///
    /// ``` self: QtC.QByteArrayView, n: i64 ```
    pub fn Truncate(self: ?*anyopaque, n: i64) void {
        qtc.QByteArrayView_Truncate(@ptrCast(self), @intCast(n));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#chop)
    ///
    /// ``` self: QtC.QByteArrayView, n: i64 ```
    pub fn Chop(self: ?*anyopaque, n: i64) void {
        qtc.QByteArrayView_Chop(@ptrCast(self), @intCast(n));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#trimmed)
    ///
    /// ``` self: QtC.QByteArrayView, allocator: std.mem.Allocator ```
    pub fn Trimmed(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QByteArrayView_Trimmed(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbytearrayview.Trimmed: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toShort)
    ///
    /// ``` self: QtC.QByteArrayView ```
    pub fn ToShort(self: ?*anyopaque) i16 {
        return qtc.QByteArrayView_ToShort(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toUShort)
    ///
    /// ``` self: QtC.QByteArrayView ```
    pub fn ToUShort(self: ?*anyopaque) u16 {
        return qtc.QByteArrayView_ToUShort(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toInt)
    ///
    /// ``` self: QtC.QByteArrayView ```
    pub fn ToInt(self: ?*anyopaque) i32 {
        return qtc.QByteArrayView_ToInt(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toUInt)
    ///
    /// ``` self: QtC.QByteArrayView ```
    pub fn ToUInt(self: ?*anyopaque) u32 {
        return qtc.QByteArrayView_ToUInt(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toLong)
    ///
    /// ``` self: QtC.QByteArrayView ```
    pub fn ToLong(self: ?*anyopaque) i64 {
        return qtc.QByteArrayView_ToLong(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toULong)
    ///
    /// ``` self: QtC.QByteArrayView ```
    pub fn ToULong(self: ?*anyopaque) u64 {
        return qtc.QByteArrayView_ToULong(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toLongLong)
    ///
    /// ``` self: QtC.QByteArrayView ```
    pub fn ToLongLong(self: ?*anyopaque) i64 {
        return qtc.QByteArrayView_ToLongLong(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toULongLong)
    ///
    /// ``` self: QtC.QByteArrayView ```
    pub fn ToULongLong(self: ?*anyopaque) u64 {
        return qtc.QByteArrayView_ToULongLong(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toFloat)
    ///
    /// ``` self: QtC.QByteArrayView ```
    pub fn ToFloat(self: ?*anyopaque) f32 {
        return qtc.QByteArrayView_ToFloat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toDouble)
    ///
    /// ``` self: QtC.QByteArrayView ```
    pub fn ToDouble(self: ?*anyopaque) f64 {
        return qtc.QByteArrayView_ToDouble(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#startsWith)
    ///
    /// ``` self: QtC.QByteArrayView, other: []const u8 ```
    pub fn StartsWith(self: ?*anyopaque, other: []const u8) bool {
        return qtc.QByteArrayView_StartsWith(@ptrCast(self), @ptrCast(@constCast(&other)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#startsWith)
    ///
    /// ``` self: QtC.QByteArrayView, c: i8 ```
    pub fn StartsWithWithChar(self: ?*anyopaque, c: i8) bool {
        return qtc.QByteArrayView_StartsWithWithChar(@ptrCast(self), @intCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#endsWith)
    ///
    /// ``` self: QtC.QByteArrayView, other: []const u8 ```
    pub fn EndsWith(self: ?*anyopaque, other: []const u8) bool {
        return qtc.QByteArrayView_EndsWith(@ptrCast(self), @ptrCast(@constCast(&other)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#endsWith)
    ///
    /// ``` self: QtC.QByteArrayView, c: i8 ```
    pub fn EndsWithWithChar(self: ?*anyopaque, c: i8) bool {
        return qtc.QByteArrayView_EndsWithWithChar(@ptrCast(self), @intCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#indexOf)
    ///
    /// ``` self: QtC.QByteArrayView, a: []const u8 ```
    pub fn IndexOf(self: ?*anyopaque, a: []const u8) i64 {
        return qtc.QByteArrayView_IndexOf(@ptrCast(self), @ptrCast(@constCast(&a)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#indexOf)
    ///
    /// ``` self: QtC.QByteArrayView, ch: i8 ```
    pub fn IndexOfWithCh(self: ?*anyopaque, ch: i8) i64 {
        return qtc.QByteArrayView_IndexOfWithCh(@ptrCast(self), @intCast(ch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#contains)
    ///
    /// ``` self: QtC.QByteArrayView, a: []const u8 ```
    pub fn Contains(self: ?*anyopaque, a: []const u8) bool {
        return qtc.QByteArrayView_Contains(@ptrCast(self), @ptrCast(@constCast(&a)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#contains)
    ///
    /// ``` self: QtC.QByteArrayView, c: i8 ```
    pub fn ContainsWithChar(self: ?*anyopaque, c: i8) bool {
        return qtc.QByteArrayView_ContainsWithChar(@ptrCast(self), @intCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#lastIndexOf)
    ///
    /// ``` self: QtC.QByteArrayView, a: []const u8 ```
    pub fn LastIndexOf(self: ?*anyopaque, a: []const u8) i64 {
        return qtc.QByteArrayView_LastIndexOf(@ptrCast(self), @ptrCast(@constCast(&a)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#lastIndexOf)
    ///
    /// ``` self: QtC.QByteArrayView, a: []const u8, from: i64 ```
    pub fn LastIndexOf2(self: ?*anyopaque, a: []const u8, from: i64) i64 {
        return qtc.QByteArrayView_LastIndexOf2(@ptrCast(self), @ptrCast(@constCast(&a)), @intCast(from));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#lastIndexOf)
    ///
    /// ``` self: QtC.QByteArrayView, ch: i8 ```
    pub fn LastIndexOfWithCh(self: ?*anyopaque, ch: i8) i64 {
        return qtc.QByteArrayView_LastIndexOfWithCh(@ptrCast(self), @intCast(ch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#count)
    ///
    /// ``` self: QtC.QByteArrayView, a: []const u8 ```
    pub fn Count(self: ?*anyopaque, a: []const u8) i64 {
        return qtc.QByteArrayView_Count(@ptrCast(self), @ptrCast(@constCast(&a)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#count)
    ///
    /// ``` self: QtC.QByteArrayView, ch: i8 ```
    pub fn CountWithCh(self: ?*anyopaque, ch: i8) i64 {
        return qtc.QByteArrayView_CountWithCh(@ptrCast(self), @intCast(ch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#compare)
    ///
    /// ``` self: QtC.QByteArrayView, a: []const u8 ```
    pub fn Compare(self: ?*anyopaque, a: []const u8) i32 {
        return qtc.QByteArrayView_Compare(@ptrCast(self), @ptrCast(@constCast(&a)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#isValidUtf8)
    ///
    /// ``` self: QtC.QByteArrayView ```
    pub fn IsValidUtf8(self: ?*anyopaque) bool {
        return qtc.QByteArrayView_IsValidUtf8(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#begin)
    ///
    /// ``` self: QtC.QByteArrayView ```
    pub fn Begin(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QByteArrayView_Begin(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#end)
    ///
    /// ``` self: QtC.QByteArrayView ```
    pub fn End(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QByteArrayView_End(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#cbegin)
    ///
    /// ``` self: QtC.QByteArrayView ```
    pub fn Cbegin(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QByteArrayView_Cbegin(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#cend)
    ///
    /// ``` self: QtC.QByteArrayView ```
    pub fn Cend(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QByteArrayView_Cend(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#empty)
    ///
    /// ``` self: QtC.QByteArrayView ```
    pub fn Empty(self: ?*anyopaque) bool {
        return qtc.QByteArrayView_Empty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#front)
    ///
    /// ``` self: QtC.QByteArrayView ```
    pub fn Front(self: ?*anyopaque) i8 {
        return qtc.QByteArrayView_Front(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#back)
    ///
    /// ``` self: QtC.QByteArrayView ```
    pub fn Back(self: ?*anyopaque) i8 {
        return qtc.QByteArrayView_Back(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#isNull)
    ///
    /// ``` self: QtC.QByteArrayView ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QByteArrayView_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#isEmpty)
    ///
    /// ``` self: QtC.QByteArrayView ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QByteArrayView_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#length)
    ///
    /// ``` self: QtC.QByteArrayView ```
    pub fn Length(self: ?*anyopaque) i64 {
        return qtc.QByteArrayView_Length(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#first)
    ///
    /// ``` self: QtC.QByteArrayView ```
    pub fn First2(self: ?*anyopaque) i8 {
        return qtc.QByteArrayView_First2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#last)
    ///
    /// ``` self: QtC.QByteArrayView ```
    pub fn Last2(self: ?*anyopaque) i8 {
        return qtc.QByteArrayView_Last2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toShort)
    ///
    /// ``` self: QtC.QByteArrayView, ok: bool ```
    pub fn ToShort1(self: ?*anyopaque, ok: ?*anyopaque) i16 {
        return qtc.QByteArrayView_ToShort1(@ptrCast(self), @ptrCast(ok));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toShort)
    ///
    /// ``` self: QtC.QByteArrayView, ok: bool, base: i32 ```
    pub fn ToShort2(self: ?*anyopaque, ok: ?*anyopaque, base: i32) i16 {
        return qtc.QByteArrayView_ToShort2(@ptrCast(self), @ptrCast(ok), @intCast(base));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toUShort)
    ///
    /// ``` self: QtC.QByteArrayView, ok: bool ```
    pub fn ToUShort1(self: ?*anyopaque, ok: ?*anyopaque) u16 {
        return qtc.QByteArrayView_ToUShort1(@ptrCast(self), @ptrCast(ok));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toUShort)
    ///
    /// ``` self: QtC.QByteArrayView, ok: bool, base: i32 ```
    pub fn ToUShort2(self: ?*anyopaque, ok: ?*anyopaque, base: i32) u16 {
        return qtc.QByteArrayView_ToUShort2(@ptrCast(self), @ptrCast(ok), @intCast(base));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toInt)
    ///
    /// ``` self: QtC.QByteArrayView, ok: bool ```
    pub fn ToInt1(self: ?*anyopaque, ok: ?*anyopaque) i32 {
        return qtc.QByteArrayView_ToInt1(@ptrCast(self), @ptrCast(ok));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toInt)
    ///
    /// ``` self: QtC.QByteArrayView, ok: bool, base: i32 ```
    pub fn ToInt2(self: ?*anyopaque, ok: ?*anyopaque, base: i32) i32 {
        return qtc.QByteArrayView_ToInt2(@ptrCast(self), @ptrCast(ok), @intCast(base));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toUInt)
    ///
    /// ``` self: QtC.QByteArrayView, ok: bool ```
    pub fn ToUInt1(self: ?*anyopaque, ok: ?*anyopaque) u32 {
        return qtc.QByteArrayView_ToUInt1(@ptrCast(self), @ptrCast(ok));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toUInt)
    ///
    /// ``` self: QtC.QByteArrayView, ok: bool, base: i32 ```
    pub fn ToUInt2(self: ?*anyopaque, ok: ?*anyopaque, base: i32) u32 {
        return qtc.QByteArrayView_ToUInt2(@ptrCast(self), @ptrCast(ok), @intCast(base));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toLong)
    ///
    /// ``` self: QtC.QByteArrayView, ok: bool ```
    pub fn ToLong1(self: ?*anyopaque, ok: ?*anyopaque) i64 {
        return qtc.QByteArrayView_ToLong1(@ptrCast(self), @ptrCast(ok));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toLong)
    ///
    /// ``` self: QtC.QByteArrayView, ok: bool, base: i32 ```
    pub fn ToLong2(self: ?*anyopaque, ok: ?*anyopaque, base: i32) i64 {
        return qtc.QByteArrayView_ToLong2(@ptrCast(self), @ptrCast(ok), @intCast(base));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toULong)
    ///
    /// ``` self: QtC.QByteArrayView, ok: bool ```
    pub fn ToULong1(self: ?*anyopaque, ok: ?*anyopaque) u64 {
        return qtc.QByteArrayView_ToULong1(@ptrCast(self), @ptrCast(ok));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toULong)
    ///
    /// ``` self: QtC.QByteArrayView, ok: bool, base: i32 ```
    pub fn ToULong2(self: ?*anyopaque, ok: ?*anyopaque, base: i32) u64 {
        return qtc.QByteArrayView_ToULong2(@ptrCast(self), @ptrCast(ok), @intCast(base));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toLongLong)
    ///
    /// ``` self: QtC.QByteArrayView, ok: bool ```
    pub fn ToLongLong1(self: ?*anyopaque, ok: ?*anyopaque) i64 {
        return qtc.QByteArrayView_ToLongLong1(@ptrCast(self), @ptrCast(ok));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toLongLong)
    ///
    /// ``` self: QtC.QByteArrayView, ok: bool, base: i32 ```
    pub fn ToLongLong2(self: ?*anyopaque, ok: ?*anyopaque, base: i32) i64 {
        return qtc.QByteArrayView_ToLongLong2(@ptrCast(self), @ptrCast(ok), @intCast(base));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toULongLong)
    ///
    /// ``` self: QtC.QByteArrayView, ok: bool ```
    pub fn ToULongLong1(self: ?*anyopaque, ok: ?*anyopaque) u64 {
        return qtc.QByteArrayView_ToULongLong1(@ptrCast(self), @ptrCast(ok));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toULongLong)
    ///
    /// ``` self: QtC.QByteArrayView, ok: bool, base: i32 ```
    pub fn ToULongLong2(self: ?*anyopaque, ok: ?*anyopaque, base: i32) u64 {
        return qtc.QByteArrayView_ToULongLong2(@ptrCast(self), @ptrCast(ok), @intCast(base));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toFloat)
    ///
    /// ``` self: QtC.QByteArrayView, ok: bool ```
    pub fn ToFloat1(self: ?*anyopaque, ok: ?*anyopaque) f32 {
        return qtc.QByteArrayView_ToFloat1(@ptrCast(self), @ptrCast(ok));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toDouble)
    ///
    /// ``` self: QtC.QByteArrayView, ok: bool ```
    pub fn ToDouble1(self: ?*anyopaque, ok: ?*anyopaque) f64 {
        return qtc.QByteArrayView_ToDouble1(@ptrCast(self), @ptrCast(ok));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#indexOf)
    ///
    /// ``` self: QtC.QByteArrayView, a: []const u8, from: i64 ```
    pub fn IndexOf2(self: ?*anyopaque, a: []const u8, from: i64) i64 {
        return qtc.QByteArrayView_IndexOf2(@ptrCast(self), @ptrCast(@constCast(&a)), @intCast(from));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#indexOf)
    ///
    /// ``` self: QtC.QByteArrayView, ch: i8, from: i64 ```
    pub fn IndexOf22(self: ?*anyopaque, ch: i8, from: i64) i64 {
        return qtc.QByteArrayView_IndexOf22(@ptrCast(self), @intCast(ch), @intCast(from));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#lastIndexOf)
    ///
    /// ``` self: QtC.QByteArrayView, ch: i8, from: i64 ```
    pub fn LastIndexOf22(self: ?*anyopaque, ch: i8, from: i64) i64 {
        return qtc.QByteArrayView_LastIndexOf22(@ptrCast(self), @intCast(ch), @intCast(from));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#compare)
    ///
    /// ``` self: QtC.QByteArrayView, a: []const u8, cs: qnamespace_enums.CaseSensitivity ```
    pub fn Compare2(self: ?*anyopaque, a: []const u8, cs: i64) i32 {
        return qtc.QByteArrayView_Compare2(@ptrCast(self), @ptrCast(@constCast(&a)), @intCast(cs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#dtor.QByteArrayView)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QByteArrayView ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QByteArrayView_Delete(@ptrCast(self));
    }
};
