const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qloggingcategory.html)
pub const QLoggingCategory = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qloggingcategory.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QLoggingCategory,

    pub const _is_QLoggingCategory = {};

    /// New constructs a new QLoggingCategory object.
    ///
    /// ## Parameter(s):
    ///
    /// ` category: [:0]const u8 `
    ///
    pub fn New(category: [:0]const u8) QLoggingCategory {
        const category_Cstring = category.ptr;
        return .{ .ptr = qtc.QLoggingCategory_new(category_Cstring) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qloggingcategory.html#isDebugEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLoggingCategory `
    ///
    pub fn IsDebugEnabled(self: QLoggingCategory) bool {
        return qtc.QLoggingCategory_IsDebugEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qloggingcategory.html#isInfoEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLoggingCategory `
    ///
    pub fn IsInfoEnabled(self: QLoggingCategory) bool {
        return qtc.QLoggingCategory_IsInfoEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qloggingcategory.html#isWarningEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLoggingCategory `
    ///
    pub fn IsWarningEnabled(self: QLoggingCategory) bool {
        return qtc.QLoggingCategory_IsWarningEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qloggingcategory.html#isCriticalEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLoggingCategory `
    ///
    pub fn IsCriticalEnabled(self: QLoggingCategory) bool {
        return qtc.QLoggingCategory_IsCriticalEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qloggingcategory.html#categoryName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLoggingCategory `
    ///
    pub fn CategoryName(self: QLoggingCategory) [:0]const u8 {
        const _ret = qtc.QLoggingCategory_CategoryName(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qloggingcategory.html#operator-28-29)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLoggingCategory `
    ///
    pub fn OperatorCall(self: QLoggingCategory) QLoggingCategory {
        return .{ .ptr = qtc.QLoggingCategory_OperatorCall(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qloggingcategory.html#operator-28-29)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLoggingCategory `
    ///
    pub fn OperatorCall2(self: QLoggingCategory) QLoggingCategory {
        return .{ .ptr = qtc.QLoggingCategory_OperatorCall2(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qloggingcategory.html#defaultCategory)
    ///
    pub fn DefaultCategory() QLoggingCategory {
        return .{ .ptr = qtc.QLoggingCategory_DefaultCategory() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qloggingcategory.html#installFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: *const fn (funcparam1: QLoggingCategory) callconv(.c) void `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: QLoggingCategory) callconv(.c) void `
    ///
    pub fn InstallFilter(param1: *const fn (QLoggingCategory) callconv(.c) void) ?*const fn (QLoggingCategory) callconv(.c) void {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QLoggingCategory_InstallFilter(@bitCast(@intFromPtr(param1))))));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qloggingcategory.html#setFilterRules)
    ///
    /// ## Parameter(s):
    ///
    /// ` rules: []const u8 `
    ///
    pub fn SetFilterRules(rules: []const u8) void {
        const rules_str = qtc.libqt_string{
            .len = rules.len,
            .data = rules.ptr,
        };
        qtc.QLoggingCategory_SetFilterRules(rules_str);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qloggingcategory.html#dtor.QLoggingCategory)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QLoggingCategory `
    ///
    pub fn Delete(self: QLoggingCategory) void {
        qtc.QLoggingCategory_Delete(@ptrCast(self.ptr));
    }
};
