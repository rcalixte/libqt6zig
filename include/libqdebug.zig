const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QChar = @import("libqt6").QChar;
const QIODevice = @import("libqt6").QIODevice;
const QTextStream = @import("libqt6").QTextStream;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html)
pub const QDebug = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDebug,

    pub const _is_QDebug = {};
    pub const _is_QIODeviceBase = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDebug object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    pub fn new(device: anytype) QDebug {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return .{ .ptr = qtc.QDebug_new(@ptrCast(device.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDebug object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` o: QDebug `
    ///
    pub fn new2(o: anytype) QDebug {
        comptime _ = @TypeOf(o)._is_QDebug;
        return .{ .ptr = qtc.QDebug_new2(@ptrCast(o.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` other: QDebug `
    ///
    pub fn operatorAssign(self: QDebug, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDebug;
        qtc.QDebug_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` other: QDebug `
    ///
    pub fn swap(self: QDebug, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDebug;
        qtc.QDebug_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `resetFormat` instead
    ///
    pub const ResetFormat = resetFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#resetFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    pub fn resetFormat(self: QDebug) QDebug {
        return .{ .ptr = qtc.QDebug_ResetFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `space` instead
    ///
    pub const Space = space;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#space)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    pub fn space(self: QDebug) QDebug {
        return .{ .ptr = qtc.QDebug_Space(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nospace` instead
    ///
    pub const Nospace = nospace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#nospace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    pub fn nospace(self: QDebug) QDebug {
        return .{ .ptr = qtc.QDebug_Nospace(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `maybeSpace` instead
    ///
    pub const MaybeSpace = maybeSpace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#maybeSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    pub fn maybeSpace(self: QDebug) QDebug {
        return .{ .ptr = qtc.QDebug_MaybeSpace(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `verbosity` instead
    ///
    pub const Verbosity = verbosity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#verbosity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` verbosityLevel: i32 `
    ///
    pub fn verbosity(self: QDebug, verbosityLevel: i32) QDebug {
        return .{ .ptr = qtc.QDebug_Verbosity(@ptrCast(self.ptr), @bitCast(verbosityLevel)) };
    }

    /// ### DEPRECATED: Use `verbosity2` instead
    ///
    pub const Verbosity2 = verbosity2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#verbosity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    pub fn verbosity2(self: QDebug) i32 {
        return qtc.QDebug_Verbosity2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVerbosity` instead
    ///
    pub const SetVerbosity = setVerbosity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#setVerbosity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` verbosityLevel: i32 `
    ///
    pub fn setVerbosity(self: QDebug, verbosityLevel: i32) void {
        qtc.QDebug_SetVerbosity(@ptrCast(self.ptr), @bitCast(verbosityLevel));
    }

    /// ### DEPRECATED: Use `autoInsertSpaces` instead
    ///
    pub const AutoInsertSpaces = autoInsertSpaces;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#autoInsertSpaces)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    pub fn autoInsertSpaces(self: QDebug) bool {
        return qtc.QDebug_AutoInsertSpaces(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoInsertSpaces` instead
    ///
    pub const SetAutoInsertSpaces = setAutoInsertSpaces;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#setAutoInsertSpaces)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` b: bool `
    ///
    pub fn setAutoInsertSpaces(self: QDebug, b: bool) void {
        qtc.QDebug_SetAutoInsertSpaces(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `quoteStrings` instead
    ///
    pub const QuoteStrings = quoteStrings;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#quoteStrings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    pub fn quoteStrings(self: QDebug) bool {
        return qtc.QDebug_QuoteStrings(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setQuoteStrings` instead
    ///
    pub const SetQuoteStrings = setQuoteStrings;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#setQuoteStrings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` b: bool `
    ///
    pub fn setQuoteStrings(self: QDebug, b: bool) void {
        qtc.QDebug_SetQuoteStrings(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `quote` instead
    ///
    pub const Quote = quote;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#quote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    pub fn quote(self: QDebug) QDebug {
        return .{ .ptr = qtc.QDebug_Quote(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `noquote` instead
    ///
    pub const Noquote = noquote;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#noquote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    pub fn noquote(self: QDebug) QDebug {
        return .{ .ptr = qtc.QDebug_Noquote(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `maybeQuote` instead
    ///
    pub const MaybeQuote = maybeQuote;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#maybeQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    pub fn maybeQuote(self: QDebug) QDebug {
        return .{ .ptr = qtc.QDebug_MaybeQuote(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft` instead
    ///
    pub const OperatorShiftLeft = operatorShiftLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: QChar `
    ///
    pub fn operatorShiftLeft(self: QDebug, t: anytype) QDebug {
        comptime _ = @TypeOf(t)._is_QChar;
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft(@ptrCast(self.ptr), @ptrCast(t.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft2` instead
    ///
    pub const OperatorShiftLeft2 = operatorShiftLeft2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: bool `
    ///
    pub fn operatorShiftLeft2(self: QDebug, t: bool) QDebug {
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft2(@ptrCast(self.ptr), t) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft3` instead
    ///
    pub const OperatorShiftLeft3 = operatorShiftLeft3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: u8 `
    ///
    pub fn operatorShiftLeft3(self: QDebug, t: u8) QDebug {
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft3(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft4` instead
    ///
    pub const OperatorShiftLeft4 = operatorShiftLeft4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: i16 `
    ///
    pub fn operatorShiftLeft4(self: QDebug, t: i16) QDebug {
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft4(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft5` instead
    ///
    pub const OperatorShiftLeft5 = operatorShiftLeft5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: u16 `
    ///
    pub fn operatorShiftLeft5(self: QDebug, t: u16) QDebug {
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft5(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft8` instead
    ///
    pub const OperatorShiftLeft8 = operatorShiftLeft8;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: i32 `
    ///
    pub fn operatorShiftLeft8(self: QDebug, t: i32) QDebug {
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft8(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft9` instead
    ///
    pub const OperatorShiftLeft9 = operatorShiftLeft9;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: u32 `
    ///
    pub fn operatorShiftLeft9(self: QDebug, t: u32) QDebug {
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft9(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft10` instead
    ///
    pub const OperatorShiftLeft10 = operatorShiftLeft10;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: isize `
    ///
    pub fn operatorShiftLeft10(self: QDebug, t: isize) QDebug {
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft10(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft11` instead
    ///
    pub const OperatorShiftLeft11 = operatorShiftLeft11;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: usize `
    ///
    pub fn operatorShiftLeft11(self: QDebug, t: usize) QDebug {
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft11(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft12` instead
    ///
    pub const OperatorShiftLeft12 = operatorShiftLeft12;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: i64 `
    ///
    pub fn operatorShiftLeft12(self: QDebug, t: i64) QDebug {
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft12(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft13` instead
    ///
    pub const OperatorShiftLeft13 = operatorShiftLeft13;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: u64 `
    ///
    pub fn operatorShiftLeft13(self: QDebug, t: u64) QDebug {
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft13(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft15` instead
    ///
    pub const OperatorShiftLeft15 = operatorShiftLeft15;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: f32 `
    ///
    pub fn operatorShiftLeft15(self: QDebug, t: f32) QDebug {
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft15(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft16` instead
    ///
    pub const OperatorShiftLeft16 = operatorShiftLeft16;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: f64 `
    ///
    pub fn operatorShiftLeft16(self: QDebug, t: f64) QDebug {
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft16(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft17` instead
    ///
    pub const OperatorShiftLeft17 = operatorShiftLeft17;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: [:0]const u8 `
    ///
    pub fn operatorShiftLeft17(self: QDebug, t: [:0]const u8) QDebug {
        const t_Cstring = t.ptr;
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft17(@ptrCast(self.ptr), t_Cstring) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft19` instead
    ///
    pub const OperatorShiftLeft19 = operatorShiftLeft19;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: []const u8 `
    ///
    pub fn operatorShiftLeft19(self: QDebug, t: []const u8) QDebug {
        const t_str = qtc.libqt_string{
            .len = t.len,
            .data = t.ptr,
        };
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft19(@ptrCast(self.ptr), t_str) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft20` instead
    ///
    pub const OperatorShiftLeft20 = operatorShiftLeft20;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` s: []const u8 `
    ///
    pub fn operatorShiftLeft20(self: QDebug, s: []const u8) QDebug {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft20(@ptrCast(self.ptr), s_str) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft22` instead
    ///
    pub const OperatorShiftLeft22 = operatorShiftLeft22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: []u8 `
    ///
    pub fn operatorShiftLeft22(self: QDebug, t: []u8) QDebug {
        const t_str = qtc.libqt_string{
            .len = t.len,
            .data = t.ptr,
        };
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft22(@ptrCast(self.ptr), t_str) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft23` instead
    ///
    pub const OperatorShiftLeft23 = operatorShiftLeft23;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: []u8 `
    ///
    pub fn operatorShiftLeft23(self: QDebug, t: []u8) QDebug {
        const t_str = qtc.libqt_string{
            .len = t.len,
            .data = t.ptr,
        };
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft23(@ptrCast(self.ptr), t_str) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft24` instead
    ///
    pub const OperatorShiftLeft24 = operatorShiftLeft24;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: []u8 `
    ///
    pub fn operatorShiftLeft24(self: QDebug, t: []u8) QDebug {
        const t_str = qtc.libqt_string{
            .len = t.len,
            .data = t.ptr,
        };
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft24(@ptrCast(self.ptr), t_str) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft25` instead
    ///
    pub const OperatorShiftLeft25 = operatorShiftLeft25;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: ?*const anyopaque `
    ///
    pub fn operatorShiftLeft25(self: QDebug, t: ?*const anyopaque) QDebug {
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft25(@ptrCast(self.ptr), @ptrCast(t)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft28` instead
    ///
    pub const OperatorShiftLeft28 = operatorShiftLeft28;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` f: *const fn (funcparam1: QTextStream) callconv(.c) QTextStream `
    ///
    pub fn operatorShiftLeft28(self: QDebug, f: *const fn (QTextStream) callconv(.c) QTextStream) QDebug {
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft28(@ptrCast(self.ptr), @bitCast(@intFromPtr(f))) };
    }

    /// ### DEPRECATED: Use `maybeQuote1` instead
    ///
    pub const MaybeQuote1 = maybeQuote1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#maybeQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` c: u8 `
    ///
    pub fn maybeQuote1(self: QDebug, c: u8) QDebug {
        return .{ .ptr = qtc.QDebug_MaybeQuote1(@ptrCast(self.ptr), @bitCast(c)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#dtor.QDebug)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDebug `
    ///
    pub fn delete(self: QDebug) void {
        qtc.QDebug_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdebugstatesaver.html)
pub const QDebugStateSaver = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebugstatesaver.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDebugStateSaver,

    pub const _is_QDebugStateSaver = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDebugStateSaver object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` dbg: QDebug `
    ///
    pub fn new(dbg: anytype) QDebugStateSaver {
        comptime _ = @TypeOf(dbg)._is_QDebug;
        return .{ .ptr = qtc.QDebugStateSaver_new(@ptrCast(dbg.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebugstatesaver.html#dtor.QDebugStateSaver)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDebugStateSaver `
    ///
    pub fn delete(self: QDebugStateSaver) void {
        qtc.QDebugStateSaver_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnodebug.html)
pub const QNoDebug = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnodebug.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QNoDebug,

    pub const _is_QNoDebug = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QNoDebug object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QNoDebug `
    ///
    pub fn new(other: anytype) QNoDebug {
        comptime _ = @TypeOf(other)._is_QNoDebug;
        return .{ .ptr = qtc.QNoDebug_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QNoDebug object and invalidate the source QNoDebug object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QNoDebug `
    ///
    pub fn new2(other: anytype) QNoDebug {
        comptime _ = @TypeOf(other)._is_QNoDebug;
        return .{ .ptr = qtc.QNoDebug_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QNoDebug `
    ///
    /// ` other: QNoDebug `
    ///
    pub fn copyAssign(self: QNoDebug, other: QNoDebug) void {
        qtc.QNoDebug_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QNoDebug `
    ///
    /// ` other: QNoDebug `
    ///
    pub fn moveAssign(self: QNoDebug, other: QNoDebug) void {
        qtc.QNoDebug_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorShiftLeft` instead
    ///
    pub const OperatorShiftLeft = operatorShiftLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnodebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNoDebug `
    ///
    /// ` param1: *const fn (funcparam1: QTextStream) callconv(.c) QTextStream `
    ///
    pub fn operatorShiftLeft(self: QNoDebug, param1: *const fn (QTextStream) callconv(.c) QTextStream) QNoDebug {
        return .{ .ptr = qtc.QNoDebug_OperatorShiftLeft(@ptrCast(self.ptr), @bitCast(@intFromPtr(param1))) };
    }

    /// ### DEPRECATED: Use `space` instead
    ///
    pub const Space = space;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnodebug.html#space)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNoDebug `
    ///
    pub fn space(self: QNoDebug) QNoDebug {
        return .{ .ptr = qtc.QNoDebug_Space(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nospace` instead
    ///
    pub const Nospace = nospace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnodebug.html#nospace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNoDebug `
    ///
    pub fn nospace(self: QNoDebug) QNoDebug {
        return .{ .ptr = qtc.QNoDebug_Nospace(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `maybeSpace` instead
    ///
    pub const MaybeSpace = maybeSpace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnodebug.html#maybeSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNoDebug `
    ///
    pub fn maybeSpace(self: QNoDebug) QNoDebug {
        return .{ .ptr = qtc.QNoDebug_MaybeSpace(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `quote` instead
    ///
    pub const Quote = quote;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnodebug.html#quote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNoDebug `
    ///
    pub fn quote(self: QNoDebug) QNoDebug {
        return .{ .ptr = qtc.QNoDebug_Quote(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `noquote` instead
    ///
    pub const Noquote = noquote;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnodebug.html#noquote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNoDebug `
    ///
    pub fn noquote(self: QNoDebug) QNoDebug {
        return .{ .ptr = qtc.QNoDebug_Noquote(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `maybeQuote` instead
    ///
    pub const MaybeQuote = maybeQuote;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnodebug.html#maybeQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNoDebug `
    ///
    pub fn maybeQuote(self: QNoDebug) QNoDebug {
        return .{ .ptr = qtc.QNoDebug_MaybeQuote(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `verbosity` instead
    ///
    pub const Verbosity = verbosity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnodebug.html#verbosity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNoDebug `
    ///
    /// ` param1: i32 `
    ///
    pub fn verbosity(self: QNoDebug, param1: i32) QNoDebug {
        return .{ .ptr = qtc.QNoDebug_Verbosity(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `maybeQuote1` instead
    ///
    pub const MaybeQuote1 = maybeQuote1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnodebug.html#maybeQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNoDebug `
    ///
    /// ` param1: u8 `
    ///
    pub fn maybeQuote1(self: QNoDebug, param1: u8) QNoDebug {
        return .{ .ptr = qtc.QNoDebug_MaybeQuote1(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnodebug.html#dtor.QNoDebug)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QNoDebug `
    ///
    pub fn delete(self: QNoDebug) void {
        qtc.QNoDebug_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#public-types)
pub const enums = struct {
    pub const VerbosityLevel = enum(i32) {
        pub const MinimumVerbosity: i32 = 0;
        pub const DefaultVerbosity: i32 = 2;
        pub const MaximumVerbosity: i32 = 7;
    };
};
