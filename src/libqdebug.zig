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

    /// New constructs a new QDebug object.
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    pub fn New(device: anytype) QDebug {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return .{ .ptr = qtc.QDebug_new(@ptrCast(device.ptr)) };
    }

    /// New2 constructs a new QDebug object.
    ///
    /// ## Parameter(s):
    ///
    /// ` o: QDebug `
    ///
    pub fn New2(o: anytype) QDebug {
        comptime _ = @TypeOf(o)._is_QDebug;
        return .{ .ptr = qtc.QDebug_new2(@ptrCast(o.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` other: QDebug `
    ///
    pub fn OperatorAssign(self: QDebug, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDebug;
        qtc.QDebug_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` other: QDebug `
    ///
    pub fn Swap(self: QDebug, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDebug;
        qtc.QDebug_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#resetFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    pub fn ResetFormat(self: QDebug) QDebug {
        return .{ .ptr = qtc.QDebug_ResetFormat(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#space)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    pub fn Space(self: QDebug) QDebug {
        return .{ .ptr = qtc.QDebug_Space(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#nospace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    pub fn Nospace(self: QDebug) QDebug {
        return .{ .ptr = qtc.QDebug_Nospace(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#maybeSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    pub fn MaybeSpace(self: QDebug) QDebug {
        return .{ .ptr = qtc.QDebug_MaybeSpace(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#verbosity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` verbosityLevel: i32 `
    ///
    pub fn Verbosity(self: QDebug, verbosityLevel: i32) QDebug {
        return .{ .ptr = qtc.QDebug_Verbosity(@ptrCast(self.ptr), @bitCast(verbosityLevel)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#verbosity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    pub fn Verbosity2(self: QDebug) i32 {
        return qtc.QDebug_Verbosity2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#setVerbosity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` verbosityLevel: i32 `
    ///
    pub fn SetVerbosity(self: QDebug, verbosityLevel: i32) void {
        qtc.QDebug_SetVerbosity(@ptrCast(self.ptr), @bitCast(verbosityLevel));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#autoInsertSpaces)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    pub fn AutoInsertSpaces(self: QDebug) bool {
        return qtc.QDebug_AutoInsertSpaces(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#setAutoInsertSpaces)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` b: bool `
    ///
    pub fn SetAutoInsertSpaces(self: QDebug, b: bool) void {
        qtc.QDebug_SetAutoInsertSpaces(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#quoteStrings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    pub fn QuoteStrings(self: QDebug) bool {
        return qtc.QDebug_QuoteStrings(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#setQuoteStrings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` b: bool `
    ///
    pub fn SetQuoteStrings(self: QDebug, b: bool) void {
        qtc.QDebug_SetQuoteStrings(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#quote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    pub fn Quote(self: QDebug) QDebug {
        return .{ .ptr = qtc.QDebug_Quote(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#noquote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    pub fn Noquote(self: QDebug) QDebug {
        return .{ .ptr = qtc.QDebug_Noquote(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#maybeQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    pub fn MaybeQuote(self: QDebug) QDebug {
        return .{ .ptr = qtc.QDebug_MaybeQuote(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: QChar `
    ///
    pub fn OperatorShiftLeft(self: QDebug, t: anytype) QDebug {
        comptime _ = @TypeOf(t)._is_QChar;
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft(@ptrCast(self.ptr), @ptrCast(t.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: bool `
    ///
    pub fn OperatorShiftLeft2(self: QDebug, t: bool) QDebug {
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft2(@ptrCast(self.ptr), t) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: u8 `
    ///
    pub fn OperatorShiftLeft3(self: QDebug, t: u8) QDebug {
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft3(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: i16 `
    ///
    pub fn OperatorShiftLeft4(self: QDebug, t: i16) QDebug {
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft4(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: u16 `
    ///
    pub fn OperatorShiftLeft5(self: QDebug, t: u16) QDebug {
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft5(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: i32 `
    ///
    pub fn OperatorShiftLeft8(self: QDebug, t: i32) QDebug {
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft8(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: u32 `
    ///
    pub fn OperatorShiftLeft9(self: QDebug, t: u32) QDebug {
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft9(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: isize `
    ///
    pub fn OperatorShiftLeft10(self: QDebug, t: isize) QDebug {
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft10(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: usize `
    ///
    pub fn OperatorShiftLeft11(self: QDebug, t: usize) QDebug {
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft11(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: i64 `
    ///
    pub fn OperatorShiftLeft12(self: QDebug, t: i64) QDebug {
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft12(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: u64 `
    ///
    pub fn OperatorShiftLeft13(self: QDebug, t: u64) QDebug {
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft13(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: f32 `
    ///
    pub fn OperatorShiftLeft15(self: QDebug, t: f32) QDebug {
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft15(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: f64 `
    ///
    pub fn OperatorShiftLeft16(self: QDebug, t: f64) QDebug {
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft16(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: [:0]const u8 `
    ///
    pub fn OperatorShiftLeft17(self: QDebug, t: [:0]const u8) QDebug {
        const t_Cstring = t.ptr;
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft17(@ptrCast(self.ptr), t_Cstring) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: []const u8 `
    ///
    pub fn OperatorShiftLeft19(self: QDebug, t: []const u8) QDebug {
        const t_str = qtc.libqt_string{
            .len = t.len,
            .data = t.ptr,
        };
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft19(@ptrCast(self.ptr), t_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: []u8 `
    ///
    pub fn OperatorShiftLeft23(self: QDebug, t: []u8) QDebug {
        const t_str = qtc.libqt_string{
            .len = t.len,
            .data = t.ptr,
        };
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft23(@ptrCast(self.ptr), t_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: []u8 `
    ///
    pub fn OperatorShiftLeft24(self: QDebug, t: []u8) QDebug {
        const t_str = qtc.libqt_string{
            .len = t.len,
            .data = t.ptr,
        };
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft24(@ptrCast(self.ptr), t_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` t: ?*const anyopaque `
    ///
    pub fn OperatorShiftLeft25(self: QDebug, t: ?*const anyopaque) QDebug {
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft25(@ptrCast(self.ptr), @ptrCast(t)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` f: *const fn (funcparam1: QTextStream) callconv(.c) QTextStream `
    ///
    pub fn OperatorShiftLeft28(self: QDebug, f: *const fn (QTextStream) callconv(.c) QTextStream) QDebug {
        return .{ .ptr = qtc.QDebug_OperatorShiftLeft28(@ptrCast(self.ptr), @bitCast(@intFromPtr(f))) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#maybeQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDebug `
    ///
    /// ` c: u8 `
    ///
    pub fn MaybeQuote1(self: QDebug, c: u8) QDebug {
        return .{ .ptr = qtc.QDebug_MaybeQuote1(@ptrCast(self.ptr), @bitCast(c)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#dtor.QDebug)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDebug `
    ///
    pub fn Delete(self: QDebug) void {
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

    /// New constructs a new QDebugStateSaver object.
    ///
    /// ## Parameter(s):
    ///
    /// ` dbg: QDebug `
    ///
    pub fn New(dbg: anytype) QDebugStateSaver {
        comptime _ = @TypeOf(dbg)._is_QDebug;
        return .{ .ptr = qtc.QDebugStateSaver_new(@ptrCast(dbg.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebugstatesaver.html#dtor.QDebugStateSaver)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDebugStateSaver `
    ///
    pub fn Delete(self: QDebugStateSaver) void {
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

    /// New constructs a new QNoDebug object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QNoDebug `
    ///
    pub fn New(other: anytype) QNoDebug {
        comptime _ = @TypeOf(other)._is_QNoDebug;
        return .{ .ptr = qtc.QNoDebug_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QNoDebug object and invalidates the source QNoDebug object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QNoDebug `
    ///
    pub fn New2(other: anytype) QNoDebug {
        comptime _ = @TypeOf(other)._is_QNoDebug;
        return .{ .ptr = qtc.QNoDebug_new2(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QNoDebug `
    ///
    /// ` other: QNoDebug `
    ///
    pub fn CopyAssign(self: QNoDebug, other: QNoDebug) void {
        qtc.QNoDebug_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QNoDebug `
    ///
    /// ` other: QNoDebug `
    ///
    pub fn MoveAssign(self: QNoDebug, other: QNoDebug) void {
        qtc.QNoDebug_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnodebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNoDebug `
    ///
    /// ` param1: *const fn (funcparam1: QTextStream) callconv(.c) QTextStream `
    ///
    pub fn OperatorShiftLeft(self: QNoDebug, param1: *const fn (QTextStream) callconv(.c) QTextStream) QNoDebug {
        return .{ .ptr = qtc.QNoDebug_OperatorShiftLeft(@ptrCast(self.ptr), @bitCast(@intFromPtr(param1))) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnodebug.html#space)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNoDebug `
    ///
    pub fn Space(self: QNoDebug) QNoDebug {
        return .{ .ptr = qtc.QNoDebug_Space(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnodebug.html#nospace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNoDebug `
    ///
    pub fn Nospace(self: QNoDebug) QNoDebug {
        return .{ .ptr = qtc.QNoDebug_Nospace(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnodebug.html#maybeSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNoDebug `
    ///
    pub fn MaybeSpace(self: QNoDebug) QNoDebug {
        return .{ .ptr = qtc.QNoDebug_MaybeSpace(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnodebug.html#quote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNoDebug `
    ///
    pub fn Quote(self: QNoDebug) QNoDebug {
        return .{ .ptr = qtc.QNoDebug_Quote(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnodebug.html#noquote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNoDebug `
    ///
    pub fn Noquote(self: QNoDebug) QNoDebug {
        return .{ .ptr = qtc.QNoDebug_Noquote(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnodebug.html#maybeQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNoDebug `
    ///
    pub fn MaybeQuote(self: QNoDebug) QNoDebug {
        return .{ .ptr = qtc.QNoDebug_MaybeQuote(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnodebug.html#verbosity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNoDebug `
    ///
    /// ` param1: i32 `
    ///
    pub fn Verbosity(self: QNoDebug, param1: i32) QNoDebug {
        return .{ .ptr = qtc.QNoDebug_Verbosity(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnodebug.html#maybeQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNoDebug `
    ///
    /// ` param1: u8 `
    ///
    pub fn MaybeQuote1(self: QNoDebug, param1: u8) QNoDebug {
        return .{ .ptr = qtc.QNoDebug_MaybeQuote1(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnodebug.html#dtor.QNoDebug)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QNoDebug `
    ///
    pub fn Delete(self: QNoDebug) void {
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
