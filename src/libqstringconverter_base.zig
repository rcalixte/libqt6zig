const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qstringconverter_base_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html)
pub const qstringconverter = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringConverter `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QStringConverter_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#resetState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringConverter `
    ///
    pub fn ResetState(self: ?*anyopaque) void {
        qtc.QStringConverter_ResetState(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#hasError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringConverter `
    ///
    pub fn HasError(self: ?*anyopaque) bool {
        return qtc.QStringConverter_HasError(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringConverter `
    ///
    pub fn Name(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QStringConverter_Name(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#nameForEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` e: qstringconverter_base_enums.Encoding `
    ///
    pub fn NameForEncoding(e: i32) []const u8 {
        const _ret = qtc.QStringConverter_NameForEncoding(@intCast(e));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#availableCodecs)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AvailableCodecs(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QStringConverter_AvailableCodecs();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qstringconverter.AvailableCodecs: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qstringconverter.AvailableCodecs: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverterbase-state.html)
pub const qstringconverterbase__state = struct {
    /// New constructs a new QStringConverterBase::State object.
    ///
    pub fn New() QtC.QStringConverterBase__State {
        return qtc.QStringConverterBase__State_new();
    }

    /// New2 constructs a new QStringConverterBase::State object.
    ///
    /// ## Parameter(s):
    ///
    /// ` f: flag of qstringconverter_base_enums.Flag `
    ///
    pub fn New2(f: i32) QtC.QStringConverterBase__State {
        return qtc.QStringConverterBase__State_new2(@intCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverterbase-state.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringConverterBase__State `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QStringConverterBase__State_Clear(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverterbase-state.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringConverterBase__State `
    ///
    pub fn Reset(self: ?*anyopaque) void {
        qtc.QStringConverterBase__State_Reset(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverterbase-state.html#flags-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringConverterBase__State `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstringconverter_base_enums.Flag `
    ///
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.QStringConverterBase__State_Flags(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverterbase-state.html#flags-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringConverterBase__State `
    ///
    /// ` flags: flag of qstringconverter_base_enums.Flag `
    ///
    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QStringConverterBase__State_SetFlags(@ptrCast(self), @intCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverterbase-state.html#internalState-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringConverterBase__State `
    ///
    pub fn InternalState(self: ?*anyopaque) i32 {
        return qtc.QStringConverterBase__State_InternalState(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverterbase-state.html#internalState-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringConverterBase__State `
    ///
    /// ` internalState: i32 `
    ///
    pub fn SetInternalState(self: ?*anyopaque, internalState: i32) void {
        qtc.QStringConverterBase__State_SetInternalState(@ptrCast(self), @intCast(internalState));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverterbase-state.html#remainingChars-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringConverterBase__State `
    ///
    pub fn RemainingChars(self: ?*anyopaque) i64 {
        return qtc.QStringConverterBase__State_RemainingChars(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverterbase-state.html#remainingChars-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringConverterBase__State `
    ///
    /// ` remainingChars: i64 `
    ///
    pub fn SetRemainingChars(self: ?*anyopaque, remainingChars: i64) void {
        qtc.QStringConverterBase__State_SetRemainingChars(@ptrCast(self), @intCast(remainingChars));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverterbase-state.html#invalidChars-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringConverterBase__State `
    ///
    pub fn InvalidChars(self: ?*anyopaque) i64 {
        return qtc.QStringConverterBase__State_InvalidChars(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverterbase-state.html#invalidChars-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringConverterBase__State `
    ///
    /// ` invalidChars: i64 `
    ///
    pub fn SetInvalidChars(self: ?*anyopaque, invalidChars: i64) void {
        qtc.QStringConverterBase__State_SetInvalidChars(@ptrCast(self), @intCast(invalidChars));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStringConverterBase__State `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStringConverterBase__State_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter-base.html#public-types)
pub const enums = struct {
    pub const Flag = enum {
        pub const Default: i32 = 0;
        pub const Stateless: i32 = 1;
        pub const ConvertInvalidToNull: i32 = 2;
        pub const WriteBom: i32 = 4;
        pub const ConvertInitialBom: i32 = 8;
        pub const UsesIcu: i32 = 16;
    };

    pub const Encoding = enum {
        pub const Utf8: i32 = 0;
        pub const Utf16: i32 = 1;
        pub const Utf16LE: i32 = 2;
        pub const Utf16BE: i32 = 3;
        pub const Utf32: i32 = 4;
        pub const Utf32LE: i32 = 5;
        pub const Utf32BE: i32 = 6;
        pub const Latin1: i32 = 7;
        pub const System: i32 = 8;
        pub const LastEncoding: i32 = 8;
    };
};
