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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTextBoundaryFinder object in C++ memory
    ///
    pub fn new() QTextBoundaryFinder {
        return .{ .ptr = qtc.QTextBoundaryFinder_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTextBoundaryFinder object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTextBoundaryFinder `
    ///
    pub fn new2(other: anytype) QTextBoundaryFinder {
        comptime _ = @TypeOf(other)._is_QTextBoundaryFinder;
        return .{ .ptr = qtc.QTextBoundaryFinder_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QTextBoundaryFinder object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qtextboundaryfinder_enums.BoundaryType `
    ///
    /// ` _string: []const u8 `
    ///
    pub fn new3(typeVal: i32, _string: []const u8) QTextBoundaryFinder {
        const string_str = qtc.libqt_string{
            .len = _string.len,
            .data = _string.ptr,
        };
        return .{ .ptr = qtc.QTextBoundaryFinder_new3(@bitCast(typeVal), string_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QTextBoundaryFinder object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qtextboundaryfinder_enums.BoundaryType `
    ///
    /// ` chars: QChar `
    ///
    /// ` length: isize `
    ///
    pub fn new4(typeVal: i32, chars: anytype, length: isize) QTextBoundaryFinder {
        comptime _ = @TypeOf(chars)._is_QChar;
        return .{ .ptr = qtc.QTextBoundaryFinder_new4(@bitCast(typeVal), @ptrCast(chars.ptr), @bitCast(length)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QTextBoundaryFinder object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qtextboundaryfinder_enums.BoundaryType `
    ///
    /// ` str: []const u8 `
    ///
    pub fn new5(typeVal: i32, str: []const u8) QTextBoundaryFinder {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return .{ .ptr = qtc.QTextBoundaryFinder_new5(@bitCast(typeVal), str_str) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QTextBoundaryFinder object in C++ memory
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
    pub fn new6(typeVal: i32, chars: anytype, length: isize, buffer: *u8) QTextBoundaryFinder {
        comptime _ = @TypeOf(chars)._is_QChar;
        return .{ .ptr = qtc.QTextBoundaryFinder_new6(@bitCast(typeVal), @ptrCast(chars.ptr), @bitCast(length), @ptrCast(buffer)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QTextBoundaryFinder object in C++ memory
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
    pub fn new7(typeVal: i32, chars: anytype, length: isize, buffer: *u8, bufferSize: isize) QTextBoundaryFinder {
        comptime _ = @TypeOf(chars)._is_QChar;
        return .{ .ptr = qtc.QTextBoundaryFinder_new7(@bitCast(typeVal), @ptrCast(chars.ptr), @bitCast(length), @ptrCast(buffer), @bitCast(bufferSize)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QTextBoundaryFinder object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qtextboundaryfinder_enums.BoundaryType `
    ///
    /// ` str: []const u8 `
    ///
    /// ` buffer: *u8 `
    ///
    pub fn new8(typeVal: i32, str: []const u8, buffer: *u8) QTextBoundaryFinder {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return .{ .ptr = qtc.QTextBoundaryFinder_new8(@bitCast(typeVal), str_str, @ptrCast(buffer)) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new QTextBoundaryFinder object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qtextboundaryfinder_enums.BoundaryType `
    ///
    /// ` str: []const u8 `
    ///
    /// ` buffer: *u8 `
    ///
    /// ` bufferSize: isize `
    ///
    pub fn new9(typeVal: i32, str: []const u8, buffer: *u8, bufferSize: isize) QTextBoundaryFinder {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return .{ .ptr = qtc.QTextBoundaryFinder_new9(@bitCast(typeVal), str_str, @ptrCast(buffer), @bitCast(bufferSize)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextboundaryfinder.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBoundaryFinder `
    ///
    /// ` other: QTextBoundaryFinder `
    ///
    pub fn operatorAssign(self: QTextBoundaryFinder, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextBoundaryFinder;
        qtc.QTextBoundaryFinder_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextboundaryfinder.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBoundaryFinder `
    ///
    pub fn isValid(self: QTextBoundaryFinder) bool {
        return qtc.QTextBoundaryFinder_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QTextBoundaryFinder) i32 {
        return qtc.QTextBoundaryFinder_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `string` instead
    ///
    pub const String = string;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextboundaryfinder.html#string)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBoundaryFinder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn string(self: QTextBoundaryFinder, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextBoundaryFinder_String(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextBoundaryFinder.string: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toStart` instead
    ///
    pub const ToStart = toStart;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextboundaryfinder.html#toStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBoundaryFinder `
    ///
    pub fn toStart(self: QTextBoundaryFinder) void {
        qtc.QTextBoundaryFinder_ToStart(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toEnd` instead
    ///
    pub const ToEnd = toEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextboundaryfinder.html#toEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBoundaryFinder `
    ///
    pub fn toEnd(self: QTextBoundaryFinder) void {
        qtc.QTextBoundaryFinder_ToEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextboundaryfinder.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBoundaryFinder `
    ///
    pub fn position(self: QTextBoundaryFinder) isize {
        return qtc.QTextBoundaryFinder_Position(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPosition` instead
    ///
    pub const SetPosition = setPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextboundaryfinder.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBoundaryFinder `
    ///
    /// ` _position: isize `
    ///
    pub fn setPosition(self: QTextBoundaryFinder, _position: isize) void {
        qtc.QTextBoundaryFinder_SetPosition(@ptrCast(self.ptr), @bitCast(_position));
    }

    /// ### DEPRECATED: Use `toNextBoundary` instead
    ///
    pub const ToNextBoundary = toNextBoundary;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextboundaryfinder.html#toNextBoundary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBoundaryFinder `
    ///
    pub fn toNextBoundary(self: QTextBoundaryFinder) isize {
        return qtc.QTextBoundaryFinder_ToNextBoundary(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toPreviousBoundary` instead
    ///
    pub const ToPreviousBoundary = toPreviousBoundary;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextboundaryfinder.html#toPreviousBoundary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBoundaryFinder `
    ///
    pub fn toPreviousBoundary(self: QTextBoundaryFinder) isize {
        return qtc.QTextBoundaryFinder_ToPreviousBoundary(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAtBoundary` instead
    ///
    pub const IsAtBoundary = isAtBoundary;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextboundaryfinder.html#isAtBoundary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBoundaryFinder `
    ///
    pub fn isAtBoundary(self: QTextBoundaryFinder) bool {
        return qtc.QTextBoundaryFinder_IsAtBoundary(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `boundaryReasons` instead
    ///
    pub const BoundaryReasons = boundaryReasons;

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
    pub fn boundaryReasons(self: QTextBoundaryFinder) i32 {
        return qtc.QTextBoundaryFinder_BoundaryReasons(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextboundaryfinder.html#dtor.QTextBoundaryFinder)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextBoundaryFinder `
    ///
    pub fn delete(self: QTextBoundaryFinder) void {
        qtc.QTextBoundaryFinder_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextboundaryfinder.html#public-types)
pub const enums = struct {
    pub const BoundaryType = enum {
        pub const Grapheme: i32 = 0;
        pub const Word: i32 = 1;
        pub const Sentence: i32 = 2;
        pub const Line: i32 = 3;
    };

    pub const BoundaryReason = enum {
        pub const NotAtBoundary: i32 = 0;
        pub const BreakOpportunity: i32 = 31;
        pub const StartOfItem: i32 = 32;
        pub const EndOfItem: i32 = 64;
        pub const MandatoryBreak: i32 = 128;
        pub const SoftHyphen: i32 = 256;
    };
};
