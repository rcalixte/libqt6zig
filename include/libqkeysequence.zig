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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QKeySequence object in C++ memory
    ///
    pub fn new() QKeySequence {
        return .{ .ptr = qtc.QKeySequence_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QKeySequence object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` key: []const u8 `
    ///
    pub fn new2(key: []const u8) QKeySequence {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QKeySequence_new2(key_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QKeySequence object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` k1: i32 `
    ///
    pub fn new3(k1: i32) QKeySequence {
        return .{ .ptr = qtc.QKeySequence_new3(@bitCast(k1)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QKeySequence object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` k1: QKeyCombination `
    ///
    pub fn new4(k1: anytype) QKeySequence {
        comptime _ = @TypeOf(k1)._is_QKeyCombination;
        return .{ .ptr = qtc.QKeySequence_new4(@ptrCast(k1.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QKeySequence object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` ks: QKeySequence `
    ///
    pub fn new5(ks: anytype) QKeySequence {
        comptime _ = @TypeOf(ks)._is_QKeySequence;
        return .{ .ptr = qtc.QKeySequence_new5(@ptrCast(ks.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QKeySequence object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` key: qkeysequence_enums.StandardKey `
    ///
    pub fn new6(key: i32) QKeySequence {
        return .{ .ptr = qtc.QKeySequence_new6(@bitCast(key)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QKeySequence object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` key: []const u8 `
    ///
    /// ` format: qkeysequence_enums.SequenceFormat `
    ///
    pub fn new7(key: []const u8, format: i32) QKeySequence {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QKeySequence_new7(key_str, @bitCast(format)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QKeySequence object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` k1: i32 `
    ///
    /// ` k2: i32 `
    ///
    pub fn new8(k1: i32, k2: i32) QKeySequence {
        return .{ .ptr = qtc.QKeySequence_new8(@bitCast(k1), @bitCast(k2)) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new QKeySequence object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` k1: i32 `
    ///
    /// ` k2: i32 `
    ///
    /// ` k3: i32 `
    ///
    pub fn new9(k1: i32, k2: i32, k3: i32) QKeySequence {
        return .{ .ptr = qtc.QKeySequence_new9(@bitCast(k1), @bitCast(k2), @bitCast(k3)) };
    }

    /// ### DEPRECATED: Use `new10` instead
    ///
    pub const New10 = new10;

    /// Allocate a new QKeySequence object in C++ memory
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
    pub fn new10(k1: i32, k2: i32, k3: i32, k4: i32) QKeySequence {
        return .{ .ptr = qtc.QKeySequence_new10(@bitCast(k1), @bitCast(k2), @bitCast(k3), @bitCast(k4)) };
    }

    /// ### DEPRECATED: Use `new11` instead
    ///
    pub const New11 = new11;

    /// Allocate a new QKeySequence object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` k1: QKeyCombination `
    ///
    /// ` k2: QKeyCombination `
    ///
    pub fn new11(k1: anytype, k2: anytype) QKeySequence {
        comptime _ = @TypeOf(k1)._is_QKeyCombination;
        comptime _ = @TypeOf(k2)._is_QKeyCombination;
        return .{ .ptr = qtc.QKeySequence_new11(@ptrCast(k1.ptr), @ptrCast(k2.ptr)) };
    }

    /// ### DEPRECATED: Use `new12` instead
    ///
    pub const New12 = new12;

    /// Allocate a new QKeySequence object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` k1: QKeyCombination `
    ///
    /// ` k2: QKeyCombination `
    ///
    /// ` k3: QKeyCombination `
    ///
    pub fn new12(k1: anytype, k2: anytype, k3: anytype) QKeySequence {
        comptime _ = @TypeOf(k1)._is_QKeyCombination;
        comptime _ = @TypeOf(k2)._is_QKeyCombination;
        comptime _ = @TypeOf(k3)._is_QKeyCombination;
        return .{ .ptr = qtc.QKeySequence_new12(@ptrCast(k1.ptr), @ptrCast(k2.ptr), @ptrCast(k3.ptr)) };
    }

    /// ### DEPRECATED: Use `new13` instead
    ///
    pub const New13 = new13;

    /// Allocate a new QKeySequence object in C++ memory
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
    pub fn new13(k1: anytype, k2: anytype, k3: anytype, k4: anytype) QKeySequence {
        comptime _ = @TypeOf(k1)._is_QKeyCombination;
        comptime _ = @TypeOf(k2)._is_QKeyCombination;
        comptime _ = @TypeOf(k3)._is_QKeyCombination;
        comptime _ = @TypeOf(k4)._is_QKeyCombination;
        return .{ .ptr = qtc.QKeySequence_new13(@ptrCast(k1.ptr), @ptrCast(k2.ptr), @ptrCast(k3.ptr), @ptrCast(k4.ptr)) };
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeySequence `
    ///
    pub fn count(self: QKeySequence) i32 {
        return qtc.QKeySequence_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeySequence `
    ///
    pub fn isEmpty(self: QKeySequence) bool {
        return qtc.QKeySequence_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeySequence `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: QKeySequence, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QKeySequence_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QKeySequence.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromString` instead
    ///
    pub const FromString = fromString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` str: []const u8 `
    ///
    pub fn fromString(str: []const u8) QKeySequence {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return .{ .ptr = qtc.QKeySequence_FromString(str_str) };
    }

    /// ### DEPRECATED: Use `listFromString` instead
    ///
    pub const ListFromString = listFromString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#listFromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    pub fn listFromString(allocator: std.mem.Allocator, str: []const u8) []QKeySequence {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QKeySequence_ListFromString(str_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("QKeySequence.listFromString: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `listToString` instead
    ///
    pub const ListToString = listToString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#listToString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` list: []QKeySequence `
    ///
    pub fn listToString(allocator: std.mem.Allocator, list: []QKeySequence) []const u8 {
        const list_list = qtc.libqt_list{
            .len = list.len,
            .data = @ptrCast(list.ptr),
        };
        var _str = qtc.QKeySequence_ListToString(list_list);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QKeySequence.listToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `matches` instead
    ///
    pub const Matches = matches;

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
    pub fn matches(self: QKeySequence, seq: anytype) i32 {
        comptime _ = @TypeOf(seq)._is_QKeySequence;
        return qtc.QKeySequence_Matches(@ptrCast(self.ptr), @ptrCast(seq.ptr));
    }

    /// ### DEPRECATED: Use `mnemonic` instead
    ///
    pub const Mnemonic = mnemonic;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#mnemonic)
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    pub fn mnemonic(text: []const u8) QKeySequence {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QKeySequence_Mnemonic(text_str) };
    }

    /// ### DEPRECATED: Use `keyBindings` instead
    ///
    pub const KeyBindings = keyBindings;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#keyBindings)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: qkeysequence_enums.StandardKey `
    ///
    pub fn keyBindings(allocator: std.mem.Allocator, key: i32) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.QKeySequence_KeyBindings(@bitCast(key));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("QKeySequence.keyBindings: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `toQVariant` instead
    ///
    pub const ToQVariant = toQVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeySequence `
    ///
    pub fn toQVariant(self: QKeySequence) QVariant {
        return .{ .ptr = qtc.QKeySequence_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorSubscript` instead
    ///
    pub const OperatorSubscript = operatorSubscript;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeySequence `
    ///
    /// ` i: u32 `
    ///
    pub fn operatorSubscript(self: QKeySequence, i: u32) QKeyCombination {
        return .{ .ptr = qtc.QKeySequence_OperatorSubscript(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeySequence `
    ///
    /// ` other: QKeySequence `
    ///
    pub fn operatorAssign(self: QKeySequence, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QKeySequence;
        qtc.QKeySequence_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeySequence `
    ///
    /// ` other: QKeySequence `
    ///
    pub fn swap(self: QKeySequence, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QKeySequence;
        qtc.QKeySequence_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeySequence `
    ///
    /// ` other: QKeySequence `
    ///
    pub fn operatorEqual(self: QKeySequence, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QKeySequence;
        return qtc.QKeySequence_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeySequence `
    ///
    /// ` other: QKeySequence `
    ///
    pub fn operatorNotEqual(self: QKeySequence, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QKeySequence;
        return qtc.QKeySequence_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorLesser` instead
    ///
    pub const OperatorLesser = operatorLesser;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#operator-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeySequence `
    ///
    /// ` ks: QKeySequence `
    ///
    pub fn operatorLesser(self: QKeySequence, ks: anytype) bool {
        comptime _ = @TypeOf(ks)._is_QKeySequence;
        return qtc.QKeySequence_OperatorLesser(@ptrCast(self.ptr), @ptrCast(ks.ptr));
    }

    /// ### DEPRECATED: Use `operatorGreater` instead
    ///
    pub const OperatorGreater = operatorGreater;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#operator-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeySequence `
    ///
    /// ` other: QKeySequence `
    ///
    pub fn operatorGreater(self: QKeySequence, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QKeySequence;
        return qtc.QKeySequence_OperatorGreater(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorLesserOrEqual` instead
    ///
    pub const OperatorLesserOrEqual = operatorLesserOrEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#operator-lt-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeySequence `
    ///
    /// ` other: QKeySequence `
    ///
    pub fn operatorLesserOrEqual(self: QKeySequence, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QKeySequence;
        return qtc.QKeySequence_OperatorLesserOrEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorGreaterOrEqual` instead
    ///
    pub const OperatorGreaterOrEqual = operatorGreaterOrEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#operator-gt-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeySequence `
    ///
    /// ` other: QKeySequence `
    ///
    pub fn operatorGreaterOrEqual(self: QKeySequence, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QKeySequence;
        return qtc.QKeySequence_OperatorGreaterOrEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isDetached` instead
    ///
    pub const IsDetached = isDetached;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#isDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeySequence `
    ///
    pub fn isDetached(self: QKeySequence) bool {
        return qtc.QKeySequence_IsDetached(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toString1` instead
    ///
    pub const ToString1 = toString1;

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
    pub fn toString1(self: QKeySequence, allocator: std.mem.Allocator, format: i32) []const u8 {
        var _str = qtc.QKeySequence_ToString1(@ptrCast(self.ptr), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QKeySequence.toString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromString2` instead
    ///
    pub const FromString2 = fromString2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` str: []const u8 `
    ///
    /// ` format: qkeysequence_enums.SequenceFormat `
    ///
    pub fn fromString2(str: []const u8, format: i32) QKeySequence {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return .{ .ptr = qtc.QKeySequence_FromString2(str_str, @bitCast(format)) };
    }

    /// ### DEPRECATED: Use `listFromString2` instead
    ///
    pub const ListFromString2 = listFromString2;

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
    pub fn listFromString2(allocator: std.mem.Allocator, str: []const u8, format: i32) []QKeySequence {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QKeySequence_ListFromString2(str_str, @bitCast(format));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("QKeySequence.listFromString2: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `listToString2` instead
    ///
    pub const ListToString2 = listToString2;

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
    pub fn listToString2(allocator: std.mem.Allocator, list: []QKeySequence, format: i32) []const u8 {
        const list_list = qtc.libqt_list{
            .len = list.len,
            .data = @ptrCast(list.ptr),
        };
        var _str = qtc.QKeySequence_ListToString2(list_list, @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QKeySequence.listToString2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#dtor.QKeySequence)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QKeySequence `
    ///
    pub fn delete(self: QKeySequence) void {
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
