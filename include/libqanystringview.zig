const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qanystringview.html
pub const qanystringview = struct {
    /// New constructs a new QAnyStringView object.
    ///
    /// ``` other: []const u8 ```
    pub fn New(other: []const u8) QtC.QAnyStringView {
        return qtc.QAnyStringView_new(@constCast(other.ptr));
    }

    /// New2 constructs a new QAnyStringView object and invalidates the source QAnyStringView object.
    ///
    /// ``` other: []const u8 ```
    pub fn New2(other: []const u8) QtC.QAnyStringView {
        return qtc.QAnyStringView_new2(@constCast(other.ptr));
    }

    /// New3 constructs a new QAnyStringView object.
    ///
    ///
    pub fn New3() QtC.QAnyStringView {
        return qtc.QAnyStringView_new3();
    }

    /// New4 constructs a new QAnyStringView object.
    ///
    /// ``` str: []u8 ```
    pub fn New4(str: []u8) QtC.QAnyStringView {
        const str_str = qtc.struct_libqt_string{
            .len = str.len,
            .data = @constCast(str.ptr),
        };

        return qtc.QAnyStringView_new4(str_str);
    }

    /// New5 constructs a new QAnyStringView object.
    ///
    /// ``` str: []const u8 ```
    pub fn New5(str: []const u8) QtC.QAnyStringView {
        const str_str = qtc.struct_libqt_string{
            .len = str.len,
            .data = @constCast(str.ptr),
        };

        return qtc.QAnyStringView_new5(str_str);
    }

    /// New6 constructs a new QAnyStringView object.
    ///
    /// ``` c: QtC.QChar ```
    pub fn New6(c: ?*anyopaque) QtC.QAnyStringView {
        return qtc.QAnyStringView_new6(@ptrCast(c));
    }

    /// New7 constructs a new QAnyStringView object.
    ///
    /// ``` param1: []const u8 ```
    pub fn New7(param1: []const u8) QtC.QAnyStringView {
        return qtc.QAnyStringView_new7(@constCast(param1.ptr));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QAnyStringView, other: QtC.QAnyStringView ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAnyStringView_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QAnyStringView, other: QtC.QAnyStringView ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAnyStringView_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#toString)
    ///
    /// ``` self: QtC.QAnyStringView, allocator: std.mem.Allocator ```
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAnyStringView_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qanystringview.ToString: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#size)
    ///
    /// ``` self: QtC.QAnyStringView ```
    pub fn Size(self: ?*anyopaque) i64 {
        return qtc.QAnyStringView_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#data)
    ///
    /// ``` self: QtC.QAnyStringView ```
    pub fn Data(self: ?*anyopaque) ?*const anyopaque {
        return qtc.QAnyStringView_Data(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#compare)
    ///
    /// ``` lhs: []const u8, rhs: []const u8 ```
    pub fn Compare(lhs: []const u8, rhs: []const u8) i32 {
        return qtc.QAnyStringView_Compare(@constCast(lhs.ptr), @constCast(rhs.ptr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#equal)
    ///
    /// ``` lhs: []const u8, rhs: []const u8 ```
    pub fn Equal(lhs: []const u8, rhs: []const u8) bool {
        return qtc.QAnyStringView_Equal(@constCast(lhs.ptr), @constCast(rhs.ptr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#front)
    ///
    /// ``` self: QtC.QAnyStringView ```
    pub fn Front(self: ?*anyopaque) QtC.QChar {
        return qtc.QAnyStringView_Front(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#back)
    ///
    /// ``` self: QtC.QAnyStringView ```
    pub fn Back(self: ?*anyopaque) QtC.QChar {
        return qtc.QAnyStringView_Back(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#empty)
    ///
    /// ``` self: QtC.QAnyStringView ```
    pub fn Empty(self: ?*anyopaque) bool {
        return qtc.QAnyStringView_Empty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#size_bytes)
    ///
    /// ``` self: QtC.QAnyStringView ```
    pub fn SizeBytes(self: ?*anyopaque) i64 {
        return qtc.QAnyStringView_SizeBytes(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#isNull)
    ///
    /// ``` self: QtC.QAnyStringView ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QAnyStringView_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#isEmpty)
    ///
    /// ``` self: QtC.QAnyStringView ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QAnyStringView_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#length)
    ///
    /// ``` self: QtC.QAnyStringView ```
    pub fn Length(self: ?*anyopaque) i64 {
        return qtc.QAnyStringView_Length(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#compare)
    ///
    /// ``` lhs: []const u8, rhs: []const u8, cs: qnamespace_enums.CaseSensitivity ```
    pub fn Compare3(lhs: []const u8, rhs: []const u8, cs: i64) i32 {
        return qtc.QAnyStringView_Compare3(@constCast(lhs.ptr), @constCast(rhs.ptr), @intCast(cs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#dtor.QAnyStringView)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAnyStringView ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAnyStringView_Delete(@ptrCast(self));
    }
};
