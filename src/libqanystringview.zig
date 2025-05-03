const C = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qanystringview.html
pub const qanystringview = struct {
    /// New constructs a new QAnyStringView object.
    ///
    /// ``` other: []const u8 ```
    pub fn New(other: []const u8) ?*C.QAnyStringView {
        return C.QAnyStringView_new(@constCast(other.ptr));
    }

    /// New2 constructs a new QAnyStringView object and invalidates the source QAnyStringView object.
    ///
    /// ``` other: []const u8 ```
    pub fn New2(other: []const u8) ?*C.QAnyStringView {
        return C.QAnyStringView_new2(@constCast(other.ptr));
    }

    /// New3 constructs a new QAnyStringView object.
    ///
    ///
    pub fn New3() ?*C.QAnyStringView {
        return C.QAnyStringView_new3();
    }

    /// New4 constructs a new QAnyStringView object.
    ///
    /// ``` str: []u8 ```
    pub fn New4(str: []u8) ?*C.QAnyStringView {
        const str_str = C.struct_libqt_string{
            .len = str.len,
            .data = @constCast(str.ptr),
        };

        return C.QAnyStringView_new4(str_str);
    }

    /// New5 constructs a new QAnyStringView object.
    ///
    /// ``` str: []const u8 ```
    pub fn New5(str: []const u8) ?*C.QAnyStringView {
        const str_str = C.struct_libqt_string{
            .len = str.len,
            .data = @constCast(str.ptr),
        };

        return C.QAnyStringView_new5(str_str);
    }

    /// New6 constructs a new QAnyStringView object.
    ///
    /// ``` c: ?*C.QChar ```
    pub fn New6(c: ?*anyopaque) ?*C.QAnyStringView {
        return C.QAnyStringView_new6(@ptrCast(c));
    }

    /// New7 constructs a new QAnyStringView object.
    ///
    /// ``` param1: []const u8 ```
    pub fn New7(param1: []const u8) ?*C.QAnyStringView {
        return C.QAnyStringView_new7(@constCast(param1.ptr));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: ?*QAnyStringView, other: ?*QAnyStringView ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QAnyStringView_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: ?*QAnyStringView, other: ?*QAnyStringView ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QAnyStringView_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#toString)
    ///
    /// ``` self: ?*C.QAnyStringView, allocator: std.mem.Allocator ```
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QAnyStringView_ToString(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#size)
    ///
    /// ``` self: ?*C.QAnyStringView ```
    pub fn Size(self: ?*anyopaque) i64 {
        return C.QAnyStringView_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#data)
    ///
    /// ``` self: ?*C.QAnyStringView ```
    pub fn Data(self: ?*anyopaque) ?*anyopaque {
        return C.QAnyStringView_Data(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#compare)
    ///
    /// ``` lhs: []const u8, rhs: []const u8 ```
    pub fn Compare(lhs: []const u8, rhs: []const u8) i32 {
        return C.QAnyStringView_Compare(@constCast(lhs.ptr), @constCast(rhs.ptr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#equal)
    ///
    /// ``` lhs: []const u8, rhs: []const u8 ```
    pub fn Equal(lhs: []const u8, rhs: []const u8) bool {
        return C.QAnyStringView_Equal(@constCast(lhs.ptr), @constCast(rhs.ptr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#front)
    ///
    /// ``` self: ?*C.QAnyStringView ```
    pub fn Front(self: ?*anyopaque) ?*C.QChar {
        return C.QAnyStringView_Front(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#back)
    ///
    /// ``` self: ?*C.QAnyStringView ```
    pub fn Back(self: ?*anyopaque) ?*C.QChar {
        return C.QAnyStringView_Back(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#empty)
    ///
    /// ``` self: ?*C.QAnyStringView ```
    pub fn Empty(self: ?*anyopaque) bool {
        return C.QAnyStringView_Empty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#size_bytes)
    ///
    /// ``` self: ?*C.QAnyStringView ```
    pub fn SizeBytes(self: ?*anyopaque) i64 {
        return C.QAnyStringView_SizeBytes(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#isNull)
    ///
    /// ``` self: ?*C.QAnyStringView ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return C.QAnyStringView_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#isEmpty)
    ///
    /// ``` self: ?*C.QAnyStringView ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return C.QAnyStringView_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#length)
    ///
    /// ``` self: ?*C.QAnyStringView ```
    pub fn Length(self: ?*anyopaque) i64 {
        return C.QAnyStringView_Length(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#compare)
    ///
    /// ``` lhs: []const u8, rhs: []const u8, cs: qnamespace_enums.CaseSensitivity ```
    pub fn Compare3(lhs: []const u8, rhs: []const u8, cs: i64) i32 {
        return C.QAnyStringView_Compare3(@constCast(lhs.ptr), @constCast(rhs.ptr), @intCast(cs));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QAnyStringView ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QAnyStringView_Delete(@ptrCast(self));
    }
};
