const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qbytearraymatcher.html
pub const qbytearraymatcher = struct {
    /// New constructs a new QByteArrayMatcher object.
    ///
    ///
    pub fn New() QtC.QByteArrayMatcher {
        return qtc.QByteArrayMatcher_new();
    }

    /// New2 constructs a new QByteArrayMatcher object.
    ///
    /// ``` pattern: []u8 ```
    pub fn New2(pattern: []u8) QtC.QByteArrayMatcher {
        const pattern_str = qtc.struct_libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };

        return qtc.QByteArrayMatcher_new2(pattern_str);
    }

    /// New3 constructs a new QByteArrayMatcher object.
    ///
    /// ``` pattern: []const u8 ```
    pub fn New3(pattern: []const u8) QtC.QByteArrayMatcher {
        return qtc.QByteArrayMatcher_new3(pattern.ptr);
    }

    /// New4 constructs a new QByteArrayMatcher object.
    ///
    /// ``` pattern: []const u8 ```
    pub fn New4(pattern: []const u8) QtC.QByteArrayMatcher {
        const pattern_Cstring = pattern.ptr;

        return qtc.QByteArrayMatcher_new4(pattern_Cstring);
    }

    /// New5 constructs a new QByteArrayMatcher object.
    ///
    /// ``` other: QtC.QByteArrayMatcher ```
    pub fn New5(other: ?*anyopaque) QtC.QByteArrayMatcher {
        return qtc.QByteArrayMatcher_new5(@ptrCast(other));
    }

    /// New6 constructs a new QByteArrayMatcher object.
    ///
    /// ``` pattern: []const u8, length: i64 ```
    pub fn New6(pattern: []const u8, length: i64) QtC.QByteArrayMatcher {
        const pattern_Cstring = pattern.ptr;

        return qtc.QByteArrayMatcher_new6(pattern_Cstring, @intCast(length));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#operator=)
    ///
    /// ``` self: QtC.QByteArrayMatcher, other: QtC.QByteArrayMatcher ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QByteArrayMatcher_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#setPattern)
    ///
    /// ``` self: QtC.QByteArrayMatcher, pattern: []u8 ```
    pub fn SetPattern(self: ?*anyopaque, pattern: []u8) void {
        const pattern_str = qtc.struct_libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.QByteArrayMatcher_SetPattern(@ptrCast(self), pattern_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
    ///
    /// ``` self: QtC.QByteArrayMatcher, str: []const u8, lenVal: i64 ```
    pub fn IndexIn(self: ?*anyopaque, str: []const u8, lenVal: i64) i64 {
        const str_Cstring = str.ptr;
        return qtc.QByteArrayMatcher_IndexIn(@ptrCast(self), str_Cstring, @intCast(lenVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
    ///
    /// ``` self: QtC.QByteArrayMatcher, data: []const u8 ```
    pub fn IndexInWithData(self: ?*anyopaque, data: []const u8) i64 {
        return qtc.QByteArrayMatcher_IndexInWithData(@ptrCast(self), data.ptr);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#pattern)
    ///
    /// ``` self: QtC.QByteArrayMatcher, allocator: std.mem.Allocator ```
    pub fn Pattern(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QByteArrayMatcher_Pattern(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearraymatcher.Pattern: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
    ///
    /// ``` self: QtC.QByteArrayMatcher, str: []const u8, lenVal: i64, from: i64 ```
    pub fn IndexIn3(self: ?*anyopaque, str: []const u8, lenVal: i64, from: i64) i64 {
        const str_Cstring = str.ptr;
        return qtc.QByteArrayMatcher_IndexIn3(@ptrCast(self), str_Cstring, @intCast(lenVal), @intCast(from));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
    ///
    /// ``` self: QtC.QByteArrayMatcher, data: []const u8, from: i64 ```
    pub fn IndexIn2(self: ?*anyopaque, data: []const u8, from: i64) i64 {
        return qtc.QByteArrayMatcher_IndexIn2(@ptrCast(self), data.ptr, @intCast(from));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#dtor.QByteArrayMatcher)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QByteArrayMatcher ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QByteArrayMatcher_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstaticbytearraymatcherbase.html
pub const qstaticbytearraymatcherbase = struct {
    /// New constructs a new QStaticByteArrayMatcherBase object.
    ///
    /// ``` other: QtC.QStaticByteArrayMatcherBase ```
    pub fn New(other: ?*anyopaque) QtC.QStaticByteArrayMatcherBase {
        return qtc.QStaticByteArrayMatcherBase_new(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QStaticByteArrayMatcherBase, other: QtC.QStaticByteArrayMatcherBase ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStaticByteArrayMatcherBase_CopyAssign(@ptrCast(self), @ptrCast(other));
    }
};
