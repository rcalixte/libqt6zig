const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html)
pub const qanystringview = struct {
    /// New constructs a new QAnyStringView object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: []const u8 `
    ///
    pub fn New(other: []const u8) QtC.QAnyStringView {
        const other_str = qtc.libqt_string{
            .len = other.len,
            .data = other.ptr,
        };

        return qtc.QAnyStringView_new(other_str);
    }

    /// New2 constructs a new QAnyStringView object and invalidates the source QAnyStringView object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: []const u8 `
    ///
    pub fn New2(other: []const u8) QtC.QAnyStringView {
        const other_str = qtc.libqt_string{
            .len = other.len,
            .data = other.ptr,
        };

        return qtc.QAnyStringView_new2(other_str);
    }

    /// New3 constructs a new QAnyStringView object.
    ///
    pub fn New3() QtC.QAnyStringView {
        return qtc.QAnyStringView_new3();
    }

    /// New4 constructs a new QAnyStringView object.
    ///
    /// ## Parameter(s):
    ///
    /// ` str: []u8 `
    ///
    pub fn New4(str: []u8) QtC.QAnyStringView {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };

        return qtc.QAnyStringView_new4(str_str);
    }

    /// New5 constructs a new QAnyStringView object.
    ///
    /// ## Parameter(s):
    ///
    /// ` str: []const u8 `
    ///
    pub fn New5(str: []const u8) QtC.QAnyStringView {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };

        return qtc.QAnyStringView_new5(str_str);
    }

    /// New6 constructs a new QAnyStringView object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    pub fn New6(param1: []const u8) QtC.QAnyStringView {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };

        return qtc.QAnyStringView_new6(param1_str);
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAnyStringView `
    ///
    /// ` other: QtC.QAnyStringView `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAnyStringView_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAnyStringView `
    ///
    /// ` other: QtC.QAnyStringView `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAnyStringView_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html#mid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAnyStringView `
    ///
    /// ` pos: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Mid(self: ?*anyopaque, pos: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAnyStringView_Mid(@ptrCast(self), @intCast(pos));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qanystringview.Mid: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html#left)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAnyStringView `
    ///
    /// ` n: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Left(self: ?*anyopaque, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAnyStringView_Left(@ptrCast(self), @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qanystringview.Left: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html#right)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAnyStringView `
    ///
    /// ` n: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Right(self: ?*anyopaque, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAnyStringView_Right(@ptrCast(self), @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qanystringview.Right: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html#sliced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAnyStringView `
    ///
    /// ` pos: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Sliced(self: ?*anyopaque, pos: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAnyStringView_Sliced(@ptrCast(self), @intCast(pos));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qanystringview.Sliced: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html#sliced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAnyStringView `
    ///
    /// ` pos: i64 `
    ///
    /// ` n: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Sliced2(self: ?*anyopaque, pos: i64, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAnyStringView_Sliced2(@ptrCast(self), @intCast(pos), @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qanystringview.Sliced2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html#first)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAnyStringView `
    ///
    /// ` n: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn First(self: ?*anyopaque, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAnyStringView_First(@ptrCast(self), @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qanystringview.First: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html#last)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAnyStringView `
    ///
    /// ` n: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Last(self: ?*anyopaque, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAnyStringView_Last(@ptrCast(self), @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qanystringview.Last: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html#chopped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAnyStringView `
    ///
    /// ` n: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Chopped(self: ?*anyopaque, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAnyStringView_Chopped(@ptrCast(self), @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qanystringview.Chopped: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html#slice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAnyStringView `
    ///
    /// ` pos: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Slice(self: ?*anyopaque, pos: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAnyStringView_Slice(@ptrCast(self), @intCast(pos));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qanystringview.Slice: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html#slice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAnyStringView `
    ///
    /// ` pos: i64 `
    ///
    /// ` n: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Slice2(self: ?*anyopaque, pos: i64, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAnyStringView_Slice2(@ptrCast(self), @intCast(pos), @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qanystringview.Slice2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html#truncate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAnyStringView `
    ///
    /// ` n: i64 `
    ///
    pub fn Truncate(self: ?*anyopaque, n: i64) void {
        qtc.QAnyStringView_Truncate(@ptrCast(self), @intCast(n));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html#chop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAnyStringView `
    ///
    /// ` n: i64 `
    ///
    pub fn Chop(self: ?*anyopaque, n: i64) void {
        qtc.QAnyStringView_Chop(@ptrCast(self), @intCast(n));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAnyStringView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAnyStringView_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qanystringview.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAnyStringView `
    ///
    pub fn Size(self: ?*anyopaque) i64 {
        return qtc.QAnyStringView_Size(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAnyStringView `
    ///
    pub fn Data(self: ?*anyopaque) ?*const anyopaque {
        return qtc.QAnyStringView_Data(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` lhs: []const u8 `
    ///
    /// ` rhs: []const u8 `
    ///
    pub fn Compare(lhs: []const u8, rhs: []const u8) i32 {
        const lhs_str = qtc.libqt_string{
            .len = lhs.len,
            .data = lhs.ptr,
        };
        const rhs_str = qtc.libqt_string{
            .len = rhs.len,
            .data = rhs.ptr,
        };
        return qtc.QAnyStringView_Compare(lhs_str, rhs_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html#equal)
    ///
    /// ## Parameter(s):
    ///
    /// ` lhs: []const u8 `
    ///
    /// ` rhs: []const u8 `
    ///
    pub fn Equal(lhs: []const u8, rhs: []const u8) bool {
        const lhs_str = qtc.libqt_string{
            .len = lhs.len,
            .data = lhs.ptr,
        };
        const rhs_str = qtc.libqt_string{
            .len = rhs.len,
            .data = rhs.ptr,
        };
        return qtc.QAnyStringView_Equal(lhs_str, rhs_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html#front)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAnyStringView `
    ///
    pub fn Front(self: ?*anyopaque) QtC.QChar {
        return qtc.QAnyStringView_Front(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html#back)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAnyStringView `
    ///
    pub fn Back(self: ?*anyopaque) QtC.QChar {
        return qtc.QAnyStringView_Back(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html#empty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAnyStringView `
    ///
    pub fn Empty(self: ?*anyopaque) bool {
        return qtc.QAnyStringView_Empty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html#size_bytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAnyStringView `
    ///
    pub fn SizeBytes(self: ?*anyopaque) i64 {
        return qtc.QAnyStringView_SizeBytes(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html#max_size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAnyStringView `
    ///
    pub fn MaxSize(self: ?*anyopaque) i64 {
        return qtc.QAnyStringView_MaxSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAnyStringView `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QAnyStringView_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAnyStringView `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QAnyStringView_IsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAnyStringView `
    ///
    pub fn Length(self: ?*anyopaque) i64 {
        return qtc.QAnyStringView_Length(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html#mid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAnyStringView `
    ///
    /// ` pos: i64 `
    ///
    /// ` n: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Mid2(self: ?*anyopaque, pos: i64, n: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAnyStringView_Mid2(@ptrCast(self), @intCast(pos), @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qanystringview.Mid2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` lhs: []const u8 `
    ///
    /// ` rhs: []const u8 `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn Compare3(lhs: []const u8, rhs: []const u8, cs: i32) i32 {
        const lhs_str = qtc.libqt_string{
            .len = lhs.len,
            .data = lhs.ptr,
        };
        const rhs_str = qtc.libqt_string{
            .len = rhs.len,
            .data = rhs.ptr,
        };
        return qtc.QAnyStringView_Compare3(lhs_str, rhs_str, @intCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html#dtor.QAnyStringView)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QAnyStringView `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAnyStringView_Delete(@ptrCast(self));
    }
};
