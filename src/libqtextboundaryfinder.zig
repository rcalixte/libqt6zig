const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qtextboundaryfinder_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qtextboundaryfinder.html
pub const qtextboundaryfinder = struct {
    /// New constructs a new QTextBoundaryFinder object.
    ///
    ///
    pub fn New() QtC.QTextBoundaryFinder {
        return qtc.QTextBoundaryFinder_new();
    }

    /// New2 constructs a new QTextBoundaryFinder object.
    ///
    /// ``` other: QtC.QTextBoundaryFinder ```
    pub fn New2(other: ?*anyopaque) QtC.QTextBoundaryFinder {
        return qtc.QTextBoundaryFinder_new2(@ptrCast(other));
    }

    /// New3 constructs a new QTextBoundaryFinder object.
    ///
    /// ``` typeVal: qtextboundaryfinder_enums.BoundaryType, stringVal: []const u8 ```
    pub fn New3(typeVal: i64, stringVal: []const u8) QtC.QTextBoundaryFinder {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };

        return qtc.QTextBoundaryFinder_new3(@intCast(typeVal), stringVal_str);
    }

    /// New4 constructs a new QTextBoundaryFinder object.
    ///
    /// ``` typeVal: qtextboundaryfinder_enums.BoundaryType, chars: QtC.QChar, length: i64 ```
    pub fn New4(typeVal: i64, chars: ?*anyopaque, length: i64) QtC.QTextBoundaryFinder {
        return qtc.QTextBoundaryFinder_new4(@intCast(typeVal), @ptrCast(chars), @intCast(length));
    }

    /// New5 constructs a new QTextBoundaryFinder object.
    ///
    /// ``` typeVal: qtextboundaryfinder_enums.BoundaryType, chars: QtC.QChar, length: i64, buffer: *u8 ```
    pub fn New5(typeVal: i64, chars: ?*anyopaque, length: i64, buffer: *u8) QtC.QTextBoundaryFinder {
        return qtc.QTextBoundaryFinder_new5(@intCast(typeVal), @ptrCast(chars), @intCast(length), @ptrCast(buffer));
    }

    /// New6 constructs a new QTextBoundaryFinder object.
    ///
    /// ``` typeVal: qtextboundaryfinder_enums.BoundaryType, chars: QtC.QChar, length: i64, buffer: *u8, bufferSize: i64 ```
    pub fn New6(typeVal: i64, chars: ?*anyopaque, length: i64, buffer: *u8, bufferSize: i64) QtC.QTextBoundaryFinder {
        return qtc.QTextBoundaryFinder_new6(@intCast(typeVal), @ptrCast(chars), @intCast(length), @ptrCast(buffer), @intCast(bufferSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#operator-eq)
    ///
    /// ``` self: QtC.QTextBoundaryFinder, other: QtC.QTextBoundaryFinder ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextBoundaryFinder_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#isValid)
    ///
    /// ``` self: QtC.QTextBoundaryFinder ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QTextBoundaryFinder_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#type)
    ///
    /// ``` self: QtC.QTextBoundaryFinder ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QTextBoundaryFinder_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#string)
    ///
    /// ``` self: QtC.QTextBoundaryFinder, allocator: std.mem.Allocator ```
    pub fn String(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextBoundaryFinder_String(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextboundaryfinder.String: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#toStart)
    ///
    /// ``` self: QtC.QTextBoundaryFinder ```
    pub fn ToStart(self: ?*anyopaque) void {
        qtc.QTextBoundaryFinder_ToStart(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#toEnd)
    ///
    /// ``` self: QtC.QTextBoundaryFinder ```
    pub fn ToEnd(self: ?*anyopaque) void {
        qtc.QTextBoundaryFinder_ToEnd(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#position)
    ///
    /// ``` self: QtC.QTextBoundaryFinder ```
    pub fn Position(self: ?*anyopaque) i64 {
        return qtc.QTextBoundaryFinder_Position(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#setPosition)
    ///
    /// ``` self: QtC.QTextBoundaryFinder, position: i64 ```
    pub fn SetPosition(self: ?*anyopaque, position: i64) void {
        qtc.QTextBoundaryFinder_SetPosition(@ptrCast(self), @intCast(position));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#toNextBoundary)
    ///
    /// ``` self: QtC.QTextBoundaryFinder ```
    pub fn ToNextBoundary(self: ?*anyopaque) i64 {
        return qtc.QTextBoundaryFinder_ToNextBoundary(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#toPreviousBoundary)
    ///
    /// ``` self: QtC.QTextBoundaryFinder ```
    pub fn ToPreviousBoundary(self: ?*anyopaque) i64 {
        return qtc.QTextBoundaryFinder_ToPreviousBoundary(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#isAtBoundary)
    ///
    /// ``` self: QtC.QTextBoundaryFinder ```
    pub fn IsAtBoundary(self: ?*anyopaque) bool {
        return qtc.QTextBoundaryFinder_IsAtBoundary(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#boundaryReasons)
    ///
    /// ``` self: QtC.QTextBoundaryFinder ```
    pub fn BoundaryReasons(self: ?*anyopaque) i64 {
        return qtc.QTextBoundaryFinder_BoundaryReasons(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#dtor.QTextBoundaryFinder)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTextBoundaryFinder ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextBoundaryFinder_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextboundaryfinder.html#types
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
