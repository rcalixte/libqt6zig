const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const Poppler__Link = @import("libqt6").Poppler__Link;
const Poppler__PDFConverter__NewSignatureData = @import("libqt6").Poppler__PDFConverter__NewSignatureData;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QDateTime = @import("libqt6").QDateTime;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QRectF = @import("libqt6").QRectF;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const poppler_annotation_enums = @import("libpoppler_annotation.zig").enums;
const poppler_form_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const Struct_constu8_constu8 = struct { first: []const u8, second: []const u8 };

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldIcon.html)
pub const Poppler__FormFieldIcon = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldIcon.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__FormFieldIcon,

    pub const _is_Poppler__FormFieldIcon = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Poppler::FormFieldIcon object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` ffIcon: Poppler__FormFieldIcon `
    ///
    pub fn new(ffIcon: anytype) Poppler__FormFieldIcon {
        comptime _ = @TypeOf(ffIcon)._is_Poppler__FormFieldIcon;
        return .{ .ptr = qtc.Poppler__FormFieldIcon_new(@ptrCast(ffIcon.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldIcon.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldIcon `
    ///
    /// ` ffIcon: Poppler__FormFieldIcon `
    ///
    pub fn operatorAssign(self: Poppler__FormFieldIcon, ffIcon: anytype) void {
        comptime _ = @TypeOf(ffIcon)._is_Poppler__FormFieldIcon;
        qtc.Poppler__FormFieldIcon_OperatorAssign(@ptrCast(self.ptr), @ptrCast(ffIcon.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldIcon.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__FormFieldIcon `
    ///
    pub fn delete(self: Poppler__FormFieldIcon) void {
        qtc.Poppler__FormFieldIcon_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
pub const Poppler__FormField = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__FormField,

    pub const _is_Poppler__FormField = {};

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormField `
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.FormType `
    ///
    pub fn type0(self: Poppler__FormField) i32 {
        return qtc.Poppler__FormField_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormField `
    ///
    pub fn rect(self: Poppler__FormField) QRectF {
        return .{ .ptr = qtc.Poppler__FormField_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormField `
    ///
    pub fn id(self: Poppler__FormField) i32 {
        return qtc.Poppler__FormField_Id(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormField `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: Poppler__FormField, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormField_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__FormField.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormField `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: Poppler__FormField, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.Poppler__FormField_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `fullyQualifiedName` instead
    ///
    pub const FullyQualifiedName = fullyQualifiedName;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormField `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fullyQualifiedName(self: Poppler__FormField, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormField_FullyQualifiedName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__FormField.fullyQualifiedName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `uiName` instead
    ///
    pub const UiName = uiName;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormField `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn uiName(self: Poppler__FormField, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormField_UiName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__FormField.uiName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isReadOnly` instead
    ///
    pub const IsReadOnly = isReadOnly;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormField `
    ///
    pub fn isReadOnly(self: Poppler__FormField) bool {
        return qtc.Poppler__FormField_IsReadOnly(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReadOnly` instead
    ///
    pub const SetReadOnly = setReadOnly;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormField `
    ///
    /// ` value: bool `
    ///
    pub fn setReadOnly(self: Poppler__FormField, value: bool) void {
        qtc.Poppler__FormField_SetReadOnly(@ptrCast(self.ptr), value);
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormField `
    ///
    pub fn isVisible(self: Poppler__FormField) bool {
        return qtc.Poppler__FormField_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormField `
    ///
    /// ` value: bool `
    ///
    pub fn setVisible(self: Poppler__FormField, value: bool) void {
        qtc.Poppler__FormField_SetVisible(@ptrCast(self.ptr), value);
    }

    /// ### DEPRECATED: Use `isPrintable` instead
    ///
    pub const IsPrintable = isPrintable;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormField `
    ///
    pub fn isPrintable(self: Poppler__FormField) bool {
        return qtc.Poppler__FormField_IsPrintable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPrintable` instead
    ///
    pub const SetPrintable = setPrintable;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormField `
    ///
    /// ` value: bool `
    ///
    pub fn setPrintable(self: Poppler__FormField, value: bool) void {
        qtc.Poppler__FormField_SetPrintable(@ptrCast(self.ptr), value);
    }

    /// ### DEPRECATED: Use `activationAction` instead
    ///
    pub const ActivationAction = activationAction;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormField `
    ///
    pub fn activationAction(self: Poppler__FormField) Poppler__Link {
        return .{ .ptr = qtc.Poppler__FormField_ActivationAction(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `additionalAction` instead
    ///
    pub const AdditionalAction = additionalAction;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormField `
    ///
    /// ` typeVal: poppler_form_enums.AdditionalActionType `
    ///
    pub fn additionalAction(self: Poppler__FormField, typeVal: i32) Poppler__Link {
        return .{ .ptr = qtc.Poppler__FormField_AdditionalAction(@ptrCast(self.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `additionalAction2` instead
    ///
    pub const AdditionalAction2 = additionalAction2;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormField `
    ///
    /// ` typeVal: poppler_annotation_enums.AdditionalActionType `
    ///
    pub fn additionalAction2(self: Poppler__FormField, typeVal: i32) Poppler__Link {
        return .{ .ptr = qtc.Poppler__FormField_AdditionalAction2(@ptrCast(self.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__FormField `
    ///
    pub fn delete(self: Poppler__FormField) void {
        qtc.Poppler__FormField_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
pub const Poppler__FormFieldButton = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__FormFieldButton,

    pub const _is_Poppler__FormFieldButton = {};
    pub const _is_Poppler__FormField = {};

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldButton `
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.FormType `
    ///
    pub fn type0(self: Poppler__FormFieldButton) i32 {
        return qtc.Poppler__FormFieldButton_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `buttonType` instead
    ///
    pub const ButtonType = buttonType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldButton `
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.ButtonType `
    ///
    pub fn buttonType(self: Poppler__FormFieldButton) i32 {
        return qtc.Poppler__FormFieldButton_ButtonType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `caption` instead
    ///
    pub const Caption = caption;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldButton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn caption(self: Poppler__FormFieldButton, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormFieldButton_Caption(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__FormFieldButton.caption: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldButton `
    ///
    pub fn icon(self: Poppler__FormFieldButton) Poppler__FormFieldIcon {
        return .{ .ptr = qtc.Poppler__FormFieldButton_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldButton `
    ///
    /// ` _icon: Poppler__FormFieldIcon `
    ///
    pub fn setIcon(self: Poppler__FormFieldButton, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_Poppler__FormFieldIcon;
        qtc.Poppler__FormFieldButton_SetIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldButton `
    ///
    pub fn state(self: Poppler__FormFieldButton) bool {
        return qtc.Poppler__FormFieldButton_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldButton `
    ///
    /// ` _state: bool `
    ///
    pub fn setState(self: Poppler__FormFieldButton, _state: bool) void {
        qtc.Poppler__FormFieldButton_SetState(@ptrCast(self.ptr), _state);
    }

    /// ### DEPRECATED: Use `siblings` instead
    ///
    pub const Siblings = siblings;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldButton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn siblings(self: Poppler__FormFieldButton, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.Poppler__FormFieldButton_Siblings(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("Poppler__FormFieldButton.siblings: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldButton `
    ///
    pub fn rect(self: Poppler__FormFieldButton) QRectF {
        return .{ .ptr = qtc.Poppler__FormField_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldButton `
    ///
    pub fn id(self: Poppler__FormFieldButton) i32 {
        return qtc.Poppler__FormField_Id(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldButton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: Poppler__FormFieldButton, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormField_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__FormFieldButton.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldButton `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: Poppler__FormFieldButton, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.Poppler__FormField_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `fullyQualifiedName` instead
    ///
    pub const FullyQualifiedName = fullyQualifiedName;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldButton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fullyQualifiedName(self: Poppler__FormFieldButton, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormField_FullyQualifiedName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__FormFieldButton.fullyQualifiedName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `uiName` instead
    ///
    pub const UiName = uiName;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldButton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn uiName(self: Poppler__FormFieldButton, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormField_UiName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__FormFieldButton.uiName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isReadOnly` instead
    ///
    pub const IsReadOnly = isReadOnly;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldButton `
    ///
    pub fn isReadOnly(self: Poppler__FormFieldButton) bool {
        return qtc.Poppler__FormField_IsReadOnly(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReadOnly` instead
    ///
    pub const SetReadOnly = setReadOnly;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldButton `
    ///
    /// ` value: bool `
    ///
    pub fn setReadOnly(self: Poppler__FormFieldButton, value: bool) void {
        qtc.Poppler__FormField_SetReadOnly(@ptrCast(self.ptr), value);
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldButton `
    ///
    pub fn isVisible(self: Poppler__FormFieldButton) bool {
        return qtc.Poppler__FormField_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldButton `
    ///
    /// ` value: bool `
    ///
    pub fn setVisible(self: Poppler__FormFieldButton, value: bool) void {
        qtc.Poppler__FormField_SetVisible(@ptrCast(self.ptr), value);
    }

    /// ### DEPRECATED: Use `isPrintable` instead
    ///
    pub const IsPrintable = isPrintable;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldButton `
    ///
    pub fn isPrintable(self: Poppler__FormFieldButton) bool {
        return qtc.Poppler__FormField_IsPrintable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPrintable` instead
    ///
    pub const SetPrintable = setPrintable;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldButton `
    ///
    /// ` value: bool `
    ///
    pub fn setPrintable(self: Poppler__FormFieldButton, value: bool) void {
        qtc.Poppler__FormField_SetPrintable(@ptrCast(self.ptr), value);
    }

    /// ### DEPRECATED: Use `activationAction` instead
    ///
    pub const ActivationAction = activationAction;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldButton `
    ///
    pub fn activationAction(self: Poppler__FormFieldButton) Poppler__Link {
        return .{ .ptr = qtc.Poppler__FormField_ActivationAction(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `additionalAction` instead
    ///
    pub const AdditionalAction = additionalAction;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldButton `
    ///
    /// ` typeVal: poppler_form_enums.AdditionalActionType `
    ///
    pub fn additionalAction(self: Poppler__FormFieldButton, typeVal: i32) Poppler__Link {
        return .{ .ptr = qtc.Poppler__FormField_AdditionalAction(@ptrCast(self.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `additionalAction2` instead
    ///
    pub const AdditionalAction2 = additionalAction2;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldButton `
    ///
    /// ` typeVal: poppler_annotation_enums.AdditionalActionType `
    ///
    pub fn additionalAction2(self: Poppler__FormFieldButton, typeVal: i32) Poppler__Link {
        return .{ .ptr = qtc.Poppler__FormField_AdditionalAction2(@ptrCast(self.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__FormFieldButton `
    ///
    pub fn delete(self: Poppler__FormFieldButton) void {
        qtc.Poppler__FormFieldButton_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
pub const Poppler__FormFieldText = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__FormFieldText,

    pub const _is_Poppler__FormFieldText = {};
    pub const _is_Poppler__FormField = {};

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldText `
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.FormType `
    ///
    pub fn type0(self: Poppler__FormFieldText) i32 {
        return qtc.Poppler__FormFieldText_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `textType` instead
    ///
    pub const TextType = textType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldText `
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.TextType `
    ///
    pub fn textType(self: Poppler__FormFieldText) i32 {
        return qtc.Poppler__FormFieldText_TextType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldText `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: Poppler__FormFieldText, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormFieldText_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__FormFieldText.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldText `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: Poppler__FormFieldText, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.Poppler__FormFieldText_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `setAppearanceText` instead
    ///
    pub const SetAppearanceText = setAppearanceText;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldText `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setAppearanceText(self: Poppler__FormFieldText, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.Poppler__FormFieldText_SetAppearanceText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `isPassword` instead
    ///
    pub const IsPassword = isPassword;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldText `
    ///
    pub fn isPassword(self: Poppler__FormFieldText) bool {
        return qtc.Poppler__FormFieldText_IsPassword(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isRichText` instead
    ///
    pub const IsRichText = isRichText;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldText `
    ///
    pub fn isRichText(self: Poppler__FormFieldText) bool {
        return qtc.Poppler__FormFieldText_IsRichText(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maximumLength` instead
    ///
    pub const MaximumLength = maximumLength;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldText `
    ///
    pub fn maximumLength(self: Poppler__FormFieldText) i32 {
        return qtc.Poppler__FormFieldText_MaximumLength(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `textAlignment` instead
    ///
    pub const TextAlignment = textAlignment;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldText `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn textAlignment(self: Poppler__FormFieldText) i32 {
        return qtc.Poppler__FormFieldText_TextAlignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `canBeSpellChecked` instead
    ///
    pub const CanBeSpellChecked = canBeSpellChecked;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldText `
    ///
    pub fn canBeSpellChecked(self: Poppler__FormFieldText) bool {
        return qtc.Poppler__FormFieldText_CanBeSpellChecked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `getFontSize` instead
    ///
    pub const GetFontSize = getFontSize;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldText `
    ///
    pub fn getFontSize(self: Poppler__FormFieldText) f64 {
        return qtc.Poppler__FormFieldText_GetFontSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontSize` instead
    ///
    pub const SetFontSize = setFontSize;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldText `
    ///
    /// ` fontSize: i32 `
    ///
    pub fn setFontSize(self: Poppler__FormFieldText, fontSize: i32) void {
        qtc.Poppler__FormFieldText_SetFontSize(@ptrCast(self.ptr), @bitCast(fontSize));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldText `
    ///
    pub fn rect(self: Poppler__FormFieldText) QRectF {
        return .{ .ptr = qtc.Poppler__FormField_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldText `
    ///
    pub fn id(self: Poppler__FormFieldText) i32 {
        return qtc.Poppler__FormField_Id(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldText `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: Poppler__FormFieldText, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormField_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__FormFieldText.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldText `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: Poppler__FormFieldText, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.Poppler__FormField_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `fullyQualifiedName` instead
    ///
    pub const FullyQualifiedName = fullyQualifiedName;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldText `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fullyQualifiedName(self: Poppler__FormFieldText, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormField_FullyQualifiedName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__FormFieldText.fullyQualifiedName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `uiName` instead
    ///
    pub const UiName = uiName;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldText `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn uiName(self: Poppler__FormFieldText, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormField_UiName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__FormFieldText.uiName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isReadOnly` instead
    ///
    pub const IsReadOnly = isReadOnly;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldText `
    ///
    pub fn isReadOnly(self: Poppler__FormFieldText) bool {
        return qtc.Poppler__FormField_IsReadOnly(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReadOnly` instead
    ///
    pub const SetReadOnly = setReadOnly;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldText `
    ///
    /// ` value: bool `
    ///
    pub fn setReadOnly(self: Poppler__FormFieldText, value: bool) void {
        qtc.Poppler__FormField_SetReadOnly(@ptrCast(self.ptr), value);
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldText `
    ///
    pub fn isVisible(self: Poppler__FormFieldText) bool {
        return qtc.Poppler__FormField_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldText `
    ///
    /// ` value: bool `
    ///
    pub fn setVisible(self: Poppler__FormFieldText, value: bool) void {
        qtc.Poppler__FormField_SetVisible(@ptrCast(self.ptr), value);
    }

    /// ### DEPRECATED: Use `isPrintable` instead
    ///
    pub const IsPrintable = isPrintable;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldText `
    ///
    pub fn isPrintable(self: Poppler__FormFieldText) bool {
        return qtc.Poppler__FormField_IsPrintable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPrintable` instead
    ///
    pub const SetPrintable = setPrintable;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldText `
    ///
    /// ` value: bool `
    ///
    pub fn setPrintable(self: Poppler__FormFieldText, value: bool) void {
        qtc.Poppler__FormField_SetPrintable(@ptrCast(self.ptr), value);
    }

    /// ### DEPRECATED: Use `activationAction` instead
    ///
    pub const ActivationAction = activationAction;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldText `
    ///
    pub fn activationAction(self: Poppler__FormFieldText) Poppler__Link {
        return .{ .ptr = qtc.Poppler__FormField_ActivationAction(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `additionalAction` instead
    ///
    pub const AdditionalAction = additionalAction;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldText `
    ///
    /// ` typeVal: poppler_form_enums.AdditionalActionType `
    ///
    pub fn additionalAction(self: Poppler__FormFieldText, typeVal: i32) Poppler__Link {
        return .{ .ptr = qtc.Poppler__FormField_AdditionalAction(@ptrCast(self.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `additionalAction2` instead
    ///
    pub const AdditionalAction2 = additionalAction2;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldText `
    ///
    /// ` typeVal: poppler_annotation_enums.AdditionalActionType `
    ///
    pub fn additionalAction2(self: Poppler__FormFieldText, typeVal: i32) Poppler__Link {
        return .{ .ptr = qtc.Poppler__FormField_AdditionalAction2(@ptrCast(self.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__FormFieldText `
    ///
    pub fn delete(self: Poppler__FormFieldText) void {
        qtc.Poppler__FormFieldText_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
pub const Poppler__FormFieldChoice = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__FormFieldChoice,

    pub const _is_Poppler__FormFieldChoice = {};
    pub const _is_Poppler__FormField = {};

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldChoice `
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.FormType `
    ///
    pub fn type0(self: Poppler__FormFieldChoice) i32 {
        return qtc.Poppler__FormFieldChoice_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `choiceType` instead
    ///
    pub const ChoiceType = choiceType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldChoice `
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.ChoiceType `
    ///
    pub fn choiceType(self: Poppler__FormFieldChoice) i32 {
        return qtc.Poppler__FormFieldChoice_ChoiceType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `choices` instead
    ///
    pub const Choices = choices;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldChoice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn choices(self: Poppler__FormFieldChoice, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Poppler__FormFieldChoice_Choices(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Poppler__FormFieldChoice.choices: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Poppler__FormFieldChoice.choices: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `choicesWithExportValues` instead
    ///
    pub const ChoicesWithExportValues = choicesWithExportValues;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldChoice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn choicesWithExportValues(self: Poppler__FormFieldChoice, allocator: std.mem.Allocator) []Struct_constu8_constu8 {
        const _arr: qtc.libqt_list = qtc.Poppler__FormFieldChoice_ChoicesWithExportValues(@ptrCast(self.ptr));
        const _data_val: [*]qtc.libqt_pair = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(@alignCast(_data_val[i].first)));
                qtc.libqt_string_free(@ptrCast(@alignCast(_data_val[i].second)));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(Struct_constu8_constu8, _arr.len) catch @panic("Poppler__FormFieldChoice.choicesWithExportValues: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _first_str: *qtc.libqt_string = @ptrCast(@alignCast(_data_val[i].first));
            const _first_slice = allocator.alloc(u8, _first_str.len) catch @panic("Poppler__FormFieldChoice.choicesWithExportValues: Memory allocation failed");
            @memcpy(_first_slice, _first_str.data[0.._first_str.len]);
            const _second_str: *qtc.libqt_string = @ptrCast(@alignCast(_data_val[i].second));
            const _second_slice = allocator.alloc(u8, _second_str.len) catch @panic("Poppler__FormFieldChoice.choicesWithExportValues: Memory allocation failed");
            @memcpy(_second_slice, _second_str.data[0.._second_str.len]);
            _ret[i] = Struct_constu8_constu8{
                .first = _first_slice,
                .second = _second_slice,
            };
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `isEditable` instead
    ///
    pub const IsEditable = isEditable;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldChoice `
    ///
    pub fn isEditable(self: Poppler__FormFieldChoice) bool {
        return qtc.Poppler__FormFieldChoice_IsEditable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `multiSelect` instead
    ///
    pub const MultiSelect = multiSelect;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldChoice `
    ///
    pub fn multiSelect(self: Poppler__FormFieldChoice) bool {
        return qtc.Poppler__FormFieldChoice_MultiSelect(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentChoices` instead
    ///
    pub const CurrentChoices = currentChoices;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldChoice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn currentChoices(self: Poppler__FormFieldChoice, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.Poppler__FormFieldChoice_CurrentChoices(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("Poppler__FormFieldChoice.currentChoices: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCurrentChoices` instead
    ///
    pub const SetCurrentChoices = setCurrentChoices;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldChoice `
    ///
    /// ` choice: []i32 `
    ///
    pub fn setCurrentChoices(self: Poppler__FormFieldChoice, choice: []i32) void {
        const choice_list = qtc.libqt_list{
            .len = choice.len,
            .data = choice.ptr,
        };
        qtc.Poppler__FormFieldChoice_SetCurrentChoices(@ptrCast(self.ptr), choice_list);
    }

    /// ### DEPRECATED: Use `editChoice` instead
    ///
    pub const EditChoice = editChoice;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldChoice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn editChoice(self: Poppler__FormFieldChoice, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormFieldChoice_EditChoice(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__FormFieldChoice.editChoice: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setEditChoice` instead
    ///
    pub const SetEditChoice = setEditChoice;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldChoice `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setEditChoice(self: Poppler__FormFieldChoice, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.Poppler__FormFieldChoice_SetEditChoice(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `textAlignment` instead
    ///
    pub const TextAlignment = textAlignment;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldChoice `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn textAlignment(self: Poppler__FormFieldChoice) i32 {
        return qtc.Poppler__FormFieldChoice_TextAlignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `canBeSpellChecked` instead
    ///
    pub const CanBeSpellChecked = canBeSpellChecked;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldChoice `
    ///
    pub fn canBeSpellChecked(self: Poppler__FormFieldChoice) bool {
        return qtc.Poppler__FormFieldChoice_CanBeSpellChecked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAppearanceChoiceText` instead
    ///
    pub const SetAppearanceChoiceText = setAppearanceChoiceText;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldChoice `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setAppearanceChoiceText(self: Poppler__FormFieldChoice, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.Poppler__FormFieldChoice_SetAppearanceChoiceText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldChoice `
    ///
    pub fn rect(self: Poppler__FormFieldChoice) QRectF {
        return .{ .ptr = qtc.Poppler__FormField_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldChoice `
    ///
    pub fn id(self: Poppler__FormFieldChoice) i32 {
        return qtc.Poppler__FormField_Id(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldChoice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: Poppler__FormFieldChoice, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormField_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__FormFieldChoice.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldChoice `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: Poppler__FormFieldChoice, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.Poppler__FormField_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `fullyQualifiedName` instead
    ///
    pub const FullyQualifiedName = fullyQualifiedName;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldChoice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fullyQualifiedName(self: Poppler__FormFieldChoice, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormField_FullyQualifiedName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__FormFieldChoice.fullyQualifiedName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `uiName` instead
    ///
    pub const UiName = uiName;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldChoice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn uiName(self: Poppler__FormFieldChoice, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormField_UiName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__FormFieldChoice.uiName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isReadOnly` instead
    ///
    pub const IsReadOnly = isReadOnly;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldChoice `
    ///
    pub fn isReadOnly(self: Poppler__FormFieldChoice) bool {
        return qtc.Poppler__FormField_IsReadOnly(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReadOnly` instead
    ///
    pub const SetReadOnly = setReadOnly;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldChoice `
    ///
    /// ` value: bool `
    ///
    pub fn setReadOnly(self: Poppler__FormFieldChoice, value: bool) void {
        qtc.Poppler__FormField_SetReadOnly(@ptrCast(self.ptr), value);
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldChoice `
    ///
    pub fn isVisible(self: Poppler__FormFieldChoice) bool {
        return qtc.Poppler__FormField_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldChoice `
    ///
    /// ` value: bool `
    ///
    pub fn setVisible(self: Poppler__FormFieldChoice, value: bool) void {
        qtc.Poppler__FormField_SetVisible(@ptrCast(self.ptr), value);
    }

    /// ### DEPRECATED: Use `isPrintable` instead
    ///
    pub const IsPrintable = isPrintable;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldChoice `
    ///
    pub fn isPrintable(self: Poppler__FormFieldChoice) bool {
        return qtc.Poppler__FormField_IsPrintable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPrintable` instead
    ///
    pub const SetPrintable = setPrintable;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldChoice `
    ///
    /// ` value: bool `
    ///
    pub fn setPrintable(self: Poppler__FormFieldChoice, value: bool) void {
        qtc.Poppler__FormField_SetPrintable(@ptrCast(self.ptr), value);
    }

    /// ### DEPRECATED: Use `activationAction` instead
    ///
    pub const ActivationAction = activationAction;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldChoice `
    ///
    pub fn activationAction(self: Poppler__FormFieldChoice) Poppler__Link {
        return .{ .ptr = qtc.Poppler__FormField_ActivationAction(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `additionalAction` instead
    ///
    pub const AdditionalAction = additionalAction;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldChoice `
    ///
    /// ` typeVal: poppler_form_enums.AdditionalActionType `
    ///
    pub fn additionalAction(self: Poppler__FormFieldChoice, typeVal: i32) Poppler__Link {
        return .{ .ptr = qtc.Poppler__FormField_AdditionalAction(@ptrCast(self.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `additionalAction2` instead
    ///
    pub const AdditionalAction2 = additionalAction2;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldChoice `
    ///
    /// ` typeVal: poppler_annotation_enums.AdditionalActionType `
    ///
    pub fn additionalAction2(self: Poppler__FormFieldChoice, typeVal: i32) Poppler__Link {
        return .{ .ptr = qtc.Poppler__FormField_AdditionalAction2(@ptrCast(self.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__FormFieldChoice `
    ///
    pub fn delete(self: Poppler__FormFieldChoice) void {
        qtc.Poppler__FormFieldChoice_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
pub const Poppler__CertificateInfo = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__CertificateInfo,

    pub const _is_Poppler__CertificateInfo = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Poppler::CertificateInfo object in C++ memory
    ///
    pub fn new() Poppler__CertificateInfo {
        return .{ .ptr = qtc.Poppler__CertificateInfo_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Poppler::CertificateInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Poppler__CertificateInfo `
    ///
    pub fn new2(other: anytype) Poppler__CertificateInfo {
        comptime _ = @TypeOf(other)._is_Poppler__CertificateInfo;
        return .{ .ptr = qtc.Poppler__CertificateInfo_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CertificateInfo `
    ///
    pub fn isNull(self: Poppler__CertificateInfo) bool {
        return qtc.Poppler__CertificateInfo_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CertificateInfo `
    ///
    pub fn version(self: Poppler__CertificateInfo) i32 {
        return qtc.Poppler__CertificateInfo_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `serialNumber` instead
    ///
    pub const SerialNumber = serialNumber;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CertificateInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn serialNumber(self: Poppler__CertificateInfo, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Poppler__CertificateInfo_SerialNumber(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Poppler__CertificateInfo.serialNumber: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `issuerInfo` instead
    ///
    pub const IssuerInfo = issuerInfo;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CertificateInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: poppler_form_enums.EntityInfoKey `
    ///
    pub fn issuerInfo(self: Poppler__CertificateInfo, allocator: std.mem.Allocator, key: i32) []const u8 {
        var _str = qtc.Poppler__CertificateInfo_IssuerInfo(@ptrCast(self.ptr), @bitCast(key));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__CertificateInfo.issuerInfo: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `subjectInfo` instead
    ///
    pub const SubjectInfo = subjectInfo;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CertificateInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: poppler_form_enums.EntityInfoKey `
    ///
    pub fn subjectInfo(self: Poppler__CertificateInfo, allocator: std.mem.Allocator, key: i32) []const u8 {
        var _str = qtc.Poppler__CertificateInfo_SubjectInfo(@ptrCast(self.ptr), @bitCast(key));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__CertificateInfo.subjectInfo: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `nickName` instead
    ///
    pub const NickName = nickName;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CertificateInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn nickName(self: Poppler__CertificateInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__CertificateInfo_NickName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__CertificateInfo.nickName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `validityStart` instead
    ///
    pub const ValidityStart = validityStart;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CertificateInfo `
    ///
    pub fn validityStart(self: Poppler__CertificateInfo) QDateTime {
        return .{ .ptr = qtc.Poppler__CertificateInfo_ValidityStart(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `validityEnd` instead
    ///
    pub const ValidityEnd = validityEnd;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CertificateInfo `
    ///
    pub fn validityEnd(self: Poppler__CertificateInfo) QDateTime {
        return .{ .ptr = qtc.Poppler__CertificateInfo_ValidityEnd(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `keyUsageExtensions` instead
    ///
    pub const KeyUsageExtensions = keyUsageExtensions;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CertificateInfo `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_form_enums.KeyUsageExtension `
    ///
    pub fn keyUsageExtensions(self: Poppler__CertificateInfo) i32 {
        return qtc.Poppler__CertificateInfo_KeyUsageExtensions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `publicKey` instead
    ///
    pub const PublicKey = publicKey;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CertificateInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn publicKey(self: Poppler__CertificateInfo, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Poppler__CertificateInfo_PublicKey(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Poppler__CertificateInfo.publicKey: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `publicKeyType` instead
    ///
    pub const PublicKeyType = publicKeyType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CertificateInfo `
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.PublicKeyType `
    ///
    pub fn publicKeyType(self: Poppler__CertificateInfo) i32 {
        return qtc.Poppler__CertificateInfo_PublicKeyType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `publicKeyStrength` instead
    ///
    pub const PublicKeyStrength = publicKeyStrength;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CertificateInfo `
    ///
    pub fn publicKeyStrength(self: Poppler__CertificateInfo) i32 {
        return qtc.Poppler__CertificateInfo_PublicKeyStrength(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSelfSigned` instead
    ///
    pub const IsSelfSigned = isSelfSigned;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CertificateInfo `
    ///
    pub fn isSelfSigned(self: Poppler__CertificateInfo) bool {
        return qtc.Poppler__CertificateInfo_IsSelfSigned(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQualified` instead
    ///
    pub const IsQualified = isQualified;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CertificateInfo `
    ///
    pub fn isQualified(self: Poppler__CertificateInfo) bool {
        return qtc.Poppler__CertificateInfo_IsQualified(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `certificateType` instead
    ///
    pub const CertificateType = certificateType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CertificateInfo `
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.CertificateType `
    ///
    pub fn certificateType(self: Poppler__CertificateInfo) i32 {
        return qtc.Poppler__CertificateInfo_CertificateType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `certificateData` instead
    ///
    pub const CertificateData = certificateData;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CertificateInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn certificateData(self: Poppler__CertificateInfo, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Poppler__CertificateInfo_CertificateData(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Poppler__CertificateInfo.certificateData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `checkPassword` instead
    ///
    pub const CheckPassword = checkPassword;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CertificateInfo `
    ///
    /// ` password: []const u8 `
    ///
    pub fn checkPassword(self: Poppler__CertificateInfo, password: []const u8) bool {
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        return qtc.Poppler__CertificateInfo_CheckPassword(@ptrCast(self.ptr), password_str);
    }

    /// ### DEPRECATED: Use `keyLocation` instead
    ///
    pub const KeyLocation = keyLocation;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CertificateInfo `
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.KeyLocation `
    ///
    pub fn keyLocation(self: Poppler__CertificateInfo) i32 {
        return qtc.Poppler__CertificateInfo_KeyLocation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CertificateInfo `
    ///
    /// ` other: Poppler__CertificateInfo `
    ///
    pub fn operatorAssign(self: Poppler__CertificateInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Poppler__CertificateInfo;
        qtc.Poppler__CertificateInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__CertificateInfo `
    ///
    pub fn delete(self: Poppler__CertificateInfo) void {
        qtc.Poppler__CertificateInfo_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
pub const Poppler__SignatureValidationInfo = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__SignatureValidationInfo,

    pub const _is_Poppler__SignatureValidationInfo = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Poppler::SignatureValidationInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Poppler__SignatureValidationInfo `
    ///
    pub fn new(other: anytype) Poppler__SignatureValidationInfo {
        comptime _ = @TypeOf(other)._is_Poppler__SignatureValidationInfo;
        return .{ .ptr = qtc.Poppler__SignatureValidationInfo_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `signatureStatus` instead
    ///
    pub const SignatureStatus = signatureStatus;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureValidationInfo `
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.SignatureStatus `
    ///
    pub fn signatureStatus(self: Poppler__SignatureValidationInfo) i32 {
        return qtc.Poppler__SignatureValidationInfo_SignatureStatus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `certificateStatus` instead
    ///
    pub const CertificateStatus = certificateStatus;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureValidationInfo `
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.CertificateStatus `
    ///
    pub fn certificateStatus(self: Poppler__SignatureValidationInfo) i32 {
        return qtc.Poppler__SignatureValidationInfo_CertificateStatus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signerName` instead
    ///
    pub const SignerName = signerName;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureValidationInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn signerName(self: Poppler__SignatureValidationInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__SignatureValidationInfo_SignerName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__SignatureValidationInfo.signerName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `signerSubjectDN` instead
    ///
    pub const SignerSubjectDN = signerSubjectDN;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureValidationInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn signerSubjectDN(self: Poppler__SignatureValidationInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__SignatureValidationInfo_SignerSubjectDN(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__SignatureValidationInfo.signerSubjectDN: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `location` instead
    ///
    pub const Location = location;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureValidationInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn location(self: Poppler__SignatureValidationInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__SignatureValidationInfo_Location(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__SignatureValidationInfo.location: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `reason` instead
    ///
    pub const Reason = reason;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureValidationInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn reason(self: Poppler__SignatureValidationInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__SignatureValidationInfo_Reason(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__SignatureValidationInfo.reason: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hashAlgorithm` instead
    ///
    pub const HashAlgorithm = hashAlgorithm;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureValidationInfo `
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.HashAlgorithm `
    ///
    pub fn hashAlgorithm(self: Poppler__SignatureValidationInfo) i32 {
        return qtc.Poppler__SignatureValidationInfo_HashAlgorithm(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signingTime` instead
    ///
    pub const SigningTime = signingTime;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureValidationInfo `
    ///
    pub fn signingTime(self: Poppler__SignatureValidationInfo) i64 {
        return @bitCast(qtc.Poppler__SignatureValidationInfo_SigningTime(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `signature` instead
    ///
    pub const Signature = signature;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureValidationInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn signature(self: Poppler__SignatureValidationInfo, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Poppler__SignatureValidationInfo_Signature(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Poppler__SignatureValidationInfo.signature: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `signedRangeBounds` instead
    ///
    pub const SignedRangeBounds = signedRangeBounds;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureValidationInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn signedRangeBounds(self: Poppler__SignatureValidationInfo, allocator: std.mem.Allocator) []isize {
        const _arr: qtc.libqt_list = qtc.Poppler__SignatureValidationInfo_SignedRangeBounds(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(isize, _arr.len) catch @panic("Poppler__SignatureValidationInfo.signedRangeBounds: Memory allocation failed");
        const _data_val: [*]isize = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `signsTotalDocument` instead
    ///
    pub const SignsTotalDocument = signsTotalDocument;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureValidationInfo `
    ///
    pub fn signsTotalDocument(self: Poppler__SignatureValidationInfo) bool {
        return qtc.Poppler__SignatureValidationInfo_SignsTotalDocument(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `certificateInfo` instead
    ///
    pub const CertificateInfo = certificateInfo;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureValidationInfo `
    ///
    pub fn certificateInfo(self: Poppler__SignatureValidationInfo) Poppler__CertificateInfo {
        return .{ .ptr = qtc.Poppler__SignatureValidationInfo_CertificateInfo(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureValidationInfo `
    ///
    /// ` other: Poppler__SignatureValidationInfo `
    ///
    pub fn operatorAssign(self: Poppler__SignatureValidationInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Poppler__SignatureValidationInfo;
        qtc.Poppler__SignatureValidationInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__SignatureValidationInfo `
    ///
    pub fn delete(self: Poppler__SignatureValidationInfo) void {
        qtc.Poppler__SignatureValidationInfo_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1AsyncObject.html)
pub const Poppler__AsyncObject = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1AsyncObject.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__AsyncObject,

    pub const _is_Poppler__AsyncObject = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Poppler::AsyncObject object in C++ memory
    ///
    pub fn new() Poppler__AsyncObject {
        return .{ .ptr = qtc.Poppler__AsyncObject_new() };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    pub fn metaObject(self: Poppler__AsyncObject) QMetaObject {
        return .{ .ptr = qtc.Poppler__AsyncObject_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: Poppler__AsyncObject, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.Poppler__AsyncObject_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    pub fn superMetaObject(self: Poppler__AsyncObject) QMetaObject {
        return .{ .ptr = qtc.Poppler__AsyncObject_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: Poppler__AsyncObject, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Poppler__AsyncObject_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` callback: *const fn (self: Poppler__AsyncObject, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: Poppler__AsyncObject, callback: *const fn (Poppler__AsyncObject, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.Poppler__AsyncObject_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: Poppler__AsyncObject, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Poppler__AsyncObject_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: Poppler__AsyncObject, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Poppler__AsyncObject_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` callback: *const fn (self: Poppler__AsyncObject, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: Poppler__AsyncObject, callback: *const fn (Poppler__AsyncObject, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.Poppler__AsyncObject_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: Poppler__AsyncObject, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Poppler__AsyncObject_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__AsyncObject.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `done` instead
    ///
    pub const Done = done;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1AsyncObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    pub fn done(self: Poppler__AsyncObject) void {
        qtc.Poppler__AsyncObject_Done(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDone` instead
    ///
    pub const OnDone = onDone;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1AsyncObject.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` callback: *const fn (self: Poppler__AsyncObject) callconv(.c) void `
    ///
    pub fn onDone(self: Poppler__AsyncObject, callback: *const fn (Poppler__AsyncObject) callconv(.c) void) void {
        qtc.Poppler__AsyncObject_Connect_Done(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__AsyncObject.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__AsyncObject.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: Poppler__AsyncObject, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__AsyncObject.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setObjectName(self: Poppler__AsyncObject, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    pub fn isWidgetType(self: Poppler__AsyncObject) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    pub fn isWindowType(self: Poppler__AsyncObject) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    pub fn isQuickItemType(self: Poppler__AsyncObject) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    pub fn signalsBlocked(self: Poppler__AsyncObject) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: Poppler__AsyncObject, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    pub fn thread(self: Poppler__AsyncObject) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: Poppler__AsyncObject, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: Poppler__AsyncObject, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: Poppler__AsyncObject, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` _id: i32 `
    ///
    pub fn killTimer(self: Poppler__AsyncObject, _id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(_id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` _id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: Poppler__AsyncObject, _id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(_id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: Poppler__AsyncObject, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("Poppler__AsyncObject.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: Poppler__AsyncObject, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: Poppler__AsyncObject, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: Poppler__AsyncObject, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: Poppler__AsyncObject, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    pub fn disconnect3(self: Poppler__AsyncObject) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: Poppler__AsyncObject, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    pub fn dumpObjectTree(self: Poppler__AsyncObject) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    pub fn dumpObjectInfo(self: Poppler__AsyncObject) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` _name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: Poppler__AsyncObject, _name: [:0]const u8, value: anytype) bool {
        const name_Cstring = _name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` _name: [:0]const u8 `
    ///
    pub fn property(self: Poppler__AsyncObject, _name: [:0]const u8) QVariant {
        const name_Cstring = _name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: Poppler__AsyncObject, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Poppler__AsyncObject.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Poppler__AsyncObject.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    pub fn bindingStorage(self: Poppler__AsyncObject) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    pub fn bindingStorage2(self: Poppler__AsyncObject) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    pub fn destroyed(self: Poppler__AsyncObject) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` callback: *const fn (self: Poppler__AsyncObject) callconv(.c) void `
    ///
    pub fn onDestroyed(self: Poppler__AsyncObject, callback: *const fn (Poppler__AsyncObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    pub fn parent(self: Poppler__AsyncObject) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: Poppler__AsyncObject, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    pub fn deleteLater(self: Poppler__AsyncObject) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: Poppler__AsyncObject, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: Poppler__AsyncObject, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: Poppler__AsyncObject, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: Poppler__AsyncObject, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: Poppler__AsyncObject, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: Poppler__AsyncObject, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: Poppler__AsyncObject, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: Poppler__AsyncObject, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` callback: *const fn (self: Poppler__AsyncObject, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: Poppler__AsyncObject, callback: *const fn (Poppler__AsyncObject, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: Poppler__AsyncObject, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Poppler__AsyncObject_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: Poppler__AsyncObject, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Poppler__AsyncObject_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Poppler__AsyncObject`
    ///
    /// ` callback: *const fn (self: Poppler__AsyncObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: Poppler__AsyncObject, callback: *const fn (Poppler__AsyncObject, QEvent) callconv(.c) bool) void {
        qtc.Poppler__AsyncObject_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: Poppler__AsyncObject, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Poppler__AsyncObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: Poppler__AsyncObject, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Poppler__AsyncObject_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Poppler__AsyncObject`
    ///
    /// ` callback: *const fn (self: Poppler__AsyncObject, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: Poppler__AsyncObject, callback: *const fn (Poppler__AsyncObject, QObject, QEvent) callconv(.c) bool) void {
        qtc.Poppler__AsyncObject_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: Poppler__AsyncObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.Poppler__AsyncObject_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: Poppler__AsyncObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.Poppler__AsyncObject_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Poppler__AsyncObject`
    ///
    /// ` callback: *const fn (self: Poppler__AsyncObject, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: Poppler__AsyncObject, callback: *const fn (Poppler__AsyncObject, QTimerEvent) callconv(.c) void) void {
        qtc.Poppler__AsyncObject_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: Poppler__AsyncObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.Poppler__AsyncObject_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: Poppler__AsyncObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.Poppler__AsyncObject_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Poppler__AsyncObject`
    ///
    /// ` callback: *const fn (self: Poppler__AsyncObject, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: Poppler__AsyncObject, callback: *const fn (Poppler__AsyncObject, QChildEvent) callconv(.c) void) void {
        qtc.Poppler__AsyncObject_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: Poppler__AsyncObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.Poppler__AsyncObject_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: Poppler__AsyncObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.Poppler__AsyncObject_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Poppler__AsyncObject`
    ///
    /// ` callback: *const fn (self: Poppler__AsyncObject, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: Poppler__AsyncObject, callback: *const fn (Poppler__AsyncObject, QEvent) callconv(.c) void) void {
        qtc.Poppler__AsyncObject_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: Poppler__AsyncObject, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Poppler__AsyncObject_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: Poppler__AsyncObject, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Poppler__AsyncObject_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Poppler__AsyncObject`
    ///
    /// ` callback: *const fn (self: Poppler__AsyncObject, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: Poppler__AsyncObject, callback: *const fn (Poppler__AsyncObject, QMetaMethod) callconv(.c) void) void {
        qtc.Poppler__AsyncObject_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: Poppler__AsyncObject, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Poppler__AsyncObject_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: Poppler__AsyncObject, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Poppler__AsyncObject_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Poppler__AsyncObject`
    ///
    /// ` callback: *const fn (self: Poppler__AsyncObject, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: Poppler__AsyncObject, callback: *const fn (Poppler__AsyncObject, QMetaMethod) callconv(.c) void) void {
        qtc.Poppler__AsyncObject_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    pub fn sender(self: Poppler__AsyncObject) QObject {
        return .{ .ptr = qtc.Poppler__AsyncObject_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    pub fn superSender(self: Poppler__AsyncObject) QObject {
        return .{ .ptr = qtc.Poppler__AsyncObject_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Poppler__AsyncObject`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: Poppler__AsyncObject, callback: *const fn () callconv(.c) QObject) void {
        qtc.Poppler__AsyncObject_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    pub fn senderSignalIndex(self: Poppler__AsyncObject) i32 {
        return qtc.Poppler__AsyncObject_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    pub fn superSenderSignalIndex(self: Poppler__AsyncObject) i32 {
        return qtc.Poppler__AsyncObject_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Poppler__AsyncObject`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: Poppler__AsyncObject, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__AsyncObject_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: Poppler__AsyncObject, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Poppler__AsyncObject_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: Poppler__AsyncObject, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Poppler__AsyncObject_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Poppler__AsyncObject`
    ///
    /// ` callback: *const fn (self: Poppler__AsyncObject, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: Poppler__AsyncObject, callback: *const fn (Poppler__AsyncObject, [*:0]const u8) callconv(.c) i32) void {
        qtc.Poppler__AsyncObject_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: Poppler__AsyncObject, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Poppler__AsyncObject_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: Poppler__AsyncObject, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Poppler__AsyncObject_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Poppler__AsyncObject`
    ///
    /// ` callback: *const fn (self: Poppler__AsyncObject, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: Poppler__AsyncObject, callback: *const fn (Poppler__AsyncObject, QMetaMethod) callconv(.c) bool) void {
        qtc.Poppler__AsyncObject_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    /// ` callback: *const fn (self: Poppler__AsyncObject, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: Poppler__AsyncObject, callback: *const fn (Poppler__AsyncObject, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1AsyncObject.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__AsyncObject `
    ///
    pub fn delete(self: Poppler__AsyncObject) void {
        qtc.Poppler__AsyncObject_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
pub const Poppler__FormFieldSignature = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__FormFieldSignature,

    pub const _is_Poppler__FormFieldSignature = {};
    pub const _is_Poppler__FormField = {};

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldSignature `
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.FormType `
    ///
    pub fn type0(self: Poppler__FormFieldSignature) i32 {
        return qtc.Poppler__FormFieldSignature_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signatureType` instead
    ///
    pub const SignatureType = signatureType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldSignature `
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.SignatureType `
    ///
    pub fn signatureType(self: Poppler__FormFieldSignature) i32 {
        return qtc.Poppler__FormFieldSignature_SignatureType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `validate` instead
    ///
    pub const Validate = validate;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldSignature `
    ///
    /// ` opt: poppler_form_enums.ValidateOptions `
    ///
    pub fn validate(self: Poppler__FormFieldSignature, opt: i32) Poppler__SignatureValidationInfo {
        return .{ .ptr = qtc.Poppler__FormFieldSignature_Validate(@ptrCast(self.ptr), @bitCast(opt)) };
    }

    /// ### DEPRECATED: Use `validate2` instead
    ///
    pub const Validate2 = validate2;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldSignature `
    ///
    /// ` opt: i32 `
    ///
    /// ` validationTime: QDateTime `
    ///
    pub fn validate2(self: Poppler__FormFieldSignature, opt: i32, validationTime: anytype) Poppler__SignatureValidationInfo {
        comptime _ = @TypeOf(validationTime)._is_QDateTime;
        return .{ .ptr = qtc.Poppler__FormFieldSignature_Validate2(@ptrCast(self.ptr), @bitCast(opt), @ptrCast(validationTime.ptr)) };
    }

    /// ### DEPRECATED: Use `validateResult` instead
    ///
    pub const ValidateResult = validateResult;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldSignature `
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.CertificateStatus `
    ///
    pub fn validateResult(self: Poppler__FormFieldSignature) i32 {
        return qtc.Poppler__FormFieldSignature_ValidateResult(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sign` instead
    ///
    pub const Sign = sign;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldSignature `
    ///
    /// ` outputFileName: []const u8 `
    ///
    /// ` data: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.SigningResult `
    ///
    pub fn sign(self: Poppler__FormFieldSignature, outputFileName: []const u8, data: anytype) i32 {
        const outputFileName_str = qtc.libqt_string{
            .len = outputFileName.len,
            .data = outputFileName.ptr,
        };
        comptime _ = @TypeOf(data)._is_Poppler__PDFConverter__NewSignatureData;
        return qtc.Poppler__FormFieldSignature_Sign(@ptrCast(self.ptr), outputFileName_str, @ptrCast(data.ptr));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldSignature `
    ///
    pub fn rect(self: Poppler__FormFieldSignature) QRectF {
        return .{ .ptr = qtc.Poppler__FormField_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldSignature `
    ///
    pub fn id(self: Poppler__FormFieldSignature) i32 {
        return qtc.Poppler__FormField_Id(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldSignature `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: Poppler__FormFieldSignature, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormField_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__FormFieldSignature.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldSignature `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: Poppler__FormFieldSignature, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.Poppler__FormField_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `fullyQualifiedName` instead
    ///
    pub const FullyQualifiedName = fullyQualifiedName;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldSignature `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fullyQualifiedName(self: Poppler__FormFieldSignature, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormField_FullyQualifiedName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__FormFieldSignature.fullyQualifiedName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `uiName` instead
    ///
    pub const UiName = uiName;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldSignature `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn uiName(self: Poppler__FormFieldSignature, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormField_UiName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__FormFieldSignature.uiName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isReadOnly` instead
    ///
    pub const IsReadOnly = isReadOnly;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldSignature `
    ///
    pub fn isReadOnly(self: Poppler__FormFieldSignature) bool {
        return qtc.Poppler__FormField_IsReadOnly(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReadOnly` instead
    ///
    pub const SetReadOnly = setReadOnly;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldSignature `
    ///
    /// ` value: bool `
    ///
    pub fn setReadOnly(self: Poppler__FormFieldSignature, value: bool) void {
        qtc.Poppler__FormField_SetReadOnly(@ptrCast(self.ptr), value);
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldSignature `
    ///
    pub fn isVisible(self: Poppler__FormFieldSignature) bool {
        return qtc.Poppler__FormField_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldSignature `
    ///
    /// ` value: bool `
    ///
    pub fn setVisible(self: Poppler__FormFieldSignature, value: bool) void {
        qtc.Poppler__FormField_SetVisible(@ptrCast(self.ptr), value);
    }

    /// ### DEPRECATED: Use `isPrintable` instead
    ///
    pub const IsPrintable = isPrintable;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldSignature `
    ///
    pub fn isPrintable(self: Poppler__FormFieldSignature) bool {
        return qtc.Poppler__FormField_IsPrintable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPrintable` instead
    ///
    pub const SetPrintable = setPrintable;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldSignature `
    ///
    /// ` value: bool `
    ///
    pub fn setPrintable(self: Poppler__FormFieldSignature, value: bool) void {
        qtc.Poppler__FormField_SetPrintable(@ptrCast(self.ptr), value);
    }

    /// ### DEPRECATED: Use `activationAction` instead
    ///
    pub const ActivationAction = activationAction;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldSignature `
    ///
    pub fn activationAction(self: Poppler__FormFieldSignature) Poppler__Link {
        return .{ .ptr = qtc.Poppler__FormField_ActivationAction(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `additionalAction` instead
    ///
    pub const AdditionalAction = additionalAction;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldSignature `
    ///
    /// ` typeVal: poppler_form_enums.AdditionalActionType `
    ///
    pub fn additionalAction(self: Poppler__FormFieldSignature, typeVal: i32) Poppler__Link {
        return .{ .ptr = qtc.Poppler__FormField_AdditionalAction(@ptrCast(self.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `additionalAction2` instead
    ///
    pub const AdditionalAction2 = additionalAction2;

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FormFieldSignature `
    ///
    /// ` typeVal: poppler_annotation_enums.AdditionalActionType `
    ///
    pub fn additionalAction2(self: Poppler__FormFieldSignature, typeVal: i32) Poppler__Link {
        return .{ .ptr = qtc.Poppler__FormField_AdditionalAction2(@ptrCast(self.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__FormFieldSignature `
    ///
    pub fn delete(self: Poppler__FormFieldSignature) void {
        qtc.Poppler__FormFieldSignature_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
pub const Poppler = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler,

    pub const _is_Poppler = {};

    /// ### DEPRECATED: Use `availableCryptoSignBackends` instead
    ///
    pub const AvailableCryptoSignBackends = availableCryptoSignBackends;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []poppler_form_enums.CryptoSignBackend `
    ///
    pub fn availableCryptoSignBackends(allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.Poppler_AvailableCryptoSignBackends();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("Poppler.availableCryptoSignBackends: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `activeCryptoSignBackend` instead
    ///
    pub const ActiveCryptoSignBackend = activeCryptoSignBackend;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.CryptoSignBackend ` (Returns -1 for an invalid value)
    ///
    pub fn activeCryptoSignBackend() i32 {
        return qtc.Poppler_ActiveCryptoSignBackend();
    }

    /// ### DEPRECATED: Use `setActiveCryptoSignBackend` instead
    ///
    pub const SetActiveCryptoSignBackend = setActiveCryptoSignBackend;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` backend: poppler_form_enums.CryptoSignBackend `
    ///
    pub fn setActiveCryptoSignBackend(backend: i32) bool {
        return qtc.Poppler_SetActiveCryptoSignBackend(@bitCast(backend));
    }

    /// ### DEPRECATED: Use `hasCryptoSignBackendFeature` instead
    ///
    pub const HasCryptoSignBackendFeature = hasCryptoSignBackendFeature;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: poppler_form_enums.CryptoSignBackend `
    ///
    /// ` param2: poppler_form_enums.CryptoSignBackendFeature `
    ///
    pub fn hasCryptoSignBackendFeature(param1: i32, param2: i32) bool {
        return qtc.Poppler_HasCryptoSignBackendFeature(@bitCast(param1), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `hasNSSSupport` instead
    ///
    pub const HasNSSSupport = hasNSSSupport;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
    ///
    pub fn hasNSSSupport() bool {
        return qtc.Poppler_HasNSSSupport();
    }

    /// ### DEPRECATED: Use `getAvailableSigningCertificates` instead
    ///
    pub const GetAvailableSigningCertificates = getAvailableSigningCertificates;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn getAvailableSigningCertificates(allocator: std.mem.Allocator) []Poppler__CertificateInfo {
        const _arr: qtc.libqt_list = qtc.Poppler_GetAvailableSigningCertificates();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__CertificateInfo, _arr.len) catch @panic("Poppler.getAvailableSigningCertificates: Memory allocation failed");
        const _data_val: [*]QtC.Poppler__CertificateInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `getNSSDir` instead
    ///
    pub const GetNSSDir = getNSSDir;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn getNSSDir(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler_GetNSSDir();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler.getNSSDir: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setNSSDir` instead
    ///
    pub const SetNSSDir = setNSSDir;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` pathURL: []const u8 `
    ///
    pub fn setNSSDir(pathURL: []const u8) void {
        const pathURL_str = qtc.libqt_string{
            .len = pathURL.len,
            .data = pathURL.ptr,
        };
        qtc.Poppler_SetNSSDir(pathURL_str);
    }

    /// ### DEPRECATED: Use `setNSSPasswordCallback` instead
    ///
    pub const SetNSSPasswordCallback = setNSSPasswordCallback;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` f: *const fn (funcparam1: [*:0]const u8) callconv(.c) qtc.libqt_string `
    ///
    pub fn setNSSPasswordCallback(f: *const fn ([*:0]const u8) callconv(.c) qtc.libqt_string) void {
        qtc.Poppler_SetNSSPasswordCallback(@bitCast(@intFromPtr(f)));
    }

    /// ### DEPRECATED: Use `setPgpSignaturesAllowed` instead
    ///
    pub const SetPgpSignaturesAllowed = setPgpSignaturesAllowed;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allowed: bool `
    ///
    pub fn setPgpSignaturesAllowed(allowed: bool) void {
        qtc.Poppler_SetPgpSignaturesAllowed(allowed);
    }

    /// ### DEPRECATED: Use `arePgpSignaturesAllowed` instead
    ///
    pub const ArePgpSignaturesAllowed = arePgpSignaturesAllowed;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
    ///
    pub fn arePgpSignaturesAllowed() bool {
        return qtc.Poppler_ArePgpSignaturesAllowed();
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
pub const enums = struct {
    pub const CryptoSignBackend = enum {
        pub const NSS: i32 = 0;
        pub const GPG: i32 = 1;
    };

    pub const CryptoSignBackendFeature = enum {
        pub const BackendAsksPassphrase: i32 = 0;
    };

    pub const FormType = enum {
        pub const FormButton: i32 = 0;
        pub const FormText: i32 = 1;
        pub const FormChoice: i32 = 2;
        pub const FormSignature: i32 = 3;
    };

    pub const AdditionalActionType = enum {
        pub const FieldModified: i32 = 0;
        pub const FormatField: i32 = 1;
        pub const ValidateField: i32 = 2;
        pub const CalculateField: i32 = 3;
    };

    pub const ButtonType = enum {
        pub const Push: i32 = 0;
        pub const CheckBox: i32 = 1;
        pub const Radio: i32 = 2;
    };

    pub const TextType = enum {
        pub const Normal: i32 = 0;
        pub const Multiline: i32 = 1;
        pub const FileSelect: i32 = 2;
    };

    pub const ChoiceType = enum {
        pub const ComboBox: i32 = 0;
        pub const ListBox: i32 = 1;
    };

    pub const PublicKeyType = enum {
        pub const RsaKey: i32 = 0;
        pub const DsaKey: i32 = 1;
        pub const EcKey: i32 = 2;
        pub const OtherKey: i32 = 3;
    };

    pub const KeyUsageExtension = enum {
        pub const KuDigitalSignature: i32 = 128;
        pub const KuNonRepudiation: i32 = 64;
        pub const KuKeyEncipherment: i32 = 32;
        pub const KuDataEncipherment: i32 = 16;
        pub const KuKeyAgreement: i32 = 8;
        pub const KuKeyCertSign: i32 = 4;
        pub const KuClrSign: i32 = 2;
        pub const KuEncipherOnly: i32 = 1;
        pub const KuNone: i32 = 0;
    };

    pub const EntityInfoKey = enum {
        pub const CommonName: i32 = 0;
        pub const DistinguishedName: i32 = 1;
        pub const EmailAddress: i32 = 2;
        pub const Organization: i32 = 3;
    };

    pub const CertificateType = enum {
        pub const X509: i32 = 0;
        pub const PGP: i32 = 1;
    };

    pub const KeyLocation = enum {
        pub const Unknown: i32 = 0;
        pub const Other: i32 = 1;
        pub const Computer: i32 = 2;
        pub const HardwareToken: i32 = 3;
    };

    pub const SignatureStatus = enum {
        pub const SignatureValid: i32 = 0;
        pub const SignatureInvalid: i32 = 1;
        pub const SignatureDigestMismatch: i32 = 2;
        pub const SignatureDecodingError: i32 = 3;
        pub const SignatureGenericError: i32 = 4;
        pub const SignatureNotFound: i32 = 5;
        pub const SignatureNotVerified: i32 = 6;
    };

    pub const CertificateStatus = enum {
        pub const CertificateTrusted: i32 = 0;
        pub const CertificateUntrustedIssuer: i32 = 1;
        pub const CertificateUnknownIssuer: i32 = 2;
        pub const CertificateRevoked: i32 = 3;
        pub const CertificateExpired: i32 = 4;
        pub const CertificateGenericError: i32 = 5;
        pub const CertificateNotVerified: i32 = 6;
        pub const CertificateVerificationInProgress: i32 = 7;
    };

    pub const HashAlgorithm = enum {
        pub const HashAlgorithmUnknown: i32 = 0;
        pub const HashAlgorithmMd2: i32 = 1;
        pub const HashAlgorithmMd5: i32 = 2;
        pub const HashAlgorithmSha1: i32 = 3;
        pub const HashAlgorithmSha256: i32 = 4;
        pub const HashAlgorithmSha384: i32 = 5;
        pub const HashAlgorithmSha512: i32 = 6;
        pub const HashAlgorithmSha224: i32 = 7;
    };

    pub const SignatureType = enum {
        pub const UnknownSignatureType: i32 = 0;
        pub const AdbePkcs7sha1: i32 = 1;
        pub const AdbePkcs7detached: i32 = 2;
        pub const EtsiCAdESdetached: i32 = 3;
        pub const UnsignedSignature: i32 = 4;
        pub const G10cPgpSignatureDetached: i32 = 5;
    };

    pub const ValidateOptions = enum {
        pub const ValidateVerifyCertificate: i32 = 1;
        pub const ValidateForceRevalidation: i32 = 2;
        pub const ValidateWithoutOCSPRevocationCheck: i32 = 4;
        pub const ValidateUseAIACertFetch: i32 = 8;
    };

    pub const SigningResult = enum {
        pub const FieldAlreadySigned: i32 = 0;
        pub const GenericSigningError: i32 = 1;
        pub const SigningSuccess: i32 = 2;
        pub const InternalError: i32 = 3;
        pub const KeyMissing: i32 = 4;
        pub const WriteFailed: i32 = 5;
        pub const UserCancelled: i32 = 6;
        pub const BadPassphrase: i32 = 7;
    };
};
