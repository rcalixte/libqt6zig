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

    /// New constructs a new QDesignerPropertySheetExtension object.
    ///
    pub fn New() QDesignerPropertySheetExtension {
        return .{ .ptr = qtc.QDesignerPropertySheetExtension_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    pub fn Count(self: QDesignerPropertySheetExtension) i32 {
        return qtc.QDesignerPropertySheetExtension_Count(@ptrCast(self.ptr));
    }

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
    pub fn OnCount(self: QDesignerPropertySheetExtension, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerPropertySheetExtension_OnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerPropertySheetExtension `
    ///
    pub fn SuperCount(self: QDesignerPropertySheetExtension) i32 {
        return qtc.QDesignerPropertySheetExtension_SuperCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` name: []const u8 `
    ///
    pub fn IndexOf(self: QDesignerPropertySheetExtension, name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDesignerPropertySheetExtension_IndexOf(@ptrCast(self.ptr), name_str);
    }

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
    pub fn OnIndexOf(self: QDesignerPropertySheetExtension, callback: *const fn (QDesignerPropertySheetExtension, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDesignerPropertySheetExtension_OnIndexOf(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperIndexOf(self: QDesignerPropertySheetExtension, name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDesignerPropertySheetExtension_SuperIndexOf(@ptrCast(self.ptr), name_str);
    }

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
    pub fn PropertyName(self: QDesignerPropertySheetExtension, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.QDesignerPropertySheetExtension_PropertyName(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerpropertysheetextension.PropertyName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#propertyName)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerPropertySheetExtension, index: i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnPropertyName(self: QDesignerPropertySheetExtension, callback: *const fn (QDesignerPropertySheetExtension, i32) callconv(.c) [*:0]const u8) void {
        qtc.QDesignerPropertySheetExtension_OnPropertyName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperPropertyName(self: QDesignerPropertySheetExtension, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.QDesignerPropertySheetExtension_SuperPropertyName(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerpropertysheetextension.PropertyName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn PropertyGroup(self: QDesignerPropertySheetExtension, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.QDesignerPropertySheetExtension_PropertyGroup(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerpropertysheetextension.PropertyGroup: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#propertyGroup)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerPropertySheetExtension, index: i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnPropertyGroup(self: QDesignerPropertySheetExtension, callback: *const fn (QDesignerPropertySheetExtension, i32) callconv(.c) [*:0]const u8) void {
        qtc.QDesignerPropertySheetExtension_OnPropertyGroup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperPropertyGroup(self: QDesignerPropertySheetExtension, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.QDesignerPropertySheetExtension_SuperPropertyGroup(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerpropertysheetextension.PropertyGroup: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetPropertyGroup(self: QDesignerPropertySheetExtension, index: i32, group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.QDesignerPropertySheetExtension_SetPropertyGroup(@ptrCast(self.ptr), @bitCast(index), group_str);
    }

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
    pub fn OnSetPropertyGroup(self: QDesignerPropertySheetExtension, callback: *const fn (QDesignerPropertySheetExtension, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerPropertySheetExtension_OnSetPropertyGroup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` group: []const u8 `
    ///
    pub fn SuperSetPropertyGroup(self: QDesignerPropertySheetExtension, index: i32, group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.QDesignerPropertySheetExtension_SuperSetPropertyGroup(@ptrCast(self.ptr), @bitCast(index), group_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#hasReset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn HasReset(self: QDesignerPropertySheetExtension, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_HasReset(@ptrCast(self.ptr), @bitCast(index));
    }

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
    pub fn OnHasReset(self: QDesignerPropertySheetExtension, callback: *const fn (QDesignerPropertySheetExtension, i32) callconv(.c) bool) void {
        qtc.QDesignerPropertySheetExtension_OnHasReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperHasReset(self: QDesignerPropertySheetExtension, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_SuperHasReset(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn Reset(self: QDesignerPropertySheetExtension, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_Reset(@ptrCast(self.ptr), @bitCast(index));
    }

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
    pub fn OnReset(self: QDesignerPropertySheetExtension, callback: *const fn (QDesignerPropertySheetExtension, i32) callconv(.c) bool) void {
        qtc.QDesignerPropertySheetExtension_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperReset(self: QDesignerPropertySheetExtension, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_SuperReset(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn IsVisible(self: QDesignerPropertySheetExtension, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_IsVisible(@ptrCast(self.ptr), @bitCast(index));
    }

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
    pub fn OnIsVisible(self: QDesignerPropertySheetExtension, callback: *const fn (QDesignerPropertySheetExtension, i32) callconv(.c) bool) void {
        qtc.QDesignerPropertySheetExtension_OnIsVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperIsVisible(self: QDesignerPropertySheetExtension, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_SuperIsVisible(@ptrCast(self.ptr), @bitCast(index));
    }

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
    pub fn SetVisible(self: QDesignerPropertySheetExtension, index: i32, b: bool) void {
        qtc.QDesignerPropertySheetExtension_SetVisible(@ptrCast(self.ptr), @bitCast(index), b);
    }

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
    pub fn OnSetVisible(self: QDesignerPropertySheetExtension, callback: *const fn (QDesignerPropertySheetExtension, i32, bool) callconv(.c) void) void {
        qtc.QDesignerPropertySheetExtension_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` b: bool `
    ///
    pub fn SuperSetVisible(self: QDesignerPropertySheetExtension, index: i32, b: bool) void {
        qtc.QDesignerPropertySheetExtension_SuperSetVisible(@ptrCast(self.ptr), @bitCast(index), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn IsAttribute(self: QDesignerPropertySheetExtension, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_IsAttribute(@ptrCast(self.ptr), @bitCast(index));
    }

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
    pub fn OnIsAttribute(self: QDesignerPropertySheetExtension, callback: *const fn (QDesignerPropertySheetExtension, i32) callconv(.c) bool) void {
        qtc.QDesignerPropertySheetExtension_OnIsAttribute(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperIsAttribute(self: QDesignerPropertySheetExtension, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_SuperIsAttribute(@ptrCast(self.ptr), @bitCast(index));
    }

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
    pub fn SetAttribute(self: QDesignerPropertySheetExtension, index: i32, b: bool) void {
        qtc.QDesignerPropertySheetExtension_SetAttribute(@ptrCast(self.ptr), @bitCast(index), b);
    }

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
    pub fn OnSetAttribute(self: QDesignerPropertySheetExtension, callback: *const fn (QDesignerPropertySheetExtension, i32, bool) callconv(.c) void) void {
        qtc.QDesignerPropertySheetExtension_OnSetAttribute(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` b: bool `
    ///
    pub fn SuperSetAttribute(self: QDesignerPropertySheetExtension, index: i32, b: bool) void {
        qtc.QDesignerPropertySheetExtension_SuperSetAttribute(@ptrCast(self.ptr), @bitCast(index), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn Property(self: QDesignerPropertySheetExtension, index: i32) QVariant {
        return .{ .ptr = qtc.QDesignerPropertySheetExtension_Property(@ptrCast(self.ptr), @bitCast(index)) };
    }

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
    pub fn OnProperty(self: QDesignerPropertySheetExtension, callback: *const fn (QDesignerPropertySheetExtension, i32) callconv(.c) QVariant) void {
        qtc.QDesignerPropertySheetExtension_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperProperty(self: QDesignerPropertySheetExtension, index: i32) QVariant {
        return .{ .ptr = qtc.QDesignerPropertySheetExtension_SuperProperty(@ptrCast(self.ptr), @bitCast(index)) };
    }

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
    pub fn SetProperty(self: QDesignerPropertySheetExtension, index: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerPropertySheetExtension_SetProperty(@ptrCast(self.ptr), @bitCast(index), @ptrCast(value.ptr));
    }

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
    pub fn OnSetProperty(self: QDesignerPropertySheetExtension, callback: *const fn (QDesignerPropertySheetExtension, i32, QVariant) callconv(.c) void) void {
        qtc.QDesignerPropertySheetExtension_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SuperSetProperty(self: QDesignerPropertySheetExtension, index: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerPropertySheetExtension_SuperSetProperty(@ptrCast(self.ptr), @bitCast(index), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn IsChanged(self: QDesignerPropertySheetExtension, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_IsChanged(@ptrCast(self.ptr), @bitCast(index));
    }

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
    pub fn OnIsChanged(self: QDesignerPropertySheetExtension, callback: *const fn (QDesignerPropertySheetExtension, i32) callconv(.c) bool) void {
        qtc.QDesignerPropertySheetExtension_OnIsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperIsChanged(self: QDesignerPropertySheetExtension, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_SuperIsChanged(@ptrCast(self.ptr), @bitCast(index));
    }

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
    pub fn SetChanged(self: QDesignerPropertySheetExtension, index: i32, changed: bool) void {
        qtc.QDesignerPropertySheetExtension_SetChanged(@ptrCast(self.ptr), @bitCast(index), changed);
    }

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
    pub fn OnSetChanged(self: QDesignerPropertySheetExtension, callback: *const fn (QDesignerPropertySheetExtension, i32, bool) callconv(.c) void) void {
        qtc.QDesignerPropertySheetExtension_OnSetChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` changed: bool `
    ///
    pub fn SuperSetChanged(self: QDesignerPropertySheetExtension, index: i32, changed: bool) void {
        qtc.QDesignerPropertySheetExtension_SuperSetChanged(@ptrCast(self.ptr), @bitCast(index), changed);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn IsEnabled(self: QDesignerPropertySheetExtension, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_IsEnabled(@ptrCast(self.ptr), @bitCast(index));
    }

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
    pub fn OnIsEnabled(self: QDesignerPropertySheetExtension, callback: *const fn (QDesignerPropertySheetExtension, i32) callconv(.c) bool) void {
        qtc.QDesignerPropertySheetExtension_OnIsEnabled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerPropertySheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperIsEnabled(self: QDesignerPropertySheetExtension, index: i32) bool {
        return qtc.QDesignerPropertySheetExtension_SuperIsEnabled(@ptrCast(self.ptr), @bitCast(index));
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
    /// ` self: QDesignerPropertySheetExtension `
    ///
    pub fn Delete(self: QDesignerPropertySheetExtension) void {
        qtc.QDesignerPropertySheetExtension_Delete(@ptrCast(self.ptr));
    }
};
