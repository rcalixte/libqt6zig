const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcollatorsortkey.html)
pub const qcollatorsortkey = struct {
    /// New constructs a new QCollatorSortKey object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QCollatorSortKey `
    ///
    pub fn New(other: ?*anyopaque) QtC.QCollatorSortKey {
        return qtc.QCollatorSortKey_new(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollatorsortkey.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCollatorSortKey `
    ///
    /// ` other: QtC.QCollatorSortKey `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCollatorSortKey_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollatorsortkey.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCollatorSortKey `
    ///
    /// ` other: QtC.QCollatorSortKey `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCollatorSortKey_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollatorsortkey.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCollatorSortKey `
    ///
    /// ` key: QtC.QCollatorSortKey `
    ///
    pub fn Compare(self: ?*anyopaque, key: ?*anyopaque) i32 {
        return qtc.QCollatorSortKey_Compare(@ptrCast(self), @ptrCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollatorsortkey.html#dtor.QCollatorSortKey)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QCollatorSortKey `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCollatorSortKey_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html)
pub const qcollator = struct {
    /// New constructs a new QCollator object.
    ///
    pub fn New() QtC.QCollator {
        return qtc.QCollator_new();
    }

    /// New2 constructs a new QCollator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` locale: QtC.QLocale `
    ///
    pub fn New2(locale: ?*anyopaque) QtC.QCollator {
        return qtc.QCollator_new2(@ptrCast(locale));
    }

    /// New3 constructs a new QCollator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QCollator `
    ///
    pub fn New3(param1: ?*anyopaque) QtC.QCollator {
        return qtc.QCollator_new3(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCollator `
    ///
    /// ` param1: QtC.QCollator `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QCollator_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCollator `
    ///
    /// ` other: QtC.QCollator `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCollator_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCollator `
    ///
    /// ` locale: QtC.QLocale `
    ///
    pub fn SetLocale(self: ?*anyopaque, locale: ?*anyopaque) void {
        qtc.QCollator_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCollator `
    ///
    pub fn Locale(self: ?*anyopaque) QtC.QLocale {
        return qtc.QCollator_Locale(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#caseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCollator `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.CaseSensitivity `
    ///
    pub fn CaseSensitivity(self: ?*anyopaque) i32 {
        return qtc.QCollator_CaseSensitivity(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#setCaseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCollator `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn SetCaseSensitivity(self: ?*anyopaque, cs: i32) void {
        qtc.QCollator_SetCaseSensitivity(@ptrCast(self), @intCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#setNumericMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCollator `
    ///
    /// ` on: bool `
    ///
    pub fn SetNumericMode(self: ?*anyopaque, on: bool) void {
        qtc.QCollator_SetNumericMode(@ptrCast(self), on);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#numericMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCollator `
    ///
    pub fn NumericMode(self: ?*anyopaque) bool {
        return qtc.QCollator_NumericMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#setIgnorePunctuation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCollator `
    ///
    /// ` on: bool `
    ///
    pub fn SetIgnorePunctuation(self: ?*anyopaque, on: bool) void {
        qtc.QCollator_SetIgnorePunctuation(@ptrCast(self), on);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#ignorePunctuation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCollator `
    ///
    pub fn IgnorePunctuation(self: ?*anyopaque) bool {
        return qtc.QCollator_IgnorePunctuation(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCollator `
    ///
    /// ` s1: []const u8 `
    ///
    /// ` s2: []const u8 `
    ///
    pub fn Compare(self: ?*anyopaque, s1: []const u8, s2: []const u8) i32 {
        const s1_str = qtc.libqt_string{
            .len = s1.len,
            .data = s1.ptr,
        };
        const s2_str = qtc.libqt_string{
            .len = s2.len,
            .data = s2.ptr,
        };
        return qtc.QCollator_Compare(@ptrCast(self), s1_str, s2_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCollator `
    ///
    /// ` s1: QtC.QChar `
    ///
    /// ` len1: i64 `
    ///
    /// ` s2: QtC.QChar `
    ///
    /// ` len2: i64 `
    ///
    pub fn Compare2(self: ?*anyopaque, s1: ?*anyopaque, len1: i64, s2: ?*anyopaque, len2: i64) i32 {
        return qtc.QCollator_Compare2(@ptrCast(self), @ptrCast(s1), @intCast(len1), @ptrCast(s2), @intCast(len2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#operator-28-29)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCollator `
    ///
    /// ` s1: []const u8 `
    ///
    /// ` s2: []const u8 `
    ///
    pub fn OperatorCall(self: ?*anyopaque, s1: []const u8, s2: []const u8) bool {
        const s1_str = qtc.libqt_string{
            .len = s1.len,
            .data = s1.ptr,
        };
        const s2_str = qtc.libqt_string{
            .len = s2.len,
            .data = s2.ptr,
        };
        return qtc.QCollator_OperatorCall(@ptrCast(self), s1_str, s2_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#sortKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCollator `
    ///
    /// ` stringVal: []const u8 `
    ///
    pub fn SortKey(self: ?*anyopaque, stringVal: []const u8) QtC.QCollatorSortKey {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return qtc.QCollator_SortKey(@ptrCast(self), stringVal_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#dtor.QCollator)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QCollator `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCollator_Delete(@ptrCast(self));
    }
};
