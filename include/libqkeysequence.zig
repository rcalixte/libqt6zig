const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QKeyCombination = @import("libqt6").QKeyCombination;
const QVariant = @import("libqt6").QVariant;
const qkeysequence_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html)
pub const QKeySequence = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QKeySequence,

    pub const _is_QKeySequence = {};

    /// New constructs a new QKeySequence object.
    ///
    pub fn New() QKeySequence {
        return .{ .ptr = qtc.QKeySequence_new() };
    }

    /// New2 constructs a new QKeySequence object.
    ///
    /// ## Parameter(s):
    ///
    /// ` key: []const u8 `
    ///
    pub fn New2(key: []const u8) QKeySequence {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QKeySequence_new2(key_str) };
    }

    /// New3 constructs a new QKeySequence object.
    ///
    /// ## Parameter(s):
    ///
    /// ` k1: i32 `
    ///
    pub fn New3(k1: i32) QKeySequence {
        return .{ .ptr = qtc.QKeySequence_new3(@bitCast(k1)) };
    }

    /// New4 constructs a new QKeySequence object.
    ///
    /// ## Parameter(s):
    ///
    /// ` k1: QKeyCombination `
    ///
    pub fn New4(k1: anytype) QKeySequence {
        comptime _ = @TypeOf(k1)._is_QKeyCombination;
        return .{ .ptr = qtc.QKeySequence_new4(@ptrCast(k1.ptr)) };
    }

    /// New5 constructs a new QKeySequence object.
    ///
    /// ## Parameter(s):
    ///
    /// ` ks: QKeySequence `
    ///
    pub fn New5(ks: anytype) QKeySequence {
        comptime _ = @TypeOf(ks)._is_QKeySequence;
        return .{ .ptr = qtc.QKeySequence_new5(@ptrCast(ks.ptr)) };
    }

    /// New6 constructs a new QKeySequence object.
    ///
    /// ## Parameter(s):
    ///
    /// ` key: qkeysequence_enums.StandardKey `
    ///
    pub fn New6(key: i32) QKeySequence {
        return .{ .ptr = qtc.QKeySequence_new6(@bitCast(key)) };
    }

    /// New7 constructs a new QKeySequence object.
    ///
    /// ## Parameter(s):
    ///
    /// ` key: []const u8 `
    ///
    /// ` format: qkeysequence_enums.SequenceFormat `
    ///
    pub fn New7(key: []const u8, format: i32) QKeySequence {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QKeySequence_new7(key_str, @bitCast(format)) };
    }

    /// New8 constructs a new QKeySequence object.
    ///
    /// ## Parameter(s):
    ///
    /// ` k1: i32 `
    ///
    /// ` k2: i32 `
    ///
    pub fn New8(k1: i32, k2: i32) QKeySequence {
        return .{ .ptr = qtc.QKeySequence_new8(@bitCast(k1), @bitCast(k2)) };
    }

    /// New9 constructs a new QKeySequence object.
    ///
    /// ## Parameter(s):
    ///
    /// ` k1: i32 `
    ///
    /// ` k2: i32 `
    ///
    /// ` k3: i32 `
    ///
    pub fn New9(k1: i32, k2: i32, k3: i32) QKeySequence {
        return .{ .ptr = qtc.QKeySequence_new9(@bitCast(k1), @bitCast(k2), @bitCast(k3)) };
    }

    /// New10 constructs a new QKeySequence object.
    ///
    /// ## Parameter(s):
    ///
    /// ` k1: i32 `
    ///
    /// ` k2: i32 `
    ///
    /// ` k3: i32 `
    ///
    /// ` k4: i32 `
    ///
    pub fn New10(k1: i32, k2: i32, k3: i32, k4: i32) QKeySequence {
        return .{ .ptr = qtc.QKeySequence_new10(@bitCast(k1), @bitCast(k2), @bitCast(k3), @bitCast(k4)) };
    }

    /// New11 constructs a new QKeySequence object.
    ///
    /// ## Parameter(s):
    ///
    /// ` k1: QKeyCombination `
    ///
    /// ` k2: QKeyCombination `
    ///
    pub fn New11(k1: anytype, k2: anytype) QKeySequence {
        comptime _ = @TypeOf(k1)._is_QKeyCombination;
        comptime _ = @TypeOf(k2)._is_QKeyCombination;
        return .{ .ptr = qtc.QKeySequence_new11(@ptrCast(k1.ptr), @ptrCast(k2.ptr)) };
    }

    /// New12 constructs a new QKeySequence object.
    ///
    /// ## Parameter(s):
    ///
    /// ` k1: QKeyCombination `
    ///
    /// ` k2: QKeyCombination `
    ///
    /// ` k3: QKeyCombination `
    ///
    pub fn New12(k1: anytype, k2: anytype, k3: anytype) QKeySequence {
        comptime _ = @TypeOf(k1)._is_QKeyCombination;
        comptime _ = @TypeOf(k2)._is_QKeyCombination;
        comptime _ = @TypeOf(k3)._is_QKeyCombination;
        return .{ .ptr = qtc.QKeySequence_new12(@ptrCast(k1.ptr), @ptrCast(k2.ptr), @ptrCast(k3.ptr)) };
    }

    /// New13 constructs a new QKeySequence object.
    ///
    /// ## Parameter(s):
    ///
    /// ` k1: QKeyCombination `
    ///
    /// ` k2: QKeyCombination `
    ///
    /// ` k3: QKeyCombination `
    ///
    /// ` k4: QKeyCombination `
    ///
    pub fn New13(k1: anytype, k2: anytype, k3: anytype, k4: anytype) QKeySequence {
        comptime _ = @TypeOf(k1)._is_QKeyCombination;
        comptime _ = @TypeOf(k2)._is_QKeyCombination;
        comptime _ = @TypeOf(k3)._is_QKeyCombination;
        comptime _ = @TypeOf(k4)._is_QKeyCombination;
        return .{ .ptr = qtc.QKeySequence_new13(@ptrCast(k1.ptr), @ptrCast(k2.ptr), @ptrCast(k3.ptr), @ptrCast(k4.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeySequence `
    ///
    pub fn Count(self: QKeySequence) i32 {
        return qtc.QKeySequence_Count(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeySequence `
    ///
    pub fn IsEmpty(self: QKeySequence) bool {
        return qtc.QKeySequence_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeySequence `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: QKeySequence, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QKeySequence_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeysequence.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` str: []const u8 `
    ///
    pub fn FromString(str: []const u8) QKeySequence {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return .{ .ptr = qtc.QKeySequence_FromString(str_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#listFromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    pub fn ListFromString(allocator: std.mem.Allocator, str: []const u8) []QKeySequence {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QKeySequence_ListFromString(str_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("qkeysequence.ListFromString: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#listToString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` list: []QKeySequence `
    ///
    pub fn ListToString(allocator: std.mem.Allocator, list: []QKeySequence) []const u8 {
        const list_list = qtc.libqt_list{
            .len = list.len,
            .data = @ptrCast(list.ptr),
        };
        var _str = qtc.QKeySequence_ListToString(list_list);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeysequence.ListToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#matches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeySequence `
    ///
    /// ` seq: QKeySequence `
    ///
    /// ## Returns:
    ///
    /// ` qkeysequence_enums.SequenceMatch `
    ///
    pub fn Matches(self: QKeySequence, seq: anytype) i32 {
        comptime _ = @TypeOf(seq)._is_QKeySequence;
        return qtc.QKeySequence_Matches(@ptrCast(self.ptr), @ptrCast(seq.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#mnemonic)
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    pub fn Mnemonic(text: []const u8) QKeySequence {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QKeySequence_Mnemonic(text_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#keyBindings)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: qkeysequence_enums.StandardKey `
    ///
    pub fn KeyBindings(allocator: std.mem.Allocator, key: i32) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.QKeySequence_KeyBindings(@bitCast(key));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("qkeysequence.KeyBindings: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeySequence `
    ///
    pub fn ToQVariant(self: QKeySequence) QVariant {
        return .{ .ptr = qtc.QKeySequence_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeySequence `
    ///
    /// ` i: u32 `
    ///
    pub fn OperatorSubscript(self: QKeySequence, i: u32) QKeyCombination {
        return .{ .ptr = qtc.QKeySequence_OperatorSubscript(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeySequence `
    ///
    /// ` other: QKeySequence `
    ///
    pub fn OperatorAssign(self: QKeySequence, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QKeySequence;
        qtc.QKeySequence_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeySequence `
    ///
    /// ` other: QKeySequence `
    ///
    pub fn Swap(self: QKeySequence, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QKeySequence;
        qtc.QKeySequence_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeySequence `
    ///
    /// ` other: QKeySequence `
    ///
    pub fn OperatorEqual(self: QKeySequence, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QKeySequence;
        return qtc.QKeySequence_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeySequence `
    ///
    /// ` other: QKeySequence `
    ///
    pub fn OperatorNotEqual(self: QKeySequence, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QKeySequence;
        return qtc.QKeySequence_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#operator-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeySequence `
    ///
    /// ` ks: QKeySequence `
    ///
    pub fn OperatorLesser(self: QKeySequence, ks: anytype) bool {
        comptime _ = @TypeOf(ks)._is_QKeySequence;
        return qtc.QKeySequence_OperatorLesser(@ptrCast(self.ptr), @ptrCast(ks.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#operator-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeySequence `
    ///
    /// ` other: QKeySequence `
    ///
    pub fn OperatorGreater(self: QKeySequence, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QKeySequence;
        return qtc.QKeySequence_OperatorGreater(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#operator-lt-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeySequence `
    ///
    /// ` other: QKeySequence `
    ///
    pub fn OperatorLesserOrEqual(self: QKeySequence, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QKeySequence;
        return qtc.QKeySequence_OperatorLesserOrEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#operator-gt-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeySequence `
    ///
    /// ` other: QKeySequence `
    ///
    pub fn OperatorGreaterOrEqual(self: QKeySequence, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QKeySequence;
        return qtc.QKeySequence_OperatorGreaterOrEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#isDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeySequence `
    ///
    pub fn IsDetached(self: QKeySequence) bool {
        return qtc.QKeySequence_IsDetached(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeySequence `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` format: qkeysequence_enums.SequenceFormat `
    ///
    pub fn ToString1(self: QKeySequence, allocator: std.mem.Allocator, format: i32) []const u8 {
        var _str = qtc.QKeySequence_ToString1(@ptrCast(self.ptr), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeysequence.ToString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` str: []const u8 `
    ///
    /// ` format: qkeysequence_enums.SequenceFormat `
    ///
    pub fn FromString2(str: []const u8, format: i32) QKeySequence {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return .{ .ptr = qtc.QKeySequence_FromString2(str_str, @bitCast(format)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#listFromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    /// ` format: qkeysequence_enums.SequenceFormat `
    ///
    pub fn ListFromString2(allocator: std.mem.Allocator, str: []const u8, format: i32) []QKeySequence {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QKeySequence_ListFromString2(str_str, @bitCast(format));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("qkeysequence.ListFromString2: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#listToString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` list: []QKeySequence `
    ///
    /// ` format: qkeysequence_enums.SequenceFormat `
    ///
    pub fn ListToString2(allocator: std.mem.Allocator, list: []QKeySequence, format: i32) []const u8 {
        const list_list = qtc.libqt_list{
            .len = list.len,
            .data = @ptrCast(list.ptr),
        };
        var _str = qtc.QKeySequence_ListToString2(list_list, @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeysequence.ListToString2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#dtor.QKeySequence)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QKeySequence `
    ///
    pub fn Delete(self: QKeySequence) void {
        qtc.QKeySequence_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#public-types)
pub const enums = struct {
    pub const StandardKey = enum(i32) {
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

    pub const SequenceFormat = enum(i32) {
        pub const NativeText: i32 = 0;
        pub const PortableText: i32 = 1;
    };

    pub const SequenceMatch = enum(i32) {
        pub const NoMatch: i32 = 0;
        pub const PartialMatch: i32 = 1;
        pub const ExactMatch: i32 = 2;
    };
};
