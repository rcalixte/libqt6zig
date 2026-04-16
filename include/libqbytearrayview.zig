const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html)
pub const QByteArrayView = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QByteArrayView,

    pub const _is_QByteArrayView = {};

    /// New constructs a new QByteArrayView object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: []u8 `
    ///
    pub fn New(other: []u8) QByteArrayView {
        const other_str = qtc.libqt_string{
            .len = other.len,
            .data = other.ptr,
        };
        return .{ .ptr = qtc.QByteArrayView_new(other_str) };
    }

    /// New2 constructs a new QByteArrayView object and invalidates the source QByteArrayView object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: []u8 `
    ///
    pub fn New2(other: []u8) QByteArrayView {
        const other_str = qtc.libqt_string{
            .len = other.len,
            .data = other.ptr,
        };
        return .{ .ptr = qtc.QByteArrayView_new2(other_str) };
    }

    /// New3 constructs a new QByteArrayView object.
    ///
    pub fn New3() QByteArrayView {
        return .{ .ptr = qtc.QByteArrayView_new3() };
    }

    /// New4 constructs a new QByteArrayView object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []u8 `
    ///
    pub fn New4(param1: []u8) QByteArrayView {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return .{ .ptr = qtc.QByteArrayView_new4(param1_str) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` other: QByteArrayView `
    ///
    pub fn CopyAssign(self: QByteArrayView, other: QByteArrayView) void {
        qtc.QByteArrayView_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` other: QByteArrayView `
    ///
    pub fn MoveAssign(self: QByteArrayView, other: QByteArrayView) void {
        qtc.QByteArrayView_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToByteArray(self: QByteArrayView, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArrayView_ToByteArray(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearrayview.ToByteArray: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    pub fn Size(self: QByteArrayView) isize {
        return qtc.QByteArrayView_Size(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    pub fn Data(self: QByteArrayView) [:0]const u8 {
        const _ret = qtc.QByteArrayView_Data(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#constData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    pub fn ConstData(self: QByteArrayView) [:0]const u8 {
        const _ret = qtc.QByteArrayView_ConstData(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` n: isize `
    ///
    pub fn OperatorSubscript(self: QByteArrayView, n: isize) u8 {
        return qtc.QByteArrayView_OperatorSubscript(@ptrCast(self.ptr), @bitCast(n));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#at)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` n: isize `
    ///
    pub fn At(self: QByteArrayView, n: isize) u8 {
        return qtc.QByteArrayView_At(@ptrCast(self.ptr), @bitCast(n));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#first)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` n: isize `
    ///
    pub fn First(self: QByteArrayView, allocator: std.mem.Allocator, n: isize) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArrayView_First(@ptrCast(self.ptr), @bitCast(n));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearrayview.First: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#last)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` n: isize `
    ///
    pub fn Last(self: QByteArrayView, allocator: std.mem.Allocator, n: isize) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArrayView_Last(@ptrCast(self.ptr), @bitCast(n));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearrayview.Last: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#sliced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pos: isize `
    ///
    pub fn Sliced(self: QByteArrayView, allocator: std.mem.Allocator, pos: isize) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArrayView_Sliced(@ptrCast(self.ptr), @bitCast(pos));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearrayview.Sliced: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#sliced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pos: isize `
    ///
    /// ` n: isize `
    ///
    pub fn Sliced2(self: QByteArrayView, allocator: std.mem.Allocator, pos: isize, n: isize) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArrayView_Sliced2(@ptrCast(self.ptr), @bitCast(pos), @bitCast(n));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearrayview.Sliced2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#slice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pos: isize `
    ///
    pub fn Slice(self: QByteArrayView, allocator: std.mem.Allocator, pos: isize) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArrayView_Slice(@ptrCast(self.ptr), @bitCast(pos));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearrayview.Slice: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#slice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pos: isize `
    ///
    /// ` n: isize `
    ///
    pub fn Slice2(self: QByteArrayView, allocator: std.mem.Allocator, pos: isize, n: isize) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArrayView_Slice2(@ptrCast(self.ptr), @bitCast(pos), @bitCast(n));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearrayview.Slice2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#chopped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` lenVal: isize `
    ///
    pub fn Chopped(self: QByteArrayView, allocator: std.mem.Allocator, lenVal: isize) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArrayView_Chopped(@ptrCast(self.ptr), @bitCast(lenVal));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearrayview.Chopped: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#left)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` n: isize `
    ///
    pub fn Left(self: QByteArrayView, allocator: std.mem.Allocator, n: isize) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArrayView_Left(@ptrCast(self.ptr), @bitCast(n));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearrayview.Left: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#right)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` n: isize `
    ///
    pub fn Right(self: QByteArrayView, allocator: std.mem.Allocator, n: isize) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArrayView_Right(@ptrCast(self.ptr), @bitCast(n));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearrayview.Right: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#mid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pos: isize `
    ///
    pub fn Mid(self: QByteArrayView, allocator: std.mem.Allocator, pos: isize) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArrayView_Mid(@ptrCast(self.ptr), @bitCast(pos));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearrayview.Mid: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#truncate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` n: isize `
    ///
    pub fn Truncate(self: QByteArrayView, n: isize) void {
        qtc.QByteArrayView_Truncate(@ptrCast(self.ptr), @bitCast(n));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#chop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` n: isize `
    ///
    pub fn Chop(self: QByteArrayView, n: isize) void {
        qtc.QByteArrayView_Chop(@ptrCast(self.ptr), @bitCast(n));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#trimmed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Trimmed(self: QByteArrayView, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArrayView_Trimmed(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearrayview.Trimmed: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    pub fn ToShort(self: QByteArrayView) i16 {
        return qtc.QByteArrayView_ToShort(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toUShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    pub fn ToUShort(self: QByteArrayView) u16 {
        return qtc.QByteArrayView_ToUShort(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    pub fn ToInt(self: QByteArrayView) i32 {
        return qtc.QByteArrayView_ToInt(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    pub fn ToUInt(self: QByteArrayView) u32 {
        return qtc.QByteArrayView_ToUInt(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    pub fn ToLong(self: QByteArrayView) isize {
        return qtc.QByteArrayView_ToLong(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toULong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    pub fn ToULong(self: QByteArrayView) usize {
        return qtc.QByteArrayView_ToULong(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    pub fn ToLongLong(self: QByteArrayView) isize {
        return qtc.QByteArrayView_ToLongLong(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    pub fn ToULongLong(self: QByteArrayView) usize {
        return qtc.QByteArrayView_ToULongLong(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toFloat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    pub fn ToFloat(self: QByteArrayView) f32 {
        return qtc.QByteArrayView_ToFloat(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    pub fn ToDouble(self: QByteArrayView) f64 {
        return qtc.QByteArrayView_ToDouble(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#startsWith)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` other: []u8 `
    ///
    pub fn StartsWith(self: QByteArrayView, other: []u8) bool {
        const other_str = qtc.libqt_string{
            .len = other.len,
            .data = other.ptr,
        };
        return qtc.QByteArrayView_StartsWith(@ptrCast(self.ptr), other_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#startsWith)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` c: u8 `
    ///
    pub fn StartsWith2(self: QByteArrayView, c: u8) bool {
        return qtc.QByteArrayView_StartsWith2(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#endsWith)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` other: []u8 `
    ///
    pub fn EndsWith(self: QByteArrayView, other: []u8) bool {
        const other_str = qtc.libqt_string{
            .len = other.len,
            .data = other.ptr,
        };
        return qtc.QByteArrayView_EndsWith(@ptrCast(self.ptr), other_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#endsWith)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` c: u8 `
    ///
    pub fn EndsWith2(self: QByteArrayView, c: u8) bool {
        return qtc.QByteArrayView_EndsWith2(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` a: []u8 `
    ///
    pub fn IndexOf(self: QByteArrayView, a: []u8) isize {
        const a_str = qtc.libqt_string{
            .len = a.len,
            .data = a.ptr,
        };
        return qtc.QByteArrayView_IndexOf(@ptrCast(self.ptr), a_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` ch: u8 `
    ///
    pub fn IndexOf2(self: QByteArrayView, ch: u8) isize {
        return qtc.QByteArrayView_IndexOf2(@ptrCast(self.ptr), @bitCast(ch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` a: []u8 `
    ///
    pub fn Contains(self: QByteArrayView, a: []u8) bool {
        const a_str = qtc.libqt_string{
            .len = a.len,
            .data = a.ptr,
        };
        return qtc.QByteArrayView_Contains(@ptrCast(self.ptr), a_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` c: u8 `
    ///
    pub fn Contains2(self: QByteArrayView, c: u8) bool {
        return qtc.QByteArrayView_Contains2(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#lastIndexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` a: []u8 `
    ///
    pub fn LastIndexOf(self: QByteArrayView, a: []u8) isize {
        const a_str = qtc.libqt_string{
            .len = a.len,
            .data = a.ptr,
        };
        return qtc.QByteArrayView_LastIndexOf(@ptrCast(self.ptr), a_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#lastIndexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` a: []u8 `
    ///
    /// ` from: isize `
    ///
    pub fn LastIndexOf2(self: QByteArrayView, a: []u8, from: isize) isize {
        const a_str = qtc.libqt_string{
            .len = a.len,
            .data = a.ptr,
        };
        return qtc.QByteArrayView_LastIndexOf2(@ptrCast(self.ptr), a_str, @bitCast(from));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#lastIndexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` ch: u8 `
    ///
    pub fn LastIndexOf3(self: QByteArrayView, ch: u8) isize {
        return qtc.QByteArrayView_LastIndexOf3(@ptrCast(self.ptr), @bitCast(ch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` a: []u8 `
    ///
    pub fn Count(self: QByteArrayView, a: []u8) isize {
        const a_str = qtc.libqt_string{
            .len = a.len,
            .data = a.ptr,
        };
        return qtc.QByteArrayView_Count(@ptrCast(self.ptr), a_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` ch: u8 `
    ///
    pub fn Count2(self: QByteArrayView, ch: u8) isize {
        return qtc.QByteArrayView_Count2(@ptrCast(self.ptr), @bitCast(ch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` a: []u8 `
    ///
    pub fn Compare(self: QByteArrayView, a: []u8) i32 {
        const a_str = qtc.libqt_string{
            .len = a.len,
            .data = a.ptr,
        };
        return qtc.QByteArrayView_Compare(@ptrCast(self.ptr), a_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#isValidUtf8)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    pub fn IsValidUtf8(self: QByteArrayView) bool {
        return qtc.QByteArrayView_IsValidUtf8(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    pub fn Begin(self: QByteArrayView) [:0]const u8 {
        const _ret = qtc.QByteArrayView_Begin(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    pub fn End(self: QByteArrayView) [:0]const u8 {
        const _ret = qtc.QByteArrayView_End(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#cbegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    pub fn Cbegin(self: QByteArrayView) [:0]const u8 {
        const _ret = qtc.QByteArrayView_Cbegin(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#cend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    pub fn Cend(self: QByteArrayView) [:0]const u8 {
        const _ret = qtc.QByteArrayView_Cend(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#empty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    pub fn Empty(self: QByteArrayView) bool {
        return qtc.QByteArrayView_Empty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#front)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    pub fn Front(self: QByteArrayView) u8 {
        return qtc.QByteArrayView_Front(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#back)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    pub fn Back(self: QByteArrayView) u8 {
        return qtc.QByteArrayView_Back(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#max_size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    pub fn MaxSize(self: QByteArrayView) isize {
        return qtc.QByteArrayView_MaxSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    pub fn IsNull(self: QByteArrayView) bool {
        return qtc.QByteArrayView_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    pub fn IsEmpty(self: QByteArrayView) bool {
        return qtc.QByteArrayView_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    pub fn Length(self: QByteArrayView) isize {
        return qtc.QByteArrayView_Length(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#first)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    pub fn First2(self: QByteArrayView) u8 {
        return qtc.QByteArrayView_First2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#last)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    pub fn Last2(self: QByteArrayView) u8 {
        return qtc.QByteArrayView_Last2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#maxSize)
    ///
    pub fn MaxSize2() isize {
        return qtc.QByteArrayView_MaxSize2();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#mid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pos: isize `
    ///
    /// ` n: isize `
    ///
    pub fn Mid2(self: QByteArrayView, allocator: std.mem.Allocator, pos: isize, n: isize) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArrayView_Mid2(@ptrCast(self.ptr), @bitCast(pos), @bitCast(n));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearrayview.Mid2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToShort1(self: QByteArrayView, ok: *bool) i16 {
        return qtc.QByteArrayView_ToShort1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToShort2(self: QByteArrayView, ok: *bool, base: i32) i16 {
        return qtc.QByteArrayView_ToShort2(@ptrCast(self.ptr), @ptrCast(ok), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toUShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToUShort1(self: QByteArrayView, ok: *bool) u16 {
        return qtc.QByteArrayView_ToUShort1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toUShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToUShort2(self: QByteArrayView, ok: *bool, base: i32) u16 {
        return qtc.QByteArrayView_ToUShort2(@ptrCast(self.ptr), @ptrCast(ok), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToInt1(self: QByteArrayView, ok: *bool) i32 {
        return qtc.QByteArrayView_ToInt1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToInt2(self: QByteArrayView, ok: *bool, base: i32) i32 {
        return qtc.QByteArrayView_ToInt2(@ptrCast(self.ptr), @ptrCast(ok), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToUInt1(self: QByteArrayView, ok: *bool) u32 {
        return qtc.QByteArrayView_ToUInt1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToUInt2(self: QByteArrayView, ok: *bool, base: i32) u32 {
        return qtc.QByteArrayView_ToUInt2(@ptrCast(self.ptr), @ptrCast(ok), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToLong1(self: QByteArrayView, ok: *bool) isize {
        return qtc.QByteArrayView_ToLong1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToLong2(self: QByteArrayView, ok: *bool, base: i32) isize {
        return qtc.QByteArrayView_ToLong2(@ptrCast(self.ptr), @ptrCast(ok), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toULong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToULong1(self: QByteArrayView, ok: *bool) usize {
        return qtc.QByteArrayView_ToULong1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toULong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToULong2(self: QByteArrayView, ok: *bool, base: i32) usize {
        return qtc.QByteArrayView_ToULong2(@ptrCast(self.ptr), @ptrCast(ok), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToLongLong1(self: QByteArrayView, ok: *bool) isize {
        return qtc.QByteArrayView_ToLongLong1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToLongLong2(self: QByteArrayView, ok: *bool, base: i32) isize {
        return qtc.QByteArrayView_ToLongLong2(@ptrCast(self.ptr), @ptrCast(ok), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToULongLong1(self: QByteArrayView, ok: *bool) usize {
        return qtc.QByteArrayView_ToULongLong1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    /// ` base: i32 `
    ///
    pub fn ToULongLong2(self: QByteArrayView, ok: *bool, base: i32) usize {
        return qtc.QByteArrayView_ToULongLong2(@ptrCast(self.ptr), @ptrCast(ok), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toFloat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToFloat1(self: QByteArrayView, ok: *bool) f32 {
        return qtc.QByteArrayView_ToFloat1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToDouble1(self: QByteArrayView, ok: *bool) f64 {
        return qtc.QByteArrayView_ToDouble1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` a: []u8 `
    ///
    /// ` from: isize `
    ///
    pub fn IndexOf22(self: QByteArrayView, a: []u8, from: isize) isize {
        const a_str = qtc.libqt_string{
            .len = a.len,
            .data = a.ptr,
        };
        return qtc.QByteArrayView_IndexOf22(@ptrCast(self.ptr), a_str, @bitCast(from));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` ch: u8 `
    ///
    /// ` from: isize `
    ///
    pub fn IndexOf23(self: QByteArrayView, ch: u8, from: isize) isize {
        return qtc.QByteArrayView_IndexOf23(@ptrCast(self.ptr), @bitCast(ch), @bitCast(from));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#lastIndexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` ch: u8 `
    ///
    /// ` from: isize `
    ///
    pub fn LastIndexOf22(self: QByteArrayView, ch: u8, from: isize) isize {
        return qtc.QByteArrayView_LastIndexOf22(@ptrCast(self.ptr), @bitCast(ch), @bitCast(from));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayView `
    ///
    /// ` a: []u8 `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn Compare2(self: QByteArrayView, a: []u8, cs: i32) i32 {
        const a_str = qtc.libqt_string{
            .len = a.len,
            .data = a.ptr,
        };
        return qtc.QByteArrayView_Compare2(@ptrCast(self.ptr), a_str, @bitCast(cs));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#dtor.QByteArrayView)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QByteArrayView `
    ///
    pub fn Delete(self: QByteArrayView) void {
        qtc.QByteArrayView_Delete(@ptrCast(self.ptr));
    }
};
