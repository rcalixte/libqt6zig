const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qloggingcategory.html
pub const qloggingcategory = struct {
    /// New constructs a new QLoggingCategory object.
    ///
    /// ``` category: []const u8 ```
    pub fn New(category: []const u8) QtC.QLoggingCategory {
        const category_Cstring = category.ptr;

        return qtc.QLoggingCategory_new(category_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qloggingcategory.html#isDebugEnabled)
    ///
    /// ``` self: QtC.QLoggingCategory ```
    pub fn IsDebugEnabled(self: ?*anyopaque) bool {
        return qtc.QLoggingCategory_IsDebugEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qloggingcategory.html#isInfoEnabled)
    ///
    /// ``` self: QtC.QLoggingCategory ```
    pub fn IsInfoEnabled(self: ?*anyopaque) bool {
        return qtc.QLoggingCategory_IsInfoEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qloggingcategory.html#isWarningEnabled)
    ///
    /// ``` self: QtC.QLoggingCategory ```
    pub fn IsWarningEnabled(self: ?*anyopaque) bool {
        return qtc.QLoggingCategory_IsWarningEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qloggingcategory.html#isCriticalEnabled)
    ///
    /// ``` self: QtC.QLoggingCategory ```
    pub fn IsCriticalEnabled(self: ?*anyopaque) bool {
        return qtc.QLoggingCategory_IsCriticalEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qloggingcategory.html#categoryName)
    ///
    /// ``` self: QtC.QLoggingCategory ```
    pub fn CategoryName(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QLoggingCategory_CategoryName(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qloggingcategory.html#operator())
    ///
    /// ``` self: QtC.QLoggingCategory ```
    pub fn OperatorCall(self: ?*anyopaque) QtC.QLoggingCategory {
        return qtc.QLoggingCategory_OperatorCall(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qloggingcategory.html#operator())
    ///
    /// ``` self: QtC.QLoggingCategory ```
    pub fn OperatorCall2(self: ?*anyopaque) QtC.QLoggingCategory {
        return qtc.QLoggingCategory_OperatorCall2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qloggingcategory.html#defaultCategory)
    ///
    ///
    pub fn DefaultCategory() QtC.QLoggingCategory {
        return qtc.QLoggingCategory_DefaultCategory();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qloggingcategory.html#setFilterRules)
    ///
    /// ``` rules: []const u8 ```
    pub fn SetFilterRules(rules: []const u8) void {
        const rules_str = qtc.struct_libqt_string{
            .len = rules.len,
            .data = rules.ptr,
        };
        qtc.QLoggingCategory_SetFilterRules(rules_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qloggingcategory.html#dtor.QLoggingCategory)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QLoggingCategory ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QLoggingCategory_Delete(@ptrCast(self));
    }
};
