const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html)
pub const qdebug = struct {
    /// New constructs a new QDebug object.
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QtC.QIODevice `
    ///
    pub fn New(device: ?*anyopaque) QtC.QDebug {
        return qtc.QDebug_new(@ptrCast(device));
    }

    /// New2 constructs a new QDebug object.
    ///
    /// ## Parameter(s):
    ///
    /// ` o: QtC.QDebug `
    ///
    pub fn New2(o: ?*anyopaque) QtC.QDebug {
        return qtc.QDebug_new2(@ptrCast(o));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    /// ` other: QtC.QDebug `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDebug_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    /// ` other: QtC.QDebug `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDebug_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#resetFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    pub fn ResetFormat(self: ?*anyopaque) QtC.QDebug {
        return qtc.QDebug_ResetFormat(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#space)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    pub fn Space(self: ?*anyopaque) QtC.QDebug {
        return qtc.QDebug_Space(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#nospace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    pub fn Nospace(self: ?*anyopaque) QtC.QDebug {
        return qtc.QDebug_Nospace(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#maybeSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    pub fn MaybeSpace(self: ?*anyopaque) QtC.QDebug {
        return qtc.QDebug_MaybeSpace(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#verbosity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    /// ` verbosityLevel: i32 `
    ///
    pub fn Verbosity(self: ?*anyopaque, verbosityLevel: i32) QtC.QDebug {
        return qtc.QDebug_Verbosity(@ptrCast(self), @intCast(verbosityLevel));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#verbosity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    pub fn Verbosity2(self: ?*anyopaque) i32 {
        return qtc.QDebug_Verbosity2(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#setVerbosity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    /// ` verbosityLevel: i32 `
    ///
    pub fn SetVerbosity(self: ?*anyopaque, verbosityLevel: i32) void {
        qtc.QDebug_SetVerbosity(@ptrCast(self), @intCast(verbosityLevel));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#autoInsertSpaces)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    pub fn AutoInsertSpaces(self: ?*anyopaque) bool {
        return qtc.QDebug_AutoInsertSpaces(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#setAutoInsertSpaces)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    /// ` b: bool `
    ///
    pub fn SetAutoInsertSpaces(self: ?*anyopaque, b: bool) void {
        qtc.QDebug_SetAutoInsertSpaces(@ptrCast(self), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#quoteStrings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    pub fn QuoteStrings(self: ?*anyopaque) bool {
        return qtc.QDebug_QuoteStrings(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#setQuoteStrings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    /// ` b: bool `
    ///
    pub fn SetQuoteStrings(self: ?*anyopaque, b: bool) void {
        qtc.QDebug_SetQuoteStrings(@ptrCast(self), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#quote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    pub fn Quote(self: ?*anyopaque) QtC.QDebug {
        return qtc.QDebug_Quote(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#noquote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    pub fn Noquote(self: ?*anyopaque) QtC.QDebug {
        return qtc.QDebug_Noquote(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#maybeQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    pub fn MaybeQuote(self: ?*anyopaque) QtC.QDebug {
        return qtc.QDebug_MaybeQuote(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    /// ` t: QtC.QChar `
    ///
    pub fn OperatorShiftLeft(self: ?*anyopaque, t: QtC.QChar) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeft(@ptrCast(self), @ptrCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    /// ` t: bool `
    ///
    pub fn OperatorShiftLeft2(self: ?*anyopaque, t: bool) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeft2(@ptrCast(self), t);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    /// ` t: u8 `
    ///
    pub fn OperatorShiftLeft3(self: ?*anyopaque, t: u8) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeft3(@ptrCast(self), @intCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    /// ` t: i16 `
    ///
    pub fn OperatorShiftLeft4(self: ?*anyopaque, t: i16) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeft4(@ptrCast(self), @intCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    /// ` t: u16 `
    ///
    pub fn OperatorShiftLeft5(self: ?*anyopaque, t: u16) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeft5(@ptrCast(self), @intCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    /// ` t: i32 `
    ///
    pub fn OperatorShiftLeft8(self: ?*anyopaque, t: i32) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeft8(@ptrCast(self), @intCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    /// ` t: u32 `
    ///
    pub fn OperatorShiftLeft9(self: ?*anyopaque, t: u32) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeft9(@ptrCast(self), @intCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    /// ` t: i64 `
    ///
    pub fn OperatorShiftLeft10(self: ?*anyopaque, t: i64) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeft10(@ptrCast(self), @intCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    /// ` t: u64 `
    ///
    pub fn OperatorShiftLeft11(self: ?*anyopaque, t: u64) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeft11(@ptrCast(self), @intCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    /// ` t: i64 `
    ///
    pub fn OperatorShiftLeft12(self: ?*anyopaque, t: i64) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeft12(@ptrCast(self), @intCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    /// ` t: u64 `
    ///
    pub fn OperatorShiftLeft13(self: ?*anyopaque, t: u64) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeft13(@ptrCast(self), @intCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    /// ` t: f32 `
    ///
    pub fn OperatorShiftLeft15(self: ?*anyopaque, t: f32) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeft15(@ptrCast(self), @floatCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    /// ` t: f64 `
    ///
    pub fn OperatorShiftLeft16(self: ?*anyopaque, t: f64) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeft16(@ptrCast(self), @floatCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    /// ` t: []const u8 `
    ///
    pub fn OperatorShiftLeft17(self: ?*anyopaque, t: []const u8) QtC.QDebug {
        const t_Cstring = t.ptr;
        return qtc.QDebug_OperatorShiftLeft17(@ptrCast(self), t_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    /// ` t: []const u8 `
    ///
    pub fn OperatorShiftLeft19(self: ?*anyopaque, t: []const u8) QtC.QDebug {
        const t_str = qtc.libqt_string{
            .len = t.len,
            .data = t.ptr,
        };
        return qtc.QDebug_OperatorShiftLeft19(@ptrCast(self), t_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    /// ` t: []u8 `
    ///
    pub fn OperatorShiftLeft23(self: ?*anyopaque, t: []u8) QtC.QDebug {
        const t_str = qtc.libqt_string{
            .len = t.len,
            .data = t.ptr,
        };
        return qtc.QDebug_OperatorShiftLeft23(@ptrCast(self), t_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    /// ` t: []const u8 `
    ///
    pub fn OperatorShiftLeft24(self: ?*anyopaque, t: []const u8) QtC.QDebug {
        const t_str = qtc.libqt_string{
            .len = t.len,
            .data = t.ptr,
        };
        return qtc.QDebug_OperatorShiftLeft24(@ptrCast(self), t_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    /// ` t: ?*anyopaque `
    ///
    pub fn OperatorShiftLeft25(self: ?*anyopaque, t: ?*anyopaque) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeft25(@ptrCast(self), @ptrCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#maybeQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDebug `
    ///
    /// ` c: u8 `
    ///
    pub fn MaybeQuote1(self: ?*anyopaque, c: u8) QtC.QDebug {
        return qtc.QDebug_MaybeQuote1(@ptrCast(self), @intCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#dtor.QDebug)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDebug `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDebug_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdebugstatesaver.html)
pub const qdebugstatesaver = struct {
    /// New constructs a new QDebugStateSaver object.
    ///
    /// ## Parameter(s):
    ///
    /// ` dbg: QtC.QDebug `
    ///
    pub fn New(dbg: ?*anyopaque) QtC.QDebugStateSaver {
        return qtc.QDebugStateSaver_new(@ptrCast(dbg));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdebugstatesaver.html#dtor.QDebugStateSaver)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDebugStateSaver `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDebugStateSaver_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnodebug.html)
pub const qnodebug = struct {
    /// New constructs a new QNoDebug object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QNoDebug `
    ///
    pub fn New(other: ?*anyopaque) QtC.QNoDebug {
        return qtc.QNoDebug_new(@ptrCast(other));
    }

    /// New2 constructs a new QNoDebug object and invalidates the source QNoDebug object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QNoDebug `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QNoDebug {
        return qtc.QNoDebug_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNoDebug `
    ///
    /// ` other: QtC.QNoDebug `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNoDebug_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNoDebug `
    ///
    /// ` other: QtC.QNoDebug `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNoDebug_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnodebug.html#space)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNoDebug `
    ///
    pub fn Space(self: ?*anyopaque) QtC.QNoDebug {
        return qtc.QNoDebug_Space(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnodebug.html#nospace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNoDebug `
    ///
    pub fn Nospace(self: ?*anyopaque) QtC.QNoDebug {
        return qtc.QNoDebug_Nospace(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnodebug.html#maybeSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNoDebug `
    ///
    pub fn MaybeSpace(self: ?*anyopaque) QtC.QNoDebug {
        return qtc.QNoDebug_MaybeSpace(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnodebug.html#quote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNoDebug `
    ///
    pub fn Quote(self: ?*anyopaque) QtC.QNoDebug {
        return qtc.QNoDebug_Quote(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnodebug.html#noquote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNoDebug `
    ///
    pub fn Noquote(self: ?*anyopaque) QtC.QNoDebug {
        return qtc.QNoDebug_Noquote(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnodebug.html#maybeQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNoDebug `
    ///
    pub fn MaybeQuote(self: ?*anyopaque) QtC.QNoDebug {
        return qtc.QNoDebug_MaybeQuote(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnodebug.html#verbosity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNoDebug `
    ///
    /// ` param1: i32 `
    ///
    pub fn Verbosity(self: ?*anyopaque, param1: i32) QtC.QNoDebug {
        return qtc.QNoDebug_Verbosity(@ptrCast(self), @intCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnodebug.html#maybeQuote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNoDebug `
    ///
    /// ` param1: u8 `
    ///
    pub fn MaybeQuote1(self: ?*anyopaque, param1: u8) QtC.QNoDebug {
        return qtc.QNoDebug_MaybeQuote1(@ptrCast(self), @intCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnodebug.html#dtor.QNoDebug)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QNoDebug `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNoDebug_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#public-types)
pub const enums = struct {
    pub const VerbosityLevel = enum {
        pub const MinimumVerbosity: i32 = 0;
        pub const DefaultVerbosity: i32 = 2;
        pub const MaximumVerbosity: i32 = 7;
    };
};
