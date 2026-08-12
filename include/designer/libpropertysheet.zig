const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QVariant = @import("libqt6").QVariant;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html)
pub const QDesignerPropertySheetExtension = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDesignerPropertySheetExtension,

    pub const _is_QDesignerPropertySheetExtension = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDesignerPropertySheetExtension object in C++ memory
    ///
    pub fn new() QDesignerPropertySheetExtension {
        return .{ .ptr = qtc.QDesignerPropertySheetExtension_new() };
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    pub fn count(self: QDesignerPropertySheetExtension) i32 {
        return qtc.QDesignerPropertySheetExtension_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCount` instead
    ///
    pub const OnCount = onCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#count)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onCount(self: QDesignerPropertySheetExtension, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerPropertySheetExtension_OnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCount` instead
    ///
    pub const SuperCount = superCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#count)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    pub fn superCount(self: QDesignerPropertySheetExtension) i32 {
        return qtc.QDesignerPropertySheetExtension_SuperCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `indexOf` instead
    ///
    pub const IndexOf = indexOf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` name: []const u8 `
    ///
    pub fn indexOf(self: QDesignerPropertySheetExtension, name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDesignerPropertySheetExtension_IndexOf(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `onIndexOf` instead
    ///
    pub const OnIndexOf = onIndexOf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#indexOf)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerPropertySheetExtension, name: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onIndexOf(self: QDesignerPropertySheetExtension, callback: *const fn (QDesignerPropertySheetExtension, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDesignerPropertySheetExtension_OnIndexOf(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIndexOf` instead
    ///
    pub const SuperIndexOf = superIndexOf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#indexOf)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` name: []const u8 `
    ///
    pub fn superIndexOf(self: QDesignerPropertySheetExtension, name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDesignerPropertySheetExtension_SuperIndexOf(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `propertyName` instead
    ///
    pub const PropertyName = propertyName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#propertyName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    pub fn propertyName(self: QDesignerPropertySheetExtension, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.QDesignerPropertySheetExtension_PropertyName(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerPropertySheetExtension.propertyName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onPropertyName` instead
    ///
    pub const OnPropertyName = onPropertyName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#propertyName)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerPropertySheetExtension, index: i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn onPropertyName(self: QDesignerPropertySheetExtension, callback: *const fn (QDesignerPropertySheetExtension, i32) callconv(.c) [*:0]const u8) void {
        qtc.QDesignerPropertySheetExtension_OnPropertyName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPropertyName` instead
    ///
    pub const SuperPropertyName = superPropertyName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#propertyName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    pub fn superPropertyName(self: QDesignerPropertySheetExtension, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.QDesignerPropertySheetExtension_SuperPropertyName(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerPropertySheetExtension.propertyName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `propertyGroup` instead
    ///
    pub const PropertyGroup = propertyGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#propertyGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    pub fn propertyGroup(self: QDesignerPropertySheetExtension, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.QDesignerPropertySheetExtension_PropertyGroup(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerPropertySheetExtension.propertyGroup: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onPropertyGroup` instead
    ///
    pub const OnPropertyGroup = onPropertyGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#propertyGroup)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerPropertySheetExtension, index: i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn onPropertyGroup(self: QDesignerPropertySheetExtension, callback: *const fn (QDesignerPropertySheetExtension, i32) callconv(.c) [*:0]const u8) void {
        qtc.QDesignerPropertySheetExtension_OnPropertyGroup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPropertyGroup` instead
    ///
    pub const SuperPropertyGroup = superPropertyGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#propertyGroup)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    pub fn superPropertyGroup(self: QDesignerPropertySheetExtension, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.QDesignerPropertySheetExtension_SuperPropertyGroup(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerPropertySheetExtension.propertyGroup: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPropertyGroup` instead
    ///
    pub const SetPropertyGroup = setPropertyGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setPropertyGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` group: []const u8 `
    ///
    pub fn setPropertyGroup(self: QDesignerPropertySheetExtension, index: i32, group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.QDesignerPropertySheetExtension_SetPropertyGroup(@ptrCast(self.ptr), @bitCast(index), group_str);
    }

    /// ### DEPRECATED: Use `onSetPropertyGroup` instead
    ///
    pub const OnSetPropertyGroup = onSetPropertyGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setPropertyGroup)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerPropertySheetExtension, index: i32, group: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetPropertyGroup(self: QDesignerPropertySheetExtension, callback: *const fn (QDesignerPropertySheetExtension, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerPropertySheetExtension_OnSetPropertyGroup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetPropertyGroup` instead
    ///
    pub const SuperSetPropertyGroup = superSetPropertyGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setPropertyGroup)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` group: []const u8 `
    ///
    pub fn superSetPropertyGroup(self: QDesignerPropertySheetExtension, index: i32, group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.QDesignerPropertySheetExtension_SuperSetPropertyGroup(@ptrCast(self.ptr), @bitCast(index), group_str);
    }

    /// ### DEPRECATED: Use `hasReset` instead
    ///
    pub const HasReset = hasReset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#hasReset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn hasReset(self: QDesignerPropertySheetExtension, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_HasReset(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onHasReset` instead
    ///
    pub const OnHasReset = onHasReset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#hasReset)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerPropertySheetExtension, index: i32) callconv(.c) bool `
    ///
    pub fn onHasReset(self: QDesignerPropertySheetExtension, callback: *const fn (QDesignerPropertySheetExtension, i32) callconv(.c) bool) void {
        qtc.QDesignerPropertySheetExtension_OnHasReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHasReset` instead
    ///
    pub const SuperHasReset = superHasReset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#hasReset)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn superHasReset(self: QDesignerPropertySheetExtension, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_SuperHasReset(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `reset` instead
    ///
    pub const Reset = reset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn reset(self: QDesignerPropertySheetExtension, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_Reset(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onReset` instead
    ///
    pub const OnReset = onReset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#reset)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerPropertySheetExtension, index: i32) callconv(.c) bool `
    ///
    pub fn onReset(self: QDesignerPropertySheetExtension, callback: *const fn (QDesignerPropertySheetExtension, i32) callconv(.c) bool) void {
        qtc.QDesignerPropertySheetExtension_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReset` instead
    ///
    pub const SuperReset = superReset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#reset)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn superReset(self: QDesignerPropertySheetExtension, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_SuperReset(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn isVisible(self: QDesignerPropertySheetExtension, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_IsVisible(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onIsVisible` instead
    ///
    pub const OnIsVisible = onIsVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isVisible)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerPropertySheetExtension, index: i32) callconv(.c) bool `
    ///
    pub fn onIsVisible(self: QDesignerPropertySheetExtension, callback: *const fn (QDesignerPropertySheetExtension, i32) callconv(.c) bool) void {
        qtc.QDesignerPropertySheetExtension_OnIsVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsVisible` instead
    ///
    pub const SuperIsVisible = superIsVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isVisible)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn superIsVisible(self: QDesignerPropertySheetExtension, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_SuperIsVisible(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` b: bool `
    ///
    pub fn setVisible(self: QDesignerPropertySheetExtension, index: i32, b: bool) void {
        qtc.QDesignerPropertySheetExtension_SetVisible(@ptrCast(self.ptr), @bitCast(index), b);
    }

    /// ### DEPRECATED: Use `onSetVisible` instead
    ///
    pub const OnSetVisible = onSetVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setVisible)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerPropertySheetExtension, index: i32, b: bool) callconv(.c) void `
    ///
    pub fn onSetVisible(self: QDesignerPropertySheetExtension, callback: *const fn (QDesignerPropertySheetExtension, i32, bool) callconv(.c) void) void {
        qtc.QDesignerPropertySheetExtension_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetVisible` instead
    ///
    pub const SuperSetVisible = superSetVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setVisible)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` b: bool `
    ///
    pub fn superSetVisible(self: QDesignerPropertySheetExtension, index: i32, b: bool) void {
        qtc.QDesignerPropertySheetExtension_SuperSetVisible(@ptrCast(self.ptr), @bitCast(index), b);
    }

    /// ### DEPRECATED: Use `isAttribute` instead
    ///
    pub const IsAttribute = isAttribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn isAttribute(self: QDesignerPropertySheetExtension, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_IsAttribute(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onIsAttribute` instead
    ///
    pub const OnIsAttribute = onIsAttribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isAttribute)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerPropertySheetExtension, index: i32) callconv(.c) bool `
    ///
    pub fn onIsAttribute(self: QDesignerPropertySheetExtension, callback: *const fn (QDesignerPropertySheetExtension, i32) callconv(.c) bool) void {
        qtc.QDesignerPropertySheetExtension_OnIsAttribute(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsAttribute` instead
    ///
    pub const SuperIsAttribute = superIsAttribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isAttribute)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn superIsAttribute(self: QDesignerPropertySheetExtension, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_SuperIsAttribute(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `setAttribute` instead
    ///
    pub const SetAttribute = setAttribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` b: bool `
    ///
    pub fn setAttribute(self: QDesignerPropertySheetExtension, index: i32, b: bool) void {
        qtc.QDesignerPropertySheetExtension_SetAttribute(@ptrCast(self.ptr), @bitCast(index), b);
    }

    /// ### DEPRECATED: Use `onSetAttribute` instead
    ///
    pub const OnSetAttribute = onSetAttribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setAttribute)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerPropertySheetExtension, index: i32, b: bool) callconv(.c) void `
    ///
    pub fn onSetAttribute(self: QDesignerPropertySheetExtension, callback: *const fn (QDesignerPropertySheetExtension, i32, bool) callconv(.c) void) void {
        qtc.QDesignerPropertySheetExtension_OnSetAttribute(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetAttribute` instead
    ///
    pub const SuperSetAttribute = superSetAttribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setAttribute)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` b: bool `
    ///
    pub fn superSetAttribute(self: QDesignerPropertySheetExtension, index: i32, b: bool) void {
        qtc.QDesignerPropertySheetExtension_SuperSetAttribute(@ptrCast(self.ptr), @bitCast(index), b);
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn property(self: QDesignerPropertySheetExtension, index: i32) QVariant {
        return .{ .ptr = qtc.QDesignerPropertySheetExtension_Property(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `onProperty` instead
    ///
    pub const OnProperty = onProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerPropertySheetExtension, index: i32) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onProperty(self: QDesignerPropertySheetExtension, callback: *const fn (QDesignerPropertySheetExtension, i32) callconv(.c) QVariant) void {
        qtc.QDesignerPropertySheetExtension_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superProperty` instead
    ///
    pub const SuperProperty = superProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn superProperty(self: QDesignerPropertySheetExtension, index: i32) QVariant {
        return .{ .ptr = qtc.QDesignerPropertySheetExtension_SuperProperty(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QDesignerPropertySheetExtension, index: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerPropertySheetExtension_SetProperty(@ptrCast(self.ptr), @bitCast(index), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `onSetProperty` instead
    ///
    pub const OnSetProperty = onSetProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerPropertySheetExtension, index: i32, value: QVariant) callconv(.c) void `
    ///
    pub fn onSetProperty(self: QDesignerPropertySheetExtension, callback: *const fn (QDesignerPropertySheetExtension, i32, QVariant) callconv(.c) void) void {
        qtc.QDesignerPropertySheetExtension_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetProperty` instead
    ///
    pub const SuperSetProperty = superSetProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` value: QVariant `
    ///
    pub fn superSetProperty(self: QDesignerPropertySheetExtension, index: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerPropertySheetExtension_SuperSetProperty(@ptrCast(self.ptr), @bitCast(index), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `isChanged` instead
    ///
    pub const IsChanged = isChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn isChanged(self: QDesignerPropertySheetExtension, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_IsChanged(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onIsChanged` instead
    ///
    pub const OnIsChanged = onIsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isChanged)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerPropertySheetExtension, index: i32) callconv(.c) bool `
    ///
    pub fn onIsChanged(self: QDesignerPropertySheetExtension, callback: *const fn (QDesignerPropertySheetExtension, i32) callconv(.c) bool) void {
        qtc.QDesignerPropertySheetExtension_OnIsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsChanged` instead
    ///
    pub const SuperIsChanged = superIsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isChanged)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn superIsChanged(self: QDesignerPropertySheetExtension, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_SuperIsChanged(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `setChanged` instead
    ///
    pub const SetChanged = setChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` changed: bool `
    ///
    pub fn setChanged(self: QDesignerPropertySheetExtension, index: i32, changed: bool) void {
        qtc.QDesignerPropertySheetExtension_SetChanged(@ptrCast(self.ptr), @bitCast(index), changed);
    }

    /// ### DEPRECATED: Use `onSetChanged` instead
    ///
    pub const OnSetChanged = onSetChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setChanged)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerPropertySheetExtension, index: i32, changed: bool) callconv(.c) void `
    ///
    pub fn onSetChanged(self: QDesignerPropertySheetExtension, callback: *const fn (QDesignerPropertySheetExtension, i32, bool) callconv(.c) void) void {
        qtc.QDesignerPropertySheetExtension_OnSetChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetChanged` instead
    ///
    pub const SuperSetChanged = superSetChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setChanged)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` changed: bool `
    ///
    pub fn superSetChanged(self: QDesignerPropertySheetExtension, index: i32, changed: bool) void {
        qtc.QDesignerPropertySheetExtension_SuperSetChanged(@ptrCast(self.ptr), @bitCast(index), changed);
    }

    /// ### DEPRECATED: Use `isEnabled` instead
    ///
    pub const IsEnabled = isEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn isEnabled(self: QDesignerPropertySheetExtension, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_IsEnabled(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onIsEnabled` instead
    ///
    pub const OnIsEnabled = onIsEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isEnabled)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerPropertySheetExtension, index: i32) callconv(.c) bool `
    ///
    pub fn onIsEnabled(self: QDesignerPropertySheetExtension, callback: *const fn (QDesignerPropertySheetExtension, i32) callconv(.c) bool) void {
        qtc.QDesignerPropertySheetExtension_OnIsEnabled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsEnabled` instead
    ///
    pub const SuperIsEnabled = superIsEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isEnabled)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn superIsEnabled(self: QDesignerPropertySheetExtension, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_SuperIsEnabled(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#dtor.QDesignerPropertySheetExtension)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    pub fn delete(self: QDesignerPropertySheetExtension) void {
        qtc.QDesignerPropertySheetExtension_Delete(@ptrCast(self.ptr));
    }
};
