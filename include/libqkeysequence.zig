const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qkeysequence_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qkeysequence.html
pub const qkeysequence = struct {
    /// New constructs a new QKeySequence object.
    ///
    ///
    pub fn New() QtC.QKeySequence {
        return qtc.QKeySequence_new();
    }

    /// New2 constructs a new QKeySequence object.
    ///
    /// ``` key: []const u8 ```
    pub fn New2(key: []const u8) QtC.QKeySequence {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = @constCast(key.ptr),
        };

        return qtc.QKeySequence_new2(key_str);
    }

    /// New3 constructs a new QKeySequence object.
    ///
    /// ``` k1: i32 ```
    pub fn New3(k1: i32) QtC.QKeySequence {
        return qtc.QKeySequence_new3(@intCast(k1));
    }

    /// New4 constructs a new QKeySequence object.
    ///
    /// ``` k1: QtC.QKeyCombination ```
    pub fn New4(k1: QtC.QKeyCombination) QtC.QKeySequence {
        return qtc.QKeySequence_new4(@ptrCast(k1));
    }

    /// New5 constructs a new QKeySequence object.
    ///
    /// ``` ks: QtC.QKeySequence ```
    pub fn New5(ks: ?*anyopaque) QtC.QKeySequence {
        return qtc.QKeySequence_new5(@ptrCast(ks));
    }

    /// New6 constructs a new QKeySequence object.
    ///
    /// ``` key: qkeysequence_enums.StandardKey ```
    pub fn New6(key: i64) QtC.QKeySequence {
        return qtc.QKeySequence_new6(@intCast(key));
    }

    /// New7 constructs a new QKeySequence object.
    ///
    /// ``` key: []const u8, format: qkeysequence_enums.SequenceFormat ```
    pub fn New7(key: []const u8, format: i64) QtC.QKeySequence {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = @constCast(key.ptr),
        };

        return qtc.QKeySequence_new7(key_str, @intCast(format));
    }

    /// New8 constructs a new QKeySequence object.
    ///
    /// ``` k1: i32, k2: i32 ```
    pub fn New8(k1: i32, k2: i32) QtC.QKeySequence {
        return qtc.QKeySequence_new8(@intCast(k1), @intCast(k2));
    }

    /// New9 constructs a new QKeySequence object.
    ///
    /// ``` k1: i32, k2: i32, k3: i32 ```
    pub fn New9(k1: i32, k2: i32, k3: i32) QtC.QKeySequence {
        return qtc.QKeySequence_new9(@intCast(k1), @intCast(k2), @intCast(k3));
    }

    /// New10 constructs a new QKeySequence object.
    ///
    /// ``` k1: i32, k2: i32, k3: i32, k4: i32 ```
    pub fn New10(k1: i32, k2: i32, k3: i32, k4: i32) QtC.QKeySequence {
        return qtc.QKeySequence_new10(@intCast(k1), @intCast(k2), @intCast(k3), @intCast(k4));
    }

    /// New11 constructs a new QKeySequence object.
    ///
    /// ``` k1: QtC.QKeyCombination, k2: QtC.QKeyCombination ```
    pub fn New11(k1: QtC.QKeyCombination, k2: QtC.QKeyCombination) QtC.QKeySequence {
        return qtc.QKeySequence_new11(@ptrCast(k1), @ptrCast(k2));
    }

    /// New12 constructs a new QKeySequence object.
    ///
    /// ``` k1: QtC.QKeyCombination, k2: QtC.QKeyCombination, k3: QtC.QKeyCombination ```
    pub fn New12(k1: QtC.QKeyCombination, k2: QtC.QKeyCombination, k3: QtC.QKeyCombination) QtC.QKeySequence {
        return qtc.QKeySequence_new12(@ptrCast(k1), @ptrCast(k2), @ptrCast(k3));
    }

    /// New13 constructs a new QKeySequence object.
    ///
    /// ``` k1: QtC.QKeyCombination, k2: QtC.QKeyCombination, k3: QtC.QKeyCombination, k4: QtC.QKeyCombination ```
    pub fn New13(k1: QtC.QKeyCombination, k2: QtC.QKeyCombination, k3: QtC.QKeyCombination, k4: QtC.QKeyCombination) QtC.QKeySequence {
        return qtc.QKeySequence_new13(@ptrCast(k1), @ptrCast(k2), @ptrCast(k3), @ptrCast(k4));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#count)
    ///
    /// ``` self: QtC.QKeySequence ```
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QKeySequence_Count(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#isEmpty)
    ///
    /// ``` self: QtC.QKeySequence ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QKeySequence_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#toString)
    ///
    /// ``` self: QtC.QKeySequence, allocator: std.mem.Allocator ```
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QKeySequence_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeysequence.ToString: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#fromString)
    ///
    /// ``` str: []const u8 ```
    pub fn FromString(str: []const u8) QtC.QKeySequence {
        const str_str = qtc.struct_libqt_string{
            .len = str.len,
            .data = @constCast(str.ptr),
        };
        return qtc.QKeySequence_FromString(str_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#listFromString)
    ///
    /// ``` str: []const u8, allocator: std.mem.Allocator ```
    pub fn ListFromString(str: []const u8, allocator: std.mem.Allocator) []QtC.QKeySequence {
        const str_str = qtc.struct_libqt_string{
            .len = str.len,
            .data = @constCast(str.ptr),
        };
        const _arr: qtc.struct_libqt_list = qtc.QKeySequence_ListFromString(str_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("qkeysequence.ListFromString: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#listToString)
    ///
    /// ``` list: []QtC.QKeySequence, allocator: std.mem.Allocator ```
    pub fn ListToString(list: []QtC.QKeySequence, allocator: std.mem.Allocator) []const u8 {
        const list_list = qtc.struct_libqt_list{
            .len = list.len,
            .data = @ptrCast(list.ptr),
        };
        const _str = qtc.QKeySequence_ListToString(list_list);
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeysequence.ListToString: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#matches)
    ///
    /// ``` self: QtC.QKeySequence, seq: QtC.QKeySequence ```
    pub fn Matches(self: ?*anyopaque, seq: ?*anyopaque) i64 {
        return qtc.QKeySequence_Matches(@ptrCast(self), @ptrCast(seq));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#mnemonic)
    ///
    /// ``` text: []const u8 ```
    pub fn Mnemonic(text: []const u8) QtC.QKeySequence {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        return qtc.QKeySequence_Mnemonic(text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#keyBindings)
    ///
    /// ``` key: qkeysequence_enums.StandardKey, allocator: std.mem.Allocator ```
    pub fn KeyBindings(key: i64, allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.struct_libqt_list = qtc.QKeySequence_KeyBindings(@intCast(key));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("qkeysequence.KeyBindings: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#operator QVariant)
    ///
    /// ``` self: QtC.QKeySequence ```
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QKeySequence_ToQVariant(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#operator[])
    ///
    /// ``` self: QtC.QKeySequence, i: u32 ```
    pub fn OperatorSubscript(self: ?*anyopaque, i: u32) QtC.QKeyCombination {
        return qtc.QKeySequence_OperatorSubscript(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#operator=)
    ///
    /// ``` self: QtC.QKeySequence, other: QtC.QKeySequence ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QKeySequence_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#swap)
    ///
    /// ``` self: QtC.QKeySequence, other: QtC.QKeySequence ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QKeySequence_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#operator==)
    ///
    /// ``` self: QtC.QKeySequence, other: QtC.QKeySequence ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QKeySequence_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#operator!=)
    ///
    /// ``` self: QtC.QKeySequence, other: QtC.QKeySequence ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QKeySequence_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#operator<)
    ///
    /// ``` self: QtC.QKeySequence, ks: QtC.QKeySequence ```
    pub fn OperatorLesser(self: ?*anyopaque, ks: ?*anyopaque) bool {
        return qtc.QKeySequence_OperatorLesser(@ptrCast(self), @ptrCast(ks));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#operator>)
    ///
    /// ``` self: QtC.QKeySequence, other: QtC.QKeySequence ```
    pub fn OperatorGreater(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QKeySequence_OperatorGreater(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#operator<=)
    ///
    /// ``` self: QtC.QKeySequence, other: QtC.QKeySequence ```
    pub fn OperatorLesserOrEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QKeySequence_OperatorLesserOrEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#operator>=)
    ///
    /// ``` self: QtC.QKeySequence, other: QtC.QKeySequence ```
    pub fn OperatorGreaterOrEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QKeySequence_OperatorGreaterOrEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#isDetached)
    ///
    /// ``` self: QtC.QKeySequence ```
    pub fn IsDetached(self: ?*anyopaque) bool {
        return qtc.QKeySequence_IsDetached(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#toString)
    ///
    /// ``` self: QtC.QKeySequence, format: qkeysequence_enums.SequenceFormat, allocator: std.mem.Allocator ```
    pub fn ToString1(self: ?*anyopaque, format: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QKeySequence_ToString1(@ptrCast(self), @intCast(format));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeysequence.ToString1: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#fromString)
    ///
    /// ``` str: []const u8, format: qkeysequence_enums.SequenceFormat ```
    pub fn FromString2(str: []const u8, format: i64) QtC.QKeySequence {
        const str_str = qtc.struct_libqt_string{
            .len = str.len,
            .data = @constCast(str.ptr),
        };
        return qtc.QKeySequence_FromString2(str_str, @intCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#listFromString)
    ///
    /// ``` str: []const u8, format: qkeysequence_enums.SequenceFormat, allocator: std.mem.Allocator ```
    pub fn ListFromString2(str: []const u8, format: i64, allocator: std.mem.Allocator) []QtC.QKeySequence {
        const str_str = qtc.struct_libqt_string{
            .len = str.len,
            .data = @constCast(str.ptr),
        };
        const _arr: qtc.struct_libqt_list = qtc.QKeySequence_ListFromString2(str_str, @intCast(format));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("qkeysequence.ListFromString2: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#listToString)
    ///
    /// ``` list: []QtC.QKeySequence, format: qkeysequence_enums.SequenceFormat, allocator: std.mem.Allocator ```
    pub fn ListToString2(list: []QtC.QKeySequence, format: i64, allocator: std.mem.Allocator) []const u8 {
        const list_list = qtc.struct_libqt_list{
            .len = list.len,
            .data = @ptrCast(list.ptr),
        };
        const _str = qtc.QKeySequence_ListToString2(list_list, @intCast(format));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeysequence.ListToString2: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#dtor.QKeySequence)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QKeySequence ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QKeySequence_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qkeysequence.html#types
pub const enums = struct {
    pub const StandardKey = enum {
        pub const UnknownKey: i32 = 0;
        pub const HelpContents: i32 = 1;
        pub const WhatsThis: i32 = 2;
        pub const Open: i32 = 3;
        pub const Close: i32 = 4;
        pub const Save: i32 = 5;
        pub const New: i32 = 6;
        pub const Delete: i32 = 7;
        pub const Cut: i32 = 8;
        pub const Copy: i32 = 9;
        pub const Paste: i32 = 10;
        pub const Undo: i32 = 11;
        pub const Redo: i32 = 12;
        pub const Back: i32 = 13;
        pub const Forward: i32 = 14;
        pub const Refresh: i32 = 15;
        pub const ZoomIn: i32 = 16;
        pub const ZoomOut: i32 = 17;
        pub const Print: i32 = 18;
        pub const AddTab: i32 = 19;
        pub const NextChild: i32 = 20;
        pub const PreviousChild: i32 = 21;
        pub const Find: i32 = 22;
        pub const FindNext: i32 = 23;
        pub const FindPrevious: i32 = 24;
        pub const Replace: i32 = 25;
        pub const SelectAll: i32 = 26;
        pub const Bold: i32 = 27;
        pub const Italic: i32 = 28;
        pub const Underline: i32 = 29;
        pub const MoveToNextChar: i32 = 30;
        pub const MoveToPreviousChar: i32 = 31;
        pub const MoveToNextWord: i32 = 32;
        pub const MoveToPreviousWord: i32 = 33;
        pub const MoveToNextLine: i32 = 34;
        pub const MoveToPreviousLine: i32 = 35;
        pub const MoveToNextPage: i32 = 36;
        pub const MoveToPreviousPage: i32 = 37;
        pub const MoveToStartOfLine: i32 = 38;
        pub const MoveToEndOfLine: i32 = 39;
        pub const MoveToStartOfBlock: i32 = 40;
        pub const MoveToEndOfBlock: i32 = 41;
        pub const MoveToStartOfDocument: i32 = 42;
        pub const MoveToEndOfDocument: i32 = 43;
        pub const SelectNextChar: i32 = 44;
        pub const SelectPreviousChar: i32 = 45;
        pub const SelectNextWord: i32 = 46;
        pub const SelectPreviousWord: i32 = 47;
        pub const SelectNextLine: i32 = 48;
        pub const SelectPreviousLine: i32 = 49;
        pub const SelectNextPage: i32 = 50;
        pub const SelectPreviousPage: i32 = 51;
        pub const SelectStartOfLine: i32 = 52;
        pub const SelectEndOfLine: i32 = 53;
        pub const SelectStartOfBlock: i32 = 54;
        pub const SelectEndOfBlock: i32 = 55;
        pub const SelectStartOfDocument: i32 = 56;
        pub const SelectEndOfDocument: i32 = 57;
        pub const DeleteStartOfWord: i32 = 58;
        pub const DeleteEndOfWord: i32 = 59;
        pub const DeleteEndOfLine: i32 = 60;
        pub const InsertParagraphSeparator: i32 = 61;
        pub const InsertLineSeparator: i32 = 62;
        pub const SaveAs: i32 = 63;
        pub const Preferences: i32 = 64;
        pub const Quit: i32 = 65;
        pub const FullScreen: i32 = 66;
        pub const Deselect: i32 = 67;
        pub const DeleteCompleteLine: i32 = 68;
        pub const Backspace: i32 = 69;
        pub const Cancel: i32 = 70;
    };

    pub const SequenceFormat = enum {
        pub const NativeText: i32 = 0;
        pub const PortableText: i32 = 1;
    };

    pub const SequenceMatch = enum {
        pub const NoMatch: i32 = 0;
        pub const PartialMatch: i32 = 1;
        pub const ExactMatch: i32 = 2;
    };
};
