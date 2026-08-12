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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QByteArrayMatcher object in C++ memory
    ///
    pub fn new() QByteArrayMatcher {
        return .{ .ptr = qtc.QByteArrayMatcher_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QByteArrayMatcher object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _pattern: []u8 `
    ///
    pub fn new2(_pattern: []u8) QByteArrayMatcher {
        const pattern_str = qtc.libqt_string{
            .len = _pattern.len,
            .data = _pattern.ptr,
        };
        return .{ .ptr = qtc.QByteArrayMatcher_new2(pattern_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QByteArrayMatcher object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _pattern: []u8 `
    ///
    pub fn new3(_pattern: []u8) QByteArrayMatcher {
        const pattern_str = qtc.libqt_string{
            .len = _pattern.len,
            .data = _pattern.ptr,
        };
        return .{ .ptr = qtc.QByteArrayMatcher_new3(pattern_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QByteArrayMatcher object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _pattern: [:0]const u8 `
    ///
    pub fn new4(_pattern: [:0]const u8) QByteArrayMatcher {
        const pattern_Cstring = _pattern.ptr;
        return .{ .ptr = qtc.QByteArrayMatcher_new4(pattern_Cstring) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QByteArrayMatcher object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QByteArrayMatcher `
    ///
    pub fn new5(other: anytype) QByteArrayMatcher {
        comptime _ = @TypeOf(other)._is_QByteArrayMatcher;
        return .{ .ptr = qtc.QByteArrayMatcher_new5(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QByteArrayMatcher object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _pattern: [:0]const u8 `
    ///
    /// ` length: isize `
    ///
    pub fn new6(_pattern: [:0]const u8, length: isize) QByteArrayMatcher {
        const pattern_Cstring = _pattern.ptr;
        return .{ .ptr = qtc.QByteArrayMatcher_new6(pattern_Cstring, @bitCast(length)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayMatcher `
    ///
    /// ` other: QByteArrayMatcher `
    ///
    pub fn operatorAssign(self: QByteArrayMatcher, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QByteArrayMatcher;
        qtc.QByteArrayMatcher_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setPattern` instead
    ///
    pub const SetPattern = setPattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html#setPattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayMatcher `
    ///
    /// ` _pattern: []u8 `
    ///
    pub fn setPattern(self: QByteArrayMatcher, _pattern: []u8) void {
        const pattern_str = qtc.libqt_string{
            .len = _pattern.len,
            .data = _pattern.ptr,
        };
        qtc.QByteArrayMatcher_SetPattern(@ptrCast(self.ptr), pattern_str);
    }

    /// ### DEPRECATED: Use `indexIn` instead
    ///
    pub const IndexIn = indexIn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayMatcher `
    ///
    /// ` str: [:0]const u8 `
    ///
    /// ` len: isize `
    ///
    pub fn indexIn(self: QByteArrayMatcher, str: [:0]const u8, len: isize) isize {
        const str_Cstring = str.ptr;
        return qtc.QByteArrayMatcher_IndexIn(@ptrCast(self.ptr), str_Cstring, @bitCast(len));
    }

    /// ### DEPRECATED: Use `indexIn2` instead
    ///
    pub const IndexIn2 = indexIn2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayMatcher `
    ///
    /// ` data: []u8 `
    ///
    pub fn indexIn2(self: QByteArrayMatcher, data: []u8) isize {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QByteArrayMatcher_IndexIn2(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `pattern` instead
    ///
    pub const Pattern = pattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html#pattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayMatcher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn pattern(self: QByteArrayMatcher, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArrayMatcher_Pattern(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QByteArrayMatcher.pattern: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `indexIn3` instead
    ///
    pub const IndexIn3 = indexIn3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArrayMatcher `
    ///
    /// ` str: [:0]const u8 `
    ///
    /// ` len: isize `
    ///
    /// ` from: isize `
    ///
    pub fn indexIn3(self: QByteArrayMatcher, str: [:0]const u8, len: isize, from: isize) isize {
        const str_Cstring = str.ptr;
        return qtc.QByteArrayMatcher_IndexIn3(@ptrCast(self.ptr), str_Cstring, @bitCast(len), @bitCast(from));
    }

    /// ### DEPRECATED: Use `indexIn22` instead
    ///
    pub const IndexIn22 = indexIn22;

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
    pub fn indexIn22(self: QByteArrayMatcher, data: []u8, from: isize) isize {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QByteArrayMatcher_IndexIn22(@ptrCast(self.ptr), data_str, @bitCast(from));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html#dtor.QByteArrayMatcher)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QByteArrayMatcher `
    ///
    pub fn delete(self: QByteArrayMatcher) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStaticByteArrayMatcherBase object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStaticByteArrayMatcherBase `
    ///
    pub fn new(other: anytype) QStaticByteArrayMatcherBase {
        comptime _ = @TypeOf(other)._is_QStaticByteArrayMatcherBase;
        return .{ .ptr = qtc.QStaticByteArrayMatcherBase_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QStaticByteArrayMatcherBase `
    ///
    /// ` other: QStaticByteArrayMatcherBase `
    ///
    pub fn copyAssign(self: QStaticByteArrayMatcherBase, other: QStaticByteArrayMatcherBase) void {
        qtc.QStaticByteArrayMatcherBase_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }
};
