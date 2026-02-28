const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html)
pub const qdesignerpropertysheetextension = struct {
    /// New constructs a new QDesignerPropertySheetExtension object.
    ///
    pub fn New() QtC.QDesignerPropertySheetExtension {
        return qtc.QDesignerPropertySheetExtension_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QDesignerPropertySheetExtension_Count(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#count)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnCount(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerPropertySheetExtension_OnCount(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCount` instead
    ///
    pub const QBaseCount = SuperCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#count)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    pub fn SuperCount(self: ?*anyopaque) i32 {
        return qtc.QDesignerPropertySheetExtension_SuperCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` name: []const u8 `
    ///
    pub fn IndexOf(self: ?*anyopaque, name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDesignerPropertySheetExtension_IndexOf(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#indexOf)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerPropertySheetExtension, name: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnIndexOf(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDesignerPropertySheetExtension_OnIndexOf(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIndexOf` instead
    ///
    pub const QBaseIndexOf = SuperIndexOf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#indexOf)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperIndexOf(self: ?*anyopaque, name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDesignerPropertySheetExtension_SuperIndexOf(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#propertyName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PropertyName(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerPropertySheetExtension_PropertyName(@ptrCast(self), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerpropertysheetextension.PropertyName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#propertyName)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerPropertySheetExtension, index: i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnPropertyName(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) [*:0]const u8) void {
        qtc.QDesignerPropertySheetExtension_OnPropertyName(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPropertyName` instead
    ///
    pub const QBasePropertyName = SuperPropertyName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#propertyName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperPropertyName(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerPropertySheetExtension_SuperPropertyName(@ptrCast(self), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerpropertysheetextension.PropertyName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#propertyGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PropertyGroup(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerPropertySheetExtension_PropertyGroup(@ptrCast(self), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerpropertysheetextension.PropertyGroup: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#propertyGroup)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerPropertySheetExtension, index: i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnPropertyGroup(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) [*:0]const u8) void {
        qtc.QDesignerPropertySheetExtension_OnPropertyGroup(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPropertyGroup` instead
    ///
    pub const QBasePropertyGroup = SuperPropertyGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#propertyGroup)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperPropertyGroup(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerPropertySheetExtension_SuperPropertyGroup(@ptrCast(self), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerpropertysheetextension.PropertyGroup: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setPropertyGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` group: []const u8 `
    ///
    pub fn SetPropertyGroup(self: ?*anyopaque, index: i32, group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.QDesignerPropertySheetExtension_SetPropertyGroup(@ptrCast(self), @bitCast(index), group_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setPropertyGroup)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerPropertySheetExtension, index: i32, group: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetPropertyGroup(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerPropertySheetExtension_OnSetPropertyGroup(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetPropertyGroup` instead
    ///
    pub const QBaseSetPropertyGroup = SuperSetPropertyGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setPropertyGroup)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` group: []const u8 `
    ///
    pub fn SuperSetPropertyGroup(self: ?*anyopaque, index: i32, group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.QDesignerPropertySheetExtension_SuperSetPropertyGroup(@ptrCast(self), @bitCast(index), group_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#hasReset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn HasReset(self: ?*anyopaque, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_HasReset(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#hasReset)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerPropertySheetExtension, index: i32) callconv(.c) bool `
    ///
    pub fn OnHasReset(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QDesignerPropertySheetExtension_OnHasReset(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHasReset` instead
    ///
    pub const QBaseHasReset = SuperHasReset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#hasReset)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperHasReset(self: ?*anyopaque, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_SuperHasReset(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn Reset(self: ?*anyopaque, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_Reset(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#reset)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerPropertySheetExtension, index: i32) callconv(.c) bool `
    ///
    pub fn OnReset(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QDesignerPropertySheetExtension_OnReset(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReset` instead
    ///
    pub const QBaseReset = SuperReset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#reset)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperReset(self: ?*anyopaque, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_SuperReset(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn IsVisible(self: ?*anyopaque, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_IsVisible(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isVisible)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerPropertySheetExtension, index: i32) callconv(.c) bool `
    ///
    pub fn OnIsVisible(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QDesignerPropertySheetExtension_OnIsVisible(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsVisible` instead
    ///
    pub const QBaseIsVisible = SuperIsVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isVisible)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperIsVisible(self: ?*anyopaque, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_SuperIsVisible(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` b: bool `
    ///
    pub fn SetVisible(self: ?*anyopaque, index: i32, b: bool) void {
        qtc.QDesignerPropertySheetExtension_SetVisible(@ptrCast(self), @bitCast(index), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setVisible)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerPropertySheetExtension, index: i32, b: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, bool) callconv(.c) void) void {
        qtc.QDesignerPropertySheetExtension_OnSetVisible(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetVisible` instead
    ///
    pub const QBaseSetVisible = SuperSetVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setVisible)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` b: bool `
    ///
    pub fn SuperSetVisible(self: ?*anyopaque, index: i32, b: bool) void {
        qtc.QDesignerPropertySheetExtension_SuperSetVisible(@ptrCast(self), @bitCast(index), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn IsAttribute(self: ?*anyopaque, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_IsAttribute(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isAttribute)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerPropertySheetExtension, index: i32) callconv(.c) bool `
    ///
    pub fn OnIsAttribute(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QDesignerPropertySheetExtension_OnIsAttribute(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsAttribute` instead
    ///
    pub const QBaseIsAttribute = SuperIsAttribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isAttribute)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperIsAttribute(self: ?*anyopaque, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_SuperIsAttribute(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` b: bool `
    ///
    pub fn SetAttribute(self: ?*anyopaque, index: i32, b: bool) void {
        qtc.QDesignerPropertySheetExtension_SetAttribute(@ptrCast(self), @bitCast(index), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setAttribute)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerPropertySheetExtension, index: i32, b: bool) callconv(.c) void `
    ///
    pub fn OnSetAttribute(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, bool) callconv(.c) void) void {
        qtc.QDesignerPropertySheetExtension_OnSetAttribute(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetAttribute` instead
    ///
    pub const QBaseSetAttribute = SuperSetAttribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setAttribute)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` b: bool `
    ///
    pub fn SuperSetAttribute(self: ?*anyopaque, index: i32, b: bool) void {
        qtc.QDesignerPropertySheetExtension_SuperSetAttribute(@ptrCast(self), @bitCast(index), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn Property(self: ?*anyopaque, index: i32) QtC.QVariant {
        return qtc.QDesignerPropertySheetExtension_Property(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerPropertySheetExtension, index: i32) callconv(.c) QtC.QVariant `
    ///
    pub fn OnProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.QDesignerPropertySheetExtension_OnProperty(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperProperty` instead
    ///
    pub const QBaseProperty = SuperProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperProperty(self: ?*anyopaque, index: i32) QtC.QVariant {
        return qtc.QDesignerPropertySheetExtension_SuperProperty(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, index: i32, value: ?*anyopaque) void {
        qtc.QDesignerPropertySheetExtension_SetProperty(@ptrCast(self), @bitCast(index), @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerPropertySheetExtension, index: i32, value: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSetProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerPropertySheetExtension_OnSetProperty(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetProperty` instead
    ///
    pub const QBaseSetProperty = SuperSetProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SuperSetProperty(self: ?*anyopaque, index: i32, value: ?*anyopaque) void {
        qtc.QDesignerPropertySheetExtension_SuperSetProperty(@ptrCast(self), @bitCast(index), @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn IsChanged(self: ?*anyopaque, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_IsChanged(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isChanged)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerPropertySheetExtension, index: i32) callconv(.c) bool `
    ///
    pub fn OnIsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QDesignerPropertySheetExtension_OnIsChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsChanged` instead
    ///
    pub const QBaseIsChanged = SuperIsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isChanged)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperIsChanged(self: ?*anyopaque, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_SuperIsChanged(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` changed: bool `
    ///
    pub fn SetChanged(self: ?*anyopaque, index: i32, changed: bool) void {
        qtc.QDesignerPropertySheetExtension_SetChanged(@ptrCast(self), @bitCast(index), changed);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setChanged)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerPropertySheetExtension, index: i32, changed: bool) callconv(.c) void `
    ///
    pub fn OnSetChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, bool) callconv(.c) void) void {
        qtc.QDesignerPropertySheetExtension_OnSetChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetChanged` instead
    ///
    pub const QBaseSetChanged = SuperSetChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setChanged)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` changed: bool `
    ///
    pub fn SuperSetChanged(self: ?*anyopaque, index: i32, changed: bool) void {
        qtc.QDesignerPropertySheetExtension_SuperSetChanged(@ptrCast(self), @bitCast(index), changed);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn IsEnabled(self: ?*anyopaque, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_IsEnabled(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isEnabled)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerPropertySheetExtension, index: i32) callconv(.c) bool `
    ///
    pub fn OnIsEnabled(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QDesignerPropertySheetExtension_OnIsEnabled(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsEnabled` instead
    ///
    pub const QBaseIsEnabled = SuperIsEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isEnabled)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperIsEnabled(self: ?*anyopaque, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_SuperIsEnabled(@ptrCast(self), @bitCast(index));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#dtor.QDesignerPropertySheetExtension)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDesignerPropertySheetExtension `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QDesignerPropertySheetExtension_Delete(@ptrCast(self));
    }
};
