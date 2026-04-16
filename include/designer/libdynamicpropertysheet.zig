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

    /// New constructs a new QDesignerDynamicPropertySheetExtension object.
    ///
    pub fn New() QDesignerDynamicPropertySheetExtension {
        return .{ .ptr = qtc.QDesignerDynamicPropertySheetExtension_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#dynamicPropertiesAllowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerDynamicPropertySheetExtension `
    ///
    pub fn DynamicPropertiesAllowed(self: QDesignerDynamicPropertySheetExtension) bool {
        return qtc.QDesignerDynamicPropertySheetExtension_DynamicPropertiesAllowed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#dynamicPropertiesAllowed)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerDynamicPropertySheetExtension `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnDynamicPropertiesAllowed(self: QDesignerDynamicPropertySheetExtension, callback: *const fn () callconv(.c) bool) void {
        qtc.QDesignerDynamicPropertySheetExtension_OnDynamicPropertiesAllowed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerDynamicPropertySheetExtension `
    ///
    pub fn SuperDynamicPropertiesAllowed(self: QDesignerDynamicPropertySheetExtension) bool {
        return qtc.QDesignerDynamicPropertySheetExtension_SuperDynamicPropertiesAllowed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#addDynamicProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerDynamicPropertySheetExtension `
    ///
    /// ` propertyName: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn AddDynamicProperty(self: QDesignerDynamicPropertySheetExtension, propertyName: []const u8, value: anytype) i32 {
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QDesignerDynamicPropertySheetExtension_AddDynamicProperty(@ptrCast(self.ptr), propertyName_str, @ptrCast(value.ptr));
    }

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
    pub fn OnAddDynamicProperty(self: QDesignerDynamicPropertySheetExtension, callback: *const fn (QDesignerDynamicPropertySheetExtension, [*:0]const u8, QVariant) callconv(.c) i32) void {
        qtc.QDesignerDynamicPropertySheetExtension_OnAddDynamicProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerDynamicPropertySheetExtension `
    ///
    /// ` propertyName: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SuperAddDynamicProperty(self: QDesignerDynamicPropertySheetExtension, propertyName: []const u8, value: anytype) i32 {
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QDesignerDynamicPropertySheetExtension_SuperAddDynamicProperty(@ptrCast(self.ptr), propertyName_str, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#removeDynamicProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerDynamicPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn RemoveDynamicProperty(self: QDesignerDynamicPropertySheetExtension, index: i32) bool {
        return qtc.QDesignerDynamicPropertySheetExtension_RemoveDynamicProperty(@ptrCast(self.ptr), @bitCast(index));
    }

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
    pub fn OnRemoveDynamicProperty(self: QDesignerDynamicPropertySheetExtension, callback: *const fn (QDesignerDynamicPropertySheetExtension, i32) callconv(.c) bool) void {
        qtc.QDesignerDynamicPropertySheetExtension_OnRemoveDynamicProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerDynamicPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperRemoveDynamicProperty(self: QDesignerDynamicPropertySheetExtension, index: i32) bool {
        return qtc.QDesignerDynamicPropertySheetExtension_SuperRemoveDynamicProperty(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#isDynamicProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerDynamicPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn IsDynamicProperty(self: QDesignerDynamicPropertySheetExtension, index: i32) bool {
        return qtc.QDesignerDynamicPropertySheetExtension_IsDynamicProperty(@ptrCast(self.ptr), @bitCast(index));
    }

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
    pub fn OnIsDynamicProperty(self: QDesignerDynamicPropertySheetExtension, callback: *const fn (QDesignerDynamicPropertySheetExtension, i32) callconv(.c) bool) void {
        qtc.QDesignerDynamicPropertySheetExtension_OnIsDynamicProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerDynamicPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperIsDynamicProperty(self: QDesignerDynamicPropertySheetExtension, index: i32) bool {
        return qtc.QDesignerDynamicPropertySheetExtension_SuperIsDynamicProperty(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#canAddDynamicProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerDynamicPropertySheetExtension `
    ///
    /// ` propertyName: []const u8 `
    ///
    pub fn CanAddDynamicProperty(self: QDesignerDynamicPropertySheetExtension, propertyName: []const u8) bool {
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        return qtc.QDesignerDynamicPropertySheetExtension_CanAddDynamicProperty(@ptrCast(self.ptr), propertyName_str);
    }

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
    pub fn OnCanAddDynamicProperty(self: QDesignerDynamicPropertySheetExtension, callback: *const fn (QDesignerDynamicPropertySheetExtension, [*:0]const u8) callconv(.c) bool) void {
        qtc.QDesignerDynamicPropertySheetExtension_OnCanAddDynamicProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerDynamicPropertySheetExtension `
    ///
    /// ` propertyName: []const u8 `
    ///
    pub fn SuperCanAddDynamicProperty(self: QDesignerDynamicPropertySheetExtension, propertyName: []const u8) bool {
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        return qtc.QDesignerDynamicPropertySheetExtension_SuperCanAddDynamicProperty(@ptrCast(self.ptr), propertyName_str);
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
    /// ` self: QDesignerDynamicPropertySheetExtension `
    ///
    pub fn Delete(self: QDesignerDynamicPropertySheetExtension) void {
        qtc.QDesignerDynamicPropertySheetExtension_Delete(@ptrCast(self.ptr));
    }
};
