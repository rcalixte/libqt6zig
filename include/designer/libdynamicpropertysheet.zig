const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html)
pub const qdesignerdynamicpropertysheetextension = struct {
    /// New constructs a new QDesignerDynamicPropertySheetExtension object.
    ///
    pub fn New() QtC.QDesignerDynamicPropertySheetExtension {
        return qtc.QDesignerDynamicPropertySheetExtension_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#dynamicPropertiesAllowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerDynamicPropertySheetExtension `
    ///
    pub fn DynamicPropertiesAllowed(self: ?*anyopaque) bool {
        return qtc.QDesignerDynamicPropertySheetExtension_DynamicPropertiesAllowed(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#dynamicPropertiesAllowed)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerDynamicPropertySheetExtension `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnDynamicPropertiesAllowed(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QDesignerDynamicPropertySheetExtension_OnDynamicPropertiesAllowed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDynamicPropertiesAllowed` instead
    ///
    pub const QBaseDynamicPropertiesAllowed = SuperDynamicPropertiesAllowed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#dynamicPropertiesAllowed)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerDynamicPropertySheetExtension `
    ///
    pub fn SuperDynamicPropertiesAllowed(self: ?*anyopaque) bool {
        return qtc.QDesignerDynamicPropertySheetExtension_SuperDynamicPropertiesAllowed(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#addDynamicProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerDynamicPropertySheetExtension `
    ///
    /// ` propertyName: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn AddDynamicProperty(self: ?*anyopaque, propertyName: []const u8, value: ?*anyopaque) i32 {
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        return qtc.QDesignerDynamicPropertySheetExtension_AddDynamicProperty(@ptrCast(self), propertyName_str, @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#addDynamicProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerDynamicPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerDynamicPropertySheetExtension, propertyName: [*:0]const u8, value: QtC.QVariant) callconv(.c) i32 `
    ///
    pub fn OnAddDynamicProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque) callconv(.c) i32) void {
        qtc.QDesignerDynamicPropertySheetExtension_OnAddDynamicProperty(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAddDynamicProperty` instead
    ///
    pub const QBaseAddDynamicProperty = SuperAddDynamicProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#addDynamicProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerDynamicPropertySheetExtension `
    ///
    /// ` propertyName: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SuperAddDynamicProperty(self: ?*anyopaque, propertyName: []const u8, value: ?*anyopaque) i32 {
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        return qtc.QDesignerDynamicPropertySheetExtension_SuperAddDynamicProperty(@ptrCast(self), propertyName_str, @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#removeDynamicProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerDynamicPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn RemoveDynamicProperty(self: ?*anyopaque, index: i32) bool {
        return qtc.QDesignerDynamicPropertySheetExtension_RemoveDynamicProperty(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#removeDynamicProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerDynamicPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerDynamicPropertySheetExtension, index: i32) callconv(.c) bool `
    ///
    pub fn OnRemoveDynamicProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QDesignerDynamicPropertySheetExtension_OnRemoveDynamicProperty(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRemoveDynamicProperty` instead
    ///
    pub const QBaseRemoveDynamicProperty = SuperRemoveDynamicProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#removeDynamicProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerDynamicPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperRemoveDynamicProperty(self: ?*anyopaque, index: i32) bool {
        return qtc.QDesignerDynamicPropertySheetExtension_SuperRemoveDynamicProperty(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#isDynamicProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerDynamicPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn IsDynamicProperty(self: ?*anyopaque, index: i32) bool {
        return qtc.QDesignerDynamicPropertySheetExtension_IsDynamicProperty(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#isDynamicProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerDynamicPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerDynamicPropertySheetExtension, index: i32) callconv(.c) bool `
    ///
    pub fn OnIsDynamicProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QDesignerDynamicPropertySheetExtension_OnIsDynamicProperty(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsDynamicProperty` instead
    ///
    pub const QBaseIsDynamicProperty = SuperIsDynamicProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#isDynamicProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerDynamicPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperIsDynamicProperty(self: ?*anyopaque, index: i32) bool {
        return qtc.QDesignerDynamicPropertySheetExtension_SuperIsDynamicProperty(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#canAddDynamicProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerDynamicPropertySheetExtension `
    ///
    /// ` propertyName: []const u8 `
    ///
    pub fn CanAddDynamicProperty(self: ?*anyopaque, propertyName: []const u8) bool {
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        return qtc.QDesignerDynamicPropertySheetExtension_CanAddDynamicProperty(@ptrCast(self), propertyName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#canAddDynamicProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerDynamicPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerDynamicPropertySheetExtension, propertyName: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnCanAddDynamicProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.QDesignerDynamicPropertySheetExtension_OnCanAddDynamicProperty(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCanAddDynamicProperty` instead
    ///
    pub const QBaseCanAddDynamicProperty = SuperCanAddDynamicProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#canAddDynamicProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerDynamicPropertySheetExtension `
    ///
    /// ` propertyName: []const u8 `
    ///
    pub fn SuperCanAddDynamicProperty(self: ?*anyopaque, propertyName: []const u8) bool {
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        return qtc.QDesignerDynamicPropertySheetExtension_SuperCanAddDynamicProperty(@ptrCast(self), propertyName_str);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#dtor.QDesignerDynamicPropertySheetExtension)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDesignerDynamicPropertySheetExtension `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QDesignerDynamicPropertySheetExtension_Delete(@ptrCast(self));
    }
};
