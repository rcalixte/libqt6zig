const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QChar = @import("libqt6").QChar;
const QLocale = @import("libqt6").QLocale;
const qnamespace_enums = @import("libqnamespace.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcollatorsortkey.html)
pub const QCollatorSortKey = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollatorsortkey.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCollatorSortKey,

    pub const _is_QCollatorSortKey = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QCollatorSortKey object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCollatorSortKey `
    ///
    pub fn new(other: anytype) QCollatorSortKey {
        comptime _ = @TypeOf(other)._is_QCollatorSortKey;
        return .{ .ptr = qtc.QCollatorSortKey_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollatorsortkey.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCollatorSortKey `
    ///
    /// ` other: QCollatorSortKey `
    ///
    pub fn operatorAssign(self: QCollatorSortKey, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCollatorSortKey;
        qtc.QCollatorSortKey_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollatorsortkey.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCollatorSortKey `
    ///
    /// ` other: QCollatorSortKey `
    ///
    pub fn swap(self: QCollatorSortKey, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCollatorSortKey;
        qtc.QCollatorSortKey_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `compare` instead
    ///
    pub const Compare = compare;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollatorsortkey.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCollatorSortKey `
    ///
    /// ` key: QCollatorSortKey `
    ///
    pub fn compare(self: QCollatorSortKey, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QCollatorSortKey;
        return qtc.QCollatorSortKey_Compare(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollatorsortkey.html#dtor.QCollatorSortKey)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QCollatorSortKey `
    ///
    pub fn delete(self: QCollatorSortKey) void {
        qtc.QCollatorSortKey_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html)
pub const QCollator = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCollator,

    pub const _is_QCollator = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QCollator object in C++ memory
    ///
    pub fn new() QCollator {
        return .{ .ptr = qtc.QCollator_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QCollator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _locale: QLocale `
    ///
    pub fn new2(_locale: anytype) QCollator {
        comptime _ = @TypeOf(_locale)._is_QLocale;
        return .{ .ptr = qtc.QCollator_new2(@ptrCast(_locale.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QCollator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QCollator `
    ///
    pub fn new3(param1: anytype) QCollator {
        comptime _ = @TypeOf(param1)._is_QCollator;
        return .{ .ptr = qtc.QCollator_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCollator `
    ///
    /// ` param1: QCollator `
    ///
    pub fn operatorAssign(self: QCollator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCollator;
        qtc.QCollator_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCollator `
    ///
    /// ` other: QCollator `
    ///
    pub fn swap(self: QCollator, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCollator;
        qtc.QCollator_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setLocale` instead
    ///
    pub const SetLocale = setLocale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCollator `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn setLocale(self: QCollator, _locale: anytype) void {
        comptime _ = @TypeOf(_locale)._is_QLocale;
        qtc.QCollator_SetLocale(@ptrCast(self.ptr), @ptrCast(_locale.ptr));
    }

    /// ### DEPRECATED: Use `locale` instead
    ///
    pub const Locale = locale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCollator `
    ///
    pub fn locale(self: QCollator) QLocale {
        return .{ .ptr = qtc.QCollator_Locale(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `caseSensitivity` instead
    ///
    pub const CaseSensitivity = caseSensitivity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#caseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCollator `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.CaseSensitivity `
    ///
    pub fn caseSensitivity(self: QCollator) i32 {
        return qtc.QCollator_CaseSensitivity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCaseSensitivity` instead
    ///
    pub const SetCaseSensitivity = setCaseSensitivity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#setCaseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCollator `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn setCaseSensitivity(self: QCollator, cs: i32) void {
        qtc.QCollator_SetCaseSensitivity(@ptrCast(self.ptr), @bitCast(cs));
    }

    /// ### DEPRECATED: Use `setNumericMode` instead
    ///
    pub const SetNumericMode = setNumericMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#setNumericMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCollator `
    ///
    /// ` on: bool `
    ///
    pub fn setNumericMode(self: QCollator, on: bool) void {
        qtc.QCollator_SetNumericMode(@ptrCast(self.ptr), on);
    }

    /// ### DEPRECATED: Use `numericMode` instead
    ///
    pub const NumericMode = numericMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#numericMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCollator `
    ///
    pub fn numericMode(self: QCollator) bool {
        return qtc.QCollator_NumericMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setIgnorePunctuation` instead
    ///
    pub const SetIgnorePunctuation = setIgnorePunctuation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#setIgnorePunctuation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCollator `
    ///
    /// ` on: bool `
    ///
    pub fn setIgnorePunctuation(self: QCollator, on: bool) void {
        qtc.QCollator_SetIgnorePunctuation(@ptrCast(self.ptr), on);
    }

    /// ### DEPRECATED: Use `ignorePunctuation` instead
    ///
    pub const IgnorePunctuation = ignorePunctuation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#ignorePunctuation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCollator `
    ///
    pub fn ignorePunctuation(self: QCollator) bool {
        return qtc.QCollator_IgnorePunctuation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `compare` instead
    ///
    pub const Compare = compare;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCollator `
    ///
    /// ` s1: []const u8 `
    ///
    /// ` s2: []const u8 `
    ///
    pub fn compare(self: QCollator, s1: []const u8, s2: []const u8) i32 {
        const s1_str = qtc.libqt_string{
            .len = s1.len,
            .data = s1.ptr,
        };
        const s2_str = qtc.libqt_string{
            .len = s2.len,
            .data = s2.ptr,
        };
        return qtc.QCollator_Compare(@ptrCast(self.ptr), s1_str, s2_str);
    }

    /// ### DEPRECATED: Use `compare2` instead
    ///
    pub const Compare2 = compare2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCollator `
    ///
    /// ` s1: QChar `
    ///
    /// ` len1: isize `
    ///
    /// ` s2: QChar `
    ///
    /// ` len2: isize `
    ///
    pub fn compare2(self: QCollator, s1: anytype, len1: isize, s2: anytype, len2: isize) i32 {
        comptime _ = @TypeOf(s1)._is_QChar;
        comptime _ = @TypeOf(s2)._is_QChar;
        return qtc.QCollator_Compare2(@ptrCast(self.ptr), @ptrCast(s1.ptr), @bitCast(len1), @ptrCast(s2.ptr), @bitCast(len2));
    }

    /// ### DEPRECATED: Use `operatorCall` instead
    ///
    pub const OperatorCall = operatorCall;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#operator-28-29)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCollator `
    ///
    /// ` s1: []const u8 `
    ///
    /// ` s2: []const u8 `
    ///
    pub fn operatorCall(self: QCollator, s1: []const u8, s2: []const u8) bool {
        const s1_str = qtc.libqt_string{
            .len = s1.len,
            .data = s1.ptr,
        };
        const s2_str = qtc.libqt_string{
            .len = s2.len,
            .data = s2.ptr,
        };
        return qtc.QCollator_OperatorCall(@ptrCast(self.ptr), s1_str, s2_str);
    }

    /// ### DEPRECATED: Use `compare3` instead
    ///
    pub const Compare3 = compare3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCollator `
    ///
    /// ` s1: []const u8 `
    ///
    /// ` s2: []const u8 `
    ///
    pub fn compare3(self: QCollator, s1: []const u8, s2: []const u8) i32 {
        const s1_str = qtc.libqt_string{
            .len = s1.len,
            .data = s1.ptr,
        };
        const s2_str = qtc.libqt_string{
            .len = s2.len,
            .data = s2.ptr,
        };
        return qtc.QCollator_Compare3(@ptrCast(self.ptr), s1_str, s2_str);
    }

    /// ### DEPRECATED: Use `operatorCall2` instead
    ///
    pub const OperatorCall2 = operatorCall2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#operator-28-29)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCollator `
    ///
    /// ` s1: []const u8 `
    ///
    /// ` s2: []const u8 `
    ///
    pub fn operatorCall2(self: QCollator, s1: []const u8, s2: []const u8) bool {
        const s1_str = qtc.libqt_string{
            .len = s1.len,
            .data = s1.ptr,
        };
        const s2_str = qtc.libqt_string{
            .len = s2.len,
            .data = s2.ptr,
        };
        return qtc.QCollator_OperatorCall2(@ptrCast(self.ptr), s1_str, s2_str);
    }

    /// ### DEPRECATED: Use `sortKey` instead
    ///
    pub const SortKey = sortKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#sortKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCollator `
    ///
    /// ` string: []const u8 `
    ///
    pub fn sortKey(self: QCollator, string: []const u8) QCollatorSortKey {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        return .{ .ptr = qtc.QCollator_SortKey(@ptrCast(self.ptr), string_str) };
    }

    /// ### DEPRECATED: Use `defaultCompare` instead
    ///
    pub const DefaultCompare = defaultCompare;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#defaultCompare)
    ///
    /// ## Parameter(s):
    ///
    /// ` s1: []const u8 `
    ///
    /// ` s2: []const u8 `
    ///
    pub fn defaultCompare(s1: []const u8, s2: []const u8) i32 {
        const s1_str = qtc.libqt_string{
            .len = s1.len,
            .data = s1.ptr,
        };
        const s2_str = qtc.libqt_string{
            .len = s2.len,
            .data = s2.ptr,
        };
        return qtc.QCollator_DefaultCompare(s1_str, s2_str);
    }

    /// ### DEPRECATED: Use `defaultSortKey` instead
    ///
    pub const DefaultSortKey = defaultSortKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#defaultSortKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: []const u8 `
    ///
    pub fn defaultSortKey(key: []const u8) QCollatorSortKey {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCollator_DefaultSortKey(key_str) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#dtor.QCollator)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QCollator `
    ///
    pub fn delete(self: QCollator) void {
        qtc.QCollator_Delete(@ptrCast(self.ptr));
    }
};
