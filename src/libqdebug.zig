const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qdebug.html
pub const qdebug = struct {
    /// New constructs a new QDebug object.
    ///
    /// ``` device: QtC.QIODevice ```
    pub fn New(device: ?*anyopaque) QtC.QDebug {
        return qtc.QDebug_new(@ptrCast(device));
    }

    /// New2 constructs a new QDebug object.
    ///
    /// ``` o: QtC.QDebug ```
    pub fn New2(o: ?*anyopaque) QtC.QDebug {
        return qtc.QDebug_new2(@ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator=)
    ///
    /// ``` self: QtC.QDebug, other: QtC.QDebug ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDebug_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#swap)
    ///
    /// ``` self: QtC.QDebug, other: QtC.QDebug ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDebug_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#resetFormat)
    ///
    /// ``` self: QtC.QDebug ```
    pub fn ResetFormat(self: ?*anyopaque) QtC.QDebug {
        return qtc.QDebug_ResetFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#space)
    ///
    /// ``` self: QtC.QDebug ```
    pub fn Space(self: ?*anyopaque) QtC.QDebug {
        return qtc.QDebug_Space(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#nospace)
    ///
    /// ``` self: QtC.QDebug ```
    pub fn Nospace(self: ?*anyopaque) QtC.QDebug {
        return qtc.QDebug_Nospace(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#maybeSpace)
    ///
    /// ``` self: QtC.QDebug ```
    pub fn MaybeSpace(self: ?*anyopaque) QtC.QDebug {
        return qtc.QDebug_MaybeSpace(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#verbosity)
    ///
    /// ``` self: QtC.QDebug, verbosityLevel: i32 ```
    pub fn Verbosity(self: ?*anyopaque, verbosityLevel: i32) QtC.QDebug {
        return qtc.QDebug_Verbosity(@ptrCast(self), @intCast(verbosityLevel));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#verbosity)
    ///
    /// ``` self: QtC.QDebug ```
    pub fn Verbosity2(self: ?*anyopaque) i32 {
        return qtc.QDebug_Verbosity2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#setVerbosity)
    ///
    /// ``` self: QtC.QDebug, verbosityLevel: i32 ```
    pub fn SetVerbosity(self: ?*anyopaque, verbosityLevel: i32) void {
        qtc.QDebug_SetVerbosity(@ptrCast(self), @intCast(verbosityLevel));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#autoInsertSpaces)
    ///
    /// ``` self: QtC.QDebug ```
    pub fn AutoInsertSpaces(self: ?*anyopaque) bool {
        return qtc.QDebug_AutoInsertSpaces(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#setAutoInsertSpaces)
    ///
    /// ``` self: QtC.QDebug, b: bool ```
    pub fn SetAutoInsertSpaces(self: ?*anyopaque, b: bool) void {
        qtc.QDebug_SetAutoInsertSpaces(@ptrCast(self), b);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#quoteStrings)
    ///
    /// ``` self: QtC.QDebug ```
    pub fn QuoteStrings(self: ?*anyopaque) bool {
        return qtc.QDebug_QuoteStrings(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#setQuoteStrings)
    ///
    /// ``` self: QtC.QDebug, b: bool ```
    pub fn SetQuoteStrings(self: ?*anyopaque, b: bool) void {
        qtc.QDebug_SetQuoteStrings(@ptrCast(self), b);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#quote)
    ///
    /// ``` self: QtC.QDebug ```
    pub fn Quote(self: ?*anyopaque) QtC.QDebug {
        return qtc.QDebug_Quote(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#noquote)
    ///
    /// ``` self: QtC.QDebug ```
    pub fn Noquote(self: ?*anyopaque) QtC.QDebug {
        return qtc.QDebug_Noquote(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#maybeQuote)
    ///
    /// ``` self: QtC.QDebug ```
    pub fn MaybeQuote(self: ?*anyopaque) QtC.QDebug {
        return qtc.QDebug_MaybeQuote(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
    ///
    /// ``` self: QtC.QDebug, t: QtC.QChar ```
    pub fn OperatorShiftLeft(self: ?*anyopaque, t: QtC.QChar) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeft(@ptrCast(self), @ptrCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
    ///
    /// ``` self: QtC.QDebug, t: bool ```
    pub fn OperatorShiftLeftWithBool(self: ?*anyopaque, t: bool) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeftWithBool(@ptrCast(self), t);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
    ///
    /// ``` self: QtC.QDebug, t: i8 ```
    pub fn OperatorShiftLeftWithChar(self: ?*anyopaque, t: i8) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeftWithChar(@ptrCast(self), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
    ///
    /// ``` self: QtC.QDebug, t: i16 ```
    pub fn OperatorShiftLeftWithShort(self: ?*anyopaque, t: i16) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeftWithShort(@ptrCast(self), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
    ///
    /// ``` self: QtC.QDebug, t: u16 ```
    pub fn OperatorShiftLeftWithUnsignedshort(self: ?*anyopaque, t: u16) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeftWithUnsignedshort(@ptrCast(self), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
    ///
    /// ``` self: QtC.QDebug, t: i32 ```
    pub fn OperatorShiftLeftWithInt(self: ?*anyopaque, t: i32) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeftWithInt(@ptrCast(self), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
    ///
    /// ``` self: QtC.QDebug, t: u32 ```
    pub fn OperatorShiftLeftWithUnsignedint(self: ?*anyopaque, t: u32) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeftWithUnsignedint(@ptrCast(self), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
    ///
    /// ``` self: QtC.QDebug, t: i64 ```
    pub fn OperatorShiftLeftWithLong(self: ?*anyopaque, t: i64) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeftWithLong(@ptrCast(self), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
    ///
    /// ``` self: QtC.QDebug, t: u64 ```
    pub fn OperatorShiftLeftWithUnsignedlong(self: ?*anyopaque, t: u64) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeftWithUnsignedlong(@ptrCast(self), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
    ///
    /// ``` self: QtC.QDebug, t: i64 ```
    pub fn OperatorShiftLeftWithQint64(self: ?*anyopaque, t: i64) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeftWithQint64(@ptrCast(self), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
    ///
    /// ``` self: QtC.QDebug, t: u64 ```
    pub fn OperatorShiftLeftWithQuint64(self: ?*anyopaque, t: u64) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeftWithQuint64(@ptrCast(self), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
    ///
    /// ``` self: QtC.QDebug, t: f32 ```
    pub fn OperatorShiftLeftWithFloat(self: ?*anyopaque, t: f32) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeftWithFloat(@ptrCast(self), @floatCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
    ///
    /// ``` self: QtC.QDebug, t: f64 ```
    pub fn OperatorShiftLeftWithDouble(self: ?*anyopaque, t: f64) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeftWithDouble(@ptrCast(self), @floatCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
    ///
    /// ``` self: QtC.QDebug, t: []const u8 ```
    pub fn OperatorShiftLeft2(self: ?*anyopaque, t: []const u8) QtC.QDebug {
        const t_Cstring = t.ptr;
        return qtc.QDebug_OperatorShiftLeft2(@ptrCast(self), t_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
    ///
    /// ``` self: QtC.QDebug, t: []const u8 ```
    pub fn OperatorShiftLeftWithQString(self: ?*anyopaque, t: []const u8) QtC.QDebug {
        const t_str = qtc.struct_libqt_string{
            .len = t.len,
            .data = t.ptr,
        };
        return qtc.QDebug_OperatorShiftLeftWithQString(@ptrCast(self), t_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
    ///
    /// ``` self: QtC.QDebug, t: []u8 ```
    pub fn OperatorShiftLeftWithQByteArray(self: ?*anyopaque, t: []u8) QtC.QDebug {
        const t_str = qtc.struct_libqt_string{
            .len = t.len,
            .data = t.ptr,
        };
        return qtc.QDebug_OperatorShiftLeftWithQByteArray(@ptrCast(self), t_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
    ///
    /// ``` self: QtC.QDebug, t: []const u8 ```
    pub fn OperatorShiftLeftWithQByteArrayView(self: ?*anyopaque, t: []const u8) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeftWithQByteArrayView(@ptrCast(self), t.ptr);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
    ///
    /// ``` self: QtC.QDebug, t: ?*anyopaque ```
    pub fn OperatorShiftLeftWithVoid(self: ?*anyopaque, t: ?*anyopaque) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeftWithVoid(@ptrCast(self), t);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#maybeQuote)
    ///
    /// ``` self: QtC.QDebug, c: i8 ```
    pub fn MaybeQuote1(self: ?*anyopaque, c: i8) QtC.QDebug {
        return qtc.QDebug_MaybeQuote1(@ptrCast(self), @intCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#dtor.QDebug)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDebug ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDebug_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdebugstatesaver.html
pub const qdebugstatesaver = struct {
    /// New constructs a new QDebugStateSaver object.
    ///
    /// ``` dbg: QtC.QDebug ```
    pub fn New(dbg: ?*anyopaque) QtC.QDebugStateSaver {
        return qtc.QDebugStateSaver_new(@ptrCast(dbg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdebugstatesaver.html#dtor.QDebugStateSaver)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDebugStateSaver ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDebugStateSaver_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qnodebug.html
pub const qnodebug = struct {
    /// New constructs a new QNoDebug object.
    ///
    /// ``` other: QtC.QNoDebug ```
    pub fn New(other: ?*anyopaque) QtC.QNoDebug {
        return qtc.QNoDebug_new(@ptrCast(other));
    }

    /// New2 constructs a new QNoDebug object and invalidates the source QNoDebug object.
    ///
    /// ``` other: QtC.QNoDebug ```
    pub fn New2(other: ?*anyopaque) QtC.QNoDebug {
        return qtc.QNoDebug_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QNoDebug, other: QtC.QNoDebug ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNoDebug_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QNoDebug, other: QtC.QNoDebug ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNoDebug_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnodebug.html#space)
    ///
    /// ``` self: QtC.QNoDebug ```
    pub fn Space(self: ?*anyopaque) QtC.QNoDebug {
        return qtc.QNoDebug_Space(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnodebug.html#nospace)
    ///
    /// ``` self: QtC.QNoDebug ```
    pub fn Nospace(self: ?*anyopaque) QtC.QNoDebug {
        return qtc.QNoDebug_Nospace(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnodebug.html#maybeSpace)
    ///
    /// ``` self: QtC.QNoDebug ```
    pub fn MaybeSpace(self: ?*anyopaque) QtC.QNoDebug {
        return qtc.QNoDebug_MaybeSpace(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnodebug.html#quote)
    ///
    /// ``` self: QtC.QNoDebug ```
    pub fn Quote(self: ?*anyopaque) QtC.QNoDebug {
        return qtc.QNoDebug_Quote(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnodebug.html#noquote)
    ///
    /// ``` self: QtC.QNoDebug ```
    pub fn Noquote(self: ?*anyopaque) QtC.QNoDebug {
        return qtc.QNoDebug_Noquote(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnodebug.html#maybeQuote)
    ///
    /// ``` self: QtC.QNoDebug ```
    pub fn MaybeQuote(self: ?*anyopaque) QtC.QNoDebug {
        return qtc.QNoDebug_MaybeQuote(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnodebug.html#verbosity)
    ///
    /// ``` self: QtC.QNoDebug, param1: i32 ```
    pub fn Verbosity(self: ?*anyopaque, param1: i32) QtC.QNoDebug {
        return qtc.QNoDebug_Verbosity(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnodebug.html#maybeQuote)
    ///
    /// ``` self: QtC.QNoDebug, param1: i8 ```
    pub fn MaybeQuote1(self: ?*anyopaque, param1: i8) QtC.QNoDebug {
        return qtc.QNoDebug_MaybeQuote1(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnodebug.html#dtor.QNoDebug)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QNoDebug ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNoDebug_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdebug.html#types
pub const enums = struct {
    pub const VerbosityLevel = enum {
        pub const MinimumVerbosity: i32 = 0;
        pub const DefaultVerbosity: i32 = 2;
        pub const MaximumVerbosity: i32 = 7;
    };
};
