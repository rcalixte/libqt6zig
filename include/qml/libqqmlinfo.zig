const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QChar = @import("libqt6").QChar;
const QDebug = @import("libqt6").QDebug;
const QObject = @import("libqt6").QObject;
const QQmlError = @import("libqt6").QQmlError;
const QTextStream = @import("libqt6").QTextStream;
const QUrl = @import("libqt6").QUrl;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo-h.html)
pub const qqmlinfo_h = extern struct {
    /// ### DEPRECATED: Use `qmlDebug` instead
    ///
    pub const QmlDebug = qmlDebug;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo-h.html#qmlDebug)
    ///
    /// ## Parameter(s):
    ///
    /// ` me: QObject `
    ///
    pub fn qmlDebug(me: anytype) QQmlInfo {
        comptime _ = @TypeOf(me)._is_QObject;
        return .{ .ptr = qtc.qqmlinfo_h_QmlDebug(@ptrCast(me.ptr)) };
    }

    /// ### DEPRECATED: Use `qmlDebug2` instead
    ///
    pub const QmlDebug2 = qmlDebug2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo-h.html#qmlDebug)
    ///
    /// ## Parameter(s):
    ///
    /// ` me: QObject `
    ///
    /// ` _error: QQmlError `
    ///
    pub fn qmlDebug2(me: anytype, _error: anytype) QQmlInfo {
        comptime _ = @TypeOf(me)._is_QObject;
        comptime _ = @TypeOf(_error)._is_QQmlError;
        return .{ .ptr = qtc.qqmlinfo_h_QmlDebug2(@ptrCast(me.ptr), @ptrCast(_error.ptr)) };
    }

    /// ### DEPRECATED: Use `qmlDebug3` instead
    ///
    pub const QmlDebug3 = qmlDebug3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo-h.html#qmlDebug)
    ///
    /// ## Parameter(s):
    ///
    /// ` me: QObject `
    ///
    /// ` errors: []QQmlError `
    ///
    pub fn qmlDebug3(me: anytype, errors: []QQmlError) QQmlInfo {
        comptime _ = @TypeOf(me)._is_QObject;
        const errors_list = qtc.libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        return .{ .ptr = qtc.qqmlinfo_h_QmlDebug3(@ptrCast(me.ptr), errors_list) };
    }

    /// ### DEPRECATED: Use `qmlInfo` instead
    ///
    pub const QmlInfo = qmlInfo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo-h.html#qmlInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` me: QObject `
    ///
    pub fn qmlInfo(me: anytype) QQmlInfo {
        comptime _ = @TypeOf(me)._is_QObject;
        return .{ .ptr = qtc.qqmlinfo_h_QmlInfo(@ptrCast(me.ptr)) };
    }

    /// ### DEPRECATED: Use `qmlInfo2` instead
    ///
    pub const QmlInfo2 = qmlInfo2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo-h.html#qmlInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` me: QObject `
    ///
    /// ` _error: QQmlError `
    ///
    pub fn qmlInfo2(me: anytype, _error: anytype) QQmlInfo {
        comptime _ = @TypeOf(me)._is_QObject;
        comptime _ = @TypeOf(_error)._is_QQmlError;
        return .{ .ptr = qtc.qqmlinfo_h_QmlInfo2(@ptrCast(me.ptr), @ptrCast(_error.ptr)) };
    }

    /// ### DEPRECATED: Use `qmlInfo3` instead
    ///
    pub const QmlInfo3 = qmlInfo3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo-h.html#qmlInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` me: QObject `
    ///
    /// ` errors: []QQmlError `
    ///
    pub fn qmlInfo3(me: anytype, errors: []QQmlError) QQmlInfo {
        comptime _ = @TypeOf(me)._is_QObject;
        const errors_list = qtc.libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        return .{ .ptr = qtc.qqmlinfo_h_QmlInfo3(@ptrCast(me.ptr), errors_list) };
    }

    /// ### DEPRECATED: Use `qmlWarning` instead
    ///
    pub const QmlWarning = qmlWarning;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo-h.html#qmlWarning)
    ///
    /// ## Parameter(s):
    ///
    /// ` me: QObject `
    ///
    pub fn qmlWarning(me: anytype) QQmlInfo {
        comptime _ = @TypeOf(me)._is_QObject;
        return .{ .ptr = qtc.qqmlinfo_h_QmlWarning(@ptrCast(me.ptr)) };
    }

    /// ### DEPRECATED: Use `qmlWarning2` instead
    ///
    pub const QmlWarning2 = qmlWarning2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo-h.html#qmlWarning)
    ///
    /// ## Parameter(s):
    ///
    /// ` me: QObject `
    ///
    /// ` _error: QQmlError `
    ///
    pub fn qmlWarning2(me: anytype, _error: anytype) QQmlInfo {
        comptime _ = @TypeOf(me)._is_QObject;
        comptime _ = @TypeOf(_error)._is_QQmlError;
        return .{ .ptr = qtc.qqmlinfo_h_QmlWarning2(@ptrCast(me.ptr), @ptrCast(_error.ptr)) };
    }

    /// ### DEPRECATED: Use `qmlWarning3` instead
    ///
    pub const QmlWarning3 = qmlWarning3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo-h.html#qmlWarning)
    ///
    /// ## Parameter(s):
    ///
    /// ` me: QObject `
    ///
    /// ` errors: []QQmlError `
    ///
    pub fn qmlWarning3(me: anytype, errors: []QQmlError) QQmlInfo {
        comptime _ = @TypeOf(me)._is_QObject;
        const errors_list = qtc.libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        return .{ .ptr = qtc.qqmlinfo_h_QmlWarning3(@ptrCast(me.ptr), errors_list) };
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html)
pub const QQmlInfo = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQmlInfo,

    pub const _is_QQmlInfo = {};
    pub const _is_QDebug = {};
    pub const _is_QIODeviceBase = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQmlInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QQmlInfo `
    ///
    pub fn new(param1: anytype) QQmlInfo {
        comptime _ = @TypeOf(param1)._is_QQmlInfo;
        return .{ .ptr = qtc.QQmlInfo_new(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft` instead
    ///
    pub const OperatorShiftLeft = operatorShiftLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    /// ` t: QChar `
    ///
    pub fn operatorShiftLeft(self: QQmlInfo, t: anytype) QQmlInfo {
        comptime _ = @TypeOf(t)._is_QChar;
        return .{ .ptr = qtc.QQmlInfo_OperatorShiftLeft(@ptrCast(self.ptr), @ptrCast(t.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft2` instead
    ///
    pub const OperatorShiftLeft2 = operatorShiftLeft2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    /// ` t: bool `
    ///
    pub fn operatorShiftLeft2(self: QQmlInfo, t: bool) QQmlInfo {
        return .{ .ptr = qtc.QQmlInfo_OperatorShiftLeft2(@ptrCast(self.ptr), t) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft3` instead
    ///
    pub const OperatorShiftLeft3 = operatorShiftLeft3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    /// ` t: u8 `
    ///
    pub fn operatorShiftLeft3(self: QQmlInfo, t: u8) QQmlInfo {
        return .{ .ptr = qtc.QQmlInfo_OperatorShiftLeft3(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft4` instead
    ///
    pub const OperatorShiftLeft4 = operatorShiftLeft4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    /// ` t: i16 `
    ///
    pub fn operatorShiftLeft4(self: QQmlInfo, t: i16) QQmlInfo {
        return .{ .ptr = qtc.QQmlInfo_OperatorShiftLeft4(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft5` instead
    ///
    pub const OperatorShiftLeft5 = operatorShiftLeft5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    /// ` t: u16 `
    ///
    pub fn operatorShiftLeft5(self: QQmlInfo, t: u16) QQmlInfo {
        return .{ .ptr = qtc.QQmlInfo_OperatorShiftLeft5(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft6` instead
    ///
    pub const OperatorShiftLeft6 = operatorShiftLeft6;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    /// ` t: i32 `
    ///
    pub fn operatorShiftLeft6(self: QQmlInfo, t: i32) QQmlInfo {
        return .{ .ptr = qtc.QQmlInfo_OperatorShiftLeft6(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft7` instead
    ///
    pub const OperatorShiftLeft7 = operatorShiftLeft7;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    /// ` t: u32 `
    ///
    pub fn operatorShiftLeft7(self: QQmlInfo, t: u32) QQmlInfo {
        return .{ .ptr = qtc.QQmlInfo_OperatorShiftLeft7(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft8` instead
    ///
    pub const OperatorShiftLeft8 = operatorShiftLeft8;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    /// ` t: isize `
    ///
    pub fn operatorShiftLeft8(self: QQmlInfo, t: isize) QQmlInfo {
        return .{ .ptr = qtc.QQmlInfo_OperatorShiftLeft8(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft9` instead
    ///
    pub const OperatorShiftLeft9 = operatorShiftLeft9;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    /// ` t: usize `
    ///
    pub fn operatorShiftLeft9(self: QQmlInfo, t: usize) QQmlInfo {
        return .{ .ptr = qtc.QQmlInfo_OperatorShiftLeft9(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft10` instead
    ///
    pub const OperatorShiftLeft10 = operatorShiftLeft10;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    /// ` t: i64 `
    ///
    pub fn operatorShiftLeft10(self: QQmlInfo, t: i64) QQmlInfo {
        return .{ .ptr = qtc.QQmlInfo_OperatorShiftLeft10(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft11` instead
    ///
    pub const OperatorShiftLeft11 = operatorShiftLeft11;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    /// ` t: u64 `
    ///
    pub fn operatorShiftLeft11(self: QQmlInfo, t: u64) QQmlInfo {
        return .{ .ptr = qtc.QQmlInfo_OperatorShiftLeft11(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft12` instead
    ///
    pub const OperatorShiftLeft12 = operatorShiftLeft12;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    /// ` t: f32 `
    ///
    pub fn operatorShiftLeft12(self: QQmlInfo, t: f32) QQmlInfo {
        return .{ .ptr = qtc.QQmlInfo_OperatorShiftLeft12(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft13` instead
    ///
    pub const OperatorShiftLeft13 = operatorShiftLeft13;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    /// ` t: f64 `
    ///
    pub fn operatorShiftLeft13(self: QQmlInfo, t: f64) QQmlInfo {
        return .{ .ptr = qtc.QQmlInfo_OperatorShiftLeft13(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft14` instead
    ///
    pub const OperatorShiftLeft14 = operatorShiftLeft14;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    /// ` t: [:0]const u8 `
    ///
    pub fn operatorShiftLeft14(self: QQmlInfo, t: [:0]const u8) QQmlInfo {
        const t_Cstring = t.ptr;
        return .{ .ptr = qtc.QQmlInfo_OperatorShiftLeft14(@ptrCast(self.ptr), t_Cstring) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft15` instead
    ///
    pub const OperatorShiftLeft15 = operatorShiftLeft15;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    /// ` t: []const u8 `
    ///
    pub fn operatorShiftLeft15(self: QQmlInfo, t: []const u8) QQmlInfo {
        const t_str = qtc.libqt_string{
            .len = t.len,
            .data = t.ptr,
        };
        return .{ .ptr = qtc.QQmlInfo_OperatorShiftLeft15(@ptrCast(self.ptr), t_str) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft16` instead
    ///
    pub const OperatorShiftLeft16 = operatorShiftLeft16;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    /// ` t: []const u8 `
    ///
    pub fn operatorShiftLeft16(self: QQmlInfo, t: []const u8) QQmlInfo {
        const t_str = qtc.libqt_string{
            .len = t.len,
            .data = t.ptr,
        };
        return .{ .ptr = qtc.QQmlInfo_OperatorShiftLeft16(@ptrCast(self.ptr), t_str) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft17` instead
    ///
    pub const OperatorShiftLeft17 = operatorShiftLeft17;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    /// ` t: []u8 `
    ///
    pub fn operatorShiftLeft17(self: QQmlInfo, t: []u8) QQmlInfo {
        const t_str = qtc.libqt_string{
            .len = t.len,
            .data = t.ptr,
        };
        return .{ .ptr = qtc.QQmlInfo_OperatorShiftLeft17(@ptrCast(self.ptr), t_str) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft18` instead
    ///
    pub const OperatorShiftLeft18 = operatorShiftLeft18;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    /// ` t: []u8 `
    ///
    pub fn operatorShiftLeft18(self: QQmlInfo, t: []u8) QQmlInfo {
        const t_str = qtc.libqt_string{
            .len = t.len,
            .data = t.ptr,
        };
        return .{ .ptr = qtc.QQmlInfo_OperatorShiftLeft18(@ptrCast(self.ptr), t_str) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft19` instead
    ///
    pub const OperatorShiftLeft19 = operatorShiftLeft19;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    /// ` t: ?*const anyopaque `
    ///
    pub fn operatorShiftLeft19(self: QQmlInfo, t: ?*const anyopaque) QQmlInfo {
        return .{ .ptr = qtc.QQmlInfo_OperatorShiftLeft19(@ptrCast(self.ptr), @ptrCast(t)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft20` instead
    ///
    pub const OperatorShiftLeft20 = operatorShiftLeft20;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    /// ` f: *const fn (funcparam1: QTextStream) callconv(.c) QTextStream `
    ///
    pub fn operatorShiftLeft20(self: QQmlInfo, f: *const fn (QTextStream) callconv(.c) QTextStream) QQmlInfo {
        return .{ .ptr = qtc.QQmlInfo_OperatorShiftLeft20(@ptrCast(self.ptr), @bitCast(@intFromPtr(f))) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft22` instead
    ///
    pub const OperatorShiftLeft22 = operatorShiftLeft22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    /// ` t: QUrl `
    ///
    pub fn operatorShiftLeft22(self: QQmlInfo, t: anytype) QQmlInfo {
        comptime _ = @TypeOf(t)._is_QUrl;
        return .{ .ptr = qtc.QQmlInfo_OperatorShiftLeft22(@ptrCast(self.ptr), @ptrCast(t.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// Inherited from QDebug
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    /// ` other: QDebug `
    ///
    pub fn operatorAssign(self: QQmlInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDebug;
        qtc.QDebug_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// Inherited from QDebug
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    /// ` other: QDebug `
    ///
    pub fn swap(self: QQmlInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDebug;
        qtc.QDebug_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `resetFormat` instead
    ///
    pub const ResetFormat = resetFormat;

    /// Inherited from QDebug
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#resetFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    pub fn resetFormat(self: QQmlInfo) QDebug {
        return .{ .ptr = qtc.QDebug_ResetFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `space` instead
    ///
    pub const Space = space;

    /// Inherited from QDebug
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#space)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    pub fn space(self: QQmlInfo) QDebug {
        return .{ .ptr = qtc.QDebug_Space(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nospace` instead
    ///
    pub const Nospace = nospace;

    /// Inherited from QDebug
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#nospace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    pub fn nospace(self: QQmlInfo) QDebug {
        return .{ .ptr = qtc.QDebug_Nospace(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `maybeSpace` instead
    ///
    pub const MaybeSpace = maybeSpace;

    /// Inherited from QDebug
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#maybeSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    pub fn maybeSpace(self: QQmlInfo) QDebug {
        return .{ .ptr = qtc.QDebug_MaybeSpace(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `verbosity` instead
    ///
    pub const Verbosity = verbosity;

    /// Inherited from QDebug
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#verbosity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    /// ` verbosityLevel: i32 `
    ///
    pub fn verbosity(self: QQmlInfo, verbosityLevel: i32) QDebug {
        return .{ .ptr = qtc.QDebug_Verbosity(@ptrCast(self.ptr), @bitCast(verbosityLevel)) };
    }

    /// ### DEPRECATED: Use `verbosity2` instead
    ///
    pub const Verbosity2 = verbosity2;

    /// Inherited from QDebug
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#verbosity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    pub fn verbosity2(self: QQmlInfo) i32 {
        return qtc.QDebug_Verbosity2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVerbosity` instead
    ///
    pub const SetVerbosity = setVerbosity;

    /// Inherited from QDebug
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#setVerbosity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    /// ` verbosityLevel: i32 `
    ///
    pub fn setVerbosity(self: QQmlInfo, verbosityLevel: i32) void {
        qtc.QDebug_SetVerbosity(@ptrCast(self.ptr), @bitCast(verbosityLevel));
    }

    /// ### DEPRECATED: Use `autoInsertSpaces` instead
    ///
    pub const AutoInsertSpaces = autoInsertSpaces;

    /// Inherited from QDebug
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#autoInsertSpaces)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    pub fn autoInsertSpaces(self: QQmlInfo) bool {
        return qtc.QDebug_AutoInsertSpaces(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoInsertSpaces` instead
    ///
    pub const SetAutoInsertSpaces = setAutoInsertSpaces;

    /// Inherited from QDebug
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#setAutoInsertSpaces)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    /// ` b: bool `
    ///
    pub fn setAutoInsertSpaces(self: QQmlInfo, b: bool) void {
        qtc.QDebug_SetAutoInsertSpaces(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `quoteStrings` instead
    ///
    pub const QuoteStrings = quoteStrings;

    /// Inherited from QDebug
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#quoteStrings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    pub fn quoteStrings(self: QQmlInfo) bool {
        return qtc.QDebug_QuoteStrings(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setQuoteStrings` instead
    ///
    pub const SetQuoteStrings = setQuoteStrings;

    /// Inherited from QDebug
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#setQuoteStrings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    /// ` b: bool `
    ///
    pub fn setQuoteStrings(self: QQmlInfo, b: bool) void {
        qtc.QDebug_SetQuoteStrings(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `quote` instead
    ///
    pub const Quote = quote;

    /// Inherited from QDebug
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#quote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    pub fn quote(self: QQmlInfo) QDebug {
        return .{ .ptr = qtc.QDebug_Quote(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `noquote` instead
    ///
    pub const Noquote = noquote;

    /// Inherited from QDebug
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#noquote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    pub fn noquote(self: QQmlInfo) QDebug {
        return .{ .ptr = qtc.QDebug_Noquote(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `maybeQuote` instead
    ///
    pub const MaybeQuote = maybeQuote;

    /// Inherited from QDebug
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#maybeQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    pub fn maybeQuote(self: QQmlInfo) QDebug {
        return .{ .ptr = qtc.QDebug_MaybeQuote(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft23` instead
    ///
    pub const OperatorShiftLeft23 = operatorShiftLeft23;

    /// Inherited from QDebug
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    /// ` t: []u8 `
    ///
    pub fn operatorShiftLeft23(self: QQmlInfo, t: []u8) QDebug {
        const t_str = qtc.libqt_string{
            .len = t.len,
            .data = t.ptr,
        };
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft23(@ptrCast(self.ptr), t_str) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft24` instead
    ///
    pub const OperatorShiftLeft24 = operatorShiftLeft24;

    /// Inherited from QDebug
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    /// ` t: []u8 `
    ///
    pub fn operatorShiftLeft24(self: QQmlInfo, t: []u8) QDebug {
        const t_str = qtc.libqt_string{
            .len = t.len,
            .data = t.ptr,
        };
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft24(@ptrCast(self.ptr), t_str) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft25` instead
    ///
    pub const OperatorShiftLeft25 = operatorShiftLeft25;

    /// Inherited from QDebug
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    /// ` t: ?*const anyopaque `
    ///
    pub fn operatorShiftLeft25(self: QQmlInfo, t: ?*const anyopaque) QDebug {
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft25(@ptrCast(self.ptr), @ptrCast(t)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft28` instead
    ///
    pub const OperatorShiftLeft28 = operatorShiftLeft28;

    /// Inherited from QDebug
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    /// ` f: *const fn (funcparam1: QTextStream) callconv(.c) QTextStream `
    ///
    pub fn operatorShiftLeft28(self: QQmlInfo, f: *const fn (QTextStream) callconv(.c) QTextStream) QDebug {
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft28(@ptrCast(self.ptr), @bitCast(@intFromPtr(f))) };
    }

    /// ### DEPRECATED: Use `maybeQuote1` instead
    ///
    pub const MaybeQuote1 = maybeQuote1;

    /// Inherited from QDebug
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#maybeQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlInfo `
    ///
    /// ` c: u8 `
    ///
    pub fn maybeQuote1(self: QQmlInfo, c: u8) QDebug {
        return .{ .ptr = qtc.QDebug_MaybeQuote1(@ptrCast(self.ptr), @bitCast(c)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#dtor.QQmlInfo)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQmlInfo `
    ///
    pub fn delete(self: QQmlInfo) void {
        qtc.QQmlInfo_Delete(@ptrCast(self.ptr));
    }
};
