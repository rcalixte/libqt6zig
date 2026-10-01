const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QVariant = @import("libqt6").QVariant;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html)
pub const QDesignerDynamicPropertySheetExtension = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDesignerDynamicPropertySheetExtension,

    pub const _is_QDesignerDynamicPropertySheetExtension = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDesignerDynamicPropertySheetExtension object in C++ memory
    ///
    pub fn new() QDesignerDynamicPropertySheetExtension {
        return .{ .ptr = qtc.QDesignerDynamicPropertySheetExtension_new() };
    }

    /// ### DEPRECATED: Use `dynamicPropertiesAllowed` instead
    ///
    pub const DynamicPropertiesAllowed = dynamicPropertiesAllowed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#dynamicPropertiesAllowed)
    ///
    /// This method must be implemented with `onDynamicPropertiesAllowed` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerDynamicPropertySheetExtension `
    ///
    pub fn dynamicPropertiesAllowed(self: QDesignerDynamicPropertySheetExtension) bool {
        return qtc.QDesignerDynamicPropertySheetExtension_DynamicPropertiesAllowed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDynamicPropertiesAllowed` instead
    ///
    pub const OnDynamicPropertiesAllowed = onDynamicPropertiesAllowed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#dynamicPropertiesAllowed)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerDynamicPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerDynamicPropertySheetExtension) callconv(.c) bool `
    ///
    pub fn onDynamicPropertiesAllowed(self: QDesignerDynamicPropertySheetExtension, callback: *const fn (QDesignerDynamicPropertySheetExtension) callconv(.c) bool) void {
        qtc.QDesignerDynamicPropertySheetExtension_OnDynamicPropertiesAllowed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `addDynamicProperty` instead
    ///
    pub const AddDynamicProperty = addDynamicProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#addDynamicProperty)
    ///
    /// This method must be implemented with `onAddDynamicProperty` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerDynamicPropertySheetExtension `
    ///
    /// ` propertyName: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn addDynamicProperty(self: QDesignerDynamicPropertySheetExtension, propertyName: []const u8, value: anytype) i32 {
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QDesignerDynamicPropertySheetExtension_AddDynamicProperty(@ptrCast(self.ptr), propertyName_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `onAddDynamicProperty` instead
    ///
    pub const OnAddDynamicProperty = onAddDynamicProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#addDynamicProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerDynamicPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerDynamicPropertySheetExtension, propertyName: [*:0]const u8, value: QVariant) callconv(.c) i32 `
    ///
    pub fn onAddDynamicProperty(self: QDesignerDynamicPropertySheetExtension, callback: *const fn (QDesignerDynamicPropertySheetExtension, [*:0]const u8, QVariant) callconv(.c) i32) void {
        qtc.QDesignerDynamicPropertySheetExtension_OnAddDynamicProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `removeDynamicProperty` instead
    ///
    pub const RemoveDynamicProperty = removeDynamicProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#removeDynamicProperty)
    ///
    /// This method must be implemented with `onRemoveDynamicProperty` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerDynamicPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn removeDynamicProperty(self: QDesignerDynamicPropertySheetExtension, index: i32) bool {
        return qtc.QDesignerDynamicPropertySheetExtension_RemoveDynamicProperty(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onRemoveDynamicProperty` instead
    ///
    pub const OnRemoveDynamicProperty = onRemoveDynamicProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#removeDynamicProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerDynamicPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerDynamicPropertySheetExtension, index: i32) callconv(.c) bool `
    ///
    pub fn onRemoveDynamicProperty(self: QDesignerDynamicPropertySheetExtension, callback: *const fn (QDesignerDynamicPropertySheetExtension, i32) callconv(.c) bool) void {
        qtc.QDesignerDynamicPropertySheetExtension_OnRemoveDynamicProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isDynamicProperty` instead
    ///
    pub const IsDynamicProperty = isDynamicProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#isDynamicProperty)
    ///
    /// This method must be implemented with `onIsDynamicProperty` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerDynamicPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn isDynamicProperty(self: QDesignerDynamicPropertySheetExtension, index: i32) bool {
        return qtc.QDesignerDynamicPropertySheetExtension_IsDynamicProperty(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onIsDynamicProperty` instead
    ///
    pub const OnIsDynamicProperty = onIsDynamicProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#isDynamicProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerDynamicPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerDynamicPropertySheetExtension, index: i32) callconv(.c) bool `
    ///
    pub fn onIsDynamicProperty(self: QDesignerDynamicPropertySheetExtension, callback: *const fn (QDesignerDynamicPropertySheetExtension, i32) callconv(.c) bool) void {
        qtc.QDesignerDynamicPropertySheetExtension_OnIsDynamicProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `canAddDynamicProperty` instead
    ///
    pub const CanAddDynamicProperty = canAddDynamicProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#canAddDynamicProperty)
    ///
    /// This method must be implemented with `onCanAddDynamicProperty` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerDynamicPropertySheetExtension `
    ///
    /// ` propertyName: []const u8 `
    ///
    pub fn canAddDynamicProperty(self: QDesignerDynamicPropertySheetExtension, propertyName: []const u8) bool {
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        return qtc.QDesignerDynamicPropertySheetExtension_CanAddDynamicProperty(@ptrCast(self.ptr), propertyName_str);
    }

    /// ### DEPRECATED: Use `onCanAddDynamicProperty` instead
    ///
    pub const OnCanAddDynamicProperty = onCanAddDynamicProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#canAddDynamicProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerDynamicPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerDynamicPropertySheetExtension, propertyName: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn onCanAddDynamicProperty(self: QDesignerDynamicPropertySheetExtension, callback: *const fn (QDesignerDynamicPropertySheetExtension, [*:0]const u8) callconv(.c) bool) void {
        qtc.QDesignerDynamicPropertySheetExtension_OnCanAddDynamicProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#dtor.QDesignerDynamicPropertySheetExtension)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerDynamicPropertySheetExtension `
    ///
    pub fn delete(self: QDesignerDynamicPropertySheetExtension) void {
        qtc.QDesignerDynamicPropertySheetExtension_Delete(@ptrCast(self.ptr));
    }
};
