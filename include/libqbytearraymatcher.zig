const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html)
pub const QByteArrayMatcher = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QByteArrayMatcher,

    pub const _is_QByteArrayMatcher = {};

    /// New constructs a new QByteArrayMatcher object.
    ///
    pub fn New() QByteArrayMatcher {
        return .{ .ptr = qtc.QByteArrayMatcher_new() };
    }

    /// New2 constructs a new QByteArrayMatcher object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pattern: []u8 `
    ///
    pub fn New2(pattern: []u8) QByteArrayMatcher {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        return .{ .ptr = qtc.QByteArrayMatcher_new2(pattern_str) };
    }

    /// New3 constructs a new QByteArrayMatcher object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pattern: []u8 `
    ///
    pub fn New3(pattern: []u8) QByteArrayMatcher {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        return .{ .ptr = qtc.QByteArrayMatcher_new3(pattern_str) };
    }

    /// New4 constructs a new QByteArrayMatcher object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pattern: [:0]const u8 `
    ///
    pub fn New4(pattern: [:0]const u8) QByteArrayMatcher {
        const pattern_Cstring = pattern.ptr;
        return .{ .ptr = qtc.QByteArrayMatcher_new4(pattern_Cstring) };
    }

    /// New5 constructs a new QByteArrayMatcher object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QByteArrayMatcher `
    ///
    pub fn New5(other: anytype) QByteArrayMatcher {
        comptime _ = @TypeOf(other)._is_QByteArrayMatcher;
        return .{ .ptr = qtc.QByteArrayMatcher_new5(@ptrCast(other.ptr)) };
    }

    /// New6 constructs a new QByteArrayMatcher object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pattern: [:0]const u8 `
    ///
    /// ` length: isize `
    ///
    pub fn New6(pattern: [:0]const u8, length: isize) QByteArrayMatcher {
        const pattern_Cstring = pattern.ptr;
        return .{ .ptr = qtc.QByteArrayMatcher_new6(pattern_Cstring, @bitCast(length)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayMatcher `
    ///
    /// ` other: QByteArrayMatcher `
    ///
    pub fn OperatorAssign(self: QByteArrayMatcher, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QByteArrayMatcher;
        qtc.QByteArrayMatcher_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html#setPattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayMatcher `
    ///
    /// ` pattern: []u8 `
    ///
    pub fn SetPattern(self: QByteArrayMatcher, pattern: []u8) void {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.QByteArrayMatcher_SetPattern(@ptrCast(self.ptr), pattern_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayMatcher `
    ///
    /// ` str: [:0]const u8 `
    ///
    /// ` lenVal: isize `
    ///
    pub fn IndexIn(self: QByteArrayMatcher, str: [:0]const u8, lenVal: isize) isize {
        const str_Cstring = str.ptr;
        return qtc.QByteArrayMatcher_IndexIn(@ptrCast(self.ptr), str_Cstring, @bitCast(lenVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayMatcher `
    ///
    /// ` data: []u8 `
    ///
    pub fn IndexIn2(self: QByteArrayMatcher, data: []u8) isize {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QByteArrayMatcher_IndexIn2(@ptrCast(self.ptr), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html#pattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayMatcher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Pattern(self: QByteArrayMatcher, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArrayMatcher_Pattern(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearraymatcher.Pattern: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayMatcher `
    ///
    /// ` str: [:0]const u8 `
    ///
    /// ` lenVal: isize `
    ///
    /// ` from: isize `
    ///
    pub fn IndexIn3(self: QByteArrayMatcher, str: [:0]const u8, lenVal: isize, from: isize) isize {
        const str_Cstring = str.ptr;
        return qtc.QByteArrayMatcher_IndexIn3(@ptrCast(self.ptr), str_Cstring, @bitCast(lenVal), @bitCast(from));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayMatcher `
    ///
    /// ` data: []u8 `
    ///
    /// ` from: isize `
    ///
    pub fn IndexIn22(self: QByteArrayMatcher, data: []u8, from: isize) isize {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QByteArrayMatcher_IndexIn22(@ptrCast(self.ptr), data_str, @bitCast(from));
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
    /// ` self: QByteArrayMatcher `
    ///
    pub fn Delete(self: QByteArrayMatcher) void {
        qtc.QByteArrayMatcher_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstaticbytearraymatcherbase.html)
pub const QStaticByteArrayMatcherBase = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstaticbytearraymatcherbase.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStaticByteArrayMatcherBase,

    pub const _is_QStaticByteArrayMatcherBase = {};

    /// New constructs a new QStaticByteArrayMatcherBase object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStaticByteArrayMatcherBase `
    ///
    pub fn New(other: anytype) QStaticByteArrayMatcherBase {
        comptime _ = @TypeOf(other)._is_QStaticByteArrayMatcherBase;
        return .{ .ptr = qtc.QStaticByteArrayMatcherBase_new(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QStaticByteArrayMatcherBase `
    ///
    /// ` other: QStaticByteArrayMatcherBase `
    ///
    pub fn CopyAssign(self: QStaticByteArrayMatcherBase, other: QStaticByteArrayMatcherBase) void {
        qtc.QStaticByteArrayMatcherBase_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }
};
