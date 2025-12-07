const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html)
pub const qbytearrayview = struct {
    /// New constructs a new QByteArrayView object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: []const u8 `
    ///
    pub fn New(other: []const u8) QtC.QByteArrayView {
        const other_str = qtc.libqt_string{
            .len = other.len,
            .data = other.ptr,
        };

        return qtc.QByteArrayView_new(other_str);
    }

    /// New2 constructs a new QByteArrayView object and invalidates the source QByteArrayView object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: []const u8 `
    ///
    pub fn New2(other: []const u8) QtC.QByteArrayView {
        const other_str = qtc.libqt_string{
            .len = other.len,
            .data = other.ptr,
        };

        return qtc.QByteArrayView_new2(other_str);
    }

    /// New3 constructs a new QByteArrayView object.
    ///
    pub fn New3() QtC.QByteArrayView {
        return qtc.QByteArrayView_new3();
    }

    /// New4 constructs a new QByteArrayView object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    pub fn New4(param1: []const u8) QtC.QByteArrayView {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };

        return qtc.QByteArrayView_new4(param1_str);
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` other: QtC.QByteArrayView `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QByteArrayView_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` other: QtC.QByteArrayView `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QByteArrayView_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToByteArray(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArrayView_ToByteArray(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearrayview.ToByteArray: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    pub fn Size(self: ?*anyopaque) i64 {
        return qtc.QByteArrayView_Size(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    pub fn Data(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QByteArrayView_Data(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#constData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    pub fn ConstData(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QByteArrayView_ConstData(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` n: i64 `
    ///
    pub fn OperatorSubscript(self: ?*anyopaque, n: i64) u8 {
        return qtc.QByteArrayView_OperatorSubscript(@ptrCast(self), @intCast(n));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#at)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` n: i64 `
    ///
    pub fn At(self: ?*anyopaque, n: i64) u8 {
        return qtc.QByteArrayView_At(@ptrCast(self), @intCast(n));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#first)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` n: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn First(self: ?*anyopaque, n: i64, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QByteArrayView_First(@ptrCast(self), @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbytearrayview.First: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#last)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` n: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Last(self: ?*anyopaque, n: i64, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QByteArrayView_Last(@ptrCast(self), @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbytearrayview.Last: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#sliced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` pos: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Sliced(self: ?*anyopaque, pos: i64, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QByteArrayView_Sliced(@ptrCast(self), @intCast(pos));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbytearrayview.Sliced: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#sliced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` pos: i64 `
    ///
    /// ` n: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Sliced2(self: ?*anyopaque, pos: i64, n: i64, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QByteArrayView_Sliced2(@ptrCast(self), @intCast(pos), @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbytearrayview.Sliced2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#slice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` pos: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Slice(self: ?*anyopaque, pos: i64, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QByteArrayView_Slice(@ptrCast(self), @intCast(pos));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbytearrayview.Slice: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#slice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` pos: i64 `
    ///
    /// ` n: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Slice2(self: ?*anyopaque, pos: i64, n: i64, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QByteArrayView_Slice2(@ptrCast(self), @intCast(pos), @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbytearrayview.Slice2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#chopped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` lenVal: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Chopped(self: ?*anyopaque, lenVal: i64, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QByteArrayView_Chopped(@ptrCast(self), @intCast(lenVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbytearrayview.Chopped: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#left)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` n: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Left(self: ?*anyopaque, n: i64, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QByteArrayView_Left(@ptrCast(self), @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbytearrayview.Left: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#right)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` n: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Right(self: ?*anyopaque, n: i64, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QByteArrayView_Right(@ptrCast(self), @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbytearrayview.Right: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#mid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` pos: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Mid(self: ?*anyopaque, pos: i64, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QByteArrayView_Mid(@ptrCast(self), @intCast(pos));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbytearrayview.Mid: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#truncate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` n: i64 `
    ///
    pub fn Truncate(self: ?*anyopaque, n: i64) void {
        qtc.QByteArrayView_Truncate(@ptrCast(self), @intCast(n));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#chop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` n: i64 `
    ///
    pub fn Chop(self: ?*anyopaque, n: i64) void {
        qtc.QByteArrayView_Chop(@ptrCast(self), @intCast(n));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#trimmed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Trimmed(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QByteArrayView_Trimmed(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbytearrayview.Trimmed: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    pub fn ToShort(self: ?*anyopaque) i16 {
        return qtc.QByteArrayView_ToShort(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toUShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    pub fn ToUShort(self: ?*anyopaque) u16 {
        return qtc.QByteArrayView_ToUShort(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    pub fn ToInt(self: ?*anyopaque) i32 {
        return qtc.QByteArrayView_ToInt(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    pub fn ToUInt(self: ?*anyopaque) u32 {
        return qtc.QByteArrayView_ToUInt(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    pub fn ToLong(self: ?*anyopaque) i64 {
        return qtc.QByteArrayView_ToLong(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toULong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    pub fn ToULong(self: ?*anyopaque) u64 {
        return qtc.QByteArrayView_ToULong(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    pub fn ToLongLong(self: ?*anyopaque) i64 {
        return qtc.QByteArrayView_ToLongLong(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    pub fn ToULongLong(self: ?*anyopaque) u64 {
        return qtc.QByteArrayView_ToULongLong(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toFloat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    pub fn ToFloat(self: ?*anyopaque) f32 {
        return qtc.QByteArrayView_ToFloat(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    pub fn ToDouble(self: ?*anyopaque) f64 {
        return qtc.QByteArrayView_ToDouble(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#startsWith)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` other: []const u8 `
    ///
    pub fn StartsWith(self: ?*anyopaque, other: []const u8) bool {
        const other_str = qtc.libqt_string{
            .len = other.len,
            .data = other.ptr,
        };
        return qtc.QByteArrayView_StartsWith(@ptrCast(self), other_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#startsWith)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` c: u8 `
    ///
    pub fn StartsWith2(self: ?*anyopaque, c: u8) bool {
        return qtc.QByteArrayView_StartsWith2(@ptrCast(self), @intCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#endsWith)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` other: []const u8 `
    ///
    pub fn EndsWith(self: ?*anyopaque, other: []const u8) bool {
        const other_str = qtc.libqt_string{
            .len = other.len,
            .data = other.ptr,
        };
        return qtc.QByteArrayView_EndsWith(@ptrCast(self), other_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#endsWith)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` c: u8 `
    ///
    pub fn EndsWith2(self: ?*anyopaque, c: u8) bool {
        return qtc.QByteArrayView_EndsWith2(@ptrCast(self), @intCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` a: []const u8 `
    ///
    pub fn IndexOf(self: ?*anyopaque, a: []const u8) i64 {
        const a_str = qtc.libqt_string{
            .len = a.len,
            .data = a.ptr,
        };
        return qtc.QByteArrayView_IndexOf(@ptrCast(self), a_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` ch: u8 `
    ///
    pub fn IndexOf2(self: ?*anyopaque, ch: u8) i64 {
        return qtc.QByteArrayView_IndexOf2(@ptrCast(self), @intCast(ch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` a: []const u8 `
    ///
    pub fn Contains(self: ?*anyopaque, a: []const u8) bool {
        const a_str = qtc.libqt_string{
            .len = a.len,
            .data = a.ptr,
        };
        return qtc.QByteArrayView_Contains(@ptrCast(self), a_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` c: u8 `
    ///
    pub fn Contains2(self: ?*anyopaque, c: u8) bool {
        return qtc.QByteArrayView_Contains2(@ptrCast(self), @intCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#lastIndexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` a: []const u8 `
    ///
    pub fn LastIndexOf(self: ?*anyopaque, a: []const u8) i64 {
        const a_str = qtc.libqt_string{
            .len = a.len,
            .data = a.ptr,
        };
        return qtc.QByteArrayView_LastIndexOf(@ptrCast(self), a_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#lastIndexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` a: []const u8 `
    ///
    /// ` from: i64 `
    ///
    pub fn LastIndexOf2(self: ?*anyopaque, a: []const u8, from: i64) i64 {
        const a_str = qtc.libqt_string{
            .len = a.len,
            .data = a.ptr,
        };
        return qtc.QByteArrayView_LastIndexOf2(@ptrCast(self), a_str, @intCast(from));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#lastIndexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` ch: u8 `
    ///
    pub fn LastIndexOf3(self: ?*anyopaque, ch: u8) i64 {
        return qtc.QByteArrayView_LastIndexOf3(@ptrCast(self), @intCast(ch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` a: []const u8 `
    ///
    pub fn Count(self: ?*anyopaque, a: []const u8) i64 {
        const a_str = qtc.libqt_string{
            .len = a.len,
            .data = a.ptr,
        };
        return qtc.QByteArrayView_Count(@ptrCast(self), a_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` ch: u8 `
    ///
    pub fn Count2(self: ?*anyopaque, ch: u8) i64 {
        return qtc.QByteArrayView_Count2(@ptrCast(self), @intCast(ch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` a: []const u8 `
    ///
    pub fn Compare(self: ?*anyopaque, a: []const u8) i32 {
        const a_str = qtc.libqt_string{
            .len = a.len,
            .data = a.ptr,
        };
        return qtc.QByteArrayView_Compare(@ptrCast(self), a_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#isValidUtf8)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    pub fn IsValidUtf8(self: ?*anyopaque) bool {
        return qtc.QByteArrayView_IsValidUtf8(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    pub fn Begin(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QByteArrayView_Begin(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    pub fn End(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QByteArrayView_End(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#cbegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    pub fn Cbegin(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QByteArrayView_Cbegin(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#cend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    pub fn Cend(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QByteArrayView_Cend(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#empty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    pub fn Empty(self: ?*anyopaque) bool {
        return qtc.QByteArrayView_Empty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#front)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    pub fn Front(self: ?*anyopaque) u8 {
        return qtc.QByteArrayView_Front(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#back)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    pub fn Back(self: ?*anyopaque) u8 {
        return qtc.QByteArrayView_Back(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#max_size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    pub fn MaxSize(self: ?*anyopaque) i64 {
        return qtc.QByteArrayView_MaxSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QByteArrayView_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QByteArrayView_IsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    pub fn Length(self: ?*anyopaque) i64 {
        return qtc.QByteArrayView_Length(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#first)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    pub fn First2(self: ?*anyopaque) u8 {
        return qtc.QByteArrayView_First2(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#last)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    pub fn Last2(self: ?*anyopaque) u8 {
        return qtc.QByteArrayView_Last2(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#maxSize)
    ///
    pub fn MaxSize2() i64 {
        return qtc.QByteArrayView_MaxSize2();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#mid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` pos: i64 `
    ///
    /// ` n: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Mid2(self: ?*anyopaque, pos: i64, n: i64, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QByteArrayView_Mid2(@ptrCast(self), @intCast(pos), @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbytearrayview.Mid2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToShort1(self: ?*anyopaque, ok: *bool) i16 {
        return qtc.QByteArrayView_ToShort1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToShort2(self: ?*anyopaque, ok: *bool, base: i32) i16 {
        return qtc.QByteArrayView_ToShort2(@ptrCast(self), @ptrCast(ok), @intCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toUShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToUShort1(self: ?*anyopaque, ok: *bool) u16 {
        return qtc.QByteArrayView_ToUShort1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toUShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToUShort2(self: ?*anyopaque, ok: *bool, base: i32) u16 {
        return qtc.QByteArrayView_ToUShort2(@ptrCast(self), @ptrCast(ok), @intCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToInt1(self: ?*anyopaque, ok: *bool) i32 {
        return qtc.QByteArrayView_ToInt1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToInt2(self: ?*anyopaque, ok: *bool, base: i32) i32 {
        return qtc.QByteArrayView_ToInt2(@ptrCast(self), @ptrCast(ok), @intCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToUInt1(self: ?*anyopaque, ok: *bool) u32 {
        return qtc.QByteArrayView_ToUInt1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToUInt2(self: ?*anyopaque, ok: *bool, base: i32) u32 {
        return qtc.QByteArrayView_ToUInt2(@ptrCast(self), @ptrCast(ok), @intCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToLong1(self: ?*anyopaque, ok: *bool) i64 {
        return qtc.QByteArrayView_ToLong1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToLong2(self: ?*anyopaque, ok: *bool, base: i32) i64 {
        return qtc.QByteArrayView_ToLong2(@ptrCast(self), @ptrCast(ok), @intCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toULong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToULong1(self: ?*anyopaque, ok: *bool) u64 {
        return qtc.QByteArrayView_ToULong1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toULong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToULong2(self: ?*anyopaque, ok: *bool, base: i32) u64 {
        return qtc.QByteArrayView_ToULong2(@ptrCast(self), @ptrCast(ok), @intCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToLongLong1(self: ?*anyopaque, ok: *bool) i64 {
        return qtc.QByteArrayView_ToLongLong1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToLongLong2(self: ?*anyopaque, ok: *bool, base: i32) i64 {
        return qtc.QByteArrayView_ToLongLong2(@ptrCast(self), @ptrCast(ok), @intCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToULongLong1(self: ?*anyopaque, ok: *bool) u64 {
        return qtc.QByteArrayView_ToULongLong1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToULongLong2(self: ?*anyopaque, ok: *bool, base: i32) u64 {
        return qtc.QByteArrayView_ToULongLong2(@ptrCast(self), @ptrCast(ok), @intCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toFloat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToFloat1(self: ?*anyopaque, ok: *bool) f32 {
        return qtc.QByteArrayView_ToFloat1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToDouble1(self: ?*anyopaque, ok: *bool) f64 {
        return qtc.QByteArrayView_ToDouble1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` a: []const u8 `
    ///
    /// ` from: i64 `
    ///
    pub fn IndexOf22(self: ?*anyopaque, a: []const u8, from: i64) i64 {
        const a_str = qtc.libqt_string{
            .len = a.len,
            .data = a.ptr,
        };
        return qtc.QByteArrayView_IndexOf22(@ptrCast(self), a_str, @intCast(from));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` ch: u8 `
    ///
    /// ` from: i64 `
    ///
    pub fn IndexOf23(self: ?*anyopaque, ch: u8, from: i64) i64 {
        return qtc.QByteArrayView_IndexOf23(@ptrCast(self), @intCast(ch), @intCast(from));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#lastIndexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` ch: u8 `
    ///
    /// ` from: i64 `
    ///
    pub fn LastIndexOf22(self: ?*anyopaque, ch: u8, from: i64) i64 {
        return qtc.QByteArrayView_LastIndexOf22(@ptrCast(self), @intCast(ch), @intCast(from));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    /// ` a: []const u8 `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn Compare2(self: ?*anyopaque, a: []const u8, cs: i32) i32 {
        const a_str = qtc.libqt_string{
            .len = a.len,
            .data = a.ptr,
        };
        return qtc.QByteArrayView_Compare2(@ptrCast(self), a_str, @intCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#dtor.QByteArrayView)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QByteArrayView `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QByteArrayView_Delete(@ptrCast(self));
    }
};
