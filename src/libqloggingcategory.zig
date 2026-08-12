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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QLoggingCategory object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` category: [:0]const u8 `
    ///
    pub fn new(category: [:0]const u8) QLoggingCategory {
        const category_Cstring = category.ptr;
        return .{ .ptr = qtc.QLoggingCategory_new(category_Cstring) };
    }

    /// ### DEPRECATED: Use `isDebugEnabled` instead
    ///
    pub const IsDebugEnabled = isDebugEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qloggingcategory.html#isDebugEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLoggingCategory `
    ///
    pub fn isDebugEnabled(self: QLoggingCategory) bool {
        return qtc.QLoggingCategory_IsDebugEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInfoEnabled` instead
    ///
    pub const IsInfoEnabled = isInfoEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qloggingcategory.html#isInfoEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLoggingCategory `
    ///
    pub fn isInfoEnabled(self: QLoggingCategory) bool {
        return qtc.QLoggingCategory_IsInfoEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWarningEnabled` instead
    ///
    pub const IsWarningEnabled = isWarningEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qloggingcategory.html#isWarningEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLoggingCategory `
    ///
    pub fn isWarningEnabled(self: QLoggingCategory) bool {
        return qtc.QLoggingCategory_IsWarningEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCriticalEnabled` instead
    ///
    pub const IsCriticalEnabled = isCriticalEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qloggingcategory.html#isCriticalEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLoggingCategory `
    ///
    pub fn isCriticalEnabled(self: QLoggingCategory) bool {
        return qtc.QLoggingCategory_IsCriticalEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `categoryName` instead
    ///
    pub const CategoryName = categoryName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qloggingcategory.html#categoryName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLoggingCategory `
    ///
    pub fn categoryName(self: QLoggingCategory) [:0]const u8 {
        const _ret = qtc.QLoggingCategory_CategoryName(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `operatorCall` instead
    ///
    pub const OperatorCall = operatorCall;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qloggingcategory.html#operator-28-29)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLoggingCategory `
    ///
    pub fn operatorCall(self: QLoggingCategory) QLoggingCategory {
        return .{ .ptr = qtc.QLoggingCategory_OperatorCall(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorCall2` instead
    ///
    pub const OperatorCall2 = operatorCall2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qloggingcategory.html#operator-28-29)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLoggingCategory `
    ///
    pub fn operatorCall2(self: QLoggingCategory) QLoggingCategory {
        return .{ .ptr = qtc.QLoggingCategory_OperatorCall2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `defaultCategory` instead
    ///
    pub const DefaultCategory = defaultCategory;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qloggingcategory.html#defaultCategory)
    ///
    pub fn defaultCategory() QLoggingCategory {
        return .{ .ptr = qtc.QLoggingCategory_DefaultCategory() };
    }

    /// ### DEPRECATED: Use `installFilter` instead
    ///
    pub const InstallFilter = installFilter;

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
    pub fn installFilter(param1: *const fn (QLoggingCategory) callconv(.c) void) ?*const fn (QLoggingCategory) callconv(.c) void {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QLoggingCategory_InstallFilter(@bitCast(@intFromPtr(param1))))));
    }

    /// ### DEPRECATED: Use `setFilterRules` instead
    ///
    pub const SetFilterRules = setFilterRules;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qloggingcategory.html#setFilterRules)
    ///
    /// ## Parameter(s):
    ///
    /// ` rules: []const u8 `
    ///
    pub fn setFilterRules(rules: []const u8) void {
        const rules_str = qtc.libqt_string{
            .len = rules.len,
            .data = rules.ptr,
        };
        qtc.QLoggingCategory_SetFilterRules(rules_str);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qloggingcategory.html#dtor.QLoggingCategory)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QLoggingCategory `
    ///
    pub fn delete(self: QLoggingCategory) void {
        qtc.QLoggingCategory_Delete(@ptrCast(self.ptr));
    }
};
