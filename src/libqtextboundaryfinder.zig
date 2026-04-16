const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QChar = @import("libqt6").QChar;
const qtextboundaryfinder_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextboundaryfinder.html)
pub const QTextBoundaryFinder = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextboundaryfinder.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextBoundaryFinder,

    pub const _is_QTextBoundaryFinder = {};

    /// New constructs a new QTextBoundaryFinder object.
    ///
    pub fn New() QTextBoundaryFinder {
        return .{ .ptr = qtc.QTextBoundaryFinder_new() };
    }

    /// New2 constructs a new QTextBoundaryFinder object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTextBoundaryFinder `
    ///
    pub fn New2(other: anytype) QTextBoundaryFinder {
        comptime _ = @TypeOf(other)._is_QTextBoundaryFinder;
        return .{ .ptr = qtc.QTextBoundaryFinder_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QTextBoundaryFinder object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qtextboundaryfinder_enums.BoundaryType `
    ///
    /// ` stringVal: []const u8 `
    ///
    pub fn New3(typeVal: i32, stringVal: []const u8) QTextBoundaryFinder {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return .{ .ptr = qtc.QTextBoundaryFinder_new3(@bitCast(typeVal), stringVal_str) };
    }

    /// New4 constructs a new QTextBoundaryFinder object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qtextboundaryfinder_enums.BoundaryType `
    ///
    /// ` chars: QChar `
    ///
    /// ` length: isize `
    ///
    pub fn New4(typeVal: i32, chars: anytype, length: isize) QTextBoundaryFinder {
        comptime _ = @TypeOf(chars)._is_QChar;
        return .{ .ptr = qtc.QTextBoundaryFinder_new4(@bitCast(typeVal), @ptrCast(chars.ptr), @bitCast(length)) };
    }

    /// New5 constructs a new QTextBoundaryFinder object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qtextboundaryfinder_enums.BoundaryType `
    ///
    /// ` chars: QChar `
    ///
    /// ` length: isize `
    ///
    /// ` buffer: *u8 `
    ///
    pub fn New5(typeVal: i32, chars: anytype, length: isize, buffer: *u8) QTextBoundaryFinder {
        comptime _ = @TypeOf(chars)._is_QChar;
        return .{ .ptr = qtc.QTextBoundaryFinder_new5(@bitCast(typeVal), @ptrCast(chars.ptr), @bitCast(length), @ptrCast(buffer)) };
    }

    /// New6 constructs a new QTextBoundaryFinder object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qtextboundaryfinder_enums.BoundaryType `
    ///
    /// ` chars: QChar `
    ///
    /// ` length: isize `
    ///
    /// ` buffer: *u8 `
    ///
    /// ` bufferSize: isize `
    ///
    pub fn New6(typeVal: i32, chars: anytype, length: isize, buffer: *u8, bufferSize: isize) QTextBoundaryFinder {
        comptime _ = @TypeOf(chars)._is_QChar;
        return .{ .ptr = qtc.QTextBoundaryFinder_new6(@bitCast(typeVal), @ptrCast(chars.ptr), @bitCast(length), @ptrCast(buffer), @bitCast(bufferSize)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextboundaryfinder.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBoundaryFinder `
    ///
    /// ` other: QTextBoundaryFinder `
    ///
    pub fn OperatorAssign(self: QTextBoundaryFinder, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextBoundaryFinder;
        qtc.QTextBoundaryFinder_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextboundaryfinder.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBoundaryFinder `
    ///
    pub fn IsValid(self: QTextBoundaryFinder) bool {
        return qtc.QTextBoundaryFinder_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextboundaryfinder.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBoundaryFinder `
    ///
    /// ## Returns:
    ///
    /// ` qtextboundaryfinder_enums.BoundaryType `
    ///
    pub fn Type(self: QTextBoundaryFinder) i32 {
        return qtc.QTextBoundaryFinder_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextboundaryfinder.html#string)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBoundaryFinder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn String(self: QTextBoundaryFinder, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextBoundaryFinder_String(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextboundaryfinder.String: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextboundaryfinder.html#toStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBoundaryFinder `
    ///
    pub fn ToStart(self: QTextBoundaryFinder) void {
        qtc.QTextBoundaryFinder_ToStart(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextboundaryfinder.html#toEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBoundaryFinder `
    ///
    pub fn ToEnd(self: QTextBoundaryFinder) void {
        qtc.QTextBoundaryFinder_ToEnd(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextboundaryfinder.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBoundaryFinder `
    ///
    pub fn Position(self: QTextBoundaryFinder) isize {
        return qtc.QTextBoundaryFinder_Position(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextboundaryfinder.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBoundaryFinder `
    ///
    /// ` position: isize `
    ///
    pub fn SetPosition(self: QTextBoundaryFinder, position: isize) void {
        qtc.QTextBoundaryFinder_SetPosition(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextboundaryfinder.html#toNextBoundary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBoundaryFinder `
    ///
    pub fn ToNextBoundary(self: QTextBoundaryFinder) isize {
        return qtc.QTextBoundaryFinder_ToNextBoundary(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextboundaryfinder.html#toPreviousBoundary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBoundaryFinder `
    ///
    pub fn ToPreviousBoundary(self: QTextBoundaryFinder) isize {
        return qtc.QTextBoundaryFinder_ToPreviousBoundary(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextboundaryfinder.html#isAtBoundary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBoundaryFinder `
    ///
    pub fn IsAtBoundary(self: QTextBoundaryFinder) bool {
        return qtc.QTextBoundaryFinder_IsAtBoundary(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextboundaryfinder.html#boundaryReasons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBoundaryFinder `
    ///
    /// ## Returns:
    ///
    /// ` flag of qtextboundaryfinder_enums.BoundaryReason `
    ///
    pub fn BoundaryReasons(self: QTextBoundaryFinder) i32 {
        return qtc.QTextBoundaryFinder_BoundaryReasons(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextboundaryfinder.html#dtor.QTextBoundaryFinder)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextBoundaryFinder `
    ///
    pub fn Delete(self: QTextBoundaryFinder) void {
        qtc.QTextBoundaryFinder_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextboundaryfinder.html#public-types)
pub const enums = struct {
    pub const BoundaryType = enum(i32) {
        pub const Grapheme: i32 = 0;
        pub const Word: i32 = 1;
        pub const Sentence: i32 = 2;
        pub const Line: i32 = 3;
    };

    pub const BoundaryReason = enum(i32) {
        pub const NotAtBoundary: i32 = 0;
        pub const BreakOpportunity: i32 = 31;
        pub const StartOfItem: i32 = 32;
        pub const EndOfItem: i32 = 64;
        pub const MandatoryBreak: i32 = 128;
        pub const SoftHyphen: i32 = 256;
    };
};
