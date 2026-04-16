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

    /// New constructs a new QCollatorSortKey object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCollatorSortKey `
    ///
    pub fn New(other: anytype) QCollatorSortKey {
        comptime _ = @TypeOf(other)._is_QCollatorSortKey;
        return .{ .ptr = qtc.QCollatorSortKey_new(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollatorsortkey.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCollatorSortKey `
    ///
    /// ` other: QCollatorSortKey `
    ///
    pub fn OperatorAssign(self: QCollatorSortKey, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCollatorSortKey;
        qtc.QCollatorSortKey_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollatorsortkey.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCollatorSortKey `
    ///
    /// ` other: QCollatorSortKey `
    ///
    pub fn Swap(self: QCollatorSortKey, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCollatorSortKey;
        qtc.QCollatorSortKey_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollatorsortkey.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCollatorSortKey `
    ///
    /// ` key: QCollatorSortKey `
    ///
    pub fn Compare(self: QCollatorSortKey, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QCollatorSortKey;
        return qtc.QCollatorSortKey_Compare(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollatorsortkey.html#dtor.QCollatorSortKey)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QCollatorSortKey `
    ///
    pub fn Delete(self: QCollatorSortKey) void {
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

    /// New constructs a new QCollator object.
    ///
    pub fn New() QCollator {
        return .{ .ptr = qtc.QCollator_new() };
    }

    /// New2 constructs a new QCollator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` locale: QLocale `
    ///
    pub fn New2(locale: anytype) QCollator {
        comptime _ = @TypeOf(locale)._is_QLocale;
        return .{ .ptr = qtc.QCollator_new2(@ptrCast(locale.ptr)) };
    }

    /// New3 constructs a new QCollator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QCollator `
    ///
    pub fn New3(param1: anytype) QCollator {
        comptime _ = @TypeOf(param1)._is_QCollator;
        return .{ .ptr = qtc.QCollator_new3(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCollator `
    ///
    /// ` param1: QCollator `
    ///
    pub fn OperatorAssign(self: QCollator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCollator;
        qtc.QCollator_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCollator `
    ///
    /// ` other: QCollator `
    ///
    pub fn Swap(self: QCollator, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCollator;
        qtc.QCollator_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCollator `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: QCollator, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QCollator_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCollator `
    ///
    pub fn Locale(self: QCollator) QLocale {
        return .{ .ptr = qtc.QCollator_Locale(@ptrCast(self.ptr)) };
    }

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
    pub fn CaseSensitivity(self: QCollator) i32 {
        return qtc.QCollator_CaseSensitivity(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#setCaseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCollator `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn SetCaseSensitivity(self: QCollator, cs: i32) void {
        qtc.QCollator_SetCaseSensitivity(@ptrCast(self.ptr), @bitCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#setNumericMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCollator `
    ///
    /// ` on: bool `
    ///
    pub fn SetNumericMode(self: QCollator, on: bool) void {
        qtc.QCollator_SetNumericMode(@ptrCast(self.ptr), on);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#numericMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCollator `
    ///
    pub fn NumericMode(self: QCollator) bool {
        return qtc.QCollator_NumericMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#setIgnorePunctuation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCollator `
    ///
    /// ` on: bool `
    ///
    pub fn SetIgnorePunctuation(self: QCollator, on: bool) void {
        qtc.QCollator_SetIgnorePunctuation(@ptrCast(self.ptr), on);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#ignorePunctuation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCollator `
    ///
    pub fn IgnorePunctuation(self: QCollator) bool {
        return qtc.QCollator_IgnorePunctuation(@ptrCast(self.ptr));
    }

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
    pub fn Compare(self: QCollator, s1: []const u8, s2: []const u8) i32 {
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
    pub fn Compare2(self: QCollator, s1: anytype, len1: isize, s2: anytype, len2: isize) i32 {
        comptime _ = @TypeOf(s1)._is_QChar;
        comptime _ = @TypeOf(s2)._is_QChar;
        return qtc.QCollator_Compare2(@ptrCast(self.ptr), @ptrCast(s1.ptr), @bitCast(len1), @ptrCast(s2.ptr), @bitCast(len2));
    }

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
    pub fn OperatorCall(self: QCollator, s1: []const u8, s2: []const u8) bool {
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#sortKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCollator `
    ///
    /// ` stringVal: []const u8 `
    ///
    pub fn SortKey(self: QCollator, stringVal: []const u8) QCollatorSortKey {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return .{ .ptr = qtc.QCollator_SortKey(@ptrCast(self.ptr), stringVal_str) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#dtor.QCollator)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QCollator `
    ///
    pub fn Delete(self: QCollator) void {
        qtc.QCollator_Delete(@ptrCast(self.ptr));
    }
};
