const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html)
pub const qbytearraymatcher = struct {
    /// New constructs a new QByteArrayMatcher object.
    ///
    pub fn New() QtC.QByteArrayMatcher {
        return qtc.QByteArrayMatcher_new();
    }

    /// New2 constructs a new QByteArrayMatcher object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pattern: []u8 `
    ///
    pub fn New2(pattern: []u8) QtC.QByteArrayMatcher {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };

        return qtc.QByteArrayMatcher_new2(pattern_str);
    }

    /// New3 constructs a new QByteArrayMatcher object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pattern: []u8 `
    ///
    pub fn New3(pattern: []u8) QtC.QByteArrayMatcher {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };

        return qtc.QByteArrayMatcher_new3(pattern_str);
    }

    /// New4 constructs a new QByteArrayMatcher object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pattern: [:0]const u8 `
    ///
    pub fn New4(pattern: [:0]const u8) QtC.QByteArrayMatcher {
        const pattern_Cstring = pattern.ptr;

        return qtc.QByteArrayMatcher_new4(pattern_Cstring);
    }

    /// New5 constructs a new QByteArrayMatcher object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QByteArrayMatcher `
    ///
    pub fn New5(other: ?*anyopaque) QtC.QByteArrayMatcher {
        return qtc.QByteArrayMatcher_new5(@ptrCast(other));
    }

    /// New6 constructs a new QByteArrayMatcher object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pattern: [:0]const u8 `
    ///
    /// ` length: i64 `
    ///
    pub fn New6(pattern: [:0]const u8, length: i64) QtC.QByteArrayMatcher {
        const pattern_Cstring = pattern.ptr;

        return qtc.QByteArrayMatcher_new6(pattern_Cstring, @bitCast(length));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayMatcher `
    ///
    /// ` other: QtC.QByteArrayMatcher `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QByteArrayMatcher_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html#setPattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayMatcher `
    ///
    /// ` pattern: []u8 `
    ///
    pub fn SetPattern(self: ?*anyopaque, pattern: []u8) void {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.QByteArrayMatcher_SetPattern(@ptrCast(self), pattern_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayMatcher `
    ///
    /// ` str: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn IndexIn(self: ?*anyopaque, str: [:0]const u8, lenVal: i64) i64 {
        const str_Cstring = str.ptr;
        return qtc.QByteArrayMatcher_IndexIn(@ptrCast(self), str_Cstring, @bitCast(lenVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayMatcher `
    ///
    /// ` data: []u8 `
    ///
    pub fn IndexIn2(self: ?*anyopaque, data: []u8) i64 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QByteArrayMatcher_IndexIn2(@ptrCast(self), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html#pattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayMatcher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Pattern(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArrayMatcher_Pattern(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearraymatcher.Pattern: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayMatcher `
    ///
    /// ` str: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    /// ` from: i64 `
    ///
    pub fn IndexIn3(self: ?*anyopaque, str: [:0]const u8, lenVal: i64, from: i64) i64 {
        const str_Cstring = str.ptr;
        return qtc.QByteArrayMatcher_IndexIn3(@ptrCast(self), str_Cstring, @bitCast(lenVal), @bitCast(from));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QByteArrayMatcher `
    ///
    /// ` data: []u8 `
    ///
    /// ` from: i64 `
    ///
    pub fn IndexIn22(self: ?*anyopaque, data: []u8, from: i64) i64 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QByteArrayMatcher_IndexIn22(@ptrCast(self), data_str, @bitCast(from));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html#dtor.QByteArrayMatcher)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QByteArrayMatcher `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QByteArrayMatcher_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstaticbytearraymatcherbase.html)
pub const qstaticbytearraymatcherbase = struct {
    /// New constructs a new QStaticByteArrayMatcherBase object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QStaticByteArrayMatcherBase `
    ///
    pub fn New(other: ?*anyopaque) QtC.QStaticByteArrayMatcherBase {
        return qtc.QStaticByteArrayMatcherBase_new(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStaticByteArrayMatcherBase `
    ///
    /// ` other: QtC.QStaticByteArrayMatcherBase `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStaticByteArrayMatcherBase_CopyAssign(@ptrCast(self), @ptrCast(other));
    }
};
